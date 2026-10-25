// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145950276 FUN_145950276 body=132 status=ok
// SIG undefined FUN_145950276(void)

undefined1 * FUN_145950276(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145950272;
}



// FUNCTION 1459502fa FUN_1459502fa body=62 status=ok
// SIG undefined FUN_1459502fa(void)

void FUN_1459502fa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145950338(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 145950338 FUN_145950338 body=111 status=ok
// SIG undefined FUN_145950338(void)

ulonglong FUN_145950338(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xc) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 1459503b2 FUN_1459503b2 body=623 status=ok
// SIG undefined FUN_1459503b2(void)

void FUN_1459503b2(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar7 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar7 * 2);
    if (1 < local_38) goto LAB_145950407;
  }
  FUN_14020fad6(&local_40,L"Default System Device");
LAB_145950407:
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_145950520:
    *local_50 = &PTR_LAB_14b4f7870;
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
    local_50[2] = lVar8;
    *local_50 = &PTR_FUN_14b528b40;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = param_1;
    *(undefined4 *)(local_50 + 6) = param_2;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145950520;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    uVar4 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_50 = &PTR_LAB_14b4f7870;
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
    local_50[2] = lVar8;
    *local_50 = &PTR_FUN_14b528b40;
    local_50[3] = uVar4;
    local_50[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_50[5] = param_1;
    *(undefined4 *)(local_50 + 6) = param_2;
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
  FUN_1413e44b8(param_1,param_2,&local_40,&local_50);
  FUN_1449db362(&local_50);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145950622 FUN_145950622 body=148 status=ok
// SIG undefined FUN_145950622(void)

void FUN_145950622(undefined8 param_1,longlong param_2)

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
  FUN_1459506b8(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459506b8 FUN_1459506b8 body=199 status=ok
// SIG undefined FUN_1459506b8(void)

void FUN_1459506b8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    uVar5 = FUN_1447210f0(param_1);
    FUN_1459bd504(&local_28,uVar5);
    if (local_20 != (longlong *)0x0) {
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
          FUN_145950790(local_28,param_1);
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
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
          }
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



// FUNCTION 145950790 FUN_145950790 body=122 status=ok
// SIG undefined FUN_145950790(void)

void FUN_145950790(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459bd676(param_1,&local_28);
  FUN_14595081c(local_28,param_2);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595081c FUN_14595081c body=309 status=ok
// SIG undefined FUN_14595081c(void)

void FUN_14595081c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar4 = (longlong)*(int *)(param_1 + 0x18) << 5;
    uVar3 = 0;
    do {
      cVar2 = FUN_140e8a950(lVar6,param_2);
      if (cVar2 != '\0') {
        if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x18))) {
          local_58 = 0;
          uStack_50 = 0;
          lVar6 = *plVar1;
          lVar5 = (ulonglong)(uVar3 & 0x7fffffff) * 0x20;
          lVar4 = (**(code **)(*(longlong *)(param_2 + 0x10a0) + 0x20))(param_2 + 0x10a0);
          if (*(longlong *)(lVar6 + 8 + lVar5) != 0) {
            FUN_14480f766(lVar4 + 0xf8);
          }
          FUN_145950952(param_2,0);
          FUN_1409580ee(param_1,lVar6 + lVar5,&local_58,0);
          FUN_1457f441a(plVar1,uVar3);
          FUN_1457f43dc(plVar1);
          FUN_140958026(param_1,&local_58);
          FUN_1409580a1(local_58,uStack_50 & 0xffffffff);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar6 = lVar6 + 0x20;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145950952 FUN_145950952 body=76 status=ok
// SIG undefined FUN_145950952(void)

void FUN_145950952(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0x8a18) != param_2)) {
    *(char *)(param_1 + 0x8a18) = param_2;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x52);
    FUN_140fbbfc8(param_1 + 0x89f0,param_1);
    return;
  }
  return;
}



// FUNCTION 1459509aa FUN_1459509aa body=55 status=ok
// SIG undefined FUN_1459509aa(void)

undefined8 * FUN_1459509aa(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a183700;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 1459509e2 FUN_1459509e2 body=40 status=ok
// SIG undefined FUN_1459509e2(void)

undefined8 FUN_1459509e2(undefined8 param_1,int param_2)

{
  FUN_145950a0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145950a0a FUN_145950a0a body=59 status=ok
// SIG undefined FUN_145950a0a(void)

void FUN_145950a0a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b19d0e0;
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145950a46 FUN_145950a46 body=40 status=ok
// SIG undefined FUN_145950a46(void)

undefined8 FUN_145950a46(undefined8 param_1,int param_2)

{
  FUN_145950a6e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145950a6e FUN_145950a6e body=59 status=ok
// SIG undefined FUN_145950a6e(void)

void FUN_145950a6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b297190;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145950aaa FUN_145950aaa body=24 status=ok
// SIG undefined FUN_145950aaa(void)

void FUN_145950aaa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145950abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145950ac2 FUN_145950ac2 body=38 status=ok
// SIG undefined FUN_145950ac2(void)

undefined8 FUN_145950ac2(undefined8 param_1,int param_2)

{
  FUN_145950ae8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145950ae8 FUN_145950ae8 body=70 status=ok
// SIG undefined FUN_145950ae8(void)

void FUN_145950ae8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14114f6be(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145950b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145950b5c FUN_145950b5c body=55 status=ok
// SIG undefined FUN_145950b5c(void)

undefined8 * FUN_145950b5c(undefined8 *param_1)

{
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b785cf0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[8] = DAT_14cbccb60;
  return param_1;
}



// FUNCTION 145950b9c FUN_145950b9c body=846 status=ok
// SIG undefined FUN_145950b9c(void)

undefined8 * FUN_145950b9c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14007ca06();
  FUN_145950eec(param_1,uVar2);
  *param_1 = &PTR_FUN_14bd11c70;
  param_1[5] = &PTR_FUN_14bd11f20;
  param_1[6] = &PTR_FUN_14bd11f50;
  param_1[7] = &PTR_FUN_14bd11fa0;
  param_1[8] = &PTR_FUN_14bd12008;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 2;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 2;
  uVar2 = DAT_14cc1c980;
  uVar3 = FUN_141155906();
  local_50 = 0;
  local_58 = 1;
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3);
  *(undefined4 *)(lVar4 + 0x30) = 1;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x23);
  *(uint *)(param_1 + 0x23) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x11c) < iVar1 + 1U) {
    FUN_1459511a6(param_1 + 0x22,iVar1);
  }
  *(longlong *)(param_1[0x22] + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  FUN_1446f470e(&local_30,L"@Bindings",1);
  uVar2 = FUN_145950f0c();
  local_50 = 0;
  local_58 = 1;
  lVar4 = FUN_14048696c(param_1,local_30,uVar2,uVar2);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x24] = lVar4;
  FUN_1446f470e(&local_38,L"@Variables",1);
  uVar2 = FUN_145950fea();
  local_50 = 0;
  local_58 = 1;
  lVar4 = FUN_14048696c(param_1,local_38,uVar2,uVar2);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x25] = lVar4;
  FUN_1446f470e(&local_40,L"@Resources",1);
  uVar2 = FUN_1459510c8();
  local_50 = 0;
  local_58 = 1;
  lVar4 = FUN_14048696c(param_1,local_40,uVar2,uVar2);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x26] = lVar4;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145950eec FUN_145950eec body=32 status=ok
// SIG undefined FUN_145950eec(void)

undefined8 * FUN_145950eec(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6b3220;
  return param_1;
}



// FUNCTION 145950f0c FUN_145950f0c body=221 status=ok
// SIG undefined FUN_145950f0c(void)

longlong FUN_145950f0c(void)

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
  if (DAT_14cc1c8e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494abf07;
    local_40 = FUN_146739f94;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusComponentSourceBindingContainer",&DAT_14cc1c8e8,
                  &DAT_1494abf06);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c8e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145950fea FUN_145950fea body=221 status=ok
// SIG undefined FUN_145950fea(void)

longlong FUN_145950fea(void)

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
  if (DAT_14cc1c900 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494abf0b;
    local_40 = FUN_146739ff8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusVariableContainer",&DAT_14cc1c900,&DAT_1494abf0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c900;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459510c8 FUN_1459510c8 body=221 status=ok
// SIG undefined FUN_1459510c8(void)

longlong FUN_1459510c8(void)

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
  if (DAT_14cc1c918 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494abf0f;
    local_40 = FUN_14673a05c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusResourceContainer",&DAT_14cc1c918,&DAT_1494abf0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c918;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459511a6 FUN_1459511a6 body=132 status=ok
// SIG undefined FUN_1459511a6(void)

void FUN_1459511a6(longlong param_1,int param_2)

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



// FUNCTION 14595122a FUN_14595122a body=97 status=ok
// SIG undefined FUN_14595122a(void)

void FUN_14595122a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  FUN_1413e51ea();
  lVar1 = DAT_14cbd1278;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) && (*(char *)(lVar1 + uVar3) != '\0')) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x128) = 1;
  }
  return;
}



// FUNCTION 14595128c FUN_14595128c body=228 status=ok
// SIG undefined FUN_14595128c(void)

undefined8 FUN_14595128c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_149ee9c60;
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
  *local_38 = &PTR_FUN_149ee99c0;
  local_38[3] = param_3;
  local_38[4] = &LAB_1458613ce;
  FUN_145951372(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145951372 FUN_145951372 body=216 status=ok
// SIG undefined FUN_145951372(void)

undefined8 * FUN_145951372(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145951460 FUN_145951460 body=95 status=ok
// SIG undefined FUN_145951460(void)

void FUN_145951460(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_14001cc68(0xc0,0x10);
    FUN_1459514c0(uVar2,param_2);
    puVar1 = *(undefined8 **)(param_1 + 0xaa0);
    *(undefined8 *)(param_1 + 0xaa0) = uVar2;
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459514bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1459514c0 FUN_1459514c0 body=212 status=ok
// SIG undefined FUN_1459514c0(void)

undefined8 * FUN_1459514c0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_14b2fa080;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_145951594(param_1 + 3,param_2 + 0x18);
  *param_1 = &PTR_FUN_14b92da30;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  param_1[8] = 0;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  param_1[0x11] = 0;
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  param_1[0x14] = 0;
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145951594 FUN_145951594 body=71 status=ok
// SIG undefined FUN_145951594(void)

undefined8 * FUN_145951594(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 145951612 FUN_145951612 body=141 status=ok
// SIG undefined FUN_145951612(void)

undefined8 FUN_145951612(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1413e5a1e(), iVar3 != -1)) {
    lVar2 = *param_1;
    lVar1 = lVar2 + (longlong)iVar3 * 0xe8;
    FUN_14118c3d0(lVar1 + 0x38);
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0xe8),param_3,0xe0);
    FUN_14582699e(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1459516a0 FUN_1459516a0 body=144 status=ok
// SIG undefined FUN_1459516a0(void)

undefined8 * FUN_1459516a0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1447715ec(param_1 + 2,param_2 + 2);
  FUN_14014e938(param_1 + 7,param_3);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_3 + 0x40) = 0;
  FUN_145951730(param_1 + 0x10,param_3 + 0x48);
  uVar1 = *(undefined8 *)(param_3 + 0xa0);
  param_1[0x1a] = *(undefined8 *)(param_3 + 0x98);
  param_1[0x1b] = uVar1;
  return param_1;
}



// FUNCTION 145951730 FUN_145951730 body=125 status=ok
// SIG undefined FUN_145951730(void)

undefined8 * FUN_145951730(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1459517ae();
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



// FUNCTION 1459517ae FUN_1459517ae body=150 status=ok
// SIG undefined FUN_1459517ae(void)

longlong * FUN_1459517ae(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 145951844 FUN_145951844 body=232 status=ok
// SIG undefined FUN_145951844(void)

int * FUN_145951844(longlong *param_1,int *param_2)

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
      FUN_1404f0360(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xe8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xe8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xe8 + *param_1;
  return param_2;
}



// FUNCTION 14595192c FUN_14595192c body=902 status=ok
// SIG undefined FUN_14595192c(void)

void FUN_14595192c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_c0;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_d0 = local_70;
    local_c8 = local_68;
    local_c0 = local_60;
    uVar4 = local_c0;
    local_b8 = local_58;
    local_b4 = uStack_54;
    local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_d8 = param_1;
    if (local_c0._4_4_ < (int)local_68[3]) {
      iVar8 = local_c0._4_4_;
      local_c0 = uVar4;
      do {
        lVar2 = *local_d8 + (longlong)iVar8 * 0xe8;
        if (*(char *)(*local_d8 + (longlong)iVar8 * 0xe8) == '\x01') {
          FUN_1447a97f4(&local_70,lVar2 + 0x10);
          if (0 < local_70._4_4_) {
            iVar9 = 0;
            do {
              FUN_144a7c8fe(&local_70,local_7c,iVar9,1);
              if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_70,local_88,iVar9,1), local_88[0] == DAT_14cb7bec8 &&
                     (local_80 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_70,local_94,iVar9,1), local_94[0] == DAT_14cb7bee0 &&
                    (local_8c == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_70,local_a0,iVar9,1), local_a0[0] == DAT_14cb7bef8 &&
                   (local_98 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_70,local_ac,iVar9,1), local_ac[0] == DAT_14cb7bf10 &&
                  (local_a4 == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_70,iVar9,0);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_70._4_4_);
          }
          iVar9 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar9 = *(int *)(lVar2 + 0x10);
        }
        uVar6 = (longlong)iVar9 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar6;
        *(int *)(lVar2 + 0xe4) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xe0) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar8 = local_c0._4_4_;
        uVar4 = local_c0;
      } while (local_c0._4_4_ < (int)local_c8[3]);
    }
  }
  local_c0 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145951cb4 FUN_145951cb4 body=111 status=ok
