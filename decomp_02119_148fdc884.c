// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148fdc884 FUN_148fdc884 body=254 status=ok
// SIG undefined FUN_148fdc884(void)

undefined8
FUN_148fdc884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b403f60;
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
  *local_48 = &PTR_FUN_14ba5e610;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bc922(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdc984 FUN_148fdc984 body=248 status=ok
// SIG undefined FUN_148fdc984(void)

undefined8 FUN_148fdc984(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ba5e680;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(&DAT_14cadbe48,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdca7e FUN_148fdca7e body=248 status=ok
// SIG undefined FUN_148fdca7e(void)

undefined8 FUN_148fdca7e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ba5e6f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdcb78 FUN_148fdcb78 body=173 status=ok
// SIG undefined FUN_148fdcb78(void)

void FUN_148fdcb78(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0xc1) = 0;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    FUN_148ff6cfc(param_1 + 0x50);
    FUN_148ff6e46(param_1 + 0x50);
  }
  FUN_1443ccde0(param_1 + 0xd8);
  FUN_1443ccde0(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x2a0))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



// FUNCTION 148fdcc26 FUN_148fdcc26 body=338 status=ok
// SIG undefined FUN_148fdcc26(void)

undefined8 * FUN_148fdcc26(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [6];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5738) {
    FUN_144b3d300(&DAT_14cbf5738);
    if (DAT_14cbf5738 == -1) {
      FUN_1446f470e(&DAT_14cbf5730,L"CUSTOM",1);
      _Init_thread_footer(&DAT_14cbf5738);
    }
  }
  local_48[0] = 0;
  local_48[1] = 0;
  cVar2 = FUN_145e34e2c(param_3 + 0x28,DAT_14cbf5730);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*param_1 + 0x180))(param_1);
    local_48[2] = 0;
    plVar3 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_58);
    (**(code **)(*local_58 + 0x130))(local_58,param_2,local_48);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdcd7a FUN_148fdcd7a body=306 status=ok
// SIG undefined FUN_148fdcd7a(void)

longlong FUN_148fdcd7a(longlong param_1,uint *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar2 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x118);
    }
    uVar1 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & *param_2) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar4 = (uint *)(*(longlong *)(param_1 + 0xd8) + (longlong)(int)uVar1 * 0x18);
        if (*puVar4 == *param_2) goto LAB_148fdcd94;
        uVar1 = puVar4[4];
      } while (uVar1 != 0xffffffff);
    }
  }
  puVar4 = (uint *)0x0;
LAB_148fdcd94:
  puVar3 = puVar4 + 2;
  if (puVar4 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  if (param_3 == '\x01' && puVar3 == (uint *)0x0) {
    if (*(int *)(param_1 + 0x130) == *(int *)(param_1 + 0x15c)) {
      return 0;
    }
    lVar2 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x168);
    }
    uVar1 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x170) - 1U & *param_2) * 4);
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    while (puVar3 = (uint *)(*(longlong *)(param_1 + 0x128) + (longlong)(int)uVar1 * 0x18),
          *puVar3 != *param_2) {
      uVar1 = puVar3[4];
      if (uVar1 == 0xffffffff) {
        return 0;
      }
    }
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    puVar3 = puVar3 + 2;
  }
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  lVar2 = *(longlong *)puVar3;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 != 0) {
      FUN_1456cec3c(lVar2);
      return lVar2;
    }
    return 0;
  }
  return lVar2;
}



// FUNCTION 148fdceac FUN_148fdceac body=663 status=ok
// SIG undefined FUN_148fdceac(void)

void FUN_148fdceac(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 *local_88;
  undefined4 local_80;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  undefined8 uStack_58;
  byte local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[0x16] < 1) {
    local_60 = (longlong *)0x0;
    uStack_58 = 0;
    local_50 = 0;
    local_68 = &PTR_FUN_14a5af930;
    local_48 = 0;
    uStack_40 = 0;
    uVar6 = 0;
  }
  else {
    FUN_148fcdaa6(*(undefined8 *)(*(longlong *)param_1[0x15] + 0x70),&local_68,0);
    uVar6 = (ulonglong)local_50;
  }
  if ((&DAT_149fc1b6e)[uVar6] == '\x01') {
    if ((local_60 != (longlong *)0x0) && (cVar5 = (**(code **)(*local_60 + 0x28))(), cVar5 != '\0'))
    {
LAB_148fdcf39:
      if (*(longlong *)(param_2 + 0x58) != 0) {
        FUN_1443c1bde(param_2 + 0x78,DAT_14cbf56e8);
        (**(code **)(*param_1 + 0x180))(param_1);
        local_88 = (undefined8 *)0x0;
        plVar7 = (longlong *)FUN_1401e3228(&local_88);
        (**(code **)(*plVar7 + 0x40))(plVar7,&local_78);
        plVar7 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
        (**(code **)(**(longlong **)(param_2 + 0x58) + 0x18))
                  (*(longlong **)(param_2 + 0x58),&local_8c);
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,3,0x10);
        puVar3 = local_88;
        local_80 = 3;
        *local_88 = &PTR_LAB_14ba5f180;
        *(undefined4 *)(local_88 + 1) = local_8c;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_88[2] = lVar9;
        *local_88 = &PTR_FUN_14ba5f110;
        local_88[3] = 0;
        FUN_14485c47a(local_88 + 3,param_1);
        puVar3[4] = &LAB_148fde678;
        *(undefined4 *)(puVar3 + 5) = 0;
        uVar2 = *(undefined8 *)(param_2 + 0x58);
        uVar8 = FUN_14127b0d4(&local_68);
        (**(code **)(*plVar7 + 0x48))(plVar7,uVar8,uVar2,&local_88);
        FUN_1449db362(&local_88);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_70 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)local_70 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_70 + 0x10))(local_70);
            }
          }
        }
        goto LAB_148fdd0a2;
      }
    }
  }
  else if (((ulonglong)local_60 & 0xffffff) != 0) goto LAB_148fdcf39;
  local_78 = 0x9c;
  uStack_74 = 0;
  FUN_1443cd09a(param_1,param_2);
LAB_148fdd0a2:
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fdd144 FUN_148fdd144 body=214 status=ok
// SIG undefined FUN_148fdd144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148fdd144(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x68);
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
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a5af930;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x30)) {
  case 1:
    return;
  case 2:
    *(code **)(param_1 + 0x20) = switchD_1458da17c::caseD_0;
    *(undefined **)(param_1 + 0x28) = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x20) = 0x4053b5c6;
    return;
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fdd21a FUN_148fdd21a body=49 status=ok
// SIG undefined FUN_148fdd21a(void)

longlong * FUN_148fdd21a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f5b8a();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 148fdd24c FUN_148fdd24c body=229 status=ok
// SIG undefined FUN_148fdd24c(void)

longlong *
FUN_148fdd24c(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ba5e7d0;
  *(undefined4 *)(puVar3 + 1) = *param_4;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  FUN_148ff784e(puVar3 + 2,param_5);
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
  puVar3[4] = lVar5;
  *puVar3 = &PTR_FUN_14ba5e760;
  puVar3[5] = 0;
  FUN_14485c47a(puVar3 + 5,param_2);
  *(undefined4 *)(puVar3 + 7) = uVar1;
  puVar3[6] = uVar2;
  return param_1;
}



// FUNCTION 148fdd332 FUN_148fdd332 body=200 status=ok
// SIG undefined FUN_148fdd332(void)

longlong *
FUN_148fdd332(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ba5e8b0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_148ff784e(puVar3 + 1,param_4);
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
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14ba5e840;
  puVar3[4] = 0;
  FUN_14485c47a(puVar3 + 4,param_2);
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[5] = uVar2;
  return param_1;
}



// FUNCTION 148fdd3fa FUN_148fdd3fa body=104 status=ok
// SIG undefined FUN_148fdd3fa(void)

void FUN_148fdd3fa(void)

{
  FUN_148fdd462();
  FUN_148fdd4d6();
  FUN_148fdd54a();
  FUN_148fdd5be();
  FUN_148fdd632();
  FUN_148fdd6a6();
  FUN_148fdd71a();
  FUN_148fdd78e();
  FUN_148fdd802();
  FUN_148fdd876();
  FUN_148fdd8ea();
  FUN_148fdd95e();
  FUN_148fdd9d2();
  FUN_148fdda46();
  FUN_148fddaba();
  FUN_148fddb2e();
  FUN_148fddba2();
  FUN_148fddc16();
  FUN_148fddc8a();
  return;
}



// FUNCTION 148fdd462 FUN_148fdd462 body=114 status=ok
// SIG undefined FUN_148fdd462(void)

