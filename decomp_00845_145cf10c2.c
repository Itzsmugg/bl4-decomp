// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145cf10c2 FUN_145cf10c2 body=40 status=ok
// SIG undefined FUN_145cf10c2(void)

undefined8 FUN_145cf10c2(undefined8 param_1,int param_2)

{
  FUN_145cf10ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf10ea FUN_145cf10ea body=95 status=ok
// SIG undefined FUN_145cf10ea(void)

void FUN_145cf10ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bed6370;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cf114a FUN_145cf114a body=114 status=ok
// SIG undefined FUN_145cf114a(void)

void FUN_145cf114a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(*plVar1 + 8))();
  lVar3 = FUN_145cf11bc();
  if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      plVar4 = plVar1;
    }
  }
  *(longlong **)(param_1 + 0x21f8) = plVar4;
  FUN_140655f5e(param_1,param_2);
  return;
}



// FUNCTION 145cf11bc FUN_145cf11bc body=55 status=ok
// SIG undefined FUN_145cf11bc(void)

void FUN_145cf11bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac860 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac860 = FUN_140002ddd(FUN_1465e2d38,uVar1,L"OakLostLootMachineDef");
  }
  return;
}



// FUNCTION 145cf11f4 FUN_145cf11f4 body=428 status=ok
// SIG undefined FUN_145cf11f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cf11f4(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14caa7118 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14a3d4160;
  local_48[3] = &DAT_14caa7118;
  local_48[4] = &LAB_14326322a;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14caa7120,L"Landscape.Patches",L"Show/hide Landscape patches",&local_48);
  FUN_1449db362(&local_48);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14a3d4160;
  local_48[3] = &DAT_14caa7118;
  local_48[4] = &LAB_14326322e;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14caa7130,L"Landscape.Static",L"Enable/disable Landscape static drawlists",
                &local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf13a2 FUN_145cf13a2 body=446 status=ok
// SIG undefined FUN_145cf13a2(void)