// SIG undefined FUN_145951cb4(void)

void FUN_145951cb4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  iVar3 = *(int *)(lVar2 + 200);
  if (~uVar1 + iVar3 != 0) {
    lVar4 = *(longlong *)(lVar2 + 0xc0);
    if (*(longlong *)(lVar2 + 0xc0) == 0) {
      lVar4 = lVar2;
    }
    memmove((void *)(lVar4 + (longlong)(int)uVar1 * 0x18),
            (void *)(lVar4 + (longlong)(int)uVar1 * 0x18 + 0x18),
            (longlong)(int)(~uVar1 + iVar3) * 0x18);
    iVar3 = *(int *)(lVar2 + 200);
  }
  *(int *)(lVar2 + 200) = iVar3 + -1;
  FUN_1459522a8(lVar2);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 145951d24 FUN_145951d24 body=270 status=ok
// SIG undefined FUN_145951d24(void)

undefined4 * FUN_145951d24(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_14595209e(param_1,local_48);
  FUN_145951e34(param_3,local_40);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_145951fe6(param_1,uVar4,local_40,&local_4c);
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
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
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
      FUN_145952a34(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145951e34 FUN_145951e34 body=156 status=ok
// SIG undefined FUN_145951e34(void)

undefined4 * FUN_145951e34(undefined8 *param_1,undefined4 *param_2)

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
  *param_2 = *(undefined4 *)*param_1;
  FUN_145951ed2(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14055a9b2(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145951ed2 FUN_145951ed2 body=125 status=ok
// SIG undefined FUN_145951ed2(void)

undefined8 * FUN_145951ed2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145951f50();
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



// FUNCTION 145951f50 FUN_145951f50 body=150 status=ok
// SIG undefined FUN_145951f50(void)

longlong * FUN_145951f50(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 145951fe6 FUN_145951fe6 body=184 status=ok
// SIG undefined FUN_145951fe6(void)

undefined8 FUN_145951fe6(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14055a9b2((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147565218(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14595209e FUN_14595209e body=251 status=ok
// SIG undefined FUN_14595209e(void)

int * FUN_14595209e(longlong *param_1,int *param_2)

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



// FUNCTION 14595219a FUN_14595219a body=270 status=ok
// SIG undefined FUN_14595219a(void)

void FUN_14595219a(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 200);
  lVar6 = *(longlong *)(param_1 + 0xc0);
  lVar4 = lVar6;
  if (lVar6 == 0) {
    lVar4 = param_1;
  }
  if ((int)uVar1 < 1) {
    uVar10 = 0;
  }
  else {
    uVar3 = *param_2;
    uVar10 = 0;
    uVar8 = (ulonglong)uVar1;
    do {
      uVar9 = (int)(uVar8 >> 1) + uVar10;
      uVar7 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar9 * 0x18) < uVar3) {
        uVar10 = uVar9 + (uVar7 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar7);
    if ((int)uVar10 < (int)uVar1) {
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) <= uVar3) {
        puVar5 = (uint *)(lVar4 + (ulonglong)uVar10 * 0x18);
        goto LAB_14595226c;
      }
    }
  }
  *(uint *)(param_1 + 200) = uVar1 + 1;
  if (*(uint *)(param_1 + 0xcc) == uVar1) {
    FUN_147565004(param_1,uVar1);
    lVar6 = *(longlong *)(param_1 + 0xc0);
  }
  if (lVar6 == 0) {
    lVar6 = param_1;
  }
  lVar4 = (ulonglong)uVar10 * 0x18;
  memmove((void *)(lVar6 + lVar4 + 0x18),(void *)(lVar6 + lVar4),(ulonglong)(uVar1 - uVar10) * 0x18)
  ;
  lVar6 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar6 = param_1;
  }
  puVar5 = (uint *)(lVar6 + lVar4);
  uVar3 = *param_2;
LAB_14595226c:
  *puVar5 = uVar3;
  uVar2 = param_3[1];
  *(undefined8 *)(puVar5 + 1) = *param_3;
  *(undefined8 *)(puVar5 + 3) = uVar2;
  puVar5[5] = *(uint *)(param_3 + 2);
  return;
}



// FUNCTION 1459522a8 FUN_1459522a8 body=67 status=ok
// SIG undefined FUN_1459522a8(void)

void FUN_1459522a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145952724(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  if (iVar1 == *(int *)(param_1 + 0xcc)) {
    return;
  }
  *(int *)(param_1 + 0xcc) = iVar1;
  FUN_14756508e(param_1,*(undefined4 *)(param_1 + 200),iVar1);
  return;
}



// FUNCTION 1459522ec FUN_1459522ec body=343 status=ok
// SIG undefined FUN_1459522ec(void)

undefined4 *
FUN_1459522ec(longlong param_1,undefined4 *param_2,undefined4 param_3,ulonglong param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  short sVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined2 local_50 [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  sVar7 = (short)*(undefined4 *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar7 + 1;
  FUN_140b562d0(param_1 + 8,local_50);
  *(undefined2 *)param_2 = local_50[0];
  *(short *)((longlong)param_2 + 2) = sVar7;
  lVar8 = (param_4 & 0xffff) * 0x128;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x100 + lVar8);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x108 + lVar8);
  local_78 = param_3;
  local_70 = lVar5;
  local_60 = lVar5;
  if (plVar6 == (longlong *)0x0) {
    uVar3 = *param_2;
    local_58 = (longlong *)0x0;
    FUN_145952444(local_48,&local_60,uVar3,param_5);
    local_68 = (longlong *)0x0;
    FUN_145952544(lVar5 + 0x38,&local_70,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    uVar3 = *param_2;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    uVar4 = *param_2;
    local_58 = plVar6;
    FUN_145952444(local_48,&local_60,uVar3,param_5);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_68 = plVar6;
    FUN_145952544(lVar5 + 0x38,&local_70,uVar4);
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145952444 FUN_145952444 body=255 status=ok
// SIG undefined FUN_145952444(void)

undefined8 *
FUN_145952444(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1413e7c8a(param_1 + 0xd);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = *param_2;
  lVar3 = param_2[1];
  param_1[0x21] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x22) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x114) = DAT_14cab2cd0;
  *(undefined4 *)((longlong)param_1 + 0x11a) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x11e) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x122) = *(undefined4 *)(*param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x126) = *(byte *)((longlong)param_1 + 0x126) & 0xf8;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 145952544 FUN_145952544 body=284 status=ok
// SIG undefined FUN_145952544(void)

void FUN_145952544(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar2 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar2 != 0) {
    puVar7 = (ushort *)*param_1;
    lVar8 = 0;
    do {
      lVar6 = 0;
      if ((ulonglong)*puVar7 != 0xffff) {
        lVar6 = *param_1 + (ulonglong)*puVar7;
      }
      plVar5 = (longlong *)(**(code **)(param_1[3] + lVar8))(lVar6);
      if (plVar5 != (longlong *)0x0) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_58 = uVar3;
        local_50 = plVar4;
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_58,param_3);
      }
      lVar8 = lVar8 + 0x10;
      puVar7 = puVar7 + 3;
    } while ((ulonglong)bVar2 * 0x10 != lVar8);
  }
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145952662 FUN_145952662 body=173 status=ok
// SIG undefined FUN_145952662(void)

void FUN_145952662(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_2c = (undefined4)param_3;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14479d2ce(*param_2 + 0x20);
  FUN_1409e5248(param_1,lVar3,&local_2c,
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x548) + 8) + 0x110 +
                 (param_3 & 0xffff) * 0x128));
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145952724 FUN_145952724 body=129 status=ok
// SIG undefined FUN_145952724(void)

ulonglong FUN_145952724(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 1459527a6 FUN_1459527a6 body=323 status=ok
// SIG undefined FUN_1459527a6(void)

void FUN_1459527a6(longlong *param_1)

{
  longlong lVar1;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_14055a9b2(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459528ea FUN_1459528ea body=329 status=ok
// SIG undefined FUN_1459528ea(void)

void FUN_1459528ea(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 145952a34 FUN_145952a34 body=432 status=ok
// SIG undefined FUN_145952a34(void)

void FUN_145952a34(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 145952be6 FUN_145952be6 body=26 status=ok
// SIG undefined FUN_145952be6(void)

void FUN_145952be6(undefined8 param_1)

{
  FUN_1400f7f98();
  FUN_145952c00(param_1);
  return;
}



// FUNCTION 145952c00 FUN_145952c00 body=123 status=ok
// SIG undefined FUN_145952c00(void)

void FUN_145952c00(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x338) == -1) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 == 0) goto LAB_145952c32;
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
  }
  lVar1 = FUN_1402ad1e0(lVar1);
  if (lVar1 != 0) {
    FUN_1485ec2fc(param_1);
    FUN_1485ec960(*(undefined8 *)(lVar1 + 0x40),*(undefined4 *)(param_1 + 0x338));
  }
LAB_145952c32:
  *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
  return;
}



// FUNCTION 145952c7c FUN_145952c7c body=273 status=ok
// SIG undefined FUN_145952c7c(void)

void FUN_145952c7c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    thunk_FUN_145953928();
    puVar1 = *(undefined8 **)(param_1 + 0x188);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
  }
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x10))();
    puVar1 = *(undefined8 **)(param_1 + 0x180);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_145953634();
    FUN_145952e3e(param_1 + 0x170);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1413e8616();
    puVar1 = *(undefined8 **)(param_1 + 0x178);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_145952d94();
    lVar2 = *(longlong *)(param_1 + 400);
    if (lVar2 != 0) {
      FUN_145952f1c(lVar2);
      FUN_1400020a8(lVar2);
      *(undefined8 *)(param_1 + 400) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  FUN_145952fca(param_1);
  return;
}



// FUNCTION 145952d8e thunk_FUN_145953928 body=5 status=ok
// SIG undefined thunk_FUN_145953928(void)