void FUN_148fdd462(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff7f2a(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd4d6 FUN_148fdd4d6 body=114 status=ok
// SIG undefined FUN_148fdd4d6(void)

void FUN_148fdd4d6(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff8292(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd54a FUN_148fdd54a body=114 status=ok
// SIG undefined FUN_148fdd54a(void)

void FUN_148fdd54a(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff8536(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd5be FUN_148fdd5be body=114 status=ok
// SIG undefined FUN_148fdd5be(void)

void FUN_148fdd5be(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff87b4(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd632 FUN_148fdd632 body=114 status=ok
// SIG undefined FUN_148fdd632(void)

void FUN_148fdd632(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff8a32(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd6a6 FUN_148fdd6a6 body=114 status=ok
// SIG undefined FUN_148fdd6a6(void)

void FUN_148fdd6a6(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff8d5c(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd71a FUN_148fdd71a body=114 status=ok
// SIG undefined FUN_148fdd71a(void)

void FUN_148fdd71a(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff908e(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd78e FUN_148fdd78e body=114 status=ok
// SIG undefined FUN_148fdd78e(void)

void FUN_148fdd78e(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff93b0(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd802 FUN_148fdd802 body=114 status=ok
// SIG undefined FUN_148fdd802(void)

void FUN_148fdd802(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff962a(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd876 FUN_148fdd876 body=114 status=ok
// SIG undefined FUN_148fdd876(void)

void FUN_148fdd876(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff98a4(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd8ea FUN_148fdd8ea body=114 status=ok
// SIG undefined FUN_148fdd8ea(void)

void FUN_148fdd8ea(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff9b1e(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd95e FUN_148fdd95e body=114 status=ok
// SIG undefined FUN_148fdd95e(void)

void FUN_148fdd95e(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ff9da0(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdd9d2 FUN_148fdd9d2 body=114 status=ok
// SIG undefined FUN_148fdd9d2(void)

void FUN_148fdd9d2(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ffa036(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdda46 FUN_148fdda46 body=114 status=ok
// SIG undefined FUN_148fdda46(void)

void FUN_148fdda46(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ffa2b4(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fddaba FUN_148fddaba body=114 status=ok
// SIG undefined FUN_148fddaba(void)

void FUN_148fddaba(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ffa532(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fddb2e FUN_148fddb2e body=114 status=ok
// SIG undefined FUN_148fddb2e(void)

void FUN_148fddb2e(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ffa7f8(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fddba2 FUN_148fddba2 body=114 status=ok
// SIG undefined FUN_148fddba2(void)

void FUN_148fddba2(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ffaa84(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fddc16 FUN_148fddc16 body=114 status=ok
// SIG undefined FUN_148fddc16(void)

void FUN_148fddc16(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ffad0e(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fddc8a FUN_148fddc8a body=114 status=ok
// SIG undefined FUN_148fddc8a(void)

void FUN_148fddc8a(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_148ffaf98(&local_18);
  iVar1 = DAT_14cbf5728;
  lVar2 = (longlong)(int)DAT_14cbf5728;
  DAT_14cbf5728 = DAT_14cbf5728 + 1;
  if (DAT_14cbf572c < DAT_14cbf5728) {
    FUN_148ff7f98(&DAT_14cbf5720,iVar1);
  }
  *(undefined8 *)(DAT_14cbf5720 + lVar2 * 8) = local_18;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fddcfe FUN_148fddcfe body=310 status=ok
// SIG undefined FUN_148fddcfe(void)

undefined8 FUN_148fddcfe(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
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
  plVar1 = (longlong *)(param_1 + 0x88);
  lVar2 = param_1 + 0x98;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar6 = *(int *)(param_1 + 0xb0);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar6) || (uStack_40 != lVar2)) {
    do {
      lVar5 = *local_70 + (longlong)iStack_54 * 0x80;
      if ((((*(longlong *)(lVar5 + 0x68) != 0) && (lVar5 = *(longlong *)(lVar5 + 0x70), lVar5 != 0))
          && (0 < *(int *)(lVar5 + 8))) || (iVar3 = FUN_148fe2c1e(), iVar3 == 4)) {
        uVar4 = 1;
        goto LAB_148fddd93;
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar6));
  }
  uVar4 = 0;
LAB_148fddd93:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148fdde36 FUN_148fdde36 body=96 status=ok
// SIG undefined FUN_148fdde36(void)

undefined4 FUN_148fdde36(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143e6d8ca(local_30);
  uVar1 = FUN_148fe2ad6(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdde98 FUN_148fdde98 body=291 status=ok
// SIG undefined FUN_148fdde98(void)

undefined8 FUN_148fdde98(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
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
  plVar1 = (longlong *)(param_1 + 0x88);
  lVar2 = param_1 + 0x98;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar5 = *(int *)(param_1 + 0xb0);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar5) || (uStack_40 != lVar2)) {
    do {
      lVar3 = FUN_148fe2ba4(*local_70 + (longlong)iStack_54 * 0x80 + 8);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) & 4) != 0)) {
        uVar4 = 1;
        goto LAB_148fddf2d;
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar5));
  }
  uVar4 = 0;
LAB_148fddf2d:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148fddfc8 FUN_148fddfc8 body=160 status=ok
// SIG undefined FUN_148fddfc8(void)

void FUN_148fddfc8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 != '\0') {
    local_40[0] = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_14156954a(local_40,cVar1);
    FUN_140056680(local_50,L"CrossplayPreference");
    FUN_148fdbffe(param_3,local_50,local_40);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140c3a2ac(local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fde06a FUN_148fde06a body=49 status=ok
// SIG undefined FUN_148fde06a(void)

longlong * FUN_148fde06a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a91644();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 148fde0a8 FUN_148fde0a8 body=24 status=ok
// SIG undefined FUN_148fde0a8(void)

bool FUN_148fde0a8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  return lVar1 != 0;
}



// FUNCTION 148fde0c8 FUN_148fde0c8 body=873 status=ok
// SIG undefined FUN_148fde0c8(void)

void FUN_148fde0c8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_11c [4];
  ulonglong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined **local_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar6 = (**(code **)(*param_1 + 0x2f8))();
  if (((*(char *)((longlong)param_1 + 0xc1) != cVar6) &&
      (*(char *)((longlong)param_1 + 0xc1) = cVar6, cVar6 != '\0')) &&
     (*(int *)((longlong)param_1 + 0x84) < (int)param_1[0xb])) {
    local_98 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_148fe8796(local_b8,param_1 + 10);
    local_e8 = (undefined **)0x100000000;
    uStack_d8 = 0xffffffff;
    local_d0 = 0;
    iVar10 = 0;
    local_e0 = local_a8;
    if (local_90 != 0) {
      FUN_1449c0562(&local_e8);
      iVar10 = local_90;
    }
    local_f8 = uStack_d8;
    uVar5 = local_f8;
    local_f0 = local_d0;
    local_ec = local_cc;
    local_108 = local_e8;
    local_100 = local_e0;
    local_f8._4_4_ = (int)((ulonglong)uStack_d8 >> 0x20);
    iVar7 = local_f8._4_4_;
    local_110 = local_b8;
    if ((local_f8._4_4_ != iVar10) || (local_f8 = uVar5, local_e0 != local_a8)) {
      do {
        local_f8 = uVar5;
        lVar3 = *local_110;
        lVar11 = (longlong)iVar7 * 0xe8;
        lVar8 = (longlong)*(int *)(lVar3 + lVar11 + 0x88);
        if (lVar8 < 1) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(*(longlong *)(lVar3 + lVar11 + 0x80) + -0x18 + lVar8 * 0x18);
        }
        if ((lVar8 == DAT_14cbf5700) && (lVar8 = lVar3 + lVar11, *(longlong *)(lVar8 + 0x60) != 0))
        {
          FUN_1443c3046();
          local_118 = CONCAT62(local_118._2_6_,1);
          local_118 = local_118 & 0xffffffff;
          (**(code **)(**(longlong **)(lVar8 + 0x60) + 0x18))
                    (*(longlong **)(lVar8 + 0x60),local_11c);
          (**(code **)(**(longlong **)(lVar8 + 0x60) + 0x10))
                    (*(longlong **)(lVar8 + 0x60),&local_130);
          uVar5 = local_130;
          if ((int)param_1[0x16] < 1) {
            local_e0 = (undefined1 *)0x0;
            uStack_d8 = 0;
            local_d0 = local_d0 & 0xffffff00;
            local_e8 = &PTR_FUN_14a5af930;
            local_c8 = 0;
            uStack_c0 = 0;
          }
          else {
            FUN_148fcdaa6(*(undefined8 *)(*(longlong *)param_1[0x15] + 0x70),&local_e8,0);
          }
          uVar9 = FUN_14127b0d4(&local_e8);
          lVar8 = FUN_1443cebc4(param_1,uVar9,uVar5,local_11c);
          local_e8 = &PTR_FUN_14a5af930;
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          local_e8 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(byte)local_d0])(&local_e0);
          plVar4 = local_128;
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_128 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          if (lVar8 == 0) {
            local_118 = 0x9c;
          }
          FUN_1443cd09a(param_1,lVar3 + lVar11 + 8,&local_118);
        }
        local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
        FUN_1449c0562(&local_108);
        iVar7 = local_f8._4_4_;
        uVar5 = local_f8;
      } while (local_110 != local_b8 || (local_100 != local_a8 || local_f8._4_4_ != iVar10));
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_145d5fb88(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fde432 FUN_148fde432 body=175 status=ok
// SIG undefined FUN_148fde432(void)

undefined8 FUN_148fde432(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148fde4e2 FUN_148fde4e2 body=129 status=ok
// SIG undefined FUN_148fde4e2(void)

int FUN_148fde4e2(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148ffb584(param_1,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*param_1 + lVar3 * 8 + 8),(void *)(*param_1 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + lVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 148fde564 FUN_148fde564 body=274 status=ok
// SIG undefined FUN_148fde564(void)

undefined8
FUN_148fde564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b42c990;
  *(undefined4 *)(local_50 + 1) = *param_5;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ba5f0a0;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fde686 FUN_148fde686 body=149 status=ok
// SIG undefined FUN_148fde686(void)

longlong FUN_148fde686(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar2 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x118);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & 0x11111111) * 4);
    if (iVar3 != -1) {
      while (piVar1 = (int *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar3 * 0x18),
            *piVar1 != 0x11111111) {
        iVar3 = piVar1[4];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if ((longlong *)(piVar1 + 2) == (longlong *)0x0 || piVar1 == (int *)0x0) {
        return 0;
      }
      lVar2 = *(longlong *)(piVar1 + 2);
      if (lVar2 != 0) {
        if (param_2 != '\0') {
          return lVar2;
        }
        if (*(char *)(lVar2 + 0x227) == '\0') {
          return lVar2;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148fde71b FUN_148fde71b body=175 status=ok
// SIG undefined FUN_148fde71b(void)

undefined8 FUN_148fde71b(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148fde7cc FUN_148fde7cc body=274 status=ok
// SIG undefined FUN_148fde7cc(void)

undefined8
FUN_148fde7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ba5f340;
  local_50[1] = *param_5;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ba5f2d0;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148fe99d8(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fde8e0 FUN_148fde8e0 body=274 status=ok
// SIG undefined FUN_148fde8e0(void)

undefined8
FUN_148fde8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ba5f420;
  local_50[1] = *param_5;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ba5f3b0;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fde9f4 FUN_148fde9f4 body=274 status=ok
// SIG undefined FUN_148fde9f4(void)

undefined8
FUN_148fde9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ba5f500;
  local_50[1] = *param_5;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ba5f490;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148ffc974(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdeb08 FUN_148fdeb08 body=254 status=ok
// SIG undefined FUN_148fdeb08(void)

undefined8
FUN_148fdeb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e35290;
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
  *local_48 = &PTR_FUN_14ba5f570;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdec08 FUN_148fdec08 body=211 status=ok
// SIG undefined FUN_148fdec08(void)

undefined4 FUN_148fdec08(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  uVar5 = FUN_140988638(&local_40,L"SOCIAL",1);
  if ((char)uVar5 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x90);
    if (lVar2 != 0) {
      cVar4 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))(lVar2 + 0x28,param_2,local_40,param_4);
      if (cVar4 != '\0') goto LAB_148fdecb5;
    }
    uVar3 = local_40;
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x80);
      plVar1 = plVar6 + *(int *)(param_1 + 0x88);
      do {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          cVar4 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))(lVar2 + 0x28,param_2,uVar3,param_4)
          ;
          if (cVar4 != '\0') break;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
LAB_148fdecb5:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdecf8 FUN_148fdecf8 body=231 status=ok
// SIG undefined FUN_148fdecf8(void)

undefined8 * FUN_148fdecf8(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_145b138ac();
  lVar3 = plVar1[0x22];
  uVar4 = extraout_XMM0_Da;
  if (lVar3 == 0) {
    uVar4 = (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
  }
  plVar1 = (longlong *)FUN_148fdc7e6(uVar4,param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,local_38);
    if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar2) == local_38[0]) {
          (**(code **)(*plVar1 + 0x198))(plVar1,local_38);
          FUN_144a882a8(param_1,local_38,&DAT_149e01f60);
          if (local_38[0] != 0) {
            FUN_1400020a8();
          }
          goto LAB_148fded87;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(lVar3 + 0x30) * 8 != lVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_148fded87:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdede0 FUN_148fdede0 body=93 status=ok
// SIG undefined FUN_148fdede0(void)

longlong FUN_148fdede0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_145b138ac();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
  }
  if ((longlong)*(int *)(lVar3 + 0x58) != 0) {
    lVar2 = *(longlong *)(lVar3 + 0x50);
    lVar3 = (longlong)*(int *)(lVar3 + 0x58) * 0x58;
    do {
      if (*(longlong *)(lVar2 + 0x20) == *param_1) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x58;
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 148fdee4a FUN_148fdee4a body=145 status=ok
// SIG undefined FUN_148fdee4a(void)

bool FUN_148fdee4a(longlong param_1,undefined1 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  bVar4 = true;
  while( true ) {
    plVar2 = (longlong *)FUN_148fdc7e6();
    if (plVar2 == (longlong *)0x0) {
      local_38 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_38);
    }
    if (local_38 == param_1) break;
    uVar3 = 1;
    bVar1 = !bVar4;
    bVar4 = false;
    if (bVar1) {
LAB_148fdeeb4:
      if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return local_38 == param_1;
    }
  }
  *param_2 = uVar3;
  goto LAB_148fdeeb4;
}



// FUNCTION 148fdeedc FUN_148fdeedc body=324 status=ok
// SIG undefined FUN_148fdeedc(void)

void FUN_148fdeedc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14485c47a(param_1 + 0xdc);
  lVar1 = FUN_149009176(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x68) = lVar1;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_14120add8();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      goto LAB_148fdef5d;
    }
  }
  uVar3 = 0;
LAB_148fdef5d:
  lVar1 = FUN_148fdf021(param_1,uVar3);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  local_48 = 0;
  FUN_14485c47a(&local_48,param_1);
  local_50 = *(undefined8 *)(param_1 + 0xdc);
  local_40 = (code *)&local_50;
  local_38 = &local_48;
  FUN_148ffdb6a(local_2c,&local_40);
  local_40 = FUN_1443d027e;
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_148fdf0d2(param_2 + 0xe8,&local_48,param_1,&local_40);
  FUN_1443d027e(param_1,*(undefined4 *)(param_2 + 0xe0),0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdf021 FUN_148fdf021 body=175 status=ok
// SIG undefined FUN_148fdf021(void)

undefined8 FUN_148fdf021(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148fdf0d2 FUN_148fdf0d2 body=254 status=ok
// SIG undefined FUN_148fdf0d2(void)

undefined8
FUN_148fdf0d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14aac28e0;
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
  *local_48 = &PTR_FUN_14ba5f7c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14190537c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdf1d2 FUN_148fdf1d2 body=380 status=ok
// SIG undefined FUN_148fdf1d2(void)

undefined8 FUN_148fdf1d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_60;
  longlong *local_58;
  undefined **local_50;
  uint local_48;
  undefined4 uStack_44;
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = 0;
  plVar4 = (longlong *)FUN_148fcd308(param_1,0);
  if (plVar4 == (longlong *)0x0) goto LAB_148fdf1fc;
  (**(code **)(*plVar4 + 200))(plVar4,&local_60);
  uVar5 = 0;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_50,0);
  if (local_60 != (longlong *)0x0) {
    if ((&DAT_149fc1b6e)[local_38] == '\x01') {
      if (((longlong *)CONCAT44(uStack_44,local_48) != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x28))(), cVar3 != '\0'))
      {
LAB_148fdf28c:
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        uVar5 = FUN_14127b0d4(&local_50);
        (**(code **)(*local_60 + 0x68))(local_60,uVar5,&local_78);
        plVar4 = plStack_70;
        uVar5 = local_78;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        goto LAB_148fdf2de;
      }
    }
    else if ((local_48 & 0xffffff) != 0) goto LAB_148fdf28c;
    uVar5 = 0;
  }
LAB_148fdf2de:
  local_50 = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_148fdf1fc:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148fdf350 FUN_148fdf350 body=109 status=ok
// SIG undefined FUN_148fdf350(void)

void FUN_148fdf350(longlong *param_1)

{
  if ((char)param_1[0xd] == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    FUN_1411632c2(param_1 + 3);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = -0x100000000;
  }
  return;
}



// FUNCTION 148fdf3d6 FUN_148fdf3d6 body=44 status=ok
// SIG undefined FUN_148fdf3d6(void)

void FUN_148fdf3d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_148fcd00c();
  if (lVar1 != 0) {
    FUN_148fd2ca2(lVar1,param_3);
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148fdf402 FUN_148fdf402 body=689 status=ok
// SIG undefined FUN_148fdf402(void)

void FUN_148fdf402(longlong param_1,undefined1 param_2,char param_3,longlong param_4,
                  undefined8 *param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  longlong local_128;
  undefined1 local_120;
  undefined **local_118;
  undefined1 local_110 [16];
  byte local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_3 != '\0') {
    if ((&DAT_149fc1b6e)[*(byte *)(param_4 + 0x18)] == '\x01') {
      if ((*(longlong **)(param_4 + 8) == (longlong *)0x0) ||
         (cVar1 = (**(code **)(**(longlong **)(param_4 + 8) + 0x28))(), cVar1 == '\0'))
      goto LAB_148fdf629;
    }
    else if ((*(uint *)(param_4 + 8) & 0xffffff) == 0) goto LAB_148fdf629;
    local_118 = &PTR_FUN_14a184370;
    local_100 = *(byte *)(param_5 + 3);
    local_128 = param_1;
    local_120 = param_2;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_100])(local_110,param_5 + 1);
    local_118 = &PTR_FUN_14a5af930;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = *param_6;
    local_d8[0] = 0;
    if (local_e8 != 0) {
      plVar2 = param_6 + 4;
      if ((longlong *)param_6[2] != (longlong *)0x0) {
        plVar2 = (longlong *)param_6[2];
      }
      (**(code **)*plVar2)(plVar2,local_d8);
    }
    local_a8[0] = (code *)0x0;
    plVar2 = (longlong *)FUN_14001cc68(0x90,0x10);
    *plVar2 = (longlong)&PTR_FUN_14ba607d0;
    *(undefined1 *)(plVar2 + 3) = local_120;
    plVar2[2] = local_128;
    plVar2[4] = (longlong)&PTR_FUN_14a184370;
    *(byte *)(plVar2 + 7) = local_100;
    local_98 = plVar2;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_100])(plVar2 + 5,local_110);
    plVar2[4] = (longlong)&PTR_FUN_14a5af930;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = local_e8;
    plVar2[0xc] = local_d8[0];
    local_d8[0] = 0;
    *(undefined4 *)(plVar2 + 0x10) = local_b8;
    *(undefined4 *)((longlong)plVar2 + 0x84) = uStack_b4;
    *(undefined4 *)(plVar2 + 0x11) = uStack_b0;
    *(undefined4 *)((longlong)plVar2 + 0x8c) = uStack_ac;
    *(undefined4 *)(plVar2 + 0xe) = local_c8;
    *(undefined4 *)((longlong)plVar2 + 0x74) = uStack_c4;
    *(undefined4 *)(plVar2 + 0xf) = uStack_c0;
    *(undefined4 *)((longlong)plVar2 + 0x7c) = uStack_bc;
    if (local_e8 != 0) {
      local_e8 = 0;
    }
    if (plVar2 != (longlong *)&DAT_fffffffffffffff0) {
      local_a8[0] = FUN_1443dde6a;
    }
    local_138 = 1;
    FUN_1443d067e(param_1,param_4,0,local_a8);
    if (local_a8[0] != (code *)0x0) {
      plVar2 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar2 = local_88;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1443d30ba(&local_128);
  }
LAB_148fdf629:
  *param_5 = &PTR_FUN_14a5af930;
  if (param_5[4] != 0) {
    FUN_1400020a8();
  }
  *param_5 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_5 + 3)])(param_5 + 1);
  if (*param_6 != 0) {
    plVar2 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fdf6b4 FUN_148fdf6b4 body=239 status=ok
// SIG undefined FUN_148fdf6b4(void)

longlong *
FUN_148fdf6b4(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,0xb,0x10);
  *(undefined4 *)(param_1 + 1) = 0xb;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ba5f8a0;
  FUN_148ffe776(puVar3 + 2,param_4,param_5,param_6);
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
  puVar3[0x12] = lVar5;
  *puVar3 = &PTR_FUN_14ba5f830;
  puVar3[0x13] = 0;
  FUN_14485c47a(puVar3 + 0x13,param_2);
  *(undefined4 *)(puVar3 + 0x15) = uVar1;
  puVar3[0x14] = uVar2;
  return param_1;
}



// FUNCTION 148fdf7a4 FUN_148fdf7a4 body=155 status=ok
// SIG undefined FUN_148fdf7a4(void)

void FUN_148fdf7a4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148ffe9f6();
  FUN_148ffea96(&local_40,param_1,param_2);
  (**(code **)(*local_40 + 0x10))(local_40,param_3,param_4);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdf856 FUN_148fdf856 body=177 status=ok
// SIG undefined FUN_148fdf856(void)

longlong * FUN_148fdf856(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ba5bca0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ba5fbf0;
  lVar2 = *param_2;
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,puVar1 + 6);
  }
  return param_1;
}



// FUNCTION 148fdf908 FUN_148fdf908 body=132 status=ok
// SIG undefined FUN_148fdf908(void)

undefined8 FUN_148fdf908(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_148fcf75e(param_2,param_3);
  if (iVar2 == 3) {
    FUN_149001c18(param_1 + 0x3b,param_2,param_3);
    uVar3 = 1;
  }
  else {
    cVar1 = FUN_148fcefaa(param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3);
      if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148fdf989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 148fdf98c FUN_148fdf98c body=240 status=ok
// SIG undefined FUN_148fdf98c(void)

longlong *
FUN_148fdf98c(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ba5fd40;
  *(undefined1 *)(puVar3 + 1) = *param_4;
  puVar3[2] = 0;
  puVar3[2] = *param_5;
  *param_5 = 0;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)((longlong)param_5 + 0xc);
  param_5[1] = 0;
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
  puVar3[4] = lVar5;
  *puVar3 = &PTR_FUN_14ba5fcd0;
  puVar3[5] = 0;
  FUN_14485c47a(puVar3 + 5,param_2);
  *(undefined4 *)(puVar3 + 7) = uVar1;
  puVar3[6] = uVar2;
  return param_1;
}



// FUNCTION 148fdfa7c FUN_148fdfa7c body=734 status=ok
// SIG undefined FUN_148fdfa7c(void)

void FUN_148fdfa7c(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6,undefined1 param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((char)param_3 != '\0') {
    local_d8 = param_7;
    local_d0 = (void *)0x0;
    local_c8 = *(int *)(param_5 + 1);
    lVar7 = (longlong)local_c8;
    pvVar3 = (void *)*param_5;
    local_e0 = param_1;
    if (lVar7 == 0) {
      local_c4 = 0;
    }
    else {
      FUN_1446dd670(&local_d0,local_c8,0);
      memcpy(local_d0,pvVar3,lVar7 * 2);
    }
    local_88[0] = (code *)0x0;
    local_c0 = param_2;
    plVar6 = (longlong *)FUN_14001cc68(0x30,8);
    pvVar3 = local_d0;
    *plVar6 = (longlong)&PTR_FUN_14ba60850;
    *(undefined1 *)(plVar6 + 2) = local_d8;
    plVar6[1] = (longlong)local_e0;
    plVar6[3] = 0;
    lVar7 = (longlong)local_c8;
    *(int *)(plVar6 + 4) = local_c8;
    local_78 = plVar6;
    if (lVar7 == 0) {
      *(undefined4 *)((longlong)plVar6 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(plVar6 + 3,local_c8,0);
      memcpy((void *)plVar6[3],pvVar3,lVar7 * 2);
    }
    *(undefined4 *)(plVar6 + 5) = local_c0;
    if (plVar6 != (longlong *)&DAT_fffffffffffffff8) {
      local_88[0] = FUN_1443de6e0;
    }
    plVar6 = *(longlong **)(param_4 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_148fdfbe6:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_148fdfbe6;
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar8);
    }
    local_b0 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_b0 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = 0;
    uStack_90 = 0;
    local_e8 = CONCAT71(local_e8._1_7_,1);
    local_a8 = plVar6;
    FUN_1443d067e(param_1,&local_b8,param_7,local_88);
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
    if (plVar6 != (longlong *)0x0) {
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
    if (local_88[0] != (code *)0x0) {
      plVar6 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar6 = local_68;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_d0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_e8 = param_6;
  (**(code **)(*param_1 + 0x2f0))(param_1,param_4,param_8,param_3);
  if (*param_8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdfd76 FUN_148fdfd76 body=3325 status=ok
// SIG undefined FUN_148fdfd76(void)

void FUN_148fdfd76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong unaff_RBP;
  longlong lVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = FUN_14479d2ce(param_1 + 0xdc);
  lVar4 = DAT_14cbf5710;
  if (lVar8 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(undefined4 *)(lVar8 + 0xe0);
  }
  lVar8 = (longlong)DAT_14cbf5718;
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      uVar3 = *(undefined1 *)(lVar4 + lVar11);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),uVar3);
      FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_78,unaff_RBP & 0xffffffff);
      if ((&DAT_149fc1b6e)[local_60] == '\x01') {
        if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
           (cVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar7 != '\0'
           )) {
LAB_148fdfede:
          local_b4 = uVar12;
          plVar9 = (longlong *)FUN_148fcd308(param_1,unaff_RBP & 0xffffffff);
          (**(code **)(*plVar9 + 0x28))(plVar9,&local_88);
          plVar13 = local_88;
          local_b0 = plVar9;
          if (local_88 != (longlong *)0x0) {
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5fe90;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5fe20;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe0a74;
            (**(code **)(*plVar13 + 200))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5ff70;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5ff00;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_1443d17c4;
            (**(code **)(*plVar13 + 0x148))(plVar13,local_a0,local_b4,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5fe90;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5fe20;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe0c02;
            (**(code **)(*plVar13 + 0x48))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5fe90;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5fe20;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe0dda;
            (**(code **)(*plVar13 + 0x68))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5fe90;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5fe20;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe0fb2;
            (**(code **)(*plVar13 + 0x88))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5fe90;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5fe20;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe0fb2;
            (**(code **)(*plVar13 + 0xa8))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5ff70;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5ff00;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_1443d19b0;
            (**(code **)(*plVar13 + 0x168))(plVar13,local_a0,local_b4,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5ff70;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5ff00;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_1443d1c0e;
            (**(code **)(*plVar13 + 0x188))(plVar13,local_a0,local_b4,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba60050;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba5ffe0;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            puVar5[4] = FUN_148fe1140;
            *(undefined4 *)(puVar5 + 5) = 0;
            (**(code **)(*plVar13 + 0x240))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
          }
          plVar9 = local_80;
          plVar13 = local_b0;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          (**(code **)(*plVar13 + 0x40))(plVar13,&local_88);
          plVar9 = local_88;
          if (local_88 != (longlong *)0x0) {
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba5e4c0;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba600c0;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe13c6;
            (**(code **)(*plVar9 + 0x2d8))(plVar9,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba601a0;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba60130;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe1668;
            (**(code **)(*plVar13 + 0x2f8))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba60280;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba60210;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            *(undefined4 *)(puVar5 + 5) = 0;
            puVar5[4] = FUN_148fe1828;
            (**(code **)(*plVar13 + 0x3d8))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
            local_a8 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba60360;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba602f0;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            puVar5[4] = FUN_148fe1a5e;
            *(undefined4 *)(puVar5 + 5) = 0;
            (**(code **)(*local_a8 + 0x3f8))(local_a8,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar13 = local_b0;
          }
          plVar9 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          (**(code **)(*plVar13 + 200))(plVar13,&local_88);
          plVar13 = local_88;
          if (local_88 != (longlong *)0x0) {
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba60440;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar10;
            *local_98 = &PTR_FUN_14ba603d0;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            puVar5[4] = FUN_1443d1eba;
            *(undefined4 *)(puVar5 + 5) = 0;
            (**(code **)(*plVar13 + 0x28))(plVar13,local_a0,&local_98);
            FUN_1449db362(&local_98);
          }
          plVar13 = local_80;
          uVar12 = local_b4;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_80 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              uVar12 = local_b4;
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                uVar12 = local_b4;
              }
            }
          }
        }
      }
      else if ((local_70 & 0xffffff) != 0) goto LAB_148fdfede;
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_1443d21a8(param_1);
  }
  if (*(char *)(param_1 + 0x61) == '\x01') {
    FUN_148fe1cac(param_1);
  }
  if (*(char *)(param_1 + 0x62) == '\x01') {
    FUN_148fe1f0c(param_1);
  }
  FUN_140898514(param_1 + 0x148,1);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe0a74 FUN_148fe0a74 body=396 status=ok
// SIG undefined FUN_148fe0a74(void)

void FUN_148fe0a74(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_78,param_4);
  uVar6 = FUN_14127b0d4(&local_78);
  cVar4 = (**(code **)*param_2)(param_2,uVar6);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  if (cVar4 != '\0') {
    plVar8 = *(longlong **)(param_3 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_148fe0b3a:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_148fe0b3a;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    local_70 = 0;
    if (plVar8 != (longlong *)0x0) {
      local_70 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_60 = 0;
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = plVar8;
    lVar7 = FUN_148fcd00c(param_1,&local_78);
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
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
    if (lVar7 != 0) {
      FUN_1443d31da(lVar7,param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe0c02 FUN_148fe0c02 body=471 status=ok
// SIG undefined FUN_148fe0c02(void)

void FUN_148fe0c02(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_88 [2];
  undefined ***local_78;
  byte local_70;
  undefined **local_68;
  longlong local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),local_88,param_4);
  uVar6 = FUN_14127b0d4(local_88);
  cVar4 = (**(code **)*param_2)(param_2,uVar6);
  local_88[0] = &PTR_FUN_14a5af930;
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
  if (cVar4 != '\0') {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14ba60810;
    local_88[0] = (undefined **)FUN_1443de17a;
    plVar8 = *(longlong **)(param_3 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_148fe0cec:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_148fe0cec;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    local_b0 = 0;
    if (plVar8 != (longlong *)0x0) {
      local_b0 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = 0;
    uStack_90 = 0;
    local_c8 = 1;
    local_a8 = plVar8;
    local_60 = param_1;
    local_58 = (char)param_4;
    FUN_1443d067e(param_1,&local_b8,param_4,local_88);
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
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
    if (local_88[0] != (undefined **)0x0) {
      pppuVar7 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar7 = &local_68;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe0dda FUN_148fe0dda body=471 status=ok
// SIG undefined FUN_148fe0dda(void)

void FUN_148fe0dda(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_88 [2];
  undefined ***local_78;
  byte local_70;
  undefined **local_68;
  longlong local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),local_88,param_4);
  uVar6 = FUN_14127b0d4(local_88);
  cVar4 = (**(code **)*param_2)(param_2,uVar6);
  local_88[0] = &PTR_FUN_14a5af930;
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
  if (cVar4 != '\0') {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14ba60830;
    local_88[0] = (undefined **)FUN_1443de42c;
    plVar8 = *(longlong **)(param_3 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_148fe0ec4:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_148fe0ec4;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    local_b0 = 0;
    if (plVar8 != (longlong *)0x0) {
      local_b0 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = 0;
    uStack_90 = 0;
    local_c8 = 1;
    local_a8 = plVar8;
    local_60 = param_1;
    local_58 = (char)param_4;
    FUN_1443d067e(param_1,&local_b8,param_4,local_88);
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
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
    if (local_88[0] != (undefined **)0x0) {
      pppuVar7 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar7 = &local_68;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe0fb2 FUN_148fe0fb2 body=396 status=ok
// SIG undefined FUN_148fe0fb2(void)

void FUN_148fe0fb2(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_78,param_4);
  uVar6 = FUN_14127b0d4(&local_78);
  cVar4 = (**(code **)*param_2)(param_2,uVar6);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  if (cVar4 != '\0') {
    plVar8 = *(longlong **)(param_3 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_148fe1078:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_148fe1078;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    local_70 = 0;
    if (plVar8 != (longlong *)0x0) {
      local_70 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_60 = 0;
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = plVar8;
    lVar7 = FUN_148fcd00c(param_1,&local_78);
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
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
    if (lVar7 != 0) {
      FUN_1443d311e(lVar7,param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe1140 FUN_148fe1140 body=644 status=ok
// SIG undefined FUN_148fe1140(void)

void FUN_148fe1140(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_e8;
  longlong *local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  byte local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined **local_a8 [2];
  longlong *local_98;
  byte local_90;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),local_a8,param_4);
  uVar6 = FUN_14127b0d4(local_a8);
  cVar5 = (**(code **)*param_2)(param_2,uVar6);
  local_a8[0] = &PTR_FUN_14a5af930;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  local_a8[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])();
  if ((cVar5 != '\0') && ((longlong)(int)param_3[1] != 0)) {
    plVar9 = (longlong *)*param_3;
    plVar8 = plVar9 + (longlong)(int)param_3[1] * 2;
    do {
      lVar3 = *plVar9;
      plVar4 = (longlong *)plVar9[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_a8[0] = (undefined **)0x0;
      local_98 = (longlong *)0x0;
      local_98 = (longlong *)FUN_14001cc68(0x28,8);
      *local_98 = (longlong)&PTR_FUN_14ba607b0;
      local_98[1] = param_1;
      local_98[2] = lVar3;
      local_98[3] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      *(char *)(local_98 + 4) = (char)param_4;
      if (local_98 != (longlong *)&DAT_fffffffffffffff8) {
        local_a8[0] = (undefined **)FUN_1443ddd56;
      }
      (**(code **)(*(longlong *)*plVar9 + 8))((longlong *)*plVar9,&local_e8);
      local_d0 = local_e8;
      local_c8 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      local_c0 = 0;
      local_d8 = &PTR_FUN_14a5af930;
      local_b8 = 0;
      uStack_b0 = 0;
      local_f8 = 1;
      FUN_1443d067e(param_1,&local_d8,param_4,local_a8);
      local_d8 = &PTR_FUN_14a5af930;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      local_d8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])(&local_d0);
      plVar7 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (local_a8[0] != (undefined **)0x0) {
        plVar7 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar7 = local_88;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe13c6 FUN_148fe13c6 body=672 status=ok
// SIG undefined FUN_148fe13c6(void)

void FUN_148fe13c6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  longlong *local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_88;
  longlong *local_80;
  undefined ***local_78;
  byte local_70;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_88,0);
  cVar4 = FUN_14127b142(&local_88,param_2);
  local_88 = &PTR_FUN_14a5af930;
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
  if (cVar4 != '\0') {
    plVar7 = (longlong *)param_3[2];
    if (plVar7 == (longlong *)0x0) {
LAB_148fe148a:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_148fe148a;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
    }
    local_88 = (undefined **)0x0;
    if (plVar7 != (longlong *)0x0) {
      local_88 = (undefined **)param_3[1];
    }
    local_80 = plVar7;
    FUN_149004c9e(param_1 + 0xe8,&local_b8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)();
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    plVar7 = (longlong *)param_3[2];
    if (plVar7 == (longlong *)0x0) {
LAB_148fe14f3:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_148fe14f3;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
    }
    local_58 = 0;
    if (plVar7 != (longlong *)0x0) {
      local_58 = param_3[1];
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14ba60870;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_88 = (undefined **)FUN_1443de9ee;
    local_60 = param_1;
    local_50 = plVar7;
    (**(code **)(*param_3 + 0x20))(param_3,&local_c8);
    local_b0 = local_c8;
    local_a8 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = 0;
    uStack_90 = 0;
    local_d8 = 1;
    FUN_1443d067e(param_1,&local_b8,0,&local_88);
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    if (local_88 != (undefined **)0x0) {
      pppuVar6 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar6 = &local_68;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    if (plVar7 != (longlong *)0x0) {
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
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe1668 FUN_148fe1668 body=447 status=ok
// SIG undefined FUN_148fe1668(void)

void FUN_148fe1668(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong *local_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_70,0);
  cVar4 = FUN_14127b142(&local_70,param_2);
  local_70 = &PTR_FUN_14a5af930;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])();
  if (cVar4 != '\0') {
    local_78 = param_3[2];
    if (local_78 == 0) {
LAB_148fe1726:
      local_78 = 0;
    }
    else {
      iVar5 = *(int *)(local_78 + 8);
      do {
        if (iVar5 == 0) goto LAB_148fe1726;
        LOCK();
        iVar3 = *(int *)(local_78 + 8);
        bVar7 = iVar5 == iVar3;
        if (bVar7) {
          *(int *)(local_78 + 8) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar7);
    }
    local_80 = 0;
    if (local_78 != 0) {
      local_80 = param_3[1];
    }
    FUN_148fe269e(param_1 + 0xe8);
    (**(code **)(*param_3 + 0x20))(param_3,&local_90);
    local_68 = local_90;
    local_60 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
    }
    local_58 = 0;
    local_70 = &PTR_FUN_14a5af930;
    local_50 = 0;
    uStack_48 = 0;
    lVar6 = FUN_148fcd00c(param_1,&local_70);
    local_70 = &PTR_FUN_14a5af930;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_70 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    if (lVar6 != 0) {
      FUN_148fe2826(lVar6,param_3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe1828 FUN_148fe1828 body=565 status=ok
// SIG undefined FUN_148fe1828(void)

void FUN_148fe1828(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_88 [2];
  undefined ***local_78;
  byte local_70;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),local_88,0);
  cVar4 = FUN_14127b142(local_88);
  local_88[0] = &PTR_FUN_14a5af930;
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
  if (cVar4 != '\0') {
    plVar7 = *(longlong **)(param_5 + 0x10);
    if (plVar7 == (longlong *)0x0) {
LAB_148fe18db:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_148fe18db;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    local_58 = 0;
    if (plVar7 != (longlong *)0x0) {
      local_58 = *(undefined8 *)(param_5 + 8);
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14ba608b0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_88[0] = (undefined **)FUN_1443dedc4;
    plVar8 = *(longlong **)(param_4 + 0x10);
    if (plVar8 == (longlong *)0x0) {
LAB_148fe194c:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) goto LAB_148fe194c;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    local_b0 = 0;
    if (plVar8 != (longlong *)0x0) {
      local_b0 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = 0;
    uStack_90 = 0;
    local_c8 = 1;
    local_a8 = plVar8;
    local_60 = param_1;
    local_50 = plVar7;
    FUN_1443d067e(param_1,&local_b8,0,local_88);
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
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
    if (local_88[0] != (undefined **)0x0) {
      pppuVar6 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar6 = &local_68;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
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



// FUNCTION 148fe1a5e FUN_148fe1a5e body=589 status=ok
// SIG undefined FUN_148fe1a5e(void)

void FUN_148fe1a5e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_88 [2];
  longlong *local_78;
  byte local_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),local_88,0);
  cVar4 = FUN_14127b142(local_88,param_2);
  local_88[0] = &PTR_FUN_14a5af930;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_88[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
  if (cVar4 != '\0') {
    plVar7 = *(longlong **)(param_5 + 0x10);
    if (plVar7 == (longlong *)0x0) {
LAB_148fe1b11:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_148fe1b11;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = *(longlong *)(param_5 + 8);
    }
    local_88[0] = (undefined **)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x28,8);
    *local_78 = (longlong)&PTR_FUN_14ba608d0;
    local_78[1] = param_1;
    local_78[2] = lVar8;
    local_78[3] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)(local_78 + 4) = param_6;
    if (local_78 != (longlong *)&DAT_fffffffffffffff8) {
      local_88[0] = (undefined **)FUN_1443deeea;
    }
    plVar6 = *(longlong **)(param_4 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_148fe1b9a:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_148fe1b9a;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar9);
    }
    local_b0 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_b0 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_a0 = 0;
    local_b8 = &PTR_FUN_14a5af930;
    local_98 = 0;
    uStack_90 = 0;
    local_c8 = 1;
    local_a8 = plVar6;
    FUN_1443d067e(param_1,&local_b8,0,local_88);
    local_b8 = &PTR_FUN_14a5af930;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a0])(&local_b0);
    if (plVar6 != (longlong *)0x0) {
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
    if (local_88[0] != (undefined **)0x0) {
      plVar6 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar6 = local_68;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
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



// FUNCTION 148fe1cac FUN_148fe1cac body=606 status=ok
// SIG undefined FUN_148fe1cac(void)

void FUN_148fe1cac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong unaff_RBP;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  lVar4 = DAT_14cbf5710;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar11 = (longlong)DAT_14cbf5718;
  if (lVar11 != 0) {
    lVar12 = 0;
    do {
      uVar3 = *(undefined1 *)(lVar4 + lVar12);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),uVar3);
      FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_78,unaff_RBP & 0xffffffff);
      if ((&DAT_149fc1b6e)[local_60] == '\x01') {
        if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
           (cVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar7 != '\0'
           )) {
LAB_148fe1dac:
          plVar8 = (longlong *)FUN_148fcd308(param_1,unaff_RBP & 0xffffffff);
          (**(code **)(*plVar8 + 0x28))(plVar8,&local_88);
          if (local_88 != (longlong *)0x0) {
            local_a8 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba60600;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar9 == 0) {
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar9;
            *local_98 = &PTR_FUN_14ba60590;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            puVar5[4] = FUN_1443d28d6;
            *(undefined4 *)(puVar5 + 5) = 0;
            (**(code **)(*local_a8 + 0x210))(local_a8,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar8 = local_88;
            uVar10 = FUN_14127b0d4(&local_78);
            cVar7 = (**(code **)(*plVar8 + 0x270))(plVar8,uVar10);
            if (cVar7 == '\0') {
              (**(code **)(*local_88 + 0x220))(local_88,param_1);
            }
          }
          plVar8 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
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
      }
      else if ((local_70 & 0xffffff) != 0) goto LAB_148fe1dac;
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe1f0c FUN_148fe1f0c body=641 status=ok
// SIG undefined FUN_148fe1f0c(void)

void FUN_148fe1f0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong unaff_RBP;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  lVar4 = DAT_14cbf5710;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar12 = (longlong)DAT_14cbf5718;
  if (lVar12 != 0) {
    lVar11 = 0;
    local_a8 = param_1 + 0x50;
    do {
      uVar3 = *(undefined1 *)(lVar4 + lVar11);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),uVar3);
      FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_78,unaff_RBP & 0xffffffff);
      if ((&DAT_149fc1b6e)[local_60] == '\x01') {
        if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
           (cVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar7 != '\0'
           )) {
LAB_148fe201c:
          plVar8 = (longlong *)FUN_148fcd308(param_1,unaff_RBP & 0xffffffff);
          (**(code **)(*plVar8 + 0x28))(plVar8,&local_88);
          if (local_88 != (longlong *)0x0) {
            local_b0 = local_88;
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
            FUN_1446efa72(&local_98,0,3,0x10);
            puVar5 = local_98;
            local_90 = 3;
            *local_98 = &PTR_LAB_14ba606e0;
            *(undefined1 *)(local_98 + 1) = uVar3;
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 1;
            lVar6 = DAT_14c758608 + 1;
            if (lVar9 == 0) {
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 2;
              lVar6 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar6;
            local_98[2] = lVar9;
            *local_98 = &PTR_FUN_14ba60670;
            local_98[3] = 0;
            FUN_14485c47a(local_98 + 3,param_1);
            puVar5[4] = FUN_1443d2cbc;
            *(undefined4 *)(puVar5 + 5) = 0;
            (**(code **)(*local_b0 + 0x1f0))(local_b0,local_a0,&local_98);
            FUN_1449db362(&local_98);
            plVar8 = local_88;
            if (1 < *(int *)(param_1 + 0x58)) {
              uVar10 = FUN_14127b0d4(&local_78);
              cVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,uVar10,local_a8);
              if (cVar7 != '\0') goto LAB_148fe2141;
            }
            (**(code **)(*local_88 + 0x200))(local_88,param_1);
          }
LAB_148fe2141:
          plVar8 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
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
      }
      else if ((local_70 & 0xffffff) != 0) goto LAB_148fe201c;
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
      lVar11 = lVar11 + 1;
    } while (lVar12 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe218e FUN_148fe218e body=847 status=ok
// SIG undefined FUN_148fe218e(void)

void FUN_148fe218e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_14479d2ce(param_1 + 0xdc);
  lVar5 = DAT_14cbf5710;
  uVar8 = 0xffffffff;
  if (lVar3 != 0) {
    uVar8 = *(undefined4 *)(lVar3 + 0xe0);
  }
  lVar3 = (longlong)DAT_14cbf5718;
  if (lVar3 != 0) {
    lVar7 = 0;
    do {
      plVar4 = (longlong *)FUN_148fcd308(param_1,*(undefined1 *)(lVar5 + lVar7));
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_58);
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0xd8))(local_58,param_1);
          (**(code **)(*local_58 + 0x158))(local_58,uVar8,param_1);
          (**(code **)(*local_58 + 0x58))(local_58,param_1);
          (**(code **)(*local_58 + 0x78))(local_58,param_1);
          (**(code **)(*local_58 + 0x98))(local_58,param_1);
          (**(code **)(*local_58 + 0xb8))(local_58,param_1);
          (**(code **)(*local_58 + 0x178))(local_58,uVar8,param_1);
          (**(code **)(*local_58 + 0x198))(local_58,uVar8,param_1);
          (**(code **)(*local_58 + 0x250))(local_58,param_1);
          (**(code **)(*local_58 + 0x220))(local_58,param_1);
          (**(code **)(*local_58 + 0x200))(local_58,param_1);
        }
        (**(code **)(*plVar4 + 0x40))(plVar4,&local_68);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x2e8))(local_68,param_1);
          (**(code **)(*local_68 + 0x308))(local_68,param_1);
          (**(code **)(*local_68 + 1000))(local_68,param_1);
          (**(code **)(*local_68 + 0x408))(local_68,param_1);
        }
        (**(code **)(*plVar4 + 200))(plVar4,&local_78);
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x38))(local_78,param_1);
        }
        plVar4 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        plVar4 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        plVar4 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
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
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
  }
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    FUN_149003b74(param_1 + 0x88);
    FUN_149003cb8(param_1 + 0x88);
  }
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_148fe983c(param_1 + 0x78);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if ((((lVar5 == 0) || (lVar3 = FUN_14120add8(), lVar3 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  lVar5 = FUN_148fdf021(param_1,uVar6);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(param_1 + 0x70) = lVar5;
  FUN_1447f69b6(param_1 + 0x268);
  FUN_140898514(param_1 + 0x148,0);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe24de FUN_148fe24de body=436 status=ok
// SIG undefined FUN_148fe24de(void)

void FUN_148fe24de(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong uStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  uint local_60;
  undefined4 uStack_5c;
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != '\0') ||
     (plVar4 = (longlong *)FUN_148fcd308(param_1,0), plVar4 == (longlong *)0x0)) goto LAB_148fe24fe;
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_78);
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70),&local_68,0);
  if (local_78 != (longlong *)0x0) {
    if ((&DAT_149fc1b6e)[local_50] == '\x01') {
      if (((longlong *)CONCAT44(uStack_5c,local_60) != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x28))(), cVar3 != '\0'))
      {
LAB_148fe2605:
        local_88 = 0;
        uStack_80 = 0;
        uVar5 = FUN_14127b0d4(&local_68);
        (**(code **)(*local_78 + 0x108))(local_78,uVar5,&local_88);
        lVar2 = local_88;
        lVar9 = (longlong)(int)uStack_80;
        uVar7 = 0;
        if (lVar9 != 0) {
          lVar8 = 0;
          do {
            uVar5 = *(undefined8 *)(lVar2 + lVar8);
            uVar6 = FUN_14127b0d4(&local_68);
            FUN_148fe13c6(param_1,uVar6,uVar5);
            lVar8 = lVar8 + 0x10;
          } while (lVar9 * 0x10 != lVar8);
          uVar7 = uStack_80 & 0xffffffff;
        }
        FUN_1490056dc(local_88,uVar7);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else if ((local_60 & 0xffffff) != 0) goto LAB_148fe2605;
  }
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
LAB_148fe24fe:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe269e FUN_148fe269e body=391 status=ok
// SIG undefined FUN_148fe269e(void)

void FUN_148fe269e(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x18 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (uVar3 == uVar8) {
          FUN_14900539c(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[2];
        puVar10 = puVar9 + 2;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148fe26ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fe2826 FUN_148fe2826 body=200 status=ok
// SIG undefined FUN_148fe2826(void)

void FUN_148fe2826(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(longlong **)(param_2 + 0x10);
  if (local_30 == (longlong *)0x0) {
LAB_148fe284f:
    local_30 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)local_30[1];
    do {
      if (iVar5 == 0) goto LAB_148fe284f;
      LOCK();
      iVar4 = (int)local_30[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_30 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
  }
  local_38 = 0;
  if (local_30 != (longlong *)0x0) {
    local_38 = *(undefined8 *)(param_2 + 8);
  }
  local_28 = &local_38;
  FUN_1490065b8(param_1 + 0xd8);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2c0))
            (*(longlong **)(param_1 + 0x20),param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe28f0 FUN_148fe28f0 body=395 status=ok
// SIG undefined FUN_148fe28f0(void)

void FUN_148fe28f0(longlong param_1,undefined *param_2)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_2;
  if ((param_2 != (undefined *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_78 = &local_88;
  FUN_149005442(param_1 + 0x78);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    local_88 = (undefined *)0x0;
    uStack_80 = 0;
    FUN_148fe426a(param_2 + 0x88,&local_88);
    puVar1 = local_88;
    lVar4 = (longlong)(int)uStack_80;
    if (lVar4 != 0) {
      local_90 = param_1 + 0x88;
      lVar3 = 0;
      local_98 = param_1;
      do {
        FUN_148fcdaa6(param_2,&local_78,puVar1[lVar3]);
        if ((&DAT_149fc1b6e)[local_60] == '\x01') {
          if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
             (cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(),
             cVar2 != '\0')) {
LAB_148fe29ef:
            FUN_149005572(local_90,&local_78);
          }
        }
        else if ((local_70 & 0xffffff) != 0) goto LAB_148fe29ef;
        local_78 = &PTR_FUN_14a5af930;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_78 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
        lVar3 = lVar3 + 1;
        param_1 = local_98;
      } while (lVar4 != lVar3);
    }
    if (local_88 != (undefined *)0x0) {
      FUN_1400020a8(local_88);
    }
  }
  FUN_148ff1f40(param_1 + 0x250,param_2);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe2a7c FUN_148fe2a7c body=90 status=ok
// SIG undefined FUN_148fe2a7c(void)

longlong FUN_148fe2a7c(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148fe2ad6 FUN_148fe2ad6 body=200 status=ok
// SIG undefined FUN_148fe2ad6(void)

ulonglong FUN_148fe2ad6(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulonglong unaff_RBX;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [72];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148fd279e(local_78);
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == local_28) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (iVar4 < 2) goto LAB_148fe2b68;
    lVar5 = 0;
    while( true ) {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x48) + lVar5);
      uVar3 = (uint)uVar1;
      uVar2 = *(ushort *)(local_30 + lVar5);
      uVar6 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148fe2b37;
        }
        iVar4 = uVar3 - uVar6;
        goto LAB_148fe2b9b;
      }
      if (uVar1 == 0) break;
LAB_148fe2b37:
      lVar5 = lVar5 + 2;
    }
    iVar4 = 0;
LAB_148fe2b9b:
    bVar7 = iVar4 == 0;
  }
  else {
    bVar7 = local_28 + iVar4 == 1;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar7);
LAB_148fe2b68:
  FUN_1458ea6a8(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (unaff_RBX ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe2ba4 FUN_148fe2ba4 body=121 status=ok
// SIG undefined FUN_148fe2ba4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148fe2ba4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  iVar5 = FUN_148fe2c1e();
  if (iVar5 == 1) {
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 == (longlong *)0x0) {
LAB_148fe2c09:
                    /* WARNING: Could not recover jumptable at 0x000148fe2c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(_DAT_00000000 + 0x38))(0);
      return uVar6;
    }
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148fe2c09;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
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
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 148fe2c1e FUN_148fe2c1e body=113 status=ok
// SIG undefined FUN_148fe2c1e(void)

undefined4 FUN_148fe2c1e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  uVar4 = 0;
  if (((*(longlong *)(param_1 + 0x40) != 0) &&
      (plVar6 = *(longlong **)(param_1 + 0x48), plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1]))
  {
    iVar3 = (int)plVar6[1];
    plVar5 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148fe2c59;
      }
      LOCK();
      iVar2 = (int)plVar6[1];
      bVar7 = iVar3 == iVar2;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar7);
    plVar5 = *(longlong **)(param_1 + 0x40);
LAB_148fe2c59:
    uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  return uVar4;
}



// FUNCTION 148fe2c90 FUN_148fe2c90 body=323 status=ok
// SIG undefined FUN_148fe2c90(void)

longlong FUN_148fe2c90(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_d8 [47];
  byte local_a9;
  byte *local_a8;
  undefined ***local_a0;
  int local_94;
  undefined **local_90;
  undefined1 local_88 [16];
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x88);
  local_a9 = param_3;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar3 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar3 = *(longlong *)(param_1 + 200);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & (uint)param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar2 * 0x80;
        if (*(byte *)(*plVar1 + (longlong)iVar2 * 0x80) == param_3) {
          if (lVar3 != 0) goto LAB_148fe2dac;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x78);
      } while (iVar2 != -1);
    }
  }
  local_90 = &PTR_FUN_14a184370;
  local_78 = *(byte *)(param_2 + 0x18);
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_78])(local_88,param_2 + 8);
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_a8 = &local_a9;
  local_a0 = &local_90;
  FUN_149005ce4(plVar1,&local_94);
  lVar3 = *plVar1 + (longlong)local_94 * 0x80;
  FUN_148fe2dd4(&local_90);
LAB_148fe2dac:
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148fe2dd4 FUN_148fe2dd4 body=153 status=ok
// SIG undefined FUN_148fe2dd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148fe2dd4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fe2e6e FUN_148fe2e6e body=145 status=ok
// SIG undefined FUN_148fe2e6e(void)

undefined8 * FUN_148fe2e6e(longlong param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar2 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar2 = *(longlong *)(param_1 + 200);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & (uint)param_3) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 0x80;
        if (*(byte *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 0x80) == param_3) {
          if (lVar2 + 8 != 0 && lVar2 != 0) {
            FUN_148fe2f00(lVar2 + 8,param_2);
            return param_2;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x78);
      } while (iVar1 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148fe2f00 FUN_148fe2f00 body=210 status=ok
// SIG undefined FUN_148fe2f00(void)

undefined8 FUN_148fe2f00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x30) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x38), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1))
  {
    FUN_140056680(param_2,&DAT_149dfb77a);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  iVar3 = (int)plVar5[1];
  plVar4 = (longlong *)0x0;
  do {
    if (iVar3 == 0) {
      plVar5 = (longlong *)0x0;
      goto LAB_148fe2f73;
    }
    LOCK();
    iVar2 = (int)plVar5[1];
    bVar6 = iVar3 == iVar2;
    if (bVar6) {
      *(int *)(plVar5 + 1) = iVar3 + 1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
  } while (!bVar6);
  plVar4 = *(longlong **)(param_1 + 0x30);
LAB_148fe2f73:
  local_38[0] = 0;
  local_38[1] = 0;
  (**(code **)(*plVar4 + 0x18))(plVar4,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe2fd4 FUN_148fe2fd4 body=347 status=ok
// SIG undefined FUN_148fe2fd4(void)

undefined8 * FUN_148fe2fd4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_148fd006a();
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc))) {
    piVar4 = (int *)(param_1 + 0xc0);
    if (*(int **)(param_1 + 200) != (int *)0x0) {
      piVar4 = *(int **)(param_1 + 200);
    }
    iVar5 = *piVar4;
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 0x80;
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 0x80) == '\0') {
          if (((((lVar1 + 8U & 0xfffffffffffffff7) != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) &&
              (plVar6 = *(longlong **)(lVar1 + 0x50), plVar6 != (longlong *)0x0)) &&
             (0 < (int)plVar6[1])) {
            plVar7 = (longlong *)0x0;
            iVar5 = (int)plVar6[1];
            goto LAB_148fe30a4;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x78);
      } while (iVar5 != -1);
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  while( true ) {
    LOCK();
    iVar5 = (int)plVar6[1];
    bVar8 = iVar3 == iVar5;
    if (bVar8) {
      *(int *)(plVar6 + 1) = iVar3 + 1;
      iVar5 = iVar3;
    }
    UNLOCK();
    if (bVar8) break;
LAB_148fe30a4:
    iVar3 = iVar5;
    if (iVar3 == 0) {
      plVar6 = (longlong *)0x0;
      goto LAB_148fe30be;
    }
  }
  plVar7 = *(longlong **)(lVar1 + 0x48);
LAB_148fe30be:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(local_40,L"alias");
  (**(code **)(*plVar7 + 0x20))(plVar7,local_40,param_2);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (iVar3 != 0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar4 = (int *)((longlong)plVar6 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe313e FUN_148fe313e body=69 status=ok
// SIG undefined FUN_148fe313e(void)

undefined8 * FUN_148fe313e(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_148fcefaa(param_1,0);
  uVar3 = 0x2bca2875f4373fff;
  if (cVar1 != '\0') {
    lVar2 = FUN_148fd3674(param_1,0);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
    }
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 148fe3184 FUN_148fe3184 body=517 status=ok
// SIG undefined FUN_148fe3184(void)

void FUN_148fe3184(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  undefined8 local_68 [2];
  longlong local_58 [2];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_148fddcfe();
  if (cVar3 == '\0') {
    cVar3 = FUN_148fd006a(param_1);
    if ((cVar3 == '\0') && (*(longlong **)(param_1[4] + 0x70) != param_1)) goto LAB_148fe322d;
    lVar5 = FUN_148fd3674(param_1,0);
    if ((lVar5 == 0) || (uVar1 = *(uint *)(lVar5 + 0x28), (int)uVar1 < 2)) {
      lVar5 = FUN_148fd3674(param_1,1);
      if ((lVar5 == 0) || (uVar1 = *(uint *)(lVar5 + 0x28), (int)uVar1 < 2)) {
        uVar4 = FUN_148fcfeec(param_1);
        FUN_148fe338a(&local_40,uVar4);
        pwVar6 = local_40;
        pwVar2 = (wchar_t *)*param_2;
        if (pwVar2 != local_40) {
          *param_2 = local_40;
          if (local_40 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_40 + 8))(local_40);
          }
          if (pwVar2 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
          }
        }
        *(undefined4 *)(param_2 + 1) = local_38;
        if (pwVar6 == (wchar_t *)0x0) goto LAB_148fe322d;
        lVar5 = *(longlong *)pwVar6;
        goto LAB_148fe322a;
      }
      puVar7 = local_78;
    }
    else {
      puVar7 = local_68;
    }
    *puVar7 = 0;
    _Src = *(void **)(lVar5 + 0x20);
    *(uint *)(puVar7 + 1) = uVar1;
    FUN_1446dd670(puVar7,(ulonglong)uVar1,0);
    memcpy((void *)*puVar7,_Src,(ulonglong)uVar1 * 2);
    (**(code **)(*param_1 + 0x3c0))(param_1,local_58,puVar7);
    FUN_140233b1a(&local_40,local_58);
    FUN_140008f88(param_2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_40 = L"UserStatus_Blocked";
    local_38 = 0x12;
    FUN_1446e940c(local_58,&local_40);
    local_40 = L"SocialUser";
    local_38 = 10;
    FUN_1446e940c(local_44,&local_40);
    FUN_140208bae(&local_40,local_44,local_58,L"Blocked");
    FUN_140008f88(param_2,&local_40);
    if (local_40 == (wchar_t *)0x0) goto LAB_148fe322d;
    lVar5 = *(longlong *)local_40;
    pwVar6 = local_40;
LAB_148fe322a:
    (**(code **)(lVar5 + 0x10))(pwVar6);
  }
LAB_148fe322d:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe338a FUN_148fe338a body=186 status=ok
// SIG undefined FUN_148fe338a(void)

longlong * FUN_148fe338a(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar4 = DAT_14cbf5320;
  plVar3 = DAT_14cbf5310;
  plVar2 = DAT_14cbf5300;
  plVar1 = DAT_14cbf52f0;
  plVar6 = DAT_14cbf52e0;
  switch(param_2) {
  case 0:
    *param_1 = (longlong)DAT_14cbf52e0;
    plVar5 = (longlong *)&DAT_14cbf52e8;
    break;
  case 1:
    *param_1 = (longlong)DAT_14cbf52f0;
    plVar5 = (longlong *)&DAT_14cbf52f8;
    plVar6 = plVar1;
    break;
  case 2:
  case 3:
    *param_1 = (longlong)DAT_14cbf5300;
    plVar5 = (longlong *)&DAT_14cbf5308;
    plVar6 = plVar2;
    break;
  case 4:
    *param_1 = (longlong)DAT_14cbf5310;
    plVar5 = (longlong *)&DAT_14cbf5318;
    plVar6 = plVar3;
    break;
  case 5:
    *param_1 = (longlong)DAT_14cbf5320;
    plVar5 = (longlong *)&DAT_14cbf5328;
    plVar6 = plVar4;
    break;
  default:
    plVar5 = (longlong *)FUN_140e82300();
    plVar6 = (longlong *)*plVar5;
    *param_1 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar5 = plVar5 + 1;
    goto LAB_148fe33c7;
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
LAB_148fe33c7:
  *(int *)(param_1 + 1) = (int)*plVar5;
  return param_1;
}



// FUNCTION 148fe3444 FUN_148fe3444 body=85 status=ok
// SIG undefined FUN_148fe3444(void)

undefined8 FUN_148fe3444(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = DAT_14cbf5720;
  lVar4 = (longlong)DAT_14cbf5728;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar5);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1), cVar3 != '\0')) {
        return 1;
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 148fe349a FUN_148fe349a body=359 status=ok
// SIG undefined FUN_148fe349a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148fe349a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *_Src;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf5878) && (FUN_144b3d300(&DAT_14cbf5878), DAT_14cbf5878 == -1)) {
    DAT_14cbf5868 = (void *)0x0;
    _DAT_14cbf5870 = 0;
    atexit((_func_5014 *)&LAB_1443d413f);
    _Init_thread_footer(&DAT_14cbf5878);
  }
  bVar9 = (longlong)_DAT_14cbf5870 < 0;
  _DAT_14cbf5870 = _DAT_14cbf5870 & 0xffffffff00000000;
  if (bVar9) {
    FUN_1490064f2();
  }
  lVar5 = DAT_14cbf5720;
  lVar8 = (longlong)DAT_14cbf5728;
  if (lVar8 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + lVar6);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1), uVar2 = _DAT_14cbf5870,
         cVar3 != '\0')) {
        lVar7 = (longlong)DAT_14cbf5870;
        uVar4 = DAT_14cbf5870 + 1;
        _DAT_14cbf5870 = CONCAT44(DAT_14cbf5874,uVar4);
        if (DAT_14cbf5874 < uVar4) {
          FUN_148ff7f98(&DAT_14cbf5868,uVar2 & 0xffffffff);
        }
        *(undefined8 *)((longlong)DAT_14cbf5868 + lVar7 * 8) = *(undefined8 *)(lVar5 + lVar6);
      }
      lVar6 = lVar6 + 8;
    } while (lVar8 * 8 != lVar6);
  }
  *param_2 = 0;
  uVar2 = _DAT_14cbf5870;
  _Src = DAT_14cbf5868;
  lVar5 = (longlong)DAT_14cbf5870;
  *(int *)(param_2 + 1) = DAT_14cbf5870;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_148fe8efc(param_2,uVar2 & 0xffffffff);
    memcpy((void *)*param_2,_Src,lVar5 << 3);
  }
  return param_2;
}



// FUNCTION 148fe3602 FUN_148fe3602 body=333 status=ok
// SIG undefined FUN_148fe3602(void)

undefined4 FUN_148fe3602(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_2 == '\x01') {
    plVar4 = (longlong *)FUN_140a68038(1);
    if (plVar4 == (longlong *)0x0) {
      local_28 = 0;
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_28);
    }
    if (((local_28 != DAT_14cb8e1d8) && (cVar1 = FUN_148fcf4c6(&local_28), cVar1 == '\0')) &&
       (local_28 != DAT_14cb8e208)) goto LAB_148fe3662;
  }
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar6 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar6 = *(longlong *)(param_1 + 200);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_2 & 0xff) * 4);
    if (iVar5 != -1) {
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 0x80) == (char)param_2) {
          if (((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) != param_1) &&
              (cVar1 = FUN_148fcefaa(param_1,param_2), cVar1 == '\0')) &&
             (cVar1 = FUN_148fcfa80(param_1,param_2), cVar1 == '\0')) {
            uVar3 = FUN_148fcf75e(param_1,param_2);
            uVar2 = CONCAT31((int3)((uVar3 & 0xfffffffe) >> 8),(uVar3 & 0xfffffffe) != 2);
            goto LAB_148fe3664;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x80 + *(longlong *)(param_1 + 0x88) + 0x78);
      } while (iVar5 != -1);
    }
  }
LAB_148fe3662:
  uVar2 = 0;
LAB_148fe3664:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148fe3750 FUN_148fe3750 body=542 status=ok
// SIG undefined FUN_148fe3750(void)

void FUN_148fe3750(longlong *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_b8;
  longlong *local_b0;
  undefined **local_a8 [3];
  byte local_90;
  longlong local_88;
  undefined **local_78;
  undefined8 uStack_70;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = param_1[0x1c];
  bVar3 = true;
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = param_1[0x1b];
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar8) + 0x18))(*(longlong **)(lVar2 + lVar8),&local_78);
      bVar3 = (int)local_78 != *param_2;
      if ((int)local_78 == *param_2) break;
      bVar9 = (longlong)(int)lVar4 * 0x10 + -0x10 != lVar8;
      lVar8 = lVar8 + 0x10;
    } while (bVar9);
  }
  lVar4 = param_1[4];
  uVar5 = FUN_145988618();
  uVar5 = FUN_144a78ede(lVar4,uVar5);
  local_78 = (undefined **)0x0;
  uStack_70 = 0;
  local_c8 = param_3;
  FUN_1443ce46c(uVar5,param_1,param_2,&local_78);
  FUN_1449db362(&local_78);
  if (!bVar3) {
    (**(code **)(*param_1 + 0x180))(param_1);
    local_78 = (undefined **)0x0;
    plVar6 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_b8);
    FUN_148fcdaa6(param_1,&local_78,0);
    uVar5 = FUN_14127b0d4(&local_78);
    FUN_148fcdaa6(*(undefined8 *)(param_1[4] + 0x70),local_a8,0);
    uVar7 = FUN_14127b0d4(local_a8);
    (**(code **)(*local_b8 + 0x90))(local_b8,uVar7,uVar5,0);
    local_a8[0] = &PTR_FUN_14a5af930;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    local_a8[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])();
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
    (**(code **)(*param_1 + 0x390))(param_1,param_2);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe3970 FUN_148fe3970 body=440 status=ok
// SIG undefined FUN_148fe3970(void)

void FUN_148fe3970(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined **local_98 [3];
  byte local_80;
  longlong local_78;
  undefined **local_68 [3];
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[0x1c];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = param_1[0x1b];
    lVar7 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar7) + 0x18))(*(longlong **)(lVar2 + lVar7),local_68);
      if ((int)local_68[0] == *param_2) {
        (**(code **)(*param_1 + 0x180))(param_1);
        local_68[0] = (undefined **)0x0;
        plVar4 = (longlong *)FUN_1401e3228();
        (**(code **)(*plVar4 + 0x40))(plVar4,&local_a8);
        FUN_148fcdaa6(param_1,local_68,0);
        uVar5 = FUN_14127b0d4(local_68);
        FUN_148fcdaa6(*(undefined8 *)(param_1[4] + 0x70),local_98,0);
        uVar6 = FUN_14127b0d4(local_98);
        (**(code **)(*local_a8 + 0x88))(local_a8,uVar6,uVar5);
        local_98[0] = &PTR_FUN_14a5af930;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_98[0] = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_80])();
        local_68[0] = &PTR_FUN_14a5af930;
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        local_68[0] = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
        (**(code **)(*param_1 + 0x398))(param_1,param_2);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_a0 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
            }
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe3b3a FUN_148fe3b3a body=65 status=ok
// SIG undefined FUN_148fe3b3a(void)

undefined8 FUN_148fe3b3a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  iVar2 = FUN_148fcf75e();
  if (iVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000148fe3b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1,param_2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 148fe3b7c FUN_148fe3b7c body=196 status=ok
// SIG undefined FUN_148fe3b7c(void)

void FUN_148fe3b7c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148fe3bab:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_148fe3bab;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
  }
  uVar7 = 0;
  if (plVar6 != (longlong *)0x0) {
    uVar7 = *(undefined8 *)(param_2 + 8);
  }
  iVar5 = *(int *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0xe0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xe4) < iVar5 + 1U) {
    FUN_149006532((longlong *)(param_1 + 0xd8),iVar5);
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x10) = uVar7;
  *(longlong **)(lVar3 + 8 + (longlong)iVar5 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
                    /* WARNING: Could not recover jumptable at 0x000148fe3c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2b8))
            (*(longlong **)(param_1 + 0x20),param_1,param_2);
  return;
}



// FUNCTION 148fe3c40 FUN_148fe3c40 body=636 status=ok
// SIG undefined FUN_148fe3c40(void)

void FUN_148fe3c40(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x180))();
  local_78 = (undefined **)0x0;
  plVar5 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_88);
  FUN_148fcdaa6(param_1,&local_78,0);
  lVar6 = FUN_14127b0d4(&local_78);
  local_a0 = *(longlong *)(lVar6 + 0x10);
  if (local_a0 == 0) {
LAB_148fe3cbf:
    local_a0 = 0;
  }
  else {
    iVar4 = *(int *)(local_a0 + 8);
    do {
      if (iVar4 == 0) goto LAB_148fe3cbf;
      LOCK();
      iVar2 = *(int *)(local_a0 + 8);
      bVar9 = iVar4 == iVar2;
      if (bVar9) {
        *(int *)(local_a0 + 8) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar9);
  }
  local_a8 = 0;
  if (local_a0 != 0) {
    local_a8 = *(undefined8 *)(lVar6 + 8);
  }
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  FUN_1400021e4(param_2,&local_78);
  local_98 = (undefined4)local_78;
  uStack_94 = local_78._4_4_;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_1446efa72(&local_b8,0,3,0x10);
  puVar3 = local_b8;
  local_b0 = 3;
  *local_b8 = &PTR_LAB_14ba60a40;
  local_b8[1] = *param_2;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_b8[2] = lVar8;
  *local_b8 = &PTR_FUN_14ba609d0;
  local_b8[3] = 0;
  FUN_14485c47a(local_b8 + 3,param_1);
  puVar3[4] = &LAB_148fe3ebe;
  FUN_148fcdaa6(*(undefined8 *)(param_1[4] + 0x70),&local_78,0);
  uVar7 = FUN_14127b0d4(&local_78);
  local_c8 = &local_b8;
  (**(code **)(*local_88 + 0x38))(local_88,uVar7,0x11111111,&local_a8);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  FUN_1449db362(&local_b8);
  FUN_148fd668c(&local_a8);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe3ecc FUN_148fe3ecc body=925 status=ok
// SIG undefined FUN_148fe3ecc(void)

longlong * FUN_148fe3ecc(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  int local_f8;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  undefined **local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  byte local_a8;
  longlong local_a0;
  undefined **local_90;
  uint local_88;
  undefined4 uStack_84;
  byte local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x180))();
  local_90 = (undefined **)0x0;
  plVar6 = (longlong *)FUN_1401e3228();
  if (plVar6 == (longlong *)0x0) {
    local_d8 = (longlong *)0x0;
    plStack_d0 = (longlong *)0x0;
    goto LAB_148fe3f4a;
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_d8);
  if (local_d8 == (longlong *)0x0) goto LAB_148fe3f4a;
  FUN_148fcdaa6(*(undefined8 *)(param_1[4] + 0x70),&local_90,0);
  FUN_148fcdaa6(param_1,&local_c0,0);
  if ((&DAT_149fc1b6e)[local_78] == '\x01') {
    if (((longlong *)CONCAT44(uStack_84,local_88) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*(longlong *)CONCAT44(uStack_84,local_88) + 0x28))(), cVar5 != '\0')) {
LAB_148fe4103:
      if ((&DAT_149fc1b6e)[local_a8] == '\x01') {
        if (((longlong *)CONCAT44(uStack_b4,local_b8) != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*(longlong *)CONCAT44(uStack_b4,local_b8) + 0x28))(), cVar5 != '\0'
           )) {
LAB_148fe413a:
          plVar6 = local_d8;
          iVar2 = *param_3;
          uVar7 = FUN_14127b0d4(&local_c0);
          uVar8 = FUN_14127b0d4(&local_90);
          local_f8 = iVar2;
          (**(code **)(*plVar6 + 0xf0))(plVar6,&local_e8,uVar8,uVar7);
          plVar6 = local_e0;
          if (&local_e8 != param_2) {
            *param_2 = local_e8;
            local_e8 = 0;
            plVar9 = (longlong *)param_2[1];
            if (local_e0 != plVar9) {
              local_e0 = (longlong *)0x0;
              param_2[1] = (longlong)plVar6;
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar6 = plVar9 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
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
          }
          plVar6 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_e0 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_e0)(local_e0);
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
      }
      else if ((local_b8 & 0xffffff) != 0) goto LAB_148fe413a;
    }
  }
  else if ((local_88 & 0xffffff) != 0) goto LAB_148fe4103;
  local_c0 = &PTR_FUN_14a5af930;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  local_c0 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a8])();
  local_90 = &PTR_FUN_14a5af930;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_90 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])(&local_88);
LAB_148fe3f4a:
  plVar6 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_d0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((*param_2 == 0) && (lVar4 = param_1[0x1c], (longlong)(int)lVar4 != 0)) {
    lVar3 = param_1[0x1b];
    lVar10 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar10) + 0x18))
                (*(longlong **)(lVar3 + lVar10),&local_90);
      if ((int)local_90 == *param_3) {
        lVar4 = *(longlong *)(lVar3 + lVar10);
        plVar6 = *(longlong **)(lVar3 + 8 + lVar10);
        if (plVar6 == (longlong *)0x0) {
          *param_2 = lVar4;
          plVar9 = (longlong *)param_2[1];
          if (plVar9 == (longlong *)0x0) break;
          param_2[1] = 0;
LAB_148fe4049:
          LOCK();
          plVar6 = plVar9 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 != 0) break;
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar9;
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          *param_2 = lVar4;
          plVar9 = (longlong *)param_2[1];
          if (plVar6 != plVar9) {
            param_2[1] = (longlong)plVar6;
            if (plVar9 != (longlong *)0x0) goto LAB_148fe4049;
            break;
          }
          LOCK();
          plVar9 = plVar6 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 != 0) break;
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
        }
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
        break;
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe426a FUN_148fe426a body=323 status=ok
// SIG undefined FUN_148fe426a(void)

void FUN_148fe426a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
    FUN_149005c5c(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_148ff647a(param_2,iVar2);
      }
      *(undefined1 *)(*param_2 + (longlong)iVar2) = *(undefined1 *)(lVar3 * 0x80 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe43b0 FUN_148fe43b0 body=420 status=ok
// SIG undefined FUN_148fe43b0(void)

void FUN_148fe43b0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_88);
  local_70 = local_88;
  local_68 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_60 = 0;
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  lVar6 = FUN_148fe2c90(param_1,&local_78,param_3);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  lVar2 = *param_2;
  plVar3 = *(longlong **)(lVar6 + 0x48);
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_148fe44e4;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(lVar6 + 0x40);
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_148fe44e4:
  if (lVar2 != lVar8) {
    *(longlong *)(lVar6 + 0x40) = *param_2;
    plVar3 = (longlong *)param_2[1];
    plVar7 = *(longlong **)(lVar6 + 0x48);
    if (plVar7 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(lVar6 + 0x48);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *(longlong **)(lVar6 + 0x48) = plVar3;
    }
    (**(code **)(*param_1 + 0x388))(param_1,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fe457a FUN_148fe457a body=155 status=ok
// SIG undefined FUN_148fe457a(void)

void FUN_148fe457a(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148ffe9f6();
  FUN_149006da8(&local_40,param_1,param_2);
  (**(code **)(*local_40 + 0x10))(local_40,param_3,param_4);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe464e FUN_148fe464e body=196 status=ok
// SIG undefined FUN_148fe464e(void)

void FUN_148fe464e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 3) {
    FUN_1406b60f4(param_2,3);
  }
  uVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1410d14fc(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x2f0))(param_1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1410d14fc(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x2f8))(param_1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1410d14fc(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 148fe4738 FUN_148fe4738 body=41 status=ok
// SIG undefined FUN_148fe4738(void)

void FUN_148fe4738(void)

{
  FUN_140033559("..\\Plugins\\Online\\OnlineFramework\\Source\\Party\\Public\\Chat\\SocialChatChannel.h"
                ,0x2e,L"Pure virtual not implemented (%s)",L"USocialChatChannel::Initialize");
  return;
}



// FUNCTION 148fe4772 FUN_148fe4772 body=42 status=ok
// SIG undefined FUN_148fe4772(void)

undefined8 FUN_148fe4772(void)

{
  FUN_140033559("..\\Plugins\\Online\\OnlineFramework\\Source\\Party\\Public\\Chat\\SocialChatChannel.h"
                ,0x3f,L"Pure virtual not implemented (%s)",L"USocialChatChannel::SendMessage");
  return 0;
}



// FUNCTION 148fe47c2 FUN_148fe47c2 body=45 status=ok
// SIG undefined FUN_148fe47c2(void)

longlong FUN_148fe47c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e02c78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe47f2 FUN_148fe47f2 body=45 status=ok
// SIG undefined FUN_148fe47f2(void)

longlong FUN_148fe47f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d5f918(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe4842 FUN_148fe4842 body=45 status=ok
// SIG undefined FUN_148fe4842(void)

longlong FUN_148fe4842(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14610a702(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe4870 FUN_148fe4870 body=82 status=ok
// SIG undefined FUN_148fe4870(void)

undefined8 * FUN_148fe4870(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
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



// FUNCTION 148fe48e2 FUN_148fe48e2 body=160 status=ok
// SIG undefined FUN_148fe48e2(void)

undefined8 * FUN_148fe48e2(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ba58f00;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2);
  param_1[3] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2);
  param_1[5] = *puVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  return param_1;
}



// FUNCTION 148fe4982 FUN_148fe4982 body=38 status=ok
// SIG undefined FUN_148fe4982(void)

undefined8 FUN_148fe4982(undefined8 param_1,int param_2)

{
  FUN_148fe4adc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe49a8 FUN_148fe49a8 body=118 status=ok
// SIG undefined FUN_148fe49a8(void)

bool FUN_148fe49a8(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"FSocialUserChatMessage",1);
  bVar1 = true;
  if (local_28 != param_2) {
    FUN_1446f470e(&local_20,L"Base",1);
    bVar1 = local_20 == param_2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe4a20 FUN_148fe4a20 body=38 status=ok
// SIG undefined FUN_148fe4a20(void)

undefined8 FUN_148fe4a20(undefined8 param_1,int param_2)

{
  FUN_148fe4adc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe4a46 FUN_148fe4a46 body=63 status=ok
// SIG undefined FUN_148fe4a46(void)

undefined8 FUN_148fe4a46(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("..\\Plugins\\Online\\OnlineFramework\\Source\\Party\\Public\\Chat/SocialChatMessage.h"
                ,0x2a,L"Pure virtual not implemented (%s)",L"FSocialChatMessage::GetSourceName");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148fe4a86 FUN_148fe4a86 body=85 status=ok
// SIG undefined FUN_148fe4a86(void)

bool FUN_148fe4a86(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_20,L"Base",1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20 == param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe4adc FUN_148fe4adc body=107 status=ok
// SIG undefined FUN_148fe4adc(void)

void FUN_148fe4adc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba58f00;
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148fe4b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148fe4b48 FUN_148fe4b48 body=24 status=ok
// SIG undefined FUN_148fe4b48(void)

void FUN_148fe4b48(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fe4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fe4b60 FUN_148fe4b60 body=29 status=ok
// SIG undefined FUN_148fe4b60(void)

undefined8 FUN_148fe4b60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe4b7e FUN_148fe4b7e body=115 status=ok
// SIG undefined FUN_148fe4b7e(void)

undefined8 *
FUN_148fe4b7e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  
  FUN_148fe4cea(param_1,param_3,param_4);
  *param_1 = &PTR_FUN_14ba59010;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148fe4bf2 FUN_148fe4bf2 body=65 status=ok
// SIG undefined FUN_148fe4bf2(void)

undefined8 * FUN_148fe4bf2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba59010;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_148fe4adc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe4c34 FUN_148fe4c34 body=83 status=ok
// SIG undefined FUN_148fe4c34(void)

undefined8 * FUN_148fe4c34(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
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



// FUNCTION 148fe4c88 FUN_148fe4c88 body=96 status=ok
// SIG undefined FUN_148fe4c88(void)

undefined8 FUN_148fe4c88(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"FSocialSystemChatMessage",1);
  uVar1 = 1;
  if (local_20 != param_2) {
    uVar1 = FUN_148fe4db2();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe4cea FUN_148fe4cea body=134 status=ok
// SIG undefined FUN_148fe4cea(void)

undefined8 * FUN_148fe4cea(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ba58f00;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  FUN_140212f8e(param_1 + 5);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  return param_1;
}



// FUNCTION 148fe4d70 FUN_148fe4d70 body=65 status=ok
// SIG undefined FUN_148fe4d70(void)

undefined8 * FUN_148fe4d70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba59010;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_148fe4adc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe4db2 FUN_148fe4db2 body=118 status=ok
// SIG undefined FUN_148fe4db2(void)

bool FUN_148fe4db2(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"FSocialLocalChatMessage",1);
  bVar1 = true;
  if (local_28 != param_2) {
    FUN_1446f470e(&local_20,L"Base",1);
    bVar1 = local_20 == param_2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe4e2a FUN_148fe4e2a body=24 status=ok
// SIG undefined FUN_148fe4e2a(void)

void FUN_148fe4e2a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fe4e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148fe4e42 FUN_148fe4e42 body=29 status=ok
// SIG undefined FUN_148fe4e42(void)

undefined8 FUN_148fe4e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe4efa FUN_148fe4efa body=118 status=ok
// SIG undefined FUN_148fe4efa(void)

undefined1 FUN_148fe4efa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fe2a7c(param_2,param_3);
    FUN_141238a10(param_2 + 0x58,param_3 + 0x58);
    FUN_144a787a6(param_2 + 0x88,param_3 + 0x88);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148fe4f98 FUN_148fe4f98 body=59 status=ok
// SIG undefined FUN_148fe4f98(void)

undefined8 FUN_148fe4f98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe4fe4 FUN_148fe4fe4 body=40 status=ok
// SIG undefined FUN_148fe4fe4(void)

void FUN_148fe4fe4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_148fe505a(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148fe505a FUN_148fe505a body=92 status=ok
// SIG undefined FUN_148fe505a(void)

void FUN_148fe505a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_14a5af930;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x70)])(param_1 + 0x60);
  FUN_1458ea6a8(param_1);
  return;
}



// FUNCTION 148fe50fa FUN_148fe50fa body=69 status=ok
// SIG undefined FUN_148fe50fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148fe50fa(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
    return;
  case 2:
    param_2[1] = switchD_1458da17c::caseD_0;
    param_2[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_2 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fe5156 FUN_148fe5156 body=62 status=ok
// SIG undefined FUN_148fe5156(void)

undefined8 FUN_148fe5156(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141238a10(param_2,param_3);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148fe51bc FUN_148fe51bc body=59 status=ok
// SIG undefined FUN_148fe51bc(void)

undefined8 FUN_148fe51bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe5202 FUN_148fe5202 body=76 status=ok
// SIG undefined FUN_148fe5202(void)

void FUN_148fe5202(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14a5af930;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148fe52ea FUN_148fe52ea body=69 status=ok
// SIG undefined FUN_148fe52ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148fe52ea(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
    return;
  case 2:
    param_2[1] = switchD_1458da17c::caseD_0;
    param_2[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_2 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fe5346 FUN_148fe5346 body=68 status=ok
// SIG undefined FUN_148fe5346(void)

undefined1 FUN_148fe5346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141238a10(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x34);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148fe53b2 FUN_148fe53b2 body=59 status=ok
// SIG undefined FUN_148fe53b2(void)

undefined8 FUN_148fe53b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe53f8 FUN_148fe53f8 body=76 status=ok
// SIG undefined FUN_148fe53f8(void)

void FUN_148fe53f8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14a5af930;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 148fe54fc FUN_148fe54fc body=75 status=ok
// SIG undefined FUN_148fe54fc(void)

undefined8 FUN_148fe54fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141238a10(param_2,param_3);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    FUN_148fe5686(param_2 + 0x38,param_3 + 0x38);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148fe5570 FUN_148fe5570 body=59 status=ok
// SIG undefined FUN_148fe5570(void)

undefined8 FUN_148fe5570(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe55b6 FUN_148fe55b6 body=34 status=ok
// SIG undefined FUN_148fe55b6(void)

void FUN_148fe55b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148fe5626(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148fe5626 FUN_148fe5626 body=95 status=ok
// SIG undefined FUN_148fe5626(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148fe5626(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_148fe56e5(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fe5686 FUN_148fe5686 body=95 status=ok
// SIG undefined FUN_148fe5686(void)

undefined8 * FUN_148fe5686(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148fe56e5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148fe5742(param_1,iVar1);
      FUN_148fe57b5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148fe56e5 FUN_148fe56e5 body=93 status=ok
// SIG undefined FUN_148fe56e5(void)

void FUN_148fe56e5(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a5af930;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 3)])(param_1 + 1);
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 148fe5742 FUN_148fe5742 body=115 status=ok
// SIG undefined FUN_148fe5742(void)

void FUN_148fe5742(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148fe57b5 FUN_148fe57b5 body=161 status=ok
// SIG undefined FUN_148fe57b5(void)

void FUN_148fe57b5(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar7);
      *puVar1 = &PTR_FUN_14a184370;
      bVar3 = *(byte *)(param_2 + 0x18 + lVar7);
      *(byte *)(puVar1 + 3) = bVar3;
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar3])(puVar1 + 1,param_2 + 8 + lVar7);
      *puVar1 = &PTR_FUN_14a5af930;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar2 = (undefined4 *)(param_2 + 0x30 + lVar7);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *(undefined4 *)(puVar1 + 6) = *puVar2;
      *(undefined4 *)((longlong)puVar1 + 0x34) = uVar4;
      *(undefined4 *)(puVar1 + 7) = uVar5;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar6;
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 0x40 + lVar7);
      lVar7 = lVar7 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148fe588c FUN_148fe588c body=63 status=ok
// SIG undefined FUN_148fe588c(void)

undefined1 FUN_148fe588c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fe59b6(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 148fe58f4 FUN_148fe58f4 body=59 status=ok
// SIG undefined FUN_148fe58f4(void)

undefined8 FUN_148fe58f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe5940 FUN_148fe5940 body=40 status=ok
// SIG undefined FUN_148fe5940(void)

void FUN_148fe5940(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_148fdc24e(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 148fe59b6 FUN_148fe59b6 body=460 status=ok
// SIG undefined FUN_148fe59b6(void)

longlong FUN_148fe59b6(longlong param_1,longlong param_2)

{
  FUN_14009d848(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_148fe2a7c(param_1 + 0x28,param_2 + 0x28);
  FUN_141238a10(param_1 + 0x80,param_2 + 0x80);
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  if (param_2 == param_1) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
  }
  else {
    FUN_148fe5b82(param_1 + 0xc0,param_2 + 0xc0);
    FUN_148fe5cb4(param_1 + 0xd8,param_2 + 0xd8);
    FUN_148fe5de6(param_1 + 0xf0,param_2 + 0xf0);
    FUN_148fe5f18(param_1 + 0x108,param_2 + 0x108);
    FUN_148fe604a(param_1 + 0x120,param_2 + 0x120);
    FUN_148fe617c(param_1 + 0x138,param_2 + 0x138);
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    FUN_148fe62ae(param_1 + 0x158,param_2 + 0x158);
    FUN_148fe63e0(param_1 + 0x170,param_2 + 0x170);
    FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
    FUN_148fe604a(param_1 + 0x198,param_2 + 0x198);
    FUN_148fe617c(param_1 + 0x1b0,param_2 + 0x1b0);
  }
  FUN_141238a10(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  FUN_148fe5686(param_1 + 0x200,param_2 + 0x200);
  if (param_2 != param_1) {
    FUN_148fe6512(param_1 + 0x210,param_2 + 0x210);
    FUN_148fe6644(param_1 + 0x228,param_2 + 0x228);
    FUN_148fe6776(param_1 + 0x240,param_2 + 0x240);
    FUN_148fe68a8(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 148fe5b82 FUN_148fe5b82 body=304 status=ok
// SIG undefined FUN_148fe5b82(void)

void FUN_148fe5b82(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe5cb4 FUN_148fe5cb4 body=304 status=ok
// SIG undefined FUN_148fe5cb4(void)

void FUN_148fe5cb4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe5de6 FUN_148fe5de6 body=304 status=ok
// SIG undefined FUN_148fe5de6(void)

void FUN_148fe5de6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe5f18 FUN_148fe5f18 body=304 status=ok
// SIG undefined FUN_148fe5f18(void)

void FUN_148fe5f18(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe604a FUN_148fe604a body=304 status=ok
// SIG undefined FUN_148fe604a(void)

void FUN_148fe604a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe617c FUN_148fe617c body=304 status=ok
// SIG undefined FUN_148fe617c(void)

void FUN_148fe617c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe62ae FUN_148fe62ae body=304 status=ok
// SIG undefined FUN_148fe62ae(void)

void FUN_148fe62ae(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe63e0 FUN_148fe63e0 body=304 status=ok
// SIG undefined FUN_148fe63e0(void)

void FUN_148fe63e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe6512 FUN_148fe6512 body=304 status=ok
// SIG undefined FUN_148fe6512(void)

void FUN_148fe6512(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe6644 FUN_148fe6644 body=304 status=ok
// SIG undefined FUN_148fe6644(void)

void FUN_148fe6644(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe6776 FUN_148fe6776 body=304 status=ok
// SIG undefined FUN_148fe6776(void)

void FUN_148fe6776(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe68a8 FUN_148fe68a8 body=304 status=ok
// SIG undefined FUN_148fe68a8(void)

void FUN_148fe68a8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe69da FUN_148fe69da body=38 status=ok
// SIG undefined FUN_148fe69da(void)

undefined8 FUN_148fe69da(undefined8 param_1,int param_2)

{
  FUN_146024eb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe6a00 FUN_148fe6a00 body=32 status=ok
// SIG undefined FUN_148fe6a00(void)

undefined8 FUN_148fe6a00(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"TPartyDataReplicator");
  return param_2;
}



// FUNCTION 148fe6a20 FUN_148fe6a20 body=175 status=ok
// SIG undefined FUN_148fe6a20(void)

void FUN_148fe6a20(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148fe6aa9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6aa9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6ad0 FUN_148fe6ad0 body=164 status=ok
// SIG undefined FUN_148fe6ad0(void)

void FUN_148fe6ad0(longlong *param_1,undefined8 param_2)

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
        goto LAB_148fe6b50;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6b50:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6b74 FUN_148fe6b74 body=175 status=ok
// SIG undefined FUN_148fe6b74(void)

void FUN_148fe6b74(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148fe6bfd;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6bfd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6c24 FUN_148fe6c24 body=173 status=ok
// SIG undefined FUN_148fe6c24(void)

void FUN_148fe6c24(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_148fe6cab;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6cab:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6cd2 FUN_148fe6cd2 body=164 status=ok
// SIG undefined FUN_148fe6cd2(void)

void FUN_148fe6cd2(longlong *param_1,undefined4 param_2)

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
        goto LAB_148fe6d52;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6d52:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6d76 FUN_148fe6d76 body=175 status=ok
// SIG undefined FUN_148fe6d76(void)

void FUN_148fe6d76(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148fe6dff;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6dff:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6e26 FUN_148fe6e26 body=164 status=ok
// SIG undefined FUN_148fe6e26(void)

void FUN_148fe6e26(longlong *param_1,undefined8 param_2)

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
        goto LAB_148fe6ea6;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6ea6:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6eca FUN_148fe6eca body=98 status=ok
// SIG undefined FUN_148fe6eca(void)

ulonglong FUN_148fe6eca(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  do {
    if (param_3 == 0) {
LAB_148fe6f20:
      return uVar2 & 0xffffffff;
    }
    cVar1 = FUN_140ba41f1(param_1,param_2);
    if ((((cVar1 == '\0') || (*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30))) ||
        (*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38))) ||
       (*(char *)(param_1 + 0x40) != *(char *)(param_2 + 0x40))) {
      uVar2 = 0;
      goto LAB_148fe6f20;
    }
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 148fe6f2c FUN_148fe6f2c body=175 status=ok
// SIG undefined FUN_148fe6f2c(void)

void FUN_148fe6f2c(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148fe6fb5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe6fb5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe6fdc FUN_148fe6fdc body=164 status=ok
// SIG undefined FUN_148fe6fdc(void)

void FUN_148fe6fdc(longlong *param_1,undefined8 param_2)

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
        goto LAB_148fe705c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe705c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe7080 FUN_148fe7080 body=132 status=ok
// SIG undefined FUN_148fe7080(void)

void FUN_148fe7080(longlong param_1,int param_2)

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



// FUNCTION 148fe7106 FUN_148fe7106 body=394 status=ok
// SIG undefined FUN_148fe7106(void)

undefined8 * FUN_148fe7106(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148fe72f2 FUN_148fe72f2 body=80 status=ok
// SIG undefined FUN_148fe72f2(void)

undefined1 FUN_148fe72f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_141238a10(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 148fe736a FUN_148fe736a body=59 status=ok
// SIG undefined FUN_148fe736a(void)

undefined8 FUN_148fe736a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe73b0 FUN_148fe73b0 body=34 status=ok
// SIG undefined FUN_148fe73b0(void)

void FUN_148fe73b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148fd7c24(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148fe749c FUN_148fe749c body=59 status=ok
// SIG undefined FUN_148fe749c(void)

undefined8 FUN_148fe749c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe758e FUN_148fe758e body=62 status=ok
// SIG undefined FUN_148fe758e(void)

undefined1 FUN_148fe758e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14009d848(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148fe75f4 FUN_148fe75f4 body=59 status=ok
// SIG undefined FUN_148fe75f4(void)

undefined8 FUN_148fe75f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe763a FUN_148fe763a body=43 status=ok
// SIG undefined FUN_148fe763a(void)

void FUN_148fe763a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14ba5ac50;
    FUN_1449db362(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148fe76b4 FUN_148fe76b4 body=52 status=ok
// SIG undefined FUN_148fe76b4(void)

undefined8 * FUN_148fe76b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba5ac50;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe77d0 FUN_148fe77d0 body=63 status=ok
// SIG undefined FUN_148fe77d0(void)

undefined1 FUN_148fe77d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fe79dc(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148fe7838 FUN_148fe7838 body=59 status=ok
// SIG undefined FUN_148fe7838(void)

undefined8 FUN_148fe7838(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe7884 FUN_148fe7884 body=40 status=ok
// SIG undefined FUN_148fe7884(void)

void FUN_148fe7884(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_148fe7920(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148fe78fa FUN_148fe78fa body=38 status=ok
// SIG undefined FUN_148fe78fa(void)

undefined8 FUN_148fe78fa(undefined8 param_1,int param_2)

{
  FUN_148fe7920();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe7920 FUN_148fe7920 body=149 status=ok
// SIG undefined FUN_148fe7920(void)

void FUN_148fe7920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba5ade0;
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_148fe79b5(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
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
  *param_1 = &PTR_FUN_14ba5ac50;
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 148fe79b5 FUN_148fe79b5 body=38 status=ok
// SIG undefined FUN_148fe79b5(void)

void FUN_148fe79b5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148fd7c24(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 148fe79dc FUN_148fe79dc body=127 status=ok
// SIG undefined FUN_148fe79dc(void)

longlong FUN_148fe79dc(longlong param_1,longlong param_2)

{
  FUN_14009d848(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if (param_2 == param_1) {
    FUN_148fe7a5c(param_1 + 0x58,param_2 + 0x58);
  }
  else {
    FUN_148fe7abc(param_1 + 0x28,param_2 + 0x28);
    FUN_148fe7bee(param_1 + 0x40,param_2 + 0x40);
    FUN_148fe7a5c(param_1 + 0x58,param_2 + 0x58);
    FUN_1401b31d8(param_1 + 0x68,param_2 + 0x68);
  }
  return param_1;
}



// FUNCTION 148fe7a5c FUN_148fe7a5c body=95 status=ok
// SIG undefined FUN_148fe7a5c(void)

undefined8 * FUN_148fe7a5c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148fe79b5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148fe7d20(param_1,iVar1);
      FUN_148fe7d93(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148fe7abc FUN_148fe7abc body=304 status=ok
// SIG undefined FUN_148fe7abc(void)

void FUN_148fe7abc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe7bee FUN_148fe7bee body=304 status=ok
// SIG undefined FUN_148fe7bee(void)

void FUN_148fe7bee(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe7d20 FUN_148fe7d20 body=115 status=ok
// SIG undefined FUN_148fe7d20(void)

void FUN_148fe7d20(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148fe7d93 FUN_148fe7d93 body=52 status=ok
// SIG undefined FUN_148fe7d93(void)

void FUN_148fe7d93(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148fd7b42(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148fe7dc8 FUN_148fe7dc8 body=38 status=ok
// SIG undefined FUN_148fe7dc8(void)

undefined8 FUN_148fe7dc8(undefined8 param_1,int param_2)

{
  FUN_1460153fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe7dee FUN_148fe7dee body=32 status=ok
// SIG undefined FUN_148fe7dee(void)

undefined8 FUN_148fe7dee(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"TPartyDataReplicator");
  return param_2;
}



// FUNCTION 148fe7e0e FUN_148fe7e0e body=175 status=ok
// SIG undefined FUN_148fe7e0e(void)

void FUN_148fe7e0e(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148fe7e97;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe7e97:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe7ebe FUN_148fe7ebe body=164 status=ok
// SIG undefined FUN_148fe7ebe(void)

void FUN_148fe7ebe(longlong *param_1,undefined8 param_2)

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
        goto LAB_148fe7f3e;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe7f3e:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe7f62 FUN_148fe7f62 body=121 status=ok
// SIG undefined FUN_148fe7f62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148fe7f62(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0x12];
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
  FUN_1458ea6a8(param_1 + 6);
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fe7fdc FUN_148fe7fdc body=105 status=ok
// SIG undefined FUN_148fe7fdc(void)

undefined8 * FUN_148fe7fdc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  FUN_148fe8046(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148fe8046 FUN_148fe8046 body=146 status=ok
// SIG undefined FUN_148fe8046(void)

undefined8 * FUN_148fe8046(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  lVar2 = param_2[5];
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return param_1;
}



// FUNCTION 148fe80d8 FUN_148fe80d8 body=38 status=ok
// SIG undefined FUN_148fe80d8(void)

undefined8 FUN_148fe80d8(undefined8 param_1,int param_2)

{
  FUN_148fdb04c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe80fe FUN_148fe80fe body=166 status=ok
// SIG undefined FUN_148fe80fe(void)

void FUN_148fe80fe(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar2,puVar6);
  uVar5 = FUN_148fe827a(param_1 + 0x28,uVar4,param_2);
  cVar3 = FUN_14097d516(uVar5,param_3);
  if (cVar3 != '\0') {
    FUN_1489b75c6(uVar5,param_3);
    FUN_140e830ae(param_1 + 0x78,local_2c,param_2,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe81a6 FUN_148fe81a6 body=92 status=ok
// SIG undefined FUN_148fe81a6(void)

void FUN_148fe81a6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_148fe8440(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_140e830ae(param_1 + 0x78,local_1c,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe8204 FUN_148fe8204 body=66 status=ok
// SIG undefined FUN_148fe8204(void)

void FUN_148fe8204(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140e830ae(param_1 + 0x78,local_c,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe8248 FUN_148fe8248 body=38 status=ok
// SIG undefined FUN_148fe8248(void)

void FUN_148fe8248(longlong param_1)

{
  FUN_1489bbd16(param_1 + 0x28,0);
  FUN_145d323a0(param_1 + 0x78,0);
  return;
}



// FUNCTION 148fe827a FUN_148fe827a body=133 status=ok
// SIG undefined FUN_148fe827a(void)

longlong FUN_148fe827a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140dfa800();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x38;
    if (lVar3 + lVar2 != 0) goto LAB_148fe82b3;
  }
  local_30 = param_3;
  FUN_148fe8300(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x38;
LAB_148fe82b3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe8300 FUN_148fe8300 body=319 status=ok
// SIG undefined FUN_148fe8300(void)

undefined4 * FUN_148fe8300(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70 [2];
  longlong local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140dfa92e(param_1,local_70);
  local_60[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_140c3a888(local_68,0,*param_4,local_60);
  FUN_140c3a2ac(local_60);
  *(undefined4 *)(local_68 + 0x30) = 0xffffffff;
  local_78 = 0;
  cVar1 = FUN_140dfa750(param_1,param_3,local_68,local_70);
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
      *(uint *)(local_68 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_68 + 0x30) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_70[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140dfae20(param_1);
    }
  }
  *param_2 = local_70[0];
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe8440 FUN_148fe8440 body=259 status=ok
// SIG undefined FUN_148fe8440(void)

undefined4 FUN_148fe8440(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = (int)param_2[1];
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar1 = FUN_144a49b4a(iVar2,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_148fe84ba:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x38);
      iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x38);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_148fe852b;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_148fe852b;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_148fe8531;
      }
      if (iVar1 + iVar2 == 1) goto LAB_148fe8531;
      goto LAB_148fe851b;
    }
  }
  return 0;
LAB_148fe852b:
  if (uVar7 == uVar6) {
LAB_148fe8531:
    FUN_148fe8544(param_1);
    return 1;
  }
LAB_148fe851b:
  iVar1 = (int)plVar3[6];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_148fe84ba;
}



// FUNCTION 148fe8544 FUN_148fe8544 body=87 status=ok
// SIG undefined FUN_148fe8544(void)

void FUN_148fe8544(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_148fe859c();
  return;
}



// FUNCTION 148fe859c FUN_148fe859c body=75 status=ok
// SIG undefined FUN_148fe859c(void)

void FUN_148fe859c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*param_1 + (longlong)param_2 * 0x38);
  FUN_140c3a2ac(plVar1 + 2);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140dfab0c(param_1,param_2,1);
  return;
}



// FUNCTION 148fe85e8 FUN_148fe85e8 body=38 status=ok
// SIG undefined FUN_148fe85e8(void)

undefined8 FUN_148fe85e8(undefined8 param_1,int param_2)

{
  FUN_148fdc24e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe860e FUN_148fe860e body=68 status=ok
// SIG undefined FUN_148fe860e(void)

void FUN_148fe860e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148fe8652();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148fe8652 FUN_148fe8652 body=322 status=ok
// SIG undefined FUN_148fe8652(void)

void FUN_148fe8652(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 148fe8796 FUN_148fe8796 body=122 status=ok
// SIG undefined FUN_148fe8796(void)

longlong FUN_148fe8796(longlong param_1,longlong param_2)

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
    FUN_148fe8810(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148fe8810 FUN_148fe8810 body=251 status=ok
// SIG undefined FUN_148fe8810(void)

longlong * FUN_148fe8810(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145d5fbc0(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1404f0360(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
        if ((uVar2 >> ((uint)uVar6 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          FUN_148fe890c(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0xe0 + lVar7) = *(undefined8 *)(lVar3 + 0xe0 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0xe8;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148fe890c FUN_148fe890c body=332 status=ok
// SIG undefined FUN_148fe890c(void)

undefined4 * FUN_148fe890c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  param_1[4] = param_2[4];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 0xc);
  *(byte *)(param_1 + 0xc) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 8,param_2 + 8);
  *(undefined ***)(param_1 + 6) = &PTR_FUN_14a5af930;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  lVar3 = *(longlong *)(param_2 + 0x14);
  *(longlong *)(param_1 + 0x14) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  lVar3 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  FUN_148ff63f6(param_1 + 0x1a,param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar2 = param_2[0x20];
  _Src = *(void **)(param_2 + 0x1e);
  param_1[0x20] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_148fe8a58(param_1 + 0x1e,iVar2);
    memcpy(*(void **)(param_1 + 0x1e),_Src,(longlong)iVar2 * 0x18);
  }
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0xffffffff00000080;
  param_1[0x2f] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  FUN_14058acb2(param_1 + 0x22,param_2 + 0x22);
  return param_1;
}



// FUNCTION 148fe8a58 FUN_148fe8a58 body=106 status=ok
// SIG undefined FUN_148fe8a58(void)

undefined8 FUN_148fe8a58(longlong param_1,int param_2)

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



// FUNCTION 148fe8b20 FUN_148fe8b20 body=54 status=ok
// SIG undefined FUN_148fe8b20(void)

undefined1 FUN_148fe8b20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fe2a7c(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148fe8b7e FUN_148fe8b7e body=59 status=ok
// SIG undefined FUN_148fe8b7e(void)

undefined8 FUN_148fe8b7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe8bc4 FUN_148fe8bc4 body=34 status=ok
// SIG undefined FUN_148fe8bc4(void)

void FUN_148fe8bc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1458ea6a8(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148fe8c94 FUN_148fe8c94 body=54 status=ok
// SIG undefined FUN_148fe8c94(void)

undefined1 FUN_148fe8c94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148fe2a7c(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148fe8cf2 FUN_148fe8cf2 body=59 status=ok
// SIG undefined FUN_148fe8cf2(void)

undefined8 FUN_148fe8cf2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fe8d38 FUN_148fe8d38 body=34 status=ok
// SIG undefined FUN_148fe8d38(void)

void FUN_148fe8d38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1458ea6a8(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148fe8daa FUN_148fe8daa body=265 status=ok
// SIG undefined FUN_148fe8daa(void)

longlong * FUN_148fe8daa(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    param_1[4] = param_2[4];
  }
  else {
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
    param_1[4] = param_2[4];
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = param_2[5];
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = param_2[7];
    param_2[7] = 0;
    *(int *)(param_1 + 8) = (int)param_2[8];
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = param_2[9];
    param_2[9] = 0;
    *(int *)(param_1 + 10) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
  }
  return param_1;
}



// FUNCTION 148fe8eb3 FUN_148fe8eb3 body=73 status=ok
// SIG undefined FUN_148fe8eb3(void)

void FUN_148fe8eb3(longlong param_1,int param_2)

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



// FUNCTION 148fe8efc FUN_148fe8efc body=89 status=ok
// SIG undefined FUN_148fe8efc(void)

void FUN_148fe8efc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148fe8f56 FUN_148fe8f56 body=230 status=ok
// SIG undefined FUN_148fe8f56(void)

undefined8 * FUN_148fe8f56(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 148fe903e FUN_148fe903e body=164 status=ok
// SIG undefined FUN_148fe903e(void)

void FUN_148fe903e(longlong *param_1,undefined8 param_2)

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
        goto LAB_148fe90be;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe90be:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe90e2 FUN_148fe90e2 body=132 status=ok
// SIG undefined FUN_148fe90e2(void)

void FUN_148fe90e2(longlong param_1,int param_2)

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



// FUNCTION 148fe9168 FUN_148fe9168 body=164 status=ok
// SIG undefined FUN_148fe9168(void)

void FUN_148fe9168(longlong *param_1,undefined8 param_2)

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
        goto LAB_148fe91e8;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148fe91e8:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148fe920c FUN_148fe920c body=29 status=ok
// SIG undefined FUN_148fe920c(void)

undefined8 FUN_148fe920c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe9244 FUN_148fe9244 body=29 status=ok
// SIG undefined FUN_148fe9244(void)

bool FUN_148fe9244(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148fe9262 FUN_148fe9262 body=26 status=ok
// SIG undefined FUN_148fe9262(void)

bool FUN_148fe9262(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148fe927c FUN_148fe927c body=24 status=ok
// SIG undefined FUN_148fe927c(void)

bool FUN_148fe927c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148fe92a0 FUN_148fe92a0 body=93 status=ok
// SIG undefined FUN_148fe92a0(void)

void FUN_148fe92a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5b590;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5b520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fe92fe FUN_148fe92fe body=93 status=ok
// SIG undefined FUN_148fe92fe(void)

void FUN_148fe92fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5b590;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5b520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148fe935c FUN_148fe935c body=126 status=ok
// SIG undefined FUN_148fe935c(void)

void FUN_148fe935c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5b590;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5b520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148fe93cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148fe93da FUN_148fe93da body=44 status=ok
// SIG undefined FUN_148fe93da(void)

void FUN_148fe93da(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148fe9403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (uVar1,param_2,*(undefined8 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148fe9406 FUN_148fe9406 body=156 status=ok
// SIG undefined FUN_148fe9406(void)

bool FUN_148fe9406(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 148fe94a6 FUN_148fe94a6 body=29 status=ok
// SIG undefined FUN_148fe94a6(void)

undefined8 FUN_148fe94a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148fe94de FUN_148fe94de body=29 status=ok
// SIG undefined FUN_148fe94de(void)

bool FUN_148fe94de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148fe94fc FUN_148fe94fc body=26 status=ok
// SIG undefined FUN_148fe94fc(void)

bool FUN_148fe94fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148fe9516 FUN_148fe9516 body=24 status=ok
// SIG undefined FUN_148fe9516(void)

bool FUN_148fe9516(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}


