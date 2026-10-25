// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14614c406 FUN_14614c406 body=130 status=ok
// SIG undefined FUN_14614c406(void)

undefined8 FUN_14614c406(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14697887e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14614c488 FUN_14614c488 body=231 status=ok
// SIG undefined FUN_14614c488(void)

int * FUN_14614c488(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14614c570 FUN_14614c570 body=482 status=ok
// SIG undefined FUN_14614c570(void)

void FUN_14614c570(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 14614c754 FUN_14614c754 body=246 status=ok
// SIG undefined FUN_14614c754(void)

void FUN_14614c754(longlong *param_1,int *param_2,undefined1 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  if ((int)uVar1 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar5 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar5 >> 1) + uVar8;
      iVar4 = *(int *)(lVar3 + (ulonglong)uVar7 * 0xc) - *param_2;
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar3 + 4 + (ulonglong)uVar7 * 0xc) - param_2[1];
      }
      uVar6 = (uint)uVar5;
      if (iVar4 < 0) {
        uVar8 = uVar7 + (uVar6 & 1);
      }
      uVar5 = uVar5 >> 1;
    } while (1 < uVar6);
    if ((int)uVar8 < (int)uVar1) {
      uVar5 = (ulonglong)uVar8;
      iVar4 = *param_2 - *(int *)(lVar3 + uVar5 * 0xc);
      if (iVar4 == 0) {
        iVar4 = param_2[1] - *(int *)(lVar3 + 4 + uVar5 * 0xc);
      }
      if (-1 < iVar4) {
        puVar9 = (undefined8 *)(lVar3 + uVar5 * 0xc);
        goto LAB_14614c7fb;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_14614c84a(param_1,uVar1);
    lVar3 = *param_1;
  }
  lVar2 = (ulonglong)uVar8 * 0xc;
  memmove((void *)(lVar3 + lVar2 + 0xc),(void *)(lVar3 + lVar2),(ulonglong)(uVar1 - uVar8) * 0xc);
  puVar9 = (undefined8 *)(lVar2 + *param_1);
LAB_14614c7fb:
  *puVar9 = *(undefined8 *)param_2;
  *(undefined1 *)(puVar9 + 1) = *param_3;
  return;
}



// FUNCTION 14614c84a FUN_14614c84a body=147 status=ok
// SIG undefined FUN_14614c84a(void)

void FUN_14614c84a(longlong param_1,int param_2)

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



// FUNCTION 14614c8de FUN_14614c8de body=433 status=ok
// SIG undefined FUN_14614c8de(void)

void FUN_14614c8de(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != '\0') {
    plVar4 = (longlong *)FUN_140a68038(1);
    if (plVar4 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x110))(local_38,local_48,*(undefined4 *)(param_1 + 0x30));
        (**(code **)(*local_38 + 0x148))(local_38,&local_58,*(undefined4 *)(param_1 + 0x30));
        FUN_14614ca90(&local_68,&local_58,local_48);
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        local_58 = local_68;
        uStack_54 = uStack_64;
        uStack_50 = uStack_60;
        uStack_4c = uStack_5c;
        FUN_140056680(&local_68,L"TitleSigningInProfileText");
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x338))
                  (*(longlong **)(param_1 + 0x38),&local_68,&local_58);
        if (CONCAT44(uStack_64,local_68) != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_40 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
    }
    lVar5 = FUN_1414354ce(param_1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x48), lVar5 != 0)) {
      lVar6 = FUN_140b7066c();
      iVar3 = *(int *)(lVar6 + 0x38);
      if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
          lVar6 + 0x30)) {
        FUN_14614caaa(lVar5,CONCAT71((int7)(int3)((uint)iVar3 >> 8),
                                     (*(uint *)(param_1 + 0x44) & 0xfffffffe) == 0x1a));
      }
    }
    plVar4 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
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



// FUNCTION 14614ca90 FUN_14614ca90 body=25 status=ok
// SIG undefined FUN_14614ca90(void)

undefined8 FUN_14614ca90(undefined8 param_1)

{
  FUN_140b6e028();
  return param_1;
}



// FUNCTION 14614caaa FUN_14614caaa body=326 status=ok
// SIG undefined FUN_14614caaa(void)

void FUN_14614caaa(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)FUN_140a68038(0);
  if (plVar1 != (longlong *)0x0) {
    if ((param_2 == '\0') || (uVar2 = 1, *(char *)(param_1 + 0x3a0) != '\x03')) {
      uVar2 = 0;
    }
    if ((*(char *)(param_1 + 800) == '\x01') && (*(longlong *)(param_1 + 0x310) != 0)) {
      FUN_1400020a8();
    }
    *(undefined2 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined1 *)(param_1 + 800) = 1;
    (**(code **)(*plVar1 + 0x10))(plVar1,local_48);
    FUN_1400021e4(local_48,&local_40);
    if ((longlong *)(param_1 + 0x310) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x310) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x310) = local_40;
      *(undefined4 *)(param_1 + 0x318) = local_38;
      *(undefined4 *)(param_1 + 0x31c) = local_34;
    }
    *(undefined1 *)(param_1 + 0x308) = uVar2;
    *(undefined1 *)(param_1 + 0x309) = uVar2;
    *(undefined1 *)(param_1 + 0x328) = uVar2;
    *(undefined1 *)(param_1 + 0x329) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614cbf2 FUN_14614cbf2 body=40 status=ok
// SIG undefined FUN_14614cbf2(void)

undefined8 FUN_14614cbf2(undefined8 param_1,int param_2)