void FUN_145cf13a2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_50 = 0;
  local_48 = 0xc;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  local_58 = 0;
  FUN_145cf1562(local_28,local_30,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf1562 FUN_145cf1562 body=156 status=ok
// SIG undefined FUN_145cf1562(void)

void FUN_145cf1562(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  lVar1 = FUN_14152bd28();
  if (lVar1 != 0) {
    if (param_3 == '\0') {
      if (0 < *(int *)(lVar1 + 0x230)) {
        local_28 = &local_30;
        FUN_140b042ce(lVar1 + 0x1a8);
      }
      FUN_14483674a(lVar1);
    }
    else {
      lVar2 = FUN_14058d91e(param_4);
      if (lVar2 != 0) {
        FUN_14084412e(lVar1,&local_30,lVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf1600 FUN_145cf1600 body=226 status=ok
// SIG undefined FUN_145cf1600(void)

void FUN_145cf1600(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_20;
  undefined6 uStack_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_20,"MovieScene",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,CONCAT62(uStack_1e,local_20));
  local_20 = 0x8fff;
  FUN_145cf16e4(&local_28,0);
  (**(code **)(*plVar2 + 0x40))(plVar2,local_28,&local_20);
  local_20 = 0xfff;
  FUN_145cf16e4(&local_30,1);
  (**(code **)(*plVar2 + 0x40))(plVar2,local_30,&local_20);
  local_20 = 8;
  FUN_145cf16e4(&local_38,2);
  (**(code **)(*plVar2 + 0x40))(plVar2,local_38,&local_20);
  FUN_14038fb82();
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf16e4 FUN_145cf16e4 body=179 status=ok
// SIG undefined FUN_145cf16e4(void)

undefined8 * FUN_145cf16e4(undefined8 *param_1,int param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4b88) {
    FUN_144b3d300(&DAT_14cab4b88);
    if (DAT_14cab4b88 == -1) {
      FUN_1446ddc76(&DAT_14cab4b70,"PreEvaluation",1);
      FUN_1446ddc76(&DAT_14cab4b78,"SpawnObjects",1);
      FUN_1446ddc76(&DAT_14cab4b80,"PostEvaluation",1);
      _Init_thread_footer(&DAT_14cab4b88);
    }
  }
  *param_1 = *(undefined8 *)(&DAT_14cab4b70 + (longlong)param_2 * 8);
  return param_1;
}



// FUNCTION 145cf1798 FUN_145cf1798 body=21 status=ok
// SIG undefined FUN_145cf1798(void)

undefined8 FUN_145cf1798(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145cf17ae FUN_145cf17ae body=611 status=ok
// SIG undefined FUN_145cf17ae(void)

void FUN_145cf17ae(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 3) & 0x80) != 0) {
    FUN_145c6afe4(&local_48,*param_2);
    uVar5 = FUN_1404eee4c(&local_48);
    plVar8 = (longlong *)FUN_142b2bb50(uVar5);
    if (*plVar8 != 0) {
      iVar3 = *(int *)(param_1 + 0x60);
      if ((longlong)iVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x58);
        lVar9 = 0;
        do {
          puVar6 = *(undefined4 **)(lVar7 + lVar9);
          cVar4 = FUN_1470ac30a(puVar6,param_2);
          if (cVar4 != '\0') {
            if (puVar6 != (undefined4 *)0x0) goto LAB_145cf193a;
            break;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar3 * 8 != lVar9);
      }
      puVar6 = (undefined4 *)FUN_14494321d(0x28);
      *puVar6 = local_48;
      puVar6[1] = uStack_44;
      puVar6[2] = uStack_40;
      puVar6[3] = uStack_3c;
      FUN_1457895c4(puVar6 + 4);
      *(undefined ***)(puVar6 + 4) = &PTR_FUN_14b3f7678;
      lVar7 = thunk_FUN_1404eee4c(puVar6);
      FUN_1497e783c(lVar7 + 8,&local_58,puVar6);
      iVar3 = *(int *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x60) = iVar3 + 1U;
      if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
        FUN_1497e7ad2((longlong *)(param_1 + 0x58),iVar3);
      }
      *(undefined4 **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8) = puVar6;
LAB_145cf193a:
      FUN_145cf1a12(param_2,&local_58);
      local_60 = param_2[1];
      FUN_145cf1a5c(puVar6 + 4,&local_60,&local_58);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      goto LAB_145cf1876;
    }
  }
  cVar4 = FUN_144729dda(param_2 + 2);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    plVar8 = (longlong *)FUN_14479d2ce(param_2 + 2);
    uVar5 = (**(code **)(*plVar8 + 0x180))(plVar8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  local_58 = 0;
  FUN_14485c47a(&local_58,uVar5);
  uVar5 = FUN_145cf1ba0(param_1 + 8,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58,&local_58);
  FUN_145cf1a12(param_2,&local_48);
  local_60 = param_2[1];
  FUN_145cf1a5c(uVar5,&local_60,&local_48);
  plVar8 = (longlong *)CONCAT44(uStack_3c,uStack_40);
  if (plVar8 != (longlong *)0x0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
LAB_145cf1876:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf1a12 FUN_145cf1a12 body=73 status=ok
// SIG undefined FUN_145cf1a12(void)

longlong * FUN_145cf1a12(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_145cf1ad4(param_1,param_2,param_1);
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 145cf1a5c FUN_145cf1a5c body=120 status=ok
// SIG undefined FUN_145cf1a5c(void)

void FUN_145cf1a5c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar1 + 1U) {
    FUN_1457d8b76((longlong *)(lVar2 + 8),iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)(lVar2 + 8));
  uVar3 = *param_2;
  *puVar4 = &PTR_FUN_14a1844a8;
  puVar4[1] = uVar3;
  puVar4[2] = *param_3;
  lVar2 = param_3[1];
  puVar4[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145cf1ad4 FUN_145cf1ad4 body=203 status=ok
// SIG undefined FUN_145cf1ad4(void)

undefined8 * FUN_145cf1ad4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14145a107(&local_40,*(longlong *)(param_1 + 8),0);
    *param_2 = local_40;
    if (local_38 != 0) {
      param_2[1] = local_38;
    }
    if (param_3 != 0) {
      lVar1 = *(longlong *)(param_1 + 8);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if ((*(longlong *)(param_3 + 8) == lVar1) && (*(longlong *)(param_3 + 0x20) != 0)) {
        FUN_1449b16b6(*(undefined8 *)(param_1 + 8),local_40,*(longlong *)(param_3 + 0x20),1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145cf1ba0 FUN_145cf1ba0 body=135 status=ok
// SIG undefined FUN_145cf1ba0(void)

longlong FUN_145cf1ba0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_145cf1c28();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_145cf1c01;
  }
  local_30 = param_3;
  FUN_145cf1ce4(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145cf1c01:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf1c28 FUN_145cf1c28 body=187 status=ok
// SIG undefined FUN_145cf1c28(void)

int FUN_145cf1c28(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x28);
        cVar1 = FUN_141223124(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145cf1cab;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145cf1cab:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 145cf1ce4 FUN_145cf1ce4 body=269 status=ok
// SIG undefined FUN_145cf1ce4(void)

undefined4 * FUN_145cf1ce4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cf1f8a(param_1,local_48);
  FUN_145cf1df2(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_145cf1eba(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145cf2072(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf1df2 FUN_145cf1df2 body=198 status=ok
// SIG undefined FUN_145cf1df2(void)

undefined8 * FUN_145cf1df2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined **)0x0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  FUN_1457895c4(&local_58);
  local_58 = &PTR_FUN_14b3f7678;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1457895c4(param_2 + 1);
  local_38 = param_2[2];
  plVar3 = (longlong *)param_2[3];
  param_2[2] = uStack_50;
  param_2[3] = local_48;
  param_2[1] = &PTR_FUN_14b3f7678;
  local_58 = &PTR_FUN_14a184350;
  uStack_50 = local_38;
  local_48 = plVar3;
  plStack_30 = plVar3;
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf1eba FUN_145cf1eba body=207 status=ok
// SIG undefined FUN_145cf1eba(void)

undefined8 FUN_145cf1eba(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    iVar12 = FUN_140e5f5b6();
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      *(undefined ***)(puVar3 + 2) = &PTR_FUN_14a184350;
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_1497e7b58(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_145cf1ee2;
    }
  }
  uVar13 = 0;
LAB_145cf1ee2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf1f8a FUN_145cf1f8a body=231 status=ok
// SIG undefined FUN_145cf1f8a(void)

int * FUN_145cf1f8a(longlong *param_1,int *param_2)

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



// FUNCTION 145cf2072 FUN_145cf2072 body=445 status=ok
// SIG undefined FUN_145cf2072(void)

void FUN_145cf2072(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 145cf2230 FUN_145cf2230 body=179 status=ok
// SIG undefined FUN_145cf2230(void)

bool FUN_145cf2230(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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



// FUNCTION 145cf22e4 FUN_145cf22e4 body=91 status=ok
// SIG undefined FUN_145cf22e4(void)

longlong FUN_145cf22e4(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145cf2340(param_1);
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



// FUNCTION 145cf2340 FUN_145cf2340 body=450 status=ok
// SIG undefined FUN_145cf2340(void)

longlong * FUN_145cf2340(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x68;
        *(undefined4 *)(lVar2 + 0x58 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x50 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_14472eaf0(lVar2 + lVar8 + 0x10);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 || (local_78 != plVar1 || local_70._4_4_ != iVar7));
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
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf2536 FUN_145cf2536 body=50 status=ok
// SIG undefined FUN_145cf2536(void)

longlong FUN_145cf2536(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145cf2568(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145cf2568 FUN_145cf2568 body=171 status=ok
// SIG undefined FUN_145cf2568(void)

void FUN_145cf2568(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14bea63d0;
  param_1[1] = &PTR_LAB_14bea64a0;
  param_1[2] = &PTR_FUN_14bea64d0;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_1446ddc76(&local_30,"DXGISwapchainProvider",1);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_30,param_1 + 2);
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  param_1[2] = &PTR_FUN_149e002e8;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf2614 FUN_145cf2614 body=26 status=ok
// SIG undefined FUN_145cf2614(void)

void FUN_145cf2614(undefined8 param_1)

{
  FUN_140b9b50c();
  FUN_145cf262e(param_1);
  return;
}



// FUNCTION 145cf262e FUN_145cf262e body=327 status=ok
// SIG undefined FUN_145cf262e(void)

void FUN_145cf262e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_145cf267c;
  }
  lVar4 = 0;
LAB_145cf267c:
  cVar3 = FUN_14011bf50(lVar4);
  if ((cVar3 != '\0') && (lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0)) {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_1403adc5e(&local_38,lVar4);
      lVar4 = *(longlong *)(local_38 + 0x60);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
      *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
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
      lVar5 = FUN_1401e6dab(lVar5);
      if (lVar5 != 0) {
        lVar6 = FUN_144a7b4ca();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          *(undefined4 *)(lVar4 + 0xa0) = *(undefined4 *)(lVar5 + 0x394);
        }
      }
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



// FUNCTION 145cf278a FUN_145cf278a body=40 status=ok
// SIG undefined FUN_145cf278a(void)

undefined8 FUN_145cf278a(undefined8 param_1,int param_2)

{
  FUN_14152bf62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf27ba FUN_145cf27ba body=38 status=ok
// SIG undefined FUN_145cf27ba(void)

undefined8 FUN_145cf27ba(undefined8 param_1,int param_2)

{
  FUN_145cf27e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf27e0 FUN_145cf27e0 body=101 status=ok
// SIG undefined FUN_145cf27e0(void)

void FUN_145cf27e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adbde90;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf2846(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf287c(param_1 + 4);
  return;
}



// FUNCTION 145cf2846 FUN_145cf2846 body=53 status=ok
// SIG undefined FUN_145cf2846(void)

void FUN_145cf2846(longlong *param_1)

{
  FUN_145cf290c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf287c FUN_145cf287c body=53 status=ok
// SIG undefined FUN_145cf287c(void)

void FUN_145cf287c(longlong *param_1)

{
  FUN_145cf28b2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf28b2 FUN_145cf28b2 body=90 status=ok
// SIG undefined FUN_145cf28b2(void)

void FUN_145cf28b2(longlong param_1)

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



// FUNCTION 145cf290c FUN_145cf290c body=343 status=ok
// SIG undefined FUN_145cf290c(void)

void FUN_145cf290c(longlong *param_1)

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
      FUN_148132c12(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf2a64 FUN_145cf2a64 body=38 status=ok
// SIG undefined FUN_145cf2a64(void)

undefined8 FUN_145cf2a64(undefined8 param_1,int param_2)

{
  FUN_145cf2a8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf2a8a FUN_145cf2a8a body=101 status=ok
// SIG undefined FUN_145cf2a8a(void)

void FUN_145cf2a8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adbeb70;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf2af0(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf2b26(param_1 + 4);
  return;
}



// FUNCTION 145cf2af0 FUN_145cf2af0 body=53 status=ok
// SIG undefined FUN_145cf2af0(void)

void FUN_145cf2af0(longlong *param_1)

{
  FUN_145cf2bb6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf2b26 FUN_145cf2b26 body=53 status=ok
// SIG undefined FUN_145cf2b26(void)

void FUN_145cf2b26(longlong *param_1)

{
  FUN_145cf2b5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf2b5c FUN_145cf2b5c body=90 status=ok
// SIG undefined FUN_145cf2b5c(void)

void FUN_145cf2b5c(longlong param_1)

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



// FUNCTION 145cf2bb6 FUN_145cf2bb6 body=343 status=ok
// SIG undefined FUN_145cf2bb6(void)

void FUN_145cf2bb6(longlong *param_1)

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
      FUN_148139d72(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf2d0e FUN_145cf2d0e body=38 status=ok
// SIG undefined FUN_145cf2d0e(void)

undefined8 FUN_145cf2d0e(undefined8 param_1,int param_2)

{
  FUN_145cf2d34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf2d34 FUN_145cf2d34 body=101 status=ok
// SIG undefined FUN_145cf2d34(void)

void FUN_145cf2d34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adbf1d0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf2d9a(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf2dd0(param_1 + 4);
  return;
}



// FUNCTION 145cf2d9a FUN_145cf2d9a body=53 status=ok
// SIG undefined FUN_145cf2d9a(void)

void FUN_145cf2d9a(longlong *param_1)

{
  FUN_145cf2e60();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf2dd0 FUN_145cf2dd0 body=53 status=ok
// SIG undefined FUN_145cf2dd0(void)

void FUN_145cf2dd0(longlong *param_1)

{
  FUN_145cf2e06();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf2e06 FUN_145cf2e06 body=90 status=ok
// SIG undefined FUN_145cf2e06(void)

void FUN_145cf2e06(longlong param_1)

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



// FUNCTION 145cf2e60 FUN_145cf2e60 body=343 status=ok
// SIG undefined FUN_145cf2e60(void)

void FUN_145cf2e60(longlong *param_1)

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
      FUN_14813e410(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf2fb8 FUN_145cf2fb8 body=38 status=ok
// SIG undefined FUN_145cf2fb8(void)

undefined8 FUN_145cf2fb8(undefined8 param_1,int param_2)

{
  FUN_145cf2fde();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf2fde FUN_145cf2fde body=101 status=ok
// SIG undefined FUN_145cf2fde(void)

void FUN_145cf2fde(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adbfff0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf3044(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf307a(param_1 + 4);
  return;
}



// FUNCTION 145cf3044 FUN_145cf3044 body=53 status=ok
// SIG undefined FUN_145cf3044(void)

void FUN_145cf3044(longlong *param_1)

{
  FUN_145cf310a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf307a FUN_145cf307a body=53 status=ok
// SIG undefined FUN_145cf307a(void)

void FUN_145cf307a(longlong *param_1)

{
  FUN_145cf30b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf30b0 FUN_145cf30b0 body=90 status=ok
// SIG undefined FUN_145cf30b0(void)

void FUN_145cf30b0(longlong param_1)

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



// FUNCTION 145cf310a FUN_145cf310a body=343 status=ok
// SIG undefined FUN_145cf310a(void)

void FUN_145cf310a(longlong *param_1)

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
      FUN_148147524(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf3262 FUN_145cf3262 body=38 status=ok
// SIG undefined FUN_145cf3262(void)

undefined8 FUN_145cf3262(undefined8 param_1,int param_2)

{
  FUN_145cf3288();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf3288 FUN_145cf3288 body=101 status=ok
// SIG undefined FUN_145cf3288(void)

void FUN_145cf3288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc0650;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf32ee(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf3324(param_1 + 4);
  return;
}



// FUNCTION 145cf32ee FUN_145cf32ee body=53 status=ok
// SIG undefined FUN_145cf32ee(void)

void FUN_145cf32ee(longlong *param_1)

{
  FUN_145cf33b4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf3324 FUN_145cf3324 body=53 status=ok
// SIG undefined FUN_145cf3324(void)

void FUN_145cf3324(longlong *param_1)

{
  FUN_145cf335a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf335a FUN_145cf335a body=90 status=ok
// SIG undefined FUN_145cf335a(void)

void FUN_145cf335a(longlong param_1)

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



// FUNCTION 145cf33b4 FUN_145cf33b4 body=343 status=ok
// SIG undefined FUN_145cf33b4(void)

void FUN_145cf33b4(longlong *param_1)

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
      FUN_14814b654(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf350c FUN_145cf350c body=38 status=ok
// SIG undefined FUN_145cf350c(void)

undefined8 FUN_145cf350c(undefined8 param_1,int param_2)

{
  FUN_145cf3532();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf3532 FUN_145cf3532 body=101 status=ok
// SIG undefined FUN_145cf3532(void)

void FUN_145cf3532(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc0cb0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf3598(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf35ce(param_1 + 4);
  return;
}



// FUNCTION 145cf3598 FUN_145cf3598 body=53 status=ok
// SIG undefined FUN_145cf3598(void)

void FUN_145cf3598(longlong *param_1)

{
  FUN_145cf365e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf35ce FUN_145cf35ce body=53 status=ok
// SIG undefined FUN_145cf35ce(void)

void FUN_145cf35ce(longlong *param_1)

{
  FUN_145cf3604();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf3604 FUN_145cf3604 body=90 status=ok
// SIG undefined FUN_145cf3604(void)

void FUN_145cf3604(longlong param_1)

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



// FUNCTION 145cf365e FUN_145cf365e body=343 status=ok
// SIG undefined FUN_145cf365e(void)

void FUN_145cf365e(longlong *param_1)

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
      FUN_14814f816(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf37b6 FUN_145cf37b6 body=43 status=ok
// SIG undefined FUN_145cf37b6(void)

undefined8 FUN_145cf37b6(undefined8 param_1,int param_2)

{
  FUN_145cf37e2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 145cf37e2 FUN_145cf37e2 body=98 status=ok
// SIG undefined FUN_145cf37e2(void)

void FUN_145cf37e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be8b960;
  param_1[0xf] = &PTR_FUN_14be8bbe0;
  FUN_145cf3844(param_1 + 0xf);
  param_1[0xb] = &PTR_FUN_14be8b9b0;
  FUN_145cf3844(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf38ae(param_1 + 1);
  return;
}



// FUNCTION 145cf3844 FUN_145cf3844 body=105 status=ok
// SIG undefined FUN_145cf3844(void)

void FUN_145cf3844(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  lVar2 = param_1 + 8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  FUN_145a31ff8(&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145cf38a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,local_28,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,local_28);
}



// FUNCTION 145cf38ae FUN_145cf38ae body=53 status=ok
// SIG undefined FUN_145cf38ae(void)

void FUN_145cf38ae(longlong *param_1)

{
  FUN_145cf38e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf38e4 FUN_145cf38e4 body=378 status=ok
// SIG undefined FUN_145cf38e4(void)

void FUN_145cf38e4(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf3a60 FUN_145cf3a60 body=292 status=ok
// SIG undefined FUN_145cf3a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cf3a60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b6b98) {
    FUN_144b3d300(&DAT_14c9b6b98);
    if (DAT_14c9b6b98 == -1) {
      FUN_145cf3cce();
      FUN_145cf3b84();
      FUN_140db5666(&DAT_14c9b6af0,0,&DAT_14c9b6a88,L"FClusteredShadingPS",
                    L"/Engine/Private/ClusteredDeferredShadingPixelShader.usf",
                    L"ClusteredShadingPixelShader",3,0x80,FUN_147134c66,FUN_147134c06,FUN_142b851e4,
                    &LAB_147134c02,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9b8360);
      _DAT_14c9b6af0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b85309);
      _Init_thread_footer(&DAT_14c9b6b98);
    }
  }
  return &DAT_14c9b6af0;
}



// FUNCTION 145cf3b84 FUN_145cf3b84 body=205 status=ok
// SIG undefined FUN_145cf3b84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cf3b84(void)

{
  if ((DAT_14c9b6aef & 2) == 0) {
    DAT_14c9b6aef = DAT_14c9b6aef | 2;
    _DAT_14c9b6a90 = L"FClusteredShadingPS";
    _DAT_14c9b6aa8 = FUN_146826540;
    _DAT_14c9b6ab0 = FUN_146825d77;
    _DAT_14c9b6ab8 = FUN_146825fd6;
    _DAT_14c9b6ac0 = FUN_1407e02ea;
    _DAT_14c9b6ac8 = FUN_146826273;
    _DAT_14c9b6aa0 = FUN_147134bd4;
    _DAT_14c9b6ae0 = 0xffffffff000000e0;
    _DAT_14c9b6ae8 = 8;
    DAT_14c9b6aec = 0;
    _DAT_14c9b6ad0 = &LAB_147134bfe;
    FUN_145cf3c52();
    FUN_1407e00cc(&DAT_14c9b6a88);
    return;
  }
  return;
}



// FUNCTION 145cf3c52 FUN_145cf3c52 body=123 status=ok
// SIG undefined FUN_145cf3c52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cf3c52(void)

{
  _DAT_14c9c0050 = L"BASE";
  DAT_14c9c007a = 4;
  _DAT_14c9c0058 = FUN_140b35ae4();
  _DAT_14c9c0060 = DAT_14c9b6a98;
  _DAT_14c9c0068 = &LAB_14682652b;
  DAT_14c9b6a98 = &DAT_14c9c0050;
  DAT_14c9b6aed = DAT_14c9b6aed + '\x01';
  _DAT_14c9c0070 = 0x100000000;
  if (*(char *)(_DAT_14c9c0058 + 100) != '\0') {
    DAT_14c9b6aee = DAT_14c9b6aee + '\x01';
  }
  return;
}



// FUNCTION 145cf3cce FUN_145cf3cce body=261 status=ok
// SIG undefined FUN_145cf3cce(void)

void FUN_145cf3cce(void)

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
              0x110) < DAT_14c9b83e0) {
    FUN_144b3d300(&DAT_14c9b83e0);
    if (DAT_14c9b83e0 == -1) {
      FUN_145cf3dd4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x250;
      local_58 = 0x6a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8360,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8fb07);
      _Init_thread_footer(&DAT_14c9b83e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf3dd4 FUN_145cf3dd4 body=226 status=ok
// SIG undefined FUN_145cf3dd4(void)

longlong * FUN_145cf3dd4(longlong *param_1)

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
  pcVar13 = FUN_1462b8348;
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



// FUNCTION 145cf3eb8 FUN_145cf3eb8 body=144 status=ok
// SIG undefined FUN_145cf3eb8(void)

code * FUN_145cf3eb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a12b9e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Forward";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FForwardLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14713a22a;
}



// FUNCTION 145cf3f48 FUN_145cf3f48 body=144 status=ok
// SIG undefined FUN_145cf3f48(void)

code * FUN_145cf3f48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1412fe86a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"VirtualShadowMapSamplingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVirtualShadowMapSamplingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b8458;
}



// FUNCTION 145cf3fd8 FUN_145cf3fd8 body=144 status=ok
// SIG undefined FUN_145cf3fd8(void)

code * FUN_145cf3fd8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf4068();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SubstrateTile";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"Substrate::FSubstrateTilePassVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145cf3f48;
}



// FUNCTION 145cf4068 FUN_145cf4068 body=265 status=ok
// SIG undefined FUN_145cf4068(void)

undefined * FUN_145cf4068(void)

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
              0x110) < DAT_14c9c1108) {
    FUN_144b3d300(&DAT_14c9c1108);
    if (DAT_14c9c1108 == -1) {
      FUN_145cf4172(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0xeb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c1088,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8fb13);
      _Init_thread_footer(&DAT_14c9c1108);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c1088;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf4172 FUN_145cf4172 body=226 status=ok
// SIG undefined FUN_145cf4172(void)

longlong * FUN_145cf4172(longlong *param_1)

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
  pcVar13 = FUN_1462b83d0;
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



// FUNCTION 145cf4256 FUN_145cf4256 body=136 status=ok
// SIG undefined FUN_145cf4256(void)

code * FUN_145cf4256(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewScreenToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cf42de;
}



// FUNCTION 145cf42de FUN_145cf42de body=138 status=ok
// SIG undefined FUN_145cf42de(void)

code * FUN_145cf42de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputBufferSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713a08e;
}



// FUNCTION 145cf4368 FUN_145cf4368 body=138 status=ok
// SIG undefined FUN_145cf4368(void)

code * FUN_145cf4368(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileEncoding";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7c000000f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147139f7a;
}



// FUNCTION 145cf43fa FUN_145cf43fa body=128 status=ok
// SIG undefined FUN_145cf43fa(void)

undefined8 * FUN_145cf43fa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_14a596bf0;
  param_1[5] = &PTR_LAB_14a596eb0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return param_1;
}



// FUNCTION 145cf447a FUN_145cf447a body=40 status=ok
// SIG undefined FUN_145cf447a(void)

undefined8 FUN_145cf447a(undefined8 param_1,int param_2)

{
  FUN_145cf44a2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf44a2 FUN_145cf44a2 body=96 status=ok
// SIG undefined FUN_145cf44a2(void)

void FUN_145cf44a2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5a5fc0;
  param_1[5] = &PTR_FUN_14a5a6260;
  plVar3 = (longlong *)param_1[0x39];
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
  FUN_144760d56(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cf450e FUN_145cf450e body=125 status=ok
// SIG undefined FUN_145cf450e(void)

undefined8 * FUN_145cf450e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6c5880;
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
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145cf4596 FUN_145cf4596 body=125 status=ok
// SIG undefined FUN_145cf4596(void)

undefined8 * FUN_145cf4596(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6c9d10;
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
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x82;
  return param_1;
}



// FUNCTION 145cf461e FUN_145cf461e body=125 status=ok
// SIG undefined FUN_145cf461e(void)

undefined8 * FUN_145cf461e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6df690;
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
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145cf46a6 FUN_145cf46a6 body=125 status=ok
// SIG undefined FUN_145cf46a6(void)

undefined8 * FUN_145cf46a6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6dfba0;
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
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145cf472e FUN_145cf472e body=125 status=ok
// SIG undefined FUN_145cf472e(void)

undefined8 * FUN_145cf472e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e93d0;
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
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x13 | 0x84;
  return param_1;
}



// FUNCTION 145cf47b6 FUN_145cf47b6 body=125 status=ok
// SIG undefined FUN_145cf47b6(void)

undefined8 * FUN_145cf47b6(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0xfb;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14a8c0030;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_14020fad6(param_1 + 0x13,L"Shared/GraphNodes/Blueprint");
  FUN_14020fad6(param_1 + 0x15,L"UEdGraphNode_Documentation");
  return param_1;
}



// FUNCTION 145cf4833 FUN_145cf4833 body=72 status=ok
// SIG undefined FUN_145cf4833(void)

void FUN_145cf4833(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_145cf487c(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a8dc7b0;
  puVar1[5] = 0x200000001;
  puVar1[6] = 0x400000003f800000;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 145cf487c FUN_145cf487c body=64 status=ok
// SIG undefined FUN_145cf487c(void)

undefined8 * FUN_145cf487c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149f84d30;
  param_1[5] = 0x200000000;
  param_1[6] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 145cf48c8 FUN_145cf48c8 body=125 status=ok
// SIG undefined FUN_145cf48c8(void)

undefined8 * FUN_145cf48c8(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140eacc52();
  *param_1 = &PTR_FUN_14a9f9140;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 1;
  lVar1 = FUN_1411311bc();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x7c] = lVar1;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3ec) = *(byte *)((longlong)param_1 + 0x3ec) | 1;
  *(undefined4 *)(param_1 + 0x7d) = 0x3f800000;
  return param_1;
}



// FUNCTION 145cf4946 FUN_145cf4946 body=71 status=ok
// SIG undefined FUN_145cf4946(void)

void FUN_145cf4946(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_145cf498e(param_1 + 0x60);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf498e FUN_145cf498e body=200 status=ok
// SIG undefined FUN_145cf498e(void)

void FUN_145cf498e(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 145cf4a62 FUN_145cf4a62 body=125 status=ok
// SIG undefined FUN_145cf4a62(void)

undefined8 * FUN_145cf4a62(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff5f | 0x20;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *param_1 = &PTR_FUN_14abd79e0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}



// FUNCTION 145cf4aea FUN_145cf4aea body=125 status=ok
// SIG undefined FUN_145cf4aea(void)

undefined8 * FUN_145cf4aea(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff5f | 0x20;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *param_1 = &PTR_FUN_14abd7ec0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 145cf4b68 FUN_145cf4b68 body=129 status=ok
// SIG undefined FUN_145cf4b68(void)

undefined8 * FUN_145cf4b68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aefc410;
  param_1[5] = &PTR_LAB_14aefce90;
  param_1[6] = &PTR_LAB_14aefced0;
  param_1[0x55] = &PTR_LAB_14aefcf20;
  param_1[0x56] = &PTR_LAB_14aefcfa0;
  param_1[0x57] = &PTR_LAB_14aefcfb0;
  FUN_145cf4bea(param_1 + 0xd3);
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf4bea FUN_145cf4bea body=53 status=ok
// SIG undefined FUN_145cf4bea(void)

void FUN_145cf4bea(longlong *param_1)

{
  FUN_145cf4c20();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf4c20 FUN_145cf4c20 body=90 status=ok
// SIG undefined FUN_145cf4c20(void)

void FUN_145cf4c20(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 145cf4c7a FUN_145cf4c7a body=129 status=ok
// SIG undefined FUN_145cf4c7a(void)

undefined8 * FUN_145cf4c7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af01b20;
  param_1[5] = &PTR_LAB_14af025a0;
  param_1[6] = &PTR_LAB_14af025e0;
  param_1[0x55] = &PTR_LAB_14af02630;
  param_1[0x56] = &PTR_LAB_14af026b0;
  param_1[0x57] = &PTR_LAB_14af026c0;
  FUN_145cf4cfc(param_1 + 0xd3);
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf4cfc FUN_145cf4cfc body=53 status=ok
// SIG undefined FUN_145cf4cfc(void)

void FUN_145cf4cfc(longlong *param_1)

{
  FUN_145cf4d32();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf4d32 FUN_145cf4d32 body=90 status=ok
// SIG undefined FUN_145cf4d32(void)

void FUN_145cf4d32(longlong param_1)

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



// FUNCTION 145cf4d8c FUN_145cf4d8c body=48 status=ok
// SIG undefined FUN_145cf4d8c(void)

undefined8 FUN_145cf4d8c(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1401499b2();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_145cf4dbc(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cf4db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145cf4dbc FUN_145cf4dbc body=88 status=ok
// SIG undefined FUN_145cf4dbc(void)

undefined8 FUN_145cf4dbc(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  while( true ) {
    cVar1 = FUN_144729dda(param_1 + 0x60);
    if (cVar1 == '\0') break;
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x60);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))(plVar2);
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 145cf4e14 FUN_145cf4e14 body=206 status=ok
// SIG undefined FUN_145cf4e14(void)

void FUN_145cf4e14(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x16d) == '\0') {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    local_28 = 0;
    uStack_20 = 0;
    iVar1 = FUN_145cf4ee4(param_2);
  }
  else {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    local_38 = 0;
    uStack_30 = 0;
    iVar1 = FUN_148ae0ebe(param_2);
  }
  if (iVar1 == 0) {
    *(char *)(param_1 + 0x16c) = (char)param_2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf4ee4 FUN_145cf4ee4 body=132 status=ok
// SIG undefined FUN_145cf4ee4(void)

undefined4 FUN_145cf4ee4(uint param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  vx_req_connector_mute_local_mic_create(&local_28);
  *(uint *)(local_28 + 0x38) = param_1 & 0xff;
  local_38 = 0;
  local_30 = 0;
  FUN_1412f566c(&local_38,param_2);
  uVar1 = FUN_1412f579e(local_28,&local_38);
  FUN_1449db362(param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf4f74 FUN_145cf4f74 body=125 status=ok
// SIG undefined FUN_145cf4f74(void)

undefined8 * FUN_145cf4f74(undefined8 *param_1)

{
  FUN_145861f48();
  *param_1 = &PTR_FUN_14b530f20;
  param_1[5] = &PTR_FUN_14b531270;
  param_1[0x52] = &PTR_LAB_14b5312b0;
  param_1[0x16d] = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb7c) = 0;
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  return param_1;
}



// FUNCTION 145cf4ffc FUN_145cf4ffc body=260 status=ok
// SIG undefined FUN_145cf4ffc(void)

undefined8 * FUN_145cf4ffc(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b88acc0;
  local_50 = DAT_14cbe5500;
  local_58 = DAT_14cbe54f8;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe5510);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5538;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf5110 FUN_145cf5110 body=54 status=ok
// SIG undefined FUN_145cf5110(void)

undefined8 * FUN_145cf5110(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf5146 FUN_145cf5146 body=38 status=ok
// SIG undefined FUN_145cf5146(void)

undefined8 FUN_145cf5146(undefined8 param_1,int param_2)

{
  FUN_145cf516c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf516c FUN_145cf516c body=98 status=ok
// SIG undefined FUN_145cf516c(void)

void FUN_145cf516c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9c4c10;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 145cf51ce FUN_145cf51ce body=63 status=ok
// SIG undefined FUN_145cf51ce(void)

undefined8 * FUN_145cf51ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bccc340;
  FUN_145cf520e(param_1 + 0x115);
  FUN_14064e066(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf520e FUN_145cf520e body=73 status=ok
// SIG undefined FUN_145cf520e(void)

void FUN_145cf520e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bccac40;
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
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 145cf5258 FUN_145cf5258 body=40 status=ok
// SIG undefined FUN_145cf5258(void)

undefined8 FUN_145cf5258(undefined8 param_1,int param_2)

{
  FUN_145cf5280();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf5280 FUN_145cf5280 body=96 status=ok
// SIG undefined FUN_145cf5280(void)

void FUN_145cf5280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bee31c0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x19);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cf52e0 FUN_145cf52e0 body=136 status=ok
// SIG undefined FUN_145cf52e0(void)

undefined1 * FUN_145cf52e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf5368();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HairStrandsVF";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceIntermediateParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x81;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145a994da;
}



// FUNCTION 145cf5368 FUN_145cf5368 body=268 status=ok
// SIG undefined FUN_145cf5368(void)

undefined * FUN_145cf5368(void)

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
              0x110) < DAT_14c9d5528) {
    FUN_144b3d300(&DAT_14c9d5528);
    if (DAT_14c9d5528 == -1) {
      FUN_145cf5476(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceIntermediateParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x7a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d54a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e28e);
      _Init_thread_footer(&DAT_14c9d5528);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d54a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf5476 FUN_145cf5476 body=226 status=ok
// SIG undefined FUN_145cf5476(void)

longlong * FUN_145cf5476(longlong *param_1)

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
  pcVar13 = FUN_145dfb8e8;
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



// FUNCTION 145cf555e FUN_145cf555e body=138 status=ok
// SIG undefined FUN_145cf555e(void)

undefined1 * FUN_145cf555e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf55e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145cf555a;
}



// FUNCTION 145cf55e8 FUN_145cf55e8 body=265 status=ok
// SIG undefined FUN_145cf55e8(void)

undefined * FUN_145cf55e8(void)

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
              0x110) < DAT_14c9d56c0) {
    FUN_144b3d300(&DAT_14c9d56c0);
    if (DAT_14c9d56c0 == -1) {
      FUN_14152c372(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceCommonParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d5640,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2b2);
      _Init_thread_footer(&DAT_14c9d56c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d5640;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf56f2 FUN_145cf56f2 body=144 status=ok
// SIG undefined FUN_145cf56f2(void)

code * FUN_145cf56f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf5782();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Resources";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceResourceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1300000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145cf555e;
}



// FUNCTION 145cf5782 FUN_145cf5782 body=268 status=ok
// SIG undefined FUN_145cf5782(void)

undefined * FUN_145cf5782(void)

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
              0x110) < DAT_14c9d5638) {
    FUN_144b3d300(&DAT_14c9d5638);
    if (DAT_14c9d5638 == -1) {
      FUN_145cf5890(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceResourceParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x43;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d55b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2a6);
      _Init_thread_footer(&DAT_14c9d5638);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d55b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf5890 FUN_145cf5890 body=226 status=ok
// SIG undefined FUN_145cf5890(void)

longlong * FUN_145cf5890(longlong *param_1)

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
  pcVar13 = FUN_1462c9102;
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



// FUNCTION 145cf5978 FUN_145cf5978 body=132 status=ok
// SIG undefined FUN_145cf5978(void)

undefined1 * FUN_145cf5978(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145cf5974;
}



// FUNCTION 145cf59fc FUN_145cf59fc body=138 status=ok
// SIG undefined FUN_145cf59fc(void)

code * FUN_145cf59fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveAttributeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175d86;
}



// FUNCTION 145cf5a86 FUN_145cf5a86 body=132 status=ok
// SIG undefined FUN_145cf5a86(void)

undefined1 * FUN_145cf5a86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Density";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471768dc;
}



// FUNCTION 145cf5b0a FUN_145cf5b0a body=138 status=ok
// SIG undefined FUN_145cf5b0a(void)

code * FUN_145cf5b0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LengthScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471766b4;
}



// FUNCTION 145cf5b94 FUN_145cf5b94 body=138 status=ok
// SIG undefined FUN_145cf5b94(void)

code * FUN_145cf5b94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bSingleGuide";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471761da;
}



// FUNCTION 145cf5c1e FUN_145cf5c1e body=784 status=ok
// SIG undefined FUN_145cf5c1e(void)

void FUN_145cf5c1e(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x9f8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x9f0);
    lVar4 = (longlong)*(int *)(param_1 + 0x9f8) * 0x80 + lVar5;
    lVar1 = *param_2;
    do {
      lVar2 = *(longlong *)(lVar5 + 8);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x80) != *(int *)(lVar2 + 0xac))) {
        lVar6 = lVar2 + 0xb0;
        if (*(longlong *)(lVar2 + 0xb8) != 0) {
          lVar6 = *(longlong *)(lVar2 + 0xb8);
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar2 + 0xc0) - 1U &
                                 (int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) * 4);
        if (iVar7 != -1) {
          do {
            lVar6 = *(longlong *)(lVar2 + 0x78) + (longlong)iVar7 * 0x180;
            if (*(longlong *)(*(longlong *)(lVar2 + 0x78) + (longlong)iVar7 * 0x180) == lVar1) {
              if ((lVar6 != 0) && (lVar6 + 0x10 != 0)) {
                FUN_1413d4d42(lVar6 + 0x10,local_88,param_1);
                if (*(char *)(param_1 + 0x808) == '\x01') {
                  *(undefined1 *)(param_1 + 0x808) = 0;
                }
                *(undefined8 *)(param_1 + 0x770) = 0;
                *(undefined8 *)(param_1 + 0x778) = 0;
                *(undefined8 *)(param_1 + 0x760) = 0;
                *(undefined8 *)(param_1 + 0x768) = 0;
                *(undefined8 *)(param_1 + 0x750) = 0;
                *(undefined8 *)(param_1 + 0x758) = 0;
                *(undefined8 *)(param_1 + 0x780) = 0;
                uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                *(ulonglong *)(param_1 + 0x738) =
                     CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                *(undefined8 *)(param_1 + 0x740) = uVar3;
                *(undefined8 *)(param_1 + 0x748) = DAT_14c8464f0;
                uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                *(ulonglong *)(param_1 + 0x758) =
                     CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                *(undefined8 *)(param_1 + 0x760) = uVar3;
                *(undefined8 *)(param_1 + 0x768) = DAT_14c8464f0;
                *(undefined1 *)(param_1 + 0x788) = 1;
                lVar5 = *(longlong *)(param_1 + 0x4e0);
                if (lVar5 == 0) {
                  local_98 = DAT_14c8464f0;
                  local_a8 = (undefined4)DAT_14c8464e0;
                  uStack_a4 = DAT_14c8464e0._4_4_;
                  uStack_a0 = (undefined4)DAT_14c8464e8;
                  uStack_9c = DAT_14c8464e8._4_4_;
                }
                else {
                  local_98 = *(undefined8 *)(lVar5 + 0x1a8);
                  local_a8 = *(undefined4 *)(lVar5 + 0x198);
                  uStack_a4 = *(undefined4 *)(lVar5 + 0x19c);
                  uStack_a0 = *(undefined4 *)(lVar5 + 0x1a0);
                  uStack_9c = *(undefined4 *)(lVar5 + 0x1a4);
                }
                *(undefined8 *)(param_1 + 0x748) = local_98;
                *(undefined8 *)(param_1 + 0x738) = CONCAT44(uStack_a4,local_a8);
                *(ulonglong *)(param_1 + 0x740) = CONCAT44(uStack_9c,uStack_a0);
                if (*(longlong *)(param_1 + 0x3c0) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x3c0) + 0x390);
                }
                *(undefined4 *)(param_1 + 0x750) = uVar8;
                *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x748);
                *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x750);
                *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(param_1 + 0x738);
                *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x740);
                *(undefined4 *)(param_1 + 0x758) = local_68;
                *(undefined4 *)(param_1 + 0x75c) = uStack_64;
                *(undefined4 *)(param_1 + 0x760) = uStack_60;
                *(undefined4 *)(param_1 + 0x764) = uStack_5c;
                *(undefined1 *)(param_1 + 0x77c) = 1;
                FUN_145cf6358(param_1);
                if (param_3 == 1) {
                  if (*(longlong *)(param_1 + 0x3c0) != 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x3c0) + 0x390) =
                         *(undefined4 *)(param_1 + 0x770);
                  }
                  FUN_14596238c(param_1,(undefined8 *)(param_1 + 0x758));
                  if (*(char *)(param_1 + 0x788) == '\x01') {
                    if (*(char *)(param_1 + 0x784) == '\x01') {
                      *(undefined1 *)(param_1 + 0x784) = 0;
                    }
                    *(undefined1 *)(param_1 + 0x788) = 0;
                  }
                  lVar5 = *(longlong *)(param_1 + 0x4e0);
                  if (lVar5 != 0) {
                    *(double *)(lVar5 + 800) =
                         *(double *)(lVar5 + 0x260) + *(double *)(lVar5 + 0x2c8);
                    *(double *)(lVar5 + 0x328) =
                         *(double *)(lVar5 + 0x268) + *(double *)(lVar5 + 0x2d0);
                    *(double *)(lVar5 + 0x330) =
                         *(double *)(lVar5 + 0x270) + *(double *)(lVar5 + 0x2d8);
                  }
                }
                FUN_145cf5f30(param_1,0);
                goto LAB_145cf5eb2;
              }
              break;
            }
            iVar7 = *(int *)(lVar6 + 0x170);
          } while (iVar7 != -1);
        }
      }
      lVar5 = lVar5 + 0x80;
    } while (lVar5 != lVar4);
  }
LAB_145cf5eb2:
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf5f30 FUN_145cf5f30 body=143 status=ok
// SIG undefined FUN_145cf5f30(void)

void FUN_145cf5f30(longlong param_1,char param_2)

{
  FUN_145cf5fc0(param_1 + 0xb88,param_1);
  if ((0 < *(int *)(param_1 + 0x888)) || (param_2 != '\0')) {
    *(undefined4 *)(param_1 + 0x888) = 0;
    if (*(int *)(param_1 + 0x88c) < 0) {
      FUN_145843ebc(param_1 + 0x880,0);
    }
    FUN_145cf6096(param_1 + 0x480,param_1 + 0x880);
  }
  if ((*(longlong *)(param_1 + 0x928) == 0) && (param_2 == '\0')) {
    return;
  }
  *(undefined8 *)(param_1 + 0x928) = 0;
  FUN_145cf6038(param_1);
  return;
}



// FUNCTION 145cf5fc0 FUN_145cf5fc0 body=119 status=ok
// SIG undefined FUN_145cf5fc0(void)

void FUN_145cf5fc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar3 = (longlong)(int)param_1[1] << 3;
    do {
      lVar1 = FUN_145aaaf18(param_2,lVar2);
      if (lVar1 != 0) {
        FUN_148d7047a(lVar1,param_2,*(undefined4 *)(param_2 + 0x58c));
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14583ce56(param_1,0);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 145cf6038 FUN_145cf6038 body=93 status=ok
// SIG undefined FUN_145cf6038(void)

void FUN_145cf6038(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x9f0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
      if (lVar3 != 0) {
        FUN_145cf6138(lVar3,*(undefined8 *)(param_1 + 0x928));
      }
      lVar4 = lVar4 + 0x80;
    } while ((longlong)iVar1 * 0x80 != lVar4);
  }
  FUN_1447f69b6(param_1 + 0x498);
  return;
}



// FUNCTION 145cf6096 FUN_145cf6096 body=162 status=ok
// SIG undefined FUN_145cf6096(void)

void FUN_145cf6096(longlong *param_1,undefined8 param_2)

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
        goto LAB_145cf6123;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145cf6123:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145cf6138 FUN_145cf6138 body=228 status=ok
// SIG undefined FUN_145cf6138(void)

void FUN_145cf6138(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(longlong *)(param_1 + 0x170) = param_2;
  iVar1 = *(int *)(param_1 + 0x160);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x158);
    lVar5 = 0;
    do {
      local_48 = *(undefined8 *)(lVar2 + lVar5);
      plVar3 = (longlong *)FUN_14479d2ce(&local_48);
      if (plVar3 != (longlong *)0x0) {
        if (param_2 == 0) {
          bVar6 = false;
        }
        else {
          lVar4 = FUN_148d7052a(plVar3);
          bVar6 = lVar4 == param_2;
        }
        if (((*(char *)((longlong)plVar3 + 0x742) == '\x01') && ((bool)(char)plVar3[0xe8] != bVar6))
           && (*(bool *)(plVar3 + 0xe8) = bVar6, *(char *)((longlong)plVar3 + 0x741) == '\0')) {
          (**(code **)(*plVar3 + 0xaf8))(plVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145cf621e(param_1);
  return;
}



// FUNCTION 145cf621e FUN_145cf621e body=312 status=ok
// SIG undefined FUN_145cf621e(void)

void FUN_145cf621e(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144729dda(param_1 + 0x10);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x10);
    lVar4 = FUN_1410ac07e(uVar3);
    if (lVar4 != 0) {
      lVar4 = param_1 + 0x70;
      cVar2 = FUN_144729dda(lVar4);
      if (((cVar2 != '\0') &&
          (((lVar5 = FUN_14479d2ce(lVar4), *(longlong *)(lVar5 + 0x3b0) == 0 ||
            (lVar6 = FUN_1402d20ea(lVar5 + 0x3a8), lVar6 != 0)) &&
           (*(longlong *)(lVar5 + 0x3f8) != 0)))) &&
         (((*(longlong *)(lVar5 + 0x398) != 0 && (*(longlong *)(lVar5 + 0x3f0) != 0)) &&
          (iVar1 = *(int *)(param_1 + 0x160), (longlong)iVar1 != 0)))) {
        lVar5 = *(longlong *)(param_1 + 0x158);
        lVar6 = 0;
        do {
          local_40 = *(undefined8 *)(lVar5 + lVar6);
          plVar7 = (longlong *)FUN_14479d2ce(&local_40);
          if (plVar7 != (longlong *)0x0) {
            uVar3 = FUN_14479d2ce(lVar4);
            uVar3 = FUN_148d71362(uVar3);
            FUN_14485c47a(plVar7 + 0xe7,uVar3);
            if (*(char *)((longlong)plVar7 + 0x741) == '\0') {
              (**(code **)(*plVar7 + 0xaf8))(plVar7);
            }
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar1 * 8 != lVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf6358 FUN_145cf6358 body=335 status=ok
// SIG undefined FUN_145cf6358(void)

void FUN_145cf6358(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  dVar2 = DAT_14c8463f8;
  dVar6 = DAT_14c8463f0;
  if (*(longlong *)(param_1 + 0x408) != 0) {
    lVar3 = FUN_140d97494();
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x70) == '\x02')) {
      *(double *)(param_2 + 0x30) =
           (double)*(float *)(param_1 + 0x5b0) + *(double *)(param_2 + 0x30);
      dVar1 = *(double *)(param_1 + 0x5a0);
      dVar2 = *(double *)(param_1 + 0x5a8);
      fVar4 = (float)FUN_1413eca68(param_1);
      lVar3 = *(longlong *)(param_1 + 0x3c0);
      if (lVar3 == 0) {
        dVar6 = 1.0;
      }
      else {
        dVar6 = *(double *)(param_2 + 0x30);
        if (*(longlong *)(param_1 + 0x4e0) != 0) {
          dVar6 = dVar6 + (double)*(float *)(*(longlong *)(param_1 + 0x4e0) + 0x2a8);
        }
        if (*(char *)(lVar3 + 0x388) == '\0') {
          fVar5 = tanf(*(float *)(lVar3 + 0x38c) * 0.017453292 * 0.5);
          fVar5 = (float)(dVar6 * (double)fVar5);
        }
        else if (*(char *)(lVar3 + 0x388) == '\x01') {
          fVar5 = *(float *)(lVar3 + 0x390) * 0.5;
        }
        else {
          fVar5 = 1.0;
        }
        dVar6 = (double)fVar5;
      }
      dVar2 = dVar2 * dVar6;
      dVar6 = (double)fVar4 * dVar1 * dVar6;
    }
  }
  *(double *)(param_2 + 0x20) = dVar6 + *(double *)(param_2 + 0x20);
  *(double *)(param_2 + 0x28) = dVar2 + *(double *)(param_2 + 0x28);
  return;
}



// FUNCTION 145cf64a8 FUN_145cf64a8 body=38 status=ok
// SIG undefined FUN_145cf64a8(void)

undefined8 FUN_145cf64a8(undefined8 param_1,int param_2)

{
  FUN_145cf64ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf64ce FUN_145cf64ce body=101 status=ok
// SIG undefined FUN_145cf64ce(void)

void FUN_145cf64ce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad7fa00;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf6534(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf656a(param_1 + 2);
  return;
}



// FUNCTION 145cf6534 FUN_145cf6534 body=53 status=ok
// SIG undefined FUN_145cf6534(void)

void FUN_145cf6534(longlong *param_1)

{
  FUN_145cf65fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf656a FUN_145cf656a body=53 status=ok
// SIG undefined FUN_145cf656a(void)

void FUN_145cf656a(longlong *param_1)

{
  FUN_145cf65a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf65a0 FUN_145cf65a0 body=90 status=ok
// SIG undefined FUN_145cf65a0(void)

void FUN_145cf65a0(longlong param_1)

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



// FUNCTION 145cf65fa FUN_145cf65fa body=346 status=ok
// SIG undefined FUN_145cf65fa(void)

void FUN_145cf65fa(longlong *param_1)

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
      FUN_1480860b8(*local_68 + (longlong)iStack_4c * 0x130 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140a1bc36(param_1,0);
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



// FUNCTION 145cf6756 FUN_145cf6756 body=166 status=ok
// SIG undefined FUN_145cf6756(void)

void FUN_145cf6756(void)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_145cf67fe();
  local_48 = 0;
  local_38 = &PTR_LAB_149e19280;
  local_30 = FUN_143ead04a;
  local_58 = FUN_1458108e8;
  local_78 = L"platform";
  local_70 = 8;
  local_68 = 0;
  uStack_60 = 0;
  FUN_145cf6864(uVar1,&local_78);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf67fe FUN_145cf67fe body=101 status=ok
// SIG undefined FUN_145cf67fe(void)

undefined8 * FUN_145cf67fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8449a8) {
    FUN_144b3d300(&DAT_14c8449a8);
    if (DAT_14c8449a8 == -1) {
      FUN_145cf6a76();
      atexit(FUN_142760dd4);
      _Init_thread_footer(&DAT_14c8449a8);
    }
  }
  return &DAT_14c844990;
}



// FUNCTION 145cf6864 FUN_145cf6864 body=104 status=ok
// SIG undefined FUN_145cf6864(void)

void FUN_145cf6864(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  FUN_145cf68cc(param_1,param_2,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  if (*param_3 == 0) {
    return;
  }
  plVar1 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar1 = (longlong *)param_3[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000145cf68c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}



// FUNCTION 145cf68cc FUN_145cf68cc body=426 status=ok
// SIG undefined FUN_145cf68cc(void)

void FUN_145cf68cc(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  wchar_t *_Str2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar13 = *param_1;
  if ((int)uVar2 < 1) {
    uVar12 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 1);
    _Str2 = (wchar_t *)*param_2;
    uVar12 = 0;
    uVar10 = uVar2;
    do {
      uVar1 = uVar12 + (uVar10 >> 1);
      lVar9 = (ulonglong)uVar1 * 0x60;
      iVar7 = *(int *)(lVar13 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar13),_Str2,(longlong)iVar7), iVar7 < 0)))) {
        uVar12 = uVar1 + (uVar10 & 1);
      }
      bVar3 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar3);
    if ((int)uVar12 < (int)uVar2) {
      iVar7 = *(int *)(lVar13 + 8 + (ulonglong)uVar12 * 0x60);
      if ((iVar7 <= iVar8) &&
         ((puVar11 = (undefined8 *)((ulonglong)uVar12 * 0x60 + lVar13), iVar7 < iVar8 ||
          (iVar8 = wcsncmp(_Str2,(wchar_t *)*puVar11,(longlong)iVar8), -1 < iVar8)))) {
        FUN_145804245(puVar11,1);
        goto LAB_145cf699a;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_145cf6ec4(param_1,uVar2);
    lVar13 = *param_1;
  }
  lVar9 = (ulonglong)uVar12 * 0x60;
  memmove((void *)(lVar13 + lVar9 + 0x60),(void *)(lVar13 + lVar9),
          (ulonglong)(uVar2 - uVar12) * 0x60);
  puVar11 = (undefined8 *)(lVar9 + *param_1);
LAB_145cf699a:
  FUN_141339746(puVar11,param_2);
  puVar11[4] = *param_3;
  puVar11[6] = param_3[2];
  param_3[2] = 0;
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[7];
  puVar11[10] = param_3[6];
  puVar11[0xb] = uVar6;
  puVar11[8] = uVar4;
  puVar11[9] = uVar5;
  if (puVar11[4] != 0) {
    *param_3 = 0;
  }
  return;
}



// FUNCTION 145cf6a76 FUN_145cf6a76 body=628 status=ok
// SIG undefined FUN_145cf6a76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cf6a76(void)

{
  undefined ***pppuVar1;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  DAT_14c844990 = 0;
  _DAT_14c844998 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c8449a0);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e19280;
  local_60 = FUN_14276262e;
  local_88 = FUN_1458108e8;
  local_a8 = L"plural";
  local_a0 = 6;
  local_98 = 0;
  uStack_90 = 0;
  FUN_145cf6cec(&local_a8);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (code *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e19280;
  local_60 = FUN_14276264c;
  local_88 = FUN_1458108e8;
  local_a8 = L"ordinal";
  local_a0 = 7;
  local_98 = 0;
  uStack_90 = 0;
  FUN_145cf6cec(&local_a8);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (code *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e19280;
  local_60 = FUN_14276266a;
  local_88 = FUN_1458108e8;
  local_a8 = L"gender";
  local_a0 = 6;
  local_98 = 0;
  uStack_90 = 0;
  FUN_145cf6cec(&local_a8);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (code *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e19280;
  local_60 = FUN_142762680;
  local_88 = FUN_1458108e8;
  local_a8 = L"hpp";
  local_a0 = 3;
  local_98 = 0;
  uStack_90 = 0;
  FUN_145cf6cec(&local_a8);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (code *)0x0) {
    pppuVar1 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar1 = local_78;
    }
    (*(code *)(*pppuVar1)[2])(pppuVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf6cec FUN_145cf6cec body=471 status=ok
// SIG undefined FUN_145cf6cec(void)

void FUN_145cf6cec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  wchar_t *_Str2;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  uVar6 = DAT_14c844998;
  lVar13 = DAT_14c844990;
  if ((int)DAT_14c844998 < 1) {
    uVar11 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 1);
    _Str2 = (wchar_t *)*param_1;
    uVar11 = 0;
    uVar10 = DAT_14c844998;
    do {
      uVar1 = (uVar10 >> 1) + uVar11;
      lVar9 = (ulonglong)uVar1 * 0x60;
      iVar7 = *(int *)(lVar13 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar13),_Str2,(longlong)iVar7), iVar7 < 0)))) {
        uVar11 = uVar1 + (uVar10 & 1);
      }
      bVar2 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar2);
    if ((int)uVar11 < (int)uVar6) {
      iVar7 = *(int *)(lVar13 + 8 + (ulonglong)uVar11 * 0x60);
      if ((iVar7 <= iVar8) &&
         ((puVar12 = (undefined8 *)((ulonglong)uVar11 * 0x60 + lVar13), iVar7 < iVar8 ||
          (iVar8 = wcsncmp(_Str2,(wchar_t *)*puVar12,(longlong)iVar8), -1 < iVar8)))) {
        FUN_145804245(puVar12,1);
        goto LAB_145cf6e21;
      }
    }
  }
  DAT_14c844998 = uVar6 + 1;
  if (DAT_14c84499c == uVar6) {
    FUN_145cf6ec4(&DAT_14c844990,uVar6);
    lVar13 = DAT_14c844990;
  }
  lVar9 = (ulonglong)uVar11 * 0x60;
  memmove((void *)(lVar13 + lVar9 + 0x60),(void *)(lVar13 + lVar9),
          (ulonglong)(uVar6 - uVar11) * 0x60);
  puVar12 = (undefined8 *)(lVar9 + DAT_14c844990);
LAB_145cf6e21:
  *puVar12 = *param_1;
  *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_1 + 1);
  puVar12[2] = 0;
  puVar12[2] = param_1[2];
  param_1[2] = 0;
  *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1[3] = 0;
  puVar12[4] = *param_2;
  puVar12[6] = param_2[2];
  param_2[2] = 0;
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[7];
  puVar12[10] = param_2[6];
  puVar12[0xb] = uVar5;
  puVar12[8] = uVar3;
  puVar12[9] = uVar4;
  if (puVar12[4] != 0) {
    *param_2 = 0;
  }
  return;
}



// FUNCTION 145cf6ec4 FUN_145cf6ec4 body=147 status=ok
// SIG undefined FUN_145cf6ec4(void)

void FUN_145cf6ec4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cf6f58 FUN_145cf6f58 body=40 status=ok
// SIG undefined FUN_145cf6f58(void)

undefined8 FUN_145cf6f58(undefined8 param_1,int param_2)

{
  FUN_145cf6f80();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf6f80 FUN_145cf6f80 body=501 status=ok
// SIG undefined FUN_145cf6f80(void)

void FUN_145cf6f80(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5060f0;
  param_1[5] = &PTR_FUN_14a506410;
  plVar3 = (longlong *)param_1[0x33b];
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
  plVar3 = (longlong *)param_1[0x339];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x337];
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
  plVar3 = (longlong *)param_1[0x335];
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
  FUN_145cf7175(param_1[0x332],*(undefined4 *)(param_1 + 0x333));
  if (param_1[0x332] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x330] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x324];
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
  FUN_140ffd8aa(param_1 + 0x250);
  FUN_1415bbd66(param_1 + 0xe6);
  FUN_14588d3b8(param_1 + 0x32);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145cf7175 FUN_145cf7175 body=73 status=ok
// SIG undefined FUN_145cf7175(void)

void FUN_145cf7175(longlong param_1,int param_2)

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



// FUNCTION 145cf71be FUN_145cf71be body=317 status=ok
// SIG undefined FUN_145cf71be(void)

undefined4 * FUN_145cf71be(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_145cf7448(param_1,local_48);
  FUN_145cf72fc(param_3,local_40);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145cf7396(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x44) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
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
      FUN_145cf7530(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf72fc FUN_145cf72fc body=153 status=ok
// SIG undefined FUN_145cf72fc(void)

undefined8 * FUN_145cf72fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &DAT_14a171d50;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_140ad2136(param_2 + 1,&local_68);
  param_2[5] = uStack_48;
  param_2[6] = local_40;
  param_2[7] = uStack_38;
  local_40 = 0;
  uStack_38 = 0;
  FUN_145c1f7d4(&local_68);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf7396 FUN_145cf7396 body=178 status=ok
// SIG undefined FUN_145cf7396(void)

undefined8 FUN_145cf7396(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar17 != -1) {
      do {
        plVar16 = (longlong *)(*param_1 + (longlong)iVar17 * 0x48);
        if (*plVar16 == *param_3) {
          FUN_145c1f7d4(plVar16 + 1);
          lVar9 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar10 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar11 = param_3[2];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar12 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar13 = param_3[4];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar14 = param_3[5];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
          lVar15 = param_3[7];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
          *(int *)(plVar16 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar16 + 0x34) = uVar7;
          *(int *)(plVar16 + 7) = (int)lVar15;
          *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar8;
          *(int *)(plVar16 + 4) = (int)lVar13;
          *(undefined4 *)((longlong)plVar16 + 0x24) = uVar5;
          *(int *)(plVar16 + 5) = (int)lVar14;
          *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar6;
          *(int *)(plVar16 + 2) = (int)lVar11;
          *(undefined4 *)((longlong)plVar16 + 0x14) = uVar3;
          *(int *)(plVar16 + 3) = (int)lVar12;
          *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar4;
          *(int *)plVar16 = (int)lVar9;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar1;
          *(int *)(plVar16 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar2;
          FUN_1470a43e4(param_1,*param_4);
          *param_4 = iVar17;
          return 1;
        }
        iVar17 = (int)plVar16[8];
      } while (iVar17 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145cf7448 FUN_145cf7448 body=231 status=ok
// SIG undefined FUN_145cf7448(void)

int * FUN_145cf7448(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 145cf7530 FUN_145cf7530 body=483 status=ok
// SIG undefined FUN_145cf7530(void)

void FUN_145cf7530(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x48);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x44 + lVar5 * 0x48) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x40 + lVar5 * 0x48) =
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



// FUNCTION 145cf7714 FUN_145cf7714 body=40 status=ok
// SIG undefined FUN_145cf7714(void)

undefined8 FUN_145cf7714(undefined8 param_1,int param_2)

{
  FUN_145cf773c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf773c FUN_145cf773c body=188 status=ok
// SIG undefined FUN_145cf773c(void)

void FUN_145cf773c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7c6470;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x14);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf77f8(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cf77f8 FUN_145cf77f8 body=45 status=ok
// SIG undefined FUN_145cf77f8(void)

void FUN_145cf77f8(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145cf7826 FUN_145cf7826 body=243 status=ok
// SIG undefined FUN_145cf7826(void)

void FUN_145cf7826(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 == (longlong *)0x0) {
    local_48 = param_1 + 0x58;
    FUN_14152c456(local_38,*(undefined8 *)(param_1 + 0x38),*(int *)(param_1 + 0x1c) != 0,
                  param_1 + 0x48);
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
    local_48 = param_1 + 0x58;
    FUN_14152c456(local_38,*(undefined8 *)(param_1 + 0x38),*(int *)(param_1 + 0x1c) != 0,
                  param_1 + 0x48);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf7924 FUN_145cf7924 body=173 status=ok
// SIG undefined FUN_145cf7924(void)

void FUN_145cf7924(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_145cf79bb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145cf79bb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145cf79d2 FUN_145cf79d2 body=1606 status=ok
// SIG undefined FUN_145cf79d2(void)

void FUN_145cf79d2(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140b64d6c(param_1,&local_58,param_2);
  if (local_58 == 0) goto LAB_145cf7c66;
  uVar9 = FUN_140b64e34(param_1);
  FUN_140b6e166(&local_68,uVar9,param_3);
  lVar10 = FUN_140b64e34(param_1);
  if (((((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1f0) != 0)) &&
       (plVar11 = (longlong *)FUN_140b703aa(), plVar11 != (longlong *)0x0)) &&
      (lVar10 = (**(code **)(*plVar11 + 0x2b8))(plVar11), lVar10 != 0)) &&
     ((cVar6 = FUN_145cf80ce(lVar10,param_2,param_3), cVar6 != '\0' ||
      ((local_68 != 0 && (cVar6 = FUN_145cf80ce(lVar10,param_2), cVar6 != '\0')))))) {
    plStack_40 = *(longlong **)(param_3 + 0x10);
    if (plStack_40 == (longlong *)0x0) {
LAB_145cf7cab:
      plStack_40 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plStack_40[1];
      do {
        if (iVar8 == 0) goto LAB_145cf7cab;
        LOCK();
        iVar5 = (int)plStack_40[1];
        bVar14 = iVar8 == iVar5;
        if (bVar14) {
          *(int *)(plStack_40 + 1) = iVar8 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        UNLOCK();
      } while (!bVar14);
    }
    local_48 = (longlong *)0x0;
    if (plStack_40 != (longlong *)0x0) {
      local_48 = *(longlong **)(param_3 + 8);
    }
    local_78 = local_58;
    local_70 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    FUN_145c2c83a(param_1,&local_78,&local_48,1);
    plVar11 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar11 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  cVar6 = FUN_145cf896c(param_1,param_3);
  if (cVar6 == '\0') {
    if (*(int *)(param_1 + 0x250) != *(int *)(param_1 + 0x27c)) {
      lVar10 = param_1 + 0x280;
      if (*(longlong *)(param_1 + 0x288) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x288);
      }
      iVar8 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x290) - 1U & param_2) * 4);
      if (iVar8 != -1) {
        do {
          lVar10 = *(longlong *)(param_1 + 0x248) + (longlong)iVar8 * 0x60;
          if (*(uint *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar8 * 0x60) == param_2) {
            if ((lVar10 != 0) && (plVar11 = (longlong *)(lVar10 + 8), plVar11 != (longlong *)0x0)) {
              plStack_40 = *(longlong **)(param_3 + 0x10);
              if (plStack_40 == (longlong *)0x0) goto LAB_145cf7d5a;
              iVar8 = (int)plStack_40[1];
              goto LAB_145cf7b21;
            }
            break;
          }
          iVar8 = *(int *)(lVar10 + 0x58);
        } while (iVar8 != -1);
      }
    }
    goto LAB_145cf7e52;
  }
  if (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c)) {
    lVar10 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x238);
    }
    uVar12 = *(uint *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x240) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x1f8) + (longlong)(int)uVar12 * 0x14);
        if (*puVar3 == param_2) {
          if ((puVar3 != (uint *)0x0) &&
             (((char)puVar3[2] != '\0' ||
              ((*(char *)((longlong)puVar3 + 9) == '\x01' &&
               (cVar6 = FUN_148a6981e(param_1,param_2,param_3), cVar6 != '\0')))))) {
            plStack_40 = *(longlong **)(param_3 + 0x10);
            if (plStack_40 == (longlong *)0x0) goto LAB_145cf7f98;
            iVar8 = (int)plStack_40[1];
            goto LAB_145cf8009;
          }
          break;
        }
        uVar12 = puVar3[3];
      } while (uVar12 != 0xffffffff);
    }
  }
  plStack_40 = *(longlong **)(param_3 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_145cf7dfb:
    plStack_40 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plStack_40[1];
    do {
      if (iVar8 == 0) goto LAB_145cf7dfb;
      LOCK();
      iVar5 = (int)plStack_40[1];
      bVar14 = iVar8 == iVar5;
      if (bVar14) {
        *(int *)(plStack_40 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar14);
  }
  local_48 = (longlong *)0x0;
  if (plStack_40 != (longlong *)0x0) {
    local_48 = *(longlong **)(param_3 + 8);
  }
  local_78 = local_58;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  uVar13 = 0x10;
  goto LAB_145cf7ea3;
  while( true ) {
    LOCK();
    iVar5 = (int)plStack_40[1];
    bVar14 = iVar8 == iVar5;
    if (bVar14) {
      *(int *)(plStack_40 + 1) = iVar8 + 1;
      iVar5 = iVar8;
    }
    iVar8 = iVar5;
    UNLOCK();
    if (bVar14) break;
LAB_145cf7b21:
    if (iVar8 == 0) goto LAB_145cf7d5a;
  }
  local_48 = *(longlong **)(param_3 + 8);
  LOCK();
  *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
  UNLOCK();
  bVar14 = false;
LAB_145cf7b4c:
  plVar1 = plStack_40;
  uVar7 = (**(code **)(*local_48 + 0x40))();
  iVar8 = FUN_145cf801a(plVar11,uVar7,&local_48);
  plVar4 = plStack_40;
  if (iVar8 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)iVar8 * 0x38 + *plVar11;
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (!bVar14) {
    LOCK();
    plVar11 = plVar1 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x28) != '\0')) {
    plStack_40 = *(longlong **)(param_3 + 0x10);
    if (plStack_40 == (longlong *)0x0) {
LAB_145cf7d6e:
      plStack_40 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plStack_40[1];
      do {
        if (iVar8 == 0) goto LAB_145cf7d6e;
        LOCK();
        iVar5 = (int)plStack_40[1];
        bVar14 = iVar8 == iVar5;
        if (bVar14) {
          *(int *)(plStack_40 + 1) = iVar8 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        UNLOCK();
      } while (!bVar14);
    }
    local_48 = (longlong *)0x0;
    if (plStack_40 != (longlong *)0x0) {
      local_48 = *(longlong **)(param_3 + 8);
    }
    local_78 = local_58;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    uVar13 = 2;
    goto LAB_145cf7c13;
  }
LAB_145cf7e52:
  plStack_40 = *(longlong **)(param_3 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_145cf7e5b:
    plStack_40 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plStack_40[1];
    do {
      if (iVar8 == 0) goto LAB_145cf7e5b;
      LOCK();
      iVar5 = (int)plStack_40[1];
      bVar14 = iVar8 == iVar5;
      if (bVar14) {
        *(int *)(plStack_40 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar14);
  }
  local_48 = (longlong *)0x0;
  if (plStack_40 != (longlong *)0x0) {
    local_48 = *(longlong **)(param_3 + 8);
  }
  local_78 = local_58;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  uVar13 = 2;
LAB_145cf7ea3:
  local_70 = local_50;
  FUN_145c2c83a(param_1,&local_78,&local_48,uVar13);
  goto LAB_145cf7c18;
LAB_145cf7d5a:
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  bVar14 = true;
  goto LAB_145cf7b4c;
LAB_145cf7f98:
  plStack_40 = (longlong *)0x0;
  goto LAB_145cf7f9a;
  while( true ) {
    LOCK();
    iVar5 = (int)plStack_40[1];
    bVar14 = iVar8 == iVar5;
    if (bVar14) {
      *(int *)(plStack_40 + 1) = iVar8 + 1;
      iVar5 = iVar8;
    }
    iVar8 = iVar5;
    UNLOCK();
    if (bVar14) break;
LAB_145cf8009:
    if (iVar8 == 0) goto LAB_145cf7f98;
  }
LAB_145cf7f9a:
  local_48 = (longlong *)0x0;
  if (plStack_40 != (longlong *)0x0) {
    local_48 = *(longlong **)(param_3 + 8);
  }
  local_78 = local_58;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  uVar13 = 0x10;
LAB_145cf7c13:
  local_70 = local_50;
  FUN_145cf8470(param_1,&local_78,&local_48,uVar13);
LAB_145cf7c18:
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_70 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  plVar11 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_60 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
LAB_145cf7c66:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_50 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf801a FUN_145cf801a body=179 status=ok
// SIG undefined FUN_145cf801a(void)

int FUN_145cf801a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x38;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
        }
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
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x30 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 145cf80ce FUN_145cf80ce body=653 status=ok
// SIG undefined FUN_145cf80ce(void)

ulonglong FUN_145cf80ce(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined8 *local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar9 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xf0);
    }
    iVar6 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 0xc) == param_2) {
          (**(code **)(*param_3 + 0x10))(param_3,&local_60);
          FUN_145cf83a8(param_1,&local_58,param_2,local_60);
          if (local_58 == 0) {
            bVar3 = true;
            goto LAB_145cf8228;
          }
          (**(code **)(*param_3 + 0x10))(param_3,&local_80);
          FUN_140b708a0(param_1);
          local_48 = local_80;
          plVar5 = (longlong *)FUN_1401e3228();
          if (plVar5 == (longlong *)0x0) {
            local_78 = (longlong *)0x0;
            plStack_70 = (longlong *)0x0;
          }
          else {
            (**(code **)(*plVar5 + 0x28))(plVar5,&local_78);
            if (local_78 != (longlong *)0x0) {
              local_98 = (undefined8 *)0x0;
              uStack_90 = 0;
              (**(code **)(*local_78 + 0x278))(local_78,local_58,&local_98);
              uVar7 = 0;
              if ((longlong)(int)uStack_90 == 0) {
                param_3 = (longlong *)0x0;
                goto LAB_145cf81fc;
              }
              lVar9 = (longlong)(int)uStack_90 << 4;
              puVar8 = local_98;
              goto LAB_145cf8292;
            }
          }
          bVar3 = true;
          goto LAB_145cf8214;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
    }
  }
  goto LAB_145cf82fe;
  while( true ) {
    puVar8 = puVar8 + 2;
    lVar9 = lVar9 + -0x10;
    if (lVar9 == 0) break;
LAB_145cf8292:
    (**(code **)(*(longlong *)*puVar8 + 8))((longlong *)*puVar8,&local_48);
    cVar4 = (**(code **)*local_48)(local_48,param_3);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (cVar4 != '\0') goto LAB_145cf82cf;
  }
  puVar8 = (undefined8 *)0x0;
LAB_145cf82cf:
  uVar7 = uStack_90 & 0xffffffff;
  param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),puVar8 != (undefined8 *)0x0);
LAB_145cf81fc:
  FUN_145cf835c(local_98,uVar7);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  bVar3 = false;
LAB_145cf8214:
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_145cf8228:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (!bVar3) goto LAB_145cf8240;
LAB_145cf82fe:
  param_3 = (longlong *)0x0;
LAB_145cf8240:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (ulonglong)param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf835c FUN_145cf835c body=75 status=ok
// SIG undefined FUN_145cf835c(void)

void FUN_145cf835c(longlong param_1,int param_2)

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



// FUNCTION 145cf83a8 FUN_145cf83a8 body=198 status=ok
// SIG undefined FUN_145cf83a8(void)

undefined8 *
FUN_145cf83a8(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b708a0();
  local_28 = param_4;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,param_2,param_3);
      bVar3 = false;
      goto LAB_145cf840c;
    }
  }
  bVar3 = true;
LAB_145cf840c:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (bVar3) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf8470 FUN_145cf8470 body=185 status=ok
// SIG undefined FUN_145cf8470(void)

void FUN_145cf8470(longlong param_1,undefined8 *param_2,undefined8 *param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140b645f6(param_1,*param_3);
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  uVar3 = FUN_145cf852a(param_1 + 0x50,uVar2,param_2);
  local_39 = 0;
  uVar2 = (**(code **)(*(longlong *)*param_3 + 0x40))();
  pbVar4 = (byte *)FUN_145cf85b0(uVar3,uVar2,param_3,&local_39);
  *pbVar4 = *pbVar4 & ~param_4;
  uVar2 = FUN_140b645f6(param_1,*param_3);
  if (cVar1 != (char)uVar2) {
    FUN_145c2c8f2(param_1 + 0x38,param_3,uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf852a FUN_145cf852a body=133 status=ok
// SIG undefined FUN_145cf852a(void)

longlong FUN_145cf852a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140b64cb0();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_145cf8563;
  }
  local_30 = param_3;
  FUN_145cf8b7e(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_145cf8563:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf85b0 FUN_145cf85b0 body=142 status=ok
// SIG undefined FUN_145cf85b0(void)

longlong FUN_145cf85b0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_140b64ea2();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_145cf8617;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_145cf8640(param_1,&local_2c,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_2c << 5;
LAB_145cf8617:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf8640 FUN_145cf8640 body=291 status=ok
// SIG undefined FUN_145cf8640(void)

undefined4 * FUN_145cf8640(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cf8764(param_1,local_40);
  puVar1 = (undefined8 *)*param_4;
  puVar2 = (undefined1 *)param_4[1];
  *local_38 = *puVar1;
  lVar7 = puVar1[1];
  local_38[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(local_38 + 2) = *puVar2;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  cVar3 = FUN_145cf884a(param_1,param_3,local_38);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x1c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145cf916a(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf8764 FUN_145cf8764 body=230 status=ok
// SIG undefined FUN_145cf8764(void)

int * FUN_145cf8764(longlong *param_1,int *param_2)

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



// FUNCTION 145cf884a FUN_145cf884a body=289 status=ok
// SIG undefined FUN_145cf884a(void)

undefined8 FUN_145cf884a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar9 = FUN_140b64ea2(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar9 = FUN_140b64ea2(param_1);
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
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar9 * 0x20);
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_3[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148a717b6(param_1,*param_4);
      *param_4 = iVar9;
      uVar10 = 1;
      goto LAB_145cf88bd;
    }
  }
  uVar10 = 0;
LAB_145cf88bd:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf896c FUN_145cf896c body=500 status=ok
// SIG undefined FUN_145cf896c(void)

ulonglong FUN_145cf896c(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined7 uVar10;
  ushort uVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144729dda(param_1 + 0xa0);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar2 == '\0') goto LAB_145cf8b34;
  lVar4 = FUN_14479d2ce(param_1 + 0xa0);
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (lVar4 == 0) goto LAB_145cf8b34;
  lVar5 = FUN_140b7066c();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_145cf8b34;
  (**(code **)(*param_2 + 0x30))(param_2,&local_40);
  uVar3 = FUN_140b71325(&local_40);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_14152c913(&local_40,uVar3);
  iVar7 = local_38;
  lVar5 = local_40;
  FUN_140b74390(lVar4);
  iVar1 = local_38;
  lVar4 = local_40;
  if (local_38 < 2) {
    uVar9 = CONCAT71((int7)((ulonglong)&local_40 >> 8),1);
  }
  else {
    FUN_145cf8b61(&local_40);
    uVar10 = (undefined7)((ulonglong)&local_40 >> 8);
    if (iVar1 == local_38) {
      lVar8 = 0;
      while( true ) {
        uVar11 = *(ushort *)(lVar4 + lVar8);
        uVar9 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(local_40 + lVar8);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_145cf8b09;
LAB_145cf8a7f:
        lVar8 = lVar8 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar14]) goto LAB_145cf8a7f;
      }
      if (uVar11 != uVar13) goto LAB_145cf8aab;
LAB_145cf8b09:
      uVar9 = CONCAT71(uVar10,1);
    }
    else {
      if (local_38 + iVar1 == 1) goto LAB_145cf8b09;
LAB_145cf8aab:
      if (iVar1 == iVar7) {
        lVar8 = 0;
        while( true ) {
          uVar11 = *(ushort *)(lVar4 + lVar8);
          uVar6 = (uint)uVar11;
          uVar13 = *(ushort *)(lVar5 + lVar8);
          uVar12 = (uint)uVar13;
          if (uVar11 != uVar13) {
            if ((uVar13 | uVar11) < 0x80) {
              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar11];
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar13];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_145cf8ac9;
            }
            iVar7 = uVar6 - uVar12;
            goto LAB_145cf8af5;
          }
          if (uVar11 == 0) break;
LAB_145cf8ac9:
          lVar8 = lVar8 + 2;
        }
        iVar7 = 0;
      }
      else {
        iVar7 = iVar1 + iVar7 + -1;
      }
LAB_145cf8af5:
      uVar9 = CONCAT71(uVar10,iVar7 == 0) ^ 1;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
  }
LAB_145cf8b34:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 145cf8b61 FUN_145cf8b61 body=29 status=ok
// SIG undefined FUN_145cf8b61(void)

undefined8 FUN_145cf8b61(undefined8 param_1)

{
  FUN_1400b22c2(param_1,"shift");
  return param_1;
}



// FUNCTION 145cf8b7e FUN_145cf8b7e body=269 status=ok
// SIG undefined FUN_145cf8b7e(void)

undefined4 * FUN_145cf8b7e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cf8dbe(param_1,local_48);
  FUN_145cf8c8c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_145cf8ea2(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145cf9360(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf8c8c FUN_145cf8c8c body=179 status=ok
// SIG undefined FUN_145cf8c8c(void)

undefined8 * FUN_145cf8c8c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  lVar2 = puVar1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_145cf8d40(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145db3724(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf8d40 FUN_145cf8d40 body=125 status=ok
// SIG undefined FUN_145cf8d40(void)

undefined8 * FUN_145cf8d40(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145cf8f94();
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



// FUNCTION 145cf8dbe FUN_145cf8dbe body=227 status=ok
// SIG undefined FUN_145cf8dbe(void)

int * FUN_145cf8dbe(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 145cf8ea2 FUN_145cf8ea2 body=241 status=ok
// SIG undefined FUN_145cf8ea2(void)

undefined8 FUN_145cf8ea2(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar4 = FUN_140b64cb0(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      iVar4 = FUN_140b64cb0(param_1);
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
    if (iVar4 != -1) {
      _Dst = (void *)((longlong)iVar4 * 0x68 + *param_1);
      FUN_145db36c4(_Dst);
      memmove(_Dst,param_3,0x60);
      FUN_148a71828(param_1,*param_4);
      *param_4 = iVar4;
      uVar5 = 1;
      goto LAB_145cf8ec8;
    }
  }
  uVar5 = 0;
LAB_145cf8ec8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf8f94 FUN_145cf8f94 body=469 status=ok
// SIG undefined FUN_145cf8f94(void)

longlong * FUN_145cf8f94(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar10 = 0;
    local_50 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar8 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, local_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 8 + (longlong)iVar9 * 0x20);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (((local_68._4_4_ != iVar10) || (local_70 != plVar1)) || (local_80 != param_1));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145cf916a FUN_145cf916a body=500 status=ok
// SIG undefined FUN_145cf916a(void)

void FUN_145cf916a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x20;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x1c) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x18) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf9360 FUN_145cf9360 body=500 status=ok
// SIG undefined FUN_145cf9360(void)

void FUN_145cf9360(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x68;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 100) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x60) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf9556 FUN_145cf9556 body=38 status=ok
// SIG undefined FUN_145cf9556(void)

undefined8 FUN_145cf9556(undefined8 param_1,int param_2)

{
  FUN_145cf957c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf957c FUN_145cf957c body=101 status=ok
// SIG undefined FUN_145cf957c(void)

void FUN_145cf957c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad87a60;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf95e2(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf9618(param_1 + 3);
  return;
}



// FUNCTION 145cf95e2 FUN_145cf95e2 body=53 status=ok
// SIG undefined FUN_145cf95e2(void)

void FUN_145cf95e2(longlong *param_1)

{
  FUN_145cf964e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf9618 FUN_145cf9618 body=53 status=ok
// SIG undefined FUN_145cf9618(void)

void FUN_145cf9618(longlong *param_1)

{
  FUN_145cf96a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf964e FUN_145cf964e body=90 status=ok
// SIG undefined FUN_145cf964e(void)

void FUN_145cf964e(longlong param_1)

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



// FUNCTION 145cf96a8 FUN_145cf96a8 body=347 status=ok
// SIG undefined FUN_145cf96a8(void)

void FUN_145cf96a8(longlong *param_1)

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
      FUN_1480ae978(*local_68 + (longlong)iStack_4c * 0x50 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 145cf9810 FUN_145cf9810 body=459 status=ok
// SIG undefined FUN_145cf9810(void)

undefined8 * FUN_145cf9810(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_144a0768c();
  *(undefined2 *)(param_1 + 6) = 0x100;
  *param_1 = &PTR_FUN_14aaebbf0;
  param_1[5] = &PTR_FUN_14aaebfc0;
  param_1[0x1b] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x123) = 0;
  *(undefined8 *)((longlong)param_1 + 299) = 0;
  param_1[0x27] = 0x4170000041700000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  plVar2 = (longlong *)FUN_14143829c();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  param_1[0x2a] = lVar3;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0de30) {
    FUN_144b3d300(&DAT_14cb0de30);
    if (DAT_14cb0de30 == -1) {
      FUN_145cf99dc(&DAT_14cb0de00,L"/Engine/EngineResources/Black");
      FUN_145cf99dc(&DAT_14cb0de18,L"/Engine/EngineResources/WhiteSquareTexture");
      atexit(FUN_143774526);
      _Init_thread_footer(&DAT_14cb0de30);
    }
  }
  lVar3 = DAT_14cb0de10;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cb0de10 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = DAT_14cb0de10;
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[8] = lVar3;
  lVar3 = DAT_14cb0de28;
  if ((bVar1 & 1) != 0) {
    if (DAT_14cb0de28 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = DAT_14cb0de28;
    }
  }
  param_1[9] = lVar3;
  return param_1;
}



// FUNCTION 145cf99dc FUN_145cf99dc body=207 status=ok
// SIG undefined FUN_145cf99dc(void)

undefined8 * FUN_145cf99dc(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14aaf7670;
  param_1[2] = 0;
  FUN_141247186(param_2);
  FUN_140056680(local_30,param_2);
  FUN_14124722a(local_30,1);
  lVar1 = FUN_14152c975(local_30);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      FUN_14283f6fe(param_2);
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[2] = lVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf9aac FUN_145cf9aac body=74 status=ok
// SIG undefined FUN_145cf9aac(void)

void FUN_145cf9aac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_145cf9af8(DAT_14c967810 + 0xf0,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf9af8 FUN_145cf9af8 body=184 status=ok
// SIG undefined FUN_145cf9af8(void)

void FUN_145cf9af8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar8 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar8;
    lVar8 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar8 * 8;
    lVar10 = 0;
    while (*(longlong *)(lVar1 + lVar10 * 8) != *param_2) {
      lVar2 = lVar8 + lVar10;
      lVar10 = lVar10 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_145cf9b4c;
      }
    }
    iVar9 = (int)lVar10;
    if (~uVar5 + iVar3 != iVar9) {
      iVar7 = (~uVar5 + iVar3) - iVar9;
      iVar6 = 1;
      if (iVar7 < 1) {
        iVar6 = iVar7;
      }
      memmove((void *)(lVar1 + lVar10 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar8 = lVar8 + lVar10;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar9) < iVar3);
LAB_145cf9b4c:
  FUN_145cf9bb0(param_1);
  return;
}



// FUNCTION 145cf9bb0 FUN_145cf9bb0 body=62 status=ok
// SIG undefined FUN_145cf9bb0(void)

void FUN_145cf9bb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145cf9bee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145cf9bee FUN_145cf9bee body=89 status=ok
// SIG undefined FUN_145cf9bee(void)

ulonglong FUN_145cf9bee(uint param_1,uint param_2)

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



// FUNCTION 145cf9c48 FUN_145cf9c48 body=107 status=ok
// SIG undefined FUN_145cf9c48(void)

ulonglong FUN_145cf9c48(longlong param_1)

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
LAB_145cf9c96:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145cf9c96;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
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



// FUNCTION 145cf9cb4 FUN_145cf9cb4 body=97 status=ok
// SIG undefined FUN_145cf9cb4(void)

void FUN_145cf9cb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = &local_50;
  local_38 = 0;
  local_28 = &PTR_LAB_14b99c7b0;
  local_48 = &LAB_145c5ba6a;
  local_50 = param_2;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf9d22 FUN_145cf9d22 body=159 status=ok
// SIG undefined FUN_145cf9d22(void)

undefined8 * FUN_145cf9d22(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4d2420;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0xfe);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar2 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar2 + 0xbc);
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_20,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf9dc2 FUN_145cf9dc2 body=38 status=ok
// SIG undefined FUN_145cf9dc2(void)

undefined8 FUN_145cf9dc2(undefined8 param_1,int param_2)

{
  FUN_145cf9de8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf9de8 FUN_145cf9de8 body=101 status=ok
// SIG undefined FUN_145cf9de8(void)

void FUN_145cf9de8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad88400;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf9e4e(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf9e84(param_1 + 4);
  return;
}



// FUNCTION 145cf9e4e FUN_145cf9e4e body=53 status=ok
// SIG undefined FUN_145cf9e4e(void)

void FUN_145cf9e4e(longlong *param_1)

{
  FUN_145cf9eba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf9e84 FUN_145cf9e84 body=53 status=ok
// SIG undefined FUN_145cf9e84(void)

void FUN_145cf9e84(longlong *param_1)

{
  FUN_145cf9f14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf9eba FUN_145cf9eba body=90 status=ok
// SIG undefined FUN_145cf9eba(void)

void FUN_145cf9eba(longlong param_1)

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



// FUNCTION 145cf9f14 FUN_145cf9f14 body=348 status=ok
// SIG undefined FUN_145cf9f14(void)

void FUN_145cf9f14(longlong *param_1)

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
      if (*(char *)(*local_68 + 0xc + (longlong)iStack_4c * 0x20) == '\x01') {
        *(undefined1 *)((longlong)iStack_4c * 0x20 + *local_68 + 0xc) = 0;
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



// FUNCTION 145cfa072 FUN_145cfa072 body=706 status=ok
// SIG undefined FUN_145cfa072(void)

longlong * FUN_145cfa072(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = param_2[10];
    param_2[10] = 0;
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = param_2[0xc];
    param_2[0xc] = 0;
    *(int *)(param_1 + 0xd) = (int)param_2[0xd];
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    param_2[0xd] = 0;
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1[0xe] = param_2[0xe];
    param_2[0xe] = 0;
    *(int *)(param_1 + 0xf) = (int)param_2[0xf];
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    param_2[0xf] = 0;
  }
  *(char *)(param_1 + 0x10) = (char)param_2[0x10];
  FUN_145cfa384(param_1 + 0x11,param_2 + 0x11);
  *(char *)(param_1 + 0x13) = (char)param_2[0x13];
  FUN_140008f88(param_1 + 0x14,param_2 + 0x14);
  *(int *)(param_1 + 0x16) = (int)param_2[0x16];
  FUN_145cfa334(param_1 + 0x17,param_2 + 0x17);
  FUN_145cfa334(param_1 + 0x19,param_2 + 0x19);
  param_1[0x1b] = param_2[0x1b];
  *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
  *(short *)(param_1 + 0x1d) = (short)param_2[0x1d];
  if (param_1 != param_2) {
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1e] = param_2[0x1e];
    param_2[0x1e] = 0;
    *(int *)(param_1 + 0x1f) = (int)param_2[0x1f];
    *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
    param_2[0x1f] = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x104) = *(undefined1 *)((longlong)param_2 + 0x104);
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  FUN_145cfa3d4(param_1 + 0x21,param_2 + 0x21);
  *(short *)(param_1 + 0x23) = (short)param_2[0x23];
  *(undefined1 *)((longlong)param_1 + 0x11a) = *(undefined1 *)((longlong)param_2 + 0x11a);
  FUN_145cfa424(param_1 + 0x24,param_2 + 0x24);
  param_1[0x26] = param_2[0x26];
  return param_1;
}



// FUNCTION 145cfa334 FUN_145cfa334 body=80 status=ok
// SIG undefined FUN_145cfa334(void)

longlong * FUN_145cfa334(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1407dde2a(*param_1,(int)param_1[1]);
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



// FUNCTION 145cfa384 FUN_145cfa384 body=80 status=ok
// SIG undefined FUN_145cfa384(void)

longlong * FUN_145cfa384(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1458d8294(*param_1,(int)param_1[1]);
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



// FUNCTION 145cfa3d4 FUN_145cfa3d4 body=80 status=ok
// SIG undefined FUN_145cfa3d4(void)

longlong * FUN_145cfa3d4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140d9f63b(*param_1,(int)param_1[1]);
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



// FUNCTION 145cfa424 FUN_145cfa424 body=80 status=ok
// SIG undefined FUN_145cfa424(void)

longlong * FUN_145cfa424(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1458d8267(*param_1,(int)param_1[1]);
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



// FUNCTION 145cfa474 FUN_145cfa474 body=284 status=ok
// SIG undefined FUN_145cfa474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cfa474(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb06618) {
    FUN_144b3d300(&DAT_14cb06618);
    if (DAT_14cb06618 == -1) {
      FUN_145cfa590();
      FUN_140db5666(&DAT_14cb06570,0,&DAT_14cb06508,L"FSimpleElementMaskedGammaPS_SRGB",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
                    FUN_147d143b6,FUN_147d1438e,&LAB_147d1438a,&LAB_147d14386,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb06570 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b38);
      _Init_thread_footer(&DAT_14cb06618);
    }
  }
  return &DAT_14cb06570;
}



// FUNCTION 145cfa590 FUN_145cfa590 body=206 status=ok
// SIG undefined FUN_145cfa590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cfa590(void)

{
  if ((DAT_14cb0656f & 2) == 0) {
    DAT_14cb0656f = DAT_14cb0656f | 2;
    _DAT_14cb06510 = L"FSimpleElementMaskedGammaPS_SRGB";
    _DAT_14cb06528 = FUN_146826540;
    _DAT_14cb06530 = FUN_146825d77;
    _DAT_14cb06538 = FUN_146825fd6;
    _DAT_14cb06540 = FUN_1407e02ea;
    _DAT_14cb06548 = FUN_146826273;
    _DAT_14cb06520 = FUN_147d14358;
    _DAT_14cb06560 = 0xffffffff00000110;
    _DAT_14cb06568 = 8;
    DAT_14cb0656c = 0;
    _DAT_14cb06550 = &LAB_147d14382;
    FUN_145cfa65e();
    FUN_1407e00cc(&DAT_14cb06508);
  }
  return &DAT_14cb06508;
}



// FUNCTION 145cfa65e FUN_145cfa65e body=133 status=ok
// SIG undefined FUN_145cfa65e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfa65e(void)

{
  _DAT_14cb07610 = L"BASE";
  DAT_14cb0763a = 4;
  FUN_145cfa6e4();
  _DAT_14cb07620 = DAT_14cb06518;
  _DAT_14cb07618 = &DAT_14cb05da8;
  _DAT_14cb07628 = &LAB_14682652b;
  DAT_14cb06518 = &DAT_14cb07610;
  DAT_14cb0656d = DAT_14cb0656d + '\x01';
  _DAT_14cb07630 = 0x100000000;
  if (DAT_14cb05e0c != '\0') {
    DAT_14cb0656e = DAT_14cb0656e + '\x01';
  }
  return;
}



// FUNCTION 145cfa6e4 FUN_145cfa6e4 body=308 status=ok
// SIG undefined FUN_145cfa6e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfa6e4(void)

{
  if ((DAT_14cb05e0f & 2) != 0) {
    return;
  }
  DAT_14cb05e0f = DAT_14cb05e0f | 2;
  _DAT_14cb05db0 = L"FSimpleElementMaskedGammaBasePS";
  _DAT_14cb05dc8 = FUN_146826540;
  _DAT_14cb05dd0 = FUN_146825d77;
  _DAT_14cb05dd8 = FUN_146825fd6;
  _DAT_14cb05de0 = FUN_1407e02ea;
  _DAT_14cb05de8 = FUN_146826273;
  _DAT_14cb05dc0 = FUN_147d13ed6;
  _DAT_14cb05e00 = 0xffffffff00000110;
  _DAT_14cb05e08 = 8;
  DAT_14cb05e0c = 0;
  _DAT_14cb05df0 = &LAB_147d13f00;
  _DAT_14cb06ff0 = L"ClipRef";
  DAT_14cb0701a = FUN_140850cc5();
  _DAT_14cb06ff8 = FUN_140ec6960();
  _DAT_14cb07008 = &LAB_14682652b;
  _DAT_14cb07010 = &DAT_100000108;
  _DAT_14cb07018 = 0;
  _DAT_14cb07000 = DAT_14cb05db8;
  DAT_14cb05db8 = &DAT_14cb06ff0;
  FUN_145cfa818();
  FUN_1407e00cc(&DAT_14cb05da8);
  return;
}



// FUNCTION 145cfa818 FUN_145cfa818 body=133 status=ok
// SIG undefined FUN_145cfa818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfa818(void)

{
  _DAT_14cb074c0 = L"BASE";
  DAT_14cb074ea = 4;
  FUN_145cfa89e();
  _DAT_14cb074d0 = DAT_14cb05db8;
  _DAT_14cb074c8 = &DAT_14cb05d38;
  _DAT_14cb074d8 = &LAB_14682652b;
  DAT_14cb05db8 = &DAT_14cb074c0;
  DAT_14cb05e0d = DAT_14cb05e0d + '\x01';
  _DAT_14cb074e0 = 0x100000000;
  if (DAT_14cb05d9c != '\0') {
    DAT_14cb05e0e = DAT_14cb05e0e + '\x01';
  }
  return;
}



// FUNCTION 145cfa89e FUN_145cfa89e body=308 status=ok
// SIG undefined FUN_145cfa89e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfa89e(void)

{
  if ((DAT_14cb05d9f & 2) != 0) {
    return;
  }
  DAT_14cb05d9f = DAT_14cb05d9f | 2;
  _DAT_14cb05d40 = L"FSimpleElementGammaBasePS";
  _DAT_14cb05d58 = FUN_146826540;
  _DAT_14cb05d60 = FUN_146825d77;
  _DAT_14cb05d68 = FUN_146825fd6;
  _DAT_14cb05d70 = FUN_1407e02ea;
  _DAT_14cb05d78 = FUN_146826273;
  _DAT_14cb05d50 = FUN_147d13ea8;
  _DAT_14cb05d90 = 0xffffffff00000108;
  _DAT_14cb05d98 = 8;
  DAT_14cb05d9c = 0;
  _DAT_14cb05d80 = &LAB_147d13ed2;
  _DAT_14cb06fc0 = L"Gamma";
  DAT_14cb06fea = FUN_140850cc5();
  _DAT_14cb06fc8 = FUN_140ec6960();
  _DAT_14cb06fd8 = &LAB_14682652b;
  _DAT_14cb06fe0 = 0x100000100;
  _DAT_14cb06fe8 = 0;
  _DAT_14cb06fd0 = DAT_14cb05d48;
  DAT_14cb05d48 = &DAT_14cb06fc0;
  FUN_145cfa9d2();
  FUN_1407e00cc(&DAT_14cb05d38);
  return;
}



// FUNCTION 145cfa9d2 FUN_145cfa9d2 body=133 status=ok
// SIG undefined FUN_145cfa9d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cfa9d2(void)

{
  _DAT_14cb07490 = L"BASE";
  DAT_14cb074ba = 4;
  FUN_145d20fb0();
  _DAT_14cb074a0 = DAT_14cb05d48;
  _DAT_14cb07498 = &DAT_14cb05f40;
  _DAT_14cb074a8 = &LAB_14682652b;
  DAT_14cb05d48 = &DAT_14cb07490;
  DAT_14cb05d9d = DAT_14cb05d9d + '\x01';
  _DAT_14cb074b0 = 0x100000000;
  if (DAT_14cb05fa4 != '\0') {
    DAT_14cb05d9e = DAT_14cb05d9e + '\x01';
  }
  return;
}



// FUNCTION 145cfaa58 FUN_145cfaa58 body=130 status=ok
// SIG undefined FUN_145cfaa58(void)

void FUN_145cfaa58(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar5 = DAT_14ca98ab8;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_147434a02(plVar1);
    puVar5 = DAT_14ca98ab8;
  }
  for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
    lVar3 = puVar5[2];
    uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x40) + 0xa8))();
    *(undefined1 *)(lVar3 + 0x4f) = uVar4;
    *(undefined2 *)(lVar3 + 0x4c) = *(undefined2 *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
      FUN_145cfaada(plVar1,iVar2);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = puVar5[2];
  }
  return;
}



// FUNCTION 145cfaada FUN_145cfaada body=132 status=ok
// SIG undefined FUN_145cfaada(void)

void FUN_145cfaada(longlong param_1,int param_2)

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



// FUNCTION 145cfab6a FUN_145cfab6a body=126 status=ok
// SIG undefined FUN_145cfab6a(void)

undefined8 * FUN_145cfab6a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7a3be0;
  param_1[5] = &PTR_FUN_14a7a3e80;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x10000ea60;
  param_1[0x18] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 145cfabe8 FUN_145cfabe8 body=358 status=ok
// SIG undefined FUN_145cfabe8(void)

void FUN_145cfabe8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x3b8);
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x3c8) == '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x398);
      local_28 = *(longlong **)(param_1 + 0x3c0);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_30 = lVar5;
      FUN_145cfad50(uVar3,&local_30);
      plVar4 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x368);
    }
    else {
      if (*(char *)(param_1 + 0x3c8) != '\x01') goto LAB_145cfaca4;
      uVar3 = *(undefined8 *)(param_1 + 0x388);
      local_28 = *(longlong **)(param_1 + 0x3c0);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_30 = lVar5;
      FUN_145cfad50(uVar3,&local_30);
      plVar4 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x378);
    }
    puVar6 = &DAT_14c96b1e1;
    if (*(char *)(param_1 + 0x3ca) != '\0') {
      puVar6 = &DAT_14c96b238;
    }
    local_30._0_2_ = CONCAT11(1,*puVar6);
    local_28 = (longlong *)0x0;
    uStack_20 = 0;
    (**(code **)(**(longlong **)(lVar5 + 0x288) + 0x1c0))();
  }
LAB_145cfaca4:
  FUN_145cfad5c(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfad50 FUN_145cfad50 body=12 status=ok
// SIG undefined FUN_145cfad50(void)

void FUN_145cfad50(longlong param_1)

{
  FUN_140a58896(param_1 + 0x1e0);
  return;
}



// FUNCTION 145cfad5c FUN_145cfad5c body=313 status=ok
// SIG undefined FUN_145cfad5c(void)

void FUN_145cfad5c(longlong param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [40];
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_78;
  undefined1 local_77;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = &DAT_14c96b23c;
  if (*(char *)(param_1 + 0x3c9) != '\0') {
    puVar2 = &DAT_14c96b238;
  }
  uVar1 = *puVar2;
  if (*(char *)(param_1 + 0x3c8) == '\0') {
    local_48 = DAT_14c96b1e1;
    if (*(char *)(param_1 + 0x3cb) != '\0') {
      local_48 = uVar1;
    }
    local_47 = 1;
    local_40 = 0;
    uStack_38 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x368) + 0x1c0))();
    plVar3 = *(longlong **)(param_1 + 0x378);
    puVar2 = &local_60;
    local_60 = DAT_14c96b1e1;
    local_5f = 1;
  }
  else {
    if (*(char *)(param_1 + 0x3c8) != '\x01') goto LAB_145cfae0b;
    local_78 = DAT_14c96b1e1;
    local_77 = 1;
    local_70 = 0;
    uStack_68 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x368) + 0x1c0))();
    plVar3 = *(longlong **)(param_1 + 0x378);
    local_90 = DAT_14c96b1e1;
    if (*(char *)(param_1 + 0x3cb) != '\0') {
      local_90 = uVar1;
    }
    puVar2 = &local_90;
    local_8f = 1;
  }
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  (**(code **)(*plVar3 + 0x1c0))();
LAB_145cfae0b:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfae96 FUN_145cfae96 body=40 status=ok
// SIG undefined FUN_145cfae96(void)

undefined8 FUN_145cfae96(undefined8 param_1,int param_2)

{
  FUN_145cfaebe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cfaebe FUN_145cfaebe body=97 status=ok
// SIG undefined FUN_145cfaebe(void)

void FUN_145cfaebe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab5a940;
  FUN_144a2da94(param_1 + 0x2a);
  FUN_144a2da94(param_1 + 0x23);
  FUN_144a2da94(param_1 + 0x1c);
  FUN_144a2da94(param_1 + 0x15);
  FUN_144a2da94(param_1 + 0xd);
  FUN_144a2da94(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cfaf1f FUN_145cfaf1f body=94 status=ok
// SIG undefined FUN_145cfaf1f(void)

void FUN_145cfaf1f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145cfaf7e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad06ee0;
  puVar1[5] = &PTR_FUN_14ad071a0;
  *(undefined2 *)(puVar1 + 7) = 0x101;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined2 *)(puVar1 + 10) = 0;
  *(undefined4 *)(puVar1 + 0xd) = 1;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0xffffffffffffffff;
  return;
}



// FUNCTION 145cfaf7e FUN_145cfaf7e body=43 status=ok
// SIG undefined FUN_145cfaf7e(void)

undefined8 * FUN_145cfaf7e(undefined8 *param_1)

{
  FUN_14108ad62();
  *param_1 = &PTR_FUN_14ad333e0;
  param_1[5] = &PTR_FUN_14ad336a0;
  return param_1;
}



// FUNCTION 145cfafaa FUN_145cfafaa body=38 status=ok
// SIG undefined FUN_145cfafaa(void)

undefined8 FUN_145cfafaa(undefined8 param_1,int param_2)

{
  FUN_14152d9c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cfafd0 FUN_145cfafd0 body=155 status=ok
// SIG undefined FUN_145cfafd0(void)

void FUN_145cfafd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_14480f766(lVar1 + 0x60);
    }
    lVar2 = FUN_144a79464();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
      FUN_14480f766(lVar1 + 0x2a8);
    }
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_145cfb06c(param_1 + 0x1d0);
  return;
}



// FUNCTION 145cfb06c FUN_145cfb06c body=67 status=ok
// SIG undefined FUN_145cfb06c(void)

void FUN_145cfb06c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145cfb0b0(param_1);
    FUN_145c2da44(param_1,0);
    return;
  }
  FUN_145c2da44(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_146007020(param_1);
  return;
}



// FUNCTION 145cfb0b0 FUN_145cfb0b0 body=325 status=ok
// SIG undefined FUN_145cfb0b0(void)

void FUN_145cfb0b0(longlong *param_1)

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



// FUNCTION 145cfb1f6 FUN_145cfb1f6 body=40 status=ok
// SIG undefined FUN_145cfb1f6(void)

undefined8 FUN_145cfb1f6(undefined8 param_1,int param_2)

{
  FUN_145cfb21e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cfb21e FUN_145cfb21e body=97 status=ok
// SIG undefined FUN_145cfb21e(void)

void FUN_145cfb21e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b530f20;
  param_1[5] = &PTR_FUN_14b531270;
  param_1[0x52] = &PTR_LAB_14b5312b0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  if (param_1[0x171] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb3a5c(param_1 + 0x169);
  FUN_14584ba72(param_1);
  return;
}



// FUNCTION 145cfb28a FUN_145cfb28a body=126 status=ok
// SIG undefined FUN_145cfb28a(void)

undefined8 * FUN_145cfb28a(undefined8 *param_1)

{
  FUN_140307c5a();
  *param_1 = &PTR_FUN_14b5a74d0;
  param_1[0x19] = &PTR_FUN_14b5a7870;
  param_1[0x1a] = &PTR_FUN_14b5a78b0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000461c4000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  *(undefined2 *)(param_1 + 0x29) = 2;
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  return param_1;
}



// FUNCTION 145cfb308 FUN_145cfb308 body=37 status=ok
// SIG undefined FUN_145cfb308(void)

void FUN_145cfb308(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145cfb32e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145cfb32e FUN_145cfb32e body=75 status=ok
// SIG undefined FUN_145cfb32e(void)

ulonglong FUN_145cfb32e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar2 = FUN_1411c648e(lVar3);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    bVar1 = FUN_145cfb37a(lVar2,*(undefined4 *)(param_1 + 0xe0));
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145cfb37a FUN_145cfb37a body=25 status=ok
// SIG undefined FUN_145cfb37a(void)

undefined1 FUN_145cfb37a(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)FUN_14588298a();
  if (puVar2 == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}



// FUNCTION 145cfb394 FUN_145cfb394 body=119 status=ok
// SIG undefined FUN_145cfb394(void)

void FUN_145cfb394(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    lVar3 = FUN_140344898();
    lVar1 = *(longlong *)(param_2 + 0x28);
    if (((lVar1 != 0) &&
        (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30 && (*(longlong *)(lVar1 + 0xa58) != 0)))) {
      FUN_145cfb40c(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xa0);
  return;
}



// FUNCTION 145cfb40c FUN_145cfb40c body=279 status=ok
// SIG undefined FUN_145cfb40c(void)

void FUN_145cfb40c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cfb524();
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar1 = local_38;
    local_30 = 3;
    *local_38 = &PTR_LAB_149e020b0;
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
    local_38[2] = lVar3;
    *local_38 = &PTR_FUN_14b963100;
    local_38[3] = 0;
    FUN_14485c47a(local_38 + 3,param_2);
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    FUN_1448b6402(param_2 + 0x1ed0,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *(undefined8 *)(param_1 + 0xd8) = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfb524 FUN_145cfb524 body=422 status=ok
// SIG undefined FUN_145cfb524(void)

void FUN_145cfb524(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x1700), lVar1 != 0)) {
    local_90[0] = 0;
    local_68 = 0;
    FUN_1456bb102(local_90,param_2);
    FUN_1448729ea(lVar1 + 0xdb8,local_60,local_90);
    uVar4 = FUN_144a7ecd0(local_60);
    *(undefined4 *)(param_1 + 0xe0) = uVar4;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar3 = local_60;
      if (0x18 < local_48) {
        pppuVar3 = (undefined8 ***)local_60[0];
      }
      (*pcVar2)(pppuVar3);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    FUN_144a5ac3a(local_90);
    local_90[0] = 0;
    local_68 = 0;
    FUN_1456bb102(local_90,param_2);
    FUN_1448729ea(lVar1 + 0xe08,local_60,local_90);
    uVar4 = FUN_144a7ecd0(local_60);
    *(undefined4 *)(param_1 + 0xe4) = uVar4;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar3 = local_60;
      if (0x18 < local_48) {
        pppuVar3 = (undefined8 ***)local_60[0];
      }
      (*pcVar2)(pppuVar3);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    FUN_144a5ac3a(local_90);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfb6cc FUN_145cfb6cc body=322 status=ok
// SIG undefined FUN_145cfb6cc(void)

undefined4 * FUN_145cfb6cc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cfb930(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145cfb878(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    cVar3 = FUN_145cfb810(param_1,*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x8c));
    if (cVar3 == '\0') {
      uVar6 = (longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0xa0) - 1U;
      iVar5 = (int)uVar6;
      *(int *)((longlong)local_40 + 0x14) = iVar5;
      lVar7 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar7 = param_1 + 0x90;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar7 = param_1 + 0x90;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfb810 FUN_145cfb810 body=104 status=ok
// SIG undefined FUN_145cfb810(void)

undefined8 FUN_145cfb810(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (lVar2 == 0) {
    iVar4 = 2;
  }
  if (param_2 < 4) {
    iVar4 = 2;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0xa0))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xa0) = iVar4;
    FUN_145cfba40(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 145cfb878 FUN_145cfb878 body=184 status=ok
// SIG undefined FUN_145cfb878(void)

undefined8 FUN_145cfb878(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x8c) != 1) &&
     (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x8c))) {
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar5 = param_1;
      }
      do {
        plVar1 = (longlong *)(lVar5 + (longlong)iVar6 * 0x18);
        if (*plVar1 == *param_3) {
          puVar2 = (undefined8 *)plVar1[1];
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar1 = (int)*param_3;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
          *(int *)(plVar1 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
          FUN_145d48c9a(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145cfb930 FUN_145cfb930 body=271 status=ok
// SIG undefined FUN_145cfb930(void)

int * FUN_145cfb930(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar6 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar6 + 1;
    if (*(int *)(param_1 + 0x6c) == iVar6) {
      FUN_1489b2a10(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x70,1);
    lVar5 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar5 = param_1 + 0x70;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x88);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0x88) = iVar3;
    iVar4 = *(int *)(param_1 + 0x8c) + -1;
    *(int *)(param_1 + 0x8c) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 145cfba40 FUN_145cfba40 body=527 status=ok
// SIG undefined FUN_145cfba40(void)

void FUN_145cfba40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1446efa72(param_1 + 0x98,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0xa0);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0x90;
    uVar6 = 0;
    FUN_145cfbc50(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x98);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xa0) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0x70;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar5 = *(longlong *)(local_70 + 0x60);
        if (*(longlong *)(local_70 + 0x60) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0xa0) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x98);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x98);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cfbc50 FUN_145cfbc50 body=132 status=ok
// SIG undefined FUN_145cfbc50(void)

void FUN_145cfbc50(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 145cfbcd4 FUN_145cfbcd4 body=663 status=ok
// SIG undefined FUN_145cfbcd4(void)

void FUN_145cfbcd4(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x338))();
  uVar7 = extraout_XMM0_Da;
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x2e0))(param_1,1);
    cVar1 = (**(code **)(*param_1 + 0x338))(param_1);
    uVar7 = extraout_XMM0_Da_00;
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x308))(param_1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cadb848) {
        FUN_144b3d300(&DAT_14cadb848);
        if (DAT_14cadb848 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar4 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
          if (plVar4 == (longlong *)0x0) {
            DAT_14cadb840 = (int *)0x0;
          }
          else {
            DAT_14cadb840 = (int *)(**(code **)(*plVar4 + 0x68))(plVar4);
          }
          _Init_thread_footer(&DAT_14cadb848);
        }
      }
      *(bool *)(param_1 + 5) = *DAT_14cadb840 != 0;
      if (DAT_14cb0d2b0 != 0) {
        *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)(DAT_14cb0d2b0 + 0xf49);
      }
      uVar3 = DAT_14c872ce0;
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1446ddc76(&local_40,"GameUserSettings",1);
      uVar3 = FUN_142777728(uVar3,local_40,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      FUN_142777204(uVar3);
      uVar7 = (**(code **)(*param_1 + 0x2e0))(param_1,1);
    }
  }
  iVar5 = DAT_14cb0d280;
  iVar2 = (int)param_1[0x11];
  if ((iVar2 == 0) || (*(int *)((longlong)param_1 + 0x8c) == 0)) {
    if ((iVar2 != DAT_14cb0d27c) || (*(int *)((longlong)param_1 + 0x8c) != DAT_14cb0d280)) {
      *(int *)(param_1 + 0x11) = DAT_14cb0d27c;
      *(int *)((longlong)param_1 + 0x8c) = iVar5;
      uVar7 = FUN_145880944(param_1);
      iVar2 = (int)param_1[0x11];
      iVar5 = *(int *)((longlong)param_1 + 0x8c);
    }
    iVar6 = (int)param_1[0x14];
    *(int *)((longlong)param_1 + 0xa4) = iVar6;
    *(int *)(param_1 + 0x12) = iVar2;
    *(int *)((longlong)param_1 + 0x94) = iVar5;
  }
  else {
    iVar6 = (int)param_1[0x14];
  }
  if (iVar6 == 1) {
    uVar7 = FUN_141292270(uVar7,local_38);
    if ((int)param_1[0x14] == 1) {
      FUN_141292270(uVar7,local_38);
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((longlong)param_1 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0xcc);
  if (*(char *)((longlong)param_1 + 0x10c) == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
    }
  }
  *(int *)((longlong)param_1 + 0xb4) = (int)param_1[0x16];
  (**(code **)(*param_1 + 0x340))(param_1);
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cfbf84 FUN_145cfbf84 body=25 status=ok
// SIG undefined FUN_145cfbf84(void)

undefined8 FUN_145cfbf84(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}


