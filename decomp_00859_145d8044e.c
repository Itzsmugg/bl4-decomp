// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d8044e FUN_145d8044e body=88 status=ok
// SIG undefined FUN_145d8044e(void)

void FUN_145d8044e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_145d804a6(param_1 + 0x350);
  if (cVar2 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) {
      return;
    }
    plVar1 = *(longlong **)(lVar3 + 0x218);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d80490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xb0))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145d804a6 FUN_145d804a6 body=136 status=ok
// SIG undefined FUN_145d804a6(void)

undefined8 FUN_145d804a6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Buf2;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *_Buf1;
  
  if ((param_2 < 0x24) && (uVar1 = *(uint *)(param_3 + 1), 0 < (int)uVar1)) {
    uVar4 = uVar1 + param_2;
    if (0x23 < uVar4) {
      uVar4 = 0x24;
    }
    uVar2 = 0x24 - param_2;
    if (uVar1 < 0x24 - param_2) {
      uVar2 = uVar1;
    }
    if ((int)param_1[1] < (int)uVar4) {
      FUN_144aa29e6(param_1,uVar4,1);
    }
    _Buf2 = (void *)*param_3;
    _Buf1 = (void *)((ulonglong)param_2 * 4 + *param_1);
    iVar3 = memcmp(_Buf1,_Buf2,(ulonglong)(uVar2 << 2));
    if (iVar3 != 0) {
      memcpy(_Buf1,_Buf2,(ulonglong)(uVar2 << 2));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145d8052e FUN_145d8052e body=261 status=ok
// SIG undefined FUN_145d8052e(void)

undefined8 *
FUN_145d8052e(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_145d80634(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d80634 FUN_145d80634 body=423 status=ok
// SIG undefined FUN_145d80634(void)

void FUN_145d80634(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145d8070a:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c60d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d8070a;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c60d0;
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
                    /* WARNING: Could not recover jumptable at 0x000145d807c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d807dc FUN_145d807dc body=323 status=ok
// SIG undefined FUN_145d807dc(void)

undefined4 * FUN_145d807dc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_145d8098e(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1456fcfdc(local_38,*param_3);
  *(undefined8 *)(local_38 + 0x88) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 0x90) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 0x98) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = *(uint *)(local_38 + 0x84);
  cVar3 = FUN_145d80920(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
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
      *(uint *)(local_38 + 0x9c) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0x98) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d80a7e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d80920 FUN_145d80920 body=109 status=ok
// SIG undefined FUN_145d80920(void)

undefined8 FUN_145d80920(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_144a8dc10(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0xa0 + *param_1);
    FUN_145a35ed4(_Dst);
    memmove(_Dst,param_3,0x98);
    FUN_146950e76(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145d8098e FUN_145d8098e body=239 status=ok
// SIG undefined FUN_145d8098e(void)

int * FUN_145d8098e(longlong *param_1,int *param_2)

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
      FUN_1413d87fe(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 145d80a7e FUN_145d80a7e body=446 status=ok
// SIG undefined FUN_145d80a7e(void)

void FUN_145d80a7e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xa0;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x84 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x9c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x98 + lVar7) =
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



// FUNCTION 145d80c3e FUN_145d80c3e body=177 status=ok
// SIG undefined FUN_145d80c3e(void)

void FUN_145d80c3e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x1d8);
  if ((cVar1 != '\0') &&
     (lVar2 = FUN_14479d2ce(param_1 + 0x1d8), *(char *)(lVar2 + 0x178) != '\x03')) {
    cVar1 = *(char *)(param_2 + 0x218);
    if (cVar1 != '\a') {
      if (cVar1 == '\f') {
        param_1 = param_1 + 0x18;
      }
      else {
        if (cVar1 == '\n') {
          FUN_141069dd4(param_1 + 0x30,param_2);
          return;
        }
        if (cVar1 != '\v') {
          return;
        }
        param_1 = param_1 + 0x48;
      }
      FUN_141165eb6(param_1,param_2 + 0x200);
      return;
    }
    FUN_14154a4ca(param_1,param_2,param_2 + 0x208,*(undefined4 *)(param_2 + 0x210),
                  *(undefined1 *)(param_2 + 0x214));
  }
  return;
}



// FUNCTION 145d80cf0 FUN_145d80cf0 body=192 status=ok
// SIG undefined FUN_145d80cf0(void)

bool FUN_145d80cf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
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
    local_48 = param_5;
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



// FUNCTION 145d80db2 FUN_145d80db2 body=441 status=ok
// SIG undefined FUN_145d80db2(void)

void FUN_145d80db2(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = FUN_1447210f0();
  lVar4 = FUN_1447210f0();
  if (lVar3 != lVar4) {
    return;
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar5 = FUN_144a7b4ca();
    lVar4 = *(longlong *)(param_1 + 0x398);
    if (lVar4 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0)) goto LAB_145d80e3f;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar4;
        }
        goto LAB_145d80e3f;
      }
    }
  }
  lVar6 = 0;
LAB_145d80e3f:
  if (lVar6 != param_2) {
    return;
  }
  lVar4 = FUN_1401e6c61();
  if (lVar4 == param_3) {
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x170) != 0)) {
      lVar4 = FUN_140425b9a();
      lVar3 = *(longlong *)(lVar3 + 0x170);
      if (((lVar3 != 0) &&
          (((lVar4 != 0 && (lVar5 = *(longlong *)(lVar3 + 0x10), lVar5 != 0)) &&
           (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        FUN_145979794(lVar3,param_1);
      }
    }
    if (*(char *)(param_1 + 0x178) != '\x03') {
      return;
    }
    if (*(longlong *)(param_1 + 0xf48) == 0) {
      return;
    }
    lVar3 = FUN_1407afa82();
    if ((lVar3 == 0) ||
       ((*(char *)(lVar3 + 0xb2c) == '\x01' &&
        (iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x390) + 0x18))(lVar3 + 0x390),
        (longlong)iVar2 != param_5)))) {
      FUN_148db94ee(param_1);
    }
    if (param_5 <= param_4) {
      return;
    }
    FUN_1460d84f0(*(undefined8 *)(param_1 + 0xf48),param_5 & 0xffffffff);
    return;
  }
  lVar3 = FUN_140fcc5c6();
  if (lVar3 != param_3) {
    return;
  }
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  if (param_5 <= param_4) {
    return;
  }
  if (*(longlong *)(param_1 + 0xf48) == 0) {
    return;
  }
  FUN_145d80f6c(*(longlong *)(param_1 + 0xf48),param_5 & 0xffffffff);
  return;
}



// FUNCTION 145d80f6c FUN_145d80f6c body=91 status=ok
// SIG undefined FUN_145d80f6c(void)

void FUN_145d80f6c(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba7c08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d80fc8 FUN_145d80fc8 body=148 status=ok
// SIG undefined FUN_145d80fc8(void)

void FUN_145d80fc8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d8105e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8105e FUN_145d8105e body=32 status=ok
// SIG undefined FUN_145d8105e(void)

void FUN_145d8105e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d4a076();
  if (lVar1 != 0) {
    FUN_145d8107e(lVar1);
    return;
  }
  return;
}



// FUNCTION 145d8107e FUN_145d8107e body=111 status=ok
// SIG undefined FUN_145d8107e(void)

void FUN_145d8107e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x168) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x168) + 0x168), lVar2 != 0)) {
    lVar3 = FUN_144a5dd5e();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar3 + 0x30)) {
      lVar2 = *(longlong *)(lVar2 + 0x2210);
      if (lVar2 == 0) {
        return;
      }
      if (*(char *)(lVar2 + 0x7e) == '\x01') {
        FUN_14143b896(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2),param_3,param_4,unaff_RSI);
        *(undefined1 *)(lVar2 + 0x7c) = 1;
      }
      return;
    }
  }
  return;
}



// FUNCTION 145d810f8 FUN_145d810f8 body=204 status=ok
// SIG undefined FUN_145d810f8(void)

void FUN_145d810f8(longlong param_1)

{
  FUN_14147ef9c(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_14147ef9c(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_14147ef9c(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_145d811c4(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145d811fa(param_1);
  return;
}



// FUNCTION 145d811c4 FUN_145d811c4 body=53 status=ok
// SIG undefined FUN_145d811c4(void)

void FUN_145d811c4(longlong *param_1)

{
  FUN_145d8138a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d811fa FUN_145d811fa body=53 status=ok
// SIG undefined FUN_145d811fa(void)

void FUN_145d811fa(longlong *param_1)

{
  FUN_145d81230();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d81230 FUN_145d81230 body=344 status=ok
// SIG undefined FUN_145d81230(void)

void FUN_145d81230(longlong *param_1)

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
      FUN_140e9119a(*local_68 + (longlong)iStack_4c * 0x1c8 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_148e21e16(param_1);
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



// FUNCTION 145d8138a FUN_145d8138a body=345 status=ok
// SIG undefined FUN_145d8138a(void)

void FUN_145d8138a(longlong *param_1)

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



// FUNCTION 145d814e4 FUN_145d814e4 body=446 status=ok
// SIG undefined FUN_145d814e4(void)

void FUN_145d814e4(longlong *param_1,double *param_2,undefined8 *param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  double *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  float local_a0;
  code *local_98;
  double **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = param_4;
  cVar2 = (**(code **)(*param_1 + 0x480))(param_1,param_4);
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
    cVar2 = FUN_144a7f202(uVar3,DAT_14c9abbf0);
    if (cVar2 == '\0') {
      local_58 = param_3[2];
      local_68 = *param_3;
      uStack_60 = param_3[1];
      local_88 = *(undefined4 *)param_2;
      uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_80 = *(undefined4 *)(param_2 + 1);
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_78 = param_2[2];
      FUN_145d816a4(param_1,&local_88,&local_68,param_4);
    }
  }
  lVar4 = FUN_144a8dd5c();
  lVar5 = param_1[0x16];
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  if (*(char *)(lVar4 + 0x3c) == '\x01') {
    fVar6 = 1.0 / (float)*(int *)(lVar4 + 0x40);
  }
  else {
    fVar6 = 1.0;
    if (lVar5 != 0) {
      fVar6 = 1.0;
      if (1e-08 < *(float *)(lVar5 + 0x6f4)) {
        fVar6 = *(float *)(lVar5 + 0x6f4);
      }
    }
    dVar1 = (double)(1.0 / fVar6);
    *param_2 = *param_2 * dVar1;
    param_2[1] = param_2[1] * dVar1;
    param_2[2] = dVar1 * param_2[2];
  }
  uVar3 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
  local_90 = &local_b8;
  local_a8 = &local_48;
  local_98 = FUN_143ce92bc;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a0 = fVar6;
  FUN_1408d6bd2(uVar3,DAT_14c9abbf8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d816a4 FUN_145d816a4 body=76 status=ok
// SIG undefined FUN_145d816a4(void)

void FUN_145d816a4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_145d816f0(lVar1,param_2,param_3,0xffffffffffffffff,0);
  }
  return;
}



// FUNCTION 145d816f0 FUN_145d816f0 body=297 status=ok
// SIG undefined FUN_145d816f0(void)

void FUN_145d816f0(longlong param_1,undefined8 *param_2,undefined4 *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar2 = param_4 < 0xffffffff00000000 && (int)param_4 != -1;
  local_98 = param_2[2];
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  uStack_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  uStack_80 = *(undefined8 *)(param_3 + 4);
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x48,8);
  *local_68 = (longlong)&PTR_FUN_14aa1de60;
  *(undefined4 *)(local_68 + 5) = uStack_88;
  *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_84;
  *(undefined4 *)(local_68 + 6) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)local_68 + 0x34) = uStack_80._4_4_;
  *(undefined4 *)(local_68 + 3) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_68 + 0x1c) = local_98._4_4_;
  *(undefined4 *)(local_68 + 4) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x24) = uStack_8c;
  *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
  *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
  *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a0._4_4_;
  *(bool *)(local_68 + 7) = bVar2;
  local_68[8] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_143622c02;
  }
  local_b8 = local_78;
  FUN_140f482b4(param_1,param_4,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff,
                param_5);
  if (local_78[0] != (code *)0x0) {
    plVar1 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8181a FUN_145d8181a body=218 status=ok
// SIG undefined FUN_145d8181a(void)

void FUN_145d8181a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    else if (lVar3 == 0) goto LAB_145d8188c;
    if (*(int *)(lVar3 + 0x380) != 0) {
      puVar4 = *(undefined8 **)(lVar3 + 0x378);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72((longlong *)(lVar3 + 0x378),0,0,0x10);
        *(undefined4 *)(lVar3 + 0x380) = 0;
      }
    }
  }
LAB_145d8188c:
  *(undefined8 *)(param_1 + 0x558) = 0;
  plVar5 = *(longlong **)(param_1 + 0x560);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x560) = 0;
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
  }
  FUN_145d81956(param_1);
  FUN_145d8191d();
  FUN_145d819c6(param_1);
  return;
}



// FUNCTION 145d818f4 FUN_145d818f4 body=9 status=ok
// SIG undefined FUN_145d818f4(void)

void FUN_145d818f4(longlong param_1)

{
  FUN_145d81a60(param_1 + 0x10);
  return;
}



// FUNCTION 145d818fe FUN_145d818fe body=31 status=ok
// SIG undefined FUN_145d818fe(void)

undefined8 FUN_145d818fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d8191d FUN_145d8191d body=57 status=ok
// SIG undefined FUN_145d8191d(void)

void FUN_145d8191d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbca568 != 0) {
    uVar1 = FUN_1411d204e();
    if (DAT_14cbca568 != 0) {
      FUN_141092d32(uVar1);
    }
    DAT_14cbca568 = 0;
  }
  return;
}



// FUNCTION 145d81956 FUN_145d81956 body=111 status=ok
// SIG undefined FUN_145d81956(void)

void FUN_145d81956(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x480) = 0;
  FUN_1401cb356();
  local_20 = *(undefined8 *)(param_1 + 0x488);
  local_18 = *(longlong *)(param_1 + 0x490);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d819c6 FUN_145d819c6 body=154 status=ok
// SIG undefined FUN_145d819c6(void)

void FUN_145d819c6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_14154a61e();
  iVar1 = *(int *)(param_1 + 0x428);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x420);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      if (DAT_14cb0d2b0 != (longlong *)0x0) {
        (**(code **)(*DAT_14cb0d2b0 + 0x518))(DAT_14cb0d2b0,uVar3);
      }
      FUN_143786bec(uVar3,1,0);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x42c) != 0) {
    FUN_148ab9a5c(param_1 + 0x420);
    return;
  }
  return;
}



// FUNCTION 145d81a60 FUN_145d81a60 body=156 status=ok
// SIG undefined FUN_145d81a60(void)

void FUN_145d81a60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_145ccf0c4();
  FUN_145a12e06(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_145d81afc(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145d81b34(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145d81af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145d81afc FUN_145d81afc body=55 status=ok
// SIG undefined FUN_145d81afc(void)

void FUN_145d81afc(longlong *param_1)

{
  FUN_145a12ff2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d81b34 FUN_145d81b34 body=55 status=ok
// SIG undefined FUN_145d81b34(void)

void FUN_145d81b34(longlong *param_1)

{
  FUN_145a12f8a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d81b76 FUN_145d81b76 body=151 status=ok
// SIG undefined FUN_145d81b76(void)

undefined8 * FUN_145d81b76(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a526e90;
  param_1[5] = &PTR_FUN_14a527190;
  FUN_1412cd7de(param_1 + 0x2e);
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  *(undefined2 *)(param_1 + 0xf8) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x7c2) = 1;
  param_1[0xf9] = &DAT_4030000000000000;
  param_1[0xfa] = &DAT_4030000000000000;
  *(undefined4 *)(param_1 + 0xfb) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0x40000000;
  *(undefined4 *)(param_1 + 0xfc) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = 0x40000000;
  lVar1 = FUN_140bcc93a();
  FUN_1412cc8ca(param_1 + 0x2e,lVar1 + 0x2740);
  return param_1;
}



// FUNCTION 145d81c0e FUN_145d81c0e body=40 status=ok
// SIG undefined FUN_145d81c0e(void)

undefined8 FUN_145d81c0e(undefined8 param_1,int param_2)

{
  FUN_145d81c36();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d81c36 FUN_145d81c36 body=122 status=ok
// SIG undefined FUN_145d81c36(void)

void FUN_145d81c36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a704c80;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d81cbc FUN_145d81cbc body=581 status=ok
// SIG undefined FUN_145d81cbc(void)

undefined8 * FUN_145d81cbc(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b126500;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb0b;
  param_1[0x17] = "gbx_discovery_discoverer_def";
  lVar5 = FUN_145d81f02();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d81d93;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d81d93:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Discoverer Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d81f02 FUN_145d81f02 body=55 status=ok
// SIG undefined FUN_145d81f02(void)

void FUN_145d81f02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ce80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ce80 = FUN_140002ddd(FUN_1464d951b,uVar1,L"GbxDiscoveryDiscovererDef");
  }
  return;
}



// FUNCTION 145d81f44 FUN_145d81f44 body=581 status=ok
// SIG undefined FUN_145d81f44(void)

undefined8 * FUN_145d81f44(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b126940;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb0f;
  param_1[0x17] = "gbx_discovery_generator_def";
  lVar5 = FUN_145d8218a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d8201b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d8201b:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Generator Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8218a FUN_145d8218a body=55 status=ok
// SIG undefined FUN_145d8218a(void)

void FUN_145d8218a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cf48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cf48 = FUN_140002ddd(FUN_1464d981e,uVar1,L"GbxDiscoveryGeneratorDef");
  }
  return;
}



// FUNCTION 145d821cc FUN_145d821cc body=581 status=ok
// SIG undefined FUN_145d821cc(void)

undefined8 * FUN_145d821cc(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b126d80;
  *(undefined4 *)(param_1 + 0x16) = 0xba869f28;
  param_1[0x17] = "gbx_discovery_icon_size_def";
  lVar5 = FUN_145d82412();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d822a3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d822a3:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Icon Size Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d82412 FUN_145d82412 body=55 status=ok
// SIG undefined FUN_145d82412(void)

void FUN_145d82412(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cfd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cfd8 = FUN_140002ddd(FUN_1464d9b07,uVar1,L"GbxDiscoveryIconSizeDef");
  }
  return;
}



// FUNCTION 145d82454 FUN_145d82454 body=581 status=ok
// SIG undefined FUN_145d82454(void)

undefined8 * FUN_145d82454(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b135ea0;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb0d;
  param_1[0x17] = "gbx_discovery_viewable_map_behavior_def";
  lVar5 = FUN_145d8269a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d8252b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d8252b:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Viewable Map Behavior Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8269a FUN_145d8269a body=55 status=ok
// SIG undefined FUN_145d8269a(void)

void FUN_145d8269a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d588 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d588 = FUN_140002ddd(FUN_1464db5bf,uVar1,L"GbxDiscoveryViewableMapBehaviorDef");
  }
  return;
}



// FUNCTION 145d826dc FUN_145d826dc body=581 status=ok
// SIG undefined FUN_145d826dc(void)

undefined8 * FUN_145d826dc(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b145910;
  *(undefined4 *)(param_1 + 0x16) = 0xb7c3684d;
  param_1[0x17] = "gbx_fly_to_actor_config_def";
  lVar5 = FUN_145d82922();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d827b3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d827b3:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Actor.Fly To Actor Config");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d82922 FUN_145d82922 body=55 status=ok
// SIG undefined FUN_145d82922(void)

void FUN_145d82922(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5df60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5df60 = FUN_140002ddd(FUN_1464df12d,uVar1,L"GbxFlyToActorConfigDef");
  }
  return;
}



// FUNCTION 145d82968 FUN_145d82968 body=67 status=ok
// SIG undefined FUN_145d82968(void)

undefined8 * FUN_145d82968(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 145d829b6 FUN_145d829b6 body=581 status=ok
// SIG undefined FUN_145d829b6(void)

undefined8 * FUN_145d829b6(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b2f8e30;
  *(undefined4 *)(param_1 + 0x16) = 0x3d418293;
  param_1[0x17] = "impact_effect_collection";
  lVar5 = FUN_145d82bfc();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d82a8d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d82a8d:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Effects.Impact Collections");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d82bfc FUN_145d82bfc body=55 status=ok
// SIG undefined FUN_145d82bfc(void)

void FUN_145d82bfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb698f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb698f8 = FUN_140002ddd(FUN_146521f9d,uVar1,L"ImpactEffectCollectionDef");
  }
  return;
}



// FUNCTION 145d82c3e FUN_145d82c3e body=581 status=ok
// SIG undefined FUN_145d82c3e(void)

undefined8 * FUN_145d82c3e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37a160;
  *(undefined4 *)(param_1 + 0x16) = 0x7393099c;
  param_1[0x17] = "coordinated_effect_filter";
  lVar5 = FUN_145d82e84();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d82d15;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d82d15:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Coordinated Effects");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d82e84 FUN_145d82e84 body=55 status=ok
// SIG undefined FUN_145d82e84(void)

void FUN_145d82e84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56108 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56108 = FUN_140002ddd(FUN_1464b64e2,uVar1,L"CoordinatedEffectFilterDef");
  }
  return;
}



// FUNCTION 145d82ec6 FUN_145d82ec6 body=581 status=ok
// SIG undefined FUN_145d82ec6(void)

undefined8 * FUN_145d82ec6(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36bcc0;
  *(undefined4 *)(param_1 + 0x16) = 0x3001;
  param_1[0x17] = "healthtype";
  lVar5 = FUN_145d8310c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d82f9d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d82f9d:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Health");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8310c FUN_145d8310c body=55 status=ok
// SIG undefined FUN_145d8310c(void)

void FUN_145d8310c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69718 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69718 = FUN_140002ddd(FUN_14652128c,uVar1,L"HealthTypeDef");
  }
  return;
}



// FUNCTION 145d8314e FUN_145d8314e body=581 status=ok
// SIG undefined FUN_145d8314e(void)

undefined8 * FUN_145d8314e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36c1a0;
  *(undefined4 *)(param_1 + 0x16) = 0x3002;
  param_1[0x17] = "damagetype";
  lVar5 = FUN_145d83394();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d83225;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d83225:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Types");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d83394 FUN_145d83394 body=55 status=ok
// SIG undefined FUN_145d83394(void)

void FUN_145d83394(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56c70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56c70 = FUN_140002ddd(FUN_141847056,uVar1,L"DamageTypeDef");
  }
  return;
}



// FUNCTION 145d833d6 FUN_145d833d6 body=581 status=ok
// SIG undefined FUN_145d833d6(void)

undefined8 * FUN_145d833d6(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b370930;
  *(undefined4 *)(param_1 + 0x16) = 0xb;
  param_1[0x17] = "resource";
  lVar5 = FUN_145d8361c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d834ad;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d834ad:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"General.Resource");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8361c FUN_145d8361c body=55 status=ok
// SIG undefined FUN_145d8361c(void)

void FUN_145d8361c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57bd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57bd0 = FUN_140002ddd(FUN_141848ba1,uVar1,L"GameResourceDef");
  }
  return;
}



// FUNCTION 145d8365e FUN_145d8365e body=581 status=ok
// SIG undefined FUN_145d8365e(void)

undefined8 * FUN_145d8365e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b381320;
  *(undefined4 *)(param_1 + 0x16) = 0x1ef617e0;
  param_1[0x17] = "gore_region";
  lVar5 = FUN_145d838a4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d83735;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d83735:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Gore.Region");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d838a4 FUN_145d838a4 body=55 status=ok
// SIG undefined FUN_145d838a4(void)

void FUN_145d838a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68ee0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68ee0 = FUN_140002ddd(FUN_14651e5fb,uVar1,L"GoreRegionDef");
  }
  return;
}



// FUNCTION 145d838e6 FUN_145d838e6 body=581 status=ok
// SIG undefined FUN_145d838e6(void)

undefined8 * FUN_145d838e6(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b3827c0;
  *(undefined4 *)(param_1 + 0x16) = 0x3006;
  param_1[0x17] = "hit_region";
  lVar5 = FUN_145d83b2c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d839bd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d839bd:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Hit Region");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d83b2c FUN_145d83b2c body=55 status=ok
// SIG undefined FUN_145d83b2c(void)

void FUN_145d83b2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69760 = FUN_140002ddd(FUN_1465213b4,uVar1,L"HitRegionDef");
  }
  return;
}



// FUNCTION 145d83b6e FUN_145d83b6e body=581 status=ok
// SIG undefined FUN_145d83b6e(void)

undefined8 * FUN_145d83b6e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b383fc0;
  *(undefined4 *)(param_1 + 0x16) = 0x3b9cbb9e;
  param_1[0x17] = "criteria_preset";
  lVar5 = FUN_145d83db4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d83c45;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d83c45:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Criteria Preset");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d83db4 FUN_145d83db4 body=55 status=ok
// SIG undefined FUN_145d83db4(void)

void FUN_145d83db4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69f60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69f60 = FUN_140002ddd(FUN_14652438c,uVar1,L"InventoryCriteriaPresetDef");
  }
  return;
}



// FUNCTION 145d83df6 FUN_145d83df6 body=581 status=ok
// SIG undefined FUN_145d83df6(void)

undefined8 * FUN_145d83df6(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b3844c0;
  *(undefined4 *)(param_1 + 0x16) = 0x275c8fdc;
  param_1[0x17] = "criterion_preset";
  lVar5 = FUN_145d8403c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d83ecd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d83ecd:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Criterion Preset");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8403c FUN_145d8403c body=55 status=ok
// SIG undefined FUN_145d8403c(void)

void FUN_145d8403c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69f90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69f90 = FUN_140002ddd(FUN_146524482,uVar1,L"InventoryCriterionPresetDef");
  }
  return;
}



// FUNCTION 145d8407e FUN_145d8407e body=581 status=ok
// SIG undefined FUN_145d8407e(void)

undefined8 * FUN_145d8407e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b392190;
  *(undefined4 *)(param_1 + 0x16) = 0x34002;
  param_1[0x17] = "light_beam";
  lVar5 = FUN_145d842c4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d84155;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d84155:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Projectile.Light Beams");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d842c4 FUN_145d842c4 body=55 status=ok
// SIG undefined FUN_145d842c4(void)

void FUN_145d842c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6aca8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6aca8 = FUN_140002ddd(FUN_1465283fc,uVar1,L"LightBeamDef");
  }
  return;
}



// FUNCTION 145d84306 FUN_145d84306 body=581 status=ok
// SIG undefined FUN_145d84306(void)

undefined8 * FUN_145d84306(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b387bc0;
  *(undefined4 *)(param_1 + 0x16) = 0x34001;
  param_1[0x17] = "light_projectile";
  lVar5 = FUN_145d8454c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d843dd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d843dd:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Projectile.Light Projectiles");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8454c FUN_145d8454c body=55 status=ok
// SIG undefined FUN_145d8454c(void)

void FUN_145d8454c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b0d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b0d0 = FUN_140002ddd(FUN_14652ac02,uVar1,L"LightProjectileDef");
  }
  return;
}



// FUNCTION 145d8458e FUN_145d8458e body=581 status=ok
// SIG undefined FUN_145d8458e(void)

undefined8 * FUN_145d8458e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b388b20;
  *(undefined4 *)(param_1 + 0x16) = 0x7102;
  param_1[0x17] = "melee";
  lVar5 = FUN_145d847d4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d84665;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d84665:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Movement.Melee");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d847d4 FUN_145d847d4 body=55 status=ok
// SIG undefined FUN_145d847d4(void)

void FUN_145d847d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b780 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b780 = FUN_140002ddd(FUN_14652ca81,uVar1,L"MeleeDef");
  }
  return;
}



// FUNCTION 145d84816 FUN_145d84816 body=581 status=ok
// SIG undefined FUN_145d84816(void)

undefined8 * FUN_145d84816(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b38bb10;
  *(undefined4 *)(param_1 + 0x16) = 0x101016;
  param_1[0x17] = "materialevents";
  lVar5 = FUN_145d84a5c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d848ed;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d848ed:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"GbxUI.MaterialAnimation");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d84a5c FUN_145d84a5c body=55 status=ok
// SIG undefined FUN_145d84a5c(void)

void FUN_145d84a5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68788 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68788 = FUN_140002ddd(FUN_14651bbea,uVar1,L"GbxUIMaterialAnimationDataDef");
  }
  return;
}



// FUNCTION 145d84a9e FUN_145d84a9e body=581 status=ok
// SIG undefined FUN_145d84a9e(void)

undefined8 * FUN_145d84a9e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b4795f0;
  *(undefined4 *)(param_1 + 0x16) = 0x101014;
  param_1[0x17] = "uipage";
  lVar5 = FUN_145d84ce4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d84b75;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d84b75:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"GbxUI.Page");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d84ce4 FUN_145d84ce4 body=55 status=ok
// SIG undefined FUN_145d84ce4(void)

void FUN_145d84ce4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92138 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92138 = FUN_140002ddd(FUN_14656c2aa,uVar1,L"GbxUIPageDef");
  }
  return;
}



// FUNCTION 145d84d26 FUN_145d84d26 body=581 status=ok
// SIG undefined FUN_145d84d26(void)

undefined8 * FUN_145d84d26(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b47a750;
  *(undefined4 *)(param_1 + 0x16) = 0x101032;
  param_1[0x17] = "uitooltipdata";
  lVar5 = FUN_145d84f6c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d84dfd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d84dfd:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"GbxUI.ToolTipData");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d84f6c FUN_145d84f6c body=55 status=ok
// SIG undefined FUN_145d84f6c(void)

void FUN_145d84f6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92598 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92598 = FUN_140002ddd(FUN_14656dac6,uVar1,L"TooltipDataDef");
  }
  return;
}



// FUNCTION 145d84fae FUN_145d84fae body=581 status=ok
// SIG undefined FUN_145d84fae(void)

undefined8 * FUN_145d84fae(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b486d30;
  *(undefined4 *)(param_1 + 0x16) = 0x5b1ec67d;
  param_1[0x17] = "crosshair";
  lVar5 = FUN_145d851f4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d85085;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d85085:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Crosshairs");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d851f4 FUN_145d851f4 body=55 status=ok
// SIG undefined FUN_145d851f4(void)

void FUN_145d851f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb932c0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb932c0 = FUN_140002ddd(FUN_146570942,uVar1,L"CrosshairDef");
  }
  return;
}



// FUNCTION 145d85236 FUN_145d85236 body=581 status=ok
// SIG undefined FUN_145d85236(void)

undefined8 * FUN_145d85236(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b4924c0;
  *(undefined4 *)(param_1 + 0x16) = 0x3008;
  param_1[0x17] = "shot_modifier";
  lVar5 = FUN_145d8547c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d8530d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d8530d:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Shot Modifiers");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8547c FUN_145d8547c body=55 status=ok
// SIG undefined FUN_145d8547c(void)

void FUN_145d8547c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb936b0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb936b0 = FUN_140002ddd(FUN_146572088,uVar1,L"ShotModifierDef");
  }
  return;
}



// FUNCTION 145d854b4 FUN_145d854b4 body=237 status=ok
// SIG undefined FUN_145d854b4(void)

void FUN_145d854b4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7a8))(param_1,local_19,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d855a2 FUN_145d855a2 body=86 status=ok
// SIG undefined FUN_145d855a2(void)

void FUN_145d855a2(longlong param_1,byte param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    *(undefined1 *)(param_1 + 0xb51) = 0;
    if (((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) &&
       (plVar1 = *(longlong **)
                  (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                  (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x370))(plVar1,param_3,0,0,1);
    }
  }
  return;
}



// FUNCTION 145d85604 FUN_145d85604 body=581 status=ok
// SIG undefined FUN_145d85604(void)

undefined8 * FUN_145d85604(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b4a7180;
  *(undefined4 *)(param_1 + 0x16) = 0x88205021;
  param_1[0x17] = "recoil";
  lVar5 = FUN_145d8584a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d856db;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d856db:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Weapon Recoils");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8584a FUN_145d8584a body=55 status=ok
// SIG undefined FUN_145d8584a(void)

void FUN_145d8584a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb941a8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb941a8 = FUN_140002ddd(FUN_1465759e6,uVar1,L"WeaponRecoilDef");
  }
  return;
}



// FUNCTION 145d85882 FUN_145d85882 body=124 status=ok
// SIG undefined FUN_145d85882(void)

void FUN_145d85882(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 145d85900 FUN_145d85900 body=118 status=ok
// SIG undefined FUN_145d85900(void)

void FUN_145d85900(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e0230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e01c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 145d85976 FUN_145d85976 body=9 status=ok
// SIG undefined FUN_145d85976(void)

void FUN_145d85976(longlong param_1)

{
  FUN_145d85980(param_1 + 0x10);
  return;
}



// FUNCTION 145d85980 FUN_145d85980 body=72 status=ok
// SIG undefined FUN_145d85980(void)

void FUN_145d85980(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e9ba0;
  FUN_1449db362(param_1 + 0x29);
  FUN_14124efea(param_1 + 5);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145d859c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145d859d4 FUN_145d859d4 body=581 status=ok
// SIG undefined FUN_145d859d4(void)

undefined8 * FUN_145d859d4(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b5e7e10;
  *(undefined4 *)(param_1 + 0x16) = 0x25ed75a7;
  param_1[0x17] = "damage_affinity";
  lVar5 = FUN_145d85c1a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d85aab;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d85aab:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Affinity");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d85c1a FUN_145d85c1a body=55 status=ok
// SIG undefined FUN_145d85c1a(void)

void FUN_145d85c1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0270 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0270 = FUN_140002ddd(FUN_1465a8be8,uVar1,L"DamageAffinityDef");
  }
  return;
}



// FUNCTION 145d85c5c FUN_145d85c5c body=581 status=ok
// SIG undefined FUN_145d85c5c(void)

undefined8 * FUN_145d85c5c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b694c90;
  *(undefined4 *)(param_1 + 0x16) = 0x4014;
  param_1[0x17] = "inventory_container";
  lVar5 = FUN_145d85ea2();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d85d33;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d85d33:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Container");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d85ea2 FUN_145d85ea2 body=55 status=ok
// SIG undefined FUN_145d85ea2(void)

void FUN_145d85ea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4ee0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4ee0 = FUN_140002ddd(FUN_1465c1110,uVar1,L"InventoryContainerDef");
  }
  return;
}



// FUNCTION 145d85ee4 FUN_145d85ee4 body=581 status=ok
// SIG undefined FUN_145d85ee4(void)

undefined8 * FUN_145d85ee4(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b6950d0;
  *(undefined4 *)(param_1 + 0x16) = 0x6facaeb2;
  param_1[0x17] = "equipment";
  lVar5 = FUN_145d8612a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d85fbb;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d85fbb:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Equipment");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8612a FUN_145d8612a body=55 status=ok
// SIG undefined FUN_145d8612a(void)

void FUN_145d8612a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4f28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4f28 = FUN_140002ddd(FUN_1465c1238,uVar1,L"InventoryEquipmentDef");
  }
  return;
}



// FUNCTION 145d8616c FUN_145d8616c body=581 status=ok
// SIG undefined FUN_145d8616c(void)

undefined8 * FUN_145d8616c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b6b0da0;
  *(undefined4 *)(param_1 + 0x16) = 0x20944616;
  param_1[0x17] = "luck_category";
  lVar5 = FUN_145d863b2();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d86243;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d86243:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Luck.Luck Category");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d863b2 FUN_145d863b2 body=55 status=ok
// SIG undefined FUN_145d863b2(void)

void FUN_145d863b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba55e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba55e0 = FUN_140002ddd(FUN_1465c2ff2,uVar1,L"LuckCategoryDef");
  }
  return;
}



// FUNCTION 145d863f4 FUN_145d863f4 body=581 status=ok
// SIG undefined FUN_145d863f4(void)

undefined8 * FUN_145d863f4(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b6b3d20;
  *(undefined4 *)(param_1 + 0x16) = 0x101033;
  param_1[0x17] = "uidialogbox";
  lVar5 = FUN_145d8663a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d864cb;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d864cb:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"OakUI.DialogBox");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8663a FUN_145d8663a body=55 status=ok
// SIG undefined FUN_145d8663a(void)

void FUN_145d8663a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6178 = FUN_140002ddd(FUN_1465c60b0,uVar1,L"DialogBoxDef");
  }
  return;
}



// FUNCTION 145d86672 FUN_145d86672 body=40 status=ok
// SIG undefined FUN_145d86672(void)

undefined8 FUN_145d86672(undefined8 param_1,int param_2)

{
  FUN_145d8669a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d8669a FUN_145d8669a body=122 status=ok
// SIG undefined FUN_145d8669a(void)

void FUN_145d8669a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6c70a0;
  param_1[5] = &PTR_FUN_14b6c7710;
  param_1[6] = &PTR_LAB_14b6c7750;
  plVar3 = (longlong *)param_1[0x11a];
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
  FUN_14076ba26(param_1 + 0xc9);
  FUN_14076ba26(param_1 + 0x7a);
  FUN_140bcca3c(param_1);
  return;
}



// FUNCTION 145d86720 FUN_145d86720 body=581 status=ok
// SIG undefined FUN_145d86720(void)

undefined8 * FUN_145d86720(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b741bd0;
  *(undefined4 *)(param_1 + 0x16) = 0x7b710836;
  param_1[0x17] = "echo_location_data";
  lVar5 = FUN_145d86966();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d867f7;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d867f7:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Echo.Echo Location");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d86966 FUN_145d86966 body=55 status=ok
// SIG undefined FUN_145d86966(void)

void FUN_145d86966(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9fa8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9fa8 = FUN_140002ddd(FUN_1465d68fa,uVar1,L"OakEchoLocationDataDef");
  }
  return;
}



// FUNCTION 145d8699e FUN_145d8699e body=37 status=ok
// SIG undefined FUN_145d8699e(void)

void FUN_145d8699e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d869c4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d869c4 FUN_145d869c4 body=44 status=ok
// SIG undefined FUN_145d869c4(void)

ulonglong FUN_145d869c4(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_1459b6cd4(lVar2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145d869fc FUN_145d869fc body=581 status=ok
// SIG undefined FUN_145d869fc(void)

undefined8 * FUN_145d869fc(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b950c30;
  *(undefined4 *)(param_1 + 0x16) = 0x1ea5d050;
  param_1[0x17] = "weapon_manufacturer_mod";
  lVar5 = FUN_145d86c42();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d86ad3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d86ad3:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Weapon Manufacturer Mods");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d86c42 FUN_145d86c42 body=55 status=ok
// SIG undefined FUN_145d86c42(void)

void FUN_145d86c42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc12b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc12b0 = FUN_140002ddd(FUN_14661af03,uVar1,L"WeaponManufacturerModDef");
  }
  return;
}



// FUNCTION 145d86c7a FUN_145d86c7a body=33 status=ok
// SIG undefined FUN_145d86c7a(void)

void FUN_145d86c7a(longlong param_1)

{
  FUN_1412dad4c();
                    /* WARNING: Could not recover jumptable at 0x000145d86c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
  return;
}



// FUNCTION 145d86c9c FUN_145d86c9c body=372 status=ok
// SIG undefined FUN_145d86c9c(void)

void FUN_145d86c9c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_1400d7050();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_14480f766(lVar2 + 0x34d8);
      }
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14480f766(lVar2 + 0x2238);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_14480f766(lVar2 + 0x31d0);
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14480f766(lVar2 + 0x2320);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
    if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0x30), lVar2 != 0)) &&
       (lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0)) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      puVar4 = (undefined8 *)(param_1 + 0x38);
      lVar3 = FUN_144a61814(uVar1,puVar4);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar1,*puVar4);
      }
      puVar5 = (undefined8 *)(param_1 + 0x40);
      *puVar4 = 0;
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      lVar2 = FUN_144a61814(uVar1,puVar5);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,*puVar5);
      }
      *puVar5 = 0;
    }
  }
  return;
}



// FUNCTION 145d86e10 FUN_145d86e10 body=38 status=ok
// SIG undefined FUN_145d86e10(void)

undefined8 FUN_145d86e10(undefined8 param_1,int param_2)

{
  FUN_145d86e36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d86e36 FUN_145d86e36 body=124 status=ok
// SIG undefined FUN_145d86e36(void)

void FUN_145d86e36(undefined8 *param_1)

{
  FUN_1447a1747(param_1[0x58],*(undefined4 *)(param_1 + 0x59));
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145d86eb2 FUN_145d86eb2 body=40 status=ok
// SIG undefined FUN_145d86eb2(void)

undefined8 FUN_145d86eb2(undefined8 param_1,int param_2)

{
  FUN_145d86eda();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d86eda FUN_145d86eda body=122 status=ok
// SIG undefined FUN_145d86eda(void)

void FUN_145d86eda(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd922e0;
  param_1[5] = &PTR_FUN_14bd926a0;
  param_1[0x13] = &PTR_FUN_14bd926c0;
  param_1[0x17] = &PTR_FUN_14bd926f0;
  param_1[0x18] = &PTR_FUN_14bd92730;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145d86f54 FUN_145d86f54 body=144 status=ok
// SIG undefined FUN_145d86f54(void)

code * FUN_145d86f54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d86fe4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ColorRemap";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FColorRemapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x280000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145decacc;
}



// FUNCTION 145d86fe4 FUN_145d86fe4 body=268 status=ok
// SIG undefined FUN_145d86fe4(void)

undefined * FUN_145d86fe4(void)

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
              0x110) < DAT_14ca2c380) {
    FUN_144b3d300(&DAT_14ca2c380);
    if (DAT_14ca2c380 == -1) {
      FUN_145d870f2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FColorRemapParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2c300,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbf8d);
      _Init_thread_footer(&DAT_14ca2c380);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca2c300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d870f2 FUN_145d870f2 body=232 status=ok
// SIG undefined FUN_145d870f2(void)

longlong * FUN_145d870f2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462f99a0;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d871e0 FUN_145d871e0 body=144 status=ok
// SIG undefined FUN_145d871e0(void)

code * FUN_145d871e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d87270();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam38";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScaleColorModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3d000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dfebc6;
}



// FUNCTION 145d87270 FUN_145d87270 body=268 status=ok
// SIG undefined FUN_145d87270(void)

undefined * FUN_145d87270(void)

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
              0x110) < DAT_14cb34ba8) {
    FUN_144b3d300(&DAT_14cb34ba8);
    if (DAT_14cb34ba8 == -1) {
      FUN_145d8737e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScaleColorModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x48;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34b28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8f4);
      _Init_thread_footer(&DAT_14cb34ba8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34b28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8737e FUN_145d8737e body=232 status=ok
// SIG undefined FUN_145d8737e(void)

longlong * FUN_145d8737e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146462bf0;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d8746c FUN_145d8746c body=292 status=ok
// SIG undefined FUN_145d8746c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d8746c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca00a30) {
    FUN_144b3d300(&DAT_14ca00a30);
    if (DAT_14ca00a30 == -1) {
      FUN_145d87590();
      FUN_145d87696();
      FUN_140db5666(&DAT_14ca00988,0,&DAT_14ca00920,L"FLumenScreenProbeGatherHardwareRayTracingCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeHardwareRayTracing.usf",
                    L"LumenScreenProbeGatherHardwareRayTracingCS",5,0x90,FUN_14721fce6,FUN_14721fc86
                    ,&LAB_140e2ad3a,&LAB_14721fc82,&LAB_14721fc7e,&LAB_14712ac08,0xe0,&DAT_14ca05818
                   );
      _DAT_14ca00988 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142daca5f);
      _Init_thread_footer(&DAT_14ca00a30);
    }
  }
  return &DAT_14ca00988;
}



// FUNCTION 145d87590 FUN_145d87590 body=261 status=ok
// SIG undefined FUN_145d87590(void)

void FUN_145d87590(void)

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
              0x110) < DAT_14ca05898) {
    FUN_144b3d300(&DAT_14ca05898);
    if (DAT_14ca05898 == -1) {
      FUN_14154a880(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x570;
      local_58 = 0x67;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05818,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd29ff);
      _Init_thread_footer(&DAT_14ca05898);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d87696 FUN_145d87696 body=205 status=ok
// SIG undefined FUN_145d87696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d87696(void)

{
  if ((DAT_14ca00987 & 2) == 0) {
    DAT_14ca00987 = DAT_14ca00987 | 2;
    _DAT_14ca00928 = L"FLumenScreenProbeGatherHardwareRayTracingCS";
    _DAT_14ca00940 = FUN_146826540;
    _DAT_14ca00948 = FUN_146825d77;
    _DAT_14ca00950 = FUN_146825fd6;
    _DAT_14ca00958 = FUN_1407e02ea;
    _DAT_14ca00960 = FUN_146826273;
    _DAT_14ca00938 = FUN_14721fc50;
    _DAT_14ca00978 = 0xffffffff000000e0;
    _DAT_14ca00980 = 8;
    DAT_14ca00984 = 0;
    _DAT_14ca00968 = &LAB_14721fc7a;
    FUN_145d87764();
    FUN_1407e00cc(&DAT_14ca00920);
    return;
  }
  return;
}



// FUNCTION 145d87764 FUN_145d87764 body=123 status=ok
// SIG undefined FUN_145d87764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d87764(void)

{
  _DAT_14ca076e8 = L"BASE";
  DAT_14ca07712 = 4;
  _DAT_14ca076f0 = FUN_140b35ae4();
  _DAT_14ca076f8 = DAT_14ca00930;
  _DAT_14ca07700 = &LAB_14682652b;
  DAT_14ca00930 = &DAT_14ca076e8;
  DAT_14ca00985 = DAT_14ca00985 + '\x01';
  _DAT_14ca07708 = 0x100000000;
  if (*(char *)(_DAT_14ca076f0 + 100) != '\0') {
    DAT_14ca00986 = DAT_14ca00986 + '\x01';
  }
  return;
}



// FUNCTION 145d877e0 FUN_145d877e0 body=138 status=ok
// SIG undefined FUN_145d877e0(void)

code * FUN_145d877e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HitLightingSkylight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x53800000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147228b64;
}



// FUNCTION 145d8786a FUN_145d8786a body=144 status=ok
// SIG undefined FUN_145d8786a(void)

code * FUN_145d8786a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145aa826c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"IndirectTracingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenIndirectTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3a00000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d878fa;
}



// FUNCTION 145d878fa FUN_145d878fa body=146 status=ok
// SIG undefined FUN_145d878fa(void)

code * FUN_145d878fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d8798c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCompactedTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3700000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca058a0;
  return FUN_1462e7632;
}



// FUNCTION 145d8798c FUN_145d8798c body=261 status=ok
// SIG undefined FUN_145d8798c(void)

void FUN_145d8798c(void)

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
              0x110) < DAT_14ca05920) {
    FUN_144b3d300(&DAT_14ca05920);
    if (DAT_14ca05920 == -1) {
      FUN_145d87a92(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCompactedTraceParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x8c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca058a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd2a0b);
      _Init_thread_footer(&DAT_14ca05920);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d87a92 FUN_145d87a92 body=226 status=ok
// SIG undefined FUN_145d87a92(void)

longlong * FUN_145d87a92(longlong *param_1)

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
  pcVar13 = FUN_1462e76c2;
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



// FUNCTION 145d87b76 FUN_145d87b76 body=132 status=ok
// SIG undefined FUN_145d87b76(void)

undefined1 * FUN_145d87b76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147228c78;
}



// FUNCTION 145d87bfa FUN_145d87bfa body=138 status=ok
// SIG undefined FUN_145d87bfa(void)

code * FUN_145d87bfa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedLightSampleTraceTexelData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d87c84;
}



// FUNCTION 145d87c84 FUN_145d87c84 body=138 status=ok
// SIG undefined FUN_145d87c84(void)

code * FUN_145d87c84(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d87b76;
}



// FUNCTION 145d87d0e FUN_145d87d0e body=63 status=ok
// SIG undefined FUN_145d87d0e(void)

void FUN_145d87d0e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145d87da6(param_1);
    FUN_145d87d4e(param_1);
    return;
  }
  FUN_145d87d4e(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1414932a2(param_1);
  return;
}



// FUNCTION 145d87d4e FUN_145d87d4e body=88 status=ok
// SIG undefined FUN_145d87d4e(void)

void FUN_145d87d4e(longlong param_1)

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



// FUNCTION 145d87da6 FUN_145d87da6 body=335 status=ok
// SIG undefined FUN_145d87da6(void)

void FUN_145d87da6(longlong *param_1)

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



// FUNCTION 145d87ef6 FUN_145d87ef6 body=625 status=ok
// SIG undefined FUN_145d87ef6(void)

void FUN_145d87ef6(ulonglong *param_1,longlong *param_2,undefined1 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  wchar_t *_Dest;
  undefined8 *puVar7;
  undefined1 auStack_158 [11];
  undefined1 auStack_14d [16];
  undefined4 uStack_13d;
  undefined1 uStack_139;
  longlong *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_78 [16];
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*param_2 + 8))(param_2);
  lVar4 = 0x15;
  do {
    *(undefined1 (*) [16])(auStack_14d + lVar4) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)&uStack_13d + lVar4) = 0xffffffff;
    *(undefined2 *)(&uStack_139 + lVar4) = 0;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xd5);
  local_64 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 0xffffffff;
  uStack_5c = 0xffffffff;
  uStack_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  local_50 = 0;
  local_48 = local_48 & 0xffffff00;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  local_130 = 0;
  local_123 = 9;
  _Dest = (wchar_t *)(*param_1 + 1 & 0xfffffffffffffffe);
  pwVar5 = _Dest + 0x12;
  local_138 = param_2;
  local_128 = param_4;
  local_124 = param_3;
  if ((wchar_t *)param_1[1] < pwVar5) {
    FUN_140023dd8(param_1,0x26);
    _Dest = (wchar_t *)(*param_1 + 1 & 0xfffffffffffffffe);
    pwVar5 = _Dest + 0x12;
  }
  *param_1 = (ulonglong)pwVar5;
  wcscpy(_Dest,L"ClearRenderTarget");
  puVar7 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar7 + 0x23;
  if ((undefined8 *)param_1[1] < puVar6) {
    FUN_140023dd8(param_1,0x120);
    puVar7 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 0x23;
  }
  *param_1 = (ulonglong)puVar6;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar7;
  param_1[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a217b50;
  memcpy(puVar7 + 2,&local_138,0xe8);
  puVar7[0x1f] = 0;
  puVar7[0x20] = CONCAT44(uStack_44,local_48);
  *(uint *)((longlong)puVar7 + 0x107) = CONCAT13(uStack_3e,CONCAT21(uStack_40,uStack_44._3_1_));
  puVar7[0x22] = _Dest;
  FUN_144a8de46(param_1,&local_138);
  *(undefined1 *)(param_1 + 0x2f) = uStack_3e;
  *(undefined1 *)((longlong)param_1 + 0x179) = 0;
  bVar3 = *(byte *)((longlong)param_1 + 0x17b);
  *(byte *)((longlong)param_1 + 0x17b) = bVar3 | 2;
  if (uStack_44 != 0) {
    *(byte *)((longlong)param_1 + 0x17b) = bVar3 | 10;
    (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,param_1,1);
  }
  FUN_144a8dda2(param_1);
  if (local_50 != 0) {
    LOCK();
    puVar1 = (uint *)(local_50 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d88168 FUN_145d88168 body=197 status=ok
// SIG undefined FUN_145d88168(void)

void FUN_145d88168(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[0x12];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x11];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x2c) & 2) != 0)) {
        local_3c[0] = *(undefined1 *)(lVar2 + 0x3c);
        local_38 = *(undefined8 *)(lVar2 + 0x40);
        (**(code **)(*param_1 + 0x2a0))(param_1,local_3c);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x6d0);
  }
  param_1[0x25] = lVar3;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d8822e thunk_FUN_14012483a body=5 status=ok
// SIG undefined thunk_FUN_14012483a(void)

void thunk_FUN_14012483a(void)

{
  FUN_14012483a();
  return;
}



// FUNCTION 145d8823e FUN_145d8823e body=149 status=ok
// SIG undefined FUN_145d8823e(void)

undefined8 * FUN_145d8823e(undefined8 *param_1)

{
  FUN_145cbb022();
  *param_1 = &PTR_FUN_14a685ca0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaa80) {
    FUN_144b3d300(&DAT_14caeaa80);
    if (DAT_14caeaa80 == -1) {
      FUN_14154a964();
      atexit((_func_5014 *)&LAB_14356d544);
      _Init_thread_footer(&DAT_14caeaa80);
    }
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  return param_1;
}



// FUNCTION 145d882de FUN_145d882de body=581 status=ok
// SIG undefined FUN_145d882de(void)

undefined8 * FUN_145d882de(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1260c0;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb04;
  param_1[0x17] = "gbx_discovery_category_def";
  lVar5 = FUN_145d88524();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d883b5;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d883b5:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Category Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d88524 FUN_145d88524 body=57 status=ok
// SIG undefined FUN_145d88524(void)

void FUN_145d88524(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ce50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ce50 = FUN_140002ddd(FUN_1464d948b,uVar1,L"GbxDiscoveryCategoryDef");
  }
  return;
}



// FUNCTION 145d88568 FUN_145d88568 body=581 status=ok
// SIG undefined FUN_145d88568(void)

undefined8 * FUN_145d88568(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b370e40;
  *(undefined4 *)(param_1 + 0x16) = 10;
  param_1[0x17] = "resourcepool";
  lVar5 = FUN_14154aa0a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d8863f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d8863f:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"General.Resource Pool");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d887ba FUN_145d887ba body=532 status=ok
// SIG undefined FUN_145d887ba(void)

undefined8 * FUN_145d887ba(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14b391d30;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x6000;
  param_1[0x17] = &DAT_14b3e7b50;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  FUN_145d889d0();
  uVar1 = DAT_14cb84ec8;
  lVar2 = (longlong)(int)DAT_14cb84ec8;
  if ((lVar2 == 0) || (*(longlong *)(DAT_14cb84ec0 + (longlong)(int)(DAT_14cb84ec8 - 1) * 8) != 0))
  {
    DAT_14cb84ec8 = DAT_14cb84ec8 + 1;
    if (DAT_14cb84ecc < DAT_14cb84ec8) {
      FUN_140ca86cc(&DAT_14cb84ec0,uVar1);
    }
    *(undefined8 *)(DAT_14cb84ec0 + lVar2 * 8) = 0;
  }
  param_1[0x18] = DAT_14cb84ec0;
  FUN_1400b22c2(local_28,"Streaming Level.Definitions");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d889d0 FUN_145d889d0 body=106 status=ok
// SIG undefined FUN_145d889d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145d889d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb84ed0) {
    FUN_144b3d300(&DAT_14cb84ed0);
    if (DAT_14cb84ed0 == -1) {
      DAT_14cb84ec0 = 0;
      _DAT_14cb84ec8 = 0;
      atexit((_func_5014 *)&LAB_143dbe3a4);
      _Init_thread_footer(&DAT_14cb84ed0);
    }
  }
  return &DAT_14cb84ec0;
}



// FUNCTION 145d88a3a FUN_145d88a3a body=52 status=ok
// SIG undefined FUN_145d88a3a(void)

void FUN_145d88a3a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x4b0);
  memset(_Dst,0,0x4b0);
  FUN_145d88a6e(_Dst);
  return;
}



// FUNCTION 145d88a6e FUN_145d88a6e body=273 status=ok
// SIG undefined FUN_145d88a6e(void)

undefined8 * FUN_145d88a6e(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *param_1 = &PTR_FUN_14b9c4e80;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  return param_1;
}



// FUNCTION 145d88b8a FUN_145d88b8a body=149 status=ok
// SIG undefined FUN_145d88b8a(void)

undefined8 * FUN_145d88b8a(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcafc70;
  memset(param_1 + 0x16,0,200);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13c20) {
    FUN_144b3d300(&DAT_14cc13c20);
    if (DAT_14cc13c20 == -1) {
      FUN_14154aa44();
      atexit((_func_5014 *)&LAB_1444f2282);
      _Init_thread_footer(&DAT_14cc13c20);
    }
  }
  param_1[0x2f] = 0x3f80000000000000;
  param_1[0x30] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145d88c20 FUN_145d88c20 body=704 status=ok
// SIG undefined FUN_145d88c20(void)

undefined8 FUN_145d88c20(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  code *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 == (longlong *)0x0) {
LAB_145d88e40:
    uVar10 = 0;
  }
  else {
    lVar1 = param_1 + -0x10;
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_145d88e40;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    lVar4 = *(longlong *)(param_1 + 0x40);
    uVar10 = 0;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_1446ddc76(&local_a0,"FSessionService",1);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_5c = local_a0;
      local_98 = lVar4;
      local_90 = plVar3;
      plVar9 = (longlong *)FUN_144a7672a();
      local_54 = (**(code **)(*plVar9 + 0x10))(plVar9,0);
      local_50 = FUN_147dffaac;
      local_48._0_4_ = 0;
      FUN_145d88f5a(&local_98,lVar1,&local_50);
      local_50 = FUN_147dffaf0;
      local_48._0_4_ = 0;
      FUN_145d88ff2(&local_98,lVar1,&local_50);
      local_50 = (code *)&LAB_147dffb5e;
      local_48 = (longlong *)((ulonglong)local_48._4_4_ << 0x20);
      FUN_145d8908c(&local_98,lVar1,&local_50);
      FUN_1458bfc2e(&local_98,&local_50);
      plVar9 = local_48;
      if ((code **)(param_1 + 0x50) != &local_50) {
        *(code **)(param_1 + 0x50) = local_50;
        local_50 = (code *)0x0;
        plVar5 = *(longlong **)(param_1 + 0x58);
        if (local_48 != plVar5) {
          local_48 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x58) = plVar9;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar5 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
      }
      plVar9 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_48 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_1458bf708(&local_98);
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      pcVar6 = *(code **)(param_1 + 0x50);
      if (pcVar6 == (code *)0x0) {
        uVar10 = 0;
      }
      else {
        local_50 = (code *)CONCAT44(local_50._4_4_,0x20001);
        uVar10 = FUN_145d88ef2();
        FUN_1414d7078(uVar10,&local_98);
        FUN_1414d7090(pcVar6,&local_98,&local_50);
        uVar10 = FUN_144a82cde();
        FUN_145d88ee2(uVar10,lVar1);
        uVar10 = 1;
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 145d88ee2 FUN_145d88ee2 body=15 status=ok
// SIG undefined FUN_145d88ee2(void)

void FUN_145d88ee2(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14154aaea(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 145d88ef2 FUN_145d88ef2 body=55 status=ok
// SIG undefined FUN_145d88ef2(void)

void FUN_145d88ef2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12aa0 == 0) {
    uVar1 = FUN_145d88f29();
    DAT_14cb12aa0 = FUN_140002ddd(FUN_1464157c1,uVar1,L"SessionServicePing");
  }
  return;
}



// FUNCTION 145d88f29 FUN_145d88f29 body=49 status=ok
// SIG undefined FUN_145d88f29(void)

longlong FUN_145d88f29(void)

{
  if (DAT_14cb12a88 == 0) {
    FUN_140f50038(&DAT_14cb12a88,&PTR_s__Script_SessionMessages_14ab3af58);
  }
  return DAT_14cb12a88;
}



// FUNCTION 145d88f5a FUN_145d88f5a body=151 status=ok
// SIG undefined FUN_145d88f5a(void)

longlong FUN_145d88f5a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)FUN_14494321d(0x20);
  *puVar6 = &PTR_FUN_14ab3c628;
  puVar6[1] = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
  *(undefined4 *)(puVar6 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
  puVar7 = (undefined8 *)FUN_14494321d(0x18);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14ab3c640;
  puVar7[2] = puVar6;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar6;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar7;
  return param_1;
}



// FUNCTION 145d88ff2 FUN_145d88ff2 body=153 status=ok
// SIG undefined FUN_145d88ff2(void)

longlong FUN_145d88ff2(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)FUN_14494321d(0x20);
  *puVar6 = &PTR_FUN_14ab3c658;
  puVar6[1] = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
  *(undefined4 *)(puVar6 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
  puVar7 = (undefined8 *)FUN_14494321d(0x18);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14ab3c670;
  puVar7[2] = puVar6;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar6;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar7;
  return param_1;
}



// FUNCTION 145d8908c FUN_145d8908c body=153 status=ok
// SIG undefined FUN_145d8908c(void)

longlong FUN_145d8908c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)FUN_14494321d(0x20);
  *puVar6 = &PTR_FUN_14ab3c688;
  puVar6[1] = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
  *(undefined4 *)(puVar6 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
  puVar7 = (undefined8 *)FUN_14494321d(0x18);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14ab3c6a0;
  puVar7[2] = puVar6;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar6;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar7;
  return param_1;
}



// FUNCTION 145d8912e FUN_145d8912e body=480 status=ok
// SIG undefined FUN_145d8912e(void)

undefined8 * FUN_145d8912e(undefined8 *param_1)

{
  FUN_140d71ca0();
  *param_1 = &PTR_FUN_14b945c60;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xf00000d0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x459c4000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xf00000d0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xf00000d0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf00000d0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xf00000d0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xf00000d0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x4fc71eb4;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) | 1;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x44) = *(byte *)((longlong)param_1 + 0x44) | 1;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 145d8930e FUN_145d8930e body=38 status=ok
// SIG undefined FUN_145d8930e(void)

undefined8 FUN_145d8930e(undefined8 param_1,int param_2)

{
  FUN_145d89334();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d89334 FUN_145d89334 body=311 status=ok
// SIG undefined FUN_145d89334(void)

void FUN_145d89334(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a351870;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0,0);
  }
  local_18 = &local_20;
  local_20 = param_1;
  FUN_145d894d2(param_1[2] + 0x520);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  if (param_1[0x1a] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x1a] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14476c499(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x13];
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x60) + 0x10))(lVar4 + 0x60);
  }
  FUN_145d8946c(param_1 + 0xb);
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8946c FUN_145d8946c body=52 status=ok
// SIG undefined FUN_145d8946c(void)

void FUN_145d8946c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_145d894a0(lVar1,*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d894a0 FUN_145d894a0 body=49 status=ok
// SIG undefined FUN_145d894a0(void)

void FUN_145d894a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))(lVar1 + 0x60);
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145d894d2 FUN_145d894d2 body=200 status=ok
// SIG undefined FUN_145d894d2(void)

void FUN_145d894d2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = (longlong)(int)uVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar5 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    uVar8 = 0;
    do {
      uVar3 = (ulonglong)uVar8;
      uVar9 = uVar8;
      uVar7 = uVar3;
      uVar6 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        uVar10 = uVar6;
        if (lVar4 <= (longlong)uVar7) break;
        uVar10 = uVar9 + 1;
        uVar9 = uVar10;
      } while (bVar11 == (plVar2[uVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (uVar5 != uVar8) {
          memmove(plVar2 + (int)uVar5,plVar2 + uVar3,(longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar5 = uVar5 + (uVar10 - uVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      uVar8 = uVar10;
    } while ((longlong)uVar7 < lVar4);
    *(uint *)(param_1 + 1) = uVar5;
  }
  return;
}



// FUNCTION 145d8959a FUN_145d8959a body=25 status=ok
// SIG undefined FUN_145d8959a(void)

undefined8 FUN_145d8959a(undefined8 param_1,undefined8 param_2)

{
  FUN_145d895b4(param_2);
  return param_2;
}



// FUNCTION 145d895b4 FUN_145d895b4 body=422 status=ok
// SIG undefined FUN_145d895b4(void)

longlong * FUN_145d895b4(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb24690 != (longlong *)0x0 && DAT_14cb24698 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb24690 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb24690;
    if (DAT_14cb24698 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145d89685;
  }
  lVar3 = FUN_14001cc68(0x120,0x10);
  FUN_14154b014(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ac8d760;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145d89685;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145d89685;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145d89700:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145d8967b;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145d89700;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145d8967b:
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
  }
LAB_145d89685:
  *param_1 = local_38;
  param_1[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d8975c FUN_145d8975c body=63 status=ok
// SIG undefined FUN_145d8975c(void)

void FUN_145d8975c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145d897f6(param_1);
    FUN_145d8979c(param_1);
    return;
  }
  FUN_145d8979c(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147080334(param_1);
  return;
}



// FUNCTION 145d8979c FUN_145d8979c body=90 status=ok
// SIG undefined FUN_145d8979c(void)

void FUN_145d8979c(longlong param_1)

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



// FUNCTION 145d897f6 FUN_145d897f6 body=335 status=ok
// SIG undefined FUN_145d897f6(void)

void FUN_145d897f6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145d8994e FUN_145d8994e body=155 status=ok
// SIG undefined FUN_145d8994e(void)

undefined8 * FUN_145d8994e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14a5c0bd0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 145d899ea FUN_145d899ea body=40 status=ok
// SIG undefined FUN_145d899ea(void)

undefined8 FUN_145d899ea(undefined8 param_1,int param_2)

{
  FUN_145d89a12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d89a12 FUN_145d89a12 body=123 status=ok
// SIG undefined FUN_145d89a12(void)

void FUN_145d89a12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6cd740;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d89a96 FUN_145d89a96 body=154 status=ok
// SIG undefined FUN_145d89a96(void)

undefined8 * FUN_145d89a96(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14a89b9b0;
  FUN_1446f470e(&local_20,L"Garbage Collection",1);
  param_1[6] = local_20;
  *(undefined4 *)(param_1 + 7) = 0x42700000;
  *(undefined4 *)(param_1 + 10) = 0xc00000;
  *(undefined4 *)(param_1 + 8) = 5;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x200000;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffe00 | 0x7e;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d89b32 FUN_145d89b32 body=93 status=ok
// SIG undefined FUN_145d89b32(void)

void FUN_145d89b32(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x30 + lVar2;
    do {
      lVar1 = FUN_145d89b90(param_2);
      FUN_144a787a6(lVar1,lVar2);
      FUN_144a787a6(lVar1 + 0x10,lVar2 + 0x20);
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != lVar3);
  }
  return;
}



// FUNCTION 145d89b90 FUN_145d89b90 body=70 status=ok
// SIG undefined FUN_145d89b90(void)

longlong FUN_145d89b90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140789234(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_140789215(lVar2,1);
  return lVar2;
}



// FUNCTION 145d89bd6 FUN_145d89bd6 body=109 status=ok
// SIG undefined FUN_145d89bd6(void)

void FUN_145d89bd6(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145cf67fe();
  local_30 = L"platform";
  local_28 = 8;
  local_20 = 0;
  uStack_18 = 0;
  FUN_145d89c44(uVar1,&local_30);
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d89c44 FUN_145d89c44 body=249 status=ok
// SIG undefined FUN_145d89c44(void)

void FUN_145d89c44(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *_Str2;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 2));
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 1);
    _Str2 = (wchar_t *)*param_2;
    uVar9 = 0;
    uVar8 = uVar2;
    do {
      uVar1 = (uVar8 >> 1) + uVar9;
      lVar7 = (ulonglong)uVar1 * 0x60;
      iVar5 = *(int *)(lVar3 + 8 + lVar7);
      if ((iVar5 < iVar6) ||
         ((iVar5 <= iVar6 &&
          (iVar5 = wcsncmp(*(wchar_t **)(lVar7 + lVar3),_Str2,(longlong)iVar5), iVar5 < 0)))) {
        uVar9 = uVar1 + (uVar8 & 1);
      }
      bVar4 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar4);
  }
  if ((int)uVar9 < (int)uVar2) {
    iVar6 = *(int *)(param_2 + 1);
    iVar5 = *(int *)(lVar3 + 8 + (ulonglong)uVar9 * 0x60);
    if ((iVar5 <= iVar6) &&
       ((iVar5 < iVar6 ||
        (iVar6 = wcsncmp((wchar_t *)*param_2,*(wchar_t **)(lVar3 + (ulonglong)uVar9 * 0x60),
                         (longlong)iVar6), -1 < iVar6)))) {
      FUN_145d89de8(param_1,uVar9);
      FUN_145d89d3e(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145d89d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 2));
  return;
}



// FUNCTION 145d89d3e FUN_145d89d3e body=63 status=ok
// SIG undefined FUN_145d89d3e(void)

void FUN_145d89d3e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145d89d7e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,0x10);
  }
  return;
}



// FUNCTION 145d89d7e FUN_145d89d7e body=105 status=ok
// SIG undefined FUN_145d89d7e(void)

ulonglong FUN_145d89d7e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x60) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x60,0x10);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 145d89de8 FUN_145d89de8 body=125 status=ok
// SIG undefined FUN_145d89de8(void)

void FUN_145d89de8(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x60);
  if (*(longlong *)(*param_1 + 0x20 + (longlong)(int)param_2 * 0x60) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x40);
    if (*(longlong **)((longlong)_Dst + 0x30) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x30);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x60),(longlong)(int)(~param_2 + iVar1) * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 145d89e66 FUN_145d89e66 body=21 status=ok
// SIG undefined FUN_145d89e66(void)

undefined8 FUN_145d89e66(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145d89e8f FUN_145d89e8f body=61 status=ok
// SIG undefined FUN_145d89e8f(void)

void FUN_145d89e8f(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d89ecd FUN_145d89ecd body=61 status=ok
// SIG undefined FUN_145d89ecd(void)

void FUN_145d89ecd(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d89f0c FUN_145d89f0c body=39 status=ok
// SIG undefined FUN_145d89f0c(void)

void FUN_145d89f0c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d89f34();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d89f34 FUN_145d89f34 body=72 status=ok
// SIG undefined FUN_145d89f34(void)

undefined8 FUN_145d89f34(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) != 0)) {
    lVar1 = FUN_140b64196();
    if (lVar1 != 0) {
      uVar2 = FUN_14154b0e0(lVar1,*(undefined4 *)(param_1 + 0xe0));
      return uVar2;
    }
  }
  return 0x3f800000;
}



// FUNCTION 145d89f82 FUN_145d89f82 body=84 status=ok
// SIG undefined FUN_145d89f82(void)

void FUN_145d89f82(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(longlong *)(param_1 + 0x90);
  if (local_10 == DAT_14cb8e370) {
    local_10 = 0;
  }
  FUN_14154b114(param_1 + 0x88);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d89fe2 FUN_145d89fe2 body=150 status=ok
// SIG undefined FUN_145d89fe2(void)

undefined8 * FUN_145d89fe2(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcb1500;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13d10) {
    FUN_144b3d300(&DAT_14cc13d10);
    if (DAT_14cc13d10 == -1) {
      FUN_14154b2a4();
      atexit((_func_5014 *)&LAB_1444f22e6);
      _Init_thread_footer(&DAT_14cc13d10);
    }
  }
  return param_1;
}



// FUNCTION 145d8a078 FUN_145d8a078 body=26 status=ok
// SIG undefined FUN_145d8a078(void)

void FUN_145d8a078(undefined8 param_1)

{
  FUN_145d8a092();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145d8a092 FUN_145d8a092 body=137 status=ok
// SIG undefined FUN_145d8a092(void)

void FUN_145d8a092(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1 + 0x68,0);
      *(undefined8 *)(param_1 + 0x80) = 0;
      plVar2 = *(longlong **)(param_1 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar1 = (**(code **)(*plVar2 + 0x298))();
    FUN_14126849c(uVar1,param_1);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2a0))();
    FUN_14126849c(uVar1,param_1);
    *(undefined8 *)(param_1 + 0x60) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x88) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 145d8a126 FUN_145d8a126 body=314 status=ok
// SIG undefined FUN_145d8a126(void)

undefined8 * FUN_145d8a126(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14bddb270;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x73) = 2;
  *(undefined2 *)(param_1 + 0x74) = 1;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_1446f470e(&local_28,L"Root",1);
  local_48 = FUN_144a799b0();
  local_38 = 0;
  local_40 = 1;
  plVar1 = (longlong *)FUN_140486aac(param_2,param_1,local_28,local_48);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  param_1[0x39] = plVar1;
  (**(code **)(*plVar1 + 0x588))(plVar1,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8a262 FUN_145d8a262 body=1096 status=ok
// SIG undefined FUN_145d8a262(void)

void FUN_145d8a262(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_145d8a507;
  FUN_14485c47a(param_1 + 0x48);
  lVar7 = FUN_14050c909();
  lVar9 = *(longlong *)(lVar7 + 0x4c0);
  if (lVar9 == 0) {
    uVar8 = FUN_145d86966();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(lVar7 + 0x4c0) = lVar9;
  }
  if (*(longlong *)(lVar7 + 0x4c8) == 0) {
    if ((*(longlong *)(lVar7 + 0x4b8) == 0) || (lVar9 == 0)) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
      plVar2 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        *(undefined8 *)(lVar7 + 0x4c8) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar9 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x4b8));
        *(longlong *)(lVar7 + 0x4c8) = lVar9;
        *(longlong *)(param_1 + 0x50) = lVar9;
        if (lVar9 != 0) goto LAB_145d8a324;
      }
    }
  }
  else {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(lVar7 + 0x4c8);
LAB_145d8a324:
    uVar8 = thunk_FUN_14050fd64();
    local_68 = 0;
    FUN_14088df30(uVar8,&local_40,*(undefined8 *)(param_1 + 0x50),0);
    plVar2 = local_38;
    if ((undefined8 **)(param_1 + 0x58) != &local_40) {
      *(undefined8 **)(param_1 + 0x58) = local_40;
      local_40 = (undefined8 *)0x0;
      plVar3 = *(longlong **)(param_1 + 0x60);
      if (local_38 != plVar3) {
        local_38 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x60) = plVar2;
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
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
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
  uVar8 = FUN_1447210f0(param_2);
  FUN_14154b34a(&local_60,uVar8);
  if (local_60 != 0) {
    local_50 = FUN_1459dcffc;
    local_48 = 0;
    FUN_145d8a792(&local_40,param_1);
    FUN_1459850be(local_60 + 0x10,&local_50,&local_40);
    FUN_1449db362(&local_40);
    *(code **)(param_1 + 0x128) = local_50;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  local_40 = (undefined8 *)0x0;
  local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = (longlong *)CONCAT44(local_38._4_4_,3);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_145d8a533:
    *local_40 = &PTR_LAB_14b3f8f90;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_40[2] = lVar7;
    *local_40 = &PTR_FUN_14b9689d0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = param_1;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_145d8a533;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *local_40 = &PTR_LAB_14b3f8f90;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_40[2] = lVar7;
    *local_40 = &PTR_FUN_14b9689d0;
    local_40[3] = uVar8;
    local_40[4] = plVar2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    local_40[5] = param_1;
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
  FUN_145d8a6ac(&DAT_14cb7bd50,&local_50,&local_40);
  FUN_1449db362(&local_40);
  FUN_14154b38e(param_1);
LAB_145d8a507:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d8a6ac FUN_145d8a6ac body=216 status=ok
// SIG undefined FUN_145d8a6ac(void)

undefined8 * FUN_145d8a6ac(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145d8a792 FUN_145d8a792 body=428 status=ok
// SIG undefined FUN_145d8a792(void)

longlong * FUN_145d8a792(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145d8a872:
    *puVar5 = &PTR_LAB_14b3e9d10;
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
    *puVar5 = &PTR_FUN_14b968960;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d8a872;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3e9d10;
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
    *puVar5 = &PTR_FUN_14b968960;
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



// FUNCTION 145d8a93e FUN_145d8a93e body=38 status=ok
// SIG undefined FUN_145d8a93e(void)

undefined8 FUN_145d8a93e(undefined8 param_1,int param_2)

{
  FUN_145d8a964();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d8a964 FUN_145d8a964 body=165 status=ok
// SIG undefined FUN_145d8a964(void)

void FUN_145d8a964(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba421b8;
  FUN_1415ae18e();
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
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145d8aa0a(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145d8aa40(param_1 + 1);
  return;
}



// FUNCTION 145d8aa0a FUN_145d8aa0a body=53 status=ok
// SIG undefined FUN_145d8aa0a(void)

void FUN_145d8aa0a(longlong *param_1)

{
  FUN_145d8aa76();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8aa40 FUN_145d8aa40 body=53 status=ok
// SIG undefined FUN_145d8aa40(void)

void FUN_145d8aa40(longlong *param_1)

{
  FUN_145cb7056();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8aa76 FUN_145d8aa76 body=343 status=ok
// SIG undefined FUN_145d8aa76(void)

void FUN_145d8aa76(longlong *param_1)

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
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x20 + 8);
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



// FUNCTION 145d8abce FUN_145d8abce body=223 status=ok
// SIG undefined FUN_145d8abce(void)

undefined8 FUN_145d8abce(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  if (((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x1a90) != 0)) &&
     (*(char *)(param_1 + 0x1b50) != (char)param_2)) {
    uVar4 = FUN_145d8acae(param_1,param_2);
    lVar3 = *(longlong *)(param_1 + 0x1a90);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_1 + 0x1b54);
      if (-1 < (int)uVar1) {
        uVar2 = *(uint *)(lVar3 + 0x368);
        if (((int)uVar1 < (int)uVar2) && (-1 < (int)uVar4)) {
          lVar7 = (ulonglong)uVar1 * 0x60 + *(longlong *)(lVar3 + 0x360);
          if (((int)uVar4 < *(int *)(lVar7 + 0x20)) &&
             (plVar9 = (longlong *)((ulonglong)uVar4 * 0x100 + *(longlong *)(lVar7 + 0x18)),
             plVar9 != (longlong *)0x0)) {
            uVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0x360) + uVar8) == *plVar9) {
                iVar6 = (int)(uVar8 >> 5) * -0x55555555;
                if (iVar6 < 0) {
                  return 0;
                }
                if ((int)uVar2 <= iVar6) {
                  return 0;
                }
                *(char *)(param_1 + 0x1b50) = (char)param_2;
                uVar5 = FUN_140e77d08(param_1,iVar6,uVar4);
                return uVar5;
              }
              uVar8 = uVar8 + 0x60;
            } while ((ulonglong)uVar2 * 0x60 != uVar8);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 145d8acae FUN_145d8acae body=447 status=ok
// SIG undefined FUN_145d8acae(void)

ulonglong FUN_145d8acae(longlong param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = 0xffffffff;
  if ((((*(longlong *)(param_1 + 0x1a90) != 0) && (-1 < *(int *)(param_1 + 0x1b54))) &&
      (*(int *)(param_1 + 0x1b54) < *(int *)(*(longlong *)(param_1 + 0x1a90) + 0x368))) &&
     (((*(char *)(param_1 + 0x1b70) != '\x01' || (lVar5 = FUN_1447210f0(param_1), lVar5 == 0)) ||
      ((double)*(float *)(param_1 + 0x1b6c) < *(double *)(lVar5 + 0x6d0) ||
       (double)*(float *)(param_1 + 0x1b6c) == *(double *)(lVar5 + 0x6d0))))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1a90) + 0x360);
    lVar6 = (longlong)*(int *)(param_1 + 0x1b54) * 0x60;
    iVar4 = *(int *)(lVar5 + 0x20 + lVar6);
    if (0 < iVar4) {
      lVar5 = lVar5 + lVar6;
      lVar6 = 200;
      uVar8 = 0;
      do {
        lVar1 = *(longlong *)(lVar5 + 0x18);
        if (*(char *)(lVar1 + -0xc0 + lVar6) == param_2) {
          cVar3 = FUN_144a8e0e6(lVar1 + lVar6 + 8);
          if (cVar3 == '\0') {
            local_a0[0] = 0;
            local_78 = 0;
            FUN_1456bb102(local_a0,param_1);
            FUN_1447c3578(lVar1 + lVar6,local_70,local_a0);
            cVar3 = FUN_144a7fca4(local_70);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar9 = local_70;
              if (0x18 < local_58) {
                ppppuVar9 = (undefined8 ****)local_70[0];
              }
              (*pcVar2)(ppppuVar9);
            }
            if (0x18 < local_58) {
              FUN_1400020a8(local_70[0]);
            }
            FUN_144a5ac3a(local_a0);
            if (cVar3 == '\0') {
              iVar4 = *(int *)(lVar5 + 0x20);
              goto LAB_145d8ad54;
            }
          }
          uVar7 = uVar8 & 0xffffffff;
          break;
        }
LAB_145d8ad54:
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x100;
      } while ((longlong)uVar8 < (longlong)iVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 145d8ae6e FUN_145d8ae6e body=142 status=ok
// SIG undefined FUN_145d8ae6e(void)

void FUN_145d8ae6e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((DAT_14c8688e0 != 0) && (DAT_14c8688d8 != (undefined8 *)0x0)) {
    (**(code **)*DAT_14c8688d8)(DAT_14c8688d8,0);
    FUN_1446efa72(&DAT_14c8688d8,0,0,0x10);
    DAT_14c8688e0 = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14154b704();
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  uVar2 = FUN_145857cde();
  FUN_14126849c(uVar2,param_1);
  FUN_14154b5d6();
  *(undefined8 *)(param_1 + 0x20) = 0;
  DAT_14c990d98 = 0;
  return;
}



// FUNCTION 145d8aefc FUN_145d8aefc body=31 status=ok
// SIG undefined FUN_145d8aefc(void)

undefined8 FUN_145d8aefc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d8af1c FUN_145d8af1c body=38 status=ok
// SIG undefined FUN_145d8af1c(void)

undefined8 FUN_145d8af1c(undefined8 param_1,int param_2)

{
  FUN_145d8af42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d8af42 FUN_145d8af42 body=428 status=ok
// SIG undefined FUN_145d8af42(void)

void FUN_145d8af42(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f29140;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x81));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x77));
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x6d);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_1447a1747(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145d8b140(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145d8b176(param_1 + 0x1d);
  FUN_1449db362(param_1 + 0x1b);
  FUN_1449db362(param_1 + 0x19);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  FUN_141504946(param_1 + 0xe);
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_141214b54(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfbed6(param_1);
  return;
}



// FUNCTION 145d8b0fa FUN_145d8b0fa body=31 status=ok
// SIG undefined FUN_145d8b0fa(void)

undefined8 FUN_145d8b0fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d8b11a FUN_145d8b11a body=38 status=ok
// SIG undefined FUN_145d8b11a(void)

undefined8 FUN_145d8b11a(undefined8 param_1,int param_2)

{
  FUN_145d8b206();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d8b140 FUN_145d8b140 body=53 status=ok
// SIG undefined FUN_145d8b140(void)

void FUN_145d8b140(longlong *param_1)

{
  FUN_145d8b1ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8b176 FUN_145d8b176 body=55 status=ok
// SIG undefined FUN_145d8b176(void)

void FUN_145d8b176(longlong *param_1)

{
  FUN_145c6e488(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8b1ae FUN_145d8b1ae body=88 status=ok
// SIG undefined FUN_145d8b1ae(void)

void FUN_145d8b1ae(longlong param_1)

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



// FUNCTION 145d8b206 FUN_145d8b206 body=116 status=ok
// SIG undefined FUN_145d8b206(void)

void FUN_145d8b206(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f286a0;
  param_1[1] = &PTR_FUN_149f28758;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  FUN_145d8b27a(param_1 + 0xce);
  if (*(char *)(param_1 + 0xcc) == '\x01') {
    FUN_145dcd442(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  FUN_145d8b308(param_1);
  return;
}



// FUNCTION 145d8b27a FUN_145d8b27a body=53 status=ok
// SIG undefined FUN_145d8b27a(void)

void FUN_145d8b27a(longlong *param_1)

{
  FUN_145d8b2b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8b2b0 FUN_145d8b2b0 body=88 status=ok
// SIG undefined FUN_145d8b2b0(void)

void FUN_145d8b2b0(longlong param_1)

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



// FUNCTION 145d8b308 FUN_145d8b308 body=217 status=ok
// SIG undefined FUN_145d8b308(void)

void FUN_145d8b308(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_149f29e70;
  param_1[1] = &PTR_LAB_149f29f00;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    param_1[2] = 0;
  }
  *(undefined2 *)(param_1 + 3) = 0x101;
  FUN_14154b868(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)param_1[9];
  FUN_1400020a8();
  while (puVar2 != (undefined8 *)0x0) {
    param_1[9] = puVar2;
    puVar3 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar3;
  }
  puVar2 = *(undefined8 **)param_1[7];
  FUN_1400020a8();
  while (puVar2 != (undefined8 *)0x0) {
    param_1[7] = puVar2;
    puVar3 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar3;
  }
  return;
}



// FUNCTION 145d8b3e2 FUN_145d8b3e2 body=149 status=ok
// SIG undefined FUN_145d8b3e2(void)

void FUN_145d8b3e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff2bd0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145d8b478(param_1 + 0xb);
  param_1[7] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    FUN_140115c12(param_1 + 9,0);
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145d8b478 FUN_145d8b478 body=55 status=ok
// SIG undefined FUN_145d8b478(void)

void FUN_145d8b478(longlong *param_1)

{
  FUN_145d8b4b0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8b4b0 FUN_145d8b4b0 body=123 status=ok
// SIG undefined FUN_145d8b4b0(void)

void FUN_145d8b4b0(longlong param_1,int param_2)

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



// FUNCTION 145d8b52c FUN_145d8b52c body=12775 status=ok
// SIG undefined FUN_145d8b52c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d8b52c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_6ee8 [32];
  undefined *local_6ec8;
  longlong *local_6ec0;
  undefined8 *local_6eb0;
  undefined8 local_6ea8;
  undefined **local_6ea0 [2];
  undefined **local_6e90;
  undefined **local_6e88 [20];
  longlong *local_6de8;
  undefined **local_6dd0 [2];
  undefined **local_6dc0;
  undefined **local_6db8;
  undefined8 uStack_6db0;
  longlong *local_6d18;
  undefined **local_6d00 [2];
  undefined **local_6cf0;
  undefined **local_6ce8 [20];
  longlong *local_6c48;
  undefined **local_6c30 [2];
  undefined **local_6c20;
  undefined **local_6c18;
  undefined8 uStack_6c10;
  longlong *local_6b78;
  undefined **local_6b60 [2];
  undefined **local_6b50;
  undefined **local_6b48;
  undefined8 uStack_6b40;
  longlong *local_6aa8;
  undefined8 local_6a98;
  undefined8 local_6a90;
  undefined8 local_6a88;
  undefined8 local_6a80;
  undefined **local_6a78 [2];
  undefined **local_6a68;
  undefined8 uStack_6a60;
  undefined **local_6a58 [2];
  undefined8 local_6a48;
  undefined8 local_6a40;
  undefined8 local_6a38;
  undefined8 local_6a30;
  undefined8 local_6a28;
  undefined **local_6a20;
  undefined **local_6a18;
  undefined8 uStack_6a10;
  longlong *local_6978;
  undefined **local_6960;
  undefined **local_6958;
  undefined8 uStack_6950;
  longlong *local_68b8;
  undefined **local_68a0;
  undefined **local_6898;
  undefined8 uStack_6890;
  longlong *local_67f8;
  undefined **local_67e0;
  undefined8 uStack_67d8;
  undefined **local_67d0;
  undefined **local_67c8;
  undefined8 uStack_67c0;
  longlong *local_6728;
  undefined **local_6718;
  undefined1 *puStack_6710;
  undefined1 local_6708 [144];
  longlong *local_6678;
  undefined1 local_6658 [176];
  undefined1 local_65a8 [176];
  undefined1 local_64f8 [176];
  undefined1 local_6448 [176];
  undefined1 local_6398 [176];
  undefined1 local_62e8 [176];
  undefined1 local_6238 [176];
  undefined1 local_6188 [176];
  undefined4 local_60d8;
  undefined4 uStack_60d4;
  undefined4 uStack_60d0;
  undefined4 uStack_60cc;
  undefined4 local_5eb8;
  undefined4 uStack_5eb4;
  undefined4 uStack_5eb0;
  undefined4 uStack_5eac;
  undefined1 local_5ea8;
  undefined4 local_5ea4;
  undefined4 uStack_5ea0;
  undefined4 uStack_5e9c;
  undefined4 uStack_5e98;
  undefined1 local_5e94;
  undefined4 local_5e90;
  undefined4 uStack_5e8c;
  undefined4 uStack_5e88;
  undefined4 uStack_5e84;
  undefined1 local_5e80;
  undefined4 local_5e7c;
  undefined4 uStack_5e78;
  undefined4 uStack_5e74;
  undefined4 uStack_5e70;
  undefined1 local_5e6c;
  undefined4 local_5e68;
  undefined4 uStack_5e64;
  undefined4 uStack_5e60;
  undefined4 uStack_5e5c;
  undefined1 local_5e58;
  undefined4 local_5e54;
  undefined4 uStack_5e50;
  undefined4 uStack_5e4c;
  undefined4 uStack_5e48;
  undefined1 local_5e44;
  undefined4 local_5e40;
  undefined4 uStack_5e3c;
  undefined4 uStack_5e38;
  undefined4 uStack_5e34;
  undefined1 local_5e30;
  undefined **local_5dc8 [2];
  undefined1 local_5db8 [144];
  longlong *local_5d28;
  undefined1 local_5d08 [176];
  undefined1 local_5c58 [2016];
  undefined **local_5478 [2];
  undefined1 local_5468 [144];
  longlong *local_53d8;
  undefined **local_50f8;
  undefined4 local_50f0;
  undefined4 uStack_50ec;
  undefined4 uStack_50e8;
  undefined4 uStack_50e4;
  undefined4 local_50e0;
  undefined4 uStack_50dc;
  undefined4 uStack_50d8;
  undefined4 uStack_50d4;
  undefined4 local_50d0;
  undefined4 uStack_50cc;
  undefined4 uStack_50c8;
  undefined4 uStack_50c4;
  longlong local_50c0;
  undefined8 local_50b8 [10];
  undefined4 local_5068;
  undefined1 local_5064;
  undefined8 local_5060;
  longlong local_5058;
  undefined8 local_5050;
  undefined8 local_5048;
  undefined8 uStack_5040;
  undefined8 local_5038;
  undefined **local_5028;
  undefined4 local_5020;
  undefined4 uStack_501c;
  undefined4 uStack_5018;
  undefined4 uStack_5014;
  undefined4 local_5010;
  undefined4 uStack_500c;
  undefined4 uStack_5008;
  undefined4 uStack_5004;
  undefined4 local_5000;
  undefined4 uStack_4ffc;
  undefined4 uStack_4ff8;
  undefined4 uStack_4ff4;
  longlong local_4ff0;
  undefined8 local_4fe8 [10];
  undefined4 local_4f98;
  undefined1 local_4f94;
  undefined8 local_4f90;
  longlong local_4f88;
  undefined8 local_4f80;
  undefined4 local_4f78;
  undefined4 uStack_4f74;
  undefined4 uStack_4f70;
  undefined4 uStack_4f6c;
  undefined4 local_4f68;
  undefined4 uStack_4f64;
  undefined4 uStack_4f60;
  undefined4 uStack_4f5c;
  undefined4 local_4f58;
  undefined4 uStack_4f54;
  undefined4 uStack_4f50;
  undefined4 uStack_4f4c;
  undefined1 local_4f48;
  undefined **local_4f38 [20];
  longlong *local_4e98;
  undefined **local_4bc8;
  undefined1 local_4bc0;
  undefined1 local_4bb8 [144];
  longlong *local_4b28;
  undefined1 local_4b08 [176];
  undefined1 local_4a58 [176];
  undefined1 local_49a8 [176];
  undefined8 local_48f8;
  undefined8 uStack_48f0;
  undefined4 local_48e8;
  undefined8 local_48e4;
  undefined8 uStack_48dc;
  undefined4 local_48d4;
  undefined4 local_48d0;
  undefined4 uStack_48cc;
  undefined4 uStack_48c8;
  undefined4 uStack_48c4;
  undefined4 local_48c0;
  undefined8 local_48bc;
  undefined8 uStack_48b4;
  undefined4 local_48ac;
  undefined8 local_48a8;
  undefined8 uStack_48a0;
  undefined8 local_4898;
  undefined8 uStack_4890;
  undefined **local_4848;
  undefined4 local_4840;
  undefined4 uStack_483c;
  undefined4 uStack_4838;
  undefined4 uStack_4834;
  undefined4 local_4830;
  undefined4 uStack_482c;
  undefined4 uStack_4828;
  undefined4 uStack_4824;
  undefined4 local_4820;
  undefined4 uStack_481c;
  undefined4 uStack_4818;
  undefined4 uStack_4814;
  longlong local_4810;
  undefined8 local_4808 [10];
  undefined4 local_47b8;
  undefined1 local_47b4;
  undefined8 local_47b0;
  longlong local_47a8;
  undefined8 local_47a0;
  undefined8 local_4798;
  undefined8 uStack_4790;
  undefined8 local_4788;
  undefined **local_4778;
  undefined4 local_4770;
  undefined4 uStack_476c;
  undefined4 uStack_4768;
  undefined4 uStack_4764;
  undefined4 local_4760;
  undefined4 uStack_475c;
  undefined4 uStack_4758;
  undefined4 uStack_4754;
  undefined4 local_4750;
  undefined4 uStack_474c;
  undefined4 uStack_4748;
  undefined4 uStack_4744;
  longlong local_4740;
  undefined8 auStack_4738 [10];
  undefined4 local_46e8;
  undefined1 local_46e4;
  undefined8 local_46e0;
  longlong local_46d8;
  undefined8 local_46d0;
  undefined8 local_46c8;
  undefined8 uStack_46c0;
  undefined4 local_46b8;
  undefined4 uStack_46b4;
  undefined4 uStack_46b0;
  undefined4 uStack_46ac;
  undefined4 local_46a8;
  undefined4 uStack_46a4;
  undefined4 uStack_46a0;
  undefined4 uStack_469c;
  undefined1 local_4698;
  undefined1 local_4638 [176];
  undefined4 local_4588;
  undefined4 uStack_4584;
  undefined4 uStack_4580;
  undefined4 uStack_457c;
  undefined1 local_4578 [176];
  undefined1 local_44c8 [176];
  undefined1 local_4418 [176];
  undefined8 local_4368;
  undefined8 uStack_4360;
  undefined4 local_4358;
  undefined8 local_4354;
  undefined8 uStack_434c;
  undefined4 local_4344;
  undefined8 local_4340;
  undefined8 uStack_4338;
  undefined4 local_4330;
  undefined8 local_432c;
  undefined8 uStack_4324;
  undefined4 local_431c;
  undefined8 local_4318;
  undefined8 uStack_4310;
  undefined4 local_4308;
  undefined8 local_4304;
  undefined8 uStack_42fc;
  undefined4 local_42f4;
  undefined4 local_42f0;
  undefined4 uStack_42ec;
  undefined4 uStack_42e8;
  undefined4 uStack_42e4;
  undefined4 local_42e0;
  undefined1 local_4268 [2384];
  undefined1 local_3918 [2384];
  undefined1 local_2fc8 [176];
  undefined1 *local_2f18;
  undefined1 *puStack_2f10;
  undefined **local_2f08 [2];
  undefined1 local_2ef8 [144];
  longlong *local_2e68;
  undefined1 local_2e48 [176];
  undefined1 local_2d98 [176];
  undefined1 local_2ce8 [176];
  undefined1 local_2c38 [176];
  undefined1 local_2b88 [1488];
  undefined **local_25b8 [20];
  longlong *local_2518;
  undefined **local_1c68 [20];
  longlong *local_1bc8;
  undefined **local_1318 [20];
  longlong *local_1278;
  undefined1 local_9c8 [2392];
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x145d8b542;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_6ee8;
  FUN_1414c3a06(&local_4bc8);
  local_4bc0 = 0;
  local_4368 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4360 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4358 = DAT_14c98db48;
  local_4354 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_434c = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4344 = DAT_14c98db48;
  local_4340 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4338 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4330 = DAT_14c98db48;
  local_432c = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4324 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_431c = DAT_14c98db48;
  local_4308 = DAT_14c98db48;
  local_4318 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4310 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4304 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_42fc = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_42f4 = DAT_14c98db48;
  local_42e0 = DAT_14c98db48;
  local_42f0 = _DAT_14c98db38;
  uStack_42ec = uRam000000014c98db3c;
  uStack_42e8 = uRam000000014c98db40;
  uStack_42e4 = uRam000000014c98db44;
  local_6a58[0] = DAT_14c84635c;
  FUN_1412ce202(local_1318);
  FUN_140f13d9e(local_4bb8,local_1318);
  local_6a68 = DAT_14c84635c;
  FUN_1412ce202(local_1c68);
  FUN_140f13d9e(local_4b08,local_1c68);
  local_6a78[0] = DAT_14c84635c;
  FUN_1412ce202(local_25b8);
  FUN_140f13d9e(local_4a58,local_25b8);
  local_6b60[0] = DAT_14c967fc4;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,&local_6b48,"Starship/CoreWidgets/CheckBox/check",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8._0_4_ = 0;
  FUN_14154bb44(local_2f08,&local_6b48,local_6b60,&DAT_14c98db10);
  local_2f08[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_49a8,local_2f08);
  local_6c30[0] = DAT_14c967fc4;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,&local_6c18,"Starship/CoreWidgets/CheckBox/check",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8._0_4_ = 0;
  FUN_14154bb44(local_5dc8,&local_6c18,local_6c30,&DAT_14c98dbec);
  local_5dc8[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_48f8,local_5dc8);
  local_6d00[0] = DAT_14c967fc4;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_6ce8,"Starship/CoreWidgets/CheckBox/check",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8._0_4_ = 0;
  FUN_14154bb44(&local_6718,local_6ce8,local_6d00,&DAT_14c98dd18);
  local_6718 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_4848,&local_6718);
  local_6dd0[0] = DAT_14c967fc4;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,&local_6db8,"Starship/CoreWidgets/CheckBox/indeterminate",L".svg")
  ;
  local_6ec0._0_4_ = 3;
  local_6ec8._0_4_ = 0;
  FUN_14154bb44(local_5478,&local_6db8,local_6dd0,&DAT_14c98db10);
  local_5478[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_4798,local_5478);
  local_6ea0[0] = DAT_14c967fc4;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_6e88,"Starship/CoreWidgets/CheckBox/indeterminate",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8._0_4_ = 0;
  FUN_14154bb44(local_4f38,local_6e88,local_6ea0,&DAT_14c98dbec);
  local_4f38[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_46e8,local_4f38);
  local_67d0 = DAT_14c967fc4;
  local_6eb0 = param_1;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,&local_67e0,"Starship/CoreWidgets/CheckBox/indeterminate",L".svg")
  ;
  local_6ec0 = (longlong *)CONCAT44(local_6ec0._4_4_,3);
  local_6ec8._0_4_ = 0;
  FUN_14154bb44(&local_67c8,&local_67e0,&local_67d0,&DAT_14c98dd18);
  local_67c8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_4638,&local_67c8);
  local_6ec0 = (longlong *)&local_68a0;
  local_68a0 = DAT_14c967fcc;
  local_6ec8._0_4_ = 0x3f800000;
  FUN_1414fd764(&local_6898,&DAT_14c98dc00,0x40400000,&DAT_14c98dc3c);
  FUN_140f13d9e(local_4578,&local_6898);
  local_6ec0 = (longlong *)&local_6960;
  local_6960 = DAT_14c967fcc;
  local_6ec8._0_4_ = 0x3f800000;
  FUN_1414fd764(&local_6958,&DAT_14c98dc00,0x40400000,&DAT_14c98dae8);
  FUN_140f13d9e(local_44c8,&local_6958);
  local_6ec0 = (longlong *)&local_6a20;
  local_6a20 = DAT_14c967fcc;
  local_6ec8 = (undefined *)CONCAT44(local_6ec8._4_4_,0x3f800000);
  FUN_1414fd764(&local_6a18,&DAT_14c98dc00,0x40400000,&DAT_14c98dae8);
  FUN_140f13d9e(local_4418,&local_6a18);
  FUN_141479b70(local_9c8,&local_4bc8);
  plVar2 = local_6978;
  local_6a18 = &PTR_FUN_149ed05f0;
  if (local_6978 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6978 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6978)(local_6978);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_68b8;
  local_6958 = &PTR_FUN_149ed05f0;
  if (local_68b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68b8)(local_68b8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_67f8;
  puVar7 = local_6eb0;
  local_6898 = &PTR_FUN_149ed05f0;
  if (local_67f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_67f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_67f8)(local_67f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6728;
  local_67c8 = &PTR_FUN_149ed05f0;
  if (local_6728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6728)(local_6728);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_67e0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_4e98;
  local_4f38[0] = &PTR_FUN_149ed05f0;
  if (local_4e98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4e98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4e98)(local_4e98);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6e88[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_53d8;
  local_5478[0] = &PTR_FUN_149ed05f0;
  if (local_53d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_53d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_53d8)(local_53d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6db8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_6678;
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6ce8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6c18 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_2e68;
  local_2f08[0] = &PTR_FUN_149ed05f0;
  if (local_2e68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2e68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2e68)(local_2e68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6b48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_2518;
  local_25b8[0] = &PTR_FUN_149ed05f0;
  if (local_2518 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2518 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2518)(local_2518);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_1bc8;
  local_1c68[0] = &PTR_FUN_149ed05f0;
  if (local_1bc8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1bc8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1bc8)(local_1bc8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_1318[0] = &PTR_FUN_149ed05f0;
  if (local_1278 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1278 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1278)(local_1278);
      LOCK();
      piVar3 = (int *)((longlong)local_1278 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1278 + 0x10))(local_1278);
      }
    }
  }
  FUN_140ffdb16(&local_4bc8);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a28,"Checkbox",1);
  FUN_14154bcd8(uVar4,local_6a28,local_9c8);
  FUN_1414c3a06(&local_4bc8);
  local_4bc0 = 1;
  local_6958 = DAT_14c84635c;
  FUN_1412ce202(local_1c68);
  FUN_140f13d9e(local_4bb8,local_1c68);
  local_6a18 = DAT_14c84635c;
  FUN_1412ce202(local_25b8);
  FUN_140f13d9e(local_4b08,local_25b8);
  local_6b48 = DAT_14c84635c;
  FUN_1412ce202(local_2f08);
  FUN_140f13d9e(local_4a58,local_2f08);
  local_6c18 = DAT_14c84635c;
  FUN_1412ce202(local_5dc8);
  FUN_140f13d9e(local_49a8,local_5dc8);
  local_6ce8[0] = DAT_14c84635c;
  FUN_1412ce202(&local_6718);
  FUN_140f13d9e(&local_48f8,&local_6718);
  local_6db8 = DAT_14c84635c;
  FUN_1412ce202(local_5478);
  FUN_140f13d9e(&local_4848,local_5478);
  local_6e88[0] = DAT_14c84635c;
  FUN_1412ce202(local_4f38);
  FUN_140f13d9e(&local_4798,local_4f38);
  local_67e0 = DAT_14c84635c;
  FUN_1412ce202(&local_67c8);
  FUN_140f13d9e(&local_46e8,&local_67c8);
  local_6a58[0] = DAT_14c84635c;
  FUN_1412ce202(&local_6898);
  FUN_140f13d9e(local_4638,&local_6898);
  local_4368 = _DAT_14c98dac0;
  uStack_4360 = uRam000000014c98dac8;
  local_4358 = DAT_14c98dad0;
  local_4354 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_434c = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4344 = DAT_14c98db48;
  local_4340 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4338 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4330 = DAT_14c98db48;
  local_432c = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4324 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_431c = DAT_14c98db48;
  local_4308 = DAT_14c98db48;
  local_4318 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4310 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4304 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_42fc = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_42f4 = DAT_14c98db48;
  FUN_141479b70(local_1318,&local_4bc8);
  plVar2 = local_67f8;
  local_6898 = &PTR_FUN_149ed05f0;
  if (local_67f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_67f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_67f8)(local_67f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6728;
  local_67c8 = &PTR_FUN_149ed05f0;
  if (local_6728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6728)(local_6728);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_4e98;
  local_4f38[0] = &PTR_FUN_149ed05f0;
  if (local_4e98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4e98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4e98)(local_4e98);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_53d8;
  local_5478[0] = &PTR_FUN_149ed05f0;
  if (local_53d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_53d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_53d8)(local_53d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6678;
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_2e68;
  local_2f08[0] = &PTR_FUN_149ed05f0;
  if (local_2e68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2e68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2e68)(local_2e68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_2518;
  local_25b8[0] = &PTR_FUN_149ed05f0;
  if (local_2518 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2518 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2518)(local_2518);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_1c68[0] = &PTR_FUN_149ed05f0;
  if (local_1bc8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1bc8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1bc8)(local_1bc8);
      LOCK();
      piVar3 = (int *)((longlong)local_1bc8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1bc8 + 0x10))(local_1bc8);
      }
    }
  }
  FUN_140ffdb16(&local_4bc8);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a30,"TransparentCheckBox",1);
  FUN_14154bcd8(uVar4,local_6a30,local_1318);
  FUN_1414c3a06(&local_4bc8);
  local_4bc0 = 1;
  local_67c8 = DAT_14c84635c;
  FUN_14154bc0c(local_25b8,&DAT_14c98db10,0x40800000);
  FUN_140f13d9e(local_49a8,local_25b8);
  local_6898 = DAT_14c84635c;
  FUN_14154bc0c(local_2f08,&DAT_14c98dbec,0x40800000);
  FUN_140f13d9e(&local_48f8,local_2f08);
  local_6958 = DAT_14c84635c;
  FUN_14154bc0c(local_5dc8,&DAT_14c98dbc4,0x40800000);
  FUN_140f13d9e(&local_4848,local_5dc8);
  local_6a18 = DAT_14c84635c;
  FUN_1412ce202(&local_6718);
  FUN_140f13d9e(local_4bb8,&local_6718);
  local_6b48 = DAT_14c84635c;
  FUN_14154bc0c(local_5478,&DAT_14c98dbc4,0x40800000);
  FUN_140f13d9e(local_4b08,local_5478);
  local_6c18 = DAT_14c84635c;
  FUN_14154bc0c(local_4f38,&DAT_14c98dbc4,0x40800000);
  FUN_140f13d9e(local_4a58,local_4f38);
  local_4368 = _DAT_14c98dac0;
  uStack_4360 = uRam000000014c98dac8;
  local_4358 = DAT_14c98dad0;
  local_4354 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_434c = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4344 = DAT_14c98db48;
  local_4330 = DAT_14c98db48;
  local_431c = DAT_14c98db48;
  local_4308 = DAT_14c98db48;
  local_42f4 = DAT_14c98db48;
  local_4588 = _DAT_14c968054;
  uStack_4584 = uRam000000014c968058;
  uStack_4580 = uRam000000014c96805c;
  uStack_457c = uRam000000014c968060;
  local_4340 = local_4354;
  uStack_4338 = uStack_434c;
  local_432c = local_4354;
  uStack_4324 = uStack_434c;
  local_4318 = local_4354;
  uStack_4310 = uStack_434c;
  local_4304 = local_4354;
  uStack_42fc = uStack_434c;
  FUN_141479b70(local_1c68,&local_4bc8);
  plVar2 = local_4e98;
  local_4f38[0] = &PTR_FUN_149ed05f0;
  if (local_4e98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4e98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4e98)(local_4e98);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_53d8;
  local_5478[0] = &PTR_FUN_149ed05f0;
  if (local_53d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_53d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_53d8)(local_53d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6678;
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_2e68;
  local_2f08[0] = &PTR_FUN_149ed05f0;
  if (local_2e68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2e68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2e68)(local_2e68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_25b8[0] = &PTR_FUN_149ed05f0;
  if (local_2518 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2518 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2518)(local_2518);
      LOCK();
      piVar3 = (int *)((longlong)local_2518 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_2518 + 0x10))(local_2518);
      }
    }
  }
  FUN_140ffdb16(&local_4bc8);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a38,"ToggleButtonCheckbox",1);
  FUN_14154bcd8(uVar4,local_6a38,local_1c68);
  FUN_1414c3a06(&local_4bc8);
  local_4bc0 = 1;
  local_6898 = DAT_14c84635c;
  FUN_14154bc0c(local_2f08,&DAT_14c98dc00,0x40800000);
  FUN_140f13d9e(local_49a8,local_2f08);
  local_6958 = DAT_14c84635c;
  FUN_14154bc0c(local_5dc8,&DAT_14c98dae8,0x40800000);
  FUN_140f13d9e(&local_48f8,local_5dc8);
  local_6a18 = DAT_14c84635c;
  FUN_14154bc0c(&local_6718,&DAT_14c98dc00,0x40800000);
  FUN_140f13d9e(&local_4848,&local_6718);
  local_6b48 = DAT_14c84635c;
  FUN_1412ce202(local_5478);
  FUN_140f13d9e(local_4bb8,local_5478);
  local_6c18 = DAT_14c84635c;
  FUN_14154bc0c(local_4f38,&DAT_14c98dae8,0x40800000);
  FUN_140f13d9e(local_4b08,local_4f38);
  local_6ce8[0] = DAT_14c84635c;
  FUN_14154bc0c(&local_67c8,&DAT_14c98dc00,0x40800000);
  FUN_140f13d9e(local_4a58,&local_67c8);
  local_4368 = _DAT_14c98dac0;
  uStack_4360 = uRam000000014c98dac8;
  local_4358 = DAT_14c98dad0;
  local_4354 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_434c = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4344 = DAT_14c98db48;
  local_4330 = DAT_14c98db48;
  local_432c = _DAT_14c98db4c;
  uStack_4324 = uRam000000014c98db54;
  local_431c = DAT_14c98db5c;
  local_4308 = DAT_14c98db5c;
  local_4318 = _DAT_14c98db4c;
  uStack_4310 = uRam000000014c98db54;
  local_4588 = _DAT_14c968054;
  uStack_4584 = uRam000000014c968058;
  uStack_4580 = uRam000000014c96805c;
  uStack_457c = uRam000000014c968060;
  local_4340 = local_4354;
  uStack_4338 = uStack_434c;
  FUN_141479b70(local_25b8,&local_4bc8);
  plVar2 = local_6728;
  local_67c8 = &PTR_FUN_149ed05f0;
  if (local_6728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6728)(local_6728);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_4e98;
  local_4f38[0] = &PTR_FUN_149ed05f0;
  if (local_4e98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4e98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4e98)(local_4e98);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_53d8;
  local_5478[0] = &PTR_FUN_149ed05f0;
  if (local_53d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_53d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_53d8)(local_53d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6678;
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_2f08[0] = &PTR_FUN_149ed05f0;
  if (local_2e68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2e68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2e68)(local_2e68);
      LOCK();
      piVar3 = (int *)((longlong)local_2e68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_2e68 + 0x10))(local_2e68);
      }
    }
  }
  FUN_140ffdb16(&local_4bc8);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a40,"ToggleButtonCheckboxAlt",1);
  FUN_14154bcd8(uVar4,local_6a40,local_25b8);
  FUN_1414c3a06(&local_4bc8);
  local_4bc0 = 1;
  local_6958 = DAT_14c84635c;
  FUN_1412ce202(local_5dc8);
  FUN_140f13d9e(local_4bb8,local_5dc8);
  local_6a18 = DAT_14c84635c;
  FUN_14154bc0c(&local_6718,&DAT_14c98dae8,0x40800000);
  FUN_140f13d9e(local_4b08,&local_6718);
  local_6b48 = DAT_14c84635c;
  FUN_14154bc0c(local_5478,&DAT_14c98dc78,0x40800000);
  FUN_140f13d9e(local_4a58,local_5478);
  local_6c18 = DAT_14c84635c;
  FUN_14154bc0c(local_4f38,&DAT_14c98dbc4,0x40800000);
  FUN_140f13d9e(local_49a8,local_4f38);
  local_6ce8[0] = DAT_14c84635c;
  FUN_14154bc0c(&local_67c8,&DAT_14c98dae8,0x40800000);
  FUN_140f13d9e(&local_48f8,&local_67c8);
  local_6db8 = DAT_14c84635c;
  FUN_14154bc0c(&local_6898,&DAT_14c98dc78,0x40800000);
  FUN_140f13d9e(&local_4848,&local_6898);
  local_4368 = _DAT_14c98dac0;
  uStack_4360 = uRam000000014c98dac8;
  local_4358 = DAT_14c98dad0;
  local_4354 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_434c = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4344 = DAT_14c98db48;
  local_4330 = DAT_14c98db48;
  local_431c = DAT_14c98db48;
  local_4308 = DAT_14c98db48;
  local_42f4 = DAT_14c98db48;
  local_4588 = 0x41000000;
  uStack_4584 = 0x40400000;
  uStack_4580 = 0x41000000;
  uStack_457c = 0x40400000;
  local_4340 = local_4354;
  uStack_4338 = uStack_434c;
  local_432c = local_4354;
  uStack_4324 = uStack_434c;
  local_4318 = local_4354;
  uStack_4310 = uStack_434c;
  local_4304 = local_4354;
  uStack_42fc = uStack_434c;
  FUN_141479b70(local_2f08,&local_4bc8);
  plVar2 = local_67f8;
  local_6898 = &PTR_FUN_149ed05f0;
  if (local_67f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_67f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_67f8)(local_67f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6728;
  local_67c8 = &PTR_FUN_149ed05f0;
  if (local_6728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6728)(local_6728);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_4e98;
  local_4f38[0] = &PTR_FUN_149ed05f0;
  if (local_4e98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4e98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4e98)(local_4e98);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_53d8;
  local_5478[0] = &PTR_FUN_149ed05f0;
  if (local_53d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_53d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_53d8)(local_53d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6678;
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_140ffdb16(&local_4bc8);
  puVar7 = local_6eb0;
  uVar4 = *local_6eb0;
  FUN_145d8e846(&local_4bc8);
  FUN_1414c3ed0(local_4bb8,local_2f08);
  FUN_1414c3ed0(local_4268,local_2f08);
  FUN_1414c3ed0(local_3918,local_2f08);
  local_6718 = DAT_14c84635c;
  FUN_14154bc0c(local_5dc8,&DAT_14c98dc00,0x40800000);
  FUN_140f13d9e(local_2fc8,local_5dc8);
  local_2f18 = &DAT_3f8000003f800000;
  puStack_2f10 = &DAT_3f8000003f800000;
  FUN_1446ddc76(&local_6a48,"SegmentedControl",1);
  FUN_14154bdda(uVar4,local_6a48,&local_4bc8);
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_145d8e7d0(&local_4bc8);
  local_6898 = (undefined **)0x3e8000003e800000;
  uStack_6890 = 0x3e8000003e800000;
  local_6b60[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,&local_6958,"/Starship/CoreWidgets/SegmentedBox/left",
             &DAT_149eca162);
  local_6ec8 = &DAT_14c98dbc4;
  FUN_145d8e714(&local_4bc8,&local_6958,local_6b60,&local_6898);
  FUN_140f13d9e(local_2ef8,&local_4bc8);
  local_6a18 = (undefined **)0x3e8000003e800000;
  uStack_6a10 = 0x3e8000003e800000;
  local_6c30[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,&local_6b48,"/Starship/CoreWidgets/SegmentedBox/left",
             &DAT_149eca162);
  local_6ec8 = &DAT_14c98dae8;
  FUN_145d8e714(local_5dc8,&local_6b48,local_6c30,&local_6a18);
  FUN_140f13d9e(local_2e48,local_5dc8);
  local_6c18 = (undefined **)0x3e8000003e800000;
  uStack_6c10 = 0x3e8000003e800000;
  local_6d00[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6ce8,"/Starship/CoreWidgets/SegmentedBox/left",&DAT_149eca162
            );
  local_6ec8 = &DAT_14c98dc3c;
  FUN_145d8e714(&local_6718,local_6ce8,local_6d00,&local_6c18);
  FUN_140f13d9e(local_2d98,&local_6718);
  local_6db8 = (undefined **)0x3e8000003e800000;
  uStack_6db0 = 0x3e8000003e800000;
  local_6dd0[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6e88,"/Starship/CoreWidgets/SegmentedBox/left",&DAT_149eca162
            );
  local_6ec8 = &DAT_14c98db10;
  FUN_145d8e714(local_5478,local_6e88,local_6dd0,&local_6db8);
  FUN_140f13d9e(local_2ce8,local_5478);
  local_67e0 = (undefined **)0x3e8000003e800000;
  uStack_67d8 = 0x3e8000003e800000;
  local_6ea0[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6a58,"/Starship/CoreWidgets/SegmentedBox/left",&DAT_149eca162
            );
  local_6ec8 = &DAT_14c98dbec;
  FUN_145d8e714(local_4f38,local_6a58,local_6ea0,&local_67e0);
  FUN_140f13d9e(local_2c38,local_4f38);
  local_6a68 = (undefined **)0x3e8000003e800000;
  uStack_6a60 = 0x3e8000003e800000;
  local_67d0 = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6a78,"/Starship/CoreWidgets/SegmentedBox/left",&DAT_149eca162
            );
  local_6ec8 = &DAT_14c98dd18;
  FUN_145d8e714(&local_67c8,local_6a78,&local_67d0,&local_6a68);
  FUN_140f13d9e(local_2b88,&local_67c8);
  plVar2 = local_6728;
  local_67c8 = &PTR_FUN_149ed05f0;
  if (local_6728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6728)(local_6728);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6a78[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_4f38[0] = &PTR_FUN_149ed05f0;
  if (local_4e98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_4e98 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_4e98)(local_4e98);
      LOCK();
      piVar3 = (int *)((longlong)local_4e98 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_4e98 + 0x10))(local_4e98);
      }
    }
  }
  if (local_6a58[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_53d8;
  local_5478[0] = &PTR_FUN_149ed05f0;
  if (local_53d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_53d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_53d8)(local_53d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6e88[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_6678;
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6ce8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6b48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_4bc8 = &PTR_FUN_149ed05f0;
  if (local_4b28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_4b28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_4b28)(local_4b28);
      LOCK();
      piVar3 = (int *)((longlong)local_4b28 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_4b28 + 0x10))(local_4b28);
      }
    }
  }
  if (local_6958 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a80,"SegmentedCombo.Left",1);
  FUN_14154bcd8(uVar4,local_6a80,local_2f08);
  FUN_140ca8d78(&local_4bc8);
  local_67c8 = (undefined **)0x3e8000003e800000;
  uStack_67c0 = 0x3e8000003e800000;
  local_6ce8[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,&local_6898,"/Starship/CoreWidgets/SegmentedBox/right",
             &DAT_149eca162);
  local_6ec8 = &DAT_14c98dc3c;
  FUN_145d8e714(local_5dc8,&local_6898,local_6ce8,&local_67c8);
  puVar7 = local_6eb0;
  FUN_140f13d9e(local_4bb8,local_5dc8);
  local_6958 = (undefined **)0x3e8000003e800000;
  uStack_6950 = 0x3e8000003e800000;
  local_6db8 = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,&local_6a18,"/Starship/CoreWidgets/SegmentedBox/right",
             &DAT_149eca162);
  local_6ec8 = &DAT_14c98dae8;
  FUN_145d8e714(&local_6718,&local_6a18,&local_6db8,&local_6958);
  FUN_140f13d9e(local_4b08,&local_6718);
  local_6b48 = (undefined **)0x3e8000003e800000;
  uStack_6b40 = 0x3e8000003e800000;
  local_6e88[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,&local_6c18,"/Starship/CoreWidgets/SegmentedBox/right",
             &DAT_149eca162);
  local_6ec8 = &DAT_14c98dc3c;
  FUN_145d8e714(local_5478,&local_6c18,local_6e88,&local_6b48);
  FUN_140f13d9e(local_4a58,local_5478);
  local_48f8 = _DAT_14c98dac0;
  uStack_48f0 = uRam000000014c98dac8;
  local_48e8 = DAT_14c98dad0;
  local_48e4 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_48dc = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_48d4 = DAT_14c98db48;
  local_48d0 = _DAT_14c98db10;
  uStack_48cc = uRam000000014c98db14;
  uStack_48c8 = uRam000000014c98db18;
  uStack_48c4 = uRam000000014c98db1c;
  local_48c0 = DAT_14c98db20;
  local_48bc = _DAT_14c98dac0;
  uStack_48b4 = uRam000000014c98dac8;
  local_48ac = DAT_14c98dad0;
  local_4898 = 0;
  uStack_4890 = 0;
  local_48a8 = 0;
  uStack_48a0 = 0;
  FUN_141478cf2(local_4f38,&local_4bc8);
  local_5478[0] = &PTR_FUN_149ed05f0;
  if (local_53d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_53d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_53d8)(local_53d8);
      LOCK();
      piVar3 = (int *)((longlong)local_53d8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_53d8 + 0x10))(local_53d8);
      }
    }
  }
  if (local_6c18 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_6678;
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6a18 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_5d28;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_6898 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd6b6(&local_4bc8);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a88,"ComboButton",1);
  lVar5 = FUN_145a4e810(uVar4,local_6a88,0,0);
  local_4bc8 = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_4bb8,lVar5 + 0x10);
  local_4848 = &PTR_FUN_149ed05f0;
  local_4840 = *(undefined4 *)(lVar5 + 0x388);
  uStack_483c = *(undefined4 *)(lVar5 + 0x38c);
  uStack_4838 = *(undefined4 *)(lVar5 + 0x390);
  uStack_4834 = *(undefined4 *)(lVar5 + 0x394);
  local_4830 = *(undefined4 *)(lVar5 + 0x398);
  uStack_482c = *(undefined4 *)(lVar5 + 0x39c);
  uStack_4828 = *(undefined4 *)(lVar5 + 0x3a0);
  uStack_4824 = *(undefined4 *)(lVar5 + 0x3a4);
  local_4820 = *(undefined4 *)(lVar5 + 0x3a8);
  uStack_481c = *(undefined4 *)(lVar5 + 0x3ac);
  uStack_4818 = *(undefined4 *)(lVar5 + 0x3b0);
  uStack_4814 = *(undefined4 *)(lVar5 + 0x3b4);
  local_4810 = *(longlong *)(lVar5 + 0x3b8);
  if ((DAT_14c950c29 == 1) && (local_4810 != 0)) {
    FUN_1456cec3c();
  }
  puVar7 = (undefined8 *)(lVar5 + 0x3c0);
  puVar8 = local_4808;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_47b4 = *(undefined1 *)(lVar5 + 0x414);
  local_47b8 = *(undefined4 *)(lVar5 + 0x410);
  local_47b0 = *(undefined8 *)(lVar5 + 0x418);
  local_47a8 = *(longlong *)(lVar5 + 0x420);
  if (local_47a8 != 0) {
    LOCK();
    *(int *)(local_47a8 + 8) = *(int *)(local_47a8 + 8) + 1;
    UNLOCK();
  }
  local_47a0 = *(undefined8 *)(lVar5 + 0x428);
  local_4798 = *(undefined8 *)(lVar5 + 0x430);
  uStack_4790 = *(undefined8 *)(lVar5 + 0x438);
  local_4788 = *(undefined8 *)(lVar5 + 0x440);
  local_4778 = &PTR_FUN_149ed05f0;
  local_4770 = *(undefined4 *)(lVar5 + 0x458);
  uStack_476c = *(undefined4 *)(lVar5 + 0x45c);
  uStack_4768 = *(undefined4 *)(lVar5 + 0x460);
  uStack_4764 = *(undefined4 *)(lVar5 + 0x464);
  local_4760 = *(undefined4 *)(lVar5 + 0x468);
  uStack_475c = *(undefined4 *)(lVar5 + 0x46c);
  uStack_4758 = *(undefined4 *)(lVar5 + 0x470);
  uStack_4754 = *(undefined4 *)(lVar5 + 0x474);
  local_4750 = *(undefined4 *)(lVar5 + 0x478);
  uStack_474c = *(undefined4 *)(lVar5 + 0x47c);
  uStack_4748 = *(undefined4 *)(lVar5 + 0x480);
  uStack_4744 = *(undefined4 *)(lVar5 + 0x484);
  local_4740 = *(longlong *)(lVar5 + 0x488);
  if ((DAT_14c950c29 == 1) && (local_4740 != 0)) {
    FUN_1456cec3c();
  }
  puVar7 = (undefined8 *)(lVar5 + 0x490);
  puVar8 = auStack_4738;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_46e4 = *(undefined1 *)(lVar5 + 0x4e4);
  local_46e8 = *(undefined4 *)(lVar5 + 0x4e0);
  local_46e0 = *(undefined8 *)(lVar5 + 0x4e8);
  local_46d8 = *(longlong *)(lVar5 + 0x4f0);
  if (local_46d8 != 0) {
    LOCK();
    *(int *)(local_46d8 + 8) = *(int *)(local_46d8 + 8) + 1;
    UNLOCK();
  }
  local_46d0 = *(undefined8 *)(lVar5 + 0x4f8);
  local_46c8 = *(undefined8 *)(lVar5 + 0x500);
  uStack_46c0 = *(undefined8 *)(lVar5 + 0x508);
  local_46a8 = *(undefined4 *)(lVar5 + 0x520);
  uStack_46a4 = *(undefined4 *)(lVar5 + 0x524);
  uStack_46a0 = *(undefined4 *)(lVar5 + 0x528);
  uStack_469c = *(undefined4 *)(lVar5 + 0x52c);
  local_4698 = *(undefined1 *)(lVar5 + 0x530);
  local_46b8 = 0x40c00000;
  uStack_46b4 = 0x40000000;
  uStack_46b0 = 0x40c00000;
  uStack_46ac = 0x40000000;
  FUN_141254448(local_4bb8,local_4f38);
  local_6718 = (undefined **)&DAT_3f8000003f800000;
  puStack_6710 = &DAT_3f8000003f800000;
  local_6898 = (undefined **)0x41c0000040c00000;
  (**(code **)(*(longlong *)*local_6eb0 + 0xe8))
            ((longlong *)*local_6eb0,&local_67c8,"Starship/Common/ellipsis-vertical-narrow",L".svg")
  ;
  local_6ec0 = (longlong *)CONCAT44(local_6ec0._4_4_,3);
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14140806a(local_5dc8,&local_67c8,&local_6898,&local_6718);
  local_5dc8[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_4848,local_5dc8);
  local_5478[0] = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_5468,local_4bb8);
  local_50f8 = &PTR_FUN_149ed05f0;
  local_50f0 = local_4840;
  uStack_50ec = uStack_483c;
  uStack_50e8 = uStack_4838;
  uStack_50e4 = uStack_4834;
  local_50e0 = local_4830;
  uStack_50dc = uStack_482c;
  uStack_50d8 = uStack_4828;
  uStack_50d4 = uStack_4824;
  local_50d0 = local_4820;
  uStack_50cc = uStack_481c;
  uStack_50c8 = uStack_4818;
  uStack_50c4 = uStack_4814;
  local_50c0 = local_4810;
  if ((local_4810 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar7 = local_6eb0;
  puVar8 = local_4808;
  puVar9 = local_50b8;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_5064 = local_47b4;
  local_5068 = local_47b8;
  local_5060 = local_47b0;
  local_5058 = local_47a8;
  if (local_47a8 != 0) {
    LOCK();
    *(int *)(local_47a8 + 8) = *(int *)(local_47a8 + 8) + 1;
    UNLOCK();
  }
  local_5050 = local_47a0;
  local_5048 = local_4798;
  uStack_5040 = uStack_4790;
  local_5038 = local_4788;
  local_5028 = &PTR_FUN_149ed05f0;
  local_5020 = local_4770;
  uStack_501c = uStack_476c;
  uStack_5018 = uStack_4768;
  uStack_5014 = uStack_4764;
  local_5010 = local_4760;
  uStack_500c = uStack_475c;
  uStack_5008 = uStack_4758;
  uStack_5004 = uStack_4754;
  local_5000 = local_4750;
  uStack_4ffc = uStack_474c;
  uStack_4ff8 = uStack_4748;
  uStack_4ff4 = uStack_4744;
  local_4ff0 = local_4740;
  if ((local_4740 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar8 = auStack_4738;
  puVar9 = local_4fe8;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_4f94 = local_46e4;
  local_4f98 = local_46e8;
  local_4f90 = local_46e0;
  local_4f88 = local_46d8;
  if (local_46d8 != 0) {
    LOCK();
    *(int *)(local_46d8 + 8) = *(int *)(local_46d8 + 8) + 1;
    UNLOCK();
  }
  local_4f80 = local_46d0;
  local_4f78 = (undefined4)local_46c8;
  uStack_4f74 = local_46c8._4_4_;
  uStack_4f70 = (undefined4)uStack_46c0;
  uStack_4f6c = uStack_46c0._4_4_;
  local_4f68 = local_46b8;
  uStack_4f64 = uStack_46b4;
  uStack_4f60 = uStack_46b0;
  uStack_4f5c = uStack_46ac;
  local_4f58 = local_46a8;
  uStack_4f54 = uStack_46a4;
  uStack_4f50 = uStack_46a0;
  uStack_4f4c = uStack_469c;
  local_4f48 = local_4698;
  local_5dc8[0] = &PTR_FUN_149ed05f0;
  if (local_5d28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5d28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5d28)(local_5d28);
      LOCK();
      piVar3 = (int *)((longlong)local_5d28 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_5d28 + 0x10))(local_5d28);
      }
    }
  }
  if (local_67c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd624(&local_4bc8);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a90,"SegmentedCombo.Right",1);
  FUN_1416427d0(uVar4,local_6a90,local_5478);
  FUN_141479b70(local_5dc8,local_1c68);
  local_6958 = DAT_14c84635c;
  FUN_14154bc0c(&local_6718,&DAT_14c98dbc4,0x40800000);
  FUN_140f13d9e(local_5db8,&local_6718);
  local_6a18 = DAT_14c84635c;
  FUN_14154bc0c(&local_67c8,&DAT_14c98dae8,0x40800000);
  FUN_140f13d9e(local_5d08,&local_67c8);
  local_6b48 = DAT_14c84635c;
  FUN_14154bc0c(&local_6898,&DAT_14c98dc78,0x40800000);
  FUN_140f13d9e(local_5c58,&local_6898);
  FUN_141479b70(&local_4bc8,local_5dc8);
  plVar2 = local_67f8;
  local_6898 = &PTR_FUN_149ed05f0;
  if (local_67f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_67f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_67f8)(local_67f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6728;
  local_67c8 = &PTR_FUN_149ed05f0;
  if (local_6728 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6728 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6728)(local_6728);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_6718 = &PTR_FUN_149ed05f0;
  if (local_6678 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6678 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6678)(local_6678);
      LOCK();
      piVar3 = (int *)((longlong)local_6678 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6678 + 0x10))(local_6678);
      }
    }
  }
  FUN_140ffdb16(local_5dc8);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6a98,"SegmentedCombo.ButtonOnly",1);
  FUN_14154bcd8(uVar4,local_6a98,&local_4bc8);
  FUN_1414c3a06(&local_6718);
  puStack_6710 = (undefined1 *)((ulonglong)puStack_6710 & 0xffffffffffffff00);
  local_5eb8 = 0x3f800000;
  uStack_5eb4 = 0x3f800000;
  uStack_5eb0 = 0x3f800000;
  uStack_5eac = 0x3f800000;
  local_5ea8 = 0;
  local_5ea4 = 0x3f800000;
  uStack_5ea0 = 0x3f800000;
  uStack_5e9c = 0x3f800000;
  uStack_5e98 = 0x3f800000;
  local_5e94 = 0;
  local_5e90 = 0x3f800000;
  uStack_5e8c = 0x3f800000;
  uStack_5e88 = 0x3f800000;
  uStack_5e84 = 0x3f800000;
  local_5e80 = 0;
  local_5e7c = 0x3f800000;
  uStack_5e78 = 0x3f800000;
  uStack_5e74 = 0x3f800000;
  uStack_5e70 = 0x3f800000;
  local_5e6c = 0;
  local_5e68 = 0x3f800000;
  uStack_5e64 = 0x3f800000;
  uStack_5e60 = 0x3f800000;
  uStack_5e5c = 0x3f800000;
  local_5e58 = 0;
  local_5e54 = 0x3f800000;
  uStack_5e50 = 0x3f800000;
  uStack_5e4c = 0x3f800000;
  uStack_5e48 = 0x3f800000;
  local_5e44 = 0;
  local_5e40 = 0x3f800000;
  uStack_5e3c = 0x3f800000;
  uStack_5e38 = 0x3f800000;
  uStack_5e34 = 0x3f800000;
  local_5e30 = 0;
  local_67d0 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,&local_67e0,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(&local_67c8,&local_67e0,&local_67d0,&DAT_14c98dbc4);
  local_67c8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_6708,&local_67c8);
  local_68a0 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6a58,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(&local_6898,local_6a58,&local_68a0,&DAT_14c98dae8);
  local_6898 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_6658,&local_6898);
  local_6960 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,&local_6a68,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(&local_6958,&local_6a68,&local_6960,&DAT_14c98dbc4);
  local_6958 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_65a8,&local_6958);
  local_6a20 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6a78,"/Starship/CoreWidgets/CheckBox/radio-on",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(&local_6a18,local_6a78,&local_6a20,&DAT_14c98db10);
  local_6a18 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_64f8,&local_6a18);
  local_6b50 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*local_6eb0 + 0xe8))
            ((longlong *)*local_6eb0,local_6b60,"/Starship/CoreWidgets/CheckBox/radio-on",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(&local_6b48,local_6b60,&local_6b50,&DAT_14c98dbec);
  puVar7 = local_6eb0;
  local_6b48 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_6448,&local_6b48);
  local_6c20 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6c30,"/Starship/CoreWidgets/CheckBox/radio-on",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(&local_6c18,local_6c30,&local_6c20,&DAT_14c98db10);
  local_6c18 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_6398,&local_6c18);
  local_6cf0 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6d00,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(local_6ce8,local_6d00,&local_6cf0,&DAT_14c98dca0);
  local_6ce8[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_62e8,local_6ce8);
  local_6dc0 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6dd0,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg");
  local_6ec0._0_4_ = 3;
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(&local_6db8,local_6dd0,&local_6dc0,&DAT_14c98db38);
  local_6db8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_6238,&local_6db8);
  local_6e90 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar7 + 0xe8))
            ((longlong *)*puVar7,local_6ea0,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg");
  local_6ec0 = (longlong *)CONCAT44(local_6ec0._4_4_,3);
  local_6ec8 = (undefined *)((ulonglong)local_6ec8 & 0xffffffff00000000);
  FUN_14154bb44(local_6e88,local_6ea0,&local_6e90,&DAT_14c98db38);
  local_6e88[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_6188,local_6e88);
  local_60d8 = 0x40800000;
  uStack_60d4 = 0x40800000;
  uStack_60d0 = 0x40800000;
  uStack_60cc = 0x40800000;
  FUN_141479b70(local_5dc8,&local_6718);
  local_6e88[0] = &PTR_FUN_149ed05f0;
  if (local_6de8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6de8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6de8)(local_6de8);
      LOCK();
      piVar3 = (int *)((longlong)local_6de8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6de8 + 0x10))(local_6de8);
      }
    }
  }
  if (local_6ea0[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6db8 = &PTR_FUN_149ed05f0;
  if (local_6d18 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6d18 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6d18)(local_6d18);
      LOCK();
      piVar3 = (int *)((longlong)local_6d18 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6d18 + 0x10))(local_6d18);
      }
    }
  }
  if (local_6dd0[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6ce8[0] = &PTR_FUN_149ed05f0;
  if (local_6c48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6c48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6c48)(local_6c48);
      LOCK();
      piVar3 = (int *)((longlong)local_6c48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6c48 + 0x10))(local_6c48);
      }
    }
  }
  if (local_6d00[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6c18 = &PTR_FUN_149ed05f0;
  if (local_6b78 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6b78 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6b78)(local_6b78);
      LOCK();
      piVar3 = (int *)((longlong)local_6b78 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6b78 + 0x10))(local_6b78);
      }
    }
  }
  if (local_6c30[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6b48 = &PTR_FUN_149ed05f0;
  if (local_6aa8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6aa8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6aa8)(local_6aa8);
      LOCK();
      piVar3 = (int *)((longlong)local_6aa8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6aa8 + 0x10))(local_6aa8);
      }
    }
  }
  if (local_6b60[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6a18 = &PTR_FUN_149ed05f0;
  if (local_6978 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6978 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6978)(local_6978);
      LOCK();
      piVar3 = (int *)((longlong)local_6978 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6978 + 0x10))(local_6978);
      }
    }
  }
  if (local_6a78[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6958 = &PTR_FUN_149ed05f0;
  if (local_68b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68b8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68b8)(local_68b8);
      LOCK();
      piVar3 = (int *)((longlong)local_68b8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68b8 + 0x10))(local_68b8);
      }
    }
  }
  if (local_6a68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6898 = &PTR_FUN_149ed05f0;
  if (local_67f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_67f8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_67f8)(local_67f8);
      LOCK();
      piVar3 = (int *)((longlong)local_67f8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_67f8 + 0x10))(local_67f8);
      }
    }
  }
  if (local_6a58[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_67c8 = &PTR_FUN_149ed05f0;
  if (local_6728 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6728 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6728)(local_6728);
      LOCK();
      piVar3 = (int *)((longlong)local_6728 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6728 + 0x10))(local_6728);
      }
    }
  }
  if (local_67e0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffdb16(&local_6718);
  uVar4 = *puVar7;
  FUN_1446ddc76(&local_6ea8,"RadioButton",1);
  FUN_14154bcd8(uVar4,local_6ea8,local_5dc8);
  FUN_140ffdb16(local_5dc8);
  FUN_140ffdb16(&local_4bc8);
  FUN_140ffd624(local_5478);
  FUN_140ffd6b6(local_4f38);
  FUN_140ffdb16(local_2f08);
  FUN_140ffdb16(local_25b8);
  FUN_140ffdb16(local_1c68);
  FUN_140ffdb16(local_1318);
  FUN_140ffdb16(local_9c8);
  if ((local_70 ^ (ulonglong)auStack_6ee8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8e714 FUN_145d8e714 body=186 status=ok
// SIG undefined FUN_145d8e714(void)

undefined8 *
FUN_145d8e714(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_38,puVar1,1);
  local_50 = param_5;
  local_40 = 0;
  local_48 = 0;
  local_60 = 1;
  local_68 = 0;
  local_58 = param_3;
  FUN_1411bc492(param_1,1,local_38,param_4);
  *param_1 = &PTR_FUN_149eeb478;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8e7d0 FUN_145d8e7d0 body=118 status=ok
// SIG undefined FUN_145d8e7d0(void)

void FUN_145d8e7d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149edba00;
  param_1[0x380] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x394];
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
  FUN_140ffdb16(param_1 + 0x256);
  FUN_140ffdb16(param_1 + 300);
  FUN_140ffdb16(param_1 + 2);
  return;
}



// FUNCTION 145d8e846 FUN_145d8e846 body=397 status=ok
// SIG undefined FUN_145d8e846(void)

undefined8 * FUN_145d8e846(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149edba00;
  FUN_1414c3a06(param_1 + 2);
  FUN_1414c3a06(param_1 + 300);
  FUN_1414c3a06(param_1 + 0x256);
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x380] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x381) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x1c0c) = uStack_cc;
  *(undefined4 *)(param_1 + 0x382) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x1c14) = uStack_c4;
  *(undefined4 *)(param_1 + 899) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x1c1c) = uStack_bc;
  *(undefined4 *)(param_1 + 900) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x1c24) = uStack_b4;
  *(undefined4 *)(param_1 + 0x385) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x1c2c) = uStack_ac;
  *(undefined4 *)(param_1 + 0x386) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x1c34) = uStack_a4;
  param_1[0x387] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar4 = local_98;
  puVar5 = param_1 + 0x388;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x1c94) = local_44;
  *(undefined4 *)(param_1 + 0x392) = local_48;
  param_1[0x393] = local_40;
  param_1[0x394] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x395] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x395] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  param_1[0x396] = 0;
  param_1[0x397] = 0;
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d8e9d4 FUN_145d8e9d4 body=114 status=ok
// SIG undefined FUN_145d8e9d4(void)

void FUN_145d8e9d4(void)

{
  longlong *plVar1;
  
  FUN_141188b2c();
  FUN_145d8ea46(DAT_14c9a1f84);
  if (DAT_14c9a1f18 == &DAT_14c9a1f80) {
    DAT_14c9a1f18 = (undefined4 *)0x0;
  }
  if (DAT_14c9a1fc0 != 0) {
    plVar1 = &DAT_14c9a1fe0;
    if (DAT_14c9a1fd0 != (longlong *)0x0) {
      plVar1 = DAT_14c9a1fd0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a1fa8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8ea46 FUN_145d8ea46 body=242 status=ok
// SIG undefined FUN_145d8ea46(void)

void FUN_145d8ea46(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a1f28 != DAT_14c9a1f54) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a1f58;
    if (DAT_14c9a1f60 != (undefined *)0x0) {
      puVar6 = DAT_14c9a1f60;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a1f68 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a1f20 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a1f20 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a1f58;
        if (DAT_14c9a1f60 != (undefined *)0x0) {
          puVar6 = DAT_14c9a1f60;
        }
        lVar1 = DAT_14c9a1f20 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a1f20 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8eb38();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8eb38 FUN_145d8eb38 body=135 status=ok
// SIG undefined FUN_145d8eb38(void)

void FUN_145d8eb38(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a1f20;
  if (DAT_14c9a1f54 != 0) {
    *(int *)(DAT_14c9a1f20 + (longlong)DAT_14c9a1f50 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a1f54) {
    iVar4 = DAT_14c9a1f50;
  }
  puVar1[1] = iVar4;
  DAT_14c9a1f54 = DAT_14c9a1f54 + 1;
  puVar5 = &DAT_14c9a1f30;
  if (DAT_14c9a1f40 != (undefined *)0x0) {
    puVar5 = DAT_14c9a1f40;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a1f50 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8ebc0 FUN_145d8ebc0 body=114 status=ok
// SIG undefined FUN_145d8ebc0(void)

void FUN_145d8ebc0(void)

{
  longlong *plVar1;
  
  FUN_14604106e();
  FUN_145d8ec32(DAT_14c9a20b4);
  if (DAT_14c9a2050 == &DAT_14c9a20b0) {
    DAT_14c9a2050 = (undefined4 *)0x0;
  }
  if (DAT_14c9a20f0 != 0) {
    plVar1 = &DAT_14c9a2110;
    if (DAT_14c9a2100 != (longlong *)0x0) {
      plVar1 = DAT_14c9a2100;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a20d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8ec32 FUN_145d8ec32 body=242 status=ok
// SIG undefined FUN_145d8ec32(void)

void FUN_145d8ec32(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a2060 != DAT_14c9a208c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a2090;
    if (DAT_14c9a2098 != (undefined *)0x0) {
      puVar6 = DAT_14c9a2098;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a20a0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a2058 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a2058 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a2090;
        if (DAT_14c9a2098 != (undefined *)0x0) {
          puVar6 = DAT_14c9a2098;
        }
        lVar1 = DAT_14c9a2058 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a2058 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8ed24();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8ed24 FUN_145d8ed24 body=135 status=ok
// SIG undefined FUN_145d8ed24(void)

void FUN_145d8ed24(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a2058;
  if (DAT_14c9a208c != 0) {
    *(int *)(DAT_14c9a2058 + (longlong)DAT_14c9a2088 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a208c) {
    iVar4 = DAT_14c9a2088;
  }
  puVar1[1] = iVar4;
  DAT_14c9a208c = DAT_14c9a208c + 1;
  puVar5 = &DAT_14c9a2068;
  if (DAT_14c9a2078 != (undefined *)0x0) {
    puVar5 = DAT_14c9a2078;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a2088 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8edac FUN_145d8edac body=114 status=ok
// SIG undefined FUN_145d8edac(void)

void FUN_145d8edac(void)

{
  longlong *plVar1;
  
  FUN_1459150f6();
  FUN_145d8ee1e(DAT_14c9a21c4);
  if (DAT_14c9a2160 == &DAT_14c9a21c0) {
    DAT_14c9a2160 = (undefined4 *)0x0;
  }
  if (DAT_14c9a2200 != 0) {
    plVar1 = &DAT_14c9a2220;
    if (DAT_14c9a2210 != (longlong *)0x0) {
      plVar1 = DAT_14c9a2210;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a21e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8ee1e FUN_145d8ee1e body=242 status=ok
// SIG undefined FUN_145d8ee1e(void)

void FUN_145d8ee1e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a2170 != DAT_14c9a219c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a21a0;
    if (DAT_14c9a21a8 != (undefined *)0x0) {
      puVar6 = DAT_14c9a21a8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a21b0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a2168 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a2168 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a21a0;
        if (DAT_14c9a21a8 != (undefined *)0x0) {
          puVar6 = DAT_14c9a21a8;
        }
        lVar1 = DAT_14c9a2168 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a2168 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8ef10();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8ef10 FUN_145d8ef10 body=135 status=ok
// SIG undefined FUN_145d8ef10(void)

void FUN_145d8ef10(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a2168;
  if (DAT_14c9a219c != 0) {
    *(int *)(DAT_14c9a2168 + (longlong)DAT_14c9a2198 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a219c) {
    iVar4 = DAT_14c9a2198;
  }
  puVar1[1] = iVar4;
  DAT_14c9a219c = DAT_14c9a219c + 1;
  puVar5 = &DAT_14c9a2178;
  if (DAT_14c9a2188 != (undefined *)0x0) {
    puVar5 = DAT_14c9a2188;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a2198 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8ef98 FUN_145d8ef98 body=114 status=ok
// SIG undefined FUN_145d8ef98(void)

void FUN_145d8ef98(void)

{
  longlong *plVar1;
  
  FUN_14598ace2();
  FUN_145d8f00a(DAT_14c9a22d4);
  if (DAT_14c9a2270 == &DAT_14c9a22d0) {
    DAT_14c9a2270 = (undefined4 *)0x0;
  }
  if (DAT_14c9a2310 != 0) {
    plVar1 = &DAT_14c9a2330;
    if (DAT_14c9a2320 != (longlong *)0x0) {
      plVar1 = DAT_14c9a2320;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a22f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8f00a FUN_145d8f00a body=242 status=ok
// SIG undefined FUN_145d8f00a(void)

void FUN_145d8f00a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a2280 != DAT_14c9a22ac) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a22b0;
    if (DAT_14c9a22b8 != (undefined *)0x0) {
      puVar6 = DAT_14c9a22b8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a22c0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a2278 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a2278 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a22b0;
        if (DAT_14c9a22b8 != (undefined *)0x0) {
          puVar6 = DAT_14c9a22b8;
        }
        lVar1 = DAT_14c9a2278 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a2278 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8f0fc();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8f0fc FUN_145d8f0fc body=135 status=ok
// SIG undefined FUN_145d8f0fc(void)

void FUN_145d8f0fc(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a2278;
  if (DAT_14c9a22ac != 0) {
    *(int *)(DAT_14c9a2278 + (longlong)DAT_14c9a22a8 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a22ac) {
    iVar4 = DAT_14c9a22a8;
  }
  puVar1[1] = iVar4;
  DAT_14c9a22ac = DAT_14c9a22ac + 1;
  puVar5 = &DAT_14c9a2288;
  if (DAT_14c9a2298 != (undefined *)0x0) {
    puVar5 = DAT_14c9a2298;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a22a8 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8f184 FUN_145d8f184 body=114 status=ok
// SIG undefined FUN_145d8f184(void)

void FUN_145d8f184(void)

{
  longlong *plVar1;
  
  FUN_1460de0e2();
  FUN_145d8f1f6(DAT_14c9a6484);
  if (DAT_14c9a6410 == &DAT_14c9a6480) {
    DAT_14c9a6410 = (undefined4 *)0x0;
  }
  if (DAT_14c9a64c0 != 0) {
    plVar1 = &DAT_14c9a64e0;
    if (DAT_14c9a64d0 != (longlong *)0x0) {
      plVar1 = DAT_14c9a64d0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a64a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8f1f6 FUN_145d8f1f6 body=242 status=ok
// SIG undefined FUN_145d8f1f6(void)

void FUN_145d8f1f6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a6420 != DAT_14c9a644c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a6450;
    if (DAT_14c9a6458 != (undefined *)0x0) {
      puVar6 = DAT_14c9a6458;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a6460 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a6418 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a6418 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a6450;
        if (DAT_14c9a6458 != (undefined *)0x0) {
          puVar6 = DAT_14c9a6458;
        }
        lVar1 = DAT_14c9a6418 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a6418 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8f2e8();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8f2e8 FUN_145d8f2e8 body=135 status=ok
// SIG undefined FUN_145d8f2e8(void)

void FUN_145d8f2e8(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a6418;
  if (DAT_14c9a644c != 0) {
    *(int *)(DAT_14c9a6418 + (longlong)DAT_14c9a6448 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a644c) {
    iVar4 = DAT_14c9a6448;
  }
  puVar1[1] = iVar4;
  DAT_14c9a644c = DAT_14c9a644c + 1;
  puVar5 = &DAT_14c9a6428;
  if (DAT_14c9a6438 != (undefined *)0x0) {
    puVar5 = DAT_14c9a6438;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a6448 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8f370 FUN_145d8f370 body=114 status=ok
// SIG undefined FUN_145d8f370(void)

void FUN_145d8f370(void)

{
  longlong *plVar1;
  
  FUN_1460de878();
  FUN_145d8f3e2(DAT_14c9a74d4);
  if (DAT_14c9a7460 == &DAT_14c9a74d0) {
    DAT_14c9a7460 = (undefined4 *)0x0;
  }
  if (DAT_14c9a7510 != 0) {
    plVar1 = &DAT_14c9a7530;
    if (DAT_14c9a7520 != (longlong *)0x0) {
      plVar1 = DAT_14c9a7520;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a74f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8f3e2 FUN_145d8f3e2 body=242 status=ok
// SIG undefined FUN_145d8f3e2(void)

void FUN_145d8f3e2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a7470 != DAT_14c9a749c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a74a0;
    if (DAT_14c9a74a8 != (undefined *)0x0) {
      puVar6 = DAT_14c9a74a8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a74b0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a7468 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a7468 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a74a0;
        if (DAT_14c9a74a8 != (undefined *)0x0) {
          puVar6 = DAT_14c9a74a8;
        }
        lVar1 = DAT_14c9a7468 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a7468 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8f4d4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8f4d4 FUN_145d8f4d4 body=135 status=ok
// SIG undefined FUN_145d8f4d4(void)

void FUN_145d8f4d4(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a7468;
  if (DAT_14c9a749c != 0) {
    *(int *)(DAT_14c9a7468 + (longlong)DAT_14c9a7498 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a749c) {
    iVar4 = DAT_14c9a7498;
  }
  puVar1[1] = iVar4;
  DAT_14c9a749c = DAT_14c9a749c + 1;
  puVar5 = &DAT_14c9a7478;
  if (DAT_14c9a7488 != (undefined *)0x0) {
    puVar5 = DAT_14c9a7488;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a7498 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8f55c FUN_145d8f55c body=114 status=ok
// SIG undefined FUN_145d8f55c(void)

void FUN_145d8f55c(void)

{
  longlong *plVar1;
  
  FUN_1460df00e();
  FUN_145d8f5ce(DAT_14c9a76e4);
  if (DAT_14c9a7668 == &DAT_14c9a76e0) {
    DAT_14c9a7668 = (undefined4 *)0x0;
  }
  if (DAT_14c9a7720 != 0) {
    plVar1 = &DAT_14c9a7740;
    if (DAT_14c9a7730 != (longlong *)0x0) {
      plVar1 = DAT_14c9a7730;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a7708 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8f5ce FUN_145d8f5ce body=242 status=ok
// SIG undefined FUN_145d8f5ce(void)

void FUN_145d8f5ce(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a7678 != DAT_14c9a76a4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a76a8;
    if (DAT_14c9a76b0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a76b0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a76b8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a7670 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a7670 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a76a8;
        if (DAT_14c9a76b0 != (undefined *)0x0) {
          puVar6 = DAT_14c9a76b0;
        }
        lVar1 = DAT_14c9a7670 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a7670 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8f6c0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8f6c0 FUN_145d8f6c0 body=135 status=ok
// SIG undefined FUN_145d8f6c0(void)

void FUN_145d8f6c0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a7670;
  if (DAT_14c9a76a4 != 0) {
    *(int *)(DAT_14c9a7670 + (longlong)DAT_14c9a76a0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a76a4) {
    iVar4 = DAT_14c9a76a0;
  }
  puVar1[1] = iVar4;
  DAT_14c9a76a4 = DAT_14c9a76a4 + 1;
  puVar5 = &DAT_14c9a7680;
  if (DAT_14c9a7690 != (undefined *)0x0) {
    puVar5 = DAT_14c9a7690;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a76a0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8f748 FUN_145d8f748 body=114 status=ok
// SIG undefined FUN_145d8f748(void)

void FUN_145d8f748(void)

{
  longlong *plVar1;
  
  FUN_145b007de();
  FUN_145d8f7ba(DAT_14c9a7bd4);
  if (DAT_14c9a7b58 == &DAT_14c9a7bd0) {
    DAT_14c9a7b58 = (undefined4 *)0x0;
  }
  if (DAT_14c9a7c10 != 0) {
    plVar1 = &DAT_14c9a7c30;
    if (DAT_14c9a7c20 != (longlong *)0x0) {
      plVar1 = DAT_14c9a7c20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a7bf8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8f7ba FUN_145d8f7ba body=242 status=ok
// SIG undefined FUN_145d8f7ba(void)

void FUN_145d8f7ba(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a7b68 != DAT_14c9a7b94) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a7b98;
    if (DAT_14c9a7ba0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a7ba0;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a7ba8 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a7b60 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a7b60 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a7b98;
        if (DAT_14c9a7ba0 != (undefined *)0x0) {
          puVar6 = DAT_14c9a7ba0;
        }
        lVar1 = DAT_14c9a7b60 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a7b60 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8f8ac();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8f8ac FUN_145d8f8ac body=135 status=ok
// SIG undefined FUN_145d8f8ac(void)

void FUN_145d8f8ac(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a7b60;
  if (DAT_14c9a7b94 != 0) {
    *(int *)(DAT_14c9a7b60 + (longlong)DAT_14c9a7b90 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a7b94) {
    iVar4 = DAT_14c9a7b90;
  }
  puVar1[1] = iVar4;
  DAT_14c9a7b94 = DAT_14c9a7b94 + 1;
  puVar5 = &DAT_14c9a7b70;
  if (DAT_14c9a7b80 != (undefined *)0x0) {
    puVar5 = DAT_14c9a7b80;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a7b90 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8f934 FUN_145d8f934 body=114 status=ok
// SIG undefined FUN_145d8f934(void)

void FUN_145d8f934(void)

{
  longlong *plVar1;
  
  FUN_1460df7a4();
  FUN_145d8f9a6(DAT_14c9a8274);
  if (DAT_14c9a81f8 == &DAT_14c9a8270) {
    DAT_14c9a81f8 = (undefined4 *)0x0;
  }
  if (DAT_14c9a82b0 != 0) {
    plVar1 = &DAT_14c9a82d0;
    if (DAT_14c9a82c0 != (longlong *)0x0) {
      plVar1 = DAT_14c9a82c0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a8298 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8f9a6 FUN_145d8f9a6 body=242 status=ok
// SIG undefined FUN_145d8f9a6(void)

void FUN_145d8f9a6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a8208 != DAT_14c9a8234) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a8238;
    if (DAT_14c9a8240 != (undefined *)0x0) {
      puVar6 = DAT_14c9a8240;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a8248 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a8200 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a8200 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a8238;
        if (DAT_14c9a8240 != (undefined *)0x0) {
          puVar6 = DAT_14c9a8240;
        }
        lVar1 = DAT_14c9a8200 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a8200 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8fa98();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8fa98 FUN_145d8fa98 body=135 status=ok
// SIG undefined FUN_145d8fa98(void)

void FUN_145d8fa98(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a8200;
  if (DAT_14c9a8234 != 0) {
    *(int *)(DAT_14c9a8200 + (longlong)DAT_14c9a8230 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a8234) {
    iVar4 = DAT_14c9a8230;
  }
  puVar1[1] = iVar4;
  DAT_14c9a8234 = DAT_14c9a8234 + 1;
  puVar5 = &DAT_14c9a8210;
  if (DAT_14c9a8220 != (undefined *)0x0) {
    puVar5 = DAT_14c9a8220;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a8230 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8fb20 FUN_145d8fb20 body=114 status=ok
// SIG undefined FUN_145d8fb20(void)

void FUN_145d8fb20(void)

{
  longlong *plVar1;
  
  FUN_1460dff3a();
  FUN_145d8fb92(DAT_14c9a8364);
  if (DAT_14c9a82f0 == &DAT_14c9a8360) {
    DAT_14c9a82f0 = (undefined4 *)0x0;
  }
  if (DAT_14c9a83a0 != 0) {
    plVar1 = &DAT_14c9a83c0;
    if (DAT_14c9a83b0 != (longlong *)0x0) {
      plVar1 = DAT_14c9a83b0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a8388 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d8fb92 FUN_145d8fb92 body=242 status=ok
// SIG undefined FUN_145d8fb92(void)

void FUN_145d8fb92(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a8300 != DAT_14c9a832c) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a8330;
    if (DAT_14c9a8338 != (undefined *)0x0) {
      puVar6 = DAT_14c9a8338;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a8340 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a82f8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a82f8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a8330;
        if (DAT_14c9a8338 != (undefined *)0x0) {
          puVar6 = DAT_14c9a8338;
        }
        lVar1 = DAT_14c9a82f8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a82f8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d8fc84();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d8fc84 FUN_145d8fc84 body=135 status=ok
// SIG undefined FUN_145d8fc84(void)

void FUN_145d8fc84(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a82f8;
  if (DAT_14c9a832c != 0) {
    *(int *)(DAT_14c9a82f8 + (longlong)DAT_14c9a8328 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a832c) {
    iVar4 = DAT_14c9a8328;
  }
  puVar1[1] = iVar4;
  DAT_14c9a832c = DAT_14c9a832c + 1;
  puVar5 = &DAT_14c9a8308;
  if (DAT_14c9a8318 != (undefined *)0x0) {
    puVar5 = DAT_14c9a8318;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a8328 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145d8fd0c FUN_145d8fd0c body=1108 status=ok
// SIG undefined FUN_145d8fd0c(void)

ulonglong FUN_145d8fd0c(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  byte local_60;
  undefined2 local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_145d8fe5f;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      local_88 = *puVar12;
      uStack_84 = puVar12[1];
      uStack_80 = puVar12[2];
      uStack_7c = puVar12[3];
      local_78[0] = *(undefined1 *)(puVar12 + 4);
      local_60 = *(byte *)(puVar12 + 10);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar12 + 6);
      local_58 = *(undefined2 *)(puVar12 + 0xc);
      local_50 = *(byte *)(puVar12 + 0xe);
      FUN_1410d7556(param_1 + 0x18,&local_88);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40 + 0x28)])();
      FUN_145d9016c(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x30) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar5 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar5);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
        FUN_1475d7512(param_1 + 0xa0);
      }
      if ((local_50 & 1) != 0) {
        FUN_145d901de(&local_88,local_78);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_145d8fe5d:
      unaff_RBP = 0;
      goto LAB_145d8fe5f;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40) & 1) == 0)
    goto LAB_145d8fe5f;
    puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    if (0 < (int)uVar3) {
      uVar10 = 0;
      uVar11 = uVar3;
      do {
        uVar1 = (uVar11 >> 1) + uVar10;
        if (*(int *)(lVar13 + (ulonglong)uVar1 * 0x30) < param_2) {
          uVar10 = uVar1 + (uVar11 & 1);
        }
        bVar5 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar5);
    }
    if ((((int)uVar10 < (int)uVar3) && (*(int *)(lVar13 + (ulonglong)uVar10 * 0x30) <= param_2)) &&
       (lVar13 + (ulonglong)uVar10 * 0x30 != -8)) {
      FUN_145d901de((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x30) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar5 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
        FUN_1475d7512(param_1 + 0xa0);
      }
      goto LAB_145d8fe5f;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\0') {
      lVar13 = (longlong)param_2 * 0x40;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + lVar13);
      puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar13);
      if ((bVar2 & 2) == 0) {
        local_88 = *puVar12;
        uStack_84 = puVar12[1];
        uStack_80 = puVar12[2];
        uStack_7c = puVar12[3];
        local_78[0] = *(undefined1 *)(puVar12 + 4);
        local_60 = *(byte *)(puVar12 + 10);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar12 + 6);
        local_58 = *(undefined2 *)(puVar12 + 0xc);
        local_50 = *(byte *)(puVar12 + 0xe);
        FUN_1410d7556(param_1 + 0x18,&local_88);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar13 + 0x28)])();
        FUN_145d9016c(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar7 = 0;
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x30) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar5 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar5);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
          FUN_1475d7512(param_1 + 0xa0);
        }
        if ((local_50 & 1) != 0) {
          FUN_145d901de(&local_88,local_78);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_145d8fe5d;
      }
      if ((bVar2 & 1) == 0) goto LAB_145d8fe5f;
    }
    else {
      if (param_4 != '\x01') goto LAB_145d8fe5f;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40);
      if ((bVar2 & 1) == 0) goto LAB_145d8fe5f;
      puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      *(byte *)(puVar12 + 0xe) = bVar2 | 2;
    }
  }
  FUN_145d901de(puVar12,puVar12 + 4);
LAB_145d8fe5f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 145d90162 FUN_145d90162 body=1 status=ok
// SIG undefined FUN_145d90162(void)

void FUN_145d90162(void)

{
  return;
}



// FUNCTION 145d9016c FUN_145d9016c body=114 status=ok
// SIG undefined FUN_145d9016c(void)

void FUN_145d9016c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 145d901de FUN_145d901de body=176 status=ok
// SIG undefined FUN_145d901de(void)

void FUN_145d901de(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  local_2c = param_1[1];
  lVar1 = FUN_14479d2ce(&local_30);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(param_2 + 0x18) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d902d0 FUN_145d902d0 body=114 status=ok
// SIG undefined FUN_145d902d0(void)

void FUN_145d902d0(void)

{
  longlong *plVar1;
  
  FUN_1460e06d0();
  FUN_145d90342(DAT_14cb1b114);
  if (DAT_14cb1b0a0 == &DAT_14cb1b110) {
    DAT_14cb1b0a0 = (undefined4 *)0x0;
  }
  if (DAT_14cb1b150 != 0) {
    plVar1 = &DAT_14cb1b170;
    if (DAT_14cb1b160 != (longlong *)0x0) {
      plVar1 = DAT_14cb1b160;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb1b138 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d90342 FUN_145d90342 body=242 status=ok
// SIG undefined FUN_145d90342(void)

void FUN_145d90342(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb1b0b0 != DAT_14cb1b0dc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb1b0e0;
    if (DAT_14cb1b0e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb1b0e8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb1b0f0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb1b0a8 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb1b0a8 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb1b0e0;
        if (DAT_14cb1b0e8 != (undefined *)0x0) {
          puVar6 = DAT_14cb1b0e8;
        }
        lVar1 = DAT_14cb1b0a8 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb1b0a8 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145d90434();
        return;
      }
    }
  }
  return;
}


