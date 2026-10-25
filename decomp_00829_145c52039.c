// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c52039 FUN_145c52039 body=47 status=ok
// SIG undefined FUN_145c52039(void)

longlong FUN_145c52039(void)

{
  if (DAT_14cc1ee60 == 0) {
    FUN_140f50038(&DAT_14cc1ee60,&PTR_s__Script_AnalyticsBlueprintLibrar_14bd4b220);
  }
  return DAT_14cc1ee60;
}



// FUNCTION 145c52068 FUN_145c52068 body=55 status=ok
// SIG undefined FUN_145c52068(void)

void FUN_145c52068(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc315a8 == 0) {
    uVar1 = FUN_145c5209f();
    DAT_14cc315a8 = FUN_140002ddd(FUN_1467707c0,uVar1,L"ImgMediaSourceCustomizationSequenceProxy");
  }
  return;
}



// FUNCTION 145c5209f FUN_145c5209f body=47 status=ok
// SIG undefined FUN_145c5209f(void)

longlong FUN_145c5209f(void)

{
  if (DAT_14cc31510 == 0) {
    FUN_140f50038(&DAT_14cc31510,&PTR_s__Script_ImgMedia_14beef320);
  }
  return DAT_14cc31510;
}



// FUNCTION 145c520ce FUN_145c520ce body=55 status=ok
// SIG undefined FUN_145c520ce(void)

void FUN_145c520ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc32728 == 0) {
    uVar1 = FUN_145c52105();
    DAT_14cc32728 = FUN_140002ddd(FUN_1467721bb,uVar1,L"ActorLayer");
  }
  return;
}



// FUNCTION 145c52105 FUN_145c52105 body=47 status=ok
// SIG undefined FUN_145c52105(void)

longlong FUN_145c52105(void)

{
  if (DAT_14cc32710 == 0) {
    FUN_140f50038(&DAT_14cc32710,&PTR_s__Script_ActorLayerUtilities_14bf03520);
  }
  return DAT_14cc32710;
}



// FUNCTION 145c52134 FUN_145c52134 body=40 status=ok
// SIG undefined FUN_145c52134(void)

undefined8 FUN_145c52134(undefined8 param_1,int param_2)

{
  FUN_145c5215c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5215c FUN_145c5215c body=71 status=ok
// SIG undefined FUN_145c5215c(void)

void FUN_145c5215c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4d3740;
  param_1[8] = &PTR_FUN_14a4d3a20;
  FUN_145c521a4(param_1 + 0x17);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c521a4 FUN_145c521a4 body=106 status=ok
// SIG undefined FUN_145c521a4(void)

void FUN_145c521a4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145c5220e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145c52246(param_1);
  return;
}



// FUNCTION 145c5220e FUN_145c5220e body=55 status=ok
// SIG undefined FUN_145c5220e(void)

void FUN_145c5220e(longlong *param_1)