void thunk_FUN_145953928(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140c2421c(param_1,1);
  uVar8 = FUN_14479d2ce(param_1 + 0x30);
  FUN_140630e34(&plStack_90,uVar8);
  plVar11 = (longlong *)CONCAT44(uStack_84,uStack_88);
  if (plVar11 != (longlong *)0x0) {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar6 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_84,uStack_88) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_84,uStack_88) + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      if (plStack_90 != (longlong *)0x0) {
        FUN_1413e83c2();
      }
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  plVar11 = *(longlong **)(param_1 + 0x250);
  if (plVar11 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x250) = 0;
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_141135d17(*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x240));
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_1487b860a(param_1 + 0x238);
  }
  *(undefined4 *)(param_1 + 600) = 0;
  FUN_1413e82d3(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1457262b4(param_1 + 0x20,0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_1405d674a(param_1 + 0x148);
  lVar9 = FUN_1405d6522();
  plVar11 = (longlong *)(param_1 + 0x208);
  if (((*(int *)(param_1 + 0x210) != 0) && ((longlong *)*plVar11 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar11 + 0x30))(), cVar5 != '\0')) {
    plVar2 = (longlong *)(lVar9 + 0x1c8);
    uVar12 = lVar9 + 0x1d8;
    uStack_68 = 0x100000000;
    uStack_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = uVar12;
    if (*(int *)(lVar9 + 0x1f0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&uStack_68);
      iVar6 = *(int *)(lVar9 + 0x1f0);
    }
    uStack_88 = (undefined4)uStack_68;
    uStack_84 = uStack_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    uStack_78 = uStack_58;
    uVar8 = uStack_78;
    uStack_78._4_4_ = (int)((ulonglong)uStack_58 >> 0x20);
    iVar7 = uStack_78._4_4_;
    plStack_90 = plVar2;
    if ((uStack_78._4_4_ != iVar6) || (uStack_78 = uStack_58, uStack_60 != uVar12)) {
      do {
        uStack_78 = uVar8;
        uStack_68 = 0;
        uStack_60 = 0;
        FUN_1457268a6(*plStack_90 + (longlong)iVar7 * 0x1c0 + 0x168);
        plVar10 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
        uVar8 = (**(code **)(*plVar10 + 0x2b0))(plVar10);
        if ((*(int *)(param_1 + 0x210) == 0) ||
           (plVar10 = (longlong *)*plVar11, plVar10 == (longlong *)0x0)) {
          uStack_98 = 0;
        }
        else {
          (**(code **)(*plVar10 + 0x38))(plVar10,&uStack_98);
        }
        uVar4 = uStack_98;
        lVar9 = FUN_1414ef453(uVar8,0);
        if (lVar9 != 0) {
          FUN_145a1a87a(&uStack_68,uVar4,lVar9,0);
        }
        FUN_1405d7ab2(uStack_68,uStack_60 & 0xffffffff);
        if (uStack_68 != 0) {
          FUN_1400020a8();
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_84);
        FUN_1449c0562(&uStack_88);
        iVar7 = uStack_78._4_4_;
        uVar8 = uStack_78;
      } while (plStack_90 != plVar2 ||
               (CONCAT44(uStack_7c,uStack_80) != uVar12 || uStack_78._4_4_ != iVar6));
    }
  }
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x1e8) + 0x58);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if ((*(int *)(param_1 + 0x210) != 0) &&
     (puVar3 = (undefined8 *)*plVar11, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar11,0,0,0x10);
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  if ((uStack_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145952d94 FUN_145952d94 body=26 status=ok
// SIG undefined FUN_145952d94(void)

void FUN_145952d94(longlong param_1)

{
  FUN_1457eb6c4();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 145952dae FUN_145952dae body=38 status=ok
// SIG undefined FUN_145952dae(void)

undefined8 FUN_145952dae(undefined8 param_1,int param_2)

{
  FUN_145952dd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145952dd4 FUN_145952dd4 body=105 status=ok
// SIG undefined FUN_145952dd4(void)

void FUN_145952dd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b999d10;
  FUN_144760e21(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1413e7d1e(param_1);
  return;
}



// FUNCTION 145952e3e FUN_145952e3e body=107 status=ok
// SIG undefined FUN_145952e3e(void)

void FUN_145952e3e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_144757f48(lVar2,0x40000000);
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar2 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar3 = uVar1 == *(uint *)(lVar2 + 8);
      if (bVar3) {
        *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar3);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 145952eaa FUN_145952eaa body=113 status=ok
// SIG undefined FUN_145952eaa(void)

void FUN_145952eaa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1413e7f32();
  cVar1 = FUN_144729dda(param_1 + 0xa4);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa4);
    if (lVar2 != 0) {
      lVar3 = FUN_1403ca142();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_140457ffc(lVar2 + 0x680,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145952f1c FUN_145952f1c body=120 status=ok
// SIG undefined FUN_145952f1c(void)

void FUN_145952f1c(longlong param_1)

{
  FUN_1457eb8fb(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145952f94(param_1 + 0x30);
  FUN_14122dc7c(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145952f94 FUN_145952f94 body=53 status=ok
// SIG undefined FUN_145952f94(void)

void FUN_145952f94(longlong *param_1)

{
  FUN_1457eb948();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145952fca FUN_145952fca body=600 status=ok
// SIG undefined FUN_145952fca(void)

void FUN_145952fca(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  param_1[0x29] = 0;
  plVar4 = (longlong *)param_1[0x2a];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x2a] = 0;
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
  param_1[0x2b] = 0;
  plVar4 = (longlong *)param_1[0x2c];
  if (plVar4 != (longlong *)0x0) {
    param_1[0x2c] = 0;
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
  if ((*(int *)((longlong)param_1 + 0xd4) < 0) &&
     (lVar5 = (**(code **)(*param_1 + 0x2f0))(param_1), lVar5 == 0)) {
    if (param_1[6] != 0) {
      FUN_143dd9e92();
      lVar5 = param_1[6];
      FUN_144757f48(lVar5,0x40000000);
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      do {
        uVar3 = *(uint *)(lVar5 + 8);
        if ((uVar3 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar6 = uVar3 == *(uint *)(lVar5 + 8);
        if (bVar6) {
          *(uint *)(lVar5 + 8) = uVar3 | 0x200000;
        }
        UNLOCK();
      } while (!bVar6);
      param_1[6] = 0;
    }
    if (param_1[7] != 0) {
      FUN_145953236();
      lVar5 = param_1[7];
      FUN_144757f48(lVar5,0x40000000);
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      do {
        uVar3 = *(uint *)(lVar5 + 8);
        if ((uVar3 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar6 = uVar3 == *(uint *)(lVar5 + 8);
        if (bVar6) {
          *(uint *)(lVar5 + 8) = uVar3 | 0x200000;
        }
        UNLOCK();
      } while (!bVar6);
      param_1[7] = 0;
    }
    if (param_1[0x20] != 0) {
      FUN_14480f766(&DAT_14c9647a0);
    }
    if (param_1[0x21] != 0) {
      FUN_14480f766(&DAT_14cb10a78);
    }
    if (param_1[0x22] != 0) {
      FUN_14480f766(&DAT_14cb10a90);
    }
    if (param_1[0x24] != 0) {
      FUN_141092d32(&DAT_14cb10ae8);
    }
    if (param_1[0x25] != 0) {
      FUN_14480f766(&DAT_14cb10980);
    }
    if (param_1[0x27] != 0) {
      FUN_14480f766(&DAT_14cb10920);
    }
    if (param_1[0x28] != 0) {
      FUN_14480f766(&DAT_14cb10938);
    }
    if (param_1[0x26] != 0) {
      FUN_14480f766(DAT_14cb0d2b0 + 0xeb0);
      return;
    }
  }
  return;
}



// FUNCTION 145953236 FUN_145953236 body=27 status=ok
// SIG undefined FUN_145953236(void)

void FUN_145953236(longlong param_1)

{
  FUN_1458c62fc();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 145953252 FUN_145953252 body=158 status=ok
// SIG undefined FUN_145953252(void)

void FUN_145953252(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_1459532f0(param_1 + 0x90);
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459532ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1459532f0 FUN_1459532f0 body=53 status=ok
// SIG undefined FUN_1459532f0(void)

void FUN_1459532f0(longlong *param_1)

{
  FUN_145953326();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145953326 FUN_145953326 body=90 status=ok
// SIG undefined FUN_145953326(void)

void FUN_145953326(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
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



// FUNCTION 145953380 FUN_145953380 body=236 status=ok
// SIG undefined FUN_145953380(void)

void FUN_145953380(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40d720;
  param_1[2] = &PTR_FUN_14b40d740;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1457eca3c(param_1 + 0x15);
  FUN_140854700(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14595346c(param_1 + 6);
  FUN_140af926c(param_1 + 2);
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145953468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14595346c FUN_14595346c body=55 status=ok
// SIG undefined FUN_14595346c(void)

void FUN_14595346c(longlong *param_1)

{
  FUN_1459534a4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459534a4 FUN_1459534a4 body=398 status=ok
// SIG undefined FUN_1459534a4(void)

void FUN_1459534a4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
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
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145953634 FUN_145953634 body=729 status=ok
// SIG undefined FUN_145953634(void)

void FUN_145953634(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88;
  longlong **local_80;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = &local_c0;
  local_88 = FUN_140036a08;
  lVar5 = FUN_144a773aa(&local_88,&DAT_14c7585d0);
  local_88 = (code *)(lVar5 + 0x10);
  local_80 = *(longlong ***)(lVar5 + 0x10);
  local_78 = *(longlong *)(lVar5 + 0x20);
  local_70 = '\0';
  local_68 = *(undefined8 *)(lVar5 + 0x28);
  *(code ***)(lVar5 + 0x28) = &local_88;
  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
  plVar1 = param_1 + 0x7b;
  local_98 = 0;
  uStack_90 = 0;
  plVar2 = param_1 + 0x7d;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar2;
  if ((int)param_1[0x80] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar8 = (int)param_1[0x80];
  }
  uStack_a0 = CONCAT44(uStack_44,uStack_48);
  local_a8 = local_50;
  iStack_a4 = iStack_4c;
  local_b8 = (undefined4)local_60;
  uStack_b4 = local_60._4_4_;
  uStack_b0 = (undefined4)uStack_58;
  uStack_ac = uStack_58._4_4_;
  local_c0 = plVar1;
  if ((iStack_4c != iVar8) || (uStack_58 != plVar2)) {
    do {
      uVar3 = uStack_90;
      lVar6 = (longlong)iStack_a4;
      lVar5 = *local_c0;
      lVar7 = (longlong)(int)uStack_90;
      uVar4 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
      if (uStack_90._4_4_ < uVar4) {
        FUN_14015d11a(&local_98,uVar3 & 0xffffffff);
      }
      *(undefined4 *)(local_98 + lVar7 * 4) = *(undefined4 *)(lVar6 * 0x60 + lVar5);
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
      lVar5 = local_98;
    } while (((iStack_a4 != iVar8) || ((longlong *)CONCAT44(uStack_ac,uStack_b0) != plVar2)) ||
            (local_c0 != plVar1));
    lVar6 = (longlong)(int)uStack_90;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        FUN_145bf4c9e(param_1,*(undefined4 *)(lVar5 + lVar7));
        lVar7 = lVar7 + 4;
      } while (lVar6 * 4 != lVar7);
    }
  }
  uVar3 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_14595390e(&local_98,0);
  }
  param_1[0x7a] = 0;
  if (param_1[0xe8] != 0) {
    FUN_140457ffc(&DAT_14cbc9990,param_1);
    param_1[0xe8] = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x1f0), lVar5 != 0)) {
    lVar6 = FUN_144a79464();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30 && (param_1[0xe9] != 0)))) {
      FUN_140457ffc(lVar5 + 0x2a8,param_1);
    }
  }
  if (param_1[0xeb] != 0) {
    FUN_14480f766(&DAT_14cb896e0);
  }
  if (local_70 == '\0') {
    local_70 = '\x01';
    *(int *)(local_88 + 0x20) = *(int *)(local_88 + 0x20) + -1;
    if (local_78 != *(longlong *)(local_88 + 0x10)) {
      FUN_14004673c();
    }
    *(longlong ***)local_88 = local_80;
    *(undefined8 *)(local_88 + 0x18) = local_68;
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595390e FUN_14595390e body=26 status=ok
// SIG undefined FUN_14595390e(void)

void FUN_14595390e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14015d2bc(param_1,*(undefined4 *)(param_1 + 8),param_2,4);
    return;
  }
  return;
}



// FUNCTION 145953928 FUN_145953928 body=1011 status=ok
// SIG undefined FUN_145953928(void)

void FUN_145953928(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140c2421c(param_1,1);
  uVar8 = FUN_14479d2ce(param_1 + 0x30);
  FUN_140630e34(&local_90,uVar8);
  plVar11 = (longlong *)CONCAT44(uStack_84,local_88);
  if (plVar11 != (longlong *)0x0) {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar6 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_84,local_88) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_84,local_88) + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      if (local_90 != (longlong *)0x0) {
        FUN_1413e83c2();
      }
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  plVar11 = *(longlong **)(param_1 + 0x250);
  if (plVar11 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x250) = 0;
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_141135d17(*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x240));
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_1487b860a(param_1 + 0x238);
  }
  *(undefined4 *)(param_1 + 600) = 0;
  FUN_1413e82d3(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1457262b4(param_1 + 0x20,0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_1405d674a(param_1 + 0x148);
  lVar9 = FUN_1405d6522();
  plVar11 = (longlong *)(param_1 + 0x208);
  if (((*(int *)(param_1 + 0x210) != 0) && ((longlong *)*plVar11 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar11 + 0x30))(), cVar5 != '\0')) {
    plVar2 = (longlong *)(lVar9 + 0x1c8);
    uVar12 = lVar9 + 0x1d8;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = uVar12;
    if (*(int *)(lVar9 + 0x1f0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(lVar9 + 0x1f0);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar8 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar7 = local_78._4_4_;
    local_90 = plVar2;
    if ((local_78._4_4_ != iVar6) || (local_78 = local_58, uStack_60 != uVar12)) {
      do {
        local_78 = uVar8;
        local_68 = 0;
        uStack_60 = 0;
        FUN_1457268a6(*local_90 + (longlong)iVar7 * 0x1c0 + 0x168);
        plVar10 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
        uVar8 = (**(code **)(*plVar10 + 0x2b0))(plVar10);
        if ((*(int *)(param_1 + 0x210) == 0) ||
           (plVar10 = (longlong *)*plVar11, plVar10 == (longlong *)0x0)) {
          local_98 = 0;
        }
        else {
          (**(code **)(*plVar10 + 0x38))(plVar10,&local_98);
        }
        uVar4 = local_98;
        lVar9 = FUN_1414ef453(uVar8,0);
        if (lVar9 != 0) {
          FUN_145a1a87a(&local_68,uVar4,lVar9,0);
        }
        FUN_1405d7ab2(local_68,uStack_60 & 0xffffffff);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar8 = local_78;
      } while (local_90 != plVar2 ||
               (CONCAT44(uStack_7c,uStack_80) != uVar12 || local_78._4_4_ != iVar6));
    }
  }
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x1e8) + 0x58);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if ((*(int *)(param_1 + 0x210) != 0) &&
     (puVar3 = (undefined8 *)*plVar11, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar11,0,0,0x10);
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145953e40 FUN_145953e40 body=355 status=ok
// SIG undefined FUN_145953e40(void)

void FUN_145953e40(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if (((lVar3 != 0) && (plVar4 = (longlong *)FUN_1401499e8(lVar3), plVar4 != (longlong *)0x0)) &&
     (iVar1 = *(int *)(param_1 + 0xa0), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar6 = 0;
    do {
      lVar5 = (longlong)*(int *)(lVar3 + lVar6) * 0x280;
      if (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x108 + lVar5) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x78) + lVar5;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        uStack_90 = *(undefined4 *)(lVar5 + 0x10);
        uVar2 = *(undefined8 *)(lVar5 + 8);
        local_98 = (undefined2)uVar2;
        uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
        uStack_94 = (undefined4)((ulonglong)uVar2 >> 0x20);
        FUN_1447715ec(&local_88,lVar5 + 0x18);
        local_a8 = DAT_14cb7bde0;
        local_a0 = DAT_14cb7bde8;
        FUN_144928d62(&local_88,5,&local_a8);
        (**(code **)(*plVar4 + 0x40))(plVar4,&local_98,*(undefined8 *)(lVar5 + 0x108));
        *(undefined8 *)(lVar5 + 0x108) = 0;
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145953fa4 FUN_145953fa4 body=42 status=ok
// SIG undefined FUN_145953fa4(void)

undefined8 FUN_145953fa4(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140612812();
  lVar2 = FUN_145953fce(uVar1);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x660) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 145953fce FUN_145953fce body=74 status=ok
// SIG undefined FUN_145953fce(void)

longlong FUN_145953fce(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar1 != 0)) {
    lVar2 = FUN_145996cc0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145954018 FUN_145954018 body=35 status=ok
// SIG undefined FUN_145954018(void)

undefined8 FUN_145954018(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14595403c FUN_14595403c body=139 status=ok
// SIG undefined FUN_14595403c(void)

void FUN_14595403c(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = FUN_1447210f0(param_2);
  lVar1 = FUN_141164a58(param_1);
  if (lVar3 == lVar1) {
    lVar3 = FUN_1401e6c61();
    if (lVar3 == param_3) {
      uVar4 = 0xffffffff;
      if (param_2 != 0) {
        lVar3 = FUN_1401b2ade(param_2);
        if (lVar3 != 0) {
          lVar3 = FUN_144a7ba4c(lVar3);
          if (lVar3 != 0) {
            uVar4 = *(undefined4 *)(lVar3 + 0xe0);
          }
        }
      }
      cVar2 = FUN_1459372e6(param_1,uVar4);
      if (cVar2 != '\0') {
        FUN_14047a6d2(param_1,uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459540d0 FUN_1459540d0 body=9 status=ok
// SIG undefined FUN_1459540d0(void)

void FUN_1459540d0(longlong param_1)

{
  FUN_1459540da(param_1 + 0x10);
  return;
}



// FUNCTION 1459540da FUN_1459540da body=74 status=ok
// SIG undefined FUN_1459540da(void)

void FUN_1459540da(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f3700;
  FUN_1449db362(param_1 + 7);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145954120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145954124 FUN_145954124 body=44 status=ok
// SIG undefined FUN_145954124(void)

void FUN_145954124(longlong param_1)

{
  FUN_1413e8f00();
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}



// FUNCTION 145954150 FUN_145954150 body=68 status=ok
// SIG undefined FUN_145954150(void)

void FUN_145954150(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x608);
  memset(_Dst,0,0x608);
  FUN_145954194(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145954194 FUN_145954194 body=1053 status=ok
// SIG undefined FUN_145954194(void)

undefined8 * FUN_145954194(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8ad180;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_144a5dc74(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  FUN_1413e92dc(param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  FUN_1400b22c2(&local_40,"white");
  param_1[99] = local_40;
  *(undefined4 *)(param_1 + 100) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x324) = local_34;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  FUN_140056680(param_1 + 0x7b,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x7d,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 0x7f) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  FUN_1413e92dc(param_1 + 0x86);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  FUN_1413e92dc(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0x3f800000;
  FUN_140056680(param_1 + 0xbe,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0xc0) = 0x40400000;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459545b2 FUN_1459545b2 body=816 status=ok
// SIG undefined FUN_1459545b2(void)

void FUN_1459545b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1459548ec();
  local_48 = 0;
  local_58 = 0;
  local_50 = 1;
  FUN_1446f470e(&local_78,L"bSyncDamageToExpSyncLevel",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"EffectiveExpSyncLevel",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"WorldGameStage",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"StartGameTimer",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"bServerFinishedPostPrologueIntro",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  local_78 = L"NewGameState";
  puStack_70 = &DAT_100000024;
  FUN_140c2c993(&local_78,param_2,&local_58);
  FUN_1446f470e(&local_78,L"PlayingCustomCutsceneMovie",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"DiscoveryReplicatedBitArray",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  local_68 = FUN_1459548e4();
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"DiscoveryReplicatedLiveActors",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  local_68 = FUN_1459548e8();
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"MostRecentPlatformActivitySubtask",1);
  uVar1 = FUN_14030d660();
  FUN_14030d660();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459548e4 FUN_1459548e4 body=3 status=ok
// SIG undefined FUN_1459548e4(void)

undefined8 FUN_1459548e4(void)

{
  return 0;
}



// FUNCTION 1459548e8 FUN_1459548e8 body=3 status=ok
// SIG undefined FUN_1459548e8(void)

undefined8 FUN_1459548e8(void)

{
  return 0;
}



// FUNCTION 1459548ec FUN_1459548ec body=518 status=ok
// SIG undefined FUN_1459548ec(void)

void FUN_1459548ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145954af4();
  FUN_1446f470e(&local_58,L"HostPlayerState",1);
  uVar1 = FUN_14041aabe();
  FUN_14041aabe();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PlatformGameplaySessions",1);
  uVar1 = FUN_14041aabe();
  FUN_14041aabe();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"GameSessionEventGuid",1);
  uVar1 = FUN_14041aabe();
  FUN_14041aabe();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"GameSessionGuid",1);
  uVar1 = FUN_14041aabe();
  FUN_14041aabe();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ModuleConduits",1);
  uVar1 = FUN_14041aabe();
  FUN_14041aabe();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bPartyCrossplayEnabled",1);
  uVar1 = FUN_14041aabe();
  FUN_14041aabe();
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



// FUNCTION 145954af4 FUN_145954af4 body=518 status=ok
// SIG undefined FUN_145954af4(void)

void FUN_145954af4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145954cfc();
  FUN_1446f470e(&local_58,L"ServerIdentity",1);
  uVar1 = FUN_140cbc144();
  FUN_140cbc144();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ServerModeDef",1);
  uVar1 = FUN_140cbc144();
  FUN_140cbc144();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"SelectorStates",1);
  uVar1 = FUN_140cbc144();
  FUN_140cbc144();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PlayerStateStableArray",1);
  uVar1 = FUN_140cbc144();
  FUN_140cbc144();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PlayerGroupStateStableArray",1);
  uVar1 = FUN_140cbc144();
  FUN_140cbc144();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"GameplayDirector",1);
  uVar1 = FUN_140cbc144();
  FUN_140cbc144();
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



// FUNCTION 145954cfc FUN_145954cfc body=224 status=ok
// SIG undefined FUN_145954cfc(void)

void FUN_145954cfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145954dde();
  FUN_1446f470e(&local_38,L"MatchState",1);
  uVar1 = FUN_140caa2f8();
  FUN_140caa2f8();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  local_28 = 0;
  uStack_30 = uStack_30 & 0xffffffffffffff00;
  local_38 = 1;
  FUN_1446f470e(&local_40,L"ElapsedTime",1);
  uVar1 = FUN_140caa2f8();
  FUN_140caa2f8();
  uVar1 = FUN_140f1fabf(uVar1,local_40);
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145954dde FUN_145954dde body=518 status=ok
// SIG undefined FUN_145954dde(void)

void FUN_145954dde(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"SpectatorClass",1);
  uVar1 = FUN_1413e9348();
  FUN_1413e9348();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  local_48 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  local_58 = 1;
  FUN_1446f470e(&local_78,L"GameModeClass",1);
  uVar1 = FUN_1413e9348();
  FUN_1413e9348();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ReplicatedWorldTimeSecondsDouble",1);
  uVar1 = FUN_1413e9348();
  FUN_1413e9348();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = CONCAT71(uStack_50._1_7_,1);
  local_78 = L"ReplicatedWorldTimeSeconds";
  uStack_70 = 0x10000000e;
  FUN_140c2c993(&local_78,param_2,&local_58);
  FUN_1446f470e(&local_78,L"bReplicatedHasBegunPlay",1);
  uVar1 = FUN_1413e9348();
  FUN_1413e9348();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  FUN_1446f470e(&local_78,L"GbxReplicatedLowestPlayerDetailMode",1);
  uVar1 = FUN_1413e9348();
  FUN_1413e9348();
  uVar1 = FUN_140f1fabf(uVar1,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_78);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145954fe6 FUN_145954fe6 body=66 status=ok
// SIG undefined FUN_145954fe6(void)

void FUN_145954fe6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    FUN_1413e942e(lVar1,uVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 145955034 FUN_145955034 body=412 status=ok
// SIG undefined FUN_145955034(void)

undefined8 * FUN_145955034(undefined8 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  FUN_1459552b8();
  *param_1 = &PTR_FUN_14b7606a0;
  param_1[0xa6] = &PTR_FUN_14b760e60;
  param_1[0xa7] = &PTR_FUN_14b760ea0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 2;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xbb] = 2;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined2 *)((longlong)param_1 + 0x5e4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5f3) = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 2;
  *(undefined1 *)((longlong)param_1 + 0x621) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  FUN_1459551d0(param_1 + 0xcb);
  *(undefined1 *)(param_1 + 0xd4) = 0;
  FUN_145955238(param_1 + 0xd5);
  FUN_140f23ff6(param_1 + 0x14e);
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  FUN_140f23ff6(param_1 + 0x172);
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar2 = FUN_1403ca102(param_1);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = FUN_140d27a2a(lVar2);
      uVar1 = *(undefined1 *)(lVar2 + 0xb0);
    }
    *(undefined1 *)(param_1 + 0xc4) = uVar1;
  }
  return param_1;
}



// FUNCTION 1459551d0 FUN_1459551d0 body=103 status=ok
// SIG undefined FUN_1459551d0(void)

longlong FUN_1459551d0(longlong param_1)

{
  FUN_1413e94bc(param_1,0x3f800000);
  FUN_1413e94bc(param_1 + 0xc,0x3f800000);
  FUN_1413e94bc(param_1 + 0x18,0x3f800000);
  FUN_1413e94bc(param_1 + 0x24,0x3f800000);
  FUN_1413e94bc(param_1 + 0x30,0x3f800000);
  FUN_1413e94bc(param_1 + 0x3c,0x3f800000);
  return param_1;
}



// FUNCTION 145955238 FUN_145955238 body=127 status=ok
// SIG undefined FUN_145955238(void)

undefined8 * FUN_145955238(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  FUN_140f23ff6(param_1 + 9);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_140f23ff6(param_1 + 0x2d);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_140f23ff6(param_1 + 0x53);
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  return param_1;
}



// FUNCTION 1459552b8 FUN_1459552b8 body=189 status=ok
// SIG undefined FUN_1459552b8(void)

undefined8 * FUN_1459552b8(undefined8 *param_1)

{
  FUN_145955376();
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 2;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *param_1 = &PTR_FUN_14b170620;
  param_1[0x91] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0x7d000000000;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 2;
  return param_1;
}



// FUNCTION 145955376 FUN_145955376 body=64 status=ok
// SIG undefined FUN_145955376(void)

undefined8 * FUN_145955376(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1459553b6();
  *param_1 = &PTR_FUN_14a8ffa30;
  param_1[0x81] = 0;
  uVar1 = DAT_14cadad68;
  param_1[0x7e] = DAT_14cadad68;
  param_1[0x7f] = uVar1;
  return param_1;
}



// FUNCTION 1459553b6 FUN_1459553b6 body=260 status=ok
// SIG undefined FUN_1459553b6(void)

undefined8 * FUN_1459553b6(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Sprite",1);
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,0,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14a900ed0;
  param_1[0x7a] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_1405ba932(param_1,0);
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xf7;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3dcccccd;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x41200000;
  FUN_1413e94d0(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459554bc FUN_1459554bc body=132 status=ok
// SIG undefined FUN_1459554bc(void)

void FUN_1459554bc(longlong param_1,int param_2)

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



// FUNCTION 145955542 FUN_145955542 body=135 status=ok
// SIG undefined FUN_145955542(void)

longlong FUN_145955542(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1459555ca();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_14595558f;
  }
  local_30 = param_3;
  FUN_14595563a(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14595558f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 1459555ca FUN_1459555ca body=112 status=ok
// SIG undefined FUN_1459555ca(void)

int FUN_1459555ca(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14595563a FUN_14595563a body=276 status=ok
// SIG undefined FUN_14595563a(void)

undefined4 * FUN_14595563a(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459557e2(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_145955750(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_1413ea056(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145955750 FUN_145955750 body=145 status=ok
// SIG undefined FUN_145955750(void)

undefined8 FUN_145955750(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar12 = FUN_1459555ca(), iVar12 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
    plVar4 = *(longlong **)(puVar3 + 6);
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
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar3[4] = param_3[4];
    puVar3[5] = uVar9;
    puVar3[6] = uVar10;
    puVar3[7] = uVar11;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_147073836(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 1459557e2 FUN_1459557e2 body=243 status=ok
// SIG undefined FUN_1459557e2(void)

int * FUN_1459557e2(longlong *param_1,int *param_2)

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



// FUNCTION 1459558da FUN_1459558da body=95 status=ok
// SIG undefined FUN_1459558da(void)

void FUN_1459558da(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a48e140;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x89) = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 145955939 FUN_145955939 body=177 status=ok
// SIG undefined FUN_145955939(void)

undefined8 FUN_145955939(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459559ec();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459559ec FUN_1459559ec body=221 status=ok
// SIG undefined FUN_1459559ec(void)

longlong FUN_1459559ec(void)

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
  if (DAT_14cabf870 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147860ff9;
    local_40 = &LAB_145810d88;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"ChaosEventRelay",&DAT_14cabf870,&DAT_147860ff8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145955aca FUN_145955aca body=53 status=ok
// SIG undefined FUN_145955aca(void)

void FUN_145955aca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145955b00(param_1);
  return;
}



// FUNCTION 145955b00 FUN_145955b00 body=69 status=ok
// SIG undefined FUN_145955b00(void)

void FUN_145955b00(longlong *param_1)

{
  FUN_145955b46();
  if (param_1[5] != 0) {
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



// FUNCTION 145955b46 FUN_145955b46 body=78 status=ok
// SIG undefined FUN_145955b46(void)

void FUN_145955b46(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147cc0d40(param_1);
  }
  FUN_14473de44(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_1446fb5ec(param_1 + 0x10,0);
  return;
}



// FUNCTION 145955c98 FUN_145955c98 body=41 status=ok
// SIG undefined FUN_145955c98(void)

undefined8 FUN_145955c98(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145955cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145955cd0 FUN_145955cd0 body=36 status=ok
// SIG undefined FUN_145955cd0(void)

undefined8 FUN_145955cd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145955cf4 FUN_145955cf4 body=106 status=ok
// SIG undefined FUN_145955cf4(void)

void FUN_145955cf4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145955d60(local_28,*(undefined4 *)(param_2 + 0xdc));
  FUN_14003c038(param_1 + 0x90,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145955d60 FUN_145955d60 body=841 status=ok
// SIG undefined FUN_145955d60(void)

undefined8 FUN_145955d60(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong *local_88 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined4 *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48 [4];
  longlong *local_38 [2];
  ulonglong local_28;
  
  auVar5._0_8_ = (double)param_2 * 10000000.0 + 0.5;
  auVar5._8_8_ = 0;
  auVar5 = roundpd(auVar5,auVar5,1);
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar4 = (double)(longlong)auVar5._0_8_ / 36000000000.0;
  if (dVar4 < 1.0) {
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    FUN_1413ea578(local_88,SUB84((double)(longlong)auVar5._0_8_ / 600000000.0,0),&DAT_14cbd44a0);
    FUN_14595615c(local_b8);
    FUN_14023409e(&local_a8,local_b8,1);
    local_48[0] = 4;
    FUN_14023423e(local_38,local_88);
    local_68 = local_48;
    local_60 = &local_28;
    FUN_14010d304(&local_58);
    local_78 = local_a8;
    local_70 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_1,&local_78,&local_58);
    FUN_14007f2db(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar3 = (int *)((longlong)local_a0 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
    }
  }
  else {
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    FUN_1413ea578(local_c8,SUB84(dVar4,0),&DAT_14cbd44a0);
    FUN_1459560aa(local_b8);
    FUN_14023409e(&local_d8,local_b8,1);
    local_48[0] = 4;
    FUN_14023423e(local_38,local_c8);
    local_68 = local_48;
    local_60 = &local_28;
    FUN_14010d304(&local_58);
    local_78 = local_d8;
    local_70 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_1,&local_78,&local_58);
    FUN_14007f2db(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    local_88[0] = local_c8[0];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar3 = (int *)((longlong)local_d0 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        local_88[0] = local_c8[0];
        if (*piVar3 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
          local_88[0] = local_c8[0];
        }
      }
    }
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  plVar1 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1459560aa FUN_1459560aa body=176 status=ok
// SIG undefined FUN_1459560aa(void)

undefined8 * FUN_1459560aa(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a7c5f6(&DAT_14cbd44e8);
  if (cVar2 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"HoursPlayedText",0);
    FUN_140ac6c96(&local_48,&DAT_14cbd44e8);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = DAT_14cbd44e8;
  *param_1 = DAT_14cbd44e8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cbd44f0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595615c FUN_14595615c body=176 status=ok
// SIG undefined FUN_14595615c(void)

undefined8 * FUN_14595615c(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a7c5f6(&DAT_14cbd44f8);
  if (cVar2 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"MinutesPlayedText",0);
    FUN_140ac6c96(&local_48,&DAT_14cbd44f8);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = DAT_14cbd44f8;
  *param_1 = DAT_14cbd44f8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cbd4500;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595620e FUN_14595620e body=148 status=ok
// SIG undefined FUN_14595620e(void)

bool FUN_14595620e(longlong param_1)

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



// FUNCTION 1459562a4 FUN_1459562a4 body=424 status=ok
// SIG undefined FUN_1459562a4(void)

void FUN_1459562a4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 uStack_50;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x968) != 0) {
    lVar2 = param_1 + 0x970;
    FUN_14036b79c(lVar2,param_1);
    local_58 = FUN_1413ea58e;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    FUN_14574f420(lVar2,local_40,param_1,&local_58);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    if ((longlong)*(int *)(param_1 + 0x968) != 0) {
      lVar10 = (longlong)*(int *)(param_1 + 0x968) * 0x28;
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x960) + 8);
      do {
        plVar1 = plVar9 + -1;
        lVar6 = FUN_14479d2ce(plVar1);
        if ((lVar6 == 0) && (*plVar9 != 0)) {
          lVar6 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar6 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,lVar6);
          }
          else {
            uVar5 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,lVar6);
            }
          }
        }
        uVar7 = FUN_1412199c4(plVar1);
        uVar3 = uStack_50;
        lVar6 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_140535bba(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar6 * 8) = uVar7;
        plVar9 = plVar9 + 5;
        lVar10 = lVar10 + -0x28;
      } while (lVar10 != 0);
    }
    FUN_1413ea94e(lVar2,&local_58,1);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14595644e FUN_14595644e body=123 status=ok
// SIG undefined FUN_14595644e(void)

void FUN_14595644e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40);
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_38 = &LAB_145c7beac;
    local_30 = 0;
    FUN_145956a9a(local_28);
    FUN_1459564ca(lVar1,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459564ca FUN_1459564ca body=300 status=ok
// SIG undefined FUN_1459564ca(void)

void FUN_1459564ca(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14114e6dc(param_1 + 0x40);
  FUN_1459565f8(param_1,&local_38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
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
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14b4f28a0;
  local_48[3] = param_1;
  local_48[4] = FUN_145a3b54a;
  local_50 = param_1;
  FUN_1459567f0(uVar1,&local_50,&local_38,&local_48);
  FUN_1449db362(&local_48);
  FUN_14127b1cd(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459565f8 FUN_1459565f8 body=293 status=ok
// SIG undefined FUN_1459565f8(void)

longlong * FUN_1459565f8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar9 = 0;
    do {
      FUN_14595671e(param_1,&local_58,*(undefined4 *)(lVar5 + lVar9));
      plVar8 = local_50;
      lVar7 = local_58;
      if (local_58 != 0) {
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1413eac7e(param_2,iVar4);
        }
        lVar6 = *param_2;
        *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar7;
        *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar8 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595671e FUN_14595671e body=208 status=ok
// SIG undefined FUN_14595671e(void)

undefined8 * FUN_14595671e(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x110))(local_30,param_2,param_3);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      goto LAB_145956785;
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_145956785:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459567f0 FUN_1459567f0 body=322 status=ok
// SIG undefined FUN_1459567f0(void)

void FUN_1459567f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f2570;
  plVar1 = plVar3 + 2;
  local_50 = (longlong *)*param_4;
  *param_4 = 0;
  local_48 = (longlong *)CONCAT44(local_48._4_4_,*(undefined4 *)(param_4 + 1));
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_1459569d6(plVar1,*param_2,param_3,&local_50);
  local_60 = plVar1;
  local_58 = plVar3;
  FUN_145956934(&local_60,plVar1);
  local_50 = plVar1;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145956934 FUN_145956934 body=162 status=ok
// SIG undefined FUN_145956934(void)

void FUN_145956934(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145956973;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145956973;
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
LAB_145956973:
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
                    /* WARNING: Could not recover jumptable at 0x0001459569d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459569d6 FUN_1459569d6 body=196 status=ok
// SIG undefined FUN_1459569d6(void)

undefined8 *
FUN_1459569d6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f2590;
  param_1[4] = &PTR_FUN_14b4f25b8;
  param_1[7] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1413eadba(param_1 + 7,iVar1,0);
    FUN_1413ead8c(param_1[7],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14114e6dc(param_1 + 10,param_4);
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 145956a9a FUN_145956a9a body=428 status=ok
// SIG undefined FUN_145956a9a(void)

longlong * FUN_145956a9a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145956b7a:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4e9f90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145956b7a;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b4e9f90;
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



// FUNCTION 145956c46 FUN_145956c46 body=37 status=ok
// SIG undefined FUN_145956c46(void)

void FUN_145956c46(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_145956c6c(param_2);
  return;
}



// FUNCTION 145956c6c FUN_145956c6c body=130 status=ok
// SIG undefined FUN_145956c6c(void)

undefined8 * FUN_145956c6c(undefined8 *param_1)

{
  FUN_140d710e4();
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x13) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = &PTR_FUN_14a1a0aa0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *param_1 = &PTR_FUN_14ac7d8e0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 145956cfc FUN_145956cfc body=40 status=ok
// SIG undefined FUN_145956cfc(void)

undefined8 FUN_145956cfc(undefined8 param_1,int param_2)

{
  FUN_145956d24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145956d24 FUN_145956d24 body=76 status=ok
// SIG undefined FUN_145956d24(void)

void FUN_145956d24(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0a2660;
  plVar3 = (longlong *)param_1[0x2e];
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
  FUN_145956d70(param_1);
  return;
}



// FUNCTION 145956d70 FUN_145956d70 body=156 status=ok
// SIG undefined FUN_145956d70(void)

void FUN_145956d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a420e90;
  FUN_1413eae9e(param_1 + 0x24);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 10);
  return;
}



// FUNCTION 145956e12 FUN_145956e12 body=228 status=ok
// SIG undefined FUN_145956e12(void)

longlong FUN_145956e12(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952570 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_142817f9a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e422a;
    local_40 = FUN_1462755eb;
    local_48 = L"Engine";
    local_50 = 0x4000000;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"ObjectPropertyBase",&DAT_14c952570,&DAT_1468e4230);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952570;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145956efc FUN_145956efc body=228 status=ok
// SIG undefined FUN_145956efc(void)

longlong FUN_145956efc(void)

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
  if (DAT_14c9648d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140631fbe;
    local_20 = &LAB_145834656;
    local_28 = &LAB_146272d4c;
    local_38 = &LAB_1469091ad;
    local_40 = &LAB_145ea7e8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x358;
    FUN_14081cfa3(L"/Script/CoreUObject",L"VerseClass",&DAT_14c9648d0,&DAT_1469091ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9648d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145956fe8 FUN_145956fe8 body=228 status=ok
// SIG undefined FUN_145956fe8(void)

longlong FUN_145956fe8(void)

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
  if (DAT_14c967ba0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14692e197;
    local_40 = FUN_14627879e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/DeveloperSettings",L"DeveloperSettingsBackedByNexus",&DAT_14c967ba0,
                  &DAT_14692e196);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c967ba0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459570d4 FUN_1459570d4 body=228 status=ok
// SIG undefined FUN_1459570d4(void)

longlong FUN_1459570d4(void)

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
  if (DAT_14c9a0608 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e61dc;
    local_38 = &LAB_147088ed7;
    local_40 = &LAB_1462a0b9a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStoreDeep",&DAT_14c9a0608,&DAT_147088ed6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0608;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459571c0 FUN_1459571c0 body=228 status=ok
// SIG undefined FUN_1459571c0(void)

longlong FUN_1459571c0(void)

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
  if (DAT_14c9a52e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e307a;
    local_38 = &LAB_1470cc15c;
    local_40 = &LAB_1462acede;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x400;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineTestActor",&DAT_14c9a52e8,FUN_1462acebc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a52e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459572aa FUN_1459572aa body=228 status=ok
// SIG undefined FUN_1459572aa(void)

longlong FUN_1459572aa(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa6440 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = &LAB_14587d9ba;
    local_28 = FUN_1432411d6;
    local_38 = &LAB_147461d6d;
    local_40 = FUN_1417925d4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x740;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeNaniteComponent",&DAT_14caa6440,&DAT_147461d6c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa6440;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595739c FUN_14595739c body=228 status=ok
// SIG undefined FUN_14595739c(void)

longlong FUN_14595739c(void)

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
  if (DAT_14caa8cb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_14748f111;
    local_40 = &LAB_145c19828;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6f0;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldSystemComponent",&DAT_14caa8cb0,FUN_14632af2e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8cb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957486 FUN_145957486 body=228 status=ok
// SIG undefined FUN_145957486(void)

longlong FUN_145957486(void)

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
  if (DAT_14cab1b08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14751fc69;
    local_40 = FUN_146338b4d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieScenePlaybackClient",&DAT_14cab1b08,&DAT_14751fc68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1b08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957570 FUN_145957570 body=228 status=ok
// SIG undefined FUN_145957570(void)

longlong FUN_145957570(void)

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
  if (DAT_14cab1d28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1475202f5;
    local_40 = FUN_146339387;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEasingFunction",&DAT_14cab1d28,&DAT_1475202f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1d28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595765c FUN_14595765c body=228 status=ok
// SIG undefined FUN_14595765c(void)

longlong FUN_14595765c(void)

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
  if (DAT_14cab20f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14599034a;
    local_38 = &LAB_147523237;
    local_40 = &LAB_145bcc8be;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTimeWarpGetter",&DAT_14cab20f0,&DAT_147523236);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab20f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957748 FUN_145957748 body=228 status=ok
// SIG undefined FUN_145957748(void)

longlong FUN_145957748(void)

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
  if (DAT_14cab2308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633909e;
    local_38 = &LAB_147526483;
    local_40 = FUN_14633b1d2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneChannelOverrideContainer",&DAT_14cab2308,
                  &DAT_147526482);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957834 FUN_145957834 body=228 status=ok
// SIG undefined FUN_145957834(void)

longlong FUN_145957834(void)

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
  if (DAT_14cab52f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_1475cc99c;
    local_40 = &LAB_1459b7b3c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneParameterSection",&DAT_14cab52f0,
                  FUN_146348dd4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab52f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595791e FUN_14595791e body=228 status=ok
// SIG undefined FUN_14595791e(void)

longlong FUN_14595791e(void)

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
  if (DAT_14cab51e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1475c9f0b;
    local_40 = FUN_146348789;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneParameterSectionExtender",&DAT_14cab51e0,
                  &DAT_1475c9f0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab51e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957a0a FUN_145957a0a body=228 status=ok
// SIG undefined FUN_145957a0a(void)

longlong FUN_145957a0a(void)

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
  if (DAT_14cab5e60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411e5bea;
    local_38 = &LAB_14765c919;
    local_40 = FUN_1417a45e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneInitialValueSystem",&DAT_14cab5e60,
                  &DAT_14765c918);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5e60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957af6 FUN_145957af6 body=228 status=ok
// SIG undefined FUN_145957af6(void)

longlong FUN_145957af6(void)

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
  if (DAT_14cab60e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_14769d539;
    local_40 = &LAB_145df5f68;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneQuaternionInterpolationRotationSystem",
                  &DAT_14cab60e0,&DAT_14769d538);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab60e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957be0 FUN_145957be0 body=228 status=ok
// SIG undefined FUN_145957be0(void)

longlong FUN_145957be0(void)

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
  if (DAT_14cab6408 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476bb76d;
    local_40 = FUN_1417a8c1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneByteTrack",&DAT_14cab6408,&DAT_1476bb76c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6408;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957ccc FUN_145957ccc body=228 status=ok
// SIG undefined FUN_145957ccc(void)

longlong FUN_145957ccc(void)

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
  if (DAT_14cab6598 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476be8c1;
    local_40 = FUN_1417a8d06;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneFloatTrack",&DAT_14cab6598,&DAT_1476be8c0)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957db8 FUN_145957db8 body=228 status=ok
// SIG undefined FUN_145957db8(void)

longlong FUN_145957db8(void)

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
  if (DAT_14cab6628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_1476bf545;
    local_40 = FUN_14634d46c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneMaterialTrack",&DAT_14cab6628,
                  &DAT_1476bf544);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957ea2 FUN_145957ea2 body=228 status=ok
// SIG undefined FUN_145957ea2(void)

longlong FUN_145957ea2(void)

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
  if (DAT_14cab6658 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476bfef1;
    local_40 = FUN_14634d4e8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneObjectPropertyTrack",&DAT_14cab6658,
                  &DAT_1476bfef0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6658;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145957f8c FUN_145957f8c body=228 status=ok
// SIG undefined FUN_145957f8c(void)

longlong FUN_145957f8c(void)

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
  if (DAT_14cab6758 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476c1dcd;
    local_40 = FUN_14634d91b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneFloatVectorTrack",&DAT_14cab6758,
                  &DAT_1476c1dcc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6758;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958076 FUN_145958076 body=228 status=ok
// SIG undefined FUN_145958076(void)

longlong FUN_145958076(void)

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
  if (DAT_14cab6770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476c1dd1;
    local_40 = FUN_14634d99c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneDoubleVectorTrack",&DAT_14cab6770,
                  &DAT_1476c1dd0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958162 FUN_145958162 body=228 status=ok
// SIG undefined FUN_145958162(void)

longlong FUN_145958162(void)

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
  if (DAT_14cab7820 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_14772d30f;
    local_40 = &LAB_14635354a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x248;
    FUN_14081cfa3(L"/Script/UMG",L"DynamicEntryBoxBase",&DAT_14cab7820,FUN_146353528);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7820;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595824e FUN_14595824e body=228 status=ok
// SIG undefined FUN_14595824e(void)

longlong FUN_14595824e(void)

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
  if (DAT_14cab7a10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_147733229;
    local_40 = &LAB_145c166ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x410;
    FUN_14081cfa3(L"/Script/UMG",L"ExpandableArea",&DAT_14cab7a10,FUN_146353c76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7a10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595833a FUN_14595833a body=228 status=ok
// SIG undefined FUN_14595833a(void)

longlong FUN_14595833a(void)

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
  if (DAT_14cab7e40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_14773d0b7;
    local_40 = &LAB_14635516c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x290;
    FUN_14081cfa3(L"/Script/UMG",L"ListViewBase",&DAT_14cab7e40,FUN_14635514a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7e40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958426 FUN_145958426 body=228 status=ok
// SIG undefined FUN_145958426(void)

longlong FUN_145958426(void)

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
  if (DAT_14cab84f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146351894;
    local_38 = &LAB_14774c61d;
    local_40 = &LAB_1458d9d04;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xb50;
    FUN_14081cfa3(L"/Script/UMG",L"ScrollBox",&DAT_14cab84f0,FUN_146357106);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab84f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958512 FUN_145958512 body=228 status=ok
// SIG undefined FUN_145958512(void)

longlong FUN_145958512(void)

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
  if (DAT_14cab85e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_14774e678;
    local_40 = FUN_146357662;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/UMG",L"SizeBoxSlot",&DAT_14cab85e8,FUN_146357640);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab85e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459585fe FUN_1459585fe body=228 status=ok
// SIG undefined FUN_1459585fe(void)

longlong FUN_1459585fe(void)

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
  if (DAT_14cab8a68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146351894;
    local_38 = &LAB_1477581f0;
    local_40 = FUN_1417aa16e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/UMG",L"VerticalBox",&DAT_14cab8a68,FUN_146358bb4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8a68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459586ea FUN_1459586ea body=228 status=ok
// SIG undefined FUN_1459586ea(void)

longlong FUN_1459586ea(void)

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
  if (DAT_14cb0acb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146406ac4;
    local_38 = &LAB_147d6790d;
    local_40 = FUN_146406ac9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"AudioEngineSubsystem",&DAT_14cb0acb8,&DAT_147d6790c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0acb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459587d6 FUN_1459587d6 body=228 status=ok
// SIG undefined FUN_1459587d6(void)

longlong FUN_1459587d6(void)

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
  if (DAT_14cabc198 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146364c8e;
    local_38 = &LAB_14780c181;
    local_40 = FUN_146364c93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/MediaAssets",L"BaseMediaSource",&DAT_14cabc198,&DAT_14780c180);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc198;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459588c0 FUN_1459588c0 body=228 status=ok
// SIG undefined FUN_1459588c0(void)

longlong FUN_1459588c0(void)

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
  if (DAT_14cabfc88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463722aa;
    local_38 = &LAB_147861709;
    local_40 = &LAB_145b2137d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"DistributionFloatConstantCurve",&DAT_14cabfc88,&DAT_147861708)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabfc88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459589aa FUN_1459589aa body=228 status=ok
// SIG undefined FUN_1459589aa(void)

longlong FUN_1459589aa(void)

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
  if (DAT_14cac0e68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a6b83c;
    local_38 = &LAB_14786c547;
    local_40 = FUN_145be5727;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"ExternalDataLayerInstance",&DAT_14cac0e68,&DAT_14786c546);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0e68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958a94 FUN_145958a94 body=228 status=ok
// SIG undefined FUN_145958a94(void)

longlong FUN_145958a94(void)

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
  if (DAT_14cac1458 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14786f3dd;
    local_40 = &LAB_140fde2c5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/Engine",L"GbxLightBoundingVolume",&DAT_14cac1458,&DAT_14786f3dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1458;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958b7e FUN_145958b7e body=228 status=ok
// SIG undefined FUN_145958b7e(void)

longlong FUN_145958b7e(void)

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
  if (DAT_14cac15e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14786f64f;
    local_40 = &LAB_145a5eefb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"GbxRetargetAsset",&DAT_14cac15e8,&DAT_14786f64e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac15e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958c68 FUN_145958c68 body=228 status=ok
// SIG undefined FUN_145958c68(void)

longlong FUN_145958c68(void)

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
  if (DAT_14cac3788 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_1478814d1;
    local_40 = &LAB_145db4b4f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpressionPinBase",&DAT_14cac3788,&DAT_1478814d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac3788;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958d54 FUN_145958d54 body=228 status=ok
// SIG undefined FUN_145958d54(void)

longlong FUN_145958d54(void)

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
  if (DAT_14cac4080 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_147881bbd;
    local_40 = &LAB_1459be622;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000011;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpressionSubstrateUtilityBase",&DAT_14cac4080,
                  &DAT_147881bbc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4080;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958e40 FUN_145958e40 body=228 status=ok
// SIG undefined FUN_145958e40(void)

longlong FUN_145958e40(void)

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
  if (DAT_14cac4668 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463855f0;
    local_38 = &LAB_147881da1;
    local_40 = &LAB_1409e247e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialFunction",&DAT_14cac4668,&DAT_147881da0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4668;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145958f2a FUN_145958f2a body=228 status=ok
// SIG undefined FUN_145958f2a(void)

longlong FUN_145958f2a(void)

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
  if (DAT_14cac4ce0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147884c43;
    local_40 = &LAB_1459be6d2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"NavAgentInterface",&DAT_14cac4ce0,&DAT_147884c42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4ce0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595901a FUN_14595901a body=228 status=ok
// SIG undefined FUN_14595901a(void)

longlong FUN_14595901a(void)

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
  if (DAT_14cac5280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147887199;
    local_40 = &LAB_145acecf6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleAttractorBase",&DAT_14cac5280,&DAT_147887198);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959106 FUN_145959106 body=228 status=ok
// SIG undefined FUN_145959106(void)

longlong FUN_145959106(void)

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
  if (DAT_14cac5340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_14788721b;
    local_40 = &LAB_1459fe7c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleBeamBase",&DAT_14cac5340,&DAT_14788721a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459591f2 FUN_1459591f2 body=228 status=ok
// SIG undefined FUN_1459591f2(void)

longlong FUN_1459591f2(void)

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
  if (DAT_14cac5568 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_1459e863c;
    local_38 = &LAB_14788735d;
    local_40 = &LAB_145aff193;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleEventReceiverBase",&DAT_14cac5568,&DAT_14788735c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5568;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459592dc FUN_1459592dc body=228 status=ok
// SIG undefined FUN_1459592dc(void)

longlong FUN_1459592dc(void)

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
  if (DAT_14cac5b00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147887a89;
    local_40 = &LAB_14607742c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x170;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleRequired",&DAT_14cac5b00,&DAT_147887a88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5b00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459593c8 FUN_1459593c8 body=228 status=ok
// SIG undefined FUN_1459593c8(void)

longlong FUN_1459593c8(void)

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
  if (DAT_14cac5bf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147887b99;
    local_40 = &LAB_1459be88a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleSizeBase",&DAT_14cac5bf0,&DAT_147887b98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5bf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459594b4 FUN_1459594b4 body=228 status=ok
// SIG undefined FUN_1459594b4(void)

longlong FUN_1459594b4(void)

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
  if (DAT_14cac5c98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147887bed;
    local_40 = &LAB_1459fe7f6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleSpawnBase",&DAT_14cac5c98,&DAT_147887bec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5c98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595959e FUN_14595959e body=228 status=ok
// SIG undefined FUN_14595959e(void)

longlong FUN_14595959e(void)

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
  if (DAT_14cac5c80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_1459594ae;
    local_38 = &LAB_147887be1;
    local_40 = &LAB_145c993c3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleSpawn",&DAT_14cac5c80,&DAT_147887be0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595968a FUN_14595968a body=228 status=ok
// SIG undefined FUN_14595968a(void)

longlong FUN_14595968a(void)

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
  if (DAT_14cac5fa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147888c95;
    local_40 = &LAB_1459be966;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleVelocityBase",&DAT_14cac5fa8,&DAT_147888c94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959776 FUN_145959776 body=228 status=ok
// SIG undefined FUN_145959776(void)

longlong FUN_145959776(void)

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
  if (DAT_14cac73e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1463bb724;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14638d560;
    local_38 = &LAB_14789bf97;
    local_40 = &LAB_145ab85dd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xc70;
    FUN_14081cfa3(L"/Script/Engine",L"SceneCaptureComponentCube",&DAT_14cac73e8,FUN_1463929ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac73e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959862 FUN_145959862 body=228 status=ok
// SIG undefined FUN_145959862(void)

longlong FUN_145959862(void)

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
  if (DAT_14cb0be70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147d76847;
    local_40 = &LAB_146409213;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/Engine",L"TriggerBase",&DAT_14cb0be70,&DAT_147d76846);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0be70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595994e FUN_14595994e body=228 status=ok
// SIG undefined FUN_14595994e(void)

longlong FUN_14595994e(void)

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
  if (DAT_14cac8ef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1478add81;
    local_40 = &LAB_145b22b19;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/Engine",L"VectorFieldComponent",&DAT_14cac8ef0,FUN_14639a4c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959a3a FUN_145959a3a body=228 status=ok
// SIG undefined FUN_145959a3a(void)

longlong FUN_145959a3a(void)

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
  if (DAT_14cacb298 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594aa1a;
    local_38 = &LAB_1478df71f;
    local_40 = FUN_1463a1f3c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"AnimCompress",&DAT_14cacb298,&DAT_1478df71e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb298;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959b26 FUN_145959b26 body=228 status=ok
// SIG undefined FUN_145959b26(void)

longlong FUN_145959b26(void)

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
  if (DAT_14cacdbc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463acf8e;
    local_38 = &LAB_147959d4e;
    local_40 = FUN_145beab52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3b0;
    FUN_14081cfa3(L"/Script/Engine",L"AtmosphericFogComponent",&DAT_14cacdbc0,FUN_1463acf6c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacdbc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959c10 FUN_145959c10 body=228 status=ok
// SIG undefined FUN_145959c10(void)

longlong FUN_145959c10(void)

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
  if (DAT_14cacf538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b15f2;
    local_38 = &LAB_14799348c;
    local_40 = &LAB_145c85320;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x188;
    FUN_14081cfa3(L"/Script/Engine",L"CanvasRenderTarget2D",&DAT_14cacf538,FUN_1463b15ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959cfc FUN_145959cfc body=228 status=ok
// SIG undefined FUN_145959cfc(void)

longlong FUN_145959cfc(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacfa18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1479a6fb0;
    local_40 = FUN_1463b26ec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"CheatManagerExtension",&DAT_14cacfa18,FUN_1463b26ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacfa18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959de8 FUN_145959de8 body=228 status=ok
// SIG undefined FUN_145959de8(void)

longlong FUN_145959de8(void)

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
  if (DAT_14cad13c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_1479dea0d;
    local_40 = &LAB_145d12bd3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x700;
    FUN_14081cfa3(L"/Script/Engine",L"HeterogeneousVolumeComponent",&DAT_14cad13c8,FUN_1463b780e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad13c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959ed4 FUN_145959ed4 body=228 status=ok
// SIG undefined FUN_145959ed4(void)

longlong FUN_145959ed4(void)

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
  if (DAT_14cad1aa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b7fb6;
    local_38 = &LAB_1479e8fea;
    local_40 = &LAB_1463b97f6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x1d8;
    FUN_14081cfa3(L"/Script/Engine",L"NavMovementComponent",&DAT_14cad1aa0,FUN_1463b97d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1aa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145959fc0 FUN_145959fc0 body=228 status=ok
// SIG undefined FUN_145959fc0(void)

longlong FUN_145959fc0(void)

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
  if (DAT_14cad83f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145893078;
    local_38 = &LAB_147a91837;
    local_40 = FUN_1463c7394;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"CancellableAsyncAction",&DAT_14cad83f8,FUN_1463c7372);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad83f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a0ac FUN_14595a0ac body=228 status=ok
// SIG undefined FUN_14595a0ac(void)

longlong FUN_14595a0ac(void)

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
  if (DAT_14caf7e58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147c89672;
    local_40 = &LAB_145aee02b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x590;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsConstraintComponent",&DAT_14caf7e58,FUN_1463f6ecc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf7e58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a198 FUN_14595a198 body=228 status=ok
// SIG undefined FUN_14595a198(void)

longlong FUN_14595a198(void)

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
  if (DAT_14caf8588 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147c8dc7a;
    local_40 = &LAB_1458d3760;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2e0;
    FUN_14081cfa3(L"/Script/Engine",L"RadialForceComponent",&DAT_14caf8588,FUN_1463f77ae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf8588;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a282 FUN_14595a282 body=228 status=ok
// SIG undefined FUN_14595a282(void)

longlong FUN_14595a282(void)

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
  if (DAT_14cb07920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147d2121b;
    local_40 = &LAB_145ec3e52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshLODSettings",&DAT_14cb07920,&DAT_147d2121a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb07920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a36c FUN_14595a36c body=228 status=ok
// SIG undefined FUN_14595a36c(void)

longlong FUN_14595a36c(void)

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
  if (DAT_14cb0fb30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580f4ee;
    local_38 = &LAB_147da8b87;
    local_40 = FUN_14640da0b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/Engine",L"VirtualTexture2D",&DAT_14cb0fb30,&DAT_147da8b86);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0fb30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a456 FUN_14595a456 body=228 status=ok
// SIG undefined FUN_14595a456(void)

longlong FUN_14595a456(void)

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
  if (DAT_14cb126e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d5eda;
    local_38 = &LAB_147dee393;
    local_40 = FUN_146414741;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Overlay",L"BasicOverlays",&DAT_14cb126e8,&DAT_147dee392);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb126e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a540 FUN_14595a540 body=228 status=ok
// SIG undefined FUN_14595a540(void)

longlong FUN_14595a540(void)

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
  if (DAT_14cb1d300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147e6cfb3;
    local_40 = FUN_146030c94;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavigationGraphNodeComponent",&DAT_14cb1d300,
                  &DAT_147e6cfb2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a62c FUN_14595a62c body=228 status=ok
// SIG undefined FUN_14595a62c(void)

longlong FUN_14595a62c(void)

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
  if (DAT_14cb1ff80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a9bc;
    local_38 = &LAB_147ee6bed;
    local_40 = &LAB_14642da4e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryGenerator_ProjectedPoints",&DAT_14cb1ff80,
                  &DAT_147ee6bec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ff80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a716 FUN_14595a716 body=228 status=ok
// SIG undefined FUN_14595a716(void)

longlong FUN_14595a716(void)

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
  if (DAT_14cb20d68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f14c4d;
    local_40 = FUN_14180b23e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/GbxAI",L"CoverStyleData",&DAT_14cb20d68,&DAT_147f14c4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20d68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a802 FUN_14595a802 body=228 status=ok
// SIG undefined FUN_14595a802(void)

longlong FUN_14595a802(void)

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
  if (DAT_14cb24768 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147f62788;
    local_40 = FUN_1464426e4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 800;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"DestructionSolverGeometryManagerComponent",
                  &DAT_14cb24768,FUN_1464426c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb24768;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a8ec FUN_14595a8ec body=228 status=ok
// SIG undefined FUN_14595a8ec(void)

longlong FUN_14595a8ec(void)

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
  if (DAT_14cb24850 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f62c53;
    local_40 = FUN_146442b07;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"GbxDestructibleScriptInterface",&DAT_14cb24850,
                  &DAT_147f62c52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb24850;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595a9d8 FUN_14595a9d8 body=228 status=ok
// SIG undefined FUN_14595a9d8(void)

longlong FUN_14595a9d8(void)

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
  if (DAT_14cb27e80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459097ea;
    local_38 = &LAB_147fa44c1;
    local_40 = &LAB_14612b1ec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/StateTreeModule",L"StateTreeEvaluatorBlueprintBase",&DAT_14cb27e80,
                  &DAT_147fa44c0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595aac2 FUN_14595aac2 body=228 status=ok
// SIG undefined FUN_14595aac2(void)

longlong FUN_14595aac2(void)

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
  if (DAT_14cb29810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe781f;
    local_40 = FUN_146458ea8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Vector2fCameraVariable",&DAT_14cb29810,&DAT_147fe781e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595abac FUN_14595abac body=228 status=ok
// SIG undefined FUN_14595abac(void)

longlong FUN_14595abac(void)

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
  if (DAT_14cb29840 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7827;
    local_40 = FUN_146458f78;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Vector3fCameraVariable",&DAT_14cb29840,&DAT_147fe7826
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29840;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595ac96 FUN_14595ac96 body=228 status=ok
// SIG undefined FUN_14595ac96(void)

longlong FUN_14595ac96(void)

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
  if (DAT_14cb29870 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe782f;
    local_40 = FUN_146459048;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Vector4fCameraVariable",&DAT_14cb29870,&DAT_147fe782e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595ad80 FUN_14595ad80 body=228 status=ok
// SIG undefined FUN_14595ad80(void)

longlong FUN_14595ad80(void)

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
  if (DAT_14cb298a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe7837;
    local_40 = FUN_146459140;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Rotator3fCameraVariable",&DAT_14cb298a0,
                  &DAT_147fe7836);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb298a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595ae6a FUN_14595ae6a body=228 status=ok
// SIG undefined FUN_14595ae6a(void)

longlong FUN_14595ae6a(void)

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
  if (DAT_14cb298d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411b2dca;
    local_38 = &LAB_147fe783f;
    local_40 = FUN_146459210;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Transform3fCameraVariable",&DAT_14cb298d0,
                  &DAT_147fe783e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb298d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595af54 FUN_14595af54 body=228 status=ok
// SIG undefined FUN_14595af54(void)

longlong FUN_14595af54(void)

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
  if (DAT_14cb44780 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1482163f7;
    local_40 = FUN_14647d688;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/CommonInput",L"CommonInputActionDomain",&DAT_14cb44780,&DAT_1482163f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44780;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b040 FUN_14595b040 body=228 status=ok
// SIG undefined FUN_14595b040(void)

longlong FUN_14595b040(void)

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
  if (DAT_14cb44ba0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_14821b995;
    local_40 = &LAB_14647f1a2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x430;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonActionWidget",&DAT_14cb44ba0,FUN_14647f180);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44ba0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b12c FUN_14595b12c body=228 status=ok
// SIG undefined FUN_14595b12c(void)

longlong FUN_14595b12c(void)

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
  if (DAT_14cb44d28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145990e58;
    local_38 = &LAB_14821f492;
    local_40 = FUN_14647f7ba;
    local_48 = L"CommonUI";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 0x10;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonBorder",&DAT_14cb44d28,FUN_14647f798);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44d28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b218 FUN_14595b218 body=228 status=ok
// SIG undefined FUN_14595b218(void)

longlong FUN_14595b218(void)

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
  if (DAT_14cb452c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145990f44;
    local_38 = &LAB_14822abaa;
    local_40 = &LAB_145c999d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonLazyImage",&DAT_14cb452c0,FUN_146480fb0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb452c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b302 FUN_14595b302 body=228 status=ok
// SIG undefined FUN_14595b302(void)

longlong FUN_14595b302(void)

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
  if (DAT_14cb46d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1483e200b;
    local_40 = FUN_14183cf1b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x640;
    FUN_14081cfa3(L"/Script/Water",L"LakeCollisionComponent",&DAT_14cb46d78,&DAT_1483e200a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b3ec FUN_14595b3ec body=228 status=ok
// SIG undefined FUN_14595b3ec(void)

longlong FUN_14595b3ec(void)

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
  if (DAT_14cb46e10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1483e3251;
    local_40 = FUN_14648649f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/Water",L"OceanCollisionComponent",&DAT_14cb46e10,&DAT_1483e3250);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46e10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b4d6 FUN_14595b4d6 body=228 status=ok
// SIG undefined FUN_14595b4d6(void)

longlong FUN_14595b4d6(void)

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
  if (DAT_14cb46e28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b5764;
    local_38 = &LAB_1483e3255;
    local_40 = FUN_145741d9e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/Water",L"OceanBoxCollisionComponent",&DAT_14cb46e28,&DAT_1483e3254);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46e28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b5c2 FUN_14595b5c2 body=228 status=ok
// SIG undefined FUN_14595b5c2(void)

longlong FUN_14595b5c2(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb46e40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145835838;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1483e38a7;
    local_40 = FUN_146486679;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x12000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyGenerator",&DAT_14cb46e40,&DAT_1483e38a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46e40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b6ac FUN_14595b6ac body=228 status=ok
// SIG undefined FUN_14595b6ac(void)

longlong FUN_14595b6ac(void)

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
  if (DAT_14cb4a648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14840d15b;
    local_40 = FUN_14648a3b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"ToolContextTransactionProvider",
                  &DAT_14cb4a648,&DAT_14840d15a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b796 FUN_14595b796 body=228 status=ok
// SIG undefined FUN_14595b796(void)

longlong FUN_14595b796(void)

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
  if (DAT_14cb4a690 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14840d16f;
    local_40 = FUN_14648a4c5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolCameraFocusAPI",
                  &DAT_14cb4a690,&DAT_14840d16e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b880 FUN_14595b880 body=228 status=ok
// SIG undefined FUN_14595b880(void)

longlong FUN_14595b880(void)

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
  if (DAT_14cb4a6d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14840d17b;
    local_40 = FUN_14648a5c6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolExclusiveToolAPI",
                  &DAT_14cb4a6d8,&DAT_14840d17a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a6d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595b96a FUN_14595b96a body=228 status=ok
// SIG undefined FUN_14595b96a(void)

longlong FUN_14595b96a(void)

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
  if (DAT_14cb4aab0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14648af08;
    local_38 = &LAB_14840f1d3;
    local_40 = FUN_14648b245;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x200;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"LocalSingleClickInputBehavior",
                  &DAT_14cb4aab0,&DAT_14840f1d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4aab0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595ba56 FUN_14595ba56 body=228 status=ok
// SIG undefined FUN_14595ba56(void)

longlong FUN_14595ba56(void)

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
  if (DAT_14cb4ade0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859b24;
    local_38 = &LAB_14842ab83;
    local_40 = FUN_14648c7ff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoElementLineBase",&DAT_14cb4ade0,
                  &DAT_14842ab82);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ade0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595bb40 FUN_14595bb40 body=228 status=ok
// SIG undefined FUN_14595bb40(void)

longlong FUN_14595bb40(void)

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
  if (DAT_14cb4bb78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14845a915;
    local_40 = FUN_1464905b2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/ModelingOperators",L"RecomputeUVsToolProperties",&DAT_14cb4bb78,
                  &DAT_14845a914);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4bb78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595bc2a FUN_14595bc2a body=228 status=ok
// SIG undefined FUN_14595bc2a(void)

longlong FUN_14595bc2a(void)

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
  if (DAT_14cb4bc38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14845a939;
    local_40 = FUN_1464907ad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/ModelingOperators",L"UVLayoutProperties",&DAT_14cb4bc38,&DAT_14845a938);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4bc38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595bd14 FUN_14595bd14 body=228 status=ok
// SIG undefined FUN_14595bd14(void)

longlong FUN_14595bd14(void)

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
  if (DAT_14cb4bea8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1484acf89;
    local_40 = FUN_14649103e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GeometryFramework",L"MeshReplacementCommandChangeTarget",&DAT_14cb4bea8,
                  &DAT_1484acf88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4bea8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595bdfe FUN_14595bdfe body=228 status=ok
// SIG undefined FUN_14595bdfe(void)

longlong FUN_14595bdfe(void)

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
  if (DAT_14cb4bec0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1484ad21d;
    local_40 = FUN_146491096;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GeometryFramework",L"MeshVertexCommandChangeTarget",&DAT_14cb4bec0,
                  &DAT_1484ad21c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4bec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595beea FUN_14595beea body=228 status=ok
// SIG undefined FUN_14595beea(void)

longlong FUN_14595beea(void)

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
  if (DAT_14cb4c500 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_1484c1bb9;
    local_40 = FUN_14649292a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"MeshTopologySelectionMechanicProperties",
                  &DAT_14cb4c500,FUN_146492908);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c500;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595bfd6 FUN_14595bfd6 body=228 status=ok
// SIG undefined FUN_14595bfd6(void)

longlong FUN_14595bfd6(void)

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
  if (DAT_14cb4c590 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a547e2;
    local_38 = &LAB_1484c1c21;
    local_40 = FUN_146492a22;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"GeometrySelectionEditCommand",&DAT_14cb4c590,
                  &DAT_1484c1c20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c590;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c0c2 FUN_14595c0c2 body=228 status=ok
// SIG undefined FUN_14595c0c2(void)

longlong FUN_14595c0c2(void)

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
  if (DAT_14cb4c660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14120acec;
    local_38 = &LAB_1484c546f;
    local_40 = FUN_146492cc1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"BaseCreateFromSelectedTool",&DAT_14cb4c660,
                  &DAT_1484c546e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c1ac FUN_14595c1ac body=228 status=ok
// SIG undefined FUN_14595c1ac(void)

longlong FUN_14595c1ac(void)

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
  if (DAT_14cb4cd50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_1484fda59;
    local_40 = &LAB_145eed9bb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PolyLassoMarqueeMechanic",&DAT_14cb4cd50,
                  &DAT_1484fda58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cd50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c296 FUN_14595c296 body=228 status=ok
// SIG undefined FUN_14595c296(void)

longlong FUN_14595c296(void)

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
  if (DAT_14cb4ce40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_148504901;
    local_40 = &LAB_145de9a89;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x410;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"SpatialCurveDistanceMechanic",&DAT_14cb4ce40,
                  &DAT_148504900);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ce40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c382 FUN_14595c382 body=228 status=ok
// SIG undefined FUN_14595c382(void)

longlong FUN_14595c382(void)

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
  if (DAT_14cb4d6d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14851d415;
    local_40 = FUN_1464950c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"OnAcceptHandleSourcesPropertiesBase",
                  &DAT_14cb4d6d8,&DAT_14851d414);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4d6d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c46e FUN_14595c46e body=228 status=ok
// SIG undefined FUN_14595c46e(void)

longlong FUN_14595c46e(void)

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
  if (DAT_14cb50278 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1485ebdc8;
    local_40 = &LAB_145c74d16;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxDynamicWind",L"GbxWindComponent",&DAT_14cb50278,FUN_1464a3eb6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb50278;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c558 FUN_14595c558 body=228 status=ok
// SIG undefined FUN_14595c558(void)

longlong FUN_14595c558(void)

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
  if (DAT_14cb57b20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148647091;
    local_40 = FUN_141848b27;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/GbxGame",L"FoleyImpactDataAsset",&DAT_14cb57b20,&DAT_148647090);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c642 FUN_14595c642 body=228 status=ok
// SIG undefined FUN_14595c642(void)

longlong FUN_14595c642(void)

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
  if (DAT_14cb59fd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462a8258;
    local_38 = &LAB_148662967;
    local_40 = FUN_1457f301c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAnimSetPicker",&DAT_14cb59fd8,&DAT_148662966);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb59fd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c72c FUN_14595c72c body=228 status=ok
// SIG undefined FUN_14595c72c(void)

longlong FUN_14595c72c(void)

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
  if (DAT_14cb5b6f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14867a81d;
    local_40 = &LAB_1411efeaf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacterLegData",&DAT_14cb5b6f8,&DAT_14867a81c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5b6f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c81c FUN_14595c81c body=228 status=ok
// SIG undefined FUN_14595c81c(void)

longlong FUN_14595c81c(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5f388 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1464e1642;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486b374b;
    local_40 = FUN_1464e5c9b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGlobalInputManager",&DAT_14cb5f388,&DAT_1486b374a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c908 FUN_14595c908 body=228 status=ok
// SIG undefined FUN_14595c908(void)

longlong FUN_14595c908(void)

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
  if (DAT_14cb613a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464f2778;
    local_38 = &LAB_1486d8e7e;
    local_40 = &LAB_1458908ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x5d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMovingPlatformControllerActor_DestinationReplication",
                  &DAT_14cb613a8,FUN_1464f28a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb613a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595c9f2 FUN_14595c9f2 body=228 status=ok
// SIG undefined FUN_14595c9f2(void)

longlong FUN_14595c9f2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb66e68 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_14872e14f;
    local_40 = FUN_146512872;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectPresentationAsset",&DAT_14cb66e68,
                  &DAT_14872e14e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66e68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595cadc FUN_14595cadc body=228 status=ok
// SIG undefined FUN_14595cadc(void)

longlong FUN_14595cadc(void)

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
  if (DAT_14cb684d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14599750a;
    local_38 = &LAB_1487449a1;
    local_40 = &LAB_1457e5357;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x230;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_Mood",&DAT_14cb684d8,&DAT_1487449a0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb684d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595cbc8 FUN_14595cbc8 body=228 status=ok
// SIG undefined FUN_14595cbc8(void)

longlong FUN_14595cbc8(void)

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
  if (DAT_14cb68ca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148747987;
    local_40 = &LAB_145af9fc3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GestaltPartData",&DAT_14cb68ca8,&DAT_148747986);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595ccb2 FUN_14595ccb2 body=228 status=ok
// SIG undefined FUN_14595ccb2(void)

longlong FUN_14595ccb2(void)

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
  if (DAT_14cb6b5f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487740d9;
    local_40 = FUN_14652c34f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"ManagedActorInterface",&DAT_14cb6b5f8,&DAT_1487740d8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b5f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595cd9c FUN_14595cd9c body=228 status=ok
// SIG undefined FUN_14595cd9c(void)

longlong FUN_14595cd9c(void)

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
  if (DAT_14cb6e268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14879447f;
    local_40 = FUN_14653a365;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"ParticlePropertyTrackingData",&DAT_14cb6e268,&DAT_14879447e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595ce86 FUN_14595ce86 body=228 status=ok
// SIG undefined FUN_14595ce86(void)

longlong FUN_14595ce86(void)

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
  if (DAT_14cb91950 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1489f30f1;
    local_40 = FUN_14656a7f1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2c0;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconComponent",&DAT_14cb91950,&DAT_1489f30f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91950;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595cf72 FUN_14595cf72 body=228 status=ok
// SIG undefined FUN_14595cf72(void)

longlong FUN_14595cf72(void)

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
  if (DAT_14cb91890 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d7ef0;
    local_38 = &LAB_1489f30d1;
    local_40 = FUN_14656a4a1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconAction_OpacityModifier",&DAT_14cb91890,
                  &DAT_1489f30d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91890;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d05e FUN_14595d05e body=228 status=ok
// SIG undefined FUN_14595d05e(void)

longlong FUN_14595d05e(void)

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
  if (DAT_14cb918f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d7ef0;
    local_38 = &LAB_1489f30e1;
    local_40 = FUN_14656a634;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconAction_ScaleModifier",&DAT_14cb918f0,
                  &DAT_1489f30e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb918f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d14a FUN_14595d14a body=228 status=ok
// SIG undefined FUN_14595d14a(void)

longlong FUN_14595d14a(void)

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
  if (DAT_14cb99920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f0f78;
    local_38 = &LAB_148ade47d;
    local_40 = &LAB_14658e3a0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xb40;
    FUN_14081cfa3(L"/Script/GbxAnimTexture",L"GbxAnimTextureComponent",&DAT_14cb99920,&DAT_148ade47c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d236 FUN_14595d236 body=228 status=ok
// SIG undefined FUN_14595d236(void)

longlong FUN_14595d236(void)

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
  if (DAT_14cb99998 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148ade485;
    local_40 = FUN_14658e526;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxAnimTexture",L"GbxAnimTextureData",&DAT_14cb99998,&DAT_148ade484);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99998;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d320 FUN_14595d320 body=228 status=ok
// SIG undefined FUN_14595d320(void)

longlong FUN_14595d320(void)

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
  if (DAT_14cb9a1a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148af40d7;
    local_40 = &LAB_145f8a27c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x170;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingVisualData",&DAT_14cb9a1a8,&DAT_148af40d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a1a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d40c FUN_14595d40c body=228 status=ok
// SIG undefined FUN_14595d40c(void)

longlong FUN_14595d40c(void)

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
  if (DAT_14cb99ea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145998968;
    local_38 = &LAB_148af382d;
    local_40 = FUN_146591247;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingListEntry_Setting",&DAT_14cb99ea0,
                  &DAT_148af382c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d4f6 FUN_14595d4f6 body=228 status=ok
// SIG undefined FUN_14595d4f6(void)

longlong FUN_14595d4f6(void)

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
  if (DAT_14cb99f88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587df46;
    local_38 = &LAB_148af3b51;
    local_40 = &LAB_145cbbc2a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingPanel",&DAT_14cb99f88,&DAT_148af3b50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99f88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d5e2 FUN_14595d5e2 body=228 status=ok
// SIG undefined FUN_14595d5e2(void)

longlong FUN_14595d5e2(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ae98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145922bc0;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b0cd3b;
    local_40 = FUN_146596498;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelViewViewModel",L"MVVMViewClassExtension",&DAT_14cb9ae98,
                  &DAT_148b0cd3a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ae98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d6cc FUN_14595d6cc body=228 status=ok
// SIG undefined FUN_14595d6cc(void)

longlong FUN_14595d6cc(void)

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
  if (DAT_14cb9c298 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459ed77a;
    local_38 = &LAB_148b4e4b7;
    local_40 = FUN_145e09b21;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x290;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGBoundActionBar",&DAT_14cb9c298,&DAT_148b4e4b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c298;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d7b8 FUN_14595d7b8 body=228 status=ok
// SIG undefined FUN_14595d7b8(void)

longlong FUN_14595d7b8(void)

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
  if (DAT_14cb9c308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146480b54;
    local_38 = &LAB_148b4e668;
    local_40 = FUN_146599956;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0x13d0;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGButtonBase",&DAT_14cb9c308,FUN_146599934);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d8a2 FUN_14595d8a2 body=228 status=ok
// SIG undefined FUN_14595d8a2(void)

longlong FUN_14595d8a2(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c760 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1458d5bec;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b4fd17;
    local_40 = FUN_14659aba0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGGameUIPolicy",&DAT_14cb9c760,&DAT_148b4fd16);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c760;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595d98c FUN_14595d98c body=228 status=ok
// SIG undefined FUN_14595d98c(void)

longlong FUN_14595d98c(void)

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
  if (DAT_14cb9cc98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146599668;
    local_38 = &LAB_148b5179f;
    local_40 = FUN_145a2d262;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x540;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGPrototypeContainerWidget",&DAT_14cb9cc98,
                  &DAT_148b5179e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9cc98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