{
  FUN_14614cc1a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14614cc1a FUN_14614cc1a body=353 status=ok
// SIG undefined FUN_14614cc1a(void)

void FUN_14614cc1a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bd9dd90;
  param_1[5] = &PTR_FUN_14bd9e150;
  param_1[0x13] = &PTR_FUN_14bd9e170;
  param_1[0x16] = &PTR_FUN_14bd9e1a0;
  FUN_14598c4d0(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x44];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 14614cd7c FUN_14614cd7c body=68 status=ok
// SIG undefined FUN_14614cd7c(void)

void FUN_14614cd7c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1415e79ce();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14614cdc0 FUN_14614cdc0 body=68 status=ok
// SIG undefined FUN_14614cdc0(void)

void FUN_14614cdc0(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14614ce04();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14614ce04 FUN_14614ce04 body=325 status=ok
// SIG undefined FUN_14614ce04(void)

void FUN_14614ce04(longlong *param_1)

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



// FUNCTION 14614cf4a FUN_14614cf4a body=195 status=ok
// SIG undefined FUN_14614cf4a(void)

void FUN_14614cf4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
                  undefined4 param_9)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a95175(local_88,param_1,param_3,0);
  local_90 = param_9;
  local_a0 = param_8;
  local_a8 = param_7;
  local_b8 = param_5;
  uStack_b0 = param_6;
  local_98 = local_88;
  FUN_1415e7b14(param_1,param_2,param_3,param_4);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614d00e FUN_14614d00e body=294 status=ok
// SIG undefined FUN_14614d00e(void)

undefined4 *
FUN_14614d00e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145ace89e(param_1,local_58);
  puVar1 = (undefined4 *)param_4[1];
  *local_50 = *(undefined8 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_50 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_50 + 0xc) = uVar2;
  *(undefined4 *)(local_50 + 2) = uVar3;
  *(undefined4 *)((longlong)local_50 + 0x14) = uVar4;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar5 = FUN_145ace7fc(param_1,param_3,local_50,local_58);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145ace984(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614d136 FUN_14614d136 body=296 status=ok
// SIG undefined FUN_14614d136(void)

undefined4 * FUN_14614d136(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14614d2f0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_14614d260(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c947e88 - DAT_14c947eb4;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14c947ec8)) {
      uVar7 = DAT_14c947ec8 - 1U & uVar7;
      local_38[5] = uVar7;
      puVar6 = DAT_14c947ec0;
      if (DAT_14c947ec0 == (undefined *)0x0) {
        puVar6 = &DAT_14c947eb8;
      }
      local_38[4] = *(uint *)(puVar6 + ((longlong)DAT_14c947ec8 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14c947ec0;
      if (DAT_14c947ec0 == (undefined *)0x0) {
        puVar6 = &DAT_14c947eb8;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c947ec8 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14c947ec8 = iVar9;
      FUN_14614d3fe();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614d260 FUN_14614d260 body=143 status=ok
// SIG undefined FUN_14614d260(void)

undefined8 FUN_14614d260(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c947e88 - DAT_14c947eb4 != 1) && (DAT_14c947e88 != DAT_14c947eb4)) {
    puVar6 = &DAT_14c947eb8;
    if (DAT_14c947ec0 != (undefined *)0x0) {
      puVar6 = DAT_14c947ec0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c947ec8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(DAT_14c947e80 + (longlong)iVar5 * 0x18);
        if (*piVar1 == *param_2) {
          iVar2 = param_2[1];
          iVar3 = param_2[2];
          iVar4 = param_2[3];
          *piVar1 = *param_2;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_145db1d00(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = piVar1[4];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14614d2f0 FUN_14614d2f0 body=270 status=ok
// SIG undefined FUN_14614d2f0(void)

int * FUN_14614d2f0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c947eb0;
  iVar3 = DAT_14c947e88;
  if (DAT_14c947eb4 == 0) {
    iVar2 = DAT_14c947e88 + 1;
    bVar7 = DAT_14c947e8c == DAT_14c947e88;
    DAT_14c947e88 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c947e80,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c947e90,1);
    puVar4 = DAT_14c947ea0;
    if (DAT_14c947ea0 == (undefined *)0x0) {
      puVar4 = &DAT_14c947e90;
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
    lVar6 = (longlong)DAT_14c947eb0;
    DAT_14c947eb0 = *(int *)(DAT_14c947e80 + 4 + lVar6 * 0x18);
    DAT_14c947eb4 = DAT_14c947eb4 + -1;
    if (DAT_14c947eb4 != 0) {
      *(undefined4 *)(DAT_14c947e80 + (longlong)DAT_14c947eb0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c947e90;
  if (DAT_14c947ea0 != (undefined *)0x0) {
    puVar4 = DAT_14c947ea0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c947e80;
  return param_1;
}



// FUNCTION 14614d3fe FUN_14614d3fe body=473 status=ok
// SIG undefined FUN_14614d3fe(void)

void FUN_14614d3fe(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
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
  if (DAT_14c947ec0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c947ec0,0,0,4);
  }
  uVar2 = DAT_14c947ec8;
  uVar3 = local_50;
  if (DAT_14c947ec8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c947eb8,0,DAT_14c947ec8,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14c947ec0;
        if (DAT_14c947ec0 == (undefined *)0x0) {
          puVar6 = &DAT_14c947eb8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c947ec8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c947e90;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c947ea8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c947e80;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14c947ec8 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c947ec0;
        if (DAT_14c947ec0 == (undefined *)0x0) {
          puVar6 = &DAT_14c947eb8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c947ec8 - 1U & uVar9) * 4);
        puVar6 = DAT_14c947ec0;
        if (DAT_14c947ec0 == (undefined *)0x0) {
          puVar6 = &DAT_14c947eb8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c947ec8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614d5d8 FUN_14614d5d8 body=296 status=ok
// SIG undefined FUN_14614d5d8(void)

undefined4 * FUN_14614d5d8(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14614d792(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_14614d702(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c947ed8 - DAT_14c947f04;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14c947f18)) {
      uVar7 = DAT_14c947f18 - 1U & uVar7;
      local_38[5] = uVar7;
      puVar6 = DAT_14c947f10;
      if (DAT_14c947f10 == (undefined *)0x0) {
        puVar6 = &DAT_14c947f08;
      }
      local_38[4] = *(uint *)(puVar6 + ((longlong)DAT_14c947f18 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14c947f10;
      if (DAT_14c947f10 == (undefined *)0x0) {
        puVar6 = &DAT_14c947f08;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c947f18 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14c947f18 = iVar9;
      FUN_14614d8a0();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614d702 FUN_14614d702 body=143 status=ok
// SIG undefined FUN_14614d702(void)

undefined8 FUN_14614d702(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c947ed8 - DAT_14c947f04 != 1) && (DAT_14c947ed8 != DAT_14c947f04)) {
    puVar6 = &DAT_14c947f08;
    if (DAT_14c947f10 != (undefined *)0x0) {
      puVar6 = DAT_14c947f10;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c947f18 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(DAT_14c947ed0 + (longlong)iVar5 * 0x18);
        if (*piVar1 == *param_2) {
          iVar2 = param_2[1];
          iVar3 = param_2[2];
          iVar4 = param_2[3];
          *piVar1 = *param_2;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_145db1e50(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = piVar1[4];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14614d792 FUN_14614d792 body=270 status=ok
// SIG undefined FUN_14614d792(void)

int * FUN_14614d792(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c947f00;
  iVar3 = DAT_14c947ed8;
  if (DAT_14c947f04 == 0) {
    iVar2 = DAT_14c947ed8 + 1;
    bVar7 = DAT_14c947edc == DAT_14c947ed8;
    DAT_14c947ed8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c947ed0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c947ee0,1);
    puVar4 = DAT_14c947ef0;
    if (DAT_14c947ef0 == (undefined *)0x0) {
      puVar4 = &DAT_14c947ee0;
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
    lVar6 = (longlong)DAT_14c947f00;
    DAT_14c947f00 = *(int *)(DAT_14c947ed0 + 4 + lVar6 * 0x18);
    DAT_14c947f04 = DAT_14c947f04 + -1;
    if (DAT_14c947f04 != 0) {
      *(undefined4 *)(DAT_14c947ed0 + (longlong)DAT_14c947f00 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c947ee0;
  if (DAT_14c947ef0 != (undefined *)0x0) {
    puVar4 = DAT_14c947ef0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c947ed0;
  return param_1;
}



// FUNCTION 14614d8a0 FUN_14614d8a0 body=473 status=ok
// SIG undefined FUN_14614d8a0(void)

void FUN_14614d8a0(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
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
  if (DAT_14c947f10 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c947f10,0,0,4);
  }
  uVar2 = DAT_14c947f18;
  uVar3 = local_50;
  if (DAT_14c947f18 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c947f08,0,DAT_14c947f18,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14c947f10;
        if (DAT_14c947f10 == (undefined *)0x0) {
          puVar6 = &DAT_14c947f08;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c947f18 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c947ee0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c947ef8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c947ed0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14c947f18 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c947f10;
        if (DAT_14c947f10 == (undefined *)0x0) {
          puVar6 = &DAT_14c947f08;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c947f18 - 1U & uVar9) * 4);
        puVar6 = DAT_14c947f10;
        if (DAT_14c947f10 == (undefined *)0x0) {
          puVar6 = &DAT_14c947f08;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c947f18 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614da86 FUN_14614da86 body=385 status=ok
// SIG undefined FUN_14614da86(void)

undefined8 * FUN_14614da86(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144805d84();
  *param_1 = &PTR_FUN_14aa30ec0;
  param_1[5] = &PTR_FUN_14aa31360;
  param_1[6] = &PTR_LAB_14aa313a0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3ff00000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3ff00000;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3ff00000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3ff00000;
  param_1[0x3e] = 0x3ff0000000000000;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3ff00000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 4;
  param_1[0x50] = param_1 + 0x51;
  FUN_140396f9a();
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xa5] = DAT_14c8464e0;
  param_1[0xa6] = uVar1;
  param_1[0xa7] = DAT_14c8464f0;
  param_1[0xaa] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0xa8] = DAT_14c8464f8;
  param_1[0xa9] = uVar1;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x443b800043480000;
  *(undefined8 *)((longlong)param_1 + 300) = 0x44bb800043fa0000;
  *(undefined4 *)(param_1 + 0x40) = 0x42480000;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 0xe;
  return param_1;
}



// FUNCTION 14614dc08 FUN_14614dc08 body=39 status=ok
// SIG undefined FUN_14614dc08(void)

void FUN_14614dc08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014614dc2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14614dc30 FUN_14614dc30 body=356 status=ok
// SIG undefined FUN_14614dc30(void)

void FUN_14614dc30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  pcVar3 = *(char **)(local_38 + 0x460);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
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
  if (*pcVar3 == '\0') {
    if (*(int *)(pcVar3 + 4) != 0) goto LAB_14614dc9a;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(pcVar3 + 4) + 1;
  }
  *pcVar3 = '\0';
  *(int *)(pcVar3 + 4) = iVar5;
LAB_14614dc9a:
  FUN_140bad112(pcVar3 + 8,&DAT_149dfb77a);
  FUN_140bad112(pcVar3 + 0x20,&DAT_149dfb77a);
  FUN_140bad112(pcVar3 + 0x38,&DAT_149dfb77a);
  lVar6 = FUN_1400d7050(param_1 + 0x30);
  if (lVar6 != 0) {
    lVar7 = FUN_144a5dd5e();
    if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) && (*(int *)(lVar6 + 0xd98) != 0)) &&
       (*(longlong *)(lVar6 + 0xda0) != 0)) {
      cVar4 = FUN_140426394(lVar6 + 0xd98,&DAT_14cbd95e0);
      if (cVar4 != '\0') {
        FUN_140c125e6(lVar6 + 0xd98,&DAT_14cbd95e0);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614dd96 FUN_14614dd96 body=197 status=ok
// SIG undefined FUN_14614dd96(void)

void FUN_14614dd96(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0xa8);
    if (plVar5 == (longlong *)0x0) goto LAB_14614ddec;
    *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_14614ddcf:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14614ddec;
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
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0xa8);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0xa8) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_14614ddec;
      goto LAB_14614ddcf;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14614ddec;
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
LAB_14614ddec:
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
                    /* WARNING: Could not recover jumptable at 0x00014614de57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14614de66 FUN_14614de66 body=782 status=ok
// SIG undefined FUN_14614de66(void)

undefined8 * FUN_14614de66(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  *param_1 = &PTR_FUN_14b0db400;
  *(undefined4 *)(param_1 + 0x16) = 0x7010;
  param_1[0x17] = "camera_shake";
  lVar4 = FUN_1409ef8f6();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14614df3d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14614df3d:
  lVar4 = FUN_1409ef8f6();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_14614dfd2;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_14614dfd2:
  FUN_1400b22c2(local_58,"Feedback.Camera Shakes");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614e180 FUN_14614e180 body=782 status=ok
// SIG undefined FUN_14614e180(void)

undefined8 * FUN_14614e180(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  *param_1 = &PTR_FUN_14b385e50;
  *(undefined4 *)(param_1 + 0x16) = 0x1000;
  param_1[0x17] = "rarity";
  lVar4 = FUN_141227ea0();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14614e257;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14614e257:
  lVar4 = FUN_141227ea0();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_14614e2ec;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_14614e2ec:
  FUN_1400b22c2(local_58,"Inventory.Rarities");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614e49a FUN_14614e49a body=782 status=ok
// SIG undefined FUN_14614e49a(void)

undefined8 * FUN_14614e49a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  *param_1 = &PTR_FUN_14b3880c0;
  *(undefined4 *)(param_1 + 0x16) = 0xb000;
  param_1[0x17] = "loot_config";
  lVar4 = FUN_1414d8654();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14614e571;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14614e571:
  lVar4 = FUN_1414d8654();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_14614e606;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_14614e606:
  FUN_1400b22c2(local_58,"Loot.Loot Configs");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614e7b4 FUN_14614e7b4 body=782 status=ok
// SIG undefined FUN_14614e7b4(void)

undefined8 * FUN_14614e7b4(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  *param_1 = &PTR_FUN_14b3af470;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0008;
  param_1[0x17] = "PerchUser";
  FUN_1400b22c2(local_58,"AI.PerchUser");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_140358896();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14614e8ac;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14614e8ac:
  lVar4 = FUN_140358896();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_14614e941;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_14614e941:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614eace FUN_14614eace body=782 status=ok
// SIG undefined FUN_14614eace(void)

undefined8 * FUN_14614eace(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  *param_1 = &PTR_FUN_14b6b50e0;
  *(undefined4 *)(param_1 + 0x16) = 0xdefa176;
  param_1[0x17] = "profile_defaults_display_data";
  FUN_1400b22c2(local_58,"UI.Profile Vault Defaults Display Data");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145ad3742();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14614ebc6;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14614ebc6:
  lVar4 = FUN_145ad3742();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_14614ec5b;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_14614ec5b:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614ede8 FUN_14614ede8 body=782 status=ok
// SIG undefined FUN_14614ede8(void)

undefined8 * FUN_14614ede8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  *param_1 = &PTR_FUN_14b72c9f0;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0002;
  param_1[0x17] = "critter";
  FUN_1400b22c2(local_58,"AI.Critter");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_1402d1c56();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14614eee0;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14614eee0:
  lVar4 = FUN_1402d1c56();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_14614ef75;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_14614ef75:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614f0f8 FUN_14614f0f8 body=53 status=ok
// SIG undefined FUN_14614f0f8(void)

void FUN_14614f0f8(longlong *param_1)

{
  FUN_14614f12e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14614f12e FUN_14614f12e body=343 status=ok
// SIG undefined FUN_14614f12e(void)

void FUN_14614f12e(longlong *param_1)

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
      FUN_148fe2dd4(*local_68 + (longlong)iStack_4c * 0x80 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
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



// FUNCTION 14614f286 FUN_14614f286 body=70 status=ok
// SIG undefined FUN_14614f286(void)

void FUN_14614f286(longlong param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_148cd4da6(param_1);
  }
  FUN_1447f69b6(param_1 + 0x18);
  FUN_14614f2cc(param_1,*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 5;
  FUN_145c7c2ca(param_1);
  return;
}



// FUNCTION 14614f2cc FUN_14614f2cc body=426 status=ok
// SIG undefined FUN_14614f2cc(void)

void FUN_14614f2cc(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
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
  lVar2 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar2 != 0) {
    lVar3 = FUN_1447210f0(lVar2);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar4 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_b0[2] = lVar5;
      *local_b0 = &PTR_FUN_14b95eba0;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,lVar2);
      puVar4[4] = lVar2;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_b8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar1,param_1 + 0x98,&local_98,param_2);
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



// FUNCTION 14614f478 FUN_14614f478 body=205 status=ok
// SIG undefined FUN_14614f478(void)

void FUN_14614f478(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = 0x68;
  do {
    (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_28);
    plVar2 = (longlong *)(param_1 + lVar5);
    if (plVar2 == &local_28) {
LAB_14614f521:
      if (local_28 != 0) {
        LOCK();
        puVar1 = (uint *)(local_28 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    else {
      lVar4 = *plVar2;
      *plVar2 = local_28;
      local_28 = 0;
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        goto LAB_14614f521;
      }
    }
    lVar5 = lVar5 + 0x60;
    if (lVar5 == 0x368) {
      FUN_14614f546(*(undefined8 *)(param_1 + 0x310));
      if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14614f546 FUN_14614f546 body=191 status=ok
// SIG undefined FUN_14614f546(void)

void FUN_14614f546(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) goto LAB_14614f5aa;
  local_28 = 0;
  (**(code **)(*DAT_14ca83900 + 0xb8))(DAT_14ca83900,&local_20);
  if (&local_20 == param_1) {
LAB_14614f5e1:
    if (local_20 != 0) {
      LOCK();
      puVar1 = (uint *)(local_20 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar3 = *param_1;
    *param_1 = local_20;
    local_20 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_14614f5e1;
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
LAB_14614f5aa:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614f606 FUN_14614f606 body=429 status=ok
// SIG undefined FUN_14614f606(void)

void FUN_14614f606(undefined8 param_1,longlong param_2)

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
      local_38 = (code *)&LAB_148e93af4;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14614f8da(param_1,param_2,&DAT_14cbc9d40,param_1);
      local_38 = (code *)&LAB_148e93b0a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14614f8da(param_1,param_2,&DAT_14cbc9d58,param_1);
      local_38 = (code *)&LAB_148e93b16;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14614f8da(param_1,param_2,&DAT_14cbc9d50,param_1);
      local_38 = (code *)&LAB_148e93b24;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14614f7b4(param_1,param_2,&DAT_14cbc9d48,param_1);
      local_38 = FUN_148e93b2a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14614f7b4(param_1,param_2,&DAT_14cbc9d60,param_1);
      local_38 = FUN_1442d4962;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14614f7b4(param_1,param_2,&DAT_14cbc9d68,param_1);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_14614fa00(param_1,param_2,param_1,&local_38);
      local_38 = FUN_148e93e70;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14614f7b4(param_1,param_2,&DAT_14cbc9d70,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614f7b4 FUN_14614f7b4 body=293 status=ok
// SIG undefined FUN_14614f7b4(void)

void FUN_14614f7b4(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_1415e9040(param_2,param_3,param_4);
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



// FUNCTION 14614f8da FUN_14614f8da body=293 status=ok
// SIG undefined FUN_14614f8da(void)

void FUN_14614f8da(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_1415e90c4(param_2,param_3,param_4);
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



// FUNCTION 14614fa00 FUN_14614fa00 body=349 status=ok
// SIG undefined FUN_14614fa00(void)

void FUN_14614fa00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  uVar4 = FUN_1415e9148(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1415e9148(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1415e9148(param_2,0x10,param_3);
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



// FUNCTION 14614fb64 FUN_14614fb64 body=233 status=ok
// SIG undefined FUN_14614fb64(void)

void FUN_14614fb64(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x58);
    if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      if (lVar3 != 0) {
        lVar3 = FUN_14614fc62(lVar3);
        if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
        lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
        local_48 = FUN_148dfea52;
        local_40 = 0;
        FUN_148dfee4c(local_38,param_1);
        FUN_148dd6732(lVar3 + 8,&local_48,local_38);
        FUN_1449db362(local_38);
        *(code **)(param_1 + 0x70) = local_48;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614fc62 FUN_14614fc62 body=102 status=ok
// SIG undefined FUN_14614fc62(void)

void FUN_14614fc62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458ce0a2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14614fcca FUN_14614fcca body=404 status=ok
// SIG undefined FUN_14614fcca(void)

void FUN_14614fcca(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14485c47a(param_1 + 0x68);
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (cVar2 = FUN_144729dda(param_1 + 0x58), cVar2 != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_14480f766(lVar3 + 8);
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      lVar3 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3) != 0)) {
          uVar5 = FUN_14479d2ce(param_1 + 0x68);
          local_58 = 0;
          local_48 = &PTR_LAB_14b9a06d0;
          local_68 = &DAT_148dfeaa6;
          local_40 = param_1;
          FUN_145cd62f0(uVar5);
          break;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x20) * 0x10 != lVar3);
    }
    lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    if (lVar3 != 0) {
      lVar4 = FUN_144a2f878();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        local_88 = &DAT_148dfea9c;
        local_80 = 0;
        FUN_14614fe60(local_78,param_1);
        FUN_145dcbba0(lVar3 + 0x6e58,&local_88,local_78);
        FUN_1449db362(local_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14614fe60 FUN_14614fe60 body=428 status=ok
// SIG undefined FUN_14614fe60(void)

longlong * FUN_14614fe60(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14614ff40:
    *puVar5 = &PTR_LAB_14b99d2a0;
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
    *puVar5 = &PTR_FUN_14b9a06f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14614ff40;
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
    *puVar5 = &PTR_LAB_14b99d2a0;
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
    *puVar5 = &PTR_FUN_14b9a06f0;
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



// FUNCTION 14615000c FUN_14615000c body=63 status=ok
// SIG undefined FUN_14615000c(void)

void FUN_14615000c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14615004c(param_1);
    FUN_1456b4712(param_1);
    return;
  }
  FUN_1456b4712(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_146038584(param_1);
  return;
}



// FUNCTION 14615004c FUN_14615004c body=335 status=ok
// SIG undefined FUN_14615004c(void)

void FUN_14615004c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x20 + (longlong)iVar4 * 0x24) * 4) =
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



// FUNCTION 14615019c FUN_14615019c body=63 status=ok
// SIG undefined FUN_14615019c(void)

void FUN_14615019c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1461501dc(param_1);
    FUN_1456b476c(param_1);
    return;
  }
  FUN_1456b476c(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14603874a(param_1);
  return;
}



// FUNCTION 1461501dc FUN_1461501dc body=335 status=ok
// SIG undefined FUN_1461501dc(void)

void FUN_1461501dc(longlong *param_1)

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



// FUNCTION 14615032c FUN_14615032c body=63 status=ok
// SIG undefined FUN_14615032c(void)

void FUN_14615032c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14615036c(param_1);
    FUN_145b068b2(param_1);
    return;
  }
  FUN_145b068b2(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_141795950(param_1);
  return;
}



// FUNCTION 14615036c FUN_14615036c body=335 status=ok
// SIG undefined FUN_14615036c(void)

void FUN_14615036c(longlong *param_1)

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



// FUNCTION 1461504bc FUN_1461504bc body=54 status=ok
// SIG undefined FUN_1461504bc(void)

void FUN_1461504bc(void)

{
  FUN_1461504f2();
  if (DAT_14cb38488 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb38468 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461504f2 FUN_1461504f2 body=344 status=ok
// SIG undefined FUN_1461504f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461504f2(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb38478;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb38490 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb38468;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_1449db362(*local_58 + (longlong)iStack_3c * 0x20 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb38470 = 0;
  if (DAT_14cb38474 != 0) {
    FUN_1446f4a44(&DAT_14cb38468,0);
  }
  _DAT_14cb38498 = 0xffffffff;
  DAT_14cb38490 = 0;
  if (0x80 < DAT_14cb38494) {
    DAT_14cb38494 = 0x80;
    FUN_1446efbd8(&DAT_14cb38478,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615064c FUN_14615064c body=63 status=ok
// SIG undefined FUN_14615064c(void)

void FUN_14615064c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14615068c(param_1);
    FUN_145ec3f54(param_1);
    return;
  }
  FUN_145ec3f54(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14883fb26(param_1);
  return;
}



// FUNCTION 14615068c FUN_14615068c body=335 status=ok
// SIG undefined FUN_14615068c(void)

void FUN_14615068c(longlong *param_1)

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



// FUNCTION 1461507dc FUN_1461507dc body=63 status=ok
// SIG undefined FUN_1461507dc(void)

void FUN_1461507dc(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14615081c(param_1);
    FUN_145cbf824(param_1);
    return;
  }
  FUN_145cbf824(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1489d76a8(param_1);
  return;
}



// FUNCTION 14615081c FUN_14615081c body=335 status=ok
// SIG undefined FUN_14615081c(void)

void FUN_14615081c(longlong *param_1)

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



// FUNCTION 14615096c FUN_14615096c body=63 status=ok
// SIG undefined FUN_14615096c(void)

void FUN_14615096c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1461509ac(param_1);
    FUN_145cbf9a0(param_1);
    return;
  }
  FUN_145cbf9a0(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1489da1f0(param_1);
  return;
}



// FUNCTION 1461509ac FUN_1461509ac body=335 status=ok
// SIG undefined FUN_1461509ac(void)

void FUN_1461509ac(longlong *param_1)

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



// FUNCTION 146150afc FUN_146150afc body=63 status=ok
// SIG undefined FUN_146150afc(void)

void FUN_146150afc(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146150b3c(param_1);
    FUN_146012990(param_1);
    return;
  }
  FUN_146012990(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_148fc4ee8(param_1);
  return;
}



// FUNCTION 146150b3c FUN_146150b3c body=335 status=ok
// SIG undefined FUN_146150b3c(void)

void FUN_146150b3c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 146150c8c FUN_146150c8c body=63 status=ok
// SIG undefined FUN_146150c8c(void)

void FUN_146150c8c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146150ccc(param_1);
    FUN_145af7a76(param_1);
    return;
  }
  FUN_145af7a76(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14906df5c(param_1);
  return;
}



// FUNCTION 146150ccc FUN_146150ccc body=335 status=ok
// SIG undefined FUN_146150ccc(void)

void FUN_146150ccc(longlong *param_1)

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



// FUNCTION 146150e1c FUN_146150e1c body=53 status=ok
// SIG undefined FUN_146150e1c(void)

void FUN_146150e1c(longlong *param_1)

{
  FUN_146150e52();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146150e52 FUN_146150e52 body=345 status=ok
// SIG undefined FUN_146150e52(void)

void FUN_146150e52(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
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



// FUNCTION 146150fac FUN_146150fac body=560 status=ok
// SIG undefined FUN_146150fac(void)

void FUN_146150fac(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  HMONITOR hMonitor;
  ULONG_PTR UVar4;
  DWORD dwFlags;
  uint uVar5;
  int iVar6;
  undefined1 auStackY_a8 [32];
  tagMONITORINFO local_68;
  tagRECT local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  uVar1 = *(uint *)(param_1 + 7);
  if (uVar1 != param_2) {
    *(uint *)(param_1 + 7) = param_2;
    uVar3 = GetWindowLongW((HWND)param_1[5],-0x10);
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x25) == '\x01') {
      uVar5 = (uint)*(byte *)(lVar2 + 0x26) * 0x40000 +
              ((uint)*(byte *)(lVar2 + 0x22) << 0x11 | (uint)*(byte *)(lVar2 + 0x23) << 0x10) +
              0xc80000;
    }
    else {
      uVar5 = 0x80c80000;
    }
    if (param_2 < 2) {
      if (uVar1 == 2) {
        *(undefined4 *)(param_1 + 8) = 0x2c;
        GetWindowPlacement((HWND)param_1[5],(WINDOWPLACEMENT *)(param_1 + 8));
      }
      SetWindowLongW((HWND)param_1[5],-0x10,uVar3 & ~uVar5 | 0x80000000);
      SetWindowPos((HWND)param_1[5],(HWND)0x0,0,0,0,0,0x27);
      if (param_2 == 0) {
        dwFlags = 1;
      }
      else {
        ShowWindow((HWND)param_1[5],9);
        dwFlags = 2;
      }
      GetClientRect((HWND)param_1[5],&local_40);
      hMonitor = MonitorFromWindow((HWND)param_1[5],dwFlags);
      local_68.cbSize = 0x28;
      GetMonitorInfoW(hMonitor,&local_68);
      iVar6 = local_68.rcMonitor.right - local_68.rcMonitor.left;
      if ((param_2 == 0) && (local_40.right - local_40.left <= iVar6)) {
        iVar6 = local_40.right - local_40.left;
      }
      (**(code **)(*param_1 + 8))(param_1,local_68.rcMonitor.left,local_68.rcMonitor.top,iVar6);
    }
    else {
      SetWindowLongW((HWND)param_1[5],-0x10,uVar5 | uVar3 & 0x7fffffff);
      SetWindowPos((HWND)param_1[5],(HWND)0x0,0,0,0,0,0x27);
      if ((int)param_1[8] != 0) {
        SetWindowPlacement((HWND)param_1[5],(WINDOWPLACEMENT *)(param_1 + 8));
      }
      UVar4 = GetClassLongPtrW((HWND)param_1[5],-0xe);
      if (UVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStackY_a8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStackY_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146151200 FUN_146151200 body=578 status=ok
// SIG undefined FUN_146151200(void)

void FUN_146151200(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  HRGN hRgn;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStackY_c8 [32];
  tagRECT local_88;
  tagWINDOWINFO local_74;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStackY_c8;
  local_74.dwStyle = 0;
  local_74.dwExStyle = 0;
  local_74.dwWindowStatus = 0;
  local_74.cxWindowBorders = 0;
  local_74.rcClient.left = 0;
  local_74.rcClient.top = 0;
  local_74.rcClient.right = 0;
  local_74.rcClient.bottom = 0;
  local_74.rcWindow.left = 0;
  local_74.rcWindow.top = 0;
  local_74.rcWindow.right = 0;
  local_74.rcWindow.bottom = 0;
  local_74.cyWindowBorders = 0;
  local_74.atomWindowType = 0;
  local_74.wCreatorVersion = 0;
  local_74.cbSize = 0x3c;
  GetWindowInfo((HWND)param_1[5],&local_74);
  *(float *)(param_1 + 0x14) = (float)param_4 / (float)param_5;
  if (((DAT_14c867cd8 == '\x01') && (param_1[5] == DAT_14c867ce0)) && ((int)param_1[7] == 2)) {
    *(int *)(param_1 + 0x13) = param_4;
    *(int *)(param_1 + 6) = param_4;
    *(int *)((longlong)param_1 + 0x9c) = param_5;
    *(int *)((longlong)param_1 + 0x34) = param_5;
  }
  else {
    if (*(char *)(param_1[1] + 0x18) == '\x01') {
      local_88.left = 0;
      local_88.top = 0;
      local_88.right = 0;
      local_88.bottom = 0;
      AdjustWindowRectEx(&local_88,local_74.dwStyle,0,local_74.dwExStyle);
      param_2 = param_2 + local_88.left;
      param_4 = (param_4 - local_88.left) + local_88.right;
      param_3 = param_3 + local_88.top;
      param_5 = (param_5 - local_88.top) + local_88.bottom;
    }
    bVar9 = true;
    if (param_4 == (int)param_1[0x13]) {
      bVar9 = param_5 != *(int *)((longlong)param_1 + 0x9c);
    }
    *(int *)(param_1 + 0x13) = param_4;
    *(int *)((longlong)param_1 + 0x9c) = param_5;
    lVar1 = param_1[1];
    if (*(char *)(lVar1 + 0x27) == '\x01') {
      iVar5 = local_74.rcWindow.right - local_74.rcWindow.left;
      iVar6 = local_74.rcWindow.bottom - local_74.rcWindow.top;
      iVar7 = *(int *)(lVar1 + 0x2c);
      if (*(int *)(lVar1 + 0x2c) == -1) {
        iVar7 = iVar5;
      }
      iVar4 = *(int *)(lVar1 + 0x30);
      if (*(int *)(lVar1 + 0x30) == -1) {
        iVar4 = iVar6;
      }
      if (iVar5 < iVar7) {
        iVar7 = iVar5;
      }
      if (param_4 < iVar7) {
        param_4 = iVar7;
      }
      if (iVar6 < iVar4) {
        iVar4 = iVar6;
      }
      if (param_5 < iVar4) {
        param_5 = iVar4;
      }
    }
    cVar3 = (**(code **)(*param_1 + 0x70))(param_1);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    bVar8 = false;
    SetWindowPos((HWND)param_1[5],(HWND)0x0,param_2,param_3,param_4,param_5,
                 (uint)((int)param_1[7] == 0) << 10 | 0x14);
    piVar2 = (int *)param_1[1];
    if (*piVar2 != 1) {
      bVar8 = 0 < piVar2[0x13];
    }
    if (((char)piVar2[6] == '\0') &&
       ((bVar9 || (*(byte *)((longlong)piVar2 + 0x27) & 1) != 0) || bVar8)) {
      param_1[6] = param_1[0x13];
      hRgn = (HRGN)FUN_1402f0a4a(param_1,1);
      SetWindowRgn((HWND)param_1[5],hRgn,0);
    }
  }
  if ((local_38 ^ (ulonglong)auStackY_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146151444 FUN_146151444 body=24 status=ok
// SIG undefined FUN_146151444(void)

bool FUN_146151444(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = IsZoomed(*(HWND *)(param_1 + 0x28));
  return BVar1 != 0;
}



// FUNCTION 14615145c FUN_14615145c body=310 status=ok
// SIG undefined FUN_14615145c(void)

void FUN_14615145c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  local_60 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_58 = (undefined4)uStack_20;
  uStack_54 = uStack_20._4_4_;
  uStack_50 = (undefined4)local_18;
  uStack_4c = local_18._4_4_;
  FUN_146151594(&local_60,&local_48);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146151594 FUN_146151594 body=124 status=ok
// SIG undefined FUN_146151594(void)

void FUN_146151594(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146151622(param_1,&local_28);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(local_28 + 0x180) = *param_2;
  *(undefined4 *)(local_28 + 0x184) = uVar2;
  *(undefined4 *)(local_28 + 0x188) = uVar3;
  *(undefined4 *)(local_28 + 0x18c) = uVar4;
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



// FUNCTION 146151622 FUN_146151622 body=144 status=ok
// SIG undefined FUN_146151622(void)

undefined8 * FUN_146151622(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461516b6 FUN_1461516b6 body=187 status=ok
// SIG undefined FUN_1461516b6(void)

void FUN_1461516b6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  (**(code **)(*param_1 + 0x350))();
  FUN_146151772(DAT_14c98e618,param_2,2);
  plVar2 = (longlong *)param_1[0x27];
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        plVar3 = (longlong *)param_1[0x26];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
        }
        FUN_1401861f4(param_1 + 0x54,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x00014615176d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x10))(plVar2);
            return;
          }
        }
        return;
      }
    }
  }
  FUN_1401861f4(param_1 + 0x54,param_2);
  return;
}



// FUNCTION 146151772 FUN_146151772 body=196 status=ok
// SIG undefined FUN_146151772(void)

void FUN_146151772(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar4 = *(longlong **)(param_1 + 0x3b8);
  if (plVar4 != (longlong *)0x0) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_146151793;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    lVar5 = *(longlong *)(param_1 + 0x3b0);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_28 = lVar5;
      local_20 = plVar4;
      FUN_1410a3d58(param_1,param_2,&local_28,param_3);
      plVar1 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_20 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_146151793:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146151848 FUN_146151848 body=323 status=ok
// SIG undefined FUN_146151848(void)

undefined4 * FUN_146151848(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146151a2e(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14615198c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146151b16(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615198c FUN_14615198c body=161 status=ok
// SIG undefined FUN_14615198c(void)

undefined8 FUN_14615198c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          puVar1 = (undefined8 *)plVar5[1];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)*param_3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar2;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar3;
          FUN_147bd2508(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146151a2e FUN_146151a2e body=231 status=ok
// SIG undefined FUN_146151a2e(void)

int * FUN_146151a2e(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146151b16 FUN_146151b16 body=483 status=ok
// SIG undefined FUN_146151b16(void)

void FUN_146151b16(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
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



// FUNCTION 146151cfa FUN_146151cfa body=53 status=ok
// SIG undefined FUN_146151cfa(void)

void FUN_146151cfa(longlong *param_1)

{
  FUN_146151d30();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146151d30 FUN_146151d30 body=346 status=ok
// SIG undefined FUN_146151d30(void)

void FUN_146151d30(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 146151e8c FUN_146151e8c body=53 status=ok
// SIG undefined FUN_146151e8c(void)

void FUN_146151e8c(longlong *param_1)

{
  FUN_146151ec2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146151ec2 FUN_146151ec2 body=346 status=ok
// SIG undefined FUN_146151ec2(void)

void FUN_146151ec2(longlong *param_1)

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



// FUNCTION 14615201e FUN_14615201e body=53 status=ok
// SIG undefined FUN_14615201e(void)

void FUN_14615201e(longlong *param_1)

{
  FUN_146152054();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146152054 FUN_146152054 body=346 status=ok
// SIG undefined FUN_146152054(void)

void FUN_146152054(longlong *param_1)

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



// FUNCTION 1461521b0 FUN_1461521b0 body=53 status=ok
// SIG undefined FUN_1461521b0(void)

void FUN_1461521b0(longlong *param_1)

{
  FUN_1461521e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461521e6 FUN_1461521e6 body=346 status=ok
// SIG undefined FUN_1461521e6(void)

void FUN_1461521e6(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_14018802a();
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



// FUNCTION 14615234c FUN_14615234c body=388 status=ok
// SIG undefined FUN_14615234c(void)

undefined8 * FUN_14615234c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aa0ce2();
  *param_1 = &PTR_FUN_14b4c8df0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0x101;
  lVar1 = FUN_1458f2dd6();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x74] = lVar1;
    if (lVar1 != 0) goto LAB_1461523f9;
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[0x74] = lVar1;
LAB_1461523f9:
    lVar2 = FUN_1411bcc5e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = param_1[0x74];
      goto LAB_14615242d;
    }
  }
  lVar1 = 0;
LAB_14615242d:
  local_20 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  if (param_1 + 0x72 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x72] != 0) {
      FUN_1400020a8();
    }
    param_1[0x72] = local_30;
    *(undefined4 *)(param_1 + 0x73) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x39c) = local_24;
  }
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 0xe;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461524d2 FUN_1461524d2 body=53 status=ok
// SIG undefined FUN_1461524d2(void)

void FUN_1461524d2(longlong *param_1)

{
  FUN_146152508();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146152508 FUN_146152508 body=346 status=ok
// SIG undefined FUN_146152508(void)

void FUN_146152508(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 146152664 FUN_146152664 body=53 status=ok
// SIG undefined FUN_146152664(void)

void FUN_146152664(longlong *param_1)

{
  FUN_14615269a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14615269a FUN_14615269a body=346 status=ok
// SIG undefined FUN_14615269a(void)

void FUN_14615269a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 1461527fe FUN_1461527fe body=392 status=ok
// SIG undefined FUN_1461527fe(void)

undefined8 * FUN_1461527fe(undefined8 *param_1)

{
  FUN_1412c18ae();
  *param_1 = &PTR_FUN_14bdb7bb0;
  param_1[5] = &PTR_FUN_14bdb7f50;
  param_1[0x13] = &PTR_FUN_14bdb7f70;
  param_1[0x17] = &PTR_FUN_14bdb7fa0;
  param_1[0x18] = &PTR_FUN_14bdb7fb0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3ff00000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0x3ff0000000000000;
  param_1[0x3f] = 0x3ff0000000000000;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x200000000;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[99] = &DAT_100000004;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  return param_1;
}



// FUNCTION 146152986 FUN_146152986 body=475 status=ok
// SIG undefined FUN_146152986(void)

/* WARNING: Removing unreachable block (ram,0x000146152b01) */

void FUN_146152986(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140115e24();
  lVar6 = FUN_146152bf5(param_1);
  *(longlong *)(param_1 + 0x5b0) = lVar6;
  lVar4 = *(longlong *)(param_1 + 0x5b8);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *(longlong *)(lVar4 + 0x620) = lVar6;
  lVar4 = *(longlong *)(param_1 + 0x5b8);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  if (param_1 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    FUN_1400bbfae(&local_50,param_1);
    uStack_70 = CONCAT44(uStack_4c,local_50);
    local_68 = CONCAT44(uStack_44,uStack_48);
    if (uStack_60 != 0) {
      FUN_1400020a8();
    }
    uStack_60 = CONCAT44(uStack_3c,local_40);
    local_58 = CONCAT44(uStack_34,uStack_38);
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    if (cVar5 != '\0') {
      uVar3 = *(uint *)(param_1 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        local_78 = 0;
        goto LAB_146152a4e;
      }
    }
    FUN_14485c47a(&local_78,param_1);
  }
LAB_146152a4e:
  iVar2 = *(int *)(lVar4 + 0x638);
  lVar6 = (longlong)iVar2;
  *(uint *)(lVar4 + 0x638) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x63c) < iVar2 + 1U) {
    FUN_146152b62((longlong *)(lVar4 + 0x630),iVar2);
  }
  lVar4 = *(longlong *)(lVar4 + 0x630);
  *(undefined8 *)(lVar4 + lVar6 * 0x28) = local_78;
  puVar1 = (undefined4 *)(lVar4 + 8 + lVar6 * 0x28);
  *puVar1 = (undefined4)uStack_70;
  puVar1[1] = uStack_70._4_4_;
  puVar1[2] = (undefined4)local_68;
  puVar1[3] = local_68._4_4_;
  *(longlong *)(lVar4 + 0x18 + lVar6 * 0x28) = uStack_60;
  uStack_60 = 0;
  *(undefined4 *)(lVar4 + 0x20 + lVar6 * 0x28) = (undefined4)local_58;
  *(undefined4 *)(lVar4 + 0x24 + lVar6 * 0x28) = local_58._4_4_;
  uVar7 = FUN_14091baa4();
  *(undefined8 *)(param_1 + 0x5d0) = uVar7;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146152b62 FUN_146152b62 body=147 status=ok
// SIG undefined FUN_146152b62(void)

void FUN_146152b62(longlong param_1,int param_2)

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



// FUNCTION 146152bf5 FUN_146152bf5 body=177 status=ok
// SIG undefined FUN_146152bf5(void)

undefined8 FUN_146152bf5(undefined8 param_1)

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
  local_b8 = FUN_145986356();
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



// FUNCTION 146152ca8 FUN_146152ca8 body=132 status=ok
// SIG undefined FUN_146152ca8(void)

void FUN_146152ca8(longlong param_1,int param_2)

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



// FUNCTION 146152d2c FUN_146152d2c body=103 status=ok
// SIG undefined FUN_146152d2c(void)

ulonglong FUN_146152d2c(longlong param_1)

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
LAB_146152d76:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146152d76;
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



// FUNCTION 146152d94 FUN_146152d94 body=48 status=ok
// SIG undefined FUN_146152d94(void)

void FUN_146152d94(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000146152dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 146152dc4 FUN_146152dc4 body=563 status=ok
// SIG undefined FUN_146152dc4(void)

undefined8 FUN_146152dc4(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0x491) == '\0') && (*(char *)(param_1 + 0x492) == '\0')) &&
     (DAT_14c872bf0 == '\0')) {
    plVar6 = DAT_14cabd158;
    if (((DAT_14c846b14 == '\x01') && ((DAT_14ca9a35c & 1) != 0)) && (DAT_14ca84e78 != '\x01')) {
      if (DAT_14cabd108 == 0) goto LAB_146152df0;
      plVar6 = (longlong *)(DAT_14cabd108 + 0x10);
    }
    if (plVar6 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar6 + 0x68))(plVar6);
      if ((cVar2 != '\0') || (cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6), cVar2 != '\0')) {
        (**(code **)(*plVar6 + 0x50))(plVar6);
        uVar5 = 1;
        goto LAB_146152f0b;
      }
      (**(code **)(*plVar6 + 0x80))(plVar6,L"AltStartupMovies",0,0);
      (**(code **)(*plVar6 + 0x48))(plVar6);
    }
  }
LAB_146152df0:
  lVar4 = FUN_1447210f0(param_1);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x478);
    local_70 = 0xffffffff;
    local_78 = 0;
    iVar3 = FUN_1447ee042(puVar1,&DAT_149e0635c,1,1);
    if (iVar3 == -1) {
      FUN_146152ff8(lVar4,puVar1,1,1);
    }
    else {
      local_48 = (undefined2 *)0x0;
      uStack_40 = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_140056680(local_68,&DAT_149e0635c);
      local_70 = 0;
      local_78 = 1;
      FUN_1407cdbc6(puVar1,local_68,local_58 + 2,local_58);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x480) != 0) {
        puVar8 = (undefined2 *)*puVar1;
      }
      puVar7 = &DAT_149dfb77a;
      if ((int)uStack_40 != 0) {
        puVar7 = local_48;
      }
      FUN_140002266(local_68,L"%ls?travelstation=%ls",puVar7,puVar8);
      FUN_146152ff8(lVar4,local_68,1,1);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  uVar5 = 0;
LAB_146152f0b:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146152ff8 FUN_146152ff8 body=191 status=ok
// SIG undefined FUN_146152ff8(void)

ulonglong FUN_146152ff8(longlong param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x708))(plVar1,param_2,param_3);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_146153083;
    }
  }
  *(byte *)(param_1 + 0x759) = ((byte)param_3 ^ 1) * '\x02';
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(int *)(param_1 + 0x768) < 2) {
    lVar3 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
    if ((byte)(*(byte *)(lVar3 + 0x88) ^ 1 | param_4) == 1) {
      FUN_144a787a6(param_1 + 0x760,param_2);
      if (plVar1 == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0x740) = 0;
      }
      else if (param_4 == 0) {
        (**(code **)(*plVar1 + 0x710))(plVar1,param_2,param_3);
      }
    }
  }
LAB_146153083:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1461530b8 FUN_1461530b8 body=54 status=ok
// SIG undefined FUN_1461530b8(void)

void FUN_1461530b8(void)

{
  FUN_1461530ee();
  if (DAT_14ca80488 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80468 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461530ee FUN_1461530ee body=347 status=ok
// SIG undefined FUN_1461530ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461530ee(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca80478;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca80490 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca80468;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 0x10 + (longlong)iStack_3c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14ca80470 = 0;
  if (DAT_14ca80474 != 0) {
    FUN_140549ad6(&DAT_14ca80468,0);
  }
  _DAT_14ca80498 = 0xffffffff;
  DAT_14ca80490 = 0;
  if (0x80 < DAT_14ca80494) {
    DAT_14ca80494 = 0x80;
    FUN_1446efbd8(&DAT_14ca80478,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615324a FUN_14615324a body=54 status=ok
// SIG undefined FUN_14615324a(void)

void FUN_14615324a(void)

{
  FUN_146153280();
  if (DAT_14cb0adc8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0ada8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146153280 FUN_146153280 body=347 status=ok
// SIG undefined FUN_146153280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146153280(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb0adb8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb0add0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb0ada8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DAT_14cb0adb0 = 0;
  if (DAT_14cb0adb4 != 0) {
    FUN_1446f4a44(&DAT_14cb0ada8,0);
  }
  _DAT_14cb0add8 = 0xffffffff;
  DAT_14cb0add0 = 0;
  if (0x80 < DAT_14cb0add4) {
    DAT_14cb0add4 = 0x80;
    FUN_1446efbd8(&DAT_14cb0adb8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461533e8 FUN_1461533e8 body=391 status=ok
// SIG undefined FUN_1461533e8(void)

undefined8 * FUN_1461533e8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar3 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar3);
  *param_1 = &PTR_FUN_14ac74710;
  param_1[5] = &PTR_FUN_14ac75110;
  param_1[6] = &PTR_LAB_14ac75150;
  param_1[0x55] = &PTR_FUN_14ac751a0;
  param_1[0x56] = &PTR_FUN_14ac75220;
  param_1[0x57] = &PTR_FUN_14ac75230;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined8 *)((longlong)param_1 + 0x639) = 0;
  *(undefined8 *)((longlong)param_1 + 0x641) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  FUN_14112fbd2(param_1 + 0xcd);
  param_1[0x11f] = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x904) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x90c) = 0;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  *(undefined1 *)((longlong)param_1 + 0x92c) = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  *(undefined1 *)((longlong)param_1 + 0x934) = 0;
  for (puVar2 = param_1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[4]) {
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) goto LAB_146153500;
  }
  if (param_1[0xc6] == 0) {
    plVar1 = param_1 + 0xc4;
    param_1[199] = &DAT_14cb242c0;
    param_1[0xc6] = param_1;
    lVar4 = DAT_14cb242c0;
    while( true ) {
      param_1[0xc4] = lVar4;
      LOCK();
      lVar5 = *(longlong *)param_1[199];
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *(longlong *)param_1[199] = (longlong)plVar1;
        lVar5 = lVar4;
      }
      UNLOCK();
      if (bVar6) break;
      param_1[0xc4] = lVar5;
      lVar4 = *(longlong *)param_1[199];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
LAB_146153500:
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  return param_1;
}



// FUNCTION 146153570 FUN_146153570 body=54 status=ok
// SIG undefined FUN_146153570(void)

void FUN_146153570(void)

{
  FUN_1461535a6();
  if (DAT_14cb7bfb0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7bf90 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461535a6 FUN_1461535a6 body=347 status=ok
// SIG undefined FUN_1461535a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461535a6(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb7bfa0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb7bfb8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb7bf90;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DAT_14cb7bf98 = 0;
  if (DAT_14cb7bf9c != 0) {
    FUN_1446f4a44(&DAT_14cb7bf90,0);
  }
  _DAT_14cb7bfc0 = 0xffffffff;
  DAT_14cb7bfb8 = 0;
  if (0x80 < DAT_14cb7bfbc) {
    DAT_14cb7bfbc = 0x80;
    FUN_1446efbd8(&DAT_14cb7bfa0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146153702 FUN_146153702 body=154 status=ok
// SIG undefined FUN_146153702(void)

bool FUN_146153702(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14615379e FUN_14615379e body=46 status=ok
// SIG undefined FUN_14615379e(void)

void FUN_14615379e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 != 0) {
    FUN_141469140(param_1);
    return;
  }
  return;
}



// FUNCTION 1461537cc FUN_1461537cc body=154 status=ok
// SIG undefined FUN_1461537cc(void)

bool FUN_1461537cc(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 146153868 FUN_146153868 body=46 status=ok
// SIG undefined FUN_146153868(void)

void FUN_146153868(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 != 0) {
    FUN_145708e6c(param_1);
    return;
  }
  return;
}



// FUNCTION 146153896 FUN_146153896 body=154 status=ok
// SIG undefined FUN_146153896(void)

bool FUN_146153896(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 146153932 FUN_146153932 body=46 status=ok
// SIG undefined FUN_146153932(void)

void FUN_146153932(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 != 0) {
    FUN_1460269ca(param_1);
    return;
  }
  return;
}



// FUNCTION 146153960 FUN_146153960 body=154 status=ok
// SIG undefined FUN_146153960(void)

bool FUN_146153960(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1461539fc FUN_1461539fc body=46 status=ok
// SIG undefined FUN_1461539fc(void)

void FUN_1461539fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 != 0) {
    FUN_146059f46(param_1);
    return;
  }
  return;
}



// FUNCTION 146153a2a FUN_146153a2a body=154 status=ok
// SIG undefined FUN_146153a2a(void)

bool FUN_146153a2a(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 146153ac6 FUN_146153ac6 body=46 status=ok
// SIG undefined FUN_146153ac6(void)

void FUN_146153ac6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 != 0) {
    FUN_145ec694e(param_1);
    return;
  }
  return;
}



// FUNCTION 146153af4 FUN_146153af4 body=509 status=ok
// SIG undefined FUN_146153af4(void)

longlong FUN_146153af4(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0e010) {
    FUN_144b3d300(&DAT_14cc0e010);
    if (DAT_14cc0e010 == -1) {
      DAT_14cc0e008 = 0;
      atexit(FUN_1444cc53c);
      _Init_thread_footer(&DAT_14cc0e010);
    }
  }
  if (DAT_14cc0e008 == 0) {
    DAT_14cc0e001 = 1;
    local_60 = 0;
    local_68 = 0;
    lVar2 = FUN_146153e1a(DAT_14c951640,0,0,0);
    if (lVar2 != 0) {
      FUN_1401924dc(lVar2);
    }
    if ((DAT_14cc0e008 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    DAT_14cc0e001 = 0;
    DAT_14cc0e008 = lVar2;
    uVar3 = FUN_145a57392();
    FUN_146153cf2(lVar2,uVar3);
    uVar3 = FUN_146153ef6();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,2,0x10);
    puVar1 = local_48;
    local_40 = 2;
    *local_48 = &PTR_LAB_149e020b0;
    uVar4 = FUN_144a3f946();
    puVar1[2] = uVar4;
    *puVar1 = &PTR_FUN_14bc681d0;
    FUN_1448b6402(uVar3,&local_50,&local_48);
    FUN_1449db362(&local_48);
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,2,0x10);
    puVar1 = local_48;
    local_40 = 2;
    *local_48 = &PTR_LAB_149e020b0;
    uVar3 = FUN_144a3f946();
    puVar1[2] = uVar3;
    *puVar1 = &PTR_FUN_14bc68240;
    puVar1[3] = local_50;
    FUN_1448b6402(&DAT_14c872d10,local_58,&local_48);
    FUN_1449db362(&local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0e008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146153cf2 FUN_146153cf2 body=118 status=ok
// SIG undefined FUN_146153cf2(void)

void FUN_146153cf2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_146153d68(DAT_14c951640);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x350) != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 0x350) = 0;
    }
    FUN_1401924dc(lVar1);
    if ((*(longlong *)(param_1 + 0x350) != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    *(longlong *)(param_1 + 0x350) = lVar1;
  }
  return;
}



// FUNCTION 146153d68 FUN_146153d68 body=177 status=ok
// SIG undefined FUN_146153d68(void)

undefined8 FUN_146153d68(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 146153e1a FUN_146153e1a body=219 status=ok
// SIG undefined FUN_146153e1a(void)

undefined8
FUN_146153e1a(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14594cbfc();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146153ef6 FUN_146153ef6 body=783 status=ok
// SIG undefined FUN_146153ef6(void)

longlong * FUN_146153ef6(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined ***local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc0bdb0) && (FUN_144b3d300(&DAT_14cc0bdb0), DAT_14cc0bdb0 == -1)) {
    DAT_14cc0bda0 = (longlong *)0x0;
    DAT_14cc0bda8 = (longlong *)0x0;
    atexit(FUN_1444b8974);
    _Init_thread_footer(&DAT_14cc0bdb0);
  }
  if (DAT_14cc0bda0 != (longlong *)0x0) goto LAB_146154106;
  plVar4 = (longlong *)FUN_14001cc68(0x128,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bc2f690;
  plVar1 = plVar4 + 2;
  FUN_146154206(plVar1);
  plVar7 = DAT_14cc0bda8;
  DAT_14cc0bda0 = plVar1;
  if (plVar4 == (longlong *)0x0) {
    if (DAT_14cc0bda8 != (longlong *)0x0) {
      DAT_14cc0bda8 = (longlong *)0x0;
LAB_14615414c:
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
      if (plVar4 != (longlong *)0x0) goto LAB_146153fe3;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == DAT_14cc0bda8) {
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
    else {
      bVar8 = DAT_14cc0bda8 != (longlong *)0x0;
      plVar7 = DAT_14cc0bda8;
      DAT_14cc0bda8 = plVar4;
      if (bVar8) goto LAB_14615414c;
    }
LAB_146153fe3:
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
  uVar5 = FUN_1401cb356();
  local_78 = &local_58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b3fd570;
  local_30 = FUN_1444bcd0e;
  local_58 = (undefined8 *)&LAB_143d335e4;
  FUN_1401cbba4(uVar5,&local_68,L"InterchangeTaskSystemTickHandle",0);
  plVar1 = DAT_14cc0bda0;
  if (DAT_14cc0bda0 + 3 != &local_68) {
    DAT_14cc0bda0[3] = local_68;
    local_68 = 0;
    plVar7 = (longlong *)plVar1[4];
    plVar1[4] = (longlong)local_60;
    local_60 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_60 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    pppuVar6 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar6 = &local_38;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  puVar3 = local_58;
  local_50 = 2;
  *local_58 = &PTR_LAB_149e020b0;
  uVar5 = FUN_144a3f946();
  puVar3[2] = uVar5;
  *puVar3 = &PTR_FUN_14bc2f6b0;
  FUN_1448b6402(&DAT_14c8673d8,&local_68,&local_58);
  FUN_1449db362(&local_58);
LAB_146154106:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0bda0;
}



// FUNCTION 146154206 FUN_146154206 body=200 status=ok
// SIG undefined FUN_146154206(void)

undefined8 * FUN_146154206(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x17),4000);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1e),4000);
  return param_1;
}



// FUNCTION 1461542da FUN_1461542da body=793 status=ok
// SIG undefined FUN_1461542da(void)

undefined8 * FUN_1461542da(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
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
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b6b2ff0;
  *(undefined4 *)(param_1 + 0x16) = 0x101029;
  param_1[0x17] = "character_info";
  FUN_1400b22c2(local_58,"UI.CharacterInfo");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_14118a68a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
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
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_1461543dd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_1461543dd:
  lVar5 = FUN_14118a68a();
  if (lVar5 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_146154472;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar5);
  }
LAB_146154472:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461545f4 FUN_1461545f4 body=181 status=ok
// SIG undefined FUN_1461545f4(void)

void FUN_1461545f4(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1461546ba(param_1 + 0x22);
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  local_28 = *(undefined8 *)(lVar3 + 8);
  puVar2 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
    FUN_140873fc6(param_1 + 2);
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    local_20 = puVar2;
    FUN_140873fc6(param_1 + 2);
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



// FUNCTION 1461546ba FUN_1461546ba body=103 status=ok
// SIG undefined FUN_1461546ba(void)

void FUN_1461546ba(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14027385c();
  if (lVar1 != 0) {
    lVar2 = FUN_14479d2ce(lVar1);
    if (lVar2 != 0) {
      local_18 = *(undefined4 *)(lVar1 + 8);
      local_20 = lVar2;
      FUN_1456c62d8(lVar2 + 0x430);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146154722 FUN_146154722 body=54 status=ok
// SIG undefined FUN_146154722(void)

void FUN_146154722(void)

{
  FUN_146154758();
  if (DAT_14c966e10 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c966df0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146154758 FUN_146154758 body=348 status=ok
// SIG undefined FUN_146154758(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146154758(void)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c966e00;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c966e18 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c966df0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar1 = *(longlong **)(*local_58 + 8 + (longlong)iStack_3c * 0x28);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c966df8 = 0;
  if (DAT_14c966dfc != 0) {
    FUN_140549ad6(&DAT_14c966df0,0);
  }
  _DAT_14c966e20 = 0xffffffff;
  DAT_14c966e18 = 0;
  if (0x80 < DAT_14c966e1c) {
    DAT_14c966e1c = 0x80;
    FUN_1446efbd8(&DAT_14c966e00,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461548b6 FUN_1461548b6 body=54 status=ok
// SIG undefined FUN_1461548b6(void)

void FUN_1461548b6(void)

{
  FUN_1461548ec();
  if (DAT_14c967168 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c967148 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461548ec FUN_1461548ec body=348 status=ok
// SIG undefined FUN_1461548ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461548ec(void)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c967158;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c967170 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c967148;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar1 = *(longlong **)(*local_58 + 8 + (longlong)iStack_3c * 0x20);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c967150 = 0;
  if (DAT_14c967154 != 0) {
    FUN_1446f4a44(&DAT_14c967148,0);
  }
  _DAT_14c967178 = 0xffffffff;
  DAT_14c967170 = 0;
  if (0x80 < DAT_14c967174) {
    DAT_14c967174 = 0x80;
    FUN_1446efbd8(&DAT_14c967158,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146154a4a FUN_146154a4a body=159 status=ok
// SIG undefined FUN_146154a4a(void)

void FUN_146154a4a(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x1000;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841f00];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x1000,8);
  }
  uVar2 = 0x7fffffff;
  if (0x1ff < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != DAT_14caf3c5c) {
    DAT_14caf3c5c = (int)uVar2;
    FUN_1446f8d3c(&DAT_14caf3c50,DAT_14caf3c58,uVar2,8,8);
  }
  return;
}



// FUNCTION 146154aea FUN_146154aea body=67 status=ok
// SIG undefined FUN_146154aea(void)

void FUN_146154aea(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146154b2e(param_1);
    FUN_1459a15ba(param_1,0);
    return;
  }
  FUN_1459a15ba(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1414fabda(param_1);
  return;
}



// FUNCTION 146154b2e FUN_146154b2e body=335 status=ok
// SIG undefined FUN_146154b2e(void)

void FUN_146154b2e(longlong *param_1)

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



// FUNCTION 146154c8a FUN_146154c8a body=392 status=ok
// SIG undefined FUN_146154c8a(void)

undefined8 * FUN_146154c8a(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a6efa2();
  *param_1 = &PTR_FUN_14a70d4a0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 1;
  FUN_1446f470e(&local_28,L"NewPlanarReflectionComponent",1);
  uVar2 = FUN_1459921bc();
  local_48 = 1;
  local_40 = 0;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x74] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x74];
  }
  param_1[0x39] = lVar3;
  FUN_1446f470e(&local_30,L"DrawBox0",1);
  uVar2 = FUN_14088b378();
  local_40 = 0;
  local_48 = 1;
  plVar4 = (longlong *)FUN_14048696c(param_1,local_30,uVar2,uVar2);
  FUN_140486fc4(plVar4,param_1[0x74],0);
  *(byte *)((longlong)plVar4 + 0x2de) = *(byte *)((longlong)plVar4 + 0x2de) | 0x10;
  (**(code **)(*plVar4 + 0x728))(plVar4,DAT_14cad0f30,1);
  lVar3 = param_1[0x74];
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar4);
  }
  *(longlong **)(lVar3 + 0x388) = plVar4;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146154e14 FUN_146154e14 body=317 status=ok
// SIG undefined FUN_146154e14(void)

void FUN_146154e14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1415e9516(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146154f52 FUN_146154f52 body=38 status=ok
// SIG undefined FUN_146154f52(void)

undefined8 FUN_146154f52(undefined8 param_1,int param_2)

{
  FUN_1415e95d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146154f78 FUN_146154f78 body=96 status=ok
// SIG undefined FUN_146154f78(void)

ulonglong FUN_146154f78(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146154fbb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146154fbb;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 146154fde FUN_146154fde body=53 status=ok
// SIG undefined FUN_146154fde(void)

void FUN_146154fde(longlong *param_1)

{
  FUN_146155014();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146155014 FUN_146155014 body=351 status=ok
// SIG undefined FUN_146155014(void)

void FUN_146155014(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
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



// FUNCTION 146155174 FUN_146155174 body=54 status=ok
// SIG undefined FUN_146155174(void)

void FUN_146155174(void)

{
  FUN_1461551aa();
  if (DAT_14caf3270 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf3250 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461551aa FUN_1461551aa body=350 status=ok
// SIG undefined FUN_1461551aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461551aa(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14caf3260;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14caf3278 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14caf3250;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_1449db362(*local_58 + (longlong)iStack_3c * 0x20 + 8);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14caf3258 = 0;
  if (DAT_14caf325c != 0) {
    FUN_1446f4a44(&DAT_14caf3250,0);
  }
  _DAT_14caf3280 = 0xffffffff;
  DAT_14caf3278 = 0;
  if (0x80 < DAT_14caf327c) {
    DAT_14caf327c = 0x80;
    FUN_1446efbd8(&DAT_14caf3260,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615530a FUN_14615530a body=119 status=ok
// SIG undefined FUN_14615530a(void)

undefined8 *
FUN_14615530a(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14ba3c590;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[3] = param_3;
  FUN_146155382(param_1 + 4,param_3 + 0x228);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x108) + -1;
    if (*(int *)(lVar1 + 0x108) == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(param_1 + 6,*(undefined8 *)(lVar1 + 0x100),iVar2);
    *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  }
  return param_1;
}



// FUNCTION 146155382 FUN_146155382 body=286 status=ok
// SIG undefined FUN_146155382(void)

undefined8 * FUN_146155382(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  wchar_t *_Str;
  longlong *plVar5;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14ba3d920;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  uVar3 = _wcstoui64(_Str,(wchar_t **)0x0,10);
  puVar2[3] = uVar3;
  *param_1 = puVar2;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba3d970;
  plVar4[2] = (longlong)puVar2;
  param_1[1] = plVar4;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar5 = (longlong *)puVar2[2];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar4) goto LAB_146155441;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    plVar5 = (longlong *)puVar2[2];
    if (plVar5 == (longlong *)0x0) {
      puVar2[2] = plVar4;
      goto LAB_146155441;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  puVar2[2] = plVar4;
  if (plVar4 == (longlong *)0x0) {
    return param_1;
  }
LAB_146155441:
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
  return param_1;
}



// FUNCTION 1461554a0 FUN_1461554a0 body=40 status=ok
// SIG undefined FUN_1461554a0(void)

undefined8 FUN_1461554a0(undefined8 param_1,int param_2)

{
  FUN_1461554c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461554c8 FUN_1461554c8 body=365 status=ok
// SIG undefined FUN_1461554c8(void)

void FUN_1461554c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc7c6b0;
  FUN_145a5e0f6(param_1 + 0x83);
  FUN_145936a30(param_1 + 0x74);
  FUN_145a5e0f6(param_1 + 0x65);
  FUN_145936a30(param_1 + 0x56);
  FUN_140fed6e2(param_1 + 0x52);
  FUN_140fed6e2(param_1 + 0x4e);
  FUN_140fed6e2(param_1 + 0x4a);
  FUN_140fed6e2(param_1 + 0x46);
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 146155636 FUN_146155636 body=221 status=ok
// SIG undefined FUN_146155636(void)

void FUN_146155636(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_1461557d8(param_1,0);
  FUN_1415e9740(param_1,0);
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_140391a3c(lVar2);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x30);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_14b9ca9e0;
      puVar4[4] = uVar1;
      *(undefined1 *)(puVar4 + 5) = 0;
      FUN_14039144e(lVar3,puVar4);
    }
    lVar2 = FUN_1407f492e(lVar2);
    if (lVar2 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
          (*(longlong *)(param_1 + 0x288) != 0)) &&
         (*(char *)(*(longlong *)(param_1 + 0x288) + 0x1a2) == '\0')) {
        FUN_146155714(lVar2);
      }
    }
  }
  FUN_14615573a(param_1);
  return;
}



// FUNCTION 146155714 FUN_146155714 body=37 status=ok
// SIG undefined FUN_146155714(void)

void FUN_146155714(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d27aa0();
  if (*(char *)(lVar1 + 0x41) != '\x01') {
    return;
  }
  FUN_145a08c52(lVar1,0,0);
  return;
}



// FUNCTION 14615573a FUN_14615573a body=157 status=ok
// SIG undefined FUN_14615573a(void)

void FUN_14615573a(longlong *param_1)

{
  int iVar1;
  
  FUN_1459249be();
  if ((int)param_1[0x5b] != 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x2dc) != 0) {
    FUN_14481578e(param_1 + 0x5a,0);
  }
  if ((int)param_1[0x59] < 2) {
    iVar1 = (int)param_1[0x5b];
    *(uint *)(param_1 + 0x5b) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2dc) < iVar1 + 1U) {
      FUN_1446f48e2(param_1 + 0x5a,iVar1);
    }
    *(undefined4 *)(param_1[0x5a] + (longlong)iVar1 * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001461557ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x180))(param_1);
    return;
  }
  FUN_1457467b8(param_1,param_1 + 0x58);
  return;
}



// FUNCTION 1461557d8 FUN_1461557d8 body=375 status=ok
// SIG undefined FUN_1461557d8(void)

void FUN_1461557d8(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 800) != param_2) {
    lVar4 = FUN_1407f4ede();
    if (lVar4 != 0) {
      lVar5 = FUN_1407f4df8();
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
         (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))) {
        uVar3 = (uint)((ulonglong)DAT_14cbdef90 >> 0x10);
        uVar8 = (uint)DAT_14cbdef90 & 0xffff;
        lVar4 = param_1 + 0x110;
        if (*(longlong *)(param_1 + 0x118) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x118);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x120) - 1U &
                                 (int)((ulonglong)DAT_14cbdef90 >> 0x20) +
                                 ((uint)DAT_14cbdef90 << 0x10 | uVar8) +
                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
            if (*plVar1 == DAT_14cbdef90) {
              plVar7 = plVar1 + 1;
              if (plVar7 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                if (param_2 == '\0') {
                  local_38 = 0;
                  FUN_14485c47a(&local_38,*plVar7);
                  FUN_1412e3bcc(param_1,local_38);
                }
                else {
                  uVar2 = *(undefined4 *)(param_1 + 0x148);
                  local_30 = 0;
                  FUN_14485c47a(&local_30,*plVar7);
                  FUN_14143058a(param_1,local_30,uVar2);
                }
              }
              break;
            }
            iVar6 = (int)plVar1[2];
          } while (iVar6 != -1);
        }
      }
    }
    *(char *)(param_1 + 800) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146155950 FUN_146155950 body=54 status=ok
// SIG undefined FUN_146155950(void)

void FUN_146155950(void)

{
  FUN_146155986();
  if (DAT_14cad0178 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0158 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146155986 FUN_146155986 body=351 status=ok
// SIG undefined FUN_146155986(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146155986(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cad0168;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cad0180 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cad0158;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cad0160 = 0;
  if (DAT_14cad0164 != 0) {
    FUN_1446f4a44(&DAT_14cad0158,0);
  }
  _DAT_14cad0188 = 0xffffffff;
  DAT_14cad0180 = 0;
  if (0x80 < DAT_14cad0184) {
    DAT_14cad0184 = 0x80;
    FUN_1446efbd8(&DAT_14cad0168,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146155ae6 FUN_146155ae6 body=480 status=ok
// SIG undefined FUN_146155ae6(void)

void FUN_146155ae6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c872bf0 != '\0') goto LAB_146155c0a;
  cVar5 = FUN_146155cc7();
  *(char *)(param_1 + 0x18) = cVar5;
  if (cVar5 == '\0') {
    uVar9 = FUN_144d6e1a0();
    FUN_14678752e("Bink Error: %s\n",uVar9);
  }
  lVar6 = FUN_14001cc68(0x78,0x10);
  FUN_146155d28(lVar6);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b5a8c90;
  plVar7[2] = lVar6;
  plVar8 = DAT_14cb9e640;
  DAT_14cb9e638 = lVar6;
  if (plVar7 == DAT_14cb9e640) {
    plVar4 = DAT_14cb9e640;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plVar4 = DAT_14cb9e640;
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar8 = plVar7;
        goto joined_r0x000146155c7a;
      }
    }
  }
  else {
    plVar4 = plVar7;
    if (DAT_14cb9e640 != (longlong *)0x0) {
      LOCK();
      plVar1 = DAT_14cb9e640 + 1;
      DAT_14cb9e640 = plVar7;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar4 = DAT_14cb9e640;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000146155c7a:
        plVar4 = DAT_14cb9e640;
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          plVar4 = DAT_14cb9e640;
        }
      }
    }
  }
  DAT_14cb9e640 = plVar4;
  puVar10 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     ((DAT_14ca84e78 != '\x01' &&
      (puVar10 = (undefined8 *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
    puVar10 = (undefined8 *)0x0;
  }
  local_28 = DAT_14cb9e638;
  local_20 = DAT_14cb9e640;
  if (DAT_14cb9e640 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14cb9e640 + 1) = (int)DAT_14cb9e640[1] + 1;
    UNLOCK();
  }
  (**(code **)*puVar10)(puVar10,&local_28);
  plVar8 = (longlong *)FUN_14147ade4();
  lVar6 = plVar8[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    lVar6 = plVar8[0x22];
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_1400033ba(lVar6,0,0,0);
LAB_146155c0a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146155cc7 FUN_146155cc7 body=96 status=ok
// SIG undefined FUN_146155cc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146155cc7(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_14cb9e648 == '\0') {
    _DAT_14cb9e650 = 0;
    uRam000000014cb9e658 = 0;
    _DAT_14cb9e668 = &LAB_143feae21;
    _DAT_14cb9e670 = &LAB_143feae26;
    _DAT_14cb9e678 = 0;
    uRam000000014cb9e680 = 0;
    iVar2 = FUN_144b4b1f0(0,&DAT_14cb9e650,0);
    DAT_14cb9e648 = iVar2 != 0;
    bVar1 = (bool)DAT_14cb9e648;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



// FUNCTION 146155d28 FUN_146155d28 body=383 status=ok
// SIG undefined FUN_146155d28(void)

undefined8 * FUN_146155d28(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14b5a80b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14b5a86c0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b5a8d40;
  plVar4[2] = (longlong)puVar3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_146155df5:
    param_1[6] = puVar3;
    plVar5 = (longlong *)param_1[7];
    if (plVar4 != plVar5) {
      param_1[7] = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146155e0b;
      goto LAB_146155e38;
    }
    if (plVar4 == (longlong *)0x0) goto LAB_146155e0b;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146155e0b;
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
      goto LAB_146155df5;
    }
    puVar3[1] = puVar3;
    param_1[6] = puVar3;
    plVar5 = (longlong *)param_1[7];
    if (plVar5 == (longlong *)0x0) goto LAB_146155e0b;
    param_1[7] = 0;
LAB_146155e38:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146155e0b;
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
LAB_146155e0b:
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 146155ea8 FUN_146155ea8 body=103 status=ok
// SIG undefined FUN_146155ea8(void)

ulonglong FUN_146155ea8(longlong param_1)

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
LAB_146155ef2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146155ef2;
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



// FUNCTION 146155f16 FUN_146155f16 body=122 status=ok
// SIG undefined FUN_146155f16(void)

void FUN_146155f16(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146155f92 FUN_146155f92 body=75 status=ok
// SIG undefined FUN_146155f92(void)

void FUN_146155f92(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b9c3c90;
    *(undefined1 *)(puVar2 + 1) = param_2;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 146155fde FUN_146155fde body=53 status=ok
// SIG undefined FUN_146155fde(void)

void FUN_146155fde(longlong *param_1)

{
  FUN_146156014();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146156014 FUN_146156014 body=353 status=ok
// SIG undefined FUN_146156014(void)

void FUN_146156014(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
      plVar3 = *(longlong **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 146156176 FUN_146156176 body=317 status=ok
// SIG undefined FUN_146156176(void)

void FUN_146156176(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1415e9a1a(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461562bc FUN_1461562bc body=500 status=ok
// SIG undefined FUN_1461562bc(void)

undefined8 * FUN_1461562bc(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b979980;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x42c80000;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  FUN_1446f470e(param_1 + 0x7a,L"FogTexture",1);
  *(undefined1 *)(param_1 + 0x7b) = 1;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  FUN_1446f470e(&local_48,L"FogRoot",1);
  uVar2 = FUN_144a799b0();
  local_60 = 0;
  local_68 = 1;
  lVar3 = FUN_14048696c(param_1,local_48,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x72] = lVar3;
  FUN_1446f470e(&local_50,L"FogMesh",1);
  uVar2 = FUN_144a7a726();
  local_60 = 0;
  local_68 = 1;
  lVar3 = FUN_14048696c(param_1,local_50,uVar2,uVar2);
  bVar1 = DAT_14c950c29;
  if (lVar3 == 0 || DAT_14c950c29 != 1) {
    param_1[0x73] = lVar3;
    if (lVar3 == 0) goto LAB_14615644a;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x73] = lVar3;
  }
  FUN_140486fc4(lVar3,param_1[0x72],0);
  (**(code **)(*(longlong *)param_1[0x73] + 0x720))((longlong *)param_1[0x73],0);
  bVar1 = DAT_14c950c29;
LAB_14615644a:
  lVar3 = param_1[0x72];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461564b2 FUN_1461564b2 body=54 status=ok
// SIG undefined FUN_1461564b2(void)

void FUN_1461564b2(void)

{
  FUN_1461564e8();
  if (DAT_14cb7c228 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7c208 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461564e8 FUN_1461564e8 body=353 status=ok
// SIG undefined FUN_1461564e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461564e8(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb7c218;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb7c230 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb7c208;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DAT_14cb7c210 = 0;
  if (DAT_14cb7c214 != 0) {
    FUN_1446f4a44(&DAT_14cb7c208,0);
  }
  _DAT_14cb7c238 = 0xffffffff;
  DAT_14cb7c230 = 0;
  if (0x80 < DAT_14cb7c234) {
    DAT_14cb7c234 = 0x80;
    FUN_1446efbd8(&DAT_14cb7c218,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615664a FUN_14615664a body=54 status=ok
// SIG undefined FUN_14615664a(void)

void FUN_14615664a(void)

{
  FUN_146156680();
  if (DAT_14cb7c390 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7c370 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146156680 FUN_146156680 body=353 status=ok
// SIG undefined FUN_146156680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146156680(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb7c380;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb7c398 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb7c370;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb7c378 = 0;
  if (DAT_14cb7c37c != 0) {
    FUN_1446f4a44(&DAT_14cb7c370,0);
  }
  _DAT_14cb7c3a0 = 0xffffffff;
  DAT_14cb7c398 = 0;
  if (0x80 < DAT_14cb7c39c) {
    DAT_14cb7c39c = 0x80;
    FUN_1446efbd8(&DAT_14cb7c380,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461567e2 FUN_1461567e2 body=54 status=ok
// SIG undefined FUN_1461567e2(void)

void FUN_1461567e2(void)

{
  FUN_146156818();
  if (DAT_14cb7c5e8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7c5c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146156818 FUN_146156818 body=353 status=ok
// SIG undefined FUN_146156818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146156818(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb7c5d8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb7c5f0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb7c5c8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DAT_14cb7c5d0 = 0;
  if (DAT_14cb7c5d4 != 0) {
    FUN_1446f4a44(&DAT_14cb7c5c8,0);
  }
  _DAT_14cb7c5f8 = 0xffffffff;
  DAT_14cb7c5f0 = 0;
  if (0x80 < DAT_14cb7c5f4) {
    DAT_14cb7c5f4 = 0x80;
    FUN_1446efbd8(&DAT_14cb7c5d8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615697a FUN_14615697a body=54 status=ok
// SIG undefined FUN_14615697a(void)

void FUN_14615697a(void)

{
  FUN_1461569b0();
  if (DAT_14cb7d148 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7d128 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461569b0 FUN_1461569b0 body=353 status=ok
// SIG undefined FUN_1461569b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461569b0(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb7d138;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb7d150 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb7d128;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DAT_14cb7d130 = 0;
  if (DAT_14cb7d134 != 0) {
    FUN_1446f4a44(&DAT_14cb7d128,0);
  }
  _DAT_14cb7d158 = 0xffffffff;
  DAT_14cb7d150 = 0;
  if (0x80 < DAT_14cb7d154) {
    DAT_14cb7d154 = 0x80;
    FUN_1446efbd8(&DAT_14cb7d138,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146156b12 FUN_146156b12 body=54 status=ok
// SIG undefined FUN_146156b12(void)

void FUN_146156b12(void)

{
  FUN_146156b48();
  if (DAT_14cb7d798 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7d778 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146156b48 FUN_146156b48 body=353 status=ok
// SIG undefined FUN_146156b48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146156b48(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb7d788;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb7d7a0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb7d778;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  DAT_14cb7d780 = 0;
  if (DAT_14cb7d784 != 0) {
    FUN_1446f4a44(&DAT_14cb7d778,0);
  }
  _DAT_14cb7d7a8 = 0xffffffff;
  DAT_14cb7d7a0 = 0;
  if (0x80 < DAT_14cb7d7a4) {
    DAT_14cb7d7a4 = 0x80;
    FUN_1446efbd8(&DAT_14cb7d788,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146156caa FUN_146156caa body=40 status=ok
// SIG undefined FUN_146156caa(void)

undefined8 FUN_146156caa(undefined8 param_1,int param_2)

{
  FUN_146156cd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146156cd2 FUN_146156cd2 body=62 status=ok
// SIG undefined FUN_146156cd2(void)

void FUN_146156cd2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b626d50;
  FUN_14588898c(param_1 + 0x38);
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_1458888c8(param_1);
  return;
}



// FUNCTION 146156d1c FUN_146156d1c body=396 status=ok
// SIG undefined FUN_146156d1c(void)

undefined8 * FUN_146156d1c(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a905ac();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0b2e0;
  param_1[5] = &PTR_FUN_14ba0b690;
  param_1[0x13] = &PTR_FUN_14ba0b6b0;
  param_1[0x14] = &PTR_FUN_14ba0b6d0;
  param_1[0x15] = &PTR_FUN_14ba0b700;
  FUN_14020fad6(param_1 + 0x1d,&DAT_149e3c97a);
  local_38 = L"BoxToolName";
  local_30 = 0xb;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Box");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146156eb4 FUN_146156eb4 body=396 status=ok
// SIG undefined FUN_146156eb4(void)

undefined8 * FUN_146156eb4(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a9095c();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0b7d0;
  param_1[5] = &PTR_FUN_14ba0bb80;
  param_1[0x13] = &PTR_FUN_14ba0bba0;
  param_1[0x14] = &PTR_FUN_14ba0bbc0;
  param_1[0x15] = &PTR_FUN_14ba0bbf0;
  FUN_14020fad6(param_1 + 0x1d,L"Cylinder");
  local_38 = L"CylinderToolName";
  local_30 = 0x10;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Cylinder");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14615704c FUN_14615704c body=396 status=ok
// SIG undefined FUN_14615704c(void)

undefined8 * FUN_14615704c(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90d0c();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0bcc0;
  param_1[5] = &PTR_FUN_14ba0c070;
  param_1[0x13] = &PTR_FUN_14ba0c090;
  param_1[0x14] = &PTR_FUN_14ba0c0b0;
  param_1[0x15] = &PTR_FUN_14ba0c0e0;
  FUN_14020fad6(param_1 + 0x1d,L"Capsule");
  local_38 = L"CapsuleToolName";
  local_30 = 0xf;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Capsule");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461571e4 FUN_1461571e4 body=396 status=ok
// SIG undefined FUN_1461571e4(void)

undefined8 * FUN_1461571e4(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90a48();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0c1a0;
  param_1[5] = &PTR_FUN_14ba0c550;
  param_1[0x13] = &PTR_FUN_14ba0c570;
  param_1[0x14] = &PTR_FUN_14ba0c590;
  param_1[0x15] = &PTR_FUN_14ba0c5c0;
  FUN_14020fad6(param_1 + 0x1d,L"Cone");
  local_38 = L"ConeToolName";
  local_30 = 0xc;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Cone");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14615737c FUN_14615737c body=396 status=ok
// SIG undefined FUN_14615737c(void)

undefined8 * FUN_14615737c(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90698();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0c690;
  param_1[5] = &PTR_FUN_14ba0ca40;
  param_1[0x13] = &PTR_FUN_14ba0ca60;
  param_1[0x14] = &PTR_FUN_14ba0ca80;
  param_1[0x15] = &PTR_FUN_14ba0cab0;
  FUN_14020fad6(param_1 + 0x1d,L"Rectangle");
  local_38 = L"RectToolName";
  local_30 = 0xc;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Rectangle");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146157514 FUN_146157514 body=396 status=ok
// SIG undefined FUN_146157514(void)

undefined8 * FUN_146157514(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90784();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0cb70;
  param_1[5] = &PTR_FUN_14ba0cf20;
  param_1[0x13] = &PTR_FUN_14ba0cf40;
  param_1[0x14] = &PTR_FUN_14ba0cf60;
  param_1[0x15] = &PTR_FUN_14ba0cf90;
  FUN_14020fad6(param_1 + 0x1d,L"Disc");
  local_38 = L"DiscToolName";
  local_30 = 0xc;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Disc");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461576ac FUN_1461576ac body=396 status=ok
// SIG undefined FUN_1461576ac(void)

undefined8 * FUN_1461576ac(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90870();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0d050;
  param_1[5] = &PTR_FUN_14ba0d400;
  param_1[0x13] = &PTR_FUN_14ba0d420;
  param_1[0x14] = &PTR_FUN_14ba0d440;
  param_1[0x15] = &PTR_FUN_14ba0d470;
  FUN_14020fad6(param_1 + 0x1d,L"Torus");
  local_38 = L"TorusToolName";
  local_30 = 0xd;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Torus");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146157844 FUN_146157844 body=396 status=ok
// SIG undefined FUN_146157844(void)

undefined8 * FUN_146157844(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90b34();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0d530;
  param_1[5] = &PTR_FUN_14ba0d8e0;
  param_1[0x13] = &PTR_FUN_14ba0d900;
  param_1[0x14] = &PTR_FUN_14ba0d920;
  param_1[0x15] = &PTR_FUN_14ba0d950;
  FUN_14020fad6(param_1 + 0x1d,L"Arrow");
  local_38 = L"ArrowToolName";
  local_30 = 0xd;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Arrow");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461579dc FUN_1461579dc body=396 status=ok
// SIG undefined FUN_1461579dc(void)

undefined8 * FUN_1461579dc(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90c20();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0da10;
  param_1[5] = &PTR_FUN_14ba0ddc0;
  param_1[0x13] = &PTR_FUN_14ba0dde0;
  param_1[0x14] = &PTR_FUN_14ba0de00;
  param_1[0x15] = &PTR_FUN_14ba0de30;
  FUN_14020fad6(param_1 + 0x1d,L"Sphere");
  local_38 = L"SphereToolName";
  local_30 = 0xe;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Sphere");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146157b74 FUN_146157b74 body=396 status=ok
// SIG undefined FUN_146157b74(void)

undefined8 * FUN_146157b74(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"ShapeSettings",1);
  uVar2 = FUN_145a90df8();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar2,0);
  FUN_14588bd56(param_1);
  *param_1 = &PTR_FUN_14ba0def0;
  param_1[5] = &PTR_FUN_14ba0e2a0;
  param_1[0x13] = &PTR_FUN_14ba0e2c0;
  param_1[0x14] = &PTR_FUN_14ba0e2e0;
  param_1[0x15] = &PTR_FUN_14ba0e310;
  FUN_14020fad6(param_1 + 0x1d,L"Stairs");
  local_38 = L"StairsToolName";
  local_30 = 0xe;
  FUN_1446e940c(local_44,&local_38);
  local_38 = L"UAddPrimitiveTool";
  local_30 = 0x11;
  FUN_1446e940c(local_48,&local_38);
  FUN_140208bae(&local_38,local_48,local_44,L"Create Stairs");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_38) {
    param_1[0x11] = local_38;
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_30;
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146157d0a FUN_146157d0a body=502 status=ok
// SIG undefined FUN_146157d0a(void)

longlong * FUN_146157d0a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar4);
  *param_1 = (longlong)&PTR_FUN_14a4ba710;
  param_1[0x1f] = (longlong)&PTR_LAB_14a4baa80;
  FUN_1406ed278(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfe;
  local_40 = (longlong *)0x2;
  local_38 = (longlong *)0x2;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_40);
  local_58 = 0x7b5ae74c;
  uStack_54 = 0xd2704c10;
  uStack_50 = 0xa9585798;
  uStack_4c = 0xb212a5a;
  iVar3 = FUN_1448a256a(param_1);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = '\x02' - (iVar3 < 6);
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_1459a4720(plVar1,param_1 + 0x20);
  local_40 = plVar1;
  local_38 = plVar5;
  FUN_140aec6f8(&local_40,plVar1);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x1c] = (longlong)local_40;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_146157e4a;
    param_1[0x1d] = 0;
LAB_146157ea2:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146157e4a;
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
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x1c] = (longlong)local_40;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_38 != plVar5) {
      param_1[0x1d] = (longlong)local_38;
      if (plVar5 == (longlong *)0x0) goto LAB_146157e4a;
      goto LAB_146157ea2;
    }
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146157e4a;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146157e4a:
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146157f02 FUN_146157f02 body=26 status=ok
// SIG undefined FUN_146157f02(void)

undefined8 FUN_146157f02(longlong param_1,undefined8 param_2)

{
  FUN_146157f1c(param_1 + 0x18);
  return param_2;
}



// FUNCTION 146157f1c FUN_146157f1c body=484 status=ok
// SIG undefined FUN_146157f1c(void)

undefined8 * FUN_146157f1c(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb7d680 != (longlong *)0x0 && DAT_14cb7d688 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb7d680 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb7d680;
    if (DAT_14cb7d688 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_40);
    goto LAB_14615802e;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *puVar3 = &PTR_FUN_14b402470;
  FUN_1412cbb62(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b4023f0;
  puVar3[4] = &PTR_FUN_14b402410;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b402490;
  plVar4[2] = (longlong)puVar3;
  local_38 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
    goto LAB_14615802e;
  }
  local_40 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_14615802e;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_1461580a5:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_146158024;
    }
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_1461580a5;
      puVar3[3] = plVar4;
    }
LAB_146158024:
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
LAB_14615802e:
  *param_2 = local_40;
  param_2[1] = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146158102 FUN_146158102 body=116 status=ok
// SIG undefined FUN_146158102(void)

void FUN_146158102(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400f7f2e();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
  local_28 = 0;
  FUN_14485c47a(&local_28,param_1);
  FUN_146158178(local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014615816a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146158178 FUN_146158178 body=273 status=ok
// SIG undefined FUN_146158178(void)

void FUN_146158178(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar3 = DAT_14cc06f30;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cc06f38 != DAT_14cc06f64) {
    puVar2 = &DAT_14cc06f68;
    if (DAT_14cc06f70 != (undefined *)0x0) {
      puVar2 = DAT_14cc06f70;
    }
    if ((longlong)
        *(int *)(puVar2 + ((longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
                          (longlong)DAT_14cc06f78 - 1U) * 4) != -1) {
      lVar4 = (longlong)
              *(int *)(puVar2 + ((longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1)
                                & (longlong)DAT_14cc06f78 - 1U) * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cc06f30 + lVar4);
      local_40 = param_1;
      cVar1 = FUN_1491cccc2();
      if (cVar1 == '\0') {
        lVar3 = lVar3 + lVar4;
        do {
          if ((longlong)*(int *)(lVar3 + 0x18) == -1) goto LAB_1461581a0;
          lVar4 = (longlong)*(int *)(lVar3 + 0x18) * 0x20;
          lVar3 = DAT_14cc06f30 + lVar4;
          local_38 = *(undefined8 *)(DAT_14cc06f30 + lVar4);
          local_40 = param_1;
          cVar1 = FUN_1491cccc2(&local_38,&local_40);
        } while (cVar1 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
LAB_1461581a0:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615829c FUN_14615829c body=225 status=ok
// SIG undefined FUN_14615829c(void)

void FUN_14615829c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_1415e9ada(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615837e FUN_14615837e body=217 status=ok
// SIG undefined FUN_14615837e(void)

undefined4 FUN_14615837e(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar2 = FUN_1410af862((longlong *)(param_1 + 0x18),uVar3,param_2);
  if (iVar2 != -1) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar5 = lVar4 + (longlong)iVar2 * 0x70;
    if (lVar5 == 0) {
      return 0;
    }
    if (lVar4 + (longlong)iVar2 * 0x70 == -0x10) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x20) != *(int *)(lVar5 + 0x4c)) {
      lVar4 = lVar5 + 0x50;
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        lVar4 = *(longlong *)(lVar5 + 0x58);
      }
      iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar5 + 0x60) - 1U & param_3) * 4);
      if (iVar2 != -1) {
        while (lVar4 = *(longlong *)(lVar5 + 0x18) + (longlong)iVar2 * 0x10,
              *(uint *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar2 * 0x10) != param_3) {
          iVar2 = *(int *)(lVar4 + 8);
          if (iVar2 == -1) {
            return 0;
          }
        }
        if (lVar4 == 0) {
          return 0;
        }
        if ((uint *)(lVar4 + 4) == (uint *)0x0) {
          return 0;
        }
        uVar1 = *(uint *)(lVar4 + 4);
        return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_4 & 0x1f) & 1) != 0);
      }
    }
  }
  return 0;
}



// FUNCTION 146158458 FUN_146158458 body=879 status=ok
// SIG undefined FUN_146158458(void)

int FUN_146158458(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  void *pvVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    FUN_1461587c8();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    plVar11 = *(longlong **)(param_1 + 0xb8);
    bVar5 = true;
    local_b0 = param_2;
    if (plVar11 == (longlong *)0x0) {
LAB_146158734:
      uVar10 = 0;
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plVar11[1];
      do {
        if (iVar8 == 0) goto LAB_146158734;
        LOCK();
        iVar7 = (int)plVar11[1];
        bVar13 = iVar8 == iVar7;
        if (bVar13) {
          *(int *)(plVar11 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar13);
      uVar10 = *(undefined8 *)(param_1 + 0xb0);
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
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
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
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      bVar5 = false;
    }
    local_88 = (void *)0x0;
    local_80 = *(int *)(param_3 + 1);
    lVar12 = (longlong)local_80;
    pvVar4 = (void *)*param_3;
    local_90 = param_1;
    if (lVar12 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar4,lVar12 * 2);
    }
    local_78 = 0;
    local_70 = 0;
    FUN_140146ccc(&local_78,param_4);
    if (!bVar5) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_68 = uVar10;
    plStack_60 = plVar11;
    if (local_50 != 5) {
      FUN_1446efa72(&local_58,0,5,0x10);
      local_50 = 5;
    }
    puVar6 = local_58;
    pvVar4 = local_88;
    *local_58 = &PTR_LAB_14b4f7870;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_58[2] = lVar9;
    *local_58 = &PTR_FUN_14b527540;
    local_58[3] = local_90;
    local_58[4] = 0;
    lVar12 = (longlong)local_80;
    *(int *)(local_58 + 5) = local_80;
    local_a8 = param_4;
    if (lVar12 == 0) {
      *(undefined4 *)((longlong)local_58 + 0x2c) = 0;
    }
    else {
      puVar2 = local_58 + 4;
      FUN_1446dd670(puVar2,local_80,0);
      memcpy((void *)*puVar2,pvVar4,lVar12 * 2);
    }
    puVar6[6] = local_78;
    local_78 = 0;
    *(undefined4 *)(puVar6 + 7) = local_70;
    local_70 = 0;
    puVar6[8] = local_68;
    puVar6[9] = plStack_60;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_1415e9b2c();
    uVar10 = *(undefined8 *)(param_1 + 0x2f0);
    local_a0 = 0;
    local_98 = 0;
    FUN_141509b10(&local_a0,&local_58);
    iVar8 = FUN_146158952(uVar10,local_b0,&local_a0);
    if ((iVar8 == 0) && (*(char *)(param_1 + 0x2d0) != '\x01')) {
      *(undefined1 *)(param_1 + 0x2d0) = 1;
      FUN_14584d7f0(param_1 + 0x38,1);
    }
    param_4 = local_a8;
    if (!bVar5) {
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    FUN_1449db362(&local_58);
  }
  else {
    iVar8 = 0x3fb;
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 1461587c8 FUN_1461587c8 body=293 status=ok
// SIG undefined FUN_1461587c8(void)

void FUN_1461587c8(longlong param_1)

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
  FUN_1461588ee();
  if (DAT_14cb99c48 == (undefined8 *)0x0) {
    DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb99c48 = 0;
    DAT_14cb99c48[1] = 0;
    DAT_14cb99c48[2] = 2;
  }
  puVar1 = DAT_14cb99c48;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14b526be0;
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
  *local_38 = &PTR_FUN_14b527380;
  local_38[3] = param_1;
  FUN_1458ca76a(puVar1,&local_40,&local_38);
  FUN_1449db362(&local_38);
  *(undefined8 *)(param_1 + 0x2f8) = local_40;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461588ee FUN_1461588ee body=100 status=ok
// SIG undefined FUN_1461588ee(void)

void FUN_1461588ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 != 0) {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    FUN_14480f766(DAT_14cb99c48,lVar1);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 146158952 FUN_146158952 body=463 status=ok
// SIG undefined FUN_146158952(void)

undefined4 FUN_146158952(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x488) < 2) {
    iVar1 = *(int *)(param_1 + 0x498);
    *(uint *)(param_1 + 0x498) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x49c) < iVar1 + 1U) {
      FUN_146158b22(param_1 + 0x490,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x490);
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
    FUN_141509b10(lVar2 + lVar5,param_3);
    if (*(int *)(param_1 + 0x498) == 1) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,2,0x10);
      local_30 = 2;
      *local_38 = &PTR_LAB_14b526cc0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_38[2] = lVar5;
      *local_38 = &PTR_FUN_14b527310;
      local_38[3] = param_1;
      if (DAT_14cb99c48 == (undefined8 *)0x0) {
        DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *DAT_14cb99c48 = 0;
        DAT_14cb99c48[1] = 0;
        DAT_14cb99c48[2] = 2;
      }
      local_48 = 0;
      local_40 = 0;
      FUN_1412f566c(&local_48,&local_38);
      uVar4 = FUN_146158ba6(param_2,&local_48);
      FUN_1449db362(&local_38);
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    if (((int)param_3[1] != 0) && (plVar3 = (longlong *)*param_3, plVar3 != (longlong *)0x0)) {
      uVar4 = 0;
      (**(code **)(*plVar3 + 0x60))(plVar3,0,param_1 + 0x480);
    }
  }
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146158b22 FUN_146158b22 body=132 status=ok
// SIG undefined FUN_146158b22(void)

void FUN_146158b22(longlong param_1,int param_2)

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



// FUNCTION 146158ba6 FUN_146158ba6 body=444 status=ok
// SIG undefined FUN_146158ba6(void)

undefined4 FUN_146158ba6(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  vx_req_connector_create_create(&local_c8);
  if (*(int *)(param_1 + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*param_1;
  }
  local_40 = 0;
  if (pwVar4 == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar2 = wcslen(pwVar4);
    FUN_1446fe5a4(local_c0,pwVar4,sVar2 & 0xffffffff,1);
  }
  uVar3 = vx_strdup(local_38);
  *(undefined8 *)(local_c8 + 0xa8) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*param_1;
  }
  local_40 = 0;
  if (pwVar4 == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar2 = wcslen(pwVar4);
    FUN_1446fe5a4(local_c0,pwVar4,sVar2 & 0xffffffff,1);
  }
  uVar3 = vx_strdup(local_38);
  *(undefined8 *)(local_c8 + 0x38) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_d8 = 0;
  local_d0 = 0;
  FUN_1412f566c(&local_d8,param_2);
  uVar1 = FUN_1412f579e(local_c8,&local_d8);
  FUN_1449db362(param_2);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146158d64 FUN_146158d64 body=238 status=ok
// SIG undefined FUN_146158d64(void)

void FUN_146158d64(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    FUN_146158e54(param_2[1],&local_28);
    if (local_28 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      FUN_14143c516(puVar3);
      *puVar3 = &PTR_FUN_14b994150;
      puVar3[4] = 0;
      FUN_14485c47a(puVar3 + 4,param_1);
      puVar3[5] = local_28;
      puVar3[6] = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
        UNLOCK();
      }
      uVar4 = FUN_144a7ba4c(param_1);
      FUN_14113cb0e(uVar4,puVar3);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146158e54 FUN_146158e54 body=68 status=ok
// SIG undefined FUN_146158e54(void)

undefined8 * FUN_146158e54(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 8);
    }
  }
  return param_2;
}



// FUNCTION 146158e98 FUN_146158e98 body=158 status=ok
// SIG undefined FUN_146158e98(void)

bool FUN_146158e98(longlong param_1,undefined8 param_2)

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



// FUNCTION 146158f38 FUN_146158f38 body=46 status=ok
// SIG undefined FUN_146158f38(void)

void FUN_146158f38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 != 0) {
    FUN_146058df8(param_1);
    return;
  }
  return;
}



// FUNCTION 146158f66 FUN_146158f66 body=97 status=ok
// SIG undefined FUN_146158f66(void)

void FUN_146158f66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f160) {
    FUN_144b3d300(&DAT_14c83f160);
    if (DAT_14c83f160 == -1) {
      FUN_146158fc8();
      atexit((_func_5014 *)&LAB_14274e5ee);
      _Init_thread_footer(&DAT_14c83f160);
      return;
    }
  }
  return;
}



// FUNCTION 146158fc8 FUN_146158fc8 body=314 status=ok
// SIG undefined FUN_146158fc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146158fc8(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  DAT_14c83f120._0_4_ = 0;
  DAT_14c83f120._4_4_ = 0;
  _DAT_14c83f128 = 0;
  DAT_14c83f110 = 0;
  uRam000000014c83f118 = 0;
  _DAT_14c83f11c = 0;
  FUN_1446efa72(&DAT_14c83f120,0,3,0x10);
  _DAT_14c83f128 = 3;
  puVar1 = (undefined8 *)CONCAT44(DAT_14c83f120._4_4_,(undefined4)DAT_14c83f120);
  *puVar1 = &PTR_LAB_149e02020;
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
  *puVar1 = &PTR_FUN_149e056c0;
  puVar1[3] = &DAT_14c83f110;
  puVar1[4] = FUN_14274e5f4;
  DAT_14c83f130 = (undefined8 *)0x0;
  _DAT_14c83f138 = 0;
  FUN_1446efa72(&DAT_14c83f130,0,3,0x10);
  puVar1 = DAT_14c83f130;
  _DAT_14c83f138 = 3;
  *DAT_14c83f130 = &PTR_LAB_149e02020;
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
  *puVar1 = &PTR_FUN_149e056c0;
  puVar1[3] = &DAT_14c83f110;
  puVar1[4] = FUN_14274e65e;
  _DAT_14c83f150 = 0;
  DAT_14c83f158 = 0;
  _DAT_14c83f140 = 0;
  DAT_14c83f148 = 0;
  return;
}



// FUNCTION 146159102 FUN_146159102 body=54 status=ok
// SIG undefined FUN_146159102(void)

void FUN_146159102(void)

{
  FUN_146159138();
  if (DAT_14c927a30 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c927a10 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146159138 FUN_146159138 body=356 status=ok
// SIG undefined FUN_146159138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146159138(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c927a20;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c927a38 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c927a10;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14c927a18 = 0;
  if (DAT_14c927a1c != 0) {
    FUN_1446f4a44(&DAT_14c927a10,0);
  }
  _DAT_14c927a40 = 0xffffffff;
  DAT_14c927a38 = 0;
  if (0x80 < DAT_14c927a3c) {
    DAT_14c927a3c = 0x80;
    FUN_1446efbd8(&DAT_14c927a20,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615929e FUN_14615929e body=40 status=ok
// SIG undefined FUN_14615929e(void)

undefined8 FUN_14615929e(undefined8 param_1,int param_2)

{
  FUN_1461592c6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461592c6 FUN_1461592c6 body=371 status=ok
// SIG undefined FUN_1461592c6(void)

void FUN_1461592c6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd5e490;
  param_1[5] = &PTR_FUN_14bd5e860;
  param_1[0x13] = &PTR_FUN_14bd5e880;
  lVar3 = param_1[0x108];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  *(undefined4 *)(param_1 + 0x107) = 0;
  if (param_1[0x106] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xfe);
  *(undefined4 *)(param_1 + 0xfd) = 0;
  if (param_1[0xfc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xf4);
  plVar4 = (longlong *)param_1[0xf3];
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
  FUN_141082778(param_1 + 0xae);
  lVar3 = param_1[0xad];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xa2);
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(param_1 + 0x5c);
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 14615943a FUN_14615943a body=40 status=ok
// SIG undefined FUN_14615943a(void)

undefined8 FUN_14615943a(undefined8 param_1,int param_2)

{
  FUN_146159462();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146159462 FUN_146159462 body=371 status=ok
// SIG undefined FUN_146159462(void)

void FUN_146159462(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd67200;
  param_1[5] = &PTR_FUN_14bd675d0;
  param_1[0x13] = &PTR_FUN_14bd675f0;
  lVar3 = param_1[0x108];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  *(undefined4 *)(param_1 + 0x107) = 0;
  if (param_1[0x106] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xfe);
  *(undefined4 *)(param_1 + 0xfd) = 0;
  if (param_1[0xfc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xf4);
  plVar4 = (longlong *)param_1[0xf3];
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
  FUN_141082778(param_1 + 0xae);
  lVar3 = param_1[0xad];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xa2);
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(param_1 + 0x5c);
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 1461595e0 FUN_1461595e0 body=605 status=ok
// SIG undefined FUN_1461595e0(void)

void FUN_1461595e0(longlong param_1)

{
  ushort *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(local_48,"ClearItem",1);
  FUN_14039176c(puVar2,uVar4,local_48[0],1);
  *puVar2 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(local_48,"ClearItem",1);
  FUN_14039176c(puVar2,uVar4,local_48[0],1);
  *puVar2 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar2 + 7) = 1;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71e0;
  FUN_1446ddc76(local_48,"ClearPendingThumbnails",1);
  FUN_14039176c(puVar2,uVar4,local_48[0],1);
  *puVar2 = &PTR_FUN_14b9c71e0;
  FUN_140391314(param_1,puVar2);
  plVar3 = (longlong *)FUN_14615996a(param_1);
  lVar5 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x38));
  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
  FUN_140056680(local_48,&DAT_149dfb77a);
  FUN_140775538(lVar5 + 0x18,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x38));
  if ((longlong)*(int *)(param_1 + 0x2e8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x2e0);
    lVar6 = (longlong)*(int *)(param_1 + 0x2e8) << 4;
    do {
      uVar4 = FUN_14001cc68(0x40,0x10);
      FUN_14615983e(uVar4,*(undefined8 *)(param_1 + 0x30),lVar5);
      FUN_140391314(param_1,uVar4);
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x928) = 0;
    *(undefined1 *)(lVar5 + 0xc0) = 0;
    *(undefined1 *)(lVar5 + 0x1c0) = 0;
    *(undefined8 *)(lVar5 + 0x328) = 0xffffffffffffffff;
    *(undefined4 *)(lVar5 + 0xac) = 0;
    puVar1 = *(ushort **)(lVar5 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
  }
  FUN_1461598f2(param_1);
  FUN_145eea794(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615983e FUN_14615983e body=179 status=ok
// SIG undefined FUN_14615983e(void)

undefined8 * FUN_14615983e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c1410;
  FUN_1446ddc76(&local_38,"RemoveState",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c1410;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_40,iVar1,*param_3,1);
  FUN_1447683ea(param_1 + 7,local_40,1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461598f2 FUN_1461598f2 body=119 status=ok
// SIG undefined FUN_1461598f2(void)

void FUN_1461598f2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x360) != 0)) {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(param_1 + 0x360);
      uVar4 = FUN_144a88394(lVar3);
      lVar3 = FUN_144a61814(uVar4,puVar5);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar4,*puVar5);
      }
      *puVar5 = 0;
    }
  }
  return;
}



// FUNCTION 14615996a FUN_14615996a body=123 status=ok
// SIG undefined FUN_14615996a(void)

longlong FUN_14615996a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461599e6 FUN_1461599e6 body=21 status=ok
// SIG undefined FUN_1461599e6(void)

undefined8 FUN_1461599e6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461599fc FUN_1461599fc body=282 status=ok
// SIG undefined FUN_1461599fc(void)

void FUN_1461599fc(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar5 = FUN_14479d2ce(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar9);
      if ((lVar3 != 0) && (*(short *)(lVar3 + 4) < 0)) {
        lVar8 = lVar3 + 0xb4;
        cVar4 = FUN_144729dda(lVar8);
        if (((((cVar4 != '\0') ||
              (plVar7 = *(longlong **)(param_2 + 0x10), plVar7 == (longlong *)0x0)) ||
             ((*(int *)((longlong)plVar7 + 0xd4) < 0 &&
              (lVar6 = (**(code **)(*plVar7 + 0x2f0))(), lVar6 == 0)))) &&
            ((cVar4 = FUN_144729dda(lVar8), cVar4 == '\0' ||
             (lVar8 = FUN_14479d2ce(lVar8), lVar8 == *(longlong *)(param_2 + 0x10))))) &&
           (*(int *)(lVar3 + 0x50) == *(int *)(param_2 + 0x1c))) {
          cVar4 = FUN_144729dda(lVar3 + 0x18);
          if (cVar4 != '\0') {
            plVar7 = (longlong *)FUN_14479d2ce(lVar3 + 0x18);
            (**(code **)(*plVar7 + 0x750))(plVar7);
          }
          *(undefined1 *)(lVar3 + 0x54) = 1;
          if (*param_4 == '\x03') {
            *(undefined4 *)(lVar3 + 0x50) = 0xffffffff;
            *(undefined1 *)(lVar3 + 0x55) = 1;
          }
          FUN_1415e9ee6(lVar3,uVar5,param_1);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  return;
}



// FUNCTION 146159b16 FUN_146159b16 body=352 status=ok
// SIG undefined FUN_146159b16(void)

undefined4 * FUN_146159b16(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146159d0e(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  uVar3 = *puVar1;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  local_40[2] = 0;
  *(undefined1 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar7 = (uint)uVar3 & 0xffff;
  uVar6 = FUN_144a78877(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4));
  cVar5 = FUN_146159c78(param_1,uVar6,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x24) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146159df6(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146159c78 FUN_146159c78 body=150 status=ok
// SIG undefined FUN_146159c78(void)

undefined8 FUN_146159c78(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      while( true ) {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if ((*plVar8 == *param_3) &&
           (*(int *)(*param_1 + 8 + (longlong)iVar9 * 0x28) == (int)param_3[1])) break;
        iVar9 = (int)plVar8[4];
        if (iVar9 == -1) {
          return 0;
        }
      }
      lVar5 = *param_3;
      uVar1 = *(undefined4 *)((longlong)param_3 + 4);
      lVar6 = param_3[1];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar7 = param_3[3];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(int *)(plVar8 + 2) = (int)param_3[2];
      *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
      *(int *)(plVar8 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
      *(int *)plVar8 = (int)lVar5;
      *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
      *(int *)(plVar8 + 1) = (int)lVar6;
      *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
      FUN_147f6037c((int)lVar5,*param_4);
      *param_4 = iVar9;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 146159d0e FUN_146159d0e body=231 status=ok
// SIG undefined FUN_146159d0e(void)

int * FUN_146159d0e(longlong *param_1,int *param_2)

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



// FUNCTION 146159df6 FUN_146159df6 body=501 status=ok
// SIG undefined FUN_146159df6(void)

void FUN_146159df6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),
                              *(undefined4 *)(lVar3 + 8 + lVar10 * 0x28));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x24 + lVar10 * 0x28) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146159fec FUN_146159fec body=192 status=ok
// SIG undefined FUN_146159fec(void)

bool FUN_146159fec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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



// FUNCTION 14615a0ae FUN_14615a0ae body=219 status=ok
// SIG undefined FUN_14615a0ae(void)

void FUN_14615a0ae(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  lVar10 = (**(code **)(*param_1 + 0x180))();
  if (lVar10 != 0) {
    lVar10 = FUN_1411c648e(*(undefined8 *)(lVar10 + 0x1f0));
    if (lVar10 != 0) {
      uVar9 = FUN_140def96c(param_2,param_3);
      puVar11 = (undefined4 *)FUN_1411c6420(lVar10,uVar9);
      if (puVar11 != (undefined4 *)0x0) {
        uVar9 = *puVar11;
        uVar3 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        uVar6 = puVar11[5];
        uVar7 = puVar11[6];
        uVar8 = puVar11[7];
        *(undefined4 *)(param_1 + 0x11) = puVar11[4];
        *(undefined4 *)((longlong)param_1 + 0x8c) = uVar6;
        *(undefined4 *)(param_1 + 0x12) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x94) = uVar8;
        *(undefined4 *)(param_1 + 0xf) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
        *(undefined4 *)(param_1 + 0x10) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
        uVar9 = puVar11[8];
        *(undefined4 *)(param_1 + 0x13) = uVar9;
        *(char *)((longlong)param_1 + 0x124) = (char)uVar9;
        lVar10 = FUN_1402735c8();
        fVar1 = *(float *)(lVar10 + 0x14c);
        fVar2 = *(float *)(lVar10 + 0x148);
        *(float *)(param_1 + 0x26) =
             (*(float *)(lVar10 + 0x144) - *(float *)(lVar10 + 0x140)) *
             *(float *)((longlong)param_1 + 0x7c) + *(float *)(lVar10 + 0x140);
        *(float *)((longlong)param_1 + 0x134) =
             (fVar1 - fVar2) * *(float *)((longlong)param_1 + 0x7c) + *(float *)(lVar10 + 0x148);
        *param_5 = 1;
      }
    }
  }
  return;
}



// FUNCTION 14615a18a FUN_14615a18a body=2240 status=ok
// SIG undefined FUN_14615a18a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615a18a(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  undefined4 *puVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  undefined1 *local_194;
  undefined4 local_18c;
  undefined4 *local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  _DAT_14ca6a818 = 0xffffffff;
  _DAT_14ca6a81c = 0x105;
  DAT_14ca6a81e = 0;
  DAT_14ca6a810 = &PTR_FUN_14a3333e0;
  FUN_1415eaa34(&DAT_14ca6a820);
  FUN_1415ea9c8(&DAT_14ca6a8a8);
  FUN_1415ea9fe(&DAT_14ca6a8e8);
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  local_194 = (undefined1 *)0x3f800000c0400000;
  local_18c = 0x3f000000;
  FUN_1415874d8(&local_178,&local_194);
  uStack_180._0_4_ = 1;
  FUN_140d35044(&local_188,0);
  pdVar14 = &local_178;
  puVar15 = local_188;
  for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar15 = *(undefined4 *)pdVar14;
    pdVar14 = (double *)((longlong)pdVar14 + 4);
    puVar15 = puVar15 + 1;
  }
  local_194 = (undefined1 *)0xc04000003f800000;
  local_18c = 0x3f000000;
  FUN_1415874d8(&local_178,&local_194);
  iVar7 = (uint)uStack_180;
  lVar9 = (longlong)(int)(uint)uStack_180;
  uStack_180._0_4_ = (uint)uStack_180 + 1;
  if (uStack_180._4_4_ < (uint)uStack_180) {
    FUN_140d35044(&local_188,iVar7);
  }
  pdVar14 = &local_178;
  puVar15 = local_188 + lVar9 * 0x16;
  for (lVar10 = 0x16; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *(undefined4 *)pdVar14;
    pdVar14 = (double *)((longlong)pdVar14 + 4);
    puVar15 = puVar15 + 1;
  }
  local_194 = &DAT_3f8000003f800000;
  local_18c = 0x3f000000;
  FUN_1415874d8(&local_178);
  uVar4 = (uint)uStack_180;
  lVar9 = (longlong)(int)(uint)uStack_180;
  uVar12 = (uint)uStack_180 + 1;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar12);
  if (uStack_180._4_4_ < uVar12) {
    FUN_140d35044(&local_188,uVar4);
    uVar12 = (uint)uStack_180;
  }
  pdVar14 = &local_178;
  puVar15 = local_188 + lVar9 * 0x16;
  for (lVar10 = 0x16; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *(undefined4 *)pdVar14;
    pdVar14 = (double *)((longlong)pdVar14 + 4);
    puVar15 = puVar15 + 1;
  }
  FUN_1408e3634(&DAT_14ca6a8a8,uVar12,1);
  auVar16._0_8_ = (double)FUN_1408e36f6(&DAT_14ca6a820,uStack_180 & 0xffffffff,1,1);
  auVar16._8_8_ = extraout_XMM0_Qb;
  if (0 < (int)(uint)uStack_180) {
    lVar9 = 0;
    do {
      puVar15 = local_188;
      lVar10 = DAT_14ca6a8d0;
      uVar11 = (ulonglong)(uint)(DAT_14ca6a8d8 * (int)lVar9);
      *(undefined4 *)(DAT_14ca6a8d0 + 8 + uVar11) = local_188[lVar9 * 0x16 + 2];
      *(undefined8 *)(lVar10 + uVar11) = *(undefined8 *)(local_188 + lVar9 * 0x16);
      lVar10 = DAT_14ca6a880;
      auVar16 = pmovsxbd(auVar16,local_188[lVar9 * 0x16 + 0x14]);
      fVar25 = (float)auVar16._0_4_ * 0.007874016;
      fVar26 = (float)auVar16._4_4_ * 0.007874016;
      fVar27 = (float)auVar16._8_4_ * 0.007874016;
      auVar17 = pmovsxbd(auVar16,local_188[lVar9 * 0x16 + 0x13]);
      fVar18 = (float)auVar17._0_4_ * 0.007874016;
      fVar19 = (float)auVar17._4_4_ * 0.007874016;
      fVar20 = (float)auVar17._8_4_ * 0.007874016;
      local_168 = (double)fVar20;
      local_170 = (double)fVar19;
      local_178 = (double)fVar18;
      dVar3 = (double)((float)auVar16._0_4_ * 0.007874016);
      dVar22 = (double)((float)auVar16._12_4_ * 0.007874016);
      dVar2 = (double)((float)auVar16._8_4_ * 0.007874016);
      dVar1 = (double)((float)auVar16._4_4_ * 0.007874016);
      fVar24 = (float)((dVar3 * local_170 - dVar1 * local_178) * dVar22);
      fVar23 = (float)((dVar2 * local_178 - dVar3 * local_168) * dVar22);
      fVar21 = (float)((dVar1 * local_168 - dVar2 * local_170) * dVar22);
      if (DAT_14ca6a8a1 == '\x01') {
        local_1a0 = lVar9 * 0x10;
        iVar7 = (int)ROUND(fVar18 * 32767.0 + fVar18 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(DAT_14ca6a880 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar19 * 32767.0 + fVar19 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 2 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar20 * 32767.0 + fVar20 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        if (iVar7 < -0x7fff) {
          iVar7 = -0x8000;
        }
        *(short *)(lVar10 + 4 + local_1a0) = (short)iVar7;
        *(undefined2 *)(lVar10 + 6 + local_1a0) = 0x7fff;
        local_128 = (double)fVar27;
        local_130 = (double)fVar26;
        local_138 = (double)fVar25;
        local_148 = (double)fVar24;
        local_150 = (double)fVar23;
        local_158 = (double)fVar21;
        local_160 = 0;
        local_140 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0x3ff0000000000000;
        auVar16._0_8_ = (double)FUN_144a91046();
        auVar16._8_8_ = extraout_XMM0_Qb_01;
        iVar7 = (int)ROUND(fVar25 * 32767.0 + fVar25 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 8 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar26 * 32767.0 + fVar26 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 10 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar27 * 32767.0 + fVar27 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 0xc + local_1a0) = uVar6;
        iVar7 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(auVar16._0_8_ < 0.0) * 4)) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 0xe + local_1a0) = uVar6;
      }
      else {
        iVar7 = (int)ROUND(fVar18 * 127.0 + fVar18 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        iVar7 = (int)ROUND(fVar19 * 127.0 + fVar19 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        if (iVar7 < -0x7f) {
          iVar7 = -0x80;
        }
        *(undefined1 *)(DAT_14ca6a880 + lVar9 * 8) = uVar5;
        *(char *)(lVar10 + 1 + lVar9 * 8) = (char)iVar7;
        iVar7 = (int)ROUND(fVar20 * 127.0 + fVar20 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        *(undefined1 *)(lVar10 + 2 + lVar9 * 8) = uVar5;
        *(undefined1 *)(lVar10 + 3 + lVar9 * 8) = 0x7f;
        local_128 = (double)fVar27;
        local_130 = (double)fVar26;
        local_138 = (double)fVar25;
        local_148 = (double)fVar24;
        local_150 = (double)fVar23;
        local_158 = (double)fVar21;
        local_160 = 0;
        local_140 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_100 = 0x3ff0000000000000;
        auVar16._0_8_ = (double)FUN_144a91046(&local_178);
        auVar16._8_8_ = extraout_XMM0_Qb_00;
        iVar7 = (int)ROUND(fVar25 * 127.0 + fVar25 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        *(undefined1 *)(lVar10 + 4 + lVar9 * 8) = uVar5;
        iVar7 = (int)ROUND(fVar26 * 127.0 + fVar26 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        if (iVar7 < -0x7f) {
          iVar7 = -0x80;
        }
        iVar13 = (int)ROUND(fVar27 * 127.0 + fVar27 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar13) {
          iVar13 = 0x7f;
        }
        *(char *)(lVar10 + 5 + lVar9 * 8) = (char)iVar7;
        if (iVar13 < -0x7f) {
          iVar13 = -0x80;
        }
        *(char *)(lVar10 + 6 + lVar9 * 8) = (char)iVar13;
        iVar7 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(auVar16._0_8_ < 0.0) * 4)) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        *(undefined1 *)(lVar10 + 7 + lVar9 * 8) = uVar5;
      }
      lVar10 = DAT_14ca6a888;
      if (DAT_14ca6a8a0 == '\x01') {
        *(undefined8 *)(DAT_14ca6a888 + (ulonglong)DAT_14ca6a898 * lVar9 * 8) =
             *(undefined8 *)(puVar15 + lVar9 * 0x16 + 3);
      }
      else {
        fVar18 = ABS((float)puVar15[lVar9 * 0x16 + 3]);
        if ((uint)fVar18 < 0x47800000) {
          if ((uint)fVar18 < 0x38800000) {
            fVar19 = fVar18 + 0.5;
          }
          else {
            fVar18 = (float)((int)fVar18 + 0x8000fff + (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar19 = fVar18;
          }
        }
        else {
          fVar19 = (float)((0x7f800000 < (uint)fVar18 | 0x3e) << 9);
        }
        lVar8 = (ulonglong)DAT_14ca6a898 * lVar9 * 4;
        iVar7 = movmskps(fVar18,ZEXT416((uint)puVar15[lVar9 * 0x16 + 3]));
        *(ushort *)(DAT_14ca6a888 + lVar8) = (ushort)(iVar7 << 0xf) | SUB42(fVar19,0);
        auVar16 = ZEXT416((uint)puVar15[lVar9 * 0x16 + 4]);
        fVar18 = ABS((float)puVar15[lVar9 * 0x16 + 4]);
        if ((uint)fVar18 < 0x47800000) {
          if ((uint)fVar18 < 0x38800000) {
            fVar19 = fVar18 + 0.5;
          }
          else {
            fVar18 = (float)((int)fVar18 + 0x8000fff + (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar19 = fVar18;
          }
        }
        else {
          fVar19 = (float)((0x7f800000 < (uint)fVar18 | 0x3e) << 9);
        }
        iVar7 = movmskps(fVar18,auVar16);
        *(ushort *)(lVar10 + 2 + lVar8) = (ushort)(iVar7 << 0xf) | SUB42(fVar19,0);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)(uint)uStack_180);
  }
  if (local_188 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615aa4c FUN_14615aa4c body=205 status=ok
// SIG undefined FUN_14615aa4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615aa4c(void)

{
  if ((DAT_14cb8e72f & 2) == 0) {
    DAT_14cb8e72f = DAT_14cb8e72f | 2;
    _DAT_14cb8e6d0 = L"FRenoirStandardPS";
    _DAT_14cb8e6e8 = FUN_146826540;
    _DAT_14cb8e6f0 = FUN_146825d77;
    _DAT_14cb8e6f8 = FUN_146825fd6;
    _DAT_14cb8e700 = FUN_1407e02ea;
    _DAT_14cb8e708 = FUN_146826273;
    _DAT_14cb8e6e0 = FUN_1489c05e4;
    _DAT_14cb8e720 = 0xffffffff00000110;
    _DAT_14cb8e728 = 8;
    DAT_14cb8e72c = 0;
    _DAT_14cb8e710 = &LAB_1489c060e;
    FUN_14615ab1a();
    FUN_1407e00cc(&DAT_14cb8e6c8);
    return;
  }
  return;
}



// FUNCTION 14615ab1a FUN_14615ab1a body=133 status=ok
// SIG undefined FUN_14615ab1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615ab1a(void)

{
  _DAT_14cb8fd28 = L"BASE";
  DAT_14cb8fd52 = 4;
  FUN_1459cac6e();
  _DAT_14cb8fd38 = DAT_14cb8e6d8;
  _DAT_14cb8fd30 = &DAT_14cb8fd58;
  _DAT_14cb8fd40 = &LAB_14682652b;
  DAT_14cb8e6d8 = &DAT_14cb8fd28;
  DAT_14cb8e72d = DAT_14cb8e72d + '\x01';
  _DAT_14cb8fd48 = 0x100000000;
  if (DAT_14cb8fdbc != '\0') {
    DAT_14cb8e72e = DAT_14cb8e72e + '\x01';
  }
  return;
}



// FUNCTION 14615aba0 FUN_14615aba0 body=205 status=ok
// SIG undefined FUN_14615aba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615aba0(void)

{
  if ((DAT_14cb8e857 & 2) == 0) {
    DAT_14cb8e857 = DAT_14cb8e857 | 2;
    _DAT_14cb8e7f8 = L"FRenoirStandardRareVS";
    _DAT_14cb8e810 = FUN_146826540;
    _DAT_14cb8e818 = FUN_146825d77;
    _DAT_14cb8e820 = FUN_146825fd6;
    _DAT_14cb8e828 = FUN_1407e02ea;
    _DAT_14cb8e830 = FUN_146826273;
    _DAT_14cb8e808 = FUN_1489c0682;
    _DAT_14cb8e848 = 0xffffffff000000e8;
    _DAT_14cb8e850 = 8;
    DAT_14cb8e854 = 0;
    _DAT_14cb8e838 = &LAB_1489c06ac;
    FUN_14615ac6e();
    FUN_1407e00cc(&DAT_14cb8e7f0);
    return;
  }
  return;
}



// FUNCTION 14615ac6e FUN_14615ac6e body=133 status=ok
// SIG undefined FUN_14615ac6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615ac6e(void)

{
  _DAT_14cb8fe80 = L"BASE";
  DAT_14cb8feaa = 4;
  FUN_145c7a2e6();
  _DAT_14cb8fe90 = DAT_14cb8e800;
  _DAT_14cb8fe88 = &DAT_14cb8fc60;
  _DAT_14cb8fe98 = &LAB_14682652b;
  DAT_14cb8e800 = &DAT_14cb8fe80;
  DAT_14cb8e855 = DAT_14cb8e855 + '\x01';
  _DAT_14cb8fea0 = 0x100000000;
  if (DAT_14cb8fcc4 != '\0') {
    DAT_14cb8e856 = DAT_14cb8e856 + '\x01';
  }
  return;
}



// FUNCTION 14615acf4 FUN_14615acf4 body=205 status=ok
// SIG undefined FUN_14615acf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615acf4(void)

{
  if ((DAT_14cb8e97f & 2) == 0) {
    DAT_14cb8e97f = DAT_14cb8e97f | 2;
    _DAT_14cb8e920 = L"FRenoirStandardRarePS";
    _DAT_14cb8e938 = FUN_146826540;
    _DAT_14cb8e940 = FUN_146825d77;
    _DAT_14cb8e948 = FUN_146825fd6;
    _DAT_14cb8e950 = FUN_1407e02ea;
    _DAT_14cb8e958 = FUN_146826273;
    _DAT_14cb8e930 = FUN_1489c0752;
    _DAT_14cb8e970 = 0xffffffff00000110;
    _DAT_14cb8e978 = 8;
    DAT_14cb8e97c = 0;
    _DAT_14cb8e960 = &LAB_1489c077c;
    FUN_14615adc2();
    FUN_1407e00cc(&DAT_14cb8e918);
    return;
  }
  return;
}



// FUNCTION 14615adc2 FUN_14615adc2 body=133 status=ok
// SIG undefined FUN_14615adc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615adc2(void)

{
  _DAT_14cb8feb0 = L"BASE";
  DAT_14cb8feda = 4;
  FUN_1459cac6e();
  _DAT_14cb8fec0 = DAT_14cb8e928;
  _DAT_14cb8feb8 = &DAT_14cb8fd58;
  _DAT_14cb8fec8 = &LAB_14682652b;
  DAT_14cb8e928 = &DAT_14cb8feb0;
  DAT_14cb8e97d = DAT_14cb8e97d + '\x01';
  _DAT_14cb8fed0 = 0x100000000;
  if (DAT_14cb8fdbc != '\0') {
    DAT_14cb8e97e = DAT_14cb8e97e + '\x01';
  }
  return;
}



// FUNCTION 14615ae48 FUN_14615ae48 body=205 status=ok
// SIG undefined FUN_14615ae48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615ae48(void)

{
  if ((DAT_14cb8ef47 & 2) == 0) {
    DAT_14cb8ef47 = DAT_14cb8ef47 | 2;
    _DAT_14cb8eee8 = L"FRenoirStencilPS";
    _DAT_14cb8ef00 = FUN_146826540;
    _DAT_14cb8ef08 = FUN_146825d77;
    _DAT_14cb8ef10 = FUN_146825fd6;
    _DAT_14cb8ef18 = FUN_1407e02ea;
    _DAT_14cb8ef20 = FUN_146826273;
    _DAT_14cb8eef8 = FUN_1489c0acc;
    _DAT_14cb8ef38 = 0xffffffff00000110;
    _DAT_14cb8ef40 = 8;
    DAT_14cb8ef44 = 0;
    _DAT_14cb8ef28 = &LAB_1489c0af6;
    FUN_14615af16();
    FUN_1407e00cc(&DAT_14cb8eee0);
    return;
  }
  return;
}



// FUNCTION 14615af16 FUN_14615af16 body=133 status=ok
// SIG undefined FUN_14615af16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615af16(void)

{
  _DAT_14cb8ffa0 = L"BASE";
  DAT_14cb8ffca = 4;
  FUN_1459cac6e();
  _DAT_14cb8ffb0 = DAT_14cb8eef0;
  _DAT_14cb8ffa8 = &DAT_14cb8fd58;
  _DAT_14cb8ffb8 = &LAB_14682652b;
  DAT_14cb8eef0 = &DAT_14cb8ffa0;
  DAT_14cb8ef45 = DAT_14cb8ef45 + '\x01';
  _DAT_14cb8ffc0 = 0x100000000;
  if (DAT_14cb8fdbc != '\0') {
    DAT_14cb8ef46 = DAT_14cb8ef46 + '\x01';
  }
  return;
}



// FUNCTION 14615af9c FUN_14615af9c body=205 status=ok
// SIG undefined FUN_14615af9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615af9c(void)

{
  if ((DAT_14cb8f3e7 & 2) == 0) {
    DAT_14cb8f3e7 = DAT_14cb8f3e7 | 2;
    _DAT_14cb8f388 = L"FRenoirClearQuadVS";
    _DAT_14cb8f3a0 = FUN_146826540;
    _DAT_14cb8f3a8 = FUN_146825d77;
    _DAT_14cb8f3b0 = FUN_146825fd6;
    _DAT_14cb8f3b8 = FUN_1407e02ea;
    _DAT_14cb8f3c0 = FUN_146826273;
    _DAT_14cb8f398 = FUN_1489c0d44;
    _DAT_14cb8f3d8 = 0xffffffff000000e8;
    _DAT_14cb8f3e0 = 8;
    DAT_14cb8f3e4 = 0;
    _DAT_14cb8f3c8 = &LAB_1489c0d6e;
    FUN_14615b06a();
    FUN_1407e00cc(&DAT_14cb8f380);
    return;
  }
  return;
}



// FUNCTION 14615b06a FUN_14615b06a body=133 status=ok
// SIG undefined FUN_14615b06a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615b06a(void)

{
  _DAT_14cb90060 = L"BASE";
  DAT_14cb9008a = 4;
  FUN_145c7a2e6();
  _DAT_14cb90070 = DAT_14cb8f390;
  _DAT_14cb90068 = &DAT_14cb8fc60;
  _DAT_14cb90078 = &LAB_14682652b;
  DAT_14cb8f390 = &DAT_14cb90060;
  DAT_14cb8f3e5 = DAT_14cb8f3e5 + '\x01';
  _DAT_14cb90080 = 0x100000000;
  if (DAT_14cb8fcc4 != '\0') {
    DAT_14cb8f3e6 = DAT_14cb8f3e6 + '\x01';
  }
  return;
}



// FUNCTION 14615b0f0 FUN_14615b0f0 body=205 status=ok
// SIG undefined FUN_14615b0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615b0f0(void)

{
  if ((DAT_14cb8f50f & 2) == 0) {
    DAT_14cb8f50f = DAT_14cb8f50f | 2;
    _DAT_14cb8f4b0 = L"FRenoirClearQuadPS";
    _DAT_14cb8f4c8 = FUN_146826540;
    _DAT_14cb8f4d0 = FUN_146825d77;
    _DAT_14cb8f4d8 = FUN_146825fd6;
    _DAT_14cb8f4e0 = FUN_1407e02ea;
    _DAT_14cb8f4e8 = FUN_146826273;
    _DAT_14cb8f4c0 = FUN_1489c0e14;
    _DAT_14cb8f500 = 0xffffffff00000110;
    _DAT_14cb8f508 = 8;
    DAT_14cb8f50c = 0;
    _DAT_14cb8f4f0 = &LAB_1489c0e3e;
    FUN_14615b1be();
    FUN_1407e00cc(&DAT_14cb8f4a8);
    return;
  }
  return;
}



// FUNCTION 14615b1be FUN_14615b1be body=133 status=ok
// SIG undefined FUN_14615b1be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14615b1be(void)

{
  _DAT_14cb90090 = L"BASE";
  DAT_14cb900ba = 4;
  FUN_1459cac6e();
  _DAT_14cb900a0 = DAT_14cb8f4b8;
  _DAT_14cb90098 = &DAT_14cb8fd58;
  _DAT_14cb900a8 = &LAB_14682652b;
  DAT_14cb8f4b8 = &DAT_14cb90090;
  DAT_14cb8f50d = DAT_14cb8f50d + '\x01';
  _DAT_14cb900b0 = 0x100000000;
  if (DAT_14cb8fdbc != '\0') {
    DAT_14cb8f50e = DAT_14cb8f50e + '\x01';
  }
  return;
}



// FUNCTION 14615b244 FUN_14615b244 body=158 status=ok
// SIG undefined FUN_14615b244(void)

bool FUN_14615b244(longlong param_1,undefined8 param_2)

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



// FUNCTION 14615b2e4 FUN_14615b2e4 body=437 status=ok
// SIG undefined FUN_14615b2e4(void)

void FUN_14615b2e4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = FUN_1447210f0(param_2);
  lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar8 == lVar9) {
    lVar8 = FUN_144a883b6(param_1 + 6);
    if (lVar8 != 0) {
      lVar9 = FUN_144a2f878();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        lVar9 = FUN_1401e6dab(lVar8);
        if (lVar9 == param_2) {
          uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
          FUN_1401d61d6(&local_48,uVar10);
          plVar6 = (longlong *)*local_48;
          AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 9));
          plVar3 = plStack_40;
          *(int *)(plVar6 + 8) = (int)plVar6[8] + 1;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_40)(plStack_40);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          iVar4 = (int)plVar6[1];
          if (0 < (longlong)iVar4) {
            iVar11 = (int)plVar6[2] + 2;
            iVar12 = 0;
            lVar9 = 0;
            do {
              uVar5 = *(uint *)(lVar8 + 0xc);
              *(int *)(plVar6 + 2) = iVar11 + -1;
              if (*(ulonglong *)(*plVar6 + 0x38 + lVar9) == (ulonglong)uVar5) {
                if (iVar12 < iVar4) {
                  local_48 = (longlong *)0x0;
                  plStack_40 = (longlong *)0x0;
                  *(int *)(plVar6 + 2) = iVar11;
                  lVar8 = *plVar6 + lVar9;
                  piVar2 = (int *)(lVar8 + 0x70);
                  *piVar2 = *piVar2 + 1;
                  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
                  lVar7 = *plVar6;
                  piVar2 = (int *)(lVar7 + lVar9 + 0x30);
                  *piVar2 = *piVar2 + 1;
                  FUN_1411790ac(param_2,lVar7 + lVar9 + 0x20,lVar8 + 0x60,&local_48);
                  plVar6 = plStack_40;
                  if (plStack_40 != (longlong *)0x0) {
                    LOCK();
                    plVar3 = plStack_40 + 1;
                    *(int *)plVar3 = (int)*plVar3 + -1;
                    UNLOCK();
                    if ((int)*plVar3 == 0) {
                      (**(code **)*plStack_40)(plStack_40);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar6 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                }
                break;
              }
              iVar11 = iVar11 + 1;
              lVar9 = lVar9 + 0x120;
              iVar12 = iVar12 + 1;
            } while ((longlong)iVar4 * 0x120 != lVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615b4b0 FUN_14615b4b0 body=121 status=ok
// SIG undefined FUN_14615b4b0(void)

void FUN_14615b4b0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_14615b53a(param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615b53a FUN_14615b53a body=663 status=ok
// SIG undefined FUN_14615b53a(void)

void FUN_14615b53a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8 [2];
  longlong local_98 [3];
  undefined8 local_80;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_50 [4];
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[2] < 1) {
    lVar3 = param_1[1];
    uVar4 = (int)lVar3 + 1;
    *(uint *)(param_1 + 1) = uVar4;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
      FUN_14001d63e(param_1,(int)lVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_1446f8c06(local_98,(int)param_1[2] * 4 + 4);
  if (0 < (int)param_1[2]) {
    iVar5 = 0;
    do {
      FUN_1400020e8(local_98,L"    ",4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[2]);
  }
  FUN_1400020e8(local_98,&DAT_149e19f2c,3);
  FUN_14023423e(&local_b8,param_2);
  FUN_145aa9352(local_d8,local_98);
  FUN_14023409e(&local_c8,local_d8,1);
  local_50[0] = 4;
  local_40 = local_b8;
  local_b8 = (longlong *)0x0;
  local_38 = local_b0;
  FUN_140e82300();
  plVar1 = local_b8;
  if (local_b8 != DAT_14c844840) {
    local_b8 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  local_b0 = 0;
  local_70 = local_50;
  local_68 = &local_30;
  FUN_14010d304(&local_60);
  local_80 = local_c8;
  local_78 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_a8,&local_80,&local_60);
  FUN_14007f2db(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
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
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_14001d63e(param_1,iVar5);
  }
  FUN_14023423e((longlong)iVar5 * 0x10 + *param_1,local_a8);
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615b7ea FUN_14615b7ea body=55 status=ok
// SIG undefined FUN_14615b7ea(void)

void FUN_14615b7ea(longlong *param_1)

{
  FUN_14615b822(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14615b822 FUN_14615b822 body=356 status=ok
// SIG undefined FUN_14615b822(void)

void FUN_14615b822(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
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
    FUN_144748838(param_1,param_2);
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



// FUNCTION 14615b988 FUN_14615b988 body=89 status=ok
// SIG undefined FUN_14615b988(void)

void FUN_14615b988(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140bfc8e6();
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbe74b8) {
    lVar1 = *(longlong *)(param_2 + 0x78);
    if ((lVar1 == DAT_14cbe74c0) || (lVar1 == DAT_14cbe74c8)) {
      FUN_14615b9e2(param_1 + -0x398,lVar1 == DAT_14cbe74c0);
      return;
    }
  }
  return;
}



// FUNCTION 14615b9e2 FUN_14615b9e2 body=323 status=ok
// SIG undefined FUN_14615b9e2(void)

void FUN_14615b9e2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x2668);
  lVar2 = param_1 + 0x2678;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar5 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x2690) != 0) {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x2690);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (local_50 != lVar2)) {
    do {
      lVar6 = *local_80 + (longlong)iStack_64 * 0x20 + 8;
      cVar3 = FUN_144729dda(lVar6);
      if (cVar3 != '\0') {
        uVar4 = FUN_14479d2ce(lVar6);
        FUN_14045627c(uVar4,param_2,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar5) || (local_70 != lVar2)) || (local_80 != plVar1));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615bb26 FUN_14615bb26 body=62 status=ok
// SIG undefined FUN_14615bb26(void)

void FUN_14615bb26(void)

{
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_1415eaab0(DAT_14c9a7d10);
  return;
}



// FUNCTION 14615bb64 FUN_14615bb64 body=48 status=ok
// SIG undefined FUN_14615bb64(void)

void FUN_14615bb64(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 14615bb94 FUN_14615bb94 body=303 status=ok
// SIG undefined FUN_14615bb94(void)

undefined4 * FUN_14615bb94(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14615bd82(local_40);
  *local_38 = *(uint *)*param_2;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  FUN_145da91ec(0,0);
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  uVar6 = *local_38;
  cVar3 = FUN_14615bcc4(uVar6,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = DAT_14cb98910 - DAT_14cb9893c;
    iVar8 = 1;
    if (3 < uVar4) {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= DAT_14cb98950)) {
      uVar6 = DAT_14cb98950 - 1U & uVar6;
      local_38[7] = uVar6;
      puVar5 = DAT_14cb98948;
      if (DAT_14cb98948 == (undefined *)0x0) {
        puVar5 = &DAT_14cb98940;
      }
      local_38[6] = *(uint *)(puVar5 + ((longlong)DAT_14cb98950 - 1U & (longlong)(int)uVar6) * 4);
      puVar5 = DAT_14cb98948;
      if (DAT_14cb98948 == (undefined *)0x0) {
        puVar5 = &DAT_14cb98940;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cb98950 - 1U & (longlong)(int)uVar6) * 4) = local_44
      ;
    }
    else {
      DAT_14cb98950 = iVar8;
      FUN_14615be90();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615bcc4 FUN_14615bcc4 body=190 status=ok
// SIG undefined FUN_14615bcc4(void)

undefined8 FUN_14615bcc4(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14cb98910 - DAT_14cb9893c != 1) && (DAT_14cb98910 != DAT_14cb9893c)) {
    puVar6 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar6 = DAT_14cb98948;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14cb98950 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(DAT_14cb98908 + (longlong)iVar7 * 0x20);
        if (*(int *)(DAT_14cb98908 + (longlong)iVar7 * 0x20) == *param_2) {
          FUN_145da91ec(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_2;
          iVar3 = param_2[1];
          iVar4 = param_2[2];
          iVar5 = param_2[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_2 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_145cebafa(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14615bd82 FUN_14615bd82 body=269 status=ok
// SIG undefined FUN_14615bd82(void)

int * FUN_14615bd82(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb98938;
  iVar3 = DAT_14cb98910;
  if (DAT_14cb9893c == 0) {
    iVar2 = DAT_14cb98910 + 1;
    bVar7 = DAT_14cb98914 == DAT_14cb98910;
    DAT_14cb98910 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb98908,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb98918,1);
    puVar4 = DAT_14cb98928;
    if (DAT_14cb98928 == (undefined *)0x0) {
      puVar4 = &DAT_14cb98918;
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
    lVar6 = (longlong)DAT_14cb98938;
    DAT_14cb98938 = *(int *)(DAT_14cb98908 + 4 + lVar6 * 0x20);
    DAT_14cb9893c = DAT_14cb9893c + -1;
    if (DAT_14cb9893c != 0) {
      *(undefined4 *)(DAT_14cb98908 + (longlong)DAT_14cb98938 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb98918;
  if (DAT_14cb98928 != (undefined *)0x0) {
    puVar4 = DAT_14cb98928;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb98908;
  return param_1;
}



// FUNCTION 14615be90 FUN_14615be90 body=476 status=ok
// SIG undefined FUN_14615be90(void)

void FUN_14615be90(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
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
  if (DAT_14cb98948 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb98948,0,0,4);
  }
  uVar2 = DAT_14cb98950;
  uVar3 = local_50;
  if (DAT_14cb98950 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb98940,0,DAT_14cb98950,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb98948;
        if (DAT_14cb98948 == (undefined *)0x0) {
          puVar5 = &DAT_14cb98940;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb98950 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb98918;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb98930 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb98908;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)(int)DAT_14cb98950 - 1U & (longlong)*(int *)(lVar1 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb98948;
        if (DAT_14cb98948 == (undefined *)0x0) {
          puVar5 = &DAT_14cb98940;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb98950 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb98948;
        if (DAT_14cb98948 == (undefined *)0x0) {
          puVar5 = &DAT_14cb98940;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb98950 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14615c06e FUN_14615c06e body=195 status=ok
// SIG undefined FUN_14615c06e(void)

void FUN_14615c06e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)*param_2;
  if (*(int *)((longlong)puVar3 + 0x14) == 0) {
    local_30 = *puVar3;
    local_28 = (longlong *)puVar3[1];
    if (local_28 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      plVar5 = local_28;
    }
    uVar4 = FUN_145ce2ae6(param_1,&local_30);
    FUN_145cc76be(param_1,uVar4);
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
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_1415eafea();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1415eaf1a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14615c140 FUN_14615c140 body=40 status=ok
// SIG undefined FUN_14615c140(void)

undefined8 FUN_14615c140(undefined8 param_1,int param_2)

{
  FUN_1415eb8d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