{
  FUN_145c5227c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c52246 FUN_145c52246 body=53 status=ok
// SIG undefined FUN_145c52246(void)

void FUN_145c52246(longlong *param_1)

{
  FUN_145c522f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c5227c FUN_145c5227c body=123 status=ok
// SIG undefined FUN_145c5227c(void)

void FUN_145c5227c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145c522f8 FUN_145c522f8 body=368 status=ok
// SIG undefined FUN_145c522f8(void)

void FUN_145c522f8(longlong *param_1)

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
      if (*(longlong *)(lVar2 + 0x30 + lVar3 * 0x48) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + lVar3 * 0x48;
      if (*(char *)(lVar2 + 9) == '\x01') {
        *(undefined1 *)(lVar2 + 9) = 0;
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c5246a FUN_145c5246a body=135 status=ok
// SIG undefined FUN_145c5246a(void)

void FUN_145c5246a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = &LAB_145834432;
      local_20 = 0;
      FUN_145c524f2(param_1,param_2,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c524f2 FUN_145c524f2 body=280 status=ok
// SIG undefined FUN_145c524f2(void)

void FUN_145c524f2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1415039ce(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cb92c18;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5260c FUN_145c5260c body=281 status=ok
// SIG undefined FUN_145c5260c(void)

undefined4 * FUN_145c5260c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c527aa(param_1,local_48);
  uVar1 = *(ushort *)*param_3;
  *local_40 = uVar1;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0xffff;
  local_40[9] = 0xffff;
  local_4c = local_48[0];
  cVar3 = FUN_145c52726(param_1,uVar1,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_40 + 10) = uVar5;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145c5289a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c52726 FUN_145c52726 body=132 status=ok
// SIG undefined FUN_145c52726(void)

undefined8 FUN_145c52726(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*psVar1 == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          *(undefined4 *)psVar1 = uVar2;
          *(undefined4 *)(psVar1 + 2) = uVar3;
          *(undefined4 *)(psVar1 + 4) = uVar4;
          *(undefined4 *)(psVar1 + 6) = uVar5;
          FUN_145905dbe(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = *(int *)(psVar1 + 8);
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c527aa FUN_145c527aa body=239 status=ok
// SIG undefined FUN_145c527aa(void)

int * FUN_145c527aa(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145c5289a FUN_145c5289a body=419 status=ok
// SIG undefined FUN_145c5289a(void)

void FUN_145c5289a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0x18);
        *(uint *)(lVar2 + 0x14 + lVar5 * 0x18) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 145c52a3e FUN_145c52a3e body=40 status=ok
// SIG undefined FUN_145c52a3e(void)

undefined8 FUN_145c52a3e(undefined8 param_1,int param_2)

{
  FUN_145c52a66();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c52a66 FUN_145c52a66 body=89 status=ok
// SIG undefined FUN_145c52a66(void)

void FUN_145c52a66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acdb640;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145c52ac0(param_1 + 0xb);
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c52ac0 FUN_145c52ac0 body=55 status=ok
// SIG undefined FUN_145c52ac0(void)

void FUN_145c52ac0(longlong *param_1)

{
  FUN_145c52af8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c52af8 FUN_145c52af8 body=123 status=ok
// SIG undefined FUN_145c52af8(void)

void FUN_145c52af8(longlong param_1,int param_2)

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



// FUNCTION 145c52b74 FUN_145c52b74 body=70 status=ok
// SIG undefined FUN_145c52b74(void)

undefined8 FUN_145c52b74(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined4 *)(lVar1 + 0x60) = param_2;
    FUN_145c52bba(lVar1 + 0x68,param_3);
    *(undefined4 *)(lVar1 + 0x78) = param_4;
    *(undefined1 *)(lVar1 + 0x18) = 1;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 145c52bba FUN_145c52bba body=88 status=ok
// SIG undefined FUN_145c52bba(void)

undefined8 * FUN_145c52bba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145c52c12(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c52c12 FUN_145c52c12 body=98 status=ok
// SIG undefined FUN_145c52c12(void)

void FUN_145c52c12(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145c52c74 FUN_145c52c74 body=216 status=ok
// SIG undefined FUN_145c52c74(void)

undefined8 * FUN_145c52c74(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c52d76 FUN_145c52d76 body=40 status=ok
// SIG undefined FUN_145c52d76(void)

undefined8 FUN_145c52d76(undefined8 param_1,int param_2)

{
  FUN_145c52d9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c52d9e FUN_145c52d9e body=165 status=ok
// SIG undefined FUN_145c52d9e(void)

void FUN_145c52d9e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5127e0;
  param_1[5] = &PTR_FUN_14a512b00;
  plVar3 = (longlong *)param_1[0x35];
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
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c52e44 FUN_145c52e44 body=195 status=ok
// SIG undefined FUN_145c52e44(void)

void FUN_145c52e44(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x48);
  uVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
  memset(local_c8,0,0xa0);
  FUN_140bc495f(param_2,uVar2,local_c8,0);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_a8 != 0) {
    if (local_98 == (longlong *)0x0) {
      local_98 = local_88;
    }
    (**(code **)(*local_98 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c52f08 FUN_145c52f08 body=53 status=ok
// SIG undefined FUN_145c52f08(void)

void FUN_145c52f08(longlong *param_1)

{
  FUN_141504716();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c52f48 FUN_145c52f48 body=297 status=ok
// SIG undefined FUN_145c52f48(void)

undefined8 * FUN_145c52f48(undefined8 *param_1)

{
  FUN_140307c5a();
  *param_1 = &PTR_FUN_14a58b7e0;
  param_1[0x19] = &PTR_FUN_14a58bb90;
  param_1[0x1a] = &PTR_FUN_14a58bbd0;
  *(undefined2 *)(param_1 + 0x27) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_1412e3d1e(param_1 + 0x33);
  param_1[0x35] = DAT_14c967818;
  *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3c),4000);
  param_1[0x41] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x42) = 1;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
  return param_1;
}



// FUNCTION 145c53072 FUN_145c53072 body=212 status=ok
// SIG undefined FUN_145c53072(void)

void FUN_145c53072(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0xa8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
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
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_145c53176(param_1 + 0x70);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_145c53146(param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c53142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c53146 FUN_145c53146 body=48 status=ok
// SIG undefined FUN_145c53146(void)

void FUN_145c53146(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 145c53176 FUN_145c53176 body=48 status=ok
// SIG undefined FUN_145c53176(void)

void FUN_145c53176(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 145c531a6 FUN_145c531a6 body=55 status=ok
// SIG undefined FUN_145c531a6(void)

void FUN_145c531a6(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    FUN_140328e08();
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140326680(*(longlong *)(param_1 + 0x20),param_1 + 0x18,1);
      return;
    }
  }
  return;
}



// FUNCTION 145c531de FUN_145c531de body=135 status=ok
// SIG undefined FUN_145c531de(void)

void FUN_145c531de(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402f20d0(param_1,&local_30);
  if (local_30 != 0) {
    FUN_145c53278(local_30,param_1,param_2);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c53278 FUN_145c53278 body=181 status=ok
// SIG undefined FUN_145c53278(void)

void FUN_145c53278(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar2 >> 0x10 ^ uVar2))
                             * 4);
    if (iVar3 != -1) {
      lVar4 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1b88);
      }
      do {
        puVar1 = (ulonglong *)(lVar4 + (longlong)iVar3 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (puVar1 + 1 == (ulonglong *)0x0) {
            return;
          }
          FUN_141367b2c(puVar1[1],param_3);
          return;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 145c5332e FUN_145c5332e body=365 status=ok
// SIG undefined FUN_145c5332e(void)

undefined4 * FUN_145c5332e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c5355e(param_1,local_48);
  lVar8 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(lVar8 + 0x18);
  *(byte *)(local_40 + 4) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(local_40 + 2,lVar8 + 8);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145c5349c(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x2c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145c5364e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5349c FUN_145c5349c body=194 status=ok
// SIG undefined FUN_145c5349c(void)

undefined8 FUN_145c5349c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          *(undefined ***)(puVar1 + 2) = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar1 + 8)])(puVar1 + 4);
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_1488c3026(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c5355e FUN_145c5355e body=239 status=ok
// SIG undefined FUN_145c5355e(void)

int * FUN_145c5355e(longlong *param_1,int *param_2)

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



// FUNCTION 145c5364e FUN_145c5364e body=486 status=ok
// SIG undefined FUN_145c5364e(void)

void FUN_145c5364e(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145c53836 FUN_145c53836 body=141 status=ok
// SIG undefined FUN_145c53836(void)

void FUN_145c53836(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148efe1a2(param_2);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_14433d758;
  local_20 = &local_30;
  local_28 = FUN_145c53b5e;
  local_48 = param_2;
  FUN_145c538c4(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c538c4 FUN_145c538c4 body=664 status=ok
// SIG undefined FUN_145c538c4(void)

void FUN_145c538c4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x54];
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    iStack_6c = iStack_4c;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        lVar5 = *local_88;
        lVar8 = (longlong)iStack_6c;
        lVar6 = *(longlong *)(lVar5 + 0x10 + lVar8 * 0x20);
        if ((lVar6 != 0) &&
           ((cVar4 = FUN_140dddae6(lVar6 + 0x48), cVar4 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar5 + lVar8 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_141218768();
          if ((lVar6 != 0) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)))) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x3e];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_141218768();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c53b5e FUN_145c53b5e body=67 status=ok
// SIG undefined FUN_145c53b5e(void)

void FUN_145c53b5e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c53ba2 FUN_145c53ba2 body=158 status=ok
// SIG undefined FUN_145c53ba2(void)

void FUN_145c53ba2(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1401cb356();
  local_18 = DAT_14c8336b0;
  local_10 = DAT_14c8336b8;
  if (DAT_14c8336b8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)DAT_14c8336b8 + 0xc) = *(int *)((longlong)DAT_14c8336b8 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_18);
  if (DAT_14c8336c0 != 0) {
    FUN_14480f766(&DAT_14c86a900);
  }
  plVar2 = DAT_14c8336b8;
  if (DAT_14c8336b8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c8336b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_141504946(&DAT_14c833688);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 145c53c42 FUN_145c53c42 body=40 status=ok
// SIG undefined FUN_145c53c42(void)

undefined8 FUN_145c53c42(undefined8 param_1,int param_2)

{
  FUN_145c53c6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c53c6a FUN_145c53c6a body=63 status=ok
// SIG undefined FUN_145c53c6a(void)

void FUN_145c53c6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e72ea0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c53ca9 FUN_145c53ca9 body=91 status=ok
// SIG undefined FUN_145c53ca9(void)

void FUN_145c53ca9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145931fd0(puVar1);
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_149f92590;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  FUN_145c53d04(puVar1 + 0xd,0);
  puVar1[0x13] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  return;
}



// FUNCTION 145c53d04 FUN_145c53d04 body=115 status=ok
// SIG undefined FUN_145c53d04(void)

void FUN_145c53d04(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        thunk_FUN_1400020a8(lVar2,0x800);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145c53d78 FUN_145c53d78 body=40 status=ok
// SIG undefined FUN_145c53d78(void)

undefined8 FUN_145c53d78(undefined8 param_1,int param_2)

{
  FUN_145c53da0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c53da0 FUN_145c53da0 body=63 status=ok
// SIG undefined FUN_145c53da0(void)

void FUN_145c53da0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1cdd50;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c53de0 FUN_145c53de0 body=40 status=ok
// SIG undefined FUN_145c53de0(void)

undefined8 FUN_145c53de0(undefined8 param_1,int param_2)

{
  FUN_145c53e08();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c53e08 FUN_145c53e08 body=63 status=ok
// SIG undefined FUN_145c53e08(void)

void FUN_145c53e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3dbc60;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c53e48 FUN_145c53e48 body=40 status=ok
// SIG undefined FUN_145c53e48(void)

undefined8 FUN_145c53e48(undefined8 param_1,int param_2)

{
  FUN_145c53e70();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c53e70 FUN_145c53e70 body=63 status=ok
// SIG undefined FUN_145c53e70(void)

void FUN_145c53e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3dc010;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c53eb0 FUN_145c53eb0 body=40 status=ok
// SIG undefined FUN_145c53eb0(void)

undefined8 FUN_145c53eb0(undefined8 param_1,int param_2)

{
  FUN_145c53ed8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c53ed8 FUN_145c53ed8 body=63 status=ok
// SIG undefined FUN_145c53ed8(void)

void FUN_145c53ed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3dc3c0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c53f18 FUN_145c53f18 body=40 status=ok
// SIG undefined FUN_145c53f18(void)

undefined8 FUN_145c53f18(undefined8 param_1,int param_2)

{
  FUN_145c53f40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c53f40 FUN_145c53f40 body=63 status=ok
// SIG undefined FUN_145c53f40(void)

void FUN_145c53f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4f9cb0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c53f88 FUN_145c53f88 body=95 status=ok
// SIG undefined FUN_145c53f88(void)

undefined8 * FUN_145c53f88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ea0e34(param_1,uVar1);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *param_1 = &PTR_FUN_14a52ee50;
  param_1[5] = &PTR_FUN_14a52f170;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145c53fe8 FUN_145c53fe8 body=40 status=ok
// SIG undefined FUN_145c53fe8(void)

undefined8 FUN_145c53fe8(undefined8 param_1,int param_2)

{
  FUN_145c54010();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54010 FUN_145c54010 body=63 status=ok
// SIG undefined FUN_145c54010(void)

void FUN_145c54010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a54ca20;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54050 FUN_145c54050 body=40 status=ok
// SIG undefined FUN_145c54050(void)

undefined8 FUN_145c54050(undefined8 param_1,int param_2)

{
  FUN_145c54078();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54078 FUN_145c54078 body=63 status=ok
// SIG undefined FUN_145c54078(void)

void FUN_145c54078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a61f550;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c540b8 FUN_145c540b8 body=40 status=ok
// SIG undefined FUN_145c540b8(void)

undefined8 FUN_145c540b8(undefined8 param_1,int param_2)

{
  FUN_145c540e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c540e0 FUN_145c540e0 body=63 status=ok
// SIG undefined FUN_145c540e0(void)

void FUN_145c540e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a636230;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e842(param_1);
  return;
}



// FUNCTION 145c54120 FUN_145c54120 body=40 status=ok
// SIG undefined FUN_145c54120(void)

undefined8 FUN_145c54120(undefined8 param_1,int param_2)

{
  FUN_145c54148();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54148 FUN_145c54148 body=63 status=ok
// SIG undefined FUN_145c54148(void)

void FUN_145c54148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6a0c80;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54188 FUN_145c54188 body=40 status=ok
// SIG undefined FUN_145c54188(void)

undefined8 FUN_145c54188(undefined8 param_1,int param_2)

{
  FUN_145c541b0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c541b0 FUN_145c541b0 body=63 status=ok
// SIG undefined FUN_145c541b0(void)

void FUN_145c541b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6caee0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c541f0 FUN_145c541f0 body=40 status=ok
// SIG undefined FUN_145c541f0(void)

undefined8 FUN_145c541f0(undefined8 param_1,int param_2)

{
  FUN_145c54218();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54218 FUN_145c54218 body=63 status=ok
// SIG undefined FUN_145c54218(void)

void FUN_145c54218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d0930;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54258 FUN_145c54258 body=40 status=ok
// SIG undefined FUN_145c54258(void)

undefined8 FUN_145c54258(undefined8 param_1,int param_2)

{
  FUN_145c54280();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54280 FUN_145c54280 body=63 status=ok
// SIG undefined FUN_145c54280(void)

void FUN_145c54280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ec1b0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c542c0 FUN_145c542c0 body=40 status=ok
// SIG undefined FUN_145c542c0(void)

undefined8 FUN_145c542c0(undefined8 param_1,int param_2)

{
  FUN_145c542e8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c542e8 FUN_145c542e8 body=63 status=ok
// SIG undefined FUN_145c542e8(void)

void FUN_145c542e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6f5790;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54328 FUN_145c54328 body=40 status=ok
// SIG undefined FUN_145c54328(void)

undefined8 FUN_145c54328(undefined8 param_1,int param_2)

{
  FUN_145c54350();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54350 FUN_145c54350 body=63 status=ok
// SIG undefined FUN_145c54350(void)

void FUN_145c54350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8d6f40;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54390 FUN_145c54390 body=40 status=ok
// SIG undefined FUN_145c54390(void)

undefined8 FUN_145c54390(undefined8 param_1,int param_2)

{
  FUN_145c543b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c543b8 FUN_145c543b8 body=63 status=ok
// SIG undefined FUN_145c543b8(void)

void FUN_145c543b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9adcb0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1458e0478(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c543f8 FUN_145c543f8 body=40 status=ok
// SIG undefined FUN_145c543f8(void)

undefined8 FUN_145c543f8(undefined8 param_1,int param_2)

{
  FUN_145c54420();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54420 FUN_145c54420 body=63 status=ok
// SIG undefined FUN_145c54420(void)

void FUN_145c54420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abc80a0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54460 FUN_145c54460 body=40 status=ok
// SIG undefined FUN_145c54460(void)

undefined8 FUN_145c54460(undefined8 param_1,int param_2)

{
  FUN_145c54488();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54488 FUN_145c54488 body=63 status=ok
// SIG undefined FUN_145c54488(void)

void FUN_145c54488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abe4120;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c544c8 FUN_145c544c8 body=40 status=ok
// SIG undefined FUN_145c544c8(void)

undefined8 FUN_145c544c8(undefined8 param_1,int param_2)

{
  FUN_145c544f0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c544f0 FUN_145c544f0 body=63 status=ok
// SIG undefined FUN_145c544f0(void)

void FUN_145c544f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acca5b0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140f0c3ca(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54530 FUN_145c54530 body=40 status=ok
// SIG undefined FUN_145c54530(void)

undefined8 FUN_145c54530(undefined8 param_1,int param_2)

{
  FUN_145c54558();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54558 FUN_145c54558 body=63 status=ok
// SIG undefined FUN_145c54558(void)

void FUN_145c54558(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad82730;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54598 FUN_145c54598 body=40 status=ok
// SIG undefined FUN_145c54598(void)

undefined8 FUN_145c54598(undefined8 param_1,int param_2)

{
  FUN_145c545c0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c545c0 FUN_145c545c0 body=63 status=ok
// SIG undefined FUN_145c545c0(void)

void FUN_145c545c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc2ae0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145c54600 FUN_145c54600 body=40 status=ok
// SIG undefined FUN_145c54600(void)

undefined8 FUN_145c54600(undefined8 param_1,int param_2)

{
  FUN_145c54628();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54628 FUN_145c54628 body=63 status=ok
// SIG undefined FUN_145c54628(void)

void FUN_145c54628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14add0f70;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145c54668 FUN_145c54668 body=40 status=ok
// SIG undefined FUN_145c54668(void)

undefined8 FUN_145c54668(undefined8 param_1,int param_2)

{
  FUN_145c54690();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54690 FUN_145c54690 body=63 status=ok
// SIG undefined FUN_145c54690(void)

void FUN_145c54690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aeee980;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c546d0 FUN_145c546d0 body=40 status=ok
// SIG undefined FUN_145c546d0(void)

undefined8 FUN_145c546d0(undefined8 param_1,int param_2)

{
  FUN_145c546f8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c546f8 FUN_145c546f8 body=63 status=ok
// SIG undefined FUN_145c546f8(void)

void FUN_145c546f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afbb660;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54740 FUN_145c54740 body=95 status=ok
// SIG undefined FUN_145c54740(void)

undefined8 * FUN_145c54740(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b43dc90;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1458d791c(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x8a) = 0;
  return param_1;
}



// FUNCTION 145c547a0 FUN_145c547a0 body=40 status=ok
// SIG undefined FUN_145c547a0(void)

undefined8 FUN_145c547a0(undefined8 param_1,int param_2)

{
  FUN_145c547c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c547c8 FUN_145c547c8 body=63 status=ok
// SIG undefined FUN_145c547c8(void)

void FUN_145c547c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4adc40;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54808 FUN_145c54808 body=40 status=ok
// SIG undefined FUN_145c54808(void)

undefined8 FUN_145c54808(undefined8 param_1,int param_2)

{
  FUN_145c54830();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54830 FUN_145c54830 body=63 status=ok
// SIG undefined FUN_145c54830(void)

void FUN_145c54830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4bc1f0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54870 FUN_145c54870 body=40 status=ok
// SIG undefined FUN_145c54870(void)

undefined8 FUN_145c54870(undefined8 param_1,int param_2)

{
  FUN_145c54898();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54898 FUN_145c54898 body=63 status=ok
// SIG undefined FUN_145c54898(void)

void FUN_145c54898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c7980;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c548d8 FUN_145c548d8 body=105 status=ok
// SIG undefined FUN_145c548d8(void)

void FUN_145c548d8(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459983e0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145c54942(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c54942 FUN_145c54942 body=76 status=ok
// SIG undefined FUN_145c54942(void)

void FUN_145c54942(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1459983e0();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145c5497f;
    }
  }
  lVar2 = 0;
LAB_145c5497f:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145c5498e FUN_145c5498e body=46 status=ok
// SIG undefined FUN_145c5498e(void)

void FUN_145c5498e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c549bc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b565780;
  puVar1[5] = &PTR_FUN_14b565ad0;
  return;
}



// FUNCTION 145c549bc FUN_145c549bc body=57 status=ok
// SIG undefined FUN_145c549bc(void)

undefined8 * FUN_145c549bc(undefined8 *param_1)

{
  FUN_1458440b0();
  *param_1 = &PTR_FUN_14ae425a0;
  param_1[5] = &PTR_FUN_14ae428f0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
  return param_1;
}



// FUNCTION 145c549f6 FUN_145c549f6 body=40 status=ok
// SIG undefined FUN_145c549f6(void)

undefined8 FUN_145c549f6(undefined8 param_1,int param_2)

{
  FUN_145c54a1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54a1e FUN_145c54a1e body=63 status=ok
// SIG undefined FUN_145c54a1e(void)

void FUN_145c54a1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b57e8b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54a5e FUN_145c54a5e body=40 status=ok
// SIG undefined FUN_145c54a5e(void)

undefined8 FUN_145c54a5e(undefined8 param_1,int param_2)

{
  FUN_145c54a86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54a86 FUN_145c54a86 body=63 status=ok
// SIG undefined FUN_145c54a86(void)

void FUN_145c54a86(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7ad230;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54ac6 FUN_145c54ac6 body=38 status=ok
// SIG undefined FUN_145c54ac6(void)

undefined8 FUN_145c54ac6(undefined8 param_1,int param_2)

{
  FUN_145c54aec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54aec FUN_145c54aec body=65 status=ok
// SIG undefined FUN_145c54aec(void)

void FUN_145c54aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a0b10;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c54b2e FUN_145c54b2e body=38 status=ok
// SIG undefined FUN_145c54b2e(void)

undefined8 FUN_145c54b2e(undefined8 param_1,int param_2)

{
  FUN_145c54b54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54b54 FUN_145c54b54 body=65 status=ok
// SIG undefined FUN_145c54b54(void)

void FUN_145c54b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8cdab0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c54b9e FUN_145c54b9e body=95 status=ok
// SIG undefined FUN_145c54b9e(void)

undefined8 * FUN_145c54b9e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b94e760;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf8;
  return param_1;
}



// FUNCTION 145c54bfe FUN_145c54bfe body=40 status=ok
// SIG undefined FUN_145c54bfe(void)

undefined8 FUN_145c54bfe(undefined8 param_1,int param_2)

{
  FUN_145c54c26();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54c26 FUN_145c54c26 body=63 status=ok
// SIG undefined FUN_145c54c26(void)

void FUN_145c54c26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bac0190;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54c6e FUN_145c54c6e body=95 status=ok
// SIG undefined FUN_145c54c6e(void)

undefined8 * FUN_145c54c6e(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc53600;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"ShaderType");
  *param_1 = &PTR_FUN_14bc53bb0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"MaterialFunction");
  return param_1;
}



// FUNCTION 145c54cce FUN_145c54cce body=40 status=ok
// SIG undefined FUN_145c54cce(void)

undefined8 FUN_145c54cce(undefined8 param_1,int param_2)

{
  FUN_145c54cf6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54cf6 FUN_145c54cf6 body=63 status=ok
// SIG undefined FUN_145c54cf6(void)

void FUN_145c54cf6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc62730;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54d36 FUN_145c54d36 body=40 status=ok
// SIG undefined FUN_145c54d36(void)

undefined8 FUN_145c54d36(undefined8 param_1,int param_2)

{
  FUN_145c54d5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54d5e FUN_145c54d5e body=63 status=ok
// SIG undefined FUN_145c54d5e(void)

void FUN_145c54d5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bca08c0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 5);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54d9e FUN_145c54d9e body=40 status=ok
// SIG undefined FUN_145c54d9e(void)

undefined8 FUN_145c54d9e(undefined8 param_1,int param_2)

{
  FUN_145c54dc6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54dc6 FUN_145c54dc6 body=63 status=ok
// SIG undefined FUN_145c54dc6(void)

void FUN_145c54dc6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd31800;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54e06 FUN_145c54e06 body=40 status=ok
// SIG undefined FUN_145c54e06(void)

undefined8 FUN_145c54e06(undefined8 param_1,int param_2)

{
  FUN_145c54e2e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54e2e FUN_145c54e2e body=63 status=ok
// SIG undefined FUN_145c54e2e(void)

void FUN_145c54e2e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14becb120;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54e6e FUN_145c54e6e body=40 status=ok
// SIG undefined FUN_145c54e6e(void)

undefined8 FUN_145c54e6e(undefined8 param_1,int param_2)

{
  FUN_145c54e96();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c54e96 FUN_145c54e96 body=63 status=ok
// SIG undefined FUN_145c54e96(void)

void FUN_145c54e96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bed8600;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 5);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c54ed6 FUN_145c54ed6 body=561 status=ok
// SIG undefined FUN_145c54ed6(void)

longlong * FUN_145c54ed6(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *unaff_RBP;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (longlong *)FUN_145c552b2();
  local_58 = local_50 + 2;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar11 = (longlong)*(int *)(param_1 + 0x38) * 0x58;
    lVar9 = *(longlong *)(param_1 + 0x30) + 0x30;
    do {
      unaff_RBP = (longlong *)
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(lVar9 + -8));
      uVar8 = FUN_141332cf8(*(undefined8 *)(param_3 + 0x10));
      FUN_145c55346(&local_68,uVar8,(ulonglong)unaff_RBP & 0xffffffff,lVar9);
      plVar7 = local_60;
      lVar6 = local_68;
      if (local_68 != 0) {
        if (local_60 == (longlong *)0x0) {
          local_78 = *(undefined4 *)(lVar9 + -0x18);
          uStack_74 = *(undefined4 *)(lVar9 + -0x14);
          uStack_70 = *(undefined4 *)(lVar9 + -0x10);
          uStack_6c = *(undefined4 *)(lVar9 + -0xc);
        }
        else {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
          local_78 = *(undefined4 *)(lVar9 + -0x18);
          uStack_74 = *(undefined4 *)(lVar9 + -0x14);
          uStack_70 = *(undefined4 *)(lVar9 + -0x10);
          uStack_6c = *(undefined4 *)(lVar9 + -0xc);
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        unaff_RBP = local_58 + 0xe;
        iVar4 = (int)local_58[0xf];
        *(uint *)(local_58 + 0xf) = iVar4 + 1U;
        if (*(uint *)((longlong)local_58 + 0x7c) < iVar4 + 1U) {
          FUN_145c55108(unaff_RBP,iVar4);
        }
        lVar10 = (longlong)iVar4 * 0x20;
        lVar5 = *unaff_RBP;
        puVar2 = (undefined4 *)(lVar5 + lVar10);
        *puVar2 = local_78;
        puVar2[1] = uStack_74;
        puVar2[2] = uStack_70;
        puVar2[3] = uStack_6c;
        *(longlong *)(lVar5 + 0x10 + lVar10) = lVar6;
        *(longlong **)(lVar5 + 0x18 + lVar10) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar7 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          LOCK();
          plVar3 = plVar7 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        FUN_145c5518e(local_68 + 8,&local_58);
      }
      plVar7 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      lVar9 = lVar9 + 0x58;
      lVar11 = lVar11 + -0x58;
    } while (lVar11 != 0);
  }
  plVar7 = local_50;
  *param_2 = (longlong)local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c55108 FUN_145c55108 body=132 status=ok
// SIG undefined FUN_145c55108(void)

void FUN_145c55108(longlong param_1,int param_2)

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



// FUNCTION 145c5518e FUN_145c5518e body=292 status=ok
// SIG undefined FUN_145c5518e(void)

void FUN_145c5518e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b428b20;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_1410dcfae;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b428b20;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1410dcfae;
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
                    /* WARNING: Could not recover jumptable at 0x000145c5529d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c552b2 FUN_145c552b2 body=148 status=ok
// SIG undefined FUN_145c552b2(void)

void FUN_145c552b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b428b00;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x31) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x39) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x69) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x71) = 0;
  puVar1[2] = &PTR_FUN_14b24d460;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  return;
}



// FUNCTION 145c55346 FUN_145c55346 body=527 status=ok
// SIG undefined FUN_145c55346(void)

longlong * FUN_145c55346(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b416730;
  plVar6 = plVar4 + 2;
  FUN_145c5580a(plVar6,param_2,param_3,param_4);
  local_68 = plVar6;
  local_60 = plVar4;
  if (param_2 != 0) {
    lVar5 = FUN_144a6c4d8();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      local_78 = 0;
      uStack_70 = 0;
      local_98 = plVar6;
      local_90 = param_1;
      local_80 = FUN_144a78c84();
      if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_80);
      }
      FUN_145c55782(param_2,&local_80,&local_78);
      lVar5 = local_78;
      lVar7 = (longlong)(int)uStack_70;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          lVar2 = *(longlong *)(lVar5 + lVar8);
          if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
            FUN_145c55658(local_58,&local_68);
            FUN_145c55556(lVar2 + 0x1990,local_88,local_58);
            FUN_1449db362(local_58);
          }
          lVar8 = lVar8 + 8;
        } while (lVar7 * 8 != lVar8);
      }
      lVar5 = FUN_1457b68d8(param_2);
      if (lVar5 != 0) {
        FUN_145c55992(local_58,&local_68);
        FUN_140f4dcf0(lVar5,local_88,local_58);
        FUN_1449db362(local_58);
      }
      param_1 = local_90;
      plVar6 = local_98;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar3 = local_60;
  *param_1 = (longlong)plVar6;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_60)(local_60);
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
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c55556 FUN_145c55556 body=216 status=ok
// SIG undefined FUN_145c55556(void)

undefined8 * FUN_145c55556(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c55658 FUN_145c55658 body=298 status=ok
// SIG undefined FUN_145c55658(void)

longlong * FUN_145c55658(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14b416860;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4167f0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_140e02bd4;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b416860;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4167f0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_140e02bd4;
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
  return param_1;
}



// FUNCTION 145c55782 FUN_145c55782 body=135 status=ok
// SIG undefined FUN_145c55782(void)

void FUN_145c55782(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_1487c1044(param_3,0);
  }
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_145c558ae(param_1,&local_28,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5580a FUN_145c5580a body=163 status=ok
// SIG undefined FUN_145c5580a(void)

undefined8 *
FUN_145c5580a(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b416750;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfc;
  *(undefined1 *)(param_1 + 3) = param_3;
  FUN_14485c47a(param_1 + 4);
  *(undefined8 *)((longlong)param_1 + 0x45) = *(undefined8 *)((longlong)param_4 + 0xd);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 7) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  lVar4 = *(longlong *)(param_4 + 6);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_4 + 6);
    }
  }
  param_1[10] = lVar4;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_4 + 8);
  return param_1;
}



// FUNCTION 145c558ae FUN_145c558ae body=206 status=ok
// SIG undefined FUN_145c558ae(void)

void FUN_145c558ae(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145c558fc;
    }
  }
  lVar2 = 0;
LAB_145c558fc:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_141504976(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c55992 FUN_145c55992 body=298 status=ok
// SIG undefined FUN_145c55992(void)

longlong * FUN_145c55992(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14b3e7b60;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4168d0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_1488e771a;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3e7b60;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b4168d0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_1488e771a;
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
  return param_1;
}



// FUNCTION 145c55abc FUN_145c55abc body=132 status=ok
// SIG undefined FUN_145c55abc(void)

void FUN_145c55abc(longlong param_1,int param_2)

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



// FUNCTION 145c55b40 FUN_145c55b40 body=206 status=ok
// SIG undefined FUN_145c55b40(void)

longlong * FUN_145c55b40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x148);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x140) + lVar4);
      if (lVar1 != 0) {
        FUN_145c55c10(lVar1,local_48);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14001d63e(param_2,iVar2);
        }
        FUN_14023423e((longlong)iVar2 * 0x10 + *param_2,local_48);
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        iVar2 = *(int *)(param_1 + 0x148);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c55c10 FUN_145c55c10 body=1414 status=ok
// SIG undefined FUN_145c55c10(void)

longlong * FUN_145c55c10(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  char *pcVar5;
  float fVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  longlong local_b8 [2];
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar3 = FUN_144a7c5f6(param_1 + 4);
  if (cVar3 == '\0') {
    plVar4 = *(longlong **)(param_1 + 4);
    *param_2 = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    *(uint *)(param_2 + 1) = param_1[6];
    goto LAB_145c56019;
  }
  plVar4 = (longlong *)FUN_140e82300();
  local_60 = (longlong *)*plVar4;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)plVar4[1];
  if (param_1[1] == 0) {
    FUN_14023423e(param_2,&local_60);
  }
  else {
    fVar6 = (float)*param_1 / (float)param_1[1];
    if (ABS(fVar6 + -1.3333334) < 0.0001) {
      pcVar5 = "AspectRatio-4:3";
LAB_145c55cd6:
      FUN_1400b22c2(&local_78,pcVar5);
      FUN_1412459d2(&local_50,&local_78);
      FUN_140008f88(&local_60,&local_50);
      if ((longlong *)CONCAT44(uStack_4c,local_50) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
      }
      if (CONCAT62(uStack_76,CONCAT11(uStack_77,local_78)) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (ABS(fVar6 + -1.7777778) < 0.0001) {
        pcVar5 = "AspectRatio-16:9";
        goto LAB_145c55cd6;
      }
      if (ABS(fVar6 + -1.6) < 0.0001) {
        pcVar5 = "AspectRatio-16:10";
        goto LAB_145c55cd6;
      }
      if (ABS(fVar6 + -0.75) < 0.0001) {
        pcVar5 = "AspectRatio-3:4";
        goto LAB_145c55cd6;
      }
      if (ABS(fVar6 + -0.5625) < 0.0001) {
        pcVar5 = "AspectRatio-9:16";
        goto LAB_145c55cd6;
      }
      if (ABS(fVar6 + -0.625) < 0.0001) {
        pcVar5 = "AspectRatio-10:16";
        goto LAB_145c55cd6;
      }
    }
    FUN_141366fce(&local_78);
    uStack_77 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_145c56198(local_98,*param_1,&local_78);
    local_50 = 4;
    FUN_14023423e(&local_40,local_98);
    FUN_140056680(local_b8,&DAT_149e25cc8);
    FUN_140233eec(&local_88,local_b8,&local_50);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      local_40 = (longlong *)0x0;
      local_38 = 0;
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    plVar4 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_145c56198(local_98,param_1[1],&local_78);
    local_50 = 4;
    FUN_14023423e(&local_40,local_98);
    FUN_140056680(local_b8,&DAT_149e25ccc);
    FUN_140233eec(&local_88,local_b8,&local_50);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
      local_40 = (longlong *)0x0;
      local_38 = 0;
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    plVar4 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    local_50 = 4;
    local_40 = local_60;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 8))();
    }
    local_38 = local_58;
    FUN_140056680(local_98,L"AspectRatio");
    FUN_140233eec(&local_88,local_98,&local_50);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    local_48 = (ulonglong)param_1[2];
    local_50 = 1;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    FUN_140056680(local_98,L"RefreshRate");
    FUN_140233eec(&local_88,local_98,&local_50);
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    FUN_1400b22c2(local_98,"AspectRatio");
    FUN_1412459d2(&local_50,local_98);
    FUN_14023409e(local_c8,&local_50,1);
    FUN_140233c04(param_2,local_c8,&local_88);
    if ((longlong *)CONCAT44(uStack_4c,local_50) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
    }
    if (local_98[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14010f8af(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
LAB_145c56019:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c56198 FUN_145c56198 body=22 status=ok
// SIG undefined FUN_145c56198(void)

undefined8 FUN_145c56198(undefined8 param_1)

{
  FUN_145c561ae();
  return param_1;
}



// FUNCTION 145c561ae FUN_145c561ae body=373 status=ok
// SIG undefined FUN_145c561ae(void)

longlong * FUN_145c561ae(longlong *param_1,ulonglong param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_145c56324();
  puVar6 = (undefined8 *)*param_4;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x80))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_48 = *(undefined8 *)(puVar5 + 4);
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  uStack_50 = *(ulonglong *)(puVar5 + 2);
  FUN_14010d0dd(0,param_2 & 0xffffffff,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_78[2] = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 1;
  local_48 = 0;
  local_40 = 0;
  local_88 = local_78 + 2;
  uStack_50 = param_2 & 0xffffffff;
  FUN_1402349c6(lVar4,local_78,&local_58,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c56324 FUN_145c56324 body=120 status=ok
// SIG undefined FUN_145c56324(void)

undefined * FUN_145c56324(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  return DAT_14c844be0;
}



// FUNCTION 145c5639c FUN_145c5639c body=310 status=ok
// SIG undefined FUN_145c5639c(void)

void FUN_145c5639c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141504d10();
  if (*(longlong *)(param_1 + 0x448) != 0) {
    lVar3 = FUN_1409b37ec();
    lVar1 = *(longlong *)(param_1 + 0x448);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x2500) = lVar1;
      *(bool *)(lVar1 + 0x3b10) = *(char *)(param_1 + 0x178) != '\x03';
      if (*(char *)(param_1 + 0x178) == '\x03') {
        local_30 = (code *)&LAB_14125604c;
        local_28 = 0;
        FUN_145c564d4(*(longlong *)(param_1 + 0x2500) + 0x2eb0,local_20,param_1);
      }
      else {
        local_30 = FUN_1411e8042;
        local_28 = 0;
        FUN_141202804(*(longlong *)(param_1 + 0x2500) + 0x2ec8,local_20,param_1);
      }
      goto LAB_145c5646e;
    }
  }
  *(undefined8 *)(param_1 + 0x2500) = 0;
LAB_145c5646e:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c564d4 FUN_145c564d4 body=254 status=ok
// SIG undefined FUN_145c564d4(void)

undefined8
FUN_145c564d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b995350;
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
  *local_48 = &PTR_FUN_14b9952e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c565d4(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c565d4 FUN_145c565d4 body=216 status=ok
// SIG undefined FUN_145c565d4(void)

undefined8 * FUN_145c565d4(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c566ba FUN_145c566ba body=24 status=ok
// SIG undefined FUN_145c566ba(void)

bool FUN_145c566ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c566d2 FUN_145c566d2 body=246 status=ok
// SIG undefined FUN_145c566d2(void)

undefined8 *
FUN_145c566d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_145c567ca(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c567ca FUN_145c567ca body=423 status=ok
// SIG undefined FUN_145c567ca(void)

void FUN_145c567ca(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145c568a0:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9cc0b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c568a0;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9cc0b0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c56959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c56972 FUN_145c56972 body=214 status=ok
// SIG undefined FUN_145c56972(void)

void FUN_145c56972(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
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
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  (**(code **)(*param_1 + 0xa48))(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c56a4a FUN_145c56a4a body=116 status=ok
// SIG undefined FUN_145c56a4a(void)

void FUN_145c56a4a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  FUN_145c56ac0(param_1 + 0x6c48,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c56ac0 FUN_145c56ac0 body=48 status=ok
// SIG undefined FUN_145c56ac0(void)

void FUN_145c56ac0(longlong param_1)

{
  if (*(char *)(param_1 + 0x318) != '\0') {
    return;
  }
  FUN_145c56af0(param_1 + 0x2e0);
  FUN_145d4b532(param_1);
  return;
}



// FUNCTION 145c56af0 FUN_145c56af0 body=84 status=ok
// SIG undefined FUN_145c56af0(void)

longlong * FUN_145c56af0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145c56b50 FUN_145c56b50 body=782 status=ok
// SIG undefined FUN_145c56b50(void)

undefined8 * FUN_145c56b50(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b36db00;
  *(undefined4 *)(param_1 + 0x16) = 0xd00dad18;
  param_1[0x17] = "dialogechopresentation";
  FUN_1400b22c2(local_58,"GbxDialog.EchoPresentations");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145c56e60();
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
        goto LAB_145c56c48;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c56c48:
  lVar4 = FUN_145c56e60();
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
        goto LAB_145c56cdd;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145c56cdd:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c56e60 FUN_145c56e60 body=57 status=ok
// SIG undefined FUN_145c56e60(void)

void FUN_145c56e60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56d88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56d88 = FUN_140002ddd(FUN_1464ba4a6,uVar1,L"GbxDialogEchoPresentationDef");
  }
  return;
}



// FUNCTION 145c56e9a FUN_145c56e9a body=9 status=ok
// SIG undefined FUN_145c56e9a(void)

void FUN_145c56e9a(longlong param_1)

{
  FUN_145c56ea4(param_1 + 0x10);
  return;
}



// FUNCTION 145c56ea4 FUN_145c56ea4 body=189 status=ok
// SIG undefined FUN_145c56ea4(void)

void FUN_145c56ea4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b504990;
  FUN_1449db362(param_1 + 0x14);
  FUN_1449db362(param_1 + 0x12);
  FUN_1449db362(param_1 + 0x10);
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
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_145c56f62(param_1);
  return;
}



// FUNCTION 145c56f62 FUN_145c56f62 body=131 status=ok
// SIG undefined FUN_145c56f62(void)

void FUN_145c56f62(IViewListener *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &PTR_LAB_14b504b10;
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  FUN_1449db362(param_1 + 0x18);
  FUN_1449db362(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000145c56fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::IViewListener::~IViewListener(param_1);
  return;
}



// FUNCTION 145c56fe6 FUN_145c56fe6 body=9 status=ok
// SIG undefined FUN_145c56fe6(void)

void FUN_145c56fe6(longlong param_1)

{
  FUN_145c56ff0(param_1 + 0x10);
  return;
}



// FUNCTION 145c56ff0 FUN_145c56ff0 body=75 status=ok
// SIG undefined FUN_145c56ff0(void)

void FUN_145c56ff0(ITextInputHandler *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_14b5064f0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c57015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::ITextInputHandler::~ITextInputHandler(param_1);
  return;
}



// FUNCTION 145c5703c FUN_145c5703c body=158 status=ok
// SIG undefined FUN_145c5703c(void)

bool FUN_145c5703c(longlong param_1,undefined8 param_2)

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



// FUNCTION 145c570dc FUN_145c570dc body=70 status=ok
// SIG undefined FUN_145c570dc(void)

void FUN_145c570dc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1f0) != 0)) {
    lVar1 = FUN_141060562();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_145c57122(param_1,*(undefined4 *)(*(longlong *)(lVar1 + 0x30) + 0xd8));
      return;
    }
  }
  return;
}



// FUNCTION 145c57122 FUN_145c57122 body=442 status=ok
// SIG undefined FUN_145c57122(void)

void FUN_145c57122(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  PSRWLOCK local_50;
  int local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402815f4(param_1,&local_60);
  lVar3 = *(longlong *)(local_60 + 0x480);
  local_50 = (PSRWLOCK)(lVar3 + 0xc0);
  local_48 = 1;
  AcquireSRWLockExclusive(local_50);
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
  local_38 = 1;
  local_40 = lVar3;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (*(int *)(local_40 + 0x20) == param_2) {
    if (*(int *)(local_40 + 0x24) == 0) {
      iVar5 = 1;
      goto LAB_145c5727f;
    }
  }
  else {
    iVar5 = *(int *)(local_40 + 0x24) + 1;
LAB_145c5727f:
    *(int *)(local_40 + 0x20) = param_2;
    *(int *)(local_40 + 0x24) = iVar5;
  }
  if ((bool)*(char *)(local_40 + 8) == (param_2 != 0)) {
    if (*(int *)(local_40 + 0xc) != 0) goto LAB_145c571c9;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(local_40 + 0xc) + 1;
  }
  *(bool *)(local_40 + 8) = param_2 != 0;
  *(int *)(local_40 + 0xc) = iVar5;
LAB_145c571c9:
  FUN_141504f4e(param_1,&local_50);
  lVar3 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (*(int *)(lVar3 + 0xd98) != 0)) &&
       (*(longlong *)(lVar3 + 0xda0) != 0)) {
      if (param_2 == 0) {
        FUN_140b45d22(lVar3 + 0xd98,&DAT_14cbd92e8,0x40800000);
      }
      else {
        FUN_1403ca8ec(lVar3 + 0xd98,&DAT_14cbd92e8);
      }
    }
  }
  if (local_48 != 0) {
    if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145c5726d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive(local_50);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 145c572f2 FUN_145c572f2 body=201 status=ok
// SIG undefined FUN_145c572f2(void)

bool FUN_145c572f2(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if (lVar4 != 0) {
    FUN_140113f3a(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c573bc FUN_145c573bc body=438 status=ok
// SIG undefined FUN_145c573bc(void)

void FUN_145c573bc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_144a126be();
  if (lVar1 == param_2) {
    plVar2 = (longlong *)FUN_144800528();
    lVar1 = plVar2[0x22];
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
    }
    if (*(char *)(lVar1 + 0xf0) == '\0') {
      plVar2 = (longlong *)FUN_144800528();
      lVar1 = plVar2[0x22];
      if (lVar1 == 0) {
        (**(code **)(*plVar2 + 1000))(plVar2);
        lVar1 = plVar2[0x22];
      }
      if (*(char *)(lVar1 + 0xf1) != '\x01') goto LAB_145c573de;
    }
    if ((*(longlong *)(param_2 + 0x260) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x260) + 0x38), lVar1 != 0)) {
      if (*(longlong *)(lVar1 + 0x1c8) == 0) {
        local_20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        local_20[1] = 0;
        *local_20 = &PTR_FUN_14aa2ad50;
        local_20[2] = 0;
        local_20[3] = 0;
        *(undefined4 *)(local_20 + 4) = 2;
        *(undefined8 *)((longlong)local_20 + 0x24) = 0;
        *(undefined8 *)((longlong)local_20 + 0x2c) = 0;
        *(undefined8 *)((longlong)local_20 + 0x34) = 0x200000000;
        *(undefined8 *)((longlong)local_20 + 0x3c) = 0;
        *(undefined8 *)((longlong)local_20 + 0x44) = 0;
        *(undefined4 *)((longlong)local_20 + 0x4c) = 0;
        local_20[10] = 2;
        local_20[0xb] = param_2;
        local_20[0xc] = 0;
        local_20[0xd] = 0;
        FUN_145c57574(lVar1,&local_20);
        if (local_20 != (undefined8 *)0x0) {
          (**(code **)*local_20)(local_20,1);
        }
      }
      plVar2 = (longlong *)FUN_144800528();
      lVar3 = plVar2[0x22];
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 1000))(plVar2);
        lVar3 = plVar2[0x22];
      }
      if ((*(char *)(lVar3 + 0xf1) == '\x01') && (*(longlong *)(lVar1 + 0x1c0) == 0)) {
        FUN_145757e4e(lVar1);
      }
    }
  }
LAB_145c573de:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c57574 FUN_145c57574 body=82 status=ok
// SIG undefined FUN_145c57574(void)

void FUN_145c57574(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x1c8);
  if (plVar1 != param_2) {
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = *param_2;
    *param_2 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    *(longlong *)(*plVar1 + 8) = *(longlong *)(param_1 + 0x1c0);
  }
  return;
}



// FUNCTION 145c575c6 FUN_145c575c6 body=134 status=ok
// SIG undefined FUN_145c575c6(void)

void FUN_145c575c6(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_145c5765e(param_1,&local_28);
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



// FUNCTION 145c5765e FUN_145c5765e body=287 status=ok
// SIG undefined FUN_145c5765e(void)

void FUN_145c5765e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar9), plVar4 != (longlong *)0x0))) {
        local_48 = *param_2;
        local_40 = param_2[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
        if (cVar6 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar5 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_145c5776f;
          goto LAB_145c57694;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c5776f:
    FUN_14474d06a(param_1,0);
  }
LAB_145c57694:
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c5777e FUN_145c5777e body=144 status=ok
// SIG undefined FUN_145c5777e(void)

bool FUN_145c5777e(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 145c57810 FUN_145c57810 body=380 status=ok
// SIG undefined FUN_145c57810(void)

void FUN_145c57810(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x748) = 0;
  FUN_145c5798e(param_1 + 0x750);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  if (*(int *)(param_1 + 0x7ac) != 0) {
    FUN_1446dda88(param_1 + 0x7a0,0);
  }
  uVar1 = FUN_1447210f0(param_1);
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1412d7224(lVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 200))(plVar3);
      FUN_140fa5880(param_1,uVar1);
      FUN_14150518c(param_1);
      if (*(longlong *)(param_1 + 0x7b0) != 0) {
        uVar1 = (**(code **)(*plVar3 + 0x138))(plVar3);
        if (*(longlong *)(param_1 + 0x7b0) != 0) {
          FUN_14480f766(uVar1);
        }
        *(undefined8 *)(param_1 + 0x7b0) = 0;
      }
      if (*(longlong *)(param_1 + 0x7b8) != 0) {
        uVar1 = (**(code **)(*plVar3 + 0xe8))(plVar3);
        if (*(longlong *)(param_1 + 0x7b8) != 0) {
          FUN_14480f766(uVar1);
        }
        *(undefined8 *)(param_1 + 0x7b8) = 0;
      }
      uVar1 = (**(code **)(*plVar3 + 0x138))(plVar3);
      FUN_145c579d2(uVar1,&local_28,param_1,FUN_145c57810);
      *(undefined8 *)(param_1 + 0x7b0) = local_28;
      uVar1 = (**(code **)(*plVar3 + 0xe8))(plVar3);
      FUN_145c57c42(uVar1,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x7b8) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5798e FUN_145c5798e body=67 status=ok
// SIG undefined FUN_145c5798e(void)

void FUN_145c5798e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145c57d38(param_1);
    FUN_145c57ac8(param_1,0);
    return;
  }
  FUN_145c57ac8(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1457da254(param_1);
  return;
}



// FUNCTION 145c579d2 FUN_145c579d2 body=244 status=ok
// SIG undefined FUN_145c579d2(void)

undefined8
FUN_145c579d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b971f70;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c57ac8 FUN_145c57ac8 body=376 status=ok
// SIG undefined FUN_145c57ac8(void)

void FUN_145c57ac8(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140b7ce44(param_1,param_2);
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
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c57c42 FUN_145c57c42 body=244 status=ok
// SIG undefined FUN_145c57c42(void)

undefined8 FUN_145c57c42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b405fd0;
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
  *local_38 = &PTR_FUN_14b9720c0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_140fa5880;
  FUN_141286bf6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c57d38 FUN_145c57d38 body=335 status=ok
// SIG undefined FUN_145c57d38(void)

void FUN_145c57d38(longlong *param_1)

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



// FUNCTION 145c57e88 FUN_145c57e88 body=139 status=ok
// SIG undefined FUN_145c57e88(void)

undefined8 * FUN_145c57e88(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14150576c();
  *param_1 = &PTR_FUN_149f28770;
  param_1[1] = &PTR_LAB_149f28828;
  param_1[0x12] = 0;
  FUN_140056680(local_28,L"http-eventloop");
  FUN_141505626();
  FUN_145c57f14(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c57f14 FUN_145c57f14 body=143 status=ok
// SIG undefined FUN_145c57f14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c57f14(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c990e78);
  FUN_1412fabe8(&DAT_14c990ea0,param_1);
  DAT_14c990ee0 = DAT_14c990ee0 + 1;
  FUN_145c57fa4(&DAT_14c990e78,&local_28);
  if (DAT_14c990ee8 != 0) {
    FUN_1400020a8();
  }
  DAT_14c990ee8 = local_28;
  _DAT_14c990ef0 = uStack_20;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c990e78);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c57fa4 FUN_145c57fa4 body=258 status=ok
// SIG undefined FUN_145c57fa4(void)

undefined8 FUN_145c57fa4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  lVar1 = DAT_14c990c08;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(char *)(lVar1 + uVar3) == '\x01') {
    FUN_145c58316(param_1 + 8,param_2,0,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_145c58316(param_1 + 8,param_2,&local_78,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_78);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c580a8 FUN_145c580a8 body=159 status=ok
// SIG undefined FUN_145c580a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c580a8(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  InitializeSRWLock((PSRWLOCK)&DAT_14c990e78);
  FUN_145c58148();
  DAT_14c990ee8 = 0;
  _DAT_14c990ef0 = 0;
  DAT_14c990ef8 = 0;
  FUN_145c57fa4(&DAT_14c990e78,&local_20);
  if (DAT_14c990ee8 != 0) {
    FUN_1400020a8();
  }
  DAT_14c990ee8 = CONCAT44(uStack_1c,local_20);
  _DAT_14c990ef0 = CONCAT44(uStack_14,uStack_18);
  uVar1 = (**(code **)(*DAT_14c990c00 + 0xd0))();
  FUN_145c58232(uVar1,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c58148 FUN_145c58148 body=116 status=ok
// SIG undefined FUN_145c58148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c58148(void)

{
  undefined8 uVar1;
  
  FUN_140056680(&DAT_14c990e80,&DAT_14c764000);
  uVar1 = thunk_FUN_145c581c1();
  FUN_140056680(&DAT_14c990e90,uVar1);
  DAT_14c990ea0 = 0;
  _DAT_14c990ea8 = 0;
  FUN_1400b22c2(&DAT_14c990eb0,"Windows");
  FUN_145c581ca(&DAT_14c990ec0);
  DAT_14c990ed0 = 0;
  _DAT_14c990ed8 = 0;
  DAT_14c990ee0 = 1;
  return;
}



// FUNCTION 145c581bc thunk_FUN_145c581c1 body=5 status=ok
// SIG undefined thunk_FUN_145c581c1(void)

undefined * thunk_FUN_145c581c1(void)

{
  return &DAT_149dfb73e;
}



// FUNCTION 145c581c1 FUN_145c581c1 body=8 status=ok
// SIG undefined FUN_145c581c1(void)

undefined * FUN_145c581c1(void)

{
  return &DAT_149dfb73e;
}



// FUNCTION 145c581ca FUN_145c581ca body=103 status=ok
// SIG undefined FUN_145c581ca(void)

undefined8 FUN_145c581ca(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8c2b40) {
    FUN_144b3d300(&DAT_14c8c2b40);
    if (DAT_14c8c2b40 == -1) {
      FUN_141505686();
      _Init_thread_footer(&DAT_14c8c2b40);
    }
  }
  FUN_140056680(param_1,&DAT_14c8c2a40);
  return param_1;
}



// FUNCTION 145c58232 FUN_145c58232 body=226 status=ok
// SIG undefined FUN_145c58232(void)

undefined8 FUN_145c58232(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e170a0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149f2a0b0;
  local_30[3] = &DAT_14c990e78;
  local_30[4] = FUN_146b210c2;
  FUN_14110d2ba(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c58316 FUN_145c58316 body=464 status=ok
// SIG undefined FUN_145c58316(void)

undefined8 FUN_145c58316(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined2 *local_d0;
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_145c586c8(&local_58,param_1 + 0x50,param_4);
  puVar5 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  FUN_145c584e8(&local_68,param_1 + 0x40);
  puVar6 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar6 = local_68;
  }
  local_b0 = param_2;
  FUN_145c584e8(&local_78,param_1 + 0x30);
  puVar2 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar2 = local_78;
  }
  FUN_145c586c8(&local_88,param_1 + 0x20,param_3);
  puVar3 = &DAT_149dfb77a;
  if (local_80 != 0) {
    puVar3 = local_88;
  }
  FUN_145c584e8(&local_98,param_1 + 0x10);
  puVar7 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar7 = local_98;
  }
  FUN_145c584e8(&local_a8,param_1);
  uVar1 = local_b0;
  puVar4 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar4 = local_a8;
  }
  local_d8 = puVar3;
  local_d0 = puVar2;
  local_c8 = puVar6;
  local_c0 = puVar5;
  FUN_140002266(local_b0,L"%s/%s%s %s/%s%s",puVar4,puVar7);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c584e8 FUN_145c584e8 body=479 status=ok
// SIG undefined FUN_145c584e8(void)

undefined8 * FUN_145c584e8(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_38,&DAT_149dfc0cb);
  pwVar3 = local_38;
  if (local_30 == 0) {
    pwVar3 = L"";
  }
  if (pwVar3 != (wchar_t *)0x0) {
    sVar2 = wcslen(pwVar3);
    local_50 = 0xffffffff;
    local_58 = 0;
    iVar1 = FUN_1447ee042(param_2,pwVar3,sVar2 & 0xffffffff,1);
    if (iVar1 != -1) {
      bVar4 = true;
      goto LAB_145c585da;
    }
  }
  FUN_1400b22c2(&local_48,L"/Disabled");
  pwVar3 = L"";
  if (local_40 != 0) {
    pwVar3 = local_48;
  }
  if (pwVar3 == (wchar_t *)0x0) {
    bVar4 = false;
  }
  else {
    sVar2 = wcslen(pwVar3);
    local_50 = 0xffffffff;
    local_58 = 0;
    iVar1 = FUN_1447ee042(param_2,pwVar3,sVar2 & 0xffffffff,1);
    bVar4 = iVar1 != -1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_145c585da:
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (bVar4) {
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    FUN_1448097c4(param_1,&DAT_149e001d8,&DAT_149dfb77a,1);
    FUN_1448097c4(param_1,&DAT_149e065c6,&DAT_149e06124,1);
  }
  else if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c586c8 FUN_145c586c8 body=596 status=ok
// SIG undefined FUN_145c586c8(void)

/* WARNING: Removing unreachable block (ram,0x000145c58913) */

undefined8 * FUN_145c586c8(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar7 = (undefined8 *)*param_2;
    lVar9 = (longlong)*(int *)(param_2 + 1) << 4;
    do {
      if (param_3 == 0) {
LAB_145c58768:
        local_70 = (undefined2 *)0x0;
        uVar2 = *(uint *)(puVar7 + 1);
        _Src = (void *)*puVar7;
        local_68 = CONCAT44(local_68._4_4_,uVar2);
        if ((longlong)(int)uVar2 == 0) {
          local_68 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_70,uVar2,0);
          memcpy(local_70,_Src,(longlong)(int)uVar2 * 2);
        }
        FUN_1448097c4(&local_70,&DAT_149e06140,&DAT_149dfb77a,1);
        FUN_1448097c4(&local_70,&DAT_149e06144,&DAT_149dfb77a,1);
        FUN_1448097c4(&local_70,&DAT_149e06120,&DAT_149dfb77a,1);
        uVar5 = uStack_80;
        lVar8 = (longlong)(int)uStack_80;
        uVar2 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
        if (uStack_80._4_4_ < uVar2) {
          FUN_1447a1bd6(&local_88,uVar5 & 0xffffffff);
        }
        lVar8 = lVar8 * 0x10;
        *(undefined8 *)(local_88 + lVar8) = 0;
        *(undefined2 **)(local_88 + lVar8) = local_70;
        local_70 = (undefined2 *)0x0;
        *(int *)(local_88 + 8 + lVar8) = (int)local_68;
        *(undefined4 *)(local_88 + 0xc + lVar8) = local_68._4_4_;
        local_68 = 0;
      }
      else {
        iVar4 = *(int *)(puVar7 + 1);
        puVar6 = &DAT_149dfb77a;
        if (iVar4 != 0) {
          puVar6 = (undefined2 *)*puVar7;
        }
        iVar1 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar1 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar1,puVar6);
        iVar4 = FUN_1456cf568(param_3,uVar3,puVar7);
        if (iVar4 != -1) goto LAB_145c58768;
      }
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
    if ((int)uStack_80 != 0) {
      FUN_144a8b2a0(&local_70,&local_88,&DAT_149f28940);
      puVar6 = local_70;
      if ((int)local_68 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_140002266(param_1,L" (%s)",puVar6);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = uStack_80 & 0xffffffff;
      goto LAB_145c58705;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
LAB_145c58705:
  FUN_1447a1747(local_88,uVar5);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5891e FUN_145c5891e body=40 status=ok
// SIG undefined FUN_145c5891e(void)

undefined8 FUN_145c5891e(undefined8 param_1,int param_2)

{
  FUN_145c58946();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c58946 FUN_145c58946 body=113 status=ok
// SIG undefined FUN_145c58946(void)

void FUN_145c58946(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aecdc00;
  param_1[5] = &PTR_FUN_14aecdea0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_145c589b7(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c589b7 FUN_145c589b7 body=54 status=ok
// SIG undefined FUN_145c589b7(void)

void FUN_145c589b7(longlong param_1,int param_2)

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



// FUNCTION 145c589ee FUN_145c589ee body=145 status=ok
// SIG undefined FUN_145c589ee(void)

void FUN_145c589ee(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_28 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_3 + 4) = 0;
    local_20 = param_3[6];
    local_1c = param_3[7];
    *(undefined8 *)(param_3 + 6) = 0;
    (**(code **)(*param_1 + 0x60))();
  }
  FUN_141505886(*(undefined8 *)(param_3 + 4),param_3[6]);
  if (*(longlong *)(param_3 + 4) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c58a8c FUN_145c58a8c body=132 status=ok
// SIG undefined FUN_145c58a8c(void)

undefined8 * FUN_145c58a8c(undefined8 *param_1)

{
  FUN_145c58b10();
  *param_1 = &PTR_FUN_14b5962a0;
  param_1[5] = &PTR_FUN_14b5965f0;
  param_1[0x52] = &PTR_LAB_14b596630;
  param_1[0x174] = 0;
  *(undefined4 *)(param_1 + 0x175) = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0;
  param_1[0x178] = 0;
  *(undefined4 *)(param_1 + 0x179) = 0;
  return param_1;
}



// FUNCTION 145c58b10 FUN_145c58b10 body=64 status=ok
// SIG undefined FUN_145c58b10(void)

undefined8 * FUN_145c58b10(undefined8 *param_1)

{
  FUN_145c04c54();
  *param_1 = &PTR_FUN_14ae58870;
  param_1[5] = &PTR_FUN_14ae58bc0;
  param_1[0x52] = &PTR_LAB_14ae58c00;
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  return param_1;
}



// FUNCTION 145c58b5c FUN_145c58b5c body=132 status=ok
// SIG undefined FUN_145c58b5c(void)

undefined8 * FUN_145c58b5c(undefined8 *param_1)

{
  FUN_145c58be0();
  *param_1 = &PTR_FUN_14b596700;
  param_1[5] = &PTR_FUN_14b596a50;
  param_1[0x52] = &PTR_LAB_14b596a90;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbe4) = 0;
  param_1[0x17e] = 0;
  *(undefined4 *)(param_1 + 0x17f) = 0;
  return param_1;
}



// FUNCTION 145c58be0 FUN_145c58be0 body=64 status=ok
// SIG undefined FUN_145c58be0(void)

undefined8 * FUN_145c58be0(undefined8 *param_1)

{
  FUN_145861ec6();
  *param_1 = &PTR_FUN_14ae58d80;
  param_1[5] = &PTR_FUN_14ae590d0;
  param_1[0x52] = &PTR_LAB_14ae59110;
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  return param_1;
}



// FUNCTION 145c58c2c FUN_145c58c2c body=195 status=ok
// SIG undefined FUN_145c58c2c(void)

undefined8 * FUN_145c58c2c(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40 [3];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b74a550;
  local_48 = DAT_14cbc8fe0;
  local_50 = DAT_14cbc8fd8;
  FUN_1448075d0(local_40);
  FUN_1404e49fa(param_1 + 5,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbc8ff0);
  FUN_1446ddc76(local_40,"echoprefs",1);
  param_1[0x10] = local_40[0];
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c58cf0 FUN_145c58cf0 body=26 status=ok
// SIG undefined FUN_145c58cf0(void)

void FUN_145c58cf0(undefined8 param_1)

{
  FUN_145c58d0a();
  FUN_1400f7ed2(param_1);
  return;
}



// FUNCTION 145c58d0a FUN_145c58d0a body=181 status=ok
// SIG undefined FUN_145c58d0a(void)

void FUN_145c58d0a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[0x10b] = 0;
  FUN_145ad6ee2(param_1[0x109],(int)param_1[0x10a]);
  *(undefined4 *)(param_1 + 0x10a) = 0;
  if (*(int *)((longlong)param_1 + 0x854) != 0) {
    FUN_14908c83e(param_1 + 0x109);
  }
  if (param_1[0x10c] != 0) {
    (**(code **)(*param_1 + 0x450))(param_1);
  }
  param_1[0x10c] = 0;
  param_1[0x107] = 0;
  plVar3 = (longlong *)param_1[0x108];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x108] = 0;
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
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 145c58dc6 FUN_145c58dc6 body=227 status=ok
// SIG undefined FUN_145c58dc6(void)

longlong FUN_145c58dc6(void)

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
  if (DAT_14cb5cea8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145abc68e;
    local_38 = &LAB_148692791;
    local_40 = FUN_1464d95d6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryFODBox",&DAT_14cb5cea8,&DAT_148692790);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cea8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c58eb0 FUN_145c58eb0 body=227 status=ok
// SIG undefined FUN_145c58eb0(void)

longlong FUN_145c58eb0(void)

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
  if (DAT_14cbb39f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458dac44;
    local_38 = &LAB_148c5d3d5;
    local_40 = &LAB_145ec32d2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDLCRole",&DAT_14cbb39f0,&DAT_148c5d3d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb39f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c58f9a FUN_145c58f9a body=227 status=ok
// SIG undefined FUN_145c58f9a(void)

longlong FUN_145c58f9a(void)

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
  if (DAT_14cbb5270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418b752a;
    local_38 = &LAB_148c636b3;
    local_40 = FUN_1465fe2cc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIScript_PhotoMode",&DAT_14cbb5270,&DAT_148c636b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5908a FUN_145c5908a body=481 status=ok
// SIG undefined FUN_145c5908a(void)

undefined8 * FUN_145c5908a(undefined8 *param_1)

{
  FUN_140c4a87c();
  *param_1 = &PTR_FUN_14b958660;
  param_1[0x72] = &PTR_FUN_14b958d50;
  param_1[0x73] = &PTR_FUN_14b958dc0;
  param_1[0x74] = &PTR_FUN_14b958e30;
  param_1[0x75] = &PTR_FUN_14b958e60;
  param_1[0x76] = &PTR_FUN_14b958e90;
  param_1[0x77] = &PTR_FUN_14b958ec0;
  param_1[0x78] = &PTR_FUN_14b958f00;
  param_1[0x79] = &PTR_FUN_14b958f20;
  param_1[0x7a] = &PTR_FUN_14b958f50;
  param_1[0x7b] = &PTR_FUN_14b959020;
  param_1[0x7c] = &PTR_FUN_14b959070;
  param_1[0x7d] = &PTR_FUN_14b959130;
  param_1[0x7e] = &PTR_FUN_14b959150;
  param_1[0x7f] = &PTR_FUN_14b9591d0;
  param_1[0x80] = &PTR_FUN_14b9591f0;
  param_1[0x81] = &PTR_FUN_14b959200;
  param_1[0x82] = &PTR_FUN_14b959240;
  param_1[0x83] = &PTR_FUN_14b9592b0;
  param_1[0x84] = &PTR_FUN_14b9592e0;
  param_1[0x85] = &PTR_FUN_14b959380;
  param_1[0x86] = &PTR_FUN_14b9593a0;
  param_1[0x87] = &PTR_FUN_14b9593c0;
  param_1[0x2a7] = &PTR_FUN_14b9593e0;
  param_1[0x2a8] = &PTR_FUN_14b959420;
  param_1[0x2a9] = &PTR_FUN_14b959440;
  param_1[0x2aa] = &PTR_FUN_14b9594e0;
  param_1[0x2ab] = &PTR_FUN_14b959510;
  param_1[0x30e] = 0;
  *(undefined4 *)(param_1 + 0x30f) = 0x1ea5d050;
  param_1[0x310] = 0;
  param_1[0x311] = 0;
  *(undefined4 *)(param_1 + 0x312) = 0x1ea5d050;
  *(undefined8 *)((longlong)param_1 + 0x18b5) = 0;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  param_1[0x31a] = 0;
  param_1[0x318] = 0;
  param_1[0x319] = 0;
  return param_1;
}



// FUNCTION 145c5926b FUN_145c5926b body=87 status=ok
// SIG undefined FUN_145c5926b(void)

void FUN_145c5926b(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c592c2(puVar1);
  *puVar1 = &PTR_FUN_14aeccc50;
  uVar2 = DAT_14c8464e8;
  puVar1[0x11] = DAT_14c8464e0;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = DAT_14c8464f0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0x3ff0000000000000;
  return;
}



// FUNCTION 145c592c2 FUN_145c592c2 body=50 status=ok
// SIG undefined FUN_145c592c2(void)

undefined8 * FUN_145c592c2(undefined8 *param_1)

{
  FUN_14130a082();
  *param_1 = &PTR_FUN_14aeab700;
  param_1[8] = 0;
  param_1[10] = 0;
  FUN_145c592f4(param_1);
  return param_1;
}



// FUNCTION 145c592f4 FUN_145c592f4 body=277 status=ok
// SIG undefined FUN_145c592f4(void)

void FUN_145c592f4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *(longlong *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(longlong **)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *(longlong *)(param_1 + 0x60);
  uStack_20 = *(undefined8 *)(param_1 + 0x68);
  local_18 = *(undefined8 *)(param_1 + 0x70);
  uStack_10 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = local_18;
  uVar4 = uStack_10;
  local_38 = local_78;
  uVar2 = uStack_30;
  local_48 = local_88;
  uVar1 = uStack_40;
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_4c,uStack_50);
  *(undefined ***)(param_1 + 0x60) = &PTR_LAB_14aeb56e0;
  *(undefined1 **)(param_1 + 0x68) = &LAB_143b4de1a;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_6c,uStack_70);
  *(code **)(param_1 + 0x40) = FUN_14841bf2a;
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_18._4_4_ = (undefined4)((ulonglong)local_18 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = (undefined4)local_18;
  uStack_54 = local_18._4_4_;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  uStack_60 = uStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  local_18 = uVar3;
  uStack_10 = uVar4;
  if (local_88 != 0) {
    plVar5 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar5 = &local_68;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5940a FUN_145c5940a body=167 status=ok
// SIG undefined FUN_145c5940a(void)

void FUN_145c5940a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1459b6cd8(param_2 + 0xb0,&local_28);
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_141030f66();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_145c594b2(*(longlong *)(lVar1 + 0x30),param_3,DAT_14cb978e0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c594b2 FUN_145c594b2 body=87 status=ok
// SIG undefined FUN_145c594b2(void)

void FUN_145c594b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_145ebf6a8();
  if (lVar1 != 0) {
    FUN_144a8b5fe(lVar1 + 0x10,param_3);
    if (*(int *)(lVar1 + 0x18) == *(int *)(lVar1 + 0x44)) {
      FUN_145c5950a(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145c5950a FUN_145c5950a body=153 status=ok
// SIG undefined FUN_145c5950a(void)

void FUN_145c5950a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
    FUN_145c595b4(param_1 + 0x298);
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    local_20 = puVar2;
    FUN_145c595b4(param_1 + 0x298);
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



// FUNCTION 145c595b4 FUN_145c595b4 body=269 status=ok
// SIG undefined FUN_145c595b4(void)

void FUN_145c595b4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar3 = *param_1;
        lVar9 = (longlong)iVar6 * 0x78;
        puVar4 = *(undefined8 **)(lVar3 + lVar9);
        plVar7 = *(longlong **)(lVar3 + 8 + lVar9);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        cVar5 = '\x01';
        if (puVar4 != (undefined8 *)*param_2) {
          cVar5 = (**(code **)*puVar4)();
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
        if (cVar5 != '\0') {
          FUN_145c596c2(param_1,*puVar10);
          break;
        }
        iVar6 = *(int *)(lVar3 + lVar9 + 0x70);
        puVar10 = (undefined4 *)(lVar3 + lVar9 + 0x70);
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145c596bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c596c2 FUN_145c596c2 body=113 status=ok
// SIG undefined FUN_145c596c2(void)

void FUN_145c596c2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x78;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x74 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x78 + 0x70);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x70);
  FUN_145c59734(lVar2 + *param_1);
  FUN_145c59778(param_1,param_2);
  return;
}



// FUNCTION 145c59734 FUN_145c59734 body=67 status=ok
// SIG undefined FUN_145c59734(void)

void FUN_145c59734(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145ebf94a(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145c59773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c59778 FUN_145c59778 body=114 status=ok
// SIG undefined FUN_145c59778(void)

void FUN_145c59778(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 145c597ea FUN_145c597ea body=40 status=ok
// SIG undefined FUN_145c597ea(void)

undefined8 FUN_145c597ea(undefined8 param_1,int param_2)

{
  FUN_145c59812();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c59812 FUN_145c59812 body=598 status=ok
// SIG undefined FUN_145c59812(void)

void FUN_145c59812(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae650b0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c59a90(param_1 + 0x24);
  FUN_144a65a1e(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x14];
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
  FUN_145c59ac5(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145c59a68(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[8];
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
  if (*(char *)((longlong)param_1 + 0x37) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c59a68 FUN_145c59a68 body=40 status=ok
// SIG undefined FUN_145c59a68(void)

void FUN_145c59a68(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1482439e4(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145c59a90 FUN_145c59a90 body=53 status=ok
// SIG undefined FUN_145c59a90(void)

void FUN_145c59a90(longlong *param_1)

{
  FUN_145c59b12();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c59ac5 FUN_145c59ac5 body=77 status=ok
// SIG undefined FUN_145c59ac5(void)

void FUN_145c59ac5(longlong param_1,int param_2)

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



// FUNCTION 145c59b12 FUN_145c59b12 body=370 status=ok
// SIG undefined FUN_145c59b12(void)

void FUN_145c59b12(longlong *param_1)

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
      FUN_145c59ac5(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 145c59c86 FUN_145c59c86 body=148 status=ok
// SIG undefined FUN_145c59c86(void)

bool FUN_145c59c86(longlong param_1)

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



// FUNCTION 145c59d1c FUN_145c59d1c body=613 status=ok
// SIG undefined FUN_145c59d1c(void)

void FUN_145c59d1c(ulonglong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60 [2];
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(longlong *)(param_1 + 0x3b0) == 0) || (*(char *)(param_1 + 0x4b1) != '\0'))
  goto LAB_145c59de0;
  *(undefined1 *)(param_1 + 0x4b1) = 1;
  local_70 = 0;
  local_68 = 0;
  lVar3 = FUN_140b51ce6();
  if (lVar3 == 0) {
    lVar3 = FUN_1402d1dc0(*(longlong *)(param_1 + 0x3b0) + 0x128);
  }
  else {
    local_60[1] = 0;
    local_50 = 0;
    local_48 = 0;
    local_60[0] = param_1;
    lVar3 = FUN_1415d7f30(lVar3,local_60,&local_70,0);
  }
  if (lVar3 != 0) {
    local_d8 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 1;
    local_d0 = 2;
    plVar5 = (longlong *)FUN_140a44468(lVar3,*(undefined8 *)(param_1 + 0x1c8),0);
    if (plVar5 != (longlong *)0x0) {
      lVar3 = FUN_144a7e9aa();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar5);
        }
        *(longlong **)(param_1 + 0x3b8) = plVar5;
        if (0 < local_68) {
          local_60[0] = local_60[0] & 0xffffffffffffff00;
          local_38 = 0;
          FUN_1456bb102(local_60,param_1);
          FUN_140e99737(*(undefined8 *)(param_1 + 0x3b8),&local_70,local_60);
          FUN_144a5ac3a(local_60);
          plVar5 = *(longlong **)(param_1 + 0x3b8);
        }
        uVar1 = *(undefined4 *)(param_1 + 0x3e4);
        FUN_1446ddc76(&local_b0,"Scale",1);
        (**(code **)(*plVar5 + 0xa08))(plVar5,local_b0,uVar1);
        (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x2a8))(*(longlong **)(param_1 + 0x3b8),0);
        goto LAB_145c59da9;
      }
    }
    *(undefined8 *)(param_1 + 0x3b8) = 0;
  }
LAB_145c59da9:
  FUN_145c59f82(param_1);
  pcVar2 = *(code **)(param_1 + 0x500);
  if (pcVar2 != (code *)0x0) {
    plVar5 = (longlong *)(param_1 + 0x520);
    if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x510);
    }
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    (*pcVar2)(uVar4);
  }
LAB_145c59de0:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c59f82 FUN_145c59f82 body=2109 status=ok
// SIG undefined FUN_145c59f82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c59f82(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  void *_Src;
  undefined1 auVar5 [32];
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  bool bVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong local_1a8;
  longlong *local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined8 local_bc;
  ulonglong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar15 = param_1[0x76];
  if (lVar15 == 0) goto LAB_145c5a2b0;
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_80 = 0;
  FUN_1456bb102(&local_a8,param_1[0x2d]);
  FUN_1448729ea(lVar15 + 0xb8,local_78,&local_a8);
  FUN_144a7b41a(local_78);
  (**(code **)(*param_1 + 0x388))(param_1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar16 = local_78;
    if (0x18 < local_60) {
      ppppuVar16 = (undefined8 ****)local_78[0];
    }
    (*pcVar4)(ppppuVar16);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(&local_a8);
  uVar9 = FUN_1447210f0(param_1);
  local_140 = *(undefined8 *)(param_1[0x76] + 0x5d8);
  local_138 = *(undefined4 *)(param_1[0x76] + 0x5e0);
  local_130 = 0;
  FUN_145c5a7c0(&local_a8,&local_140,param_1 + 0x73,uVar9);
  plVar14 = local_a0;
  param_1[0xad] = local_a8;
  local_a8 = 0;
  plVar12 = (longlong *)param_1[0xae];
  if (local_a0 == plVar12) {
LAB_145c5a351:
    plVar12 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_a0 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    local_a0 = (longlong *)0x0;
    param_1[0xae] = (longlong)plVar14;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar12 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      goto LAB_145c5a351;
    }
  }
  if (param_1[0xad] != 0) {
    FUN_1403c747e(param_1[0xad],local_78,0);
    if ((undefined8 ****)local_78[0] != (undefined8 ****)0x0) {
      local_c4 = *(undefined4 *)((longlong)param_1 + 0x3e4);
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0x3ff0000000000000;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0x3ff0000000000000;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      local_c0 = 0;
      local_bc = 0;
      FUN_14150591e();
      lVar15 = param_1[0xad];
      lVar11 = *(longlong *)(lVar15 + 0x308);
      if (lVar11 == 0) {
        uVar9 = FUN_140067708();
        lVar11 = FUN_14477b664(uVar9);
        *(longlong *)(lVar15 + 0x308) = lVar11;
      }
      lVar10 = *(longlong *)(lVar15 + 0x310);
      if (lVar10 == 0) {
        if ((*(longlong *)(lVar15 + 0x300) == 0) || (lVar11 == 0)) {
          lVar10 = 0;
        }
        else {
          plVar12 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar8 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar15 + 0x300));
          }
          *(longlong *)(lVar15 + 0x310) = lVar10;
        }
      }
      FUN_141505908(local_148,local_78);
      local_158 = param_1[0xad];
      local_150 = param_1[0xae];
      if (local_150 != 0) {
        LOCK();
        *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
        UNLOCK();
      }
      FUN_140c72376(&local_a8,&local_158,local_148,lVar10);
      if ((ulonglong *)(param_1 + 0xaf) != &local_a8) {
        param_1[0xaf] = local_a8;
        local_a8 = 0;
        plVar12 = (longlong *)param_1[0xb0];
        param_1[0xb0] = (longlong)local_a0;
        local_a0 = (longlong *)0x0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
      }
      param_1[0xb1] = local_98;
      param_1[0xb2] = lStack_90;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
    }
    FUN_144a61ac8(local_78);
  }
  lVar15 = param_1[0x76];
  lVar11 = *(longlong *)(lVar15 + 0x5f8);
  if (lVar11 == 0) {
    uVar9 = FUN_140d47262();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(lVar15 + 0x5f8) = lVar11;
  }
  if (*(longlong *)(lVar15 + 0x600) == 0) {
    if ((*(longlong *)(lVar15 + 0x5f0) == 0) || (lVar11 == 0)) goto LAB_145c5a2b0;
    plVar12 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar8 == '\0')) {
      *(undefined8 *)(lVar15 + 0x600) = 0;
      goto LAB_145c5a2b0;
    }
    uVar9 = (**(code **)(*plVar12 + 0x110))(plVar12);
    lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar15 + 0x5f0));
    *(longlong *)(lVar15 + 0x600) = lVar11;
    if (lVar11 == 0) goto LAB_145c5a2b0;
  }
  if (param_1[0xad] == 0) goto LAB_145c5a2b0;
  plVar12 = (longlong *)FUN_148cdc3dd();
  if (plVar12 == (longlong *)0x0) {
    param_1[0xab] = 0x10;
    plVar14 = (longlong *)param_1[0xac];
    if (plVar14 != (longlong *)0x0) {
      param_1[0xac] = 0;
LAB_145c5a4bf:
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      bVar17 = param_1[0xab] == 0;
      if (plVar12 != (longlong *)0x0) goto LAB_145c5a535;
      goto LAB_145c5a552;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    param_1[0xab] = (longlong)(plVar12 + 2);
    plVar14 = (longlong *)param_1[0xac];
    if (plVar12 == plVar14) {
      LOCK();
      plVar14 = plVar12 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      bVar17 = false;
    }
    else {
      param_1[0xac] = (longlong)plVar12;
      if (plVar14 != (longlong *)0x0) goto LAB_145c5a4bf;
      bVar17 = plVar12 + 2 == (longlong *)0x0;
    }
LAB_145c5a535:
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
LAB_145c5a552:
    if (bVar17) goto LAB_145c5a2b0;
  }
  lVar15 = param_1[0x76];
  lVar11 = param_1[0xab];
  local_170 = *(undefined8 *)(lVar15 + 0x610);
  uVar9 = FUN_14477b664(*(undefined8 *)(lVar15 + 0x618));
  local_168 = FUN_14477b664(uVar9);
  local_160 = *(undefined8 *)(lVar15 + 0x620);
  lVar15 = param_1[0x76];
  uVar3 = *(undefined4 *)(lVar15 + 0x608);
  local_188 = *(undefined8 *)(lVar15 + 0x5f0);
  uVar9 = FUN_14477b664(*(undefined8 *)(lVar15 + 0x5f8));
  local_180 = FUN_14477b664(uVar9);
  local_178 = *(undefined8 *)(lVar15 + 0x600);
  local_198 = (void *)0x0;
  local_190 = (int)param_1[0x81];
  lVar15 = (longlong)local_190;
  _Src = (void *)param_1[0x80];
  if (lVar15 == 0) {
    local_18c = 0;
  }
  else {
    FUN_1457242e8(&local_198,local_190,0);
    memcpy(local_198,_Src,lVar15 << 3);
  }
  local_1b8 = &local_170;
  FUN_148ced8ba(lVar11,&local_198,&local_188,uVar3);
  lVar15 = param_1[0x78];
  if (lVar15 == 0) {
    fVar18 = 0.0;
  }
  else {
    auVar20 = *(undefined1 (*) [16])(lVar15 + 0x280) & _DAT_149931180;
    auVar19 = _DAT_149931180 & *(undefined1 (*) [16])(lVar15 + 0x290);
    auVar5._16_16_ = auVar19;
    auVar5._0_16_ = auVar20;
    auVar19._8_8_ = auVar20._0_8_;
    auVar20 = minpd(auVar20,auVar5._8_16_);
    auVar19 = minpd(auVar20,auVar19);
    fVar18 = (float)auVar19._0_8_ * *(float *)(lVar15 + 0x640);
  }
  lVar15 = param_1[0xab];
  lVar11 = param_1[0x39];
  if (lVar11 == 0) {
    puVar13 = &DAT_14c8464e0;
    uVar9 = DAT_14c8464f0;
  }
  else {
    puVar13 = (undefined8 *)(lVar11 + 0x260);
    uVar9 = *(undefined8 *)(lVar11 + 0x270);
  }
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  *(float *)(lVar15 + 0x48) = fVar18;
  *(undefined8 *)(lVar15 + 0x50) = uVar6;
  *(undefined8 *)(lVar15 + 0x58) = uVar7;
  *(undefined8 *)(lVar15 + 0x60) = uVar9;
  if (DAT_14cb259f8 != 0) {
    uVar9 = *(undefined8 *)(DAT_14cb259f8 + 0x70);
    plVar12 = *(longlong **)(DAT_14cb259f8 + 0x78);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_1a8 = param_1[0xab];
    plVar14 = (longlong *)param_1[0xac];
    if (plVar14 == (longlong *)0x0) {
      local_1a0 = (longlong *)0x0;
      FUN_147f7c8ea(uVar9);
    }
    else {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      local_1a0 = plVar14;
      FUN_147f7c8ea(uVar9);
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar12 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
LAB_145c5a2b0:
  if ((local_50 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c5a7c0 FUN_145c5a7c0 body=886 status=ok
// SIG undefined FUN_145c5a7c0(void)

longlong * FUN_145c5a7c0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_145c5a92f;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_145c5a95c:
    plVar6 = (longlong *)FUN_148cdc280();
    plVar8 = plVar6 + 2;
    local_78 = plVar8;
    local_70 = plVar6;
    FUN_148cdc336(&local_78,plVar8);
    plVar6[7] = param_4;
    FUN_14078c658(&local_50,param_3);
    *(undefined4 *)(plVar6 + 5) = local_50;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = uStack_4c;
    *(undefined4 *)(plVar6 + 6) = uStack_48;
    *(undefined4 *)((longlong)plVar6 + 0x34) = uStack_44;
    FUN_14485c47a(plVar6 + 8,param_4);
    if (plVar6 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar8 = (longlong *)param_1[1];
      if (plVar8 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_145c5a9fe:
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000145c5aaf4:
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *param_1 = (longlong)plVar8;
      plVar8 = (longlong *)param_1[1];
      if (plVar6 == plVar8) {
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar8 = plVar6;
          goto joined_r0x000145c5aaf4;
        }
      }
      else {
        param_1[1] = (longlong)plVar6;
        if (plVar8 != (longlong *)0x0) goto LAB_145c5a9fe;
      }
    }
    plVar8 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_145c5a92f;
  }
  else {
    uVar5 = FUN_140dec39c();
    local_68 = *param_2;
    local_60 = (undefined4)param_2[1];
    local_58 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_50,&local_68,uVar5,param_3);
    lVar7 = CONCAT44(uStack_4c,local_50);
    if (lVar7 != 0) {
      uVar5 = FUN_140dec39c();
      cVar4 = FUN_1448093f4(lVar7,uVar5);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_4c,local_50);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar6 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_4c,local_50);
          if (plVar8 == plVar6) {
            LOCK();
            plVar6 = plVar8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
LAB_145c5aa77:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar6 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar7 = *plVar6;
                  plVar8 = plVar6;
                  goto LAB_145c5aa77;
                }
              }
            }
          }
        }
        lVar7 = CONCAT44(uStack_4c,local_50);
        if ((*(longlong *)(lVar7 + 0x40) != *param_2) || (*(int *)(lVar7 + 0x48) != (int)param_2[1])
           ) {
          *(longlong *)(lVar7 + 0x40) = *param_2;
          *(int *)(lVar7 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_145c5a95c;
  }
  plVar8 = (longlong *)param_1[1];
  local_88 = lVar7;
  if (plVar8 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_80 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_140d01a6a(*param_1);
LAB_145c5a92f:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5ab38 FUN_145c5ab38 body=55 status=ok
// SIG undefined FUN_145c5ab38(void)

void FUN_145c5ab38(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964c40 == 0) {
    uVar1 = FUN_145c5ab6f();
    DAT_14c964c40 = FUN_140002ddd(FUN_14171c9bd,uVar1,&DAT_149e17ca2);
  }
  return;
}



// FUNCTION 145c5ab6f FUN_145c5ab6f body=49 status=ok
// SIG undefined FUN_145c5ab6f(void)

longlong FUN_145c5ab6f(void)

{
  if (DAT_14c964c08 == 0) {
    FUN_140f50038(&DAT_14c964c08,&PTR_s__Script_InputCore_149ebbb30);
  }
  return DAT_14c964c08;
}



// FUNCTION 145c5aba0 FUN_145c5aba0 body=55 status=ok
// SIG undefined FUN_145c5aba0(void)

void FUN_145c5aba0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e050 == 0) {
    uVar1 = FUN_145c5abd7();
    DAT_14c99e050 = FUN_140002ddd(FUN_1417356e0,uVar1,L"FieldNotificationId");
  }
  return;
}



// FUNCTION 145c5abd7 FUN_145c5abd7 body=49 status=ok
// SIG undefined FUN_145c5abd7(void)

longlong FUN_145c5abd7(void)

{
  if (DAT_14c99e038 == 0) {
    FUN_140f50038(&DAT_14c99e038,&PTR_s__Script_FieldNotification_149fcbca8);
  }
  return DAT_14c99e038;
}



// FUNCTION 145c5ac08 FUN_145c5ac08 body=55 status=ok
// SIG undefined FUN_145c5ac08(void)

void FUN_145c5ac08(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99f970 == 0) {
    uVar1 = FUN_145c5ac3f();
    DAT_14c99f970 = FUN_140002ddd(FUN_14629d237,uVar1,L"PlatformRuntimeAudioCompressionOverrides");
  }
  return;
}



// FUNCTION 145c5ac3f FUN_145c5ac3f body=49 status=ok
// SIG undefined FUN_145c5ac3f(void)

longlong FUN_145c5ac3f(void)

{
  if (DAT_14c99f940 == 0) {
    FUN_140f50038(&DAT_14c99f940,&PTR_s__Script_AudioPlatformConfigurati_14a156588);
  }
  return DAT_14c99f940;
}



// FUNCTION 145c5ac70 FUN_145c5ac70 body=55 status=ok
// SIG undefined FUN_145c5ac70(void)

void FUN_145c5ac70(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ac210 == 0) {
    uVar1 = FUN_145c5aca7();
    DAT_14c9ac210 = FUN_140002ddd(FUN_1462b46af,uVar1,L"ImageWriteOptions");
  }
  return;
}



// FUNCTION 145c5aca7 FUN_145c5aca7 body=49 status=ok
// SIG undefined FUN_145c5aca7(void)

longlong FUN_145c5aca7(void)

{
  if (DAT_14c9ac1d8 == 0) {
    FUN_140f50038(&DAT_14c9ac1d8,&PTR_s__Script_ImageWriteQueue_14a1e8220);
  }
  return DAT_14c9ac1d8;
}



// FUNCTION 145c5acd8 FUN_145c5acd8 body=55 status=ok
// SIG undefined FUN_145c5acd8(void)

void FUN_145c5acd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ac2c0 == 0) {
    uVar1 = FUN_145c5ad0f();
    DAT_14c9ac2c0 = FUN_140002ddd(FUN_1462b49e5,uVar1,L"MaterialQualityOverrides");
  }
  return;
}



// FUNCTION 145c5ad0f FUN_145c5ad0f body=49 status=ok
// SIG undefined FUN_145c5ad0f(void)

longlong FUN_145c5ad0f(void)

{
  if (DAT_14c9ac290 == 0) {
    FUN_140f50038(&DAT_14c9ac290,&PTR_s__Script_MaterialShaderQualitySet_14a1e95f0);
  }
  return DAT_14c9ac290;
}



// FUNCTION 145c5ad40 FUN_145c5ad40 body=146 status=ok
// SIG undefined FUN_145c5ad40(void)

code * FUN_145c5ad40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c5add2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CullingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCullingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca17820;
  return FUN_145cda90a;
}



// FUNCTION 145c5add2 FUN_145c5add2 body=258 status=ok
// SIG undefined FUN_145c5add2(void)

void FUN_145c5add2(void)

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
              0x110) < DAT_14ca178a0) {
    FUN_144b3d300(&DAT_14ca178a0);
    if (DAT_14ca178a0 == -1) {
      FUN_145c5aed6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCullingParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x239;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17820,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27603);
      _Init_thread_footer(&DAT_14ca178a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5aed6 FUN_145c5aed6 body=226 status=ok
// SIG undefined FUN_145c5aed6(void)

longlong * FUN_145c5aed6(longlong *param_1)

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
  pcVar13 = FUN_1462f085e;
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



// FUNCTION 145c5afba FUN_145c5afba body=132 status=ok
// SIG undefined FUN_145c5afba(void)

undefined1 * FUN_145c5afba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageConstants";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472570fc;
}



// FUNCTION 145c5b03e FUN_145c5b03e body=138 status=ok
// SIG undefined FUN_145c5b03e(void)

code * FUN_145c5b03e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTextureArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000244;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147256dc0;
}



// FUNCTION 145c5b0c8 FUN_145c5b0c8 body=138 status=ok
// SIG undefined FUN_145c5b0c8(void)

code * FUN_145c5b0c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCandidateClusters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000023b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c5afba;
}



// FUNCTION 145c5b152 FUN_145c5b152 body=55 status=ok
// SIG undefined FUN_145c5b152(void)

void FUN_145c5b152(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8fb0 == 0) {
    uVar1 = FUN_141506451();
    DAT_14caa8fb0 = FUN_140002ddd(FUN_14632af50,uVar1,L"FieldObjectCommands");
  }
  return;
}



// FUNCTION 145c5b18a FUN_145c5b18a body=55 status=ok
// SIG undefined FUN_145c5b18a(void)

void FUN_145c5b18a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caad240 == 0) {
    uVar1 = FUN_145c5b1c1();
    DAT_14caad240 = FUN_140002ddd(FUN_146336671,uVar1,L"SlatePostSettings");
  }
  return;
}



// FUNCTION 145c5b1c1 FUN_145c5b1c1 body=49 status=ok
// SIG undefined FUN_145c5b1c1(void)

longlong FUN_145c5b1c1(void)

{
  if (DAT_14caabc10 == 0) {
    FUN_140f50038(&DAT_14caabc10,&PTR_s__Script_SlateRHIRenderer_14a44d980);
  }
  return DAT_14caabc10;
}



// FUNCTION 145c5b1f2 FUN_145c5b1f2 body=55 status=ok
// SIG undefined FUN_145c5b1f2(void)

void FUN_145c5b1f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd000 == 0) {
    uVar1 = FUN_145c5b229();
    DAT_14cabd000 = FUN_140002ddd(FUN_146368e14,uVar1,L"MRMeshConfiguration");
  }
  return;
}



// FUNCTION 145c5b229 FUN_145c5b229 body=49 status=ok
// SIG undefined FUN_145c5b229(void)

longlong FUN_145c5b229(void)

{
  if (DAT_14cabce68 == 0) {
    FUN_140f50038(&DAT_14cabce68,&PTR_s__Script_MRMesh_14a5a4dd8);
  }
  return DAT_14cabce68;
}



// FUNCTION 145c5b266 FUN_145c5b266 body=93 status=ok
// SIG undefined FUN_145c5b266(void)

undefined8 * FUN_145c5b266(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a5c9670;
  *(undefined4 *)(param_1 + 5) = 0x2a;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  lVar2 = *(longlong *)(*param_2 + 0x20);
  lVar4 = FUN_1459d4980();
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    piVar1 = (int *)(lVar2 + 0x28);
    *piVar1 = *piVar1 + 0xd;
  }
  return param_1;
}



// FUNCTION 145c5b2ce FUN_145c5b2ce body=93 status=ok
// SIG undefined FUN_145c5b2ce(void)

undefined8 * FUN_145c5b2ce(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6ca700;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x15 | 0xc2;
  return param_1;
}



// FUNCTION 145c5b32c FUN_145c5b32c body=40 status=ok
// SIG undefined FUN_145c5b32c(void)

undefined8 FUN_145c5b32c(undefined8 param_1,int param_2)

{
  FUN_145c5b354();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5b354 FUN_145c5b354 body=107 status=ok
// SIG undefined FUN_145c5b354(void)

void FUN_145c5b354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab0a2e0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5b3bf(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}


