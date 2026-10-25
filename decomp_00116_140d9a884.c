// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d9a884 FUN_140d9a884 body=134 status=ok
// SIG undefined FUN_140d9a884(void)

void FUN_140d9a884(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    local_38 = &local_19;
    local_28 = &local_40;
    local_30 = FUN_14362224a;
    local_40 = param_2;
    local_19 = param_3;
    FUN_144966906(lVar1 + 0x138);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9a90c FUN_140d9a90c body=81 status=ok
// SIG undefined FUN_140d9a90c(void)

void FUN_140d9a90c(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  (**(code **)(*param_1 + 0x708))(local_28,&local_28,param_3,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9a95e FUN_140d9a95e body=134 status=ok
// SIG undefined FUN_140d9a95e(void)

void FUN_140d9a95e(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    local_38 = &local_19;
    local_28 = &local_40;
    local_30 = FUN_143622336;
    local_40 = param_2;
    local_19 = param_3;
    FUN_144966906(lVar1 + 0x138);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9a9e6 FUN_140d9a9e6 body=149 status=ok
// SIG undefined FUN_140d9a9e6(void)

undefined8 FUN_140d9a9e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      if (param_2 != param_3) {
        FUN_140d9aada(param_2 + lVar1,param_3 + lVar1);
        FUN_140d9aada(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      }
      FUN_140d9aa7c(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      FUN_140d9aa7c(param_2 + lVar1 + 0x40,param_3 + lVar1 + 0x40);
      *(undefined8 *)(param_2 + lVar1 + 0x50) = *(undefined8 *)(param_3 + lVar1 + 0x50);
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140d9aa7c FUN_140d9aa7c body=93 status=ok
// SIG undefined FUN_140d9aa7c(void)

undefined8 * FUN_140d9aa7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140971ab7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457a7684(param_1,iVar1);
      FUN_1457a7649(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d9aada FUN_140d9aada body=395 status=ok
// SIG undefined FUN_140d9aada(void)

void FUN_140d9aada(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
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
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
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
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d9ac66 FUN_140d9ac66 body=290 status=ok
// SIG undefined FUN_140d9ac66(void)

undefined8 FUN_140d9ac66(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined2 *local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,local_30);
  FUN_1400b22c2(&local_40,&DAT_149fba5e0);
  iVar2 = local_38 + -1;
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
    iVar2 = 0;
  }
  local_50 = 0xffffffff;
  local_58 = 1;
  iVar2 = FUN_1447ee042(local_30,puVar1,iVar2,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar2 == -1) {
    FUN_1446f470e(param_1,&DAT_149fba5e4,1);
  }
  else {
    FUN_144a49bb4(local_30,&local_40,iVar2 + 1);
    puVar1 = local_40;
    if (local_38 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_1,puVar1,1);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9ad8a FUN_140d9ad8a body=82 status=ok
// SIG undefined FUN_140d9ad8a(void)

longlong FUN_140d9ad8a(longlong param_1,longlong param_2)

{
  FUN_140d9addc();
  FUN_140d9ae3a(param_1 + 0x10,param_2 + 0x10);
  FUN_140d9ae98(param_1 + 0x20,param_2 + 0x20);
  FUN_140d9aef6(param_1 + 0x30,param_2 + 0x30);
  FUN_140d9af54(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 140d9addc FUN_140d9addc body=93 status=ok
// SIG undefined FUN_140d9addc(void)

undefined8 * FUN_140d9addc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d9affe(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1418453d8(param_1,iVar1);
      FUN_143c3854c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d9ae3a FUN_140d9ae3a body=93 status=ok
// SIG undefined FUN_140d9ae3a(void)

undefined8 * FUN_140d9ae3a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d9afb1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1418454b0(param_1,iVar1);
      FUN_143c3858b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d9ae98 FUN_140d9ae98 body=93 status=ok
// SIG undefined FUN_140d9ae98(void)

undefined8 * FUN_140d9ae98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d9b04b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141845588(param_1,iVar1);
      FUN_143c385ca(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d9aef6 FUN_140d9aef6 body=93 status=ok
// SIG undefined FUN_140d9aef6(void)

undefined8 * FUN_140d9aef6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d9b098(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486345a2(param_1,iVar1);
      FUN_148634604(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d9af54 FUN_140d9af54 body=93 status=ok
// SIG undefined FUN_140d9af54(void)

undefined8 * FUN_140d9af54(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_143c38609(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143c38652(param_1,iVar1);
      FUN_143c38726(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d9afb1 FUN_140d9afb1 body=77 status=ok
// SIG undefined FUN_140d9afb1(void)

void FUN_140d9afb1(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d9affe FUN_140d9affe body=77 status=ok
// SIG undefined FUN_140d9affe(void)

void FUN_140d9affe(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d9b04b FUN_140d9b04b body=77 status=ok
// SIG undefined FUN_140d9b04b(void)

void FUN_140d9b04b(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d9b098 FUN_140d9b098 body=77 status=ok
// SIG undefined FUN_140d9b098(void)

void FUN_140d9b098(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d9b0f4 FUN_140d9b0f4 body=6160 status=ok
// SIG undefined FUN_140d9b0f4(void)

undefined8 FUN_140d9b0f4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined **ppuVar18;
  longlong *plVar19;
  undefined2 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined1 auStack_118 [47];
  byte local_e9;
  longlong local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  byte *local_d0;
  undefined4 *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined2 *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined **local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)((longlong)param_1 + 0x449) = 0;
  if (((byte *)*param_2 == (byte *)0x0) || ((~*(byte *)*param_2 & 3) != 0)) goto LAB_140d9c141;
  *(undefined1 *)((longlong)param_1 + 0x449) = 1;
  uVar7 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar7,1);
  piVar8 = (int *)param_1[1];
  if (piVar8 == (int *)0x0) {
    piVar8 = &DAT_14c9485f0;
  }
  piVar14 = (int *)&DAT_14c948618;
  if (((*piVar8 != 0) && (iVar15 = piVar8[1], iVar15 != 0)) && (*piVar8 != DAT_14c948000)) {
    if ((iVar15 < 2) && (piVar8[9] < 1)) {
      piVar8 = piVar8 + 2;
    }
    else {
      piVar8 = *(int **)(piVar8 + 6);
    }
    piVar14 = (int *)&DAT_14c948618;
    if (0 < iVar15) {
      piVar14 = piVar8;
    }
  }
  if (*piVar14 != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0xbf800000bf800000;
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86958);
    local_a8 = DAT_14cb86950;
    FUN_1448075d0(&local_78);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
              if (((lVar17 != 0) &&
                  (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
              goto LAB_140d9b281;
              break;
            }
            iVar15 = *(int *)(lVar17 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_140d9b281:
    if ((byte *)*puVar10 == (byte *)0x0) {
      bVar24 = false;
    }
    else {
      bVar24 = (*(byte *)*puVar10 & 3) != 0;
    }
    if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
      FUN_1400020a8();
    }
    if (bVar24) {
      *(undefined1 *)(param_1 + 6) = 0;
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86958);
      local_a8 = DAT_14cb86950;
      FUN_1448075d0(&local_78);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar9 = &DAT_14c9a1288;
        }
        else {
          plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
          plVar12 = plVar9 + 8;
          if ((longlong *)plVar9[9] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar9[9];
          }
          iVar15 = *(int *)((longlong)plVar12 +
                           (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4);
          if (iVar15 != -1) {
            do {
              lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
              if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
                if ((((lVar17 != 0) &&
                     (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
                goto LAB_140d9c2ec;
                break;
              }
              iVar15 = *(int *)(lVar17 + 0x38);
            } while (iVar15 != -1);
          }
        }
      }
      puVar10 = &DAT_14c9a1308;
LAB_140d9c2ec:
      uVar26 = FUN_140b963dc(puVar10,0);
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar26;
LAB_140d9c2f9:
      if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86970);
      local_a8 = DAT_14cb86968;
      FUN_1448075d0(&local_78);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar9 = &DAT_14c9a1288;
        }
        else {
          plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
          plVar12 = plVar9 + 8;
          if ((longlong *)plVar9[9] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar9[9];
          }
          iVar15 = *(int *)((longlong)plVar12 +
                           (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4);
          if (iVar15 != -1) {
            do {
              lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
              if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
                if (((lVar17 != 0) &&
                    (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
                goto LAB_140d9b360;
                break;
              }
              iVar15 = *(int *)(lVar17 + 0x38);
            } while (iVar15 != -1);
          }
        }
      }
      puVar10 = &DAT_14c9a1308;
LAB_140d9b360:
      if ((byte *)*puVar10 == (byte *)0x0) {
        bVar24 = false;
      }
      else {
        bVar24 = (*(byte *)*puVar10 & 3) != 0;
      }
      if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
        FUN_1400020a8();
      }
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86988);
      local_a8 = DAT_14cb86980;
      FUN_1448075d0(&local_78);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar9 = &DAT_14c9a1288;
        }
        else {
          plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
          plVar12 = plVar9 + 8;
          if ((longlong *)plVar9[9] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar9[9];
          }
          iVar15 = *(int *)((longlong)plVar12 +
                           (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4);
          if (iVar15 != -1) {
            do {
              lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
              if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
                if (((lVar17 != 0) &&
                    (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
                goto LAB_140d9b435;
                break;
              }
              iVar15 = *(int *)(lVar17 + 0x38);
            } while (iVar15 != -1);
          }
        }
      }
      puVar10 = &DAT_14c9a1308;
LAB_140d9b435:
      if ((byte *)*puVar10 == (byte *)0x0) {
        bVar25 = false;
      }
      else {
        bVar25 = (*(byte *)*puVar10 & 3) != 0;
      }
      if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
        FUN_1400020a8();
      }
      if ((bool)(bVar24 | bVar25)) {
        *(undefined1 *)(param_1 + 6) = 1;
        if (bVar24) {
          plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86970);
          local_a8 = DAT_14cb86968;
          FUN_1448075d0(&local_78);
          pbVar3 = (byte *)*param_2;
          if (pbVar3 != (byte *)0x0) {
            if ((*pbVar3 & 2) == 0) {
              plVar9 = &DAT_14c9a1288;
            }
            else {
              plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
              plVar12 = plVar9 + 8;
              if ((longlong *)plVar9[9] != (longlong *)0x0) {
                plVar12 = (longlong *)plVar9[9];
              }
              iVar15 = *(int *)((longlong)plVar12 +
                               (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4);
              if (iVar15 != -1) {
                do {
                  lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
                  if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
                    if ((((lVar17 != 0) &&
                         (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                        ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
                    goto LAB_140d9c45a;
                    break;
                  }
                  iVar15 = *(int *)(lVar17 + 0x38);
                } while (iVar15 != -1);
              }
            }
          }
          puVar10 = &DAT_14c9a1308;
LAB_140d9c45a:
          uVar26 = FUN_140b963dc(puVar10,0);
          *(undefined4 *)((longlong)param_1 + 0x34) = uVar26;
          if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
            FUN_1400020a8();
          }
        }
        if (bVar25) {
          plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86988);
          local_a8 = DAT_14cb86980;
          FUN_1448075d0(&local_78);
          pbVar3 = (byte *)*param_2;
          if (pbVar3 != (byte *)0x0) {
            if ((*pbVar3 & 2) == 0) {
              plVar9 = &DAT_14c9a1288;
            }
            else {
              plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
              plVar12 = plVar9 + 8;
              if ((longlong *)plVar9[9] != (longlong *)0x0) {
                plVar12 = (longlong *)plVar9[9];
              }
              iVar15 = *(int *)((longlong)plVar12 +
                               (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4);
              if (iVar15 != -1) {
                do {
                  lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
                  if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
                    if (((lVar17 != 0) &&
                        (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                       (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
                    goto LAB_140d9c536;
                    break;
                  }
                  iVar15 = *(int *)(lVar17 + 0x38);
                } while (iVar15 != -1);
              }
            }
          }
          puVar10 = &DAT_14c9a1308;
LAB_140d9c536:
          uVar26 = FUN_140b963dc(puVar10,0);
          *(undefined4 *)(param_1 + 7) = uVar26;
          goto LAB_140d9c2f9;
        }
      }
      else {
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined4 *)((longlong)param_1 + 0x34) = 0xbf800000;
      }
    }
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86a70);
    local_a8 = DAT_14cb86a68;
    FUN_1448075d0(&local_78);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
              if (((lVar17 != 0) &&
                  (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
              goto LAB_140d9b529;
              break;
            }
            iVar15 = *(int *)(lVar17 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_140d9b529:
    uVar26 = FUN_140b963dc(puVar10,0);
    *(undefined4 *)((longlong)param_1 + 0x38c) = uVar26;
    if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
      FUN_1400020a8();
    }
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86a88);
    local_a8 = DAT_14cb86a80;
    FUN_1448075d0(&local_78);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
              if ((((lVar17 != 0) &&
                   (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_140d9b5fc;
              break;
            }
            iVar15 = *(int *)(lVar17 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_140d9b5fc:
    uVar26 = FUN_140b963dc(puVar10,0);
    *(undefined4 *)(param_1 + 0x72) = uVar26;
    if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
      FUN_1400020a8();
    }
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb86aa0);
    local_a8 = DAT_14cb86a98;
    FUN_1448075d0(&local_78);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
              if (((lVar17 != 0) &&
                  (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
              goto LAB_140d9b6d1;
              break;
            }
            iVar15 = *(int *)(lVar17 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_140d9b6d1:
    local_d8 = param_2;
    if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
      FUN_1400020a8();
    }
    plVar9 = param_1 + 0x73;
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)((longlong)param_1 + 0x3a4) != 0) {
      FUN_14481578e(plVar9);
    }
    pbVar3 = (byte *)*puVar10;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 2)) {
      uVar2 = *(uint *)(*(longlong *)(pbVar3 + 8) + 0x10);
      iVar15 = (int)param_1[0x74];
      if (iVar15 < (int)uVar2) {
        *(uint *)(param_1 + 0x74) = uVar2;
        if ((uint)(*(int *)((longlong)param_1 + 0x3a4) - iVar15) < uVar2 - iVar15) {
          FUN_1446f48e2(plVar9);
        }
        memset((void *)((longlong)iVar15 * 4 + *plVar9),0,(longlong)(int)(uVar2 - iVar15) << 2);
      }
      else {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)uVar2);
        }
        if ((int)uVar2 < iVar15) {
          *(uint *)(param_1 + 0x74) = uVar2;
          FUN_14479f406(plVar9);
        }
      }
      if (0 < (int)uVar2) {
        lVar17 = 0;
        uVar22 = 0;
        do {
          plVar12 = &DAT_14c9a1270;
          if ((*(byte *)*puVar10 & 2) != 0) {
            plVar12 = *(longlong **)((byte *)*puVar10 + 8);
          }
          uVar26 = FUN_140e1edd4(*plVar12 + lVar17,0);
          *(undefined4 *)(*plVar9 + uVar22 * 4) = uVar26;
          uVar22 = uVar22 + 1;
          lVar17 = lVar17 + 0x10;
        } while (uVar2 != uVar22);
      }
    }
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cb869a0);
    local_a8 = DAT_14cb86998;
    FUN_1448075d0(&local_78);
    pbVar3 = (byte *)*local_d8;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
              if ((((lVar17 != 0) &&
                   (puVar10 = (undefined8 *)(lVar17 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_140d9b7cf;
              break;
            }
            iVar15 = *(int *)(lVar17 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_140d9b7cf:
    if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    uStack_5b = 0;
    local_78 = &PTR_FUN_14b398ea0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_60 = 0;
    uStack_5c = 0;
    uStack_5a = 0;
    uStack_58 = 0;
    uStack_52 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_4a = 0;
    param_1[0x55] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
    *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
    FUN_14185ee86(param_1 + 0x56,&uStack_58);
    local_78 = &PTR_FUN_14b398ea0;
    FUN_1403d9976(CONCAT26(uStack_52,uStack_58),uStack_50);
    if (CONCAT26(uStack_52,uStack_58) != 0) {
      FUN_1400020a8();
    }
    uVar7 = FUN_14185edae();
    FUN_1446e7478(puVar10,param_1 + 0x52,uVar7,0);
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_c8 = (undefined4 *)(lVar17 + 0xc7c);
    local_dc = *local_c8;
    local_d0 = (byte *)(lVar17 + 0xc80);
    local_e9 = *local_d0;
    if ((local_e9 & 1) != 0) {
      *local_d0 = 0;
      *local_c8 = 0;
    }
    local_e8 = DAT_14cb86da8;
    local_a8 = (undefined2 *)0x0;
    plStack_a0 = (longlong *)0x0;
    local_98 = 0;
    local_80 = DAT_14cb869b8;
    local_88 = (undefined4)DAT_14cb869b0;
    uStack_84 = (undefined4)((ulonglong)DAT_14cb869b0 >> 0x20);
    FUN_1448075d0(&local_78);
    pbVar3 = (byte *)*puVar10;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_78) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar17 = *plVar9 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar15 * 0x40) == (uint)local_78) {
              if (((lVar17 != 0) &&
                  (puVar11 = (undefined8 *)(lVar17 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar11 != (byte *)0x0 && ((*(byte *)*puVar11 & 0x40) == 0))))
              goto LAB_140d9b993;
              break;
            }
            iVar15 = *(int *)(lVar17 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar11 = &DAT_14c9a1308;
LAB_140d9b993:
    uVar7 = FUN_1414edaeb(puVar11);
    if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
      FUN_1400020a8();
    }
    FUN_14189d0a4(&local_a8,uVar7,0,1);
    plVar9 = plStack_a0;
    puVar20 = local_a8;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = plStack_a0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar8 = (int *)((longlong)plVar9 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (puVar20 != (undefined2 *)0x0) {
      local_80 = DAT_14cb869b8;
      local_88 = (undefined4)DAT_14cb869b0;
      uStack_84 = (undefined4)((ulonglong)DAT_14cb869b0 >> 0x20);
      FUN_1448075d0(&local_78);
      pbVar3 = (byte *)*puVar10;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar12 = &DAT_14c9a1288;
        }
        else {
          plVar12 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
          plVar19 = plVar12 + 8;
          if ((longlong *)plVar12[9] != (longlong *)0x0) {
            plVar19 = (longlong *)plVar12[9];
          }
          iVar15 = *(int *)((longlong)plVar19 +
                           (ulonglong)((int)plVar12[10] - 1U & (uint)local_78) * 4);
          if (iVar15 != -1) {
            do {
              lVar17 = *plVar12 + (longlong)iVar15 * 0x40;
              if (*(uint *)(*plVar12 + (longlong)iVar15 * 0x40) == (uint)local_78) {
                if (((lVar17 != 0) &&
                    (puVar11 = (undefined8 *)(lVar17 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar11 != (byte *)0x0 && ((*(byte *)*puVar11 & 0x40) == 0))))
                goto LAB_140d9bb4d;
                break;
              }
              iVar15 = *(int *)(lVar17 + 0x38);
            } while (iVar15 != -1);
          }
        }
      }
      puVar11 = &DAT_14c9a1308;
LAB_140d9bb4d:
      FUN_1446e7478(puVar11,puVar20,uVar7,1);
      if (CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,local_60))) != 0) {
        FUN_1400020a8();
      }
    }
    local_c0 = param_1;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar8 = (int *)((longlong)plVar9 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    iVar15 = *(int *)(local_e8 + 0x348);
    if ((longlong)iVar15 != 0) {
      lVar17 = *(longlong *)(local_e8 + 0x340);
      uVar22 = 0;
      do {
        if (*(longlong *)(lVar17 + uVar22) == 0 && local_a8 == (undefined2 *)0x0) {
LAB_140d9bced:
          iVar15 = (int)(uVar22 >> 3) * -0x55555555;
          if (iVar15 != -1) goto LAB_140d9bd01;
          break;
        }
        lVar16 = lVar17 + 0x10 + uVar22;
        iVar1 = *(int *)(lVar16 + 4);
        if ((((iVar1 != 0) && (uVar2 = *(uint *)(lVar17 + 0x10 + uVar22), -1 < (int)uVar2)) &&
            ((int)uVar2 < DAT_14c9647dc)) &&
           (((plVar9 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar1)) &&
            (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar13 = *plVar9, lVar13 != 0)))))) {
          lVar23 = 0;
          lVar21 = lVar13;
          if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
            lVar21 = 0;
          }
          if (local_98._4_4_ != 0) {
            if ((int)(uint)local_98 < 0) {
LAB_140d9bce8:
              lVar23 = 0;
            }
            else {
              lVar23 = 0;
              if ((int)(uint)local_98 < DAT_14c9647dc) {
                plVar12 = (longlong *)
                          ((ulonglong)(((uint)local_98 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_98 >> 0x10) * 8));
                if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != local_98._4_4_)) ||
                   ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_140d9bce8;
                lVar23 = *plVar12;
              }
            }
          }
          if (lVar21 == lVar23) {
            if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
              lVar13 = 0;
            }
            cVar4 = FUN_14470ec92(lVar13,*(longlong *)(lVar17 + uVar22),local_a8,0);
            if (cVar4 != '\0') goto LAB_140d9bced;
          }
        }
        uVar22 = uVar22 + 0x18;
      } while (lVar16 + 8 != lVar17 + (longlong)iVar15 * 0x18);
    }
    plVar9 = (longlong *)(local_e8 + 0x340);
    iVar15 = *(int *)(local_e8 + 0x348);
    lVar17 = (longlong)iVar15;
    *(uint *)(local_e8 + 0x348) = iVar15 + 1U;
    if (*(uint *)(local_e8 + 0x34c) < iVar15 + 1U) {
      FUN_145c97800(plVar9,iVar15);
    }
    lVar16 = *plVar9;
    *(undefined2 **)(lVar16 + lVar17 * 0x18) = local_a8;
    *(longlong **)(lVar16 + 8 + lVar17 * 0x18) = plStack_a0;
    local_a8 = (undefined2 *)0x0;
    plStack_a0 = (longlong *)0x0;
    *(undefined8 *)(lVar16 + 0x10 + lVar17 * 0x18) = local_98;
LAB_140d9bd01:
    param_1 = local_c0;
    plVar9 = local_c0 + 0x53;
    *(short *)((longlong)local_c0 + 0x2ae) = (short)iVar15;
    lVar17 = local_e8 + 0x350;
    if ((DAT_14cb86804 == DAT_14c948034) && (DAT_14cb86800 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86800,(ulonglong)DAT_14cb86804 >> 0x20);
      DAT_14cb86804 = local_78;
    }
    lVar16 = local_e8;
    uVar5 = FUN_1412962b2(puVar10,&DAT_14cb86804,lVar17);
    *(undefined1 *)plVar9 = uVar5;
    if ((DAT_14cb86834 == DAT_14c948034) && (DAT_14cb86830 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86830,(ulonglong)DAT_14cb86834 >> 0x20);
      DAT_14cb86834 = local_78;
      lVar16 = local_e8;
    }
    uVar5 = FUN_1412962b2(puVar10,&DAT_14cb86834,lVar17);
    *(undefined1 *)((longlong)param_1 + 0x299) = uVar5;
    if ((DAT_14cb8681c == DAT_14c948034) && (DAT_14cb86818 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86818,(ulonglong)DAT_14cb8681c >> 0x20);
      DAT_14cb8681c = local_78;
      lVar16 = local_e8;
    }
    uVar5 = FUN_1412962b2(puVar10,&DAT_14cb8681c,lVar17);
    *(undefined1 *)((longlong)param_1 + 0x29a) = uVar5;
    lVar16 = lVar16 + 0x360;
    if ((DAT_14cb8684c == DAT_14c948034) && (DAT_14cb86848 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86848,(ulonglong)DAT_14cb8684c >> 0x20);
      DAT_14cb8684c = local_78;
    }
    uVar6 = FUN_14475decc(puVar10,&DAT_14cb8684c,lVar16);
    *(undefined2 *)((longlong)param_1 + 0x29c) = uVar6;
    if ((DAT_14cb86864 == DAT_14c948034) && (DAT_14cb86860 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86860,(ulonglong)DAT_14cb86864 >> 0x20);
      DAT_14cb86864 = local_78;
    }
    uVar6 = FUN_14475decc(puVar10,&DAT_14cb86864,lVar16);
    *(undefined2 *)((longlong)param_1 + 0x29e) = uVar6;
    if ((DAT_14cb868c4 == DAT_14c948034) && (DAT_14cb868c0 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb868c0,(ulonglong)DAT_14cb868c4 >> 0x20);
      DAT_14cb868c4 = local_78;
    }
    uVar6 = FUN_14475decc(puVar10,&DAT_14cb868c4,lVar16);
    *(undefined2 *)(param_1 + 0x54) = uVar6;
    if ((DAT_14cb868ac == DAT_14c948034) && (DAT_14cb868a8 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb868a8,(ulonglong)DAT_14cb868ac >> 0x20);
      DAT_14cb868ac = local_78;
    }
    uVar6 = FUN_14475decc(puVar10,&DAT_14cb868ac,lVar16);
    *(undefined2 *)((longlong)param_1 + 0x2a2) = uVar6;
    if ((DAT_14cb86894 == DAT_14c948034) && (DAT_14cb86890 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86890,(ulonglong)DAT_14cb86894 >> 0x20);
      DAT_14cb86894 = local_78;
    }
    uVar6 = FUN_14475decc(puVar10,&DAT_14cb86894,lVar16);
    *(undefined2 *)((longlong)param_1 + 0x2a4) = uVar6;
    if ((DAT_14cb868dc == DAT_14c948034) && (DAT_14cb868d8 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb868d8,(ulonglong)DAT_14cb868dc >> 0x20);
      DAT_14cb868dc = local_78;
    }
    uVar6 = FUN_14475decc(puVar10,&DAT_14cb868dc,lVar16);
    *(undefined2 *)((longlong)param_1 + 0x2a6) = uVar6;
    if ((DAT_14cb868f4 == DAT_14c948034) && (DAT_14cb868f0 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb868f0,(ulonglong)DAT_14cb868f4 >> 0x20);
      DAT_14cb868f4 = local_78;
    }
    uVar6 = FUN_14475decc(puVar10,&DAT_14cb868f4,lVar16);
    *(undefined2 *)(param_1 + 0x55) = uVar6;
    if ((DAT_14cb8690c == DAT_14c948034) && (DAT_14cb86908 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86908,(ulonglong)DAT_14cb8690c >> 0x20);
      DAT_14cb8690c = local_78;
    }
    uVar5 = FUN_1412962b2(puVar10,&DAT_14cb8690c,lVar17);
    *(undefined1 *)((longlong)param_1 + 0x2aa) = uVar5;
    if ((DAT_14cb86924 == DAT_14c948034) && (DAT_14cb86920 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86920,(ulonglong)DAT_14cb86924 >> 0x20);
      DAT_14cb86924 = local_78;
    }
    lVar16 = local_e8;
    uVar5 = FUN_1412962b2(puVar10,&DAT_14cb86924,lVar17);
    *(undefined1 *)((longlong)param_1 + 0x2ab) = uVar5;
    if ((DAT_14cb8693c == DAT_14c948034) && (DAT_14cb86938 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86938,(ulonglong)DAT_14cb8693c >> 0x20);
      DAT_14cb8693c = local_78;
      lVar16 = local_e8;
    }
    uVar5 = FUN_1412962b2(puVar10,&DAT_14cb8693c,lVar17);
    *(undefined1 *)((longlong)param_1 + 0x2ac) = uVar5;
    if ((DAT_14cb86ab4 == DAT_14c948034) && (DAT_14cb86ab0 != DAT_14c948030)) {
      FUN_14011791e(&local_78,DAT_14cb86ab0,(ulonglong)DAT_14cb86ab4 >> 0x20);
      DAT_14cb86ab4 = local_78;
    }
    uVar6 = FUN_144a69566(local_d8,&DAT_14cb86ab4,lVar16 + 0x370);
    plVar9 = plStack_a0;
    *(undefined2 *)(param_1 + 0x75) = uVar6;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_a0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar8 = (int *)((longlong)plVar9 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if ((local_e9 & 1) != 0) {
      *local_c8 = local_dc;
      *local_d0 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  if (*(char *)((longlong)param_1 + 0x409) == '\0') {
    plVar9 = (longlong *)FUN_1401bd7a2(param_1);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar9 + 0x50))(plVar9), cVar4 == '\0')) goto LAB_140d9c141;
  }
  if (*(char *)((longlong)param_1 + 0x40b) != '\0') goto LAB_140d9c141;
  piVar8 = &DAT_14c9485f0;
  if ((int *)param_1[1] != (int *)0x0) {
    piVar8 = (int *)param_1[1];
  }
  if (((*piVar8 == 0) || (iVar15 = piVar8[1], iVar15 == 0)) || (*piVar8 == DAT_14c948000)) {
LAB_140d9c374:
    local_b0 = DAT_14c948620;
    local_b8 = DAT_14c948618;
  }
  else {
    if ((iVar15 < 2) && (piVar8[9] < 1)) {
      piVar8 = piVar8 + 2;
    }
    else {
      piVar8 = *(int **)(piVar8 + 6);
    }
    if (iVar15 < 1) goto LAB_140d9c374;
    local_b0 = piVar8[2];
    local_b8 = *(undefined8 *)piVar8;
  }
  FUN_1408226d0(&local_b8,&local_a8,1);
  puVar20 = &DAT_149dfb77a;
  if ((int)plStack_a0 != 0) {
    puVar20 = local_a8;
  }
  FUN_140002266(&local_78,L"%s_EndState",puVar20);
  uStack_84 = 0;
  local_80 = 0;
  ppuVar18 = (undefined **)&DAT_149dfb77a;
  if (local_70 != 0) {
    ppuVar18 = local_78;
  }
  FUN_1405f0d29(&local_88,ppuVar18,0);
  if (local_78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x71) = local_80;
  param_1[0x70] = CONCAT44(uStack_84,local_88);
LAB_140d9c141:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140d9c907 FUN_140d9c907 body=61 status=ok
// SIG undefined FUN_140d9c907(void)

void FUN_140d9c907(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d9c944 FUN_140d9c944 body=177 status=ok
// SIG undefined FUN_140d9c944(void)

void FUN_140d9c944(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_1400d33ac(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_1400d33ac(param_1 + 0x40,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_14026cec3(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_146ded332(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_140d9c9f5(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_145891620(param_1 + 8,0);
    return;
  }
  return;
}



// FUNCTION 140d9c9f5 FUN_140d9c9f5 body=306 status=ok
// SIG undefined FUN_140d9c9f5(void)

void FUN_140d9c9f5(longlong *param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      plVar7 = *(longlong **)(lVar2 + 0x30);
      if ((longlong)*(int *)(lVar2 + 0x38) == 0) {
        iVar3 = 0;
      }
      else {
        plVar6 = plVar7 + (longlong)*(int *)(lVar2 + 0x38) * 4;
        do {
          iVar3 = (int)plVar7[3];
          if (0 < iVar3) {
            lVar4 = 0;
            lVar5 = 0;
            do {
              if ((*(byte *)(*plVar7 + 0x664 + lVar4) & 1) != 0) {
                lVar8 = *plVar7 + lVar4;
                FUN_14026d15c(lVar8);
                pbVar1 = (byte *)(lVar8 + 0x664);
                *pbVar1 = *pbVar1 & 0xfe;
                iVar3 = (int)plVar7[3];
              }
              lVar5 = lVar5 + 1;
              lVar4 = lVar4 + 0x670;
            } while (lVar5 < iVar3);
          }
          plVar7[1] = *plVar7;
          *(int *)((longlong)plVar7 + 0x14) = (int)plVar7[2];
          plVar7[3] = -0x100000000;
          plVar7 = plVar7 + 4;
        } while (plVar7 != plVar6);
        iVar3 = *(int *)(lVar2 + 0x38);
        plVar7 = *(longlong **)(lVar2 + 0x30);
      }
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x40) * iVar3;
      FUN_140d9cb27(plVar7);
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 140d9cb27 FUN_140d9cb27 body=38 status=ok
// SIG undefined FUN_140d9cb27(void)

void FUN_140d9cb27(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400020a8(*param_1);
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140d9cb4e FUN_140d9cb4e body=217 status=ok
// SIG undefined FUN_140d9cb4e(void)

void FUN_140d9cb4e(longlong param_1)

{
  FUN_140d9cc27(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) == 0) goto LAB_140d9cb7a;
  while( true ) {
    FUN_1400020a8();
LAB_140d9cb7a:
    if (*(undefined8 **)(param_1 + 0x118) == (undefined8 *)0x0) break;
    *(undefined8 *)(param_1 + 0x118) = **(undefined8 **)(param_1 + 0x118);
  }
  while (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x108) = **(undefined8 **)(param_1 + 0x108);
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9cca6(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9ccde(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1457a7be2(param_1);
  return;
}



// FUNCTION 140d9cc27 FUN_140d9cc27 body=127 status=ok
// SIG undefined FUN_140d9cc27(void)

void FUN_140d9cc27(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x98) = 0;
        if (*(longlong *)(lVar1 + 0x90) != 0) {
          FUN_1400020a8();
        }
        FUN_140d9cca6(lVar1 + 0x50);
        *(undefined4 *)(lVar1 + 0x48) = 0;
        if (*(longlong *)(lVar1 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_140d9ccde(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140d9cca6 FUN_140d9cca6 body=55 status=ok
// SIG undefined FUN_140d9cca6(void)

void FUN_140d9cca6(longlong *param_1)

{
  FUN_140542f9e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9ccde FUN_140d9ccde body=384 status=ok
// SIG undefined FUN_140d9ccde(void)

void FUN_140d9ccde(longlong *param_1)

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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d9ce6e FUN_140d9ce6e body=55 status=ok
// SIG undefined FUN_140d9ce6e(void)

void FUN_140d9ce6e(longlong *param_1)

{
  FUN_140d9cea6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9cea6 FUN_140d9cea6 body=123 status=ok
// SIG undefined FUN_140d9cea6(void)

void FUN_140d9cea6(longlong param_1,int param_2)

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



// FUNCTION 140d9cf22 FUN_140d9cf22 body=55 status=ok
// SIG undefined FUN_140d9cf22(void)

void FUN_140d9cf22(longlong *param_1)

{
  FUN_140d9cf5a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9cf5a FUN_140d9cf5a body=420 status=ok
// SIG undefined FUN_140d9cf5a(void)

void FUN_140d9cf5a(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_146ce7320(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d9d100 FUN_140d9d100 body=1202 status=ok
// SIG undefined FUN_140d9d100(void)

undefined8 FUN_140d9d100(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  if (0 < (longlong)*(int *)(param_1 + 0x78)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x78) + 1;
    do {
      FUN_1400d2a94(param_1,**(undefined8 **)(*(longlong *)(param_1 + 0x70) + -0x10 + uVar13 * 8));
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
  plVar14 = (longlong *)(param_1 + 0x30);
  if (0 < (longlong)*(int *)(param_1 + 0x38)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x38) + 1;
    do {
      plVar15 = (longlong *)**(longlong **)(*plVar14 + -0x10 + uVar13 * 8);
      if (plVar15 != (longlong *)0x0) {
        lVar3 = *(longlong *)(*(longlong *)(*plVar15 + 0x1e8) + (longlong)(int)plVar15[1] * 8);
        if (lVar3 != 0) {
          FUN_1407829ba((longlong)(int)plVar15[1],lVar3);
          FUN_1400d25b0(param_1,plVar15);
          FUN_140782a1c();
          FUN_140782aaa(plVar14,lVar3);
        }
      }
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
  FUN_140d9d68a();
  if (0 < (longlong)*(int *)(param_1 + 0xb8)) {
    uVar13 = (longlong)*(int *)(param_1 + 0xb8) + 1;
    do {
      FUN_140d9d8c4((longlong *)(param_1 + 0xb0),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -0x10 + uVar13 * 8));
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    puVar10 = *(ulonglong **)(param_1 + 0xc0);
    puVar1 = puVar10 + *(int *)(param_1 + 200);
    do {
      uVar13 = *puVar10;
      lVar3 = *(longlong *)(param_1 + 0xd0);
      if ((int)*(uint *)(param_1 + 0xd8) < 1) {
        lVar12 = -1;
      }
      else {
        piVar8 = (int *)(lVar3 + 0x10);
        uVar7 = 0;
        do {
          if ((*(ulonglong *)(piVar8 + -4) <= uVar13) &&
             (uVar13 < *(ulonglong *)(piVar8 + -4) + (longlong)*piVar8 * 0xa0)) goto LAB_140d9d222;
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 8;
        } while (*(uint *)(param_1 + 0xd8) != uVar7);
        uVar7 = 0xffffffffffffffff;
LAB_140d9d222:
        lVar12 = (longlong)(int)uVar7;
      }
      if ((*(byte *)(uVar13 + 0x9c) & 1) != 0) {
        FUN_140d9d5f6(uVar13);
        *(byte *)(uVar13 + 0x9c) = *(byte *)(uVar13 + 0x9c) & 0xfe;
      }
      plVar15 = (longlong *)(lVar3 + lVar12 * 0x20);
      lVar3 = *plVar15;
      if (*(int *)((longlong)plVar15 + 0x1c) != -1) {
        *(int *)(uVar13 + 0x98) = *(int *)((longlong)plVar15 + 0x1c);
      }
      *(int *)((longlong)plVar15 + 0x1c) = (int)((uVar13 - lVar3) / 0xa0);
      *(int *)((longlong)plVar15 + 0x14) = *(int *)((longlong)plVar15 + 0x14) + 1;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) < 0) {
    FUN_146db681e(param_1 + 0xc0,0);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x78)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x78) + 1;
    do {
      FUN_1400d2ba8((longlong *)(param_1 + 0x70),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + -0x10 + uVar13 * 8));
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x80);
    puVar2 = puVar6 + *(int *)(param_1 + 0x88);
    do {
      plVar15 = (longlong *)*puVar6;
      lVar3 = *(longlong *)(param_1 + 0x90);
      if ((int)*(uint *)(param_1 + 0x98) < 1) {
        lVar12 = -1;
      }
      else {
        piVar8 = (int *)(lVar3 + 0x10);
        uVar13 = 0;
        do {
          if ((*(longlong **)(piVar8 + -4) <= plVar15) &&
             (plVar15 < *(longlong **)(piVar8 + -4) + (longlong)*piVar8 * 10)) goto LAB_140d9d315;
          uVar13 = uVar13 + 1;
          piVar8 = piVar8 + 8;
        } while (*(uint *)(param_1 + 0x98) != uVar13);
        uVar13 = 0xffffffffffffffff;
LAB_140d9d315:
        lVar12 = (longlong)(int)uVar13;
      }
      bVar11 = *(byte *)((longlong)plVar15 + 0x4c);
      if ((bVar11 & 1) != 0) {
        if (*plVar15 != 0) {
          *(undefined8 *)(*plVar15 + 0x10) = 0;
          *plVar15 = 0;
          bVar11 = *(byte *)((longlong)plVar15 + 0x4c);
        }
        *(undefined4 *)(plVar15 + 4) = 0xffffffff;
        *(undefined4 *)(plVar15 + 6) = 0xffffffff;
        *(undefined4 *)(plVar15 + 7) = 0xffffffff;
        *(undefined4 *)(plVar15 + 8) = 0;
        *(byte *)((longlong)plVar15 + 0x4c) = bVar11 & 0xfe;
      }
      plVar9 = (longlong *)(lVar3 + lVar12 * 0x20);
      lVar3 = *plVar9;
      if (*(int *)((longlong)plVar9 + 0x1c) != -1) {
        *(int *)(plVar15 + 9) = *(int *)((longlong)plVar9 + 0x1c);
      }
      *(int *)((longlong)plVar9 + 0x1c) = (int)((ulonglong)((longlong)plVar15 - lVar3) / 0x50);
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar2);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) < 0) {
    FUN_141729b26(param_1 + 0x80,0);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x38)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x38) + 1;
    do {
      FUN_140782aaa(plVar14,*(undefined8 *)(*plVar14 + -0x10 + uVar13 * 8));
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
  uVar5 = 0;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    puVar10 = *(ulonglong **)(param_1 + 0x40);
    puVar1 = puVar10 + *(int *)(param_1 + 0x48);
    do {
      uVar13 = *puVar10;
      lVar3 = *(longlong *)(param_1 + 0x50);
      if ((int)*(uint *)(param_1 + 0x58) < 1) {
        lVar12 = -1;
      }
      else {
        piVar8 = (int *)(lVar3 + 0x10);
        uVar7 = 0;
        do {
          if ((*(ulonglong *)(piVar8 + -4) <= uVar13) &&
             (uVar13 < *(ulonglong *)(piVar8 + -4) + (longlong)*piVar8 * 0x58)) goto LAB_140d9d3fd;
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 8;
        } while (*(uint *)(param_1 + 0x58) != uVar7);
        uVar7 = 0xffffffffffffffff;
LAB_140d9d3fd:
        lVar12 = (longlong)(int)uVar7;
      }
      if ((*(byte *)(uVar13 + 0x54) & 1) != 0) {
        FUN_140d9d5b2(uVar13);
        *(byte *)(uVar13 + 0x54) = *(byte *)(uVar13 + 0x54) & 0xfe;
      }
      plVar14 = (longlong *)(lVar3 + lVar12 * 0x20);
      lVar3 = *plVar14;
      if (*(int *)((longlong)plVar14 + 0x1c) != -1) {
        *(int *)(uVar13 + 0x50) = *(int *)((longlong)plVar14 + 0x1c);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar13 - lVar3;
      uVar5 = SUB168(auVar4 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
      *(int *)((longlong)plVar14 + 0x1c) = (int)((uVar13 - lVar3) / 0x58);
      *(int *)((longlong)plVar14 + 0x14) = *(int *)((longlong)plVar14 + 0x14) + 1;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) < 0) {
    uVar5 = FUN_1409669a6(param_1 + 0x40,0);
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 140d9d5b2 FUN_140d9d5b2 body=67 status=ok
// SIG undefined FUN_140d9d5b2(void)

void FUN_140d9d5b2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(*plVar1 + 0x1e8) + (longlong)(int)plVar1[1] * 8) = 0;
    *param_1 = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    return;
  }
  if (lVar2 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar2);
    return;
  }
  return;
}



// FUNCTION 140d9d5f6 FUN_140d9d5f6 body=101 status=ok
// SIG undefined FUN_140d9d5f6(void)

void FUN_140d9d5f6(longlong *param_1)

{
  longlong *plVar1;
  
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0;
  plVar1 = param_1 + 2;
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[0xc];
  }
  FUN_140d9d65b(plVar1,(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d9d65b FUN_140d9d65b body=47 status=ok
// SIG undefined FUN_140d9d65b(void)

void FUN_140d9d65b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140d9d68a FUN_140d9d68a body=311 status=ok
// SIG undefined FUN_140d9d68a(void)

void FUN_140d9d68a(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (0 < (longlong)(int)param_1[1]) {
    uVar6 = (longlong)(int)param_1[1] + 1;
    do {
      FUN_140d9d802(param_1,*(undefined8 *)(*param_1 + -0x10 + uVar6 * 8));
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  if ((longlong)(int)param_1[3] != 0) {
    puVar5 = (ulonglong *)param_1[2];
    puVar1 = puVar5 + (int)param_1[3];
    do {
      uVar6 = *puVar5;
      lVar2 = param_1[4];
      if ((int)*(uint *)(param_1 + 5) < 1) {
        lVar7 = -1;
      }
      else {
        piVar4 = (int *)(lVar2 + 0x10);
        uVar3 = 0;
        do {
          if ((*(ulonglong *)(piVar4 + -4) <= uVar6) &&
             (uVar6 < *(ulonglong *)(piVar4 + -4) + (longlong)*piVar4 * 0x20)) goto LAB_140d9d70f;
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 8;
        } while (*(uint *)(param_1 + 5) != uVar3);
        uVar3 = 0xffffffffffffffff;
LAB_140d9d70f:
        lVar7 = (longlong)(int)uVar3;
      }
      if ((*(byte *)(uVar6 + 0x1c) & 1) != 0) {
        FUN_140d9d7c2(uVar6);
        *(byte *)(uVar6 + 0x1c) = *(byte *)(uVar6 + 0x1c) & 0xfe;
      }
      plVar8 = (longlong *)(lVar2 + lVar7 * 0x20);
      lVar2 = *plVar8;
      if (*(int *)((longlong)plVar8 + 0x1c) != -1) {
        *(int *)(uVar6 + 0x18) = *(int *)((longlong)plVar8 + 0x1c);
      }
      *(int *)((longlong)plVar8 + 0x1c) = (int)(uVar6 - lVar2 >> 5);
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_146db6a86(param_1 + 2);
    return;
  }
  return;
}



// FUNCTION 140d9d7c2 FUN_140d9d7c2 body=64 status=ok
// SIG undefined FUN_140d9d7c2(void)

void FUN_140d9d7c2(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_146db681e(param_1,0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d9d802 FUN_140d9d802 body=194 status=ok
// SIG undefined FUN_140d9d802(void)

void FUN_140d9d802(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x14);
    iVar2 = (int)param_1[1];
    iVar3 = ~uVar1 + iVar2;
    if (iVar3 != 0) {
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = iVar3;
      }
      memmove((void *)(*param_1 + (longlong)(int)uVar1 * 8),
              (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 + -1;
    *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
    if ((int)uVar1 < (int)param_1[1]) {
      *(uint *)(*(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) + 0x14) = uVar1;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)(param_2 + 0xc) < 0) {
      FUN_146db681e(param_2,0);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_14574b690(param_1 + 2,iVar2);
    }
    *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 140d9d8c4 FUN_140d9d8c4 body=191 status=ok
// SIG undefined FUN_140d9d8c4(void)

void FUN_140d9d8c4(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x7c);
    iVar2 = (int)param_1[1];
    iVar3 = ~uVar1 + iVar2;
    if (iVar3 != 0) {
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = iVar3;
      }
      memmove((void *)(*param_1 + (longlong)(int)uVar1 * 8),
              (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 + -1;
    *(undefined4 *)(param_2 + 0x7c) = 0xffffffff;
    if ((int)uVar1 < (int)param_1[1]) {
      *(uint *)(*(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) + 0x7c) = uVar1;
    }
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x90) = 0;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_140731e0c(param_1 + 2,iVar2);
    }
    *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 140d9d984 FUN_140d9d984 body=1015 status=ok
// SIG undefined FUN_140d9d984(void)

void FUN_140d9d984(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  *param_1 = &PTR_FUN_149f5add0;
  lVar6 = (longlong)*(int *)(param_1[0x59] + 0x6e0);
  if (lVar6 != 0) {
    lVar5 = *(longlong *)(param_1[0x59] + 0x6d8);
    uVar8 = 0;
    lVar7 = 0;
    do {
      if (*(undefined8 **)(lVar5 + uVar8) == param_1 + 0x50) {
        if ((~uVar8 & 0x7fffffff8) != 0) {
          *(undefined8 *)(lVar5 + (lVar7 >> 0x20) * 8) = 0;
          lVar6 = (longlong)*(int *)(param_1[0x59] + 0x6e0);
          if (lVar6 == 0) goto LAB_140d9dac1;
          lVar5 = *(longlong *)(param_1[0x59] + 0x6d8);
        }
        break;
      }
      lVar7 = lVar7 + 0x100000000;
      uVar8 = uVar8 + 8;
    } while (lVar6 * 8 - uVar8 != 0);
    uVar8 = 0;
    lVar7 = 0;
    do {
      if (*(undefined8 **)(lVar5 + uVar8) == param_1 + 0x53) {
        if ((~uVar8 & 0x7fffffff8) != 0) {
          *(undefined8 *)(lVar5 + (lVar7 >> 0x20) * 8) = 0;
          lVar6 = (longlong)*(int *)(param_1[0x59] + 0x6e0);
          if (lVar6 == 0) goto LAB_140d9dac1;
          lVar5 = *(longlong *)(param_1[0x59] + 0x6d8);
        }
        break;
      }
      lVar7 = lVar7 + 0x100000000;
      lVar2 = lVar5 + uVar8;
      uVar8 = uVar8 + 8;
    } while (lVar2 + 8 != lVar5 + lVar6 * 8);
    uVar8 = 0;
    lVar7 = 0;
    do {
      if (*(undefined8 **)(lVar5 + uVar8) == param_1 + 0x56) {
        if ((~uVar8 & 0x7fffffff8) != 0) {
          *(undefined8 *)(lVar5 + (lVar7 >> 0x20) * 8) = 0;
        }
        break;
      }
      lVar7 = lVar7 + 0x100000000;
      lVar2 = lVar5 + uVar8;
      uVar8 = uVar8 + 8;
    } while (lVar2 + 8 != lVar5 + lVar6 * 8);
  }
LAB_140d9dac1:
  FUN_140d9e2c6(param_1);
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x83];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
  }
  puVar3 = (undefined8 *)param_1[0x80];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a88ee(param_1 + 0x76);
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9dde4(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) goto LAB_140d9dc0d;
  while ((undefined8 *)param_1[99] != (undefined8 *)0x0) {
    param_1[99] = *(undefined8 *)param_1[99];
LAB_140d9dc0d:
    FUN_1400020a8();
  }
  while ((undefined8 *)param_1[0x61] != (undefined8 *)0x0) {
    param_1[0x61] = *(undefined8 *)param_1[0x61];
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_14006f3bd(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9ddb6(param_1 + 0x4a);
  FUN_1457a8924(param_1 + 0x20);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar4 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[6] != 0) {
    plVar4 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_140d9dd7b(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9dd7b(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9dd7b FUN_140d9dd7b body=58 status=ok
// SIG undefined FUN_140d9dd7b(void)

void FUN_140d9dd7b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d9ddb6 FUN_140d9ddb6 body=46 status=ok
// SIG undefined FUN_140d9ddb6(void)

void FUN_140d9ddb6(longlong param_1)

{
  FUN_140bd56f8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d9dde4 FUN_140d9dde4 body=52 status=ok
// SIG undefined FUN_140d9dde4(void)

void FUN_140d9dde4(longlong param_1,int param_2)

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



// FUNCTION 140d9de18 FUN_140d9de18 body=255 status=ok
// SIG undefined FUN_140d9de18(void)

undefined8 * FUN_140d9de18(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f5ae80;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0xf8;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    FUN_140d9df17(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d9df17 FUN_140d9df17 body=50 status=ok
// SIG undefined FUN_140d9df17(void)

void FUN_140d9df17(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140d9df4a FUN_140d9df4a body=38 status=ok
// SIG undefined FUN_140d9df4a(void)

undefined8 FUN_140d9df4a(undefined8 param_1,int param_2)

{
  FUN_140d9df70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d9df70 FUN_140d9df70 body=434 status=ok
// SIG undefined FUN_140d9df70(void)

void FUN_140d9df70(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_1402a351e(*(undefined8 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x180));
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != 0) {
    FUN_140d9df70(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9e122(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1449bab29(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d9e122 FUN_140d9e122 body=55 status=ok
// SIG undefined FUN_140d9e122(void)

void FUN_140d9e122(longlong *param_1)

{
  FUN_140484c2c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9e15a FUN_140d9e15a body=106 status=ok
// SIG undefined FUN_140d9e15a(void)

void FUN_140d9e15a(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[3];
  if (0 < iVar2) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if ((*(byte *)(*param_1 + 0x54 + lVar3) & 1) != 0) {
        lVar4 = *param_1 + lVar3;
        FUN_140d9d5b2(lVar4);
        pbVar1 = (byte *)(lVar4 + 0x54);
        *pbVar1 = *pbVar1 & 0xfe;
        iVar2 = (int)param_1[3];
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x58;
    } while (lVar5 < iVar2);
  }
  param_1[1] = *param_1;
  *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
  param_1[3] = -0x100000000;
  return;
}



// FUNCTION 140d9e1c4 FUN_140d9e1c4 body=115 status=ok
// SIG undefined FUN_140d9e1c4(void)

void FUN_140d9e1c4(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[3];
  if (0 < iVar2) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if ((*(byte *)(*param_1 + 0x9c + lVar3) & 1) != 0) {
        lVar4 = *param_1 + lVar3;
        FUN_140d9d5f6(lVar4);
        pbVar1 = (byte *)(lVar4 + 0x9c);
        *pbVar1 = *pbVar1 & 0xfe;
        iVar2 = (int)param_1[3];
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0xa0;
    } while (lVar5 < iVar2);
  }
  param_1[1] = *param_1;
  *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
  param_1[3] = -0x100000000;
  return;
}



// FUNCTION 140d9e238 FUN_140d9e238 body=142 status=ok
// SIG undefined FUN_140d9e238(void)

void FUN_140d9e238(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (int)param_1[3];
  if (0 < iVar6) {
    lVar4 = 0x4c;
    lVar5 = 0;
    do {
      lVar2 = *param_1;
      bVar1 = *(byte *)(lVar2 + lVar4);
      if ((bVar1 & 1) != 0) {
        lVar3 = *(longlong *)(lVar2 + -0x4c + lVar4);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x10) = 0;
          *(undefined8 *)(lVar2 + -0x4c + lVar4) = 0;
          bVar1 = *(byte *)(lVar2 + lVar4);
        }
        *(undefined4 *)(lVar2 + -0x2c + lVar4) = 0xffffffff;
        *(undefined4 *)(lVar2 + -0x1c + lVar4) = 0xffffffff;
        *(undefined4 *)(lVar2 + -0x14 + lVar4) = 0xffffffff;
        *(undefined4 *)(lVar2 + -0xc + lVar4) = 0;
        *(byte *)(lVar2 + lVar4) = bVar1 & 0xfe;
        iVar6 = (int)param_1[3];
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x50;
    } while (lVar5 < iVar6);
  }
  param_1[1] = *param_1;
  *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
  param_1[3] = -0x100000000;
  return;
}



// FUNCTION 140d9e2c6 FUN_140d9e2c6 body=151 status=ok
// SIG undefined FUN_140d9e2c6(void)

void FUN_140d9e2c6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [4];
  longlong *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x400);
  if (lVar1 != 0) {
    local_20 = (longlong *)0x0;
    local_18 = 0x400000001;
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    local_40[0] = lVar1;
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_40,0xff);
    plVar2 = local_20;
    if (local_20 == (longlong *)0x0) {
      plVar2 = local_40;
    }
    FUN_144717c65(plVar2,local_18 & 0xffffffff);
    if (local_20 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9e35e FUN_140d9e35e body=282 status=ok
// SIG undefined FUN_140d9e35e(void)

undefined8 * FUN_140d9e35e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1429d432e);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 140d9e4ca FUN_140d9e4ca body=4464 status=ok
// SIG undefined FUN_140d9e4ca(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140d9e4ca(undefined8 param_1,byte param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  wchar_t wVar4;
  uint uVar5;
  wchar_t ******ppppppwVar6;
  wchar_t ***_Src;
  wchar_t **ppwVar7;
  wchar_t **ppwVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  wchar_t ****ppppwVar17;
  int iVar18;
  int iVar19;
  wchar_t ******ppppppwVar20;
  wchar_t *****pppppwVar21;
  ulonglong uVar22;
  wchar_t *******pppppppwVar23;
  undefined8 *puVar24;
  wchar_t *****pppppwVar25;
  wchar_t *pwVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  wchar_t *******pppppppwVar29;
  wchar_t ****ppppwVar30;
  longlong lVar31;
  ushort uVar32;
  ushort uVar33;
  uint uVar34;
  PSRWLOCK SRWLock;
  int iVar35;
  ulonglong uVar36;
  longlong *plVar37;
  wchar_t ****ppppwVar38;
  bool bVar39;
  undefined1 auStack_228 [32];
  wchar_t *******local_208;
  wchar_t *******local_200;
  wchar_t ****local_1f8;
  ulonglong local_1f0;
  int local_1e4;
  PSRWLOCK local_1e0;
  wchar_t *******local_1d8;
  uint local_1cc;
  wchar_t ****local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  int local_190;
  longlong local_188 [2];
  longlong local_178 [2];
  undefined8 *local_168;
  int local_160;
  wchar_t **local_158;
  wchar_t **local_150;
  wchar_t *******local_148;
  undefined8 uStack_140;
  wchar_t *****local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  wchar_t *****local_120;
  undefined8 local_118;
  wchar_t *****local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  wchar_t *****local_f0;
  undefined8 local_e8;
  wchar_t *****local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  wchar_t *****local_80;
  undefined8 local_78;
  wchar_t *****local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1448d5e3c(&local_148);
  ppppppwVar6 = local_148[0x12];
  SRWLock = (PSRWLOCK)(ppppppwVar6 + 0x22);
  AcquireSRWLockShared(SRWLock);
  plVar37 = uStack_140;
  if (uStack_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_140)(uStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar37 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar37 + 0x10))(plVar37);
      }
    }
  }
  uVar34 = (uint)param_2;
  if (*(int *)(ppppppwVar6 + 0x11) != *(int *)((longlong)ppppppwVar6 + 0xb4)) {
    ppppppwVar20 = ppppppwVar6 + 0x17;
    if ((wchar_t ******)ppppppwVar6[0x18] != (wchar_t ******)0x0) {
      ppppppwVar20 = (wchar_t ******)ppppppwVar6[0x18];
    }
    iVar14 = *(int *)((longlong)ppppppwVar20 +
                     (ulonglong)(*(int *)(ppppppwVar6 + 0x19) + 0x7fU & uVar34) * 4);
    if (iVar14 != -1) {
      do {
        pppppwVar25 = ppppppwVar6[0x10] + (longlong)iVar14 * 4;
        if (*(byte *)(ppppppwVar6[0x10] + (longlong)iVar14 * 4) == param_2) goto LAB_140d9e59d;
        iVar14 = *(int *)(pppppwVar25 + 3);
      } while (iVar14 != -1);
    }
  }
  pppppwVar25 = (wchar_t *****)0x0;
LAB_140d9e59d:
  pppppwVar21 = pppppwVar25 + 1;
  if (pppppwVar25 == (wchar_t *****)0x0) {
    pppppwVar21 = (wchar_t *****)0x0;
  }
  if (param_2 == 1) {
    lVar16 = 0xc0;
  }
  else if (uVar34 == 4) {
    lVar16 = 0x180;
  }
  else {
    if (uVar34 != 2) goto LAB_140d9e759;
    lVar16 = 0x120;
  }
  pppppppwVar29 = (wchar_t *******)(param_3 + lVar16);
  if (pppppppwVar29 == (wchar_t *******)0x0) goto LAB_140d9e759;
  if ((pppppwVar21 == (wchar_t *****)0x0) ||
     (ppppwVar38 = *pppppwVar21, ppppwVar38 == (wchar_t ****)0x0)) {
    FUN_1400b22c2(&local_148,&DAT_149e02088);
    if (&local_148 == (wchar_t ********)pppppppwVar29) {
      if (local_148 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*pppppppwVar29 != (wchar_t ******)0x0) {
        FUN_1400020a8();
      }
      *pppppppwVar29 = (wchar_t ******)local_148;
      local_148 = (wchar_t *******)0x0;
      *(int *)(pppppppwVar29 + 1) = (int)uStack_140;
      *(undefined4 *)((longlong)pppppppwVar29 + 0xc) = uStack_140._4_4_;
    }
    FUN_1400b22c2(&local_148,&DAT_149e02088);
    if ((wchar_t ********)(pppppppwVar29 + 2) == &local_148) {
      if (local_148 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (pppppppwVar29[2] != (wchar_t ******)0x0) {
        FUN_1400020a8();
      }
      pppppppwVar29[2] = (wchar_t ******)local_148;
      local_148 = (wchar_t *******)0x0;
      *(int *)(pppppppwVar29 + 3) = (int)uStack_140;
      *(undefined4 *)((longlong)pppppppwVar29 + 0x1c) = uStack_140._4_4_;
    }
    FUN_1400b22c2(&local_148,&DAT_149e02088);
    if ((wchar_t ********)(pppppppwVar29 + 4) == &local_148) {
      if (local_148 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (pppppppwVar29[4] != (wchar_t ******)0x0) {
        FUN_1400020a8();
      }
      pppppppwVar29[4] = (wchar_t ******)local_148;
      local_148 = (wchar_t *******)0x0;
      *(int *)(pppppppwVar29 + 5) = (int)uStack_140;
      *(undefined4 *)((longlong)pppppppwVar29 + 0x2c) = uStack_140._4_4_;
    }
    FUN_1400b22c2(&local_148,&DAT_149e02088);
    if ((wchar_t ********)(pppppppwVar29 + 6) == &local_148) {
      if (local_148 != (wchar_t *******)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (pppppppwVar29[6] != (wchar_t ******)0x0) {
        FUN_1400020a8();
      }
      pppppppwVar29[6] = (wchar_t ******)local_148;
      local_148 = (wchar_t *******)0x0;
      *(int *)(pppppppwVar29 + 7) = (int)uStack_140;
      *(undefined4 *)((longlong)pppppppwVar29 + 0x3c) = uStack_140._4_4_;
    }
    *(undefined1 *)(pppppppwVar29 + 8) = 0;
    iVar14 = *(int *)((longlong)pppppppwVar29 + 0x54);
    FUN_140d9f63b(pppppppwVar29[9],*(undefined4 *)(pppppppwVar29 + 10));
    *(undefined4 *)(pppppppwVar29 + 10) = 0;
    if ((iVar14 < 0) && (*(int *)((longlong)pppppppwVar29 + 0x54) != 0)) {
      FUN_148e79ee2(pppppppwVar29 + 9);
    }
    pppppppwVar29[0xb] = (wchar_t ******)0x0;
    goto LAB_140d9e759;
  }
  local_1f8 = ppppwVar38;
  FUN_1408226d0((longlong)ppppwVar38 + 0x5c,&local_148,1);
  pppppppwVar23 = local_148;
  iVar14 = (int)uStack_140;
  uVar34 = (int)uStack_140 - 1;
  if ((int)uStack_140 == 0) {
    uVar34 = 0;
  }
  if (0 < (int)uVar34) {
    uVar22 = 0;
    do {
      wVar4 = *(wchar_t *)((longlong)local_148 + uVar22 * 2);
      *(wchar_t *)((longlong)local_148 + uVar22 * 2) =
           (ushort)((ushort)wVar4 - 0x41 < 0x1a) * 0x20 + wVar4;
      uVar22 = uVar22 + 1;
    } while (uVar34 != uVar22);
  }
  uVar13 = uStack_140._4_4_;
  local_148 = (wchar_t *******)0x0;
  uStack_140 = (longlong *)0x0;
  if (*pppppppwVar29 == (wchar_t ******)0x0) {
    *pppppppwVar29 = (wchar_t ******)pppppppwVar23;
    *(int *)(pppppppwVar29 + 1) = iVar14;
    *(undefined4 *)((longlong)pppppppwVar29 + 0xc) = uVar13;
  }
  else {
    FUN_1400020a8();
    *pppppppwVar29 = (wchar_t ******)pppppppwVar23;
    *(int *)(pppppppwVar29 + 1) = iVar14;
    *(undefined4 *)((longlong)pppppppwVar29 + 0xc) = uVar13;
    if (local_148 != (wchar_t *******)0x0) {
      FUN_1400020a8();
    }
  }
  ppppwVar38 = local_1f8;
  FUN_140390f7a(local_1f8 + 0xf);
  pppppppwVar23 = pppppppwVar29 + 4;
  if (pppppppwVar23 != (wchar_t *******)(ppppwVar38 + 0x14)) {
    iVar14 = *(int *)(ppppwVar38 + 0x15);
    _Src = ppppwVar38[0x14];
    *(int *)(pppppppwVar29 + 5) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)pppppppwVar29 + 0x2c) == 0) {
      ((wchar_t *)((longlong)pppppppwVar29 + 0x2c))[0] = L'\0';
      ((wchar_t *)((longlong)pppppppwVar29 + 0x2c))[1] = L'\0';
    }
    else {
      FUN_1446dd670(pppppppwVar23);
      if (iVar14 != 0) {
        memcpy(*pppppppwVar23,_Src,(longlong)iVar14 * 2);
      }
    }
  }
  *(undefined4 *)((longlong)pppppppwVar29 + 0x5c) = *(undefined4 *)(ppppwVar38 + 0x35);
  if (DAT_14cb88980 != 0) {
    FUN_144a78877((undefined4)DAT_14cb88978,DAT_14cb88980);
  }
  ppppwVar38 = ppppwVar38 + 1;
  iVar14 = FUN_140d9f664(ppppwVar38);
  lVar16 = 0;
  if (iVar14 != -1) {
    lVar16 = (longlong)*ppppwVar38 + (longlong)iVar14 * 0x1c;
  }
  puVar27 = (undefined8 *)(lVar16 + 0xc);
  if (lVar16 == 0) {
    puVar27 = (undefined8 *)0x0;
  }
  if (DAT_14cb889d0 != 0) {
    FUN_144a78877((undefined4)DAT_14cb889c8,DAT_14cb889d0);
  }
  iVar14 = FUN_140d9f664(ppppwVar38);
  lVar16 = 0;
  if (iVar14 != -1) {
    lVar16 = (longlong)*ppppwVar38 + (longlong)iVar14 * 0x1c;
  }
  lVar31 = lVar16 + 0xc;
  if (lVar16 == 0) {
    lVar31 = 0;
  }
  if (puVar27 == (undefined8 *)0x0) {
    puVar24 = &DAT_14cb888b0;
    plVar37 = local_178;
  }
  else {
    plVar37 = local_188;
    puVar24 = puVar27;
  }
  FUN_1400021e4(puVar24,plVar37);
  FUN_144a6c01e(plVar37,&local_148);
  if (pppppppwVar29[6] != (wchar_t ******)0x0) {
    FUN_1400020a8();
  }
  pppppppwVar29[6] = (wchar_t ******)local_148;
  local_148 = (wchar_t *******)0x0;
  *(int *)(pppppppwVar29 + 7) = (int)uStack_140;
  *(undefined4 *)((longlong)pppppppwVar29 + 0x3c) = uStack_140._4_4_;
  local_208 = pppppppwVar29;
  local_1e0 = SRWLock;
  if (puVar27 == (undefined8 *)0x0) {
    if (local_178[0] != 0) {
      FUN_1400020a8();
      pppppppwVar29 = local_208;
      SRWLock = local_1e0;
    }
  }
  else if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar31 == 0) {
    *(undefined4 *)(pppppppwVar29 + 0xb) = 0;
  }
  else {
    FUN_1400021e4(lVar31,&local_148);
    pppppppwVar23 = local_148;
    if ((int)uStack_140 == 0) {
      pppppppwVar23 = (wchar_t *******)&DAT_149dfb77a;
    }
    iVar14 = _wtoi((wchar_t *)pppppppwVar23);
    *(int *)(pppppppwVar29 + 0xb) = iVar14;
    if (local_148 != (wchar_t *******)0x0) {
      FUN_1400020a8();
    }
  }
  local_200 = pppppppwVar29 + 0xb;
  FUN_1400021e4(&DAT_14cb888c8);
  iVar14 = *(int *)(pppppppwVar29 + 7);
  if (iVar14 == (int)uStack_140) {
    if (1 < iVar14) {
      lVar16 = 0;
      while( true ) {
        uVar32 = *(ushort *)((longlong)pppppppwVar29[6] + lVar16);
        uVar22 = (ulonglong)uVar32;
        uVar33 = *(ushort *)((longlong)local_148 + lVar16);
        if (uVar32 != uVar33) break;
        if (uVar32 == 0) goto LAB_140d9eb6c;
LAB_140d9ea95:
        lVar16 = lVar16 + 2;
      }
      if ((uVar33 | uVar32) < 0x80) {
        uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
        uVar28 = (ulonglong)uVar33;
        uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
        if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar28]) goto LAB_140d9ea95;
      }
      if (uVar32 != uVar33) goto LAB_140d9eac5;
    }
LAB_140d9eb6c:
    *(undefined1 *)(pppppppwVar29 + 8) = 1;
  }
  else {
    if ((int)uStack_140 + iVar14 == 1) goto LAB_140d9eb6c;
LAB_140d9eac5:
    FUN_1400021e4(&DAT_14cb88928);
    iVar14 = *(int *)(pppppppwVar29 + 7);
    if (iVar14 == (int)local_150) {
      if (1 < iVar14) {
        lVar16 = 0;
        while( true ) {
          uVar32 = *(ushort *)((longlong)pppppppwVar29[6] + lVar16);
          uVar22 = (ulonglong)uVar32;
          uVar33 = *(ushort *)((longlong)local_158 + lVar16);
          if (uVar32 != uVar33) break;
          if (uVar32 == 0) goto LAB_140d9eb49;
LAB_140d9eb19:
          lVar16 = lVar16 + 2;
        }
        if ((uVar33 | uVar32) < 0x80) {
          uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
          uVar28 = (ulonglong)uVar33;
          uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
          if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar28]) goto LAB_140d9eb19;
        }
        if (uVar32 != uVar33) goto LAB_140d9f4cc;
      }
LAB_140d9eb49:
      *(undefined1 *)(pppppppwVar29 + 8) = 1;
    }
    else {
      if ((int)local_150 + iVar14 == 1) goto LAB_140d9eb49;
LAB_140d9f4cc:
      FUN_1400021e4(&DAT_14cb888d0);
      iVar14 = *(int *)(pppppppwVar29 + 7);
      if (iVar14 == local_160) {
        if (1 < iVar14) {
          lVar16 = 0;
          while( true ) {
            uVar32 = *(ushort *)((longlong)local_208[6] + lVar16);
            uVar22 = (ulonglong)uVar32;
            uVar33 = *(ushort *)((longlong)local_168 + lVar16);
            if (uVar32 != uVar33) break;
            if (uVar32 == 0) goto LAB_140d9f551;
LAB_140d9f525:
            lVar16 = lVar16 + 2;
          }
          if ((uVar33 | uVar32) < 0x80) {
            uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
            uVar28 = (ulonglong)uVar33;
            uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
            if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar28]) goto LAB_140d9f525;
          }
          if (uVar32 != uVar33) goto LAB_140d9f582;
        }
LAB_140d9f551:
        *(undefined1 *)(local_208 + 8) = 1;
      }
      else {
        if (local_160 + iVar14 == 1) goto LAB_140d9f551;
LAB_140d9f582:
        FUN_1400021e4(&DAT_14cb88920,&local_198);
        iVar14 = *(int *)(local_208 + 7);
        if (iVar14 == local_190) {
          bVar39 = true;
          if (1 < iVar14) {
            lVar16 = 0;
            while( true ) {
              uVar32 = *(ushort *)((longlong)local_208[6] + lVar16);
              uVar34 = (uint)uVar32;
              uVar33 = *(ushort *)(local_198 + lVar16);
              uVar15 = (uint)uVar33;
              if (uVar32 != uVar33) {
                if ((uVar33 | uVar32) < 0x80) {
                  uVar34 = (uint)(byte)(&DAT_149e05da0)[uVar32];
                  uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar33];
                  if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar33]) goto LAB_140d9f5de;
                }
                iVar14 = uVar34 - uVar15;
                goto LAB_140d9f634;
              }
              if (uVar32 == 0) break;
LAB_140d9f5de:
              lVar16 = lVar16 + 2;
            }
            iVar14 = 0;
LAB_140d9f634:
            bVar39 = iVar14 == 0;
          }
        }
        else {
          bVar39 = local_190 + iVar14 == 1;
        }
        *(bool *)(local_208 + 8) = bVar39;
        if (local_198 != 0) {
          FUN_1400020a8();
        }
      }
      pppppppwVar29 = local_208;
      SRWLock = local_1e0;
      if (local_168 != (undefined8 *)0x0) {
        FUN_1400020a8();
        pppppppwVar29 = local_208;
        SRWLock = local_1e0;
      }
    }
    if (local_158 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_148 != (wchar_t *******)0x0) {
    FUN_1400020a8();
  }
  local_1d8 = pppppppwVar29 + 9;
  iVar14 = *(int *)((longlong)pppppppwVar29 + 0x54);
  FUN_140d9f63b(pppppppwVar29[9],*(undefined4 *)(pppppppwVar29 + 10));
  *(undefined4 *)(pppppppwVar29 + 10) = 0;
  if ((iVar14 < 0) && (*(int *)((longlong)pppppppwVar29 + 0x54) != 0)) {
    FUN_148e79ee2(local_1d8);
  }
  ppppwVar38 = local_1f8 + 0x19;
  uVar34 = *(uint *)(local_1f8 + 0x1c);
  uVar22 = (ulonglong)uVar34;
  if (uVar34 == 0) {
    uVar28 = 1;
    uVar36 = 0;
    uVar15 = 0;
    iVar14 = 0;
  }
  else {
    ppppwVar17 = (wchar_t ****)local_1f8[0x1b];
    if ((wchar_t ****)local_1f8[0x1b] == (wchar_t ****)0x0) {
      ppppwVar17 = ppppwVar38;
    }
    uVar15 = *(uint *)ppppwVar17;
    if (uVar15 == 0) {
      iVar14 = uVar34 + 0x1e;
      if (-1 < (int)(uVar34 - 1)) {
        iVar14 = uVar34 - 1;
      }
      uVar36 = 0;
      uVar28 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar28 = uVar36;
      }
      iVar14 = 0;
      do {
        if (uVar28 == uVar36) goto LAB_140d9e759;
        iVar14 = iVar14 + 0x20;
        uVar15 = *(uint *)((longlong)ppppwVar17 + (uVar36 + 1) * 4);
        uVar36 = uVar36 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar36 = 0;
      iVar14 = 0;
    }
    uVar28 = (ulonglong)(-uVar15 & uVar15);
    uVar3 = uVar28 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar15 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar34 <= (int)uVar15) {
      uVar15 = uVar34;
    }
  }
  if (uVar15 != uVar34) {
    uVar34 = 0xffffffff;
    ppppwVar17 = local_1f8;
    pppppppwVar23 = local_200;
    local_1f0 = uVar22;
    local_1c8 = ppppwVar38;
    do {
      ppwVar7 = ppppwVar17[0x17][(longlong)(int)uVar15 * 5 + 2];
      ppwVar8 = ppppwVar17[0x17][(longlong)(int)uVar15 * 5 + 3];
      if (ppwVar8 != (wchar_t **)0x0) {
        LOCK();
        *(int *)(ppwVar8 + 1) = *(int *)(ppwVar8 + 1) + 1;
        UNLOCK();
      }
      local_1e4 = iVar14;
      local_1cc = uVar34;
      if ((*(int *)((longlong)ppwVar7 + 0x6c) <= *(int *)pppppppwVar23) &&
         (*(int *)pppppppwVar23 <= *(int *)(ppwVar7 + 0xe))) {
        if (ppwVar8 != (wchar_t **)0x0) {
          LOCK();
          *(int *)(ppwVar8 + 1) = *(int *)(ppwVar8 + 1) + 1;
          UNLOCK();
        }
        local_148 = (wchar_t *******)0x0;
        uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffffffff0000);
        local_138 = (wchar_t *****)0x0;
        uStack_130 = 0;
        local_128 = 0;
        FUN_140056680(&local_120,&DAT_149dfb77a);
        FUN_1400b22c2(&local_110,"Incomplete");
        local_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        FUN_1400b22c2(&local_f0,&DAT_149e02088);
        local_e0 = (wchar_t *****)0x0;
        local_d8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_a4 = 0xffffffff00000080;
        local_9c = 0;
        local_90 = 0;
        local_88 = 0;
        FUN_1400b22c2(&local_80,&DAT_149e02088);
        FUN_1400b22c2(&local_70,&DAT_149e02088);
        if (ppwVar7 != (wchar_t **)0x0) {
          if (ppwVar8 != (wchar_t **)0x0) {
            LOCK();
            *(int *)(ppwVar8 + 1) = *(int *)(ppwVar8 + 1) + 1;
            UNLOCK();
          }
          local_158 = ppwVar7;
          local_150 = ppwVar8;
          FUN_140d9fb88(&local_148,&local_158);
          uVar12 = DAT_14cb88948;
          uVar11 = DAT_14cb88940;
          uVar10 = DAT_14cb88938;
          uVar9 = DAT_14cb88930;
          local_148 = pppppppwVar29;
          if (*(char *)((longlong)ppwVar7 + 0x94) == '\x01') {
            uStack_140._0_2_ = (ushort)(byte)uStack_140;
            pppppppwVar29 = local_208;
            ppppwVar17 = local_1f8;
          }
          else {
            local_1a0 = DAT_14cb88950;
            local_1a8 = DAT_14cb88958;
            local_1b0 = DAT_14cb88960;
            local_1b8 = DAT_14cb88968;
            local_1c0 = DAT_14cb88970;
            local_168 = (undefined8 *)0x0;
            local_160 = 9;
            FUN_1401b309e(&local_168,9,0);
            *local_168 = uVar9;
            local_168[1] = uVar10;
            local_168[2] = uVar11;
            local_168[3] = uVar12;
            local_168[4] = local_1a0;
            local_168[5] = local_1a8;
            local_168[6] = local_1b0;
            local_168[7] = local_1b8;
            local_168[8] = local_1c0;
            if (DAT_14cb88980 != 0) {
              FUN_144a78877((undefined4)DAT_14cb88978,DAT_14cb88980);
            }
            iVar14 = FUN_140d9f664(ppwVar7 + 1);
            ppppwVar17 = local_1f8;
            pppppppwVar29 = local_208;
            if (iVar14 == -1) {
LAB_140d9f00e:
              bVar39 = false;
            }
            else {
              pwVar26 = ppwVar7[1];
              bVar39 = false;
              if ((pwVar26 + (longlong)iVar14 * 0xe != (wchar_t *)0x0) &&
                 (pwVar26 = pwVar26 + (longlong)iVar14 * 0xeU + 6, pwVar26 != (wchar_t *)0x0)) {
                if ((longlong)local_160 != 0) {
                  lVar16 = 0;
                  do {
                    if (*(longlong *)((longlong)local_168 + lVar16) == *(longlong *)pwVar26) {
                      if (*(int *)((longlong)ppwVar7 + 0x6c) <= *(int *)(local_148 + 0xb)) {
                        bVar39 = *(int *)(local_148 + 0xb) <= *(int *)(ppwVar7 + 0xe);
                        goto LAB_140d9f010;
                      }
                      break;
                    }
                    lVar16 = lVar16 + 8;
                  } while ((longlong)local_160 * 8 != lVar16);
                }
                goto LAB_140d9f00e;
              }
            }
LAB_140d9f010:
            uStack_140._0_2_ = CONCAT11(bVar39,(byte)uStack_140);
            if (local_168 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        if (ppwVar8 != (wchar_t **)0x0) {
          LOCK();
          ppwVar7 = ppwVar8 + 1;
          *(int *)ppwVar7 = *(int *)ppwVar7 + -1;
          UNLOCK();
          if (*(int *)ppwVar7 == 0) {
            (**(code **)*ppwVar8)(ppwVar8);
            LOCK();
            pwVar26 = (wchar_t *)((longlong)ppwVar8 + 0xc);
            *(int *)pwVar26 = *(int *)pwVar26 + -1;
            UNLOCK();
            if (*(int *)pwVar26 == 0) {
              (**(code **)(*ppwVar8 + 8))(ppwVar8);
            }
          }
        }
        SRWLock = local_1e0;
        iVar14 = *(int *)(pppppppwVar29 + 10);
        *(uint *)(pppppppwVar29 + 10) = iVar14 + 1U;
        if (*(uint *)((longlong)pppppppwVar29 + 0x54) < iVar14 + 1U) {
          FUN_1457a8ef2(local_1d8,iVar14);
        }
        ppppppwVar6 = *local_1d8 + (longlong)iVar14 * 0x1d;
        *(ushort *)(ppppppwVar6 + 1) = (ushort)uStack_140;
        *ppppppwVar6 = (wchar_t *****)local_148;
        ppppppwVar6[2] = (wchar_t *****)0x0;
        ppppppwVar6[2] = local_138;
        local_138 = (wchar_t *****)0x0;
        *(undefined4 *)(ppppppwVar6 + 3) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)ppppppwVar6 + 0x1c) = uStack_130._4_4_;
        uStack_130 = 0;
        *(undefined1 *)(ppppppwVar6 + 4) = local_128;
        ppppppwVar6[5] = (wchar_t *****)0x0;
        ppppppwVar6[5] = local_120;
        local_120 = (wchar_t *****)0x0;
        *(undefined4 *)(ppppppwVar6 + 6) = (undefined4)local_118;
        *(undefined4 *)((longlong)ppppppwVar6 + 0x34) = local_118._4_4_;
        local_118 = 0;
        ppppppwVar6[7] = (wchar_t *****)0x0;
        ppppppwVar6[7] = local_110;
        local_110 = (wchar_t *****)0x0;
        *(undefined4 *)(ppppppwVar6 + 8) = (undefined4)local_108;
        *(undefined4 *)((longlong)ppppppwVar6 + 0x44) = local_108._4_4_;
        local_108 = 0;
        *(undefined4 *)(ppppppwVar6 + 10) = uStack_f8;
        ppppppwVar6[9] = (wchar_t *****)CONCAT44(uStack_fc,CONCAT22(uStack_fe,local_100));
        ppppppwVar6[0xb] = (wchar_t *****)0x0;
        ppppppwVar6[0xb] = local_f0;
        local_f0 = (wchar_t *****)0x0;
        *(undefined4 *)(ppppppwVar6 + 0xc) = (undefined4)local_e8;
        *(undefined4 *)((longlong)ppppppwVar6 + 100) = local_e8._4_4_;
        local_e8 = 0;
        *(undefined4 *)(ppppppwVar6 + 0xe) = local_d8;
        ppppppwVar6[0xd] = local_e0;
        FUN_140d9f79e(ppppppwVar6 + 0xf,&local_d0);
        ppppppwVar6[0x19] = (wchar_t *****)0x0;
        ppppppwVar6[0x19] = local_80;
        local_80 = (wchar_t *****)0x0;
        *(undefined4 *)(ppppppwVar6 + 0x1a) = (undefined4)local_78;
        *(undefined4 *)((longlong)ppppppwVar6 + 0xd4) = local_78._4_4_;
        local_78 = 0;
        ppppppwVar6[0x1b] = (wchar_t *****)0x0;
        ppppppwVar6[0x1b] = local_70;
        local_70 = (wchar_t *****)0x0;
        *(undefined4 *)(ppppppwVar6 + 0x1c) = (undefined4)local_68;
        *(undefined4 *)((longlong)ppppppwVar6 + 0xe4) = local_68._4_4_;
        local_68 = 0;
        FUN_140d9f6ca(&local_148);
        uVar22 = local_1f0;
        pppppppwVar23 = local_200;
        ppppwVar38 = local_1c8;
      }
      if (ppwVar8 != (wchar_t **)0x0) {
        LOCK();
        ppwVar7 = ppwVar8 + 1;
        *(int *)ppwVar7 = *(int *)ppwVar7 + -1;
        UNLOCK();
        if (*(int *)ppwVar7 == 0) {
          (**(code **)*ppwVar8)(ppwVar8);
          LOCK();
          pwVar26 = (wchar_t *)((longlong)ppwVar8 + 0xc);
          *(int *)pwVar26 = *(int *)pwVar26 + -1;
          UNLOCK();
          uVar22 = local_1f0;
          pppppppwVar23 = local_200;
          if (*(int *)pwVar26 == 0) {
            (**(code **)(*ppwVar8 + 8))(ppwVar8);
            uVar22 = local_1f0;
            pppppppwVar23 = local_200;
          }
        }
      }
      uVar34 = local_1cc & ~(uint)uVar28;
      ppppwVar30 = (wchar_t ****)ppppwVar17[0x1b];
      if ((wchar_t ****)ppppwVar17[0x1b] == (wchar_t ****)0x0) {
        ppppwVar30 = ppppwVar38;
      }
      uVar5 = *(uint *)(ppppwVar17 + 0x1c);
      iVar35 = (int)uVar36;
      lVar16 = (longlong)iVar35;
      uVar15 = *(uint *)((longlong)ppppwVar30 + lVar16 * 4) & uVar34;
      iVar14 = local_1e4;
      if (uVar15 == 0) {
        iVar18 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar18 = uVar5 - 1;
        }
        iVar18 = iVar18 >> 5;
        iVar14 = local_1e4 + 0x20;
        iVar19 = iVar18;
        if (iVar18 < iVar35) {
          iVar19 = iVar35;
        }
        uVar22 = local_1f0;
        if (iVar35 < iVar18) {
          lVar31 = 0;
          do {
            uVar15 = *(uint *)((longlong)ppppwVar30 + (lVar16 + lVar31 + 1) * 4);
            if (uVar15 != 0) {
              uVar36 = (ulonglong)(iVar35 + (int)lVar31 + 1);
              uVar34 = 0xffffffff;
              goto LAB_140d9ed20;
            }
            iVar14 = iVar14 + 0x20;
            lVar31 = lVar31 + 1;
          } while (iVar19 - lVar16 != lVar31);
          uVar34 = 0xffffffff;
          iVar35 = iVar19;
        }
        uVar36 = (ulonglong)(iVar35 + 1);
        pppppppwVar29 = local_208;
        ppppwVar17 = local_1f8;
        pppppppwVar23 = local_200;
        SRWLock = local_1e0;
        ppppwVar38 = local_1c8;
        uVar15 = uVar5;
      }
      else {
LAB_140d9ed20:
        uVar28 = (ulonglong)(-uVar15 & uVar15);
        uVar3 = uVar28 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar15 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar15) {
          uVar15 = uVar5;
        }
      }
    } while (uVar15 != (uint)uVar22);
  }
LAB_140d9e759:
  ReleaseSRWLockShared(SRWLock);
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d9f63b FUN_140d9f63b body=41 status=ok
// SIG undefined FUN_140d9f63b(void)

void FUN_140d9f63b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d9f6ca(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 140d9f664 FUN_140d9f664 body=102 status=ok
// SIG undefined FUN_140d9f664(void)

int FUN_140d9f664(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + lVar3 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140d9f6ca FUN_140d9f6ca body=155 status=ok
// SIG undefined FUN_140d9f6ca(void)

void FUN_140d9f6ca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9f766(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9f766 FUN_140d9f766 body=55 status=ok
// SIG undefined FUN_140d9f766(void)

void FUN_140d9f766(longlong *param_1)

{
  FUN_140d9f81c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d9f79e FUN_140d9f79e body=125 status=ok
// SIG undefined FUN_140d9f79e(void)

undefined8 * FUN_140d9f79e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140d9f9b6();
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



// FUNCTION 140d9f81c FUN_140d9f81c body=409 status=ok
// SIG undefined FUN_140d9f81c(void)

void FUN_140d9f81c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d9f9b6 FUN_140d9f9b6 body=464 status=ok
// SIG undefined FUN_140d9f9b6(void)

longlong * FUN_140d9f9b6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
        if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x28) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d9fb88 FUN_140d9fb88 body=1714 status=ok
// SIG undefined FUN_140d9fb88(void)

void FUN_140d9fb88(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  longlong *local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == 0) goto LAB_140d9fe8a;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(*param_2 + 0x58);
  FUN_1408226d0(*param_2 + 0x5c,&local_b0,1);
  plVar15 = local_b0;
  iVar9 = (int)uStack_a8;
  uVar8 = (int)uStack_a8 - 1;
  if ((int)uStack_a8 == 0) {
    uVar8 = 0;
  }
  if (0 < (int)uVar8) {
    uVar13 = 0;
    do {
      uVar3 = *(ushort *)((longlong)local_b0 + uVar13 * 2);
      *(ushort *)((longlong)local_b0 + uVar13 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
      uVar13 = uVar13 + 1;
    } while (uVar8 != uVar13);
  }
  uVar6 = uStack_a8._4_4_;
  local_b0 = (longlong *)0x0;
  uStack_a8 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(longlong **)(param_1 + 0x10) = plVar15;
    *(int *)(param_1 + 0x18) = iVar9;
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
  }
  else {
    FUN_1400020a8();
    *(longlong **)(param_1 + 0x10) = plVar15;
    *(int *)(param_1 + 0x18) = iVar9;
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(*param_2 + 0x68);
  iVar9 = *(int *)(*param_2 + 0x80);
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  FUN_1402980a2(param_1 + 0x28,*(undefined8 *)(*param_2 + 0x78),iVar10);
  FUN_1400021e4(*param_2 + 0x98,&local_b0);
  if ((longlong **)(param_1 + 200) == &local_b0) {
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_1 + 200) = local_b0;
    local_b0 = (longlong *)0x0;
    *(int *)(param_1 + 0xd0) = (int)uStack_a8;
    *(uint *)(param_1 + 0xd4) = uStack_a8._4_4_;
  }
  FUN_1400021e4(*param_2 + 0xa0,&local_b0);
  if ((longlong **)(param_1 + 0xd8) == &local_b0) {
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_1 + 0xd8) = local_b0;
    local_b0 = (longlong *)0x0;
    *(int *)(param_1 + 0xe0) = (int)uStack_a8;
    *(uint *)(param_1 + 0xe4) = uStack_a8._4_4_;
  }
  lVar14 = *param_2;
  if (DAT_14cb88980 != 0) {
    FUN_144a78877((undefined4)DAT_14cb88978,DAT_14cb88980);
  }
  iVar9 = FUN_140d9f664((longlong *)(lVar14 + 8));
  if (iVar9 == -1) {
LAB_140d9fecb:
    plVar15 = local_78;
    FUN_1400021e4(&DAT_14cb888e0,plVar15);
    bVar5 = true;
  }
  else {
    lVar14 = *(longlong *)(lVar14 + 8);
    if ((lVar14 + (longlong)iVar9 * 0x1c == 0) ||
       (lVar14 = lVar14 + (longlong)iVar9 * 0x1c + 0xc, lVar14 == 0)) goto LAB_140d9fecb;
    plVar15 = local_88;
    FUN_1400021e4(lVar14,plVar15);
    bVar5 = false;
  }
  FUN_144a6c01e(plVar15,&local_b0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(longlong **)(param_1 + 0x38) = local_b0;
  local_b0 = (longlong *)0x0;
  *(int *)(param_1 + 0x40) = (int)uStack_a8;
  *(uint *)(param_1 + 0x44) = uStack_a8._4_4_;
  if (!bVar5) {
    local_78[0] = local_88[0];
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = *param_2;
  plVar15 = (longlong *)(lVar4 + 0xa8);
  lVar14 = lVar4 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  iVar9 = 0;
  uStack_60 = lVar14;
  if (*(int *)(lVar4 + 0xd0) != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(lVar4 + 0xd0);
  }
  local_98 = local_58;
  uVar7 = local_98;
  local_90 = local_50;
  local_8c = local_4c;
  uStack_a8 = local_68;
  local_a0 = uStack_60;
  local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar10 = local_98._4_4_;
  local_b0 = plVar15;
  if ((local_98._4_4_ != iVar9) || (local_98 = uVar7, uStack_60 != lVar14)) {
    do {
      local_98 = uVar7;
      piVar2 = (int *)(*local_b0 + (longlong)iVar10 * 0x28);
      iVar10 = *piVar2;
      if ((iVar10 == (int)DAT_14cb889e0) && (piVar2[2] == DAT_14cb889e8)) {
        lVar4 = *(longlong *)(piVar2 + 4);
        if (lVar4 != 0) {
          lVar11 = (**(code **)(*(longlong *)(lVar4 + 0x58) + 8))(lVar4 + 0x58);
          lVar12 = thunk_FUN_144aff86e();
          if (((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
              lVar12 + 0x30)) {
            *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar4 + 0x98);
            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar4 + 0x9c);
          }
        }
      }
      else if ((iVar10 == DAT_14cbdb974) && (piVar2[2] == DAT_14cbdb97c)) {
        lVar4 = *(longlong *)(piVar2 + 4);
        if (lVar4 != 0) {
          lVar11 = (**(code **)(*(longlong *)(lVar4 + 0x58) + 8))(lVar4 + 0x58);
          lVar12 = thunk_FUN_144aff86e();
          if (((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
              lVar12 + 0x30)) {
            *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar4 + 0x98);
            *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar4 + 0x9c);
            *(undefined1 *)(param_1 + 0x48) = 1;
            FUN_1400021e4(lVar4 + 0xa0,&local_68);
            lVar4 = local_68;
            iVar10 = (int)uStack_60;
            uVar8 = (int)uStack_60 - 1;
            if ((int)uStack_60 == 0) {
              uVar8 = 0;
            }
            if (0 < (int)uVar8) {
              uVar13 = 0;
              do {
                uVar3 = *(ushort *)(local_68 + uVar13 * 2);
                *(ushort *)(local_68 + uVar13 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
                uVar13 = uVar13 + 1;
              } while (uVar8 != uVar13);
            }
            uVar6 = uStack_60._4_4_;
            local_b4 = uStack_60._4_4_;
            local_68 = 0;
            uStack_60 = 0;
            if (*(longlong *)(param_1 + 0x58) == 0) {
              *(longlong *)(param_1 + 0x58) = lVar4;
              *(int *)(param_1 + 0x60) = iVar10;
              *(undefined4 *)(param_1 + 100) = uVar6;
            }
            else {
              FUN_1400020a8();
              *(longlong *)(param_1 + 0x58) = lVar4;
              *(int *)(param_1 + 0x60) = iVar10;
              *(undefined4 *)(param_1 + 100) = local_b4;
              if (local_68 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
      else if ((iVar10 == DAT_14cbdb980) &&
              ((piVar2[2] == DAT_14cbdb988 && (lVar4 = *(longlong *)(piVar2 + 4), lVar4 != 0)))) {
        lVar11 = (**(code **)(*(longlong *)(lVar4 + 0x58) + 8))(lVar4 + 0x58);
        lVar12 = thunk_FUN_144aff86e();
        if ((lVar12 != 0) &&
           ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
             lVar12 + 0x30)))) {
          fVar16 = *(float *)(lVar4 + 0x98) * 100.0;
          if (100.0 <= fVar16) {
            fVar16 = 100.0;
          }
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          *(float *)(param_1 + 0x68) = fVar16;
          *(undefined1 *)(param_1 + 0x49) = 1;
        }
      }
      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a8._4_4_);
      FUN_1449c0562(&uStack_a8);
      iVar10 = local_98._4_4_;
      uVar7 = local_98;
    } while (((local_98._4_4_ != iVar9) || (local_a0 != lVar14)) || (local_b0 != plVar15));
  }
LAB_140d9fe8a:
  plVar15 = (longlong *)param_2[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da023c FUN_140da023c body=128 status=ok
// SIG undefined FUN_140da023c(void)

void FUN_140da023c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x260);
  *(uint *)(param_1 + 0x260) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x264) < iVar2 + 1U) {
    FUN_1457a8f84(param_1 + 0x58,iVar2);
  }
  lVar6 = param_1 + 0x58;
  if (*(longlong *)(param_1 + 600) != 0) {
    lVar6 = *(longlong *)(param_1 + 600);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(lVar6 + (longlong)iVar2 * 0x20);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  FUN_1410c1686(puVar1 + 4,param_3);
  return;
}



// FUNCTION 140da02c4 FUN_140da02c4 body=145 status=ok
// SIG undefined FUN_140da02c4(void)

undefined1 * FUN_140da02c4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  *(undefined8 *)(param_1 + 4) = 0x20;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x14) = 0x1ffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0xffffffff00001000;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x1000;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *(ulonglong *)(param_1 + 0x34) = (ulonglong)DAT_14c892ff8;
  *(ulonglong *)(param_1 + 0x3c) = (ulonglong)DAT_14c892ff4;
  param_1[0x44] = param_1[0x44] & 0xf8;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x54] = 4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_140efd97a(param_1);
  return param_1;
}



// FUNCTION 140da035e FUN_140da035e body=336 status=ok
// SIG undefined FUN_140da035e(void)

void FUN_140da035e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b2e1700;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3dcccccd00010101;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  puVar3 = &DAT_14c964b40;
  puVar4 = param_1 + 9;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x14] = DAT_14c8464e0;
  param_1[0x15] = uVar1;
  param_1[0x16] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1a] = DAT_14c8464e0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = DAT_14c8464f0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x4066800000000000;
  param_1[0x1f] = 0;
  uVar1 = DAT_14c846518;
  param_1[0x20] = DAT_14c846510;
  param_1[0x21] = uVar1;
  param_1[0x22] = DAT_14c846520;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  puVar3 = &DAT_14c964b40;
  puVar4 = param_1 + 0x27;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x3ecccccd42c80000;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return;
}



// FUNCTION 140da04ae FUN_140da04ae body=77 status=ok
// SIG undefined FUN_140da04ae(void)

undefined8 * FUN_140da04ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb58d10;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140da04fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 140da04fc FUN_140da04fc body=60 status=ok
// SIG undefined FUN_140da04fc(void)

void FUN_140da04fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb76f60;
  if (param_1[1] != 0) {
    FUN_140da0538(param_1[1],param_1);
  }
  if (param_1[7] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140da0538 FUN_140da0538 body=291 status=ok
// SIG undefined FUN_140da0538(void)

undefined8 FUN_140da0538(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 0x34);
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x270) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x268);
    local_48 = 0;
    uStack_40 = 0;
    FUN_1491d9a82(lVar3);
    FUN_1491dfdb4(lVar3);
    if (*(int *)(param_2 + 0x34) != -1) {
      iVar1 = *(int *)(param_1 + 0x280);
      *(uint *)(param_1 + 0x280) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x284) < iVar1 + 1U) {
        FUN_1446f48e2((longlong *)(param_1 + 0x278),iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x278) + (longlong)iVar1 * 4) =
           *(undefined4 *)(param_2 + 0x34);
    }
    lVar3 = local_48;
    *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
    if (*(longlong *)(param_1 + 0x590) != param_2) {
      lVar5 = (longlong)(int)uStack_40;
      if (lVar5 != 0) {
        lVar4 = 0;
        do {
          local_50 = *(undefined8 *)(lVar3 + lVar4);
          FUN_1491e07f8(param_1,param_2 + 0x10,&local_50);
          lVar4 = lVar4 + 8;
        } while (lVar5 * 8 != lVar4);
      }
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
    uVar2 = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140da0662 FUN_140da0662 body=57 status=ok
// SIG undefined FUN_140da0662(void)

void FUN_140da0662(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21d50 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21d50 = FUN_140002ddd(FUN_146435fa0,uVar1,L"GbxBrainTask_Parallel");
  }
  return;
}



// FUNCTION 140da069c FUN_140da069c body=1455 status=ok
// SIG undefined FUN_140da069c(void)

undefined8 *
FUN_140da069c(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4,
             longlong *param_5,longlong param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined4 param_11)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  
  *param_1 = &PTR_FUN_14b3fa610;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x4fc71eb4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xc0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0x3ff0000000000000;
  param_1[0x24] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if ((*param_3 != 0) || ((int)param_3[1] != 0x4fc71eb4)) {
    param_1[1] = *param_3;
    *(int *)(param_1 + 2) = (int)param_3[1];
    param_1[3] = 0;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x26) = 0;
    iVar13 = 0;
  }
  else {
    uVar3 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 0x26) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar13 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar13 = *(int *)(lVar18 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar18 + 0x10) = iVar17;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar17;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x134) = iVar13;
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x24);
  lVar12 = param_5[5];
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x2c);
  lVar18 = param_5[6];
  *(int *)(param_1 + 0x27) = (int)param_5[4];
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar2;
  *(int *)(param_1 + 0x28) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar4;
  param_1[0x29] = lVar18;
  FUN_14065c7a4(param_1 + 4,param_6);
  FUN_14065c7a4(param_1 + 6,param_6 + 0x10);
  FUN_14065c7f4(param_1 + 8,param_6 + 0x20);
  FUN_14065c844(param_1 + 10,param_6 + 0x30);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_6 + 0x40);
  FUN_14065c894(param_1 + 0xe,param_6 + 0x50);
  FUN_14065c9c2(param_1 + 0x16,param_6 + 0x90);
  uVar11 = *(undefined8 *)(param_6 + 0xd8);
  uVar2 = *(undefined4 *)(param_6 + 0xe0);
  uVar4 = *(undefined4 *)(param_6 + 0xe4);
  uVar5 = *(undefined4 *)(param_6 + 0xe8);
  uVar6 = *(undefined4 *)(param_6 + 0xec);
  uVar7 = *(undefined4 *)(param_6 + 0xf0);
  uVar8 = *(undefined4 *)(param_6 + 0xf4);
  uVar9 = *(undefined4 *)(param_6 + 0xf8);
  uVar10 = *(undefined4 *)(param_6 + 0xfc);
  param_1[0x1e] = *(undefined8 *)(param_6 + 0xd0);
  param_1[0x1f] = uVar11;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar4;
  *(undefined4 *)(param_1 + 0x21) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar6;
  *(undefined4 *)(param_1 + 0x22) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar8;
  *(undefined4 *)(param_1 + 0x23) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar10;
  uVar2 = *(undefined4 *)(param_6 + 0x100);
  uVar4 = *(undefined4 *)(param_6 + 0x104);
  uVar5 = *(undefined4 *)(param_6 + 0x108);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)(param_6 + 0xfc);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar4;
  *(undefined4 *)(param_1 + 0x25) = uVar5;
  *(undefined4 *)(param_1 + 0x2a) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x154) = param_8;
  *(undefined1 *)((longlong)param_1 + 0x155) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x156) = param_10;
  plVar14 = (longlong *)FUN_14001cc68(400);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  plVar14[4] = 0;
  plVar14[5] = 0;
  *plVar14 = 0;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *(undefined4 *)(plVar14 + 6) = 0;
  *(undefined4 *)((longlong)plVar14 + 0x34) = 0;
  *(undefined4 *)(plVar14 + 7) = 0;
  *(undefined4 *)((longlong)plVar14 + 0x3c) = 0x3ff00000;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[0xc] = 0x3ff0000000000000;
  plVar14[0xd] = 0x3ff0000000000000;
  plVar14[0xe] = 0x3ff0000000000000;
  plVar14[0xf] = 0;
  memset(plVar14 + 0x12,0,0x100);
  *(undefined4 *)(plVar14 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)plVar14 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)plVar14 + 0x134) = 0xffffffff;
  *(undefined1 *)((longlong)plVar14 + 0x8c) = 0;
  iVar13 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + 0xc);
    *(uint *)(plVar14 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar13 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar13 = *(int *)(lVar18 + 0x10);
      bVar19 = iVar13 == 0;
      if (bVar19) {
        *(int *)(lVar18 + 0x10) = iVar17;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar13 = iVar17;
      }
    }
  }
  *(int *)((longlong)plVar14 + 0x14) = iVar13;
  plVar15 = plVar14 + 4;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *plVar15 = *param_5;
    param_5 = param_5 + 1;
    plVar15 = plVar15 + 1;
  }
  *(undefined4 *)(plVar14 + 0x10) = uVar2;
  *(undefined4 *)((longlong)plVar14 + 0x84) = param_11;
  *(undefined4 *)(plVar14 + 0x11) = 0;
  plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar15[1] = (longlong)&DAT_100000001;
  *plVar15 = (longlong)&PTR_FUN_14b3fbab0;
  plVar15[2] = (longlong)plVar14;
  if ((plVar14 != (longlong *)0x0) &&
     (((*plVar14 == 0 || (plVar14[1] == 0)) || (*(int *)(plVar14[1] + 8) < 1)))) {
    if (plVar15 == (longlong *)0x0) {
      *plVar14 = (longlong)plVar14;
      plVar16 = (longlong *)plVar14[1];
      if (plVar16 != (longlong *)0x0) {
LAB_140da0b87:
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        plVar14[1] = (longlong)plVar15;
        if (plVar15 != (longlong *)0x0) goto LAB_140da0a55;
      }
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      *plVar14 = (longlong)plVar14;
      if ((longlong *)plVar14[1] != plVar15) {
        LOCK();
        *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
        UNLOCK();
        plVar16 = (longlong *)plVar14[1];
        if (plVar16 != (longlong *)0x0) goto LAB_140da0b87;
        plVar14[1] = (longlong)plVar15;
      }
LAB_140da0a55:
      LOCK();
      plVar16 = plVar15 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  param_1[0x2b] = plVar14;
  plVar14 = (longlong *)param_1[0x2c];
  if (plVar15 == plVar14) {
    if (plVar15 == (longlong *)0x0) goto LAB_140da0a86;
    LOCK();
    plVar14 = plVar15 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 != 0) goto LAB_140da0a86;
    (**(code **)*plVar15)(plVar15);
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar13 = *piVar1;
    UNLOCK();
    plVar14 = plVar15;
  }
  else {
    param_1[0x2c] = plVar15;
    if (plVar14 == (longlong *)0x0) goto LAB_140da0a86;
    LOCK();
    plVar15 = plVar14 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 != 0) goto LAB_140da0a86;
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar13 = *piVar1;
    UNLOCK();
  }
  if (iVar13 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_140da0a86:
  FUN_140da0c4c(param_1[0x2b],1);
  return param_1;
}



// FUNCTION 140da0c4c FUN_140da0c4c body=269 status=ok
// SIG undefined FUN_140da0c4c(void)

void FUN_140da0c4c(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  plVar7 = (longlong *)param_1[1];
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_140da0d2a:
    uVar6 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_140da0d2a;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = *param_1;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    bVar3 = false;
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14b3fb710;
  local_68 = &DAT_143d22d04;
  local_40 = uVar6;
  local_38 = plVar7;
  FUN_1407461b0(0x4ff);
  if (!bVar3) {
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
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da0d80 FUN_140da0d80 body=1079 status=ok
// SIG undefined FUN_140da0d80(void)

void FUN_140da0d80(longlong param_1)

{
  longlong *plVar1;
  void **ppvVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  lVar6 = *(longlong *)(param_1 + 0x7f70);
  if (lVar6 == 0) {
    uVar4 = FUN_1411201bc();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x7f70) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x7f68);
  plVar5 = *(longlong **)(param_1 + 0x7f78);
  if (plVar5 == (longlong *)0x0) {
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar5 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x7f78) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
        plVar5 = (longlong *)FUN_144aff482(uVar4);
        *(longlong **)(param_1 + 0x7f78) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_140da0e1f;
      }
    }
LAB_140da0e51:
    lVar6 = *(longlong *)(param_1 + 0x7f70);
    if (lVar6 == 0) {
      uVar4 = FUN_1411201bc();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x7f70) = lVar6;
    }
    plVar5 = *(longlong **)(param_1 + 0x7f78);
    if (plVar5 == (longlong *)0x0) {
      if ((lVar6 != 0) && (*plVar1 != 0)) {
        plVar5 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0x7f78) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
          plVar5 = (longlong *)FUN_144aff482(uVar4);
          *(longlong **)(param_1 + 0x7f78) = plVar5;
          if (plVar5 != (longlong *)0x0) goto LAB_140da0e71;
        }
      }
    }
    else {
LAB_140da0e71:
      lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar7 = FUN_140da11f2();
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        FUN_140cac328(plVar5,CONCAT71((int7)((ulonglong)*(longlong *)(lVar6 + 0x30) >> 8),
                                      *(undefined1 *)(param_1 + 0x7f80)),&local_38);
        goto LAB_140da0ebe;
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x7f70);
    if (lVar6 == 0) {
      uVar4 = FUN_1411201bc();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x7f70) = lVar6;
    }
    plVar5 = *(longlong **)(param_1 + 0x7f78);
    if (plVar5 == (longlong *)0x0) {
      if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_140da0ebe;
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x7f78) = 0;
        goto LAB_140da0ebe;
      }
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      plVar5 = (longlong *)FUN_144aff482(uVar4);
      *(longlong **)(param_1 + 0x7f78) = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_140da0ebe;
    }
    lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
    lVar7 = FUN_14036a63e();
    if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_140da0ebe;
    plVar5 = plVar5 + 3;
  }
  else {
LAB_140da0e1f:
    lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
    lVar7 = FUN_140da11b8();
    if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_140da0e51;
    iVar8 = *(int *)(param_1 + 0x7f80);
    if (((longlong)iVar8 < 0) || ((int)plVar5[6] <= iVar8)) goto LAB_140da0ebe;
    plVar5 = (longlong *)((longlong)iVar8 * 0x48 + plVar5[5]);
  }
  FUN_1447a1f4a(plVar5);
  FUN_144a787a6(&local_38);
LAB_140da0ebe:
  iVar8 = (int)uStack_30;
  if ((int)uStack_30 < 2) {
    FUN_14020fad6(&local_38);
    iVar8 = (int)uStack_30;
  }
  _Src = local_38;
  ppvVar2 = (void **)(param_1 + 0x7fc0);
  if (*(int *)(param_1 + 0x7fc8) == iVar8) {
    if (1 < iVar8) {
      lVar6 = 0;
      while( true ) {
        uVar9 = *(ushort *)((longlong)*ppvVar2 + lVar6);
        uVar10 = (ulonglong)uVar9;
        uVar11 = *(ushort *)((longlong)local_38 + lVar6);
        if (uVar9 != uVar11) break;
        if (uVar9 == 0) goto LAB_140da0f46;
LAB_140da0fa1:
        lVar6 = lVar6 + 2;
      }
      if ((uVar11 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar12 = (ulonglong)uVar11;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_140da0fa1;
      }
      if (uVar9 != uVar11) goto LAB_140da0ee7;
    }
  }
  else if (*(int *)(param_1 + 0x7fc8) + iVar8 != 1) {
LAB_140da0ee7:
    if (ppvVar2 != &local_38) {
      *(int *)(param_1 + 0x7fc8) = iVar8;
      if (*(int *)(param_1 + 0x7fcc) == 0 && iVar8 == 0) {
        *(undefined4 *)(param_1 + 0x7fcc) = 0;
      }
      else {
        FUN_1446dd670(ppvVar2,iVar8);
        if (iVar8 != 0) {
          memcpy(*ppvVar2,_Src,(longlong)iVar8 * 2);
        }
      }
    }
    FUN_1447cd2ec(param_1 + 0x7f28,0);
  }
LAB_140da0f46:
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da11b8 FUN_140da11b8 body=57 status=ok
// SIG undefined FUN_140da11b8(void)

void FUN_140da11b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3890 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3890 = FUN_140002ddd(FUN_1465f8c3a,uVar1,L"OakUIDisplayDataDef_UIRandomCharacterName");
  }
  return;
}



// FUNCTION 140da11f2 FUN_140da11f2 body=57 status=ok
// SIG undefined FUN_140da11f2(void)

void FUN_140da11f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3860 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3860 = FUN_140002ddd(FUN_1465f8b42,uVar1,L"OakUIDisplayDataDef_UICharacterName");
  }
  return;
}



// FUNCTION 140da123a FUN_140da123a body=31 status=ok
// SIG undefined FUN_140da123a(void)

undefined8 FUN_140da123a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da1268 FUN_140da1268 body=31 status=ok
// SIG undefined FUN_140da1268(void)

undefined8 FUN_140da1268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da129a FUN_140da129a body=299 status=ok
// SIG undefined FUN_140da129a(void)

void FUN_140da129a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x120);
    plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x128) * 2;
    do {
      plVar3 = (longlong *)plVar6[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_60 = (longlong *)0x0;
LAB_140da1394:
        local_68 = 0;
        bVar9 = true;
        plVar7 = (longlong *)0x0;
      }
      else {
        local_68 = *plVar6;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) {
            plStack_60 = (longlong *)0x0;
            goto LAB_140da1394;
          }
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
        plStack_60 = plVar3;
        if (plVar3 == (longlong *)0x0) goto LAB_140da1394;
        bVar9 = false;
        plVar7 = plVar3;
      }
      if (local_68 != 0) {
        FUN_140dcae94(param_1,&local_68);
      }
      if (!bVar9) {
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar8);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da13d2 FUN_140da13d2 body=116 status=ok
// SIG undefined FUN_140da13d2(void)

void FUN_140da13d2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ddc768(param_1,iVar1);
    }
    FUN_146ea2f6d((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146ea2f6e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140da1446 FUN_140da1446 body=46 status=ok
// SIG undefined FUN_140da1446(void)

void FUN_140da1446(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da1474(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be849d0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 140da1474 FUN_140da1474 body=101 status=ok
// SIG undefined FUN_140da1474(void)

undefined8 * FUN_140da1474(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_149fbe4e0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return param_1;
}



// FUNCTION 140da14da FUN_140da14da body=95 status=ok
// SIG undefined FUN_140da14da(void)

ulonglong FUN_140da14da(longlong param_1)

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
LAB_140da151c:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140da151c;
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



// FUNCTION 140da153a FUN_140da153a body=134 status=ok
// SIG undefined FUN_140da153a(void)

void FUN_140da153a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar3) != 0) {
          FUN_14480f766(*(longlong *)(param_1 + 0x18) + 0x88);
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) < 0) {
      FUN_146551c6e(param_1 + 0x28,0);
    }
  }
  FUN_1447f69b6(param_1 + 0x38);
  FUN_1448a8284(param_1 + 0x38);
  return;
}



// FUNCTION 140da15c0 FUN_140da15c0 body=368 status=ok
// SIG undefined FUN_140da15c0(void)

void FUN_140da15c0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [6];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140907f3e();
  uVar3 = FUN_140da1732();
  FUN_14477b664(uVar3);
  lVar4 = FUN_140da1732();
  uVar3 = FUN_140da1732();
  FUN_1402d1bfa(local_78,uVar3,param_1);
  lVar2 = local_78[0];
  lVar5 = FUN_140da1732();
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_140da1643;
    }
    if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_140da1643;
  }
  lVar5 = lVar4;
LAB_140da1643:
  uVar3 = FUN_14477b664(lVar5);
  lVar5 = FUN_14477b664(uVar3);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  if (((lVar2 == 0) || (lVar5 == 0)) && (param_1 = 0, lVar5 == 0)) {
    lVar5 = FUN_140da1732();
  }
  uVar3 = FUN_14477b664(lVar5);
  local_78[5] = lVar2;
  uVar3 = FUN_14477b664(uVar3);
  local_48 = FUN_14477b664(uVar3);
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_40 = param_1;
  FUN_1403157e6(local_78 + 5);
  FUN_140bf2acc(param_2,local_78,&DAT_14cb71468,0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if (local_78[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da1732 FUN_140da1732 body=57 status=ok
// SIG undefined FUN_140da1732(void)

void FUN_140da1732(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c7d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c7d8 = FUN_140002ddd(FUN_1464d6a7c,uVar1,L"GbxDecoCharacterDef");
  }
  return;
}



// FUNCTION 140da176c FUN_140da176c body=2092 status=ok
// SIG undefined FUN_140da176c(void)

void FUN_140da176c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  code *pcVar15;
  undefined8 *puVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_148 [32];
  code **local_128;
  code *local_118;
  longlong *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  longlong *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)(param_1 + 0x24) != '\x01') goto LAB_140da1b8e;
  if (0 < *(int *)(param_1 + 8)) {
    lVar13 = 0;
    do {
      FUN_1436b8f38();
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 8));
  }
  if (DAT_14ca96da8 != '\0') {
    local_108 = (longlong *)0x0;
    local_f8 = &PTR_LAB_14aa983c0;
    uStack_f0 = param_1;
    local_118 = FUN_1436f0556;
    if (DAT_14ca9a43c == 2) {
      LOCK();
      bVar18 = DAT_14cb00c10 == '\0';
      if (bVar18) {
        DAT_14cb00c10 = '\x01';
      }
      UNLOCK();
      if (!bVar18) {
        FUN_1447d2058(&DAT_14cb00c10);
      }
      if (*(undefined **)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0)
          == &DAT_14cb00c08) {
        local_98[0] = local_118;
        local_88 = local_108;
        local_108 = (longlong *)0x0;
        local_78 = (undefined4)local_f8;
        uStack_74 = local_f8._4_4_;
        uStack_70 = (undefined4)uStack_f0;
        uStack_6c = uStack_f0._4_4_;
        local_68 = local_e8;
        uStack_64 = uStack_e4;
        uStack_60 = uStack_e0;
        uStack_5c = uStack_dc;
        if (local_118 != (code *)0x0) {
          local_118 = (code *)0x0;
        }
        local_58 = 0;
        FUN_1401a96bc(&DAT_14cb00c08,local_98,L"SkeletalMeshReleaseRayTracingGeometryGroup",
                      &DAT_14cb0830c);
LAB_140da1964:
        (*(code *)(&PTR_LAB_14a3931f0)[local_58])();
        bVar18 = false;
      }
      else {
        if (DAT_14cb00c18 != 0) {
          local_98[0] = local_118;
          local_88 = local_108;
          local_108 = (longlong *)0x0;
          local_78 = (undefined4)local_f8;
          uStack_74 = local_f8._4_4_;
          uStack_70 = (undefined4)uStack_f0;
          uStack_6c = uStack_f0._4_4_;
          local_68 = local_e8;
          uStack_64 = uStack_e4;
          uStack_60 = uStack_e0;
          uStack_5c = uStack_dc;
          if (local_118 != (code *)0x0) {
            local_118 = (code *)0x0;
          }
          local_58 = 0;
          FUN_1401a98c8(&DAT_14cb00c08,local_98,L"SkeletalMeshReleaseRayTracingGeometryGroup",
                        &DAT_14cb0830c);
          goto LAB_140da1964;
        }
        bVar18 = true;
      }
      LOCK();
      bVar19 = DAT_14cb00c10 == '\x01';
      if (bVar19) {
        DAT_14cb00c10 = '\0';
      }
      UNLOCK();
      if (!bVar19) {
        FUN_14008cdb0(&DAT_14cb00c10);
      }
      if (bVar18) {
        local_d8 = local_118;
        local_c8 = local_108;
        local_a8 = CONCAT44(uStack_e4,local_e8);
        uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
        local_b8 = local_f8;
        uStack_b0 = uStack_f0;
        if (local_118 != (code *)0x0) goto LAB_140da19d3;
        pcVar15 = (code *)0x0;
        goto LAB_140da19dc;
      }
    }
    else {
      local_d8 = FUN_1436f0556;
      local_c8 = (longlong *)0x0;
      local_b8 = &PTR_LAB_14aa983c0;
      uStack_b0 = param_1;
      local_a8 = CONCAT44(uStack_e4,local_e8);
      uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
LAB_140da19d3:
      local_118 = (code *)0x0;
      pcVar15 = local_d8;
LAB_140da19dc:
      local_108 = (longlong *)0x0;
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar17 = *(int *)(lVar13 + 0xc60);
      local_f8 = local_b8;
      uStack_f0 = uStack_b0;
      if (DAT_14c86a9fc == 0) {
        if (iVar17 != 2) {
          if (iVar17 != 1) goto LAB_140da19ff;
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          pcVar15 = local_d8;
          if (DVar6 == DVar7) goto LAB_140da1a04;
          goto LAB_140da1a40;
        }
LAB_140da1a04:
        plVar11 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar11 = &local_b8;
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        (*pcVar15)(uVar8);
      }
      else {
LAB_140da19ff:
        if (iVar17 == 0x10) goto LAB_140da1a04;
LAB_140da1a40:
        if (DAT_14ca9a438 == '\0') {
          pcVar15 = local_d8;
          if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar13 + 0xc60), iVar17 == 2))
          goto LAB_140da1a04;
          if (iVar17 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            pcVar15 = local_d8;
            if (DVar6 == DVar7) goto LAB_140da1a04;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar10 = (uint *)*puVar2;
          if (puVar10 != (uint *)0x0) goto LAB_140da1c5a;
          while( true ) {
            uVar5 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar5 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar5 | 1;
              __tlregdtor(&LAB_1436ef87f);
            }
            lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar9 = *(undefined4 **)(lVar13 + 0x310);
            *(undefined8 *)(lVar13 + 0x310) = 0;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar9 = 0xffffffff;
            *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            FUN_140217a48(puVar2);
            puVar10 = (uint *)*puVar2;
LAB_140da1c5a:
            puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 0xfU & 0xfffffffffffffff0);
            puVar12 = (uint *)(puVar16 + 0x1e);
            uVar5 = puVar10[0x12];
            if (puVar12 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar3 = *puVar10;
              *puVar10 = *puVar10 + uVar5 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar5) != 0xffffffff) break;
              puVar10 = (uint *)*puVar2;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar2 = puVar10;
              puVar16 = (undefined8 *)((longlong)puVar10 + 0x67U & 0xfffffffffffffff0);
              puVar12 = (uint *)(puVar16 + 0x1e);
              uVar5 = 0;
              if (puVar12 <= puVar10 + 0x4000) {
                uVar5 = 1;
                goto LAB_140da1cda;
              }
            }
          }
          uVar5 = uVar5 + 1;
LAB_140da1cda:
          *(uint **)(puVar10 + 0x10) = puVar12;
          puVar10[0x12] = uVar5;
          FUN_1447247dc(puVar16,0);
          *puVar16 = &PTR_FUN_14aa983b0;
          puVar16[0x16] = local_d8;
          puVar16[0x18] = local_c8;
          local_c8 = (longlong *)0x0;
          *(undefined4 *)(puVar16 + 0x1c) = (undefined4)local_a8;
          *(undefined4 *)((longlong)puVar16 + 0xe4) = local_a8._4_4_;
          *(undefined4 *)(puVar16 + 0x1d) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)puVar16 + 0xec) = uStack_a0._4_4_;
          *(undefined4 *)(puVar16 + 0x1a) = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar16 + 0xd4) = local_b8._4_4_;
          *(undefined4 *)(puVar16 + 0x1b) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)puVar16 + 0xdc) = uStack_b0._4_4_;
          if (local_d8 != (code *)0x0) {
            local_d8 = (code *)0x0;
          }
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar5 = DAT_14c7585c8 >> 10 & 3;
            iVar17 = 0;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
              uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
              iVar17 = 0;
            }
            else {
              uVar14 = 2;
            }
          }
          else {
            iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar14 = 5;
          }
          if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
          }
          puVar16[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar16[9] = puVar16;
          puVar16[10] = puVar16;
          lVar13 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar13 == 0) {
            uVar4 = 1;
            if ((char)uVar14 != '\x06') {
              uVar4 = uVar14;
            }
            uVar14 = uVar4;
            uVar8 = 0;
          }
          else {
            if ((char)uVar14 == '\x06') {
              uVar14 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
            }
            uVar8 = *(undefined8 *)(lVar13 + 0x30);
          }
          puVar16[0xf] = uVar8;
          puVar16[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar16 + 0x1c) = iVar17;
          if (puVar16 == (undefined8 *)0x0) {
            local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
            FUN_1447439e4(puVar16);
            LOCK();
            piVar1 = (int *)(puVar16 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar16)(puVar16,1);
            }
          }
        }
        else {
          local_98[0] = (code *)0x0;
          local_88 = (longlong *)FUN_14001cc68(0x50,0x10);
          *local_88 = (longlong)&PTR_LAB_14aa98390;
          local_88[2] = (longlong)local_d8;
          local_88[4] = (longlong)local_c8;
          local_c8 = (longlong *)0x0;
          *(undefined4 *)(local_88 + 8) = (undefined4)local_a8;
          *(undefined4 *)((longlong)local_88 + 0x44) = local_a8._4_4_;
          *(undefined4 *)(local_88 + 9) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)local_88 + 0x4c) = uStack_a0._4_4_;
          *(undefined4 *)(local_88 + 6) = (undefined4)local_b8;
          *(undefined4 *)((longlong)local_88 + 0x34) = local_b8._4_4_;
          *(undefined4 *)(local_88 + 7) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)local_88 + 0x3c) = uStack_b0._4_4_;
          if (local_d8 != (code *)0x0) {
            local_d8 = (code *)0x0;
          }
          if (local_88 != (longlong *)&DAT_fffffffffffffff0) {
            local_98[0] = FUN_1436f0312;
          }
          local_128 = local_98;
          FUN_14005a792(&DAT_14ca9a440,L"SkeletalMeshReleaseRayTracingGeometryGroup",&DAT_14cb0830c)
          ;
          if (local_98[0] != (code *)0x0) {
            plVar11 = local_88;
            if (local_88 == (longlong *)0x0) {
              plVar11 = (longlong *)&local_78;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      }
      if (local_d8 != (code *)0x0) {
        plVar11 = &local_b8;
        if (local_c8 != (longlong *)0x0) {
          plVar11 = local_c8;
        }
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (local_118 != (code *)0x0) {
      plVar11 = &local_f8;
      if (local_108 != (longlong *)0x0) {
        plVar11 = local_108;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  FUN_14109c0c2(*(undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x24) = 0;
LAB_140da1b8e:
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da1f9a FUN_140da1f9a body=127 status=ok
// SIG undefined FUN_140da1f9a(void)

undefined8 * FUN_140da1f9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be84d20;
  FUN_1400dacad(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140211823(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140da201a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da201a FUN_140da201a body=63 status=ok
// SIG undefined FUN_140da201a(void)

void FUN_140da201a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fbf3e0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140da205a(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140da205a FUN_140da205a body=55 status=ok
// SIG undefined FUN_140da205a(void)

void FUN_140da205a(longlong *param_1)

{
  FUN_140da2092(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140da2092 FUN_140da2092 body=121 status=ok
// SIG undefined FUN_140da2092(void)

void FUN_140da2092(longlong param_1,int param_2)

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



// FUNCTION 140da2112 FUN_140da2112 body=57 status=ok
// SIG undefined FUN_140da2112(void)

void FUN_140da2112(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23910 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23910 = FUN_140002ddd(FUN_14643fbb8,uVar1,L"GpsTest_TracePerceivedEnemies");
  }
  return;
}



// FUNCTION 140da214c FUN_140da214c body=40 status=ok
// SIG undefined FUN_140da214c(void)

undefined8 FUN_140da214c(undefined8 param_1,int param_2)

{
  FUN_140da2174();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da2174 FUN_140da2174 body=632 status=ok
// SIG undefined FUN_140da2174(void)

void FUN_140da2174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab6f5f0;
  param_1[6] = &PTR_FUN_14ab6f890;
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (*(int *)((longlong)param_1 + 0x3ec) != 0) {
    FUN_144727cd0(param_1 + 0x7c,0);
  }
  param_1[0x82] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x81) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x40c)) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0x80;
    FUN_1446efbd8(param_1 + 0x7e,0);
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_140da24b4(param_1 + 0x37);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140da23ec(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_140549ad6(param_1 + 0x13,0);
  }
  param_1[0x19] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xc4)) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
    FUN_1446efbd8(param_1 + 0x15,0);
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140da2426(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140da23ec FUN_140da23ec body=58 status=ok
// SIG undefined FUN_140da23ec(void)

void FUN_140da23ec(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_140da2426(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140da2426 FUN_140da2426 body=142 status=ok
// SIG undefined FUN_140da2426(void)

void FUN_140da2426(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-10] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x10] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140da24b4 FUN_140da24b4 body=180 status=ok
// SIG undefined FUN_140da24b4(void)

void FUN_140da24b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  FUN_140da2568(param_1 + 0x1b8);
  FUN_140da259f(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x188);
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
  FUN_1406cb64a(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140da2568 FUN_140da2568 body=55 status=ok
// SIG undefined FUN_140da2568(void)

void FUN_140da2568(longlong *param_1)

{
  FUN_140da2608(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140da259f FUN_140da259f body=58 status=ok
// SIG undefined FUN_140da259f(void)

void FUN_140da259f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_140da25d9(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140da25d9 FUN_140da25d9 body=47 status=ok
// SIG undefined FUN_140da25d9(void)

void FUN_140da25d9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
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



// FUNCTION 140da2608 FUN_140da2608 body=121 status=ok
// SIG undefined FUN_140da2608(void)

void FUN_140da2608(longlong param_1,int param_2)

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



// FUNCTION 140da2682 FUN_140da2682 body=319 status=ok
// SIG undefined FUN_140da2682(void)

void FUN_140da2682(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar4 = FUN_140275092(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2] ^ (uint)(ushort)param_2[3]),
                        param_2);
  if (iVar4 != -1) {
    lVar8 = *plVar1 + (longlong)iVar4 * 0x40;
    if ((lVar8 != 0) && (lVar9 = *plVar1 + (longlong)iVar4 * 0x40 + 0x10, lVar9 != 0)) {
      lVar6 = (longlong)*(int *)(lVar8 + 0x30);
      if (0 < lVar6) {
        uVar7 = lVar6 + 1;
        lVar6 = lVar6 * 0x14;
        do {
          lVar6 = lVar6 + -0x14;
          lVar5 = *(longlong *)(lVar8 + 0x28);
          if (*(longlong *)(lVar8 + 0x28) == 0) {
            lVar5 = lVar9;
          }
          FUN_140cc0e78(*(undefined8 *)(param_1 + 0x58),lVar5 + lVar6);
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
      }
      if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
        lVar8 = param_1 + 0x40;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x48);
        }
        uVar3 = *(uint *)(lVar8 + ((longlong)
                                   (int)~(param_2[1] ^ *param_2 ^ param_2[3] & 0xffff ^ param_2[2])
                                  & (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
        if (uVar3 != 0xffffffff) {
          do {
            puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar3 * 0x40);
            if ((((*(uint *)(*plVar1 + 4 + (longlong)(int)uVar3 * 0x40) == param_2[1]) &&
                 (*puVar2 == *param_2)) && (puVar2[2] == param_2[2])) && (puVar2[3] == param_2[3]))
            {
              FUN_140da27c2(plVar1);
              return;
            }
            uVar3 = puVar2[0xe];
          } while (uVar3 != 0xffffffff);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da27c2 FUN_140da27c2 body=128 status=ok
// SIG undefined FUN_140da27c2(void)

void FUN_140da27c2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x40 + 0x38);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x38);
  if (*(longlong *)(*param_1 + 0x28 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140da2842(param_1,param_2);
  return;
}



// FUNCTION 140da2842 FUN_140da2842 body=112 status=ok
// SIG undefined FUN_140da2842(void)

void FUN_140da2842(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140da28b2 FUN_140da28b2 body=263 status=ok
// SIG undefined FUN_140da28b2(void)

void FUN_140da28b2(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[10] == 0) {
    local_38 = *(undefined8 *)(param_2 + 0x10);
    local_30 = FUN_14477b664(0);
    local_28 = 0;
    FUN_140da2b58(param_1,&local_40);
    if (local_40 != 0) {
      uVar1 = FUN_141362a3e(param_1[3]);
      local_68 = 0x100000;
      FUN_14071ab80(local_40,&local_58,&local_38,uVar1);
      param_1[5] = local_58;
      param_1[6] = local_50;
      param_1[7] = local_48;
      (**(code **)(*param_1 + 0x20))(param_1,0);
      *(undefined4 *)(param_1 + 2) = 0;
    }
    FUN_144a61ac8(&local_40);
  }
  else {
    *(int *)(param_1 + 5) = (int)param_1[8];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x44);
    *(int *)(param_1 + 6) = (int)param_1[9];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x4c);
    param_1[7] = param_1[10];
    param_1[8] = 0;
    param_1[9] = -1;
    param_1[10] = 0;
    (**(code **)(*param_1 + 0x20))(param_1,0);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da29ba FUN_140da29ba body=213 status=ok
// SIG undefined FUN_140da29ba(void)

bool FUN_140da29ba(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da2b58(param_1,&local_20);
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    FUN_140da2a90(local_20,*(undefined8 *)(param_1 + 0x38),1);
    *(undefined1 *)(param_1 + 0x14) = 1;
    if ((local_20 != (longlong *)0x0) &&
       (*(int *)(local_20 + 0x21) = (int)local_20[0x21] + -1, (int)local_20[0x26] < 1)) {
      FUN_1400847bc(local_20 + 0x17,0);
      if ((int)local_20[0x21] == 0) {
        FUN_140087e46(local_20);
        if (*local_20 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140da2a2a;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_20);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_20);
        }
      }
    }
  }
LAB_140da2a2a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da2a90 FUN_140da2a90 body=199 status=ok
// SIG undefined FUN_140da2a90(void)

void FUN_140da2a90(longlong param_1,longlong param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x120);
    do {
      lVar2 = *plVar3;
      plVar3 = (longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0 && lVar2 != param_2);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x20) == '\x01') {
        if ((longlong)DAT_14cb25a08 != 0) {
          plVar3 = (longlong *)(DAT_14cb25a00 + 0x20);
          lVar4 = (longlong)DAT_14cb25a08 * 0x30;
          do {
            if (*(int *)(plVar3[-4] + 8) == *(int *)(lVar2 + 8)) {
              if (plVar3 == (longlong *)&DAT_00000020) {
                return;
              }
              iVar1 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
                FUN_140da2d2c(plVar3,iVar1);
              }
              *(byte *)(*plVar3 + (longlong)iVar1) = param_3;
              return;
            }
            plVar3 = plVar3 + 6;
            lVar4 = lVar4 + -0x30;
          } while (lVar4 != 0);
        }
      }
      else if (DAT_14cb25ab0 == '\x01') {
        AK::SoundEngine::ExecuteActionOnPlayingID((uint)param_3,*(uint *)(lVar2 + 8),0,4);
        *(byte *)(lVar2 + 0x22) = param_3;
      }
    }
  }
  return;
}



// FUNCTION 140da2b58 FUN_140da2b58 body=467 status=ok
// SIG undefined FUN_140da2b58(void)

longlong * FUN_140da2b58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    bVar2 = false;
  }
  else {
    local_28 = *(longlong **)(param_1 + 0x28);
    if (((local_28 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x30) == -1)) ||
       (*local_28 != *(longlong *)(param_1 + 0x30))) {
      local_28 = (longlong *)0x0;
    }
    else {
      *(int *)(local_28 + 0x21) = (int)local_28[0x21] + 1;
    }
    FUN_1403c75f4(param_2,&local_28);
    plVar1 = local_28;
    if ((local_28 != (longlong *)0x0) &&
       (*(int *)(local_28 + 0x21) = (int)local_28[0x21] + -1, (int)local_28[0x26] < 1)) {
      FUN_1400847bc(local_28 + 0x17,0);
      if ((int)plVar1[0x21] == 0) {
        FUN_140087e46(plVar1);
        if (*plVar1 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140da2bde;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
        }
      }
    }
LAB_140da2bde:
    bVar2 = *param_2 != 0;
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) && (!bVar2)) {
    FUN_1403c747e(*(longlong *)(param_1 + 0x18),&local_28,0);
    FUN_1403c75f4(param_2,&local_28);
    plVar1 = local_28;
    if ((local_28 != (longlong *)0x0) &&
       (*(int *)(local_28 + 0x21) = (int)local_28[0x21] + -1, (int)local_28[0x26] < 1)) {
      FUN_1400847bc(local_28 + 0x17,0);
      if ((int)plVar1[0x21] == 0) {
        FUN_140087e46(plVar1);
        if (*plVar1 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140da2bf2;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
        }
      }
    }
  }
LAB_140da2bf2:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da2d2c FUN_140da2d2c body=345 status=ok
// SIG undefined FUN_140da2d2c(void)

void FUN_140da2d2c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140da2dad;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_140da2dad:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 140da2e86 FUN_140da2e86 body=40 status=ok
// SIG undefined FUN_140da2e86(void)

undefined8 FUN_140da2e86(undefined8 param_1,int param_2)

{
  FUN_140da2eae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da2eae FUN_140da2eae body=74 status=ok
// SIG undefined FUN_140da2eae(void)

void FUN_140da2eae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3792e0;
  plVar3 = (longlong *)param_1[0x20];
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
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 140da2ef8 FUN_140da2ef8 body=40 status=ok
// SIG undefined FUN_140da2ef8(void)

undefined8 FUN_140da2ef8(undefined8 param_1,int param_2)

{
  FUN_140da2f20();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da2f20 FUN_140da2f20 body=59 status=ok
// SIG undefined FUN_140da2f20(void)

void FUN_140da2f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc0da0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140da2f5c FUN_140da2f5c body=510 status=ok
// SIG undefined FUN_140da2f5c(void)

void FUN_140da2f5c(longlong param_1,longlong param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb43964) {
    FUN_144b3d300(&DAT_14cb43964);
    if (DAT_14cb43964 == -1) {
      FUN_1446f470e(&DAT_14cb4395c,L"Position",1);
      _Init_thread_footer(&DAT_14cb43964);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb43970) {
    FUN_144b3d300(&DAT_14cb43970);
    if (DAT_14cb43970 == -1) {
      FUN_1446f470e(&DAT_14cb43968,L"SpriteSize",1);
      _Init_thread_footer(&DAT_14cb43970);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4397c) {
    FUN_144b3d300(&DAT_14cb4397c);
    if (DAT_14cb4397c == -1) {
      FUN_1446f470e(&DAT_14cb43974,L"Scale",1);
      _Init_thread_footer(&DAT_14cb4397c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb43988) {
    FUN_144b3d300(&DAT_14cb43988);
    if (DAT_14cb43988 == -1) {
      FUN_1446f470e(&DAT_14cb43980,L"RibbonWidth",1);
      _Init_thread_footer(&DAT_14cb43988);
    }
  }
  if (param_2 != 0) {
    FUN_140bec572(param_1 + 8,param_2,DAT_14cb4395c);
    FUN_140da315a(param_1 + 0x10,param_2,DAT_14cb43968);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



// FUNCTION 140da315a FUN_140da315a body=327 status=ok
// SIG undefined FUN_140da315a(void)

void FUN_140da315a(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40 [2];
  longlong local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  local_38 = param_3;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb42110);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_38) && (*(int *)(lVar2 + 8 + lVar5) == local_30[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 1;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2]);
          goto LAB_140da324e;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  local_48 = param_3;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42120);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_48) && (*(int *)(lVar2 + 8 + lVar5) == local_40[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 0;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2] + 4);
LAB_140da324e:
          *(uint *)(param_1 + 4) = (uint)*puVar4;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da32a2 FUN_140da32a2 body=71 status=ok
// SIG undefined FUN_140da32a2(void)

void FUN_140da32a2(longlong *param_1)

{
  FUN_140da32e9(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140da32e9 FUN_140da32e9 body=75 status=ok
// SIG undefined FUN_140da32e9(void)

void FUN_140da32e9(longlong param_1,int param_2)

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



// FUNCTION 140da3334 FUN_140da3334 body=26 status=ok
// SIG undefined FUN_140da3334(void)

void FUN_140da3334(undefined8 param_1)

{
  FUN_140da36fe();
  FUN_140da334e(param_1);
  return;
}



// FUNCTION 140da334e FUN_140da334e body=942 status=ok
// SIG undefined FUN_140da334e(void)

void FUN_140da334e(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_c0 [16];
  longlong *local_b0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)((longlong)param_1 + 0x136c) != '\0') ||
     ((*(byte *)(param_1[0x1c2] + 0x590) & 8) != 0)) {
    if ((char)param_1[0x2f] == '\x03') {
      if ((*(byte *)((longlong)param_1 + 100) & 2) == 0) {
        *(byte *)((longlong)param_1 + 0xe09) = *(byte *)(param_1[0x1c2] + 0x590) & 1;
      }
      else {
        FUN_140c7ce82(param_1);
      }
    }
    (**(code **)(*(longlong *)param_1[0x1c2] + 0x138))((longlong *)param_1[0x1c2],param_1);
    if (*(short *)((longlong)param_1 + 0xe4c) != 0) {
      (**(code **)(*param_1 + 0x6d8))(param_1);
    }
    if (*(char *)((longlong)param_1 + 0x136c) == '\x01') {
      lVar6 = param_1[0x1c2];
      uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
      uVar3 = CONCAT71(uVar4,1);
      if (((*(byte *)(lVar6 + 0x590) & 4) == 0) && ((*(byte *)(lVar6 + 400) & 1) == 0)) {
        uVar3 = CONCAT71(uVar4,*(undefined1 *)(lVar6 + 0x300)) & 0xffffffffffffff01;
      }
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
      lVar6 = (ulonglong)((uint)*(ushort *)(lVar6 + 0xb8) * 0x50) + DAT_14c9a6588;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
      local_c0[0] = '\0';
      local_98[0] = 0;
      FUN_1456bb102(local_c0,param_1);
      puVar5 = &local_90;
      FUN_1448729ea(lVar6,puVar5,local_c0);
      uVar8 = local_90;
      if (local_70 != 3) {
        puVar7 = &local_68;
        FUN_1400b56fe(puVar7,&local_90,3);
        uVar8 = 0;
        if (local_48 != 0) {
          uVar8 = local_68;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_50) {
            puVar7 = (undefined4 *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar2)(puVar7);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
      }
      (**(code **)(*param_1 + 0x388))(param_1,uVar8);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_78) {
          puVar5 = (undefined4 *)CONCAT44(uStack_8c,local_90);
        }
        (*pcVar2)(puVar5);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(CONCAT44(uStack_8c,local_90));
      }
      FUN_1448173f8(local_98);
      if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      uVar3 = uVar3 & 0xffffffff;
      (**(code **)(*param_1 + 0x2c0))(param_1,uVar3);
      FUN_1403121a6(param_1,CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)(param_1[0x1c2] + 0x300)) &
                            0xffffffffffffff01);
      lVar6 = param_1[0x1c2];
      if ((*(byte *)(lVar6 + 400) & 1) != 0) {
        (**(code **)(param_1[0x7a] + 0x70))(param_1 + 0x7a,1);
        lVar6 = param_1[0x1c2];
      }
      if (((*(byte *)(lVar6 + 0x48c) & 1) != 0) && (lVar6 = param_1[0x1c7], lVar6 != 0)) {
        uVar8 = *(undefined4 *)((longlong)param_1 + 0x1014);
        *(undefined4 *)(lVar6 + 0x428) = uVar8;
        *(undefined4 *)(lVar6 + 0x42c) = uVar8;
        if (*(char *)(param_1[0x1c7] + 0x420) != '\0') {
          *(undefined1 *)(param_1[0x1c7] + 0x421) = 1;
        }
      }
      if ((*(byte *)(param_1 + 0x1dc) & 8) != 0) {
        FUN_14655bbea(&local_c8);
        FUN_14655bb6c(param_1 + 0x1a3,param_1,local_c8);
      }
      if ((*(byte *)(param_1[0x1c2] + 0x27c) & 8) != 0) {
        if ((*(byte *)(param_1 + 0x1dc) & 8) == 0) {
          FUN_14655bbea(&local_d0);
          FUN_14655bb6c(param_1 + 0x1a3,param_1,local_d0);
        }
        FUN_14655bbea(&local_d8);
        FUN_14655bb6c(param_1 + 0x1a5,param_1,local_d8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da36fe FUN_140da36fe body=1032 status=ok
// SIG undefined FUN_140da36fe(void)

void FUN_140da36fe(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x1568) == 0) goto LAB_140da394a;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar6 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b95ff40;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b95f100;
  local_50[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar6 + 0x1c) = iVar8;
  plVar6[4] = (longlong)FUN_140ec72c2;
  *(undefined4 *)(plVar6 + 5) = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_50 + 0x30))(), cVar3 == '\0')) {
    if (local_48 == 0) goto LAB_140da38c6;
    if (local_50 != (longlong *)0x0) {
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140da38b9;
    }
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x16f0);
    if (*(int *)(param_1 + 0x1704) < 1) {
      iVar8 = *(int *)(param_1 + 0x16f8);
      iVar4 = *(int *)(param_1 + 0x1700) + -1;
      *(int *)(param_1 + 0x1700) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar6 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar6 + (longlong)iVar9 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar6,iVar9);
              FUN_14005b248(plVar6);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar4 = *(int *)(param_1 + 0x16f8);
          } while (iVar9 < iVar4);
        }
        iVar9 = 2;
        if (2 < iVar4 * 2) {
          iVar9 = iVar4 * 2;
        }
        *(int *)(param_1 + 0x1700) = iVar9;
        if ((iVar9 < iVar8) && (*(int *)(param_1 + 0x16fc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar8 = *(int *)(param_1 + 0x16f8);
    *(uint *)(param_1 + 0x16f8) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x16fc) < iVar8 + 1U) {
      FUN_1447a71f6(plVar6,iVar8);
    }
    lVar10 = *plVar6;
    lVar7 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar10 + lVar7) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar7) = 0;
    *(longlong **)(lVar10 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar7) = local_48;
LAB_140da38b9:
    local_48 = 0;
LAB_140da38c6:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140da3c3c(param_1 + 0x16e0,param_1,*(longlong *)(param_1 + 0x1568) + 0x713);
  if (*(char *)(*(longlong *)(param_1 + 0x1568) + 0x715) == '\x01') {
    plVar6 = *(longlong **)(param_1 + 0x168);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_140da3b08();
      lVar10 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
      if (lVar10 != 0) {
        uVar5 = FUN_140da3b08();
        lVar7 = FUN_144718840(lVar10,uVar5);
        if ((lVar10 != lVar7) && (lVar7 != 0)) goto LAB_140da394a;
      }
    }
    plVar6 = (longlong *)FUN_1405faa04(param_1 + 0xd00);
    if (plVar6 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar6 + 8))(plVar6);
      lVar7 = FUN_14018fb44();
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        FUN_14145876a(param_1 + 0x16e0,
                      CONCAT71((int7)((ulonglong)*(longlong *)(lVar10 + 0x30) >> 8),
                               *(undefined1 *)((longlong)plVar6 + 0x121)));
      }
    }
  }
LAB_140da394a:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da3b08 FUN_140da3b08 body=228 status=ok
// SIG undefined FUN_140da3b08(void)

longlong FUN_140da3b08(void)

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
  if (DAT_14cbab920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c2522d;
    local_40 = FUN_1465de50f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakIntrinsicElement",&DAT_14cbab920,FUN_1465de4e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbab920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da3c3c FUN_140da3c3c body=2465 status=ok
// SIG undefined FUN_140da3c3c(void)

void FUN_140da3c3c(longlong param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined8 unaff_RBP;
  int iVar14;
  bool bVar15;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (param_2 == (longlong *)0x0) goto LAB_140da418d;
  uVar4 = FUN_140437988();
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_140da418d;
  uVar4 = FUN_140437988();
  plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
  if (plVar6 == (longlong *)0x0 || plVar5 == plVar6) goto LAB_140da418d;
  lVar7 = FUN_1447210f0(param_2);
  if (lVar7 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (int)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(char *)(lVar7 + 0x152) == '\x02');
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  uVar3 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(param_1 + 0x38) = uVar3;
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar14 = *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar14 = DAT_14c964868 + 1;
    UNLOCK();
    iVar2 = DAT_14c964868 + 1;
    bVar15 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar14;
    if (bVar15) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar2);
    }
    LOCK();
    iVar14 = *(int *)(lVar7 + 0x10);
    bVar15 = iVar14 == 0;
    if (bVar15) {
      *(int *)(lVar7 + 0x10) = iVar2;
      iVar14 = 0;
    }
    UNLOCK();
    if (bVar15) {
      iVar14 = iVar2;
    }
  }
  *(int *)(param_1 + 0x3c) = iVar14;
  FUN_14078a6f4(&local_58,plVar6);
  *(undefined4 *)(param_1 + 0x28) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x2c) = local_58._4_4_;
  *(int *)(param_1 + 0x30) = iStack_50;
  *(undefined4 *)(param_1 + 0x34) = uStack_4c;
  if (param_3 == (char *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = param_3[0xc];
  }
  *(char *)(param_1 + 0x49) = cVar1;
  if ((char)iVar13 == '\0') {
    lVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    local_58 = (longlong *)0x0;
    iStack_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    iStack_50 = 3;
    *local_58 = (longlong)&PTR_LAB_14b3f7600;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_58[2] = lVar12;
    *local_58 = (longlong)&PTR_FUN_14b967120;
    local_58[3] = param_1;
    local_58[4] = (longlong)FUN_1408c7a4a;
    if ((local_58 == (longlong *)0x0) || (cVar1 = (**(code **)(*local_58 + 0x30))(), cVar1 == '\0'))
    {
      if (iStack_50 != 0) {
        if (local_58 == (longlong *)0x0) goto LAB_140da3f0f;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        goto LAB_140da3ef9;
      }
    }
    else {
      plVar5 = (longlong *)(lVar8 + 0x58);
      if (*(int *)(lVar8 + 0x6c) < 1) {
        iVar14 = *(int *)(lVar8 + 0x60);
        iVar2 = *(int *)(lVar8 + 0x68) + -1;
        *(int *)(lVar8 + 0x68) = iVar2;
        if (iVar2 <= iVar14) {
          local_6c = iVar13;
          iVar2 = iVar14;
          if (0 < iVar14) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar5 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar9 = *(longlong **)(*plVar5 + (longlong)iVar13 * 0x10),
                  plVar9 == (longlong *)0x0)) ||
                 (cVar1 = (**(code **)(*plVar9 + 0x28))(), cVar1 != '\0')) {
                FUN_14005b288(plVar5,iVar13);
                FUN_14005b248(plVar5);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar2 = *(int *)(lVar8 + 0x60);
            } while (iVar13 < iVar2);
          }
          iVar13 = local_6c;
          iVar10 = 2;
          if (2 < iVar2 * 2) {
            iVar10 = iVar2 * 2;
          }
          *(int *)(lVar8 + 0x68) = iVar10;
          if ((iVar10 < iVar14) && (*(int *)(lVar8 + 100) != iVar2)) {
            FUN_14045812c();
          }
        }
      }
      if ((iStack_50 != 0) && (local_58 != (longlong *)0x0)) {
        (**(code **)(*local_58 + 0x38))(local_58,&local_68);
      }
      iVar14 = *(int *)(lVar8 + 0x60);
      *(uint *)(lVar8 + 0x60) = iVar14 + 1U;
      if (*(uint *)(lVar8 + 100) < iVar14 + 1U) {
        FUN_1447a71f6(plVar5,iVar14);
      }
      lVar7 = *plVar5;
      lVar8 = (longlong)iVar14 * 0x10;
      *(undefined8 *)(lVar7 + lVar8) = 0;
      *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
      *(longlong **)(lVar7 + lVar8) = local_58;
      local_58 = (longlong *)0x0;
      *(int *)(lVar7 + 8 + lVar8) = iStack_50;
LAB_140da3ef9:
      iStack_50 = 0;
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140da3f0f:
  if ((char)param_2[0x2f] != '\x03') {
    uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
    local_68 = DAT_14cbc8e58;
    local_60 = 0xffffffff;
    FUN_140c823b2(uVar4,&local_58);
    FUN_1408c7aa8(param_1,&local_58);
    goto LAB_140da418d;
  }
  plVar5 = (longlong *)param_2[0x2d];
  if ((plVar5 == param_2) || (plVar5 == (longlong *)0x0)) {
LAB_140da3f62:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar4 = FUN_140da3b08();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_140da3f62;
    uVar4 = FUN_140da3b08();
    plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
    if (plVar5 == plVar6) goto LAB_140da3f62;
  }
  if (param_3 == (char *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_140da4138:
    cVar1 = '\0';
  }
  else {
    if ((plVar6 == (longlong *)0x0) || (param_3[2] != '\x01')) {
LAB_140da3f8d:
      if (*(char *)(param_1 + 0x54) == '\x02') {
        uVar3 = rand();
        iVar2 = (int)(((float)(uVar3 & 0x7fff) / 32767.0) * 5.0);
        iVar14 = 4;
        if (iVar2 < 4) {
          iVar14 = iVar2;
        }
        cVar1 = (char)iVar14 + '\x01';
      }
      else if (*(char *)(param_1 + 0x54) == '\x01') {
        cVar1 = *(char *)(param_1 + 0x55);
      }
      else {
        if (param_3[1] == '\0') {
          if (((((*(int *)(param_1 + 0x3c) != 0) &&
                (uVar3 = *(uint *)(param_1 + 0x38), -1 < (int)uVar3)) &&
               ((int)uVar3 < DAT_14c9647dc)) &&
              ((plVar5 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x3c))))) &&
             (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
              (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
            uVar4 = FUN_1401b0f18();
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
            if (plVar5 != (longlong *)0x0) {
              uVar4 = FUN_1401b0f18();
              plVar9 = (longlong *)FUN_144718840(plVar5,uVar4);
              if (((plVar5 != plVar9) && (plVar9 != (longlong *)0x0)) &&
                 (lVar7 = (**(code **)(*plVar9 + 0x18))(plVar9), lVar7 != 0)) {
                lVar8 = FUN_1407fbe78();
                if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                    (*(char *)(lVar7 + 0xfa8) == '\x01')) &&
                   (cVar1 = *(char *)(lVar7 + 0xfa9), cVar1 != '\x06')) goto LAB_140da4114;
              }
            }
          }
          FUN_141102464(&local_58,param_2);
          if (local_58._1_1_ != '\0') {
            cVar1 = (char)local_58;
            goto LAB_140da4110;
          }
        }
        cVar1 = *param_3;
      }
LAB_140da4110:
      if (cVar1 != '\x06') goto LAB_140da4114;
    }
    else {
      lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
      cVar1 = *(char *)(lVar7 + 0x57);
      if (cVar1 == '\x06') goto LAB_140da3f8d;
LAB_140da4114:
      *(char *)(param_1 + 0x57) = cVar1;
    }
    *(char **)(param_1 + 0x40) = param_3 + 4;
    if (param_3[10] != '\x01') goto LAB_140da4138;
    cVar1 = param_3[0xb];
  }
  *(char *)(param_1 + 0x48) = cVar1;
  FUN_14145876a(param_1,*(undefined1 *)(param_1 + 0x57));
  if ((char)iVar13 != '\0') goto LAB_140da418d;
  uVar4 = FUN_140da3b08();
  lVar7 = (**(code **)(*param_2 + 0x288))(param_2,uVar4);
  if (lVar7 == 0) goto LAB_140da418d;
  uVar4 = FUN_140da3b08();
  lVar8 = FUN_144718840(lVar7,uVar4);
  if (lVar8 == 0 || lVar7 == lVar8) goto LAB_140da418d;
  local_58 = (longlong *)0x0;
  iStack_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar5 = local_58;
  iStack_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14b95ff40;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_58[2] = lVar12;
  *local_58 = (longlong)&PTR_FUN_14b967190;
  local_58[3] = 0;
  uVar3 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(local_58 + 3) = uVar3;
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar13 = *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar13 = DAT_14c964868 + 1;
    UNLOCK();
    iVar14 = DAT_14c964868 + 1;
    bVar15 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar13;
    if (bVar15) {
      local_6c = iVar14;
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar14);
      iVar14 = local_6c;
    }
    LOCK();
    iVar13 = *(int *)(lVar7 + 0x10);
    bVar15 = iVar13 == 0;
    if (bVar15) {
      *(int *)(lVar7 + 0x10) = iVar14;
      iVar13 = 0;
    }
    UNLOCK();
    if (bVar15) {
      iVar13 = iVar14;
    }
  }
  *(int *)((longlong)plVar5 + 0x1c) = iVar13;
  plVar5[4] = lVar8;
  FUN_14094eacc(param_1 + 0x10,&local_68,&local_58);
  if (iStack_50 == 0) {
LAB_140da42c0:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    iStack_50 = 0;
    goto LAB_140da42c0;
  }
  if (((param_3 != (char *)0x0) && (plVar6 != (longlong *)0x0)) && (param_3[3] == '\x01')) {
    lVar12 = (**(code **)(*plVar6 + 0x10))(plVar6);
    local_58 = (longlong *)0x0;
    iStack_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    plVar5 = local_58;
    iStack_50 = 3;
    *local_58 = (longlong)&PTR_LAB_14b95ff40;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_58[2] = lVar11;
    *local_58 = (longlong)&PTR_FUN_14b967200;
    local_58[3] = 0;
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(local_58 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar13 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar13 = *(int *)(lVar7 + 0x10);
      bVar15 = iVar13 == 0;
      if (bVar15) {
        *(int *)(lVar7 + 0x10) = iVar14;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar13 = iVar14;
      }
    }
    *(int *)((longlong)plVar5 + 0x1c) = iVar13;
    plVar5[4] = lVar8;
    FUN_14094eacc(lVar12 + 0x10,&local_68,&local_58);
    if (iStack_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_140da418d;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      iStack_50 = 0;
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140da418d:
  *(undefined1 *)(param_1 + 0x58) = 1;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da45de FUN_140da45de body=677 status=ok
// SIG undefined FUN_140da45de(void)

void FUN_140da45de(longlong param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *_Src;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140da48c8();
  cVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar4 == '\0') {
    local_a8 = (longlong *)(param_1 + 0x98);
    do {
      local_78 = (int *)0x0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_68 = 0;
      FUN_140da4c3c(&local_98,param_2);
      FUN_140da4a1b(param_1 + 0x78,&local_98);
      FUN_140da4a1b(param_1 + 0x88,&local_88);
      if ((longlong)(int)uStack_70 != 0) {
        piVar7 = local_78 + (longlong)(int)uStack_70 * 0x2c;
        _Src = local_78;
        do {
          plVar3 = local_a8;
          lVar5 = *(longlong *)(param_1 + 0x98);
          iVar2 = *(int *)(param_1 + 0xa0);
          lVar8 = (longlong)iVar2;
          if (lVar8 != 0) {
            lVar6 = 0;
            do {
              if (*_Src == *(int *)(lVar5 + lVar6)) {
                fVar1 = *(float *)(lVar5 + 4 + lVar6);
                if (fVar1 < (float)_Src[1] || fVar1 == (float)_Src[1]) {
                  memcpy((void *)(lVar5 + lVar6),_Src,0xb0);
                }
                goto LAB_140da477e;
              }
              lVar6 = lVar6 + 0xb0;
            } while (lVar8 * 0xb0 - lVar6 != 0);
          }
          *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
          local_a0 = param_2;
          if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
            FUN_1457a99fc(local_a8,iVar2);
            lVar5 = *plVar3;
          }
          lVar8 = lVar8 * 0xb0;
          piVar9 = _Src;
          puVar10 = (undefined8 *)(lVar5 + lVar8);
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar10 = *(undefined8 *)piVar9;
            piVar9 = piVar9 + 2;
            puVar10 = puVar10 + 1;
          }
          *(int *)(lVar5 + 0x88 + lVar8) = _Src[0x22];
          *(undefined8 *)(lVar5 + 0x80 + lVar8) = *(undefined8 *)(_Src + 0x20);
          *(int *)(lVar5 + 0x94 + lVar8) = _Src[0x25];
          *(undefined8 *)(lVar5 + 0x8c + lVar8) = *(undefined8 *)(_Src + 0x23);
          *(undefined8 *)(lVar5 + 0x98 + lVar8) = *(undefined8 *)(_Src + 0x26);
          *(int *)(lVar5 + 0xa0 + lVar8) = _Src[0x28];
          *(undefined8 *)(lVar5 + 0xa4 + lVar8) = *(undefined8 *)(_Src + 0x29);
          param_2 = local_a0;
LAB_140da477e:
          _Src = _Src + 0x2c;
        } while (_Src != piVar7);
      }
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x90);
      FUN_140da494c(param_1 + 0x78);
      if (local_78 != (int *)0x0) {
        FUN_1400020a8();
      }
      FUN_140da4884(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_140da4884(local_98,uStack_90 & 0xffffffff);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      cVar4 = (**(code **)(*param_2 + 0x38))(param_2);
    } while (cVar4 == '\0');
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da4884 FUN_140da4884 body=67 status=ok
// SIG undefined FUN_140da4884(void)

void FUN_140da4884(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x128);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_140368b56(plVar1 + -0x1f);
      plVar1 = plVar1 + 0x45;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140da48c8 FUN_140da48c8 body=130 status=ok
// SIG undefined FUN_140da48c8(void)

void FUN_140da48c8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x10a) == '\0')) {
    *(undefined2 *)(param_1 + 0x108) = 0;
    *(undefined1 *)(param_1 + 0x10a) = 1;
    local_18 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_1405f6d44(lVar1 + 0x16c8,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da494c FUN_140da494c body=207 status=ok
// SIG undefined FUN_140da494c(void)

void FUN_140da494c(longlong param_1)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  
  if (0 < (longlong)*(int *)(param_1 + 0x18)) {
    lVar8 = (longlong)*(int *)(param_1 + 0x18);
    do {
      piVar7 = (int *)((lVar8 + -1) * 0x228 + *(longlong *)(param_1 + 0x10));
      uVar5 = *(uint *)(param_1 + 0x28);
      uVar6 = (ulonglong)uVar5 * 0xb0 | 4;
      uVar9 = 0;
      do {
        if ((int)(uVar5 + uVar9) < 1) goto LAB_140da4996;
        lVar3 = *(longlong *)(param_1 + 0x20);
        piVar1 = (int *)(lVar3 + -0xb4 + uVar6);
        uVar6 = uVar6 - 0xb0;
        uVar9 = uVar9 - 1;
      } while (*piVar1 != *piVar7);
      fVar2 = (float)piVar7[1];
      if (*(float *)(lVar3 + uVar6) <= fVar2 && fVar2 != *(float *)(lVar3 + uVar6)) {
        if (uVar9 != 0xffffffff) {
          uVar9 = ~uVar9;
          if (0 < (int)uVar9) {
            uVar9 = 1;
          }
          memmove((void *)(uVar6 + lVar3 + -4),
                  (void *)((longlong)(int)(uVar5 - uVar9) * 0xb0 + lVar3),
                  (longlong)(int)uVar9 * 0xb0);
          uVar5 = *(uint *)(param_1 + 0x28);
        }
        *(uint *)(param_1 + 0x28) = uVar5 - 1;
        FUN_148840afc(param_1 + 0x20);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
LAB_140da4996:
      bVar4 = 1 < lVar8;
      lVar8 = lVar8 + -1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 140da4a1b FUN_140da4a1b body=544 status=ok
// SIG undefined FUN_140da4a1b(void)

void FUN_140da4a1b(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar10 = (int *)*param_2;
    piVar4 = piVar10 + (longlong)*(int *)(param_2 + 1) * 0x8a;
    do {
      piVar7 = (int *)*param_1;
      iVar1 = *(int *)(param_1 + 1);
      lVar8 = (longlong)iVar1;
      if (lVar8 != 0) {
        lVar5 = lVar8 * 0x228;
        piVar6 = piVar7;
        do {
          if (*piVar10 == *piVar6) {
            FUN_14883df1e(piVar6,piVar10);
            goto LAB_140da4bb0;
          }
          piVar6 = piVar6 + 0x8a;
          lVar5 = lVar5 + -0x228;
        } while (lVar5 != 0);
      }
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1457a9a90(param_1,iVar1);
        piVar7 = (int *)*param_1;
      }
      piVar6 = piVar7 + lVar8 * 0x8a + 0xc;
      piVar6[-10] = piVar10[2];
      *(undefined8 *)(piVar6 + -0xc) = *(undefined8 *)piVar10;
      piVar6[-7] = piVar10[5];
      *(undefined8 *)(piVar6 + -9) = *(undefined8 *)(piVar10 + 3);
      piVar6[-4] = piVar10[8];
      *(undefined8 *)(piVar6 + -6) = *(undefined8 *)(piVar10 + 6);
      *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar10 + 9);
      piVar6[-1] = piVar10[0xb];
      FUN_1406fd608(piVar6,piVar10 + 0xc);
      *(short *)(piVar6 + 0x36) = (short)piVar10[0x42];
      *(undefined8 *)(piVar6 + 0x38) = *(undefined8 *)(piVar10 + 0x44);
      iVar1 = piVar10[0x47];
      iVar2 = piVar10[0x48];
      iVar3 = piVar10[0x49];
      piVar6[0x3a] = piVar10[0x46];
      piVar6[0x3b] = iVar1;
      piVar6[0x3c] = iVar2;
      piVar6[0x3d] = iVar3;
      piVar6[0x3e] = 0;
      piVar6[0x3f] = 0;
      iVar1 = piVar10[0x4c];
      _Src = *(void **)(piVar10 + 0x4a);
      piVar6[0x40] = iVar1;
      if ((longlong)iVar1 == 0) {
        piVar7[lVar8 * 0x8a + 0x4d] = 0;
      }
      else {
        FUN_1446dd670(piVar7 + lVar8 * 0x8a + 0x4a,iVar1,0);
        memcpy(*(void **)(piVar7 + lVar8 * 0x8a + 0x4a),_Src,(longlong)iVar1 * 2);
      }
      piVar6 = piVar10 + 0x4e;
      piVar9 = piVar7 + lVar8 * 0x8a + 0x4e;
      for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)piVar9 = *(undefined8 *)piVar6;
        piVar6 = piVar6 + 2;
        piVar9 = piVar9 + 2;
      }
      piVar7[lVar8 * 0x8a + 0x6c] = piVar10[0x6c];
      *(undefined8 *)(piVar7 + lVar8 * 0x8a + 0x6a) = *(undefined8 *)(piVar10 + 0x6a);
      *(undefined8 *)(piVar7 + lVar8 * 0x8a + 0x6d) = *(undefined8 *)(piVar10 + 0x6d);
      piVar7[lVar8 * 0x8a + 0x6f] = piVar10[0x6f];
      *(undefined8 *)(piVar7 + lVar8 * 0x8a + 0x70) = *(undefined8 *)(piVar10 + 0x70);
      piVar7[lVar8 * 0x8a + 0x72] = piVar10[0x72];
      piVar6 = piVar10 + 0x73;
      piVar7 = piVar7 + lVar8 * 0x8a + 0x73;
      for (lVar5 = 0x17; lVar5 != 0; lVar5 = lVar5 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
LAB_140da4bb0:
      piVar10 = piVar10 + 0x8a;
    } while (piVar10 != piVar4);
  }
  return;
}



// FUNCTION 140da4c3c FUN_140da4c3c body=1044 status=ok
// SIG undefined FUN_140da4c3c(void)

void FUN_140da4c3c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  ulonglong *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0x30);
  piVar5 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar5 = (int *)(param_1 + 0x34);
  piVar6 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar5,4);
    }
    else {
      FUN_14572512c(param_2,piVar5);
    }
  }
  else {
    *piVar5 = *piVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (*piVar1 != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x18) * 0x228,
               (longlong)*(int *)(param_1 + 0x1c) * 0x228);
    local_3c = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_3c = *(uint *)(param_1 + 0x18);
    }
    puVar7 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
      }
      else {
        FUN_14572512c(param_2,&local_3c);
      }
    }
    else {
      local_3c = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar2;
    }
    plVar3 = (longlong *)(param_1 + 0x10);
    if (local_3c == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_140da4884(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x18) = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          FUN_140da551a(plVar3,0);
        }
      }
    }
    else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
            ((0x76b9 < local_3c && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
      FUN_14572541c(param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      *(uint *)(param_1 + 0x18) = local_3c;
      lVar9 = 0;
      lVar10 = 0;
      do {
        FUN_140da5802(param_2,*(longlong *)(param_1 + 0x10) + lVar9);
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x228;
      } while (lVar10 < *(int *)(param_1 + 0x18));
    }
    else {
      FUN_140da5110(plVar3);
      if (0 < (int)local_3c) {
        iVar8 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x18) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x1c) < iVar4 + 1U) {
            FUN_1457a9a90(plVar3,iVar4);
          }
          lVar9 = (longlong)iVar4 * 0x228 + *plVar3;
          FUN_140da5667(lVar9);
          FUN_140da5802(param_2,lVar9);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)local_3c);
      }
    }
  }
  if (*piVar5 != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x28) * 0xb0,
               (longlong)*(int *)(param_1 + 0x2c) * 0xb0);
    local_3c = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_3c = *(uint *)(param_1 + 0x28);
    }
    puVar7 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
      }
      else {
        FUN_14572512c(param_2,&local_3c);
      }
    }
    else {
      local_3c = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar2;
    }
    plVar3 = (longlong *)(param_1 + 0x20);
    if (local_3c == 0) {
      if (((*(byte *)(param_2 + 5) & 1) != 0) &&
         (*(undefined4 *)(param_1 + 0x28) = 0, *(int *)(param_1 + 0x2c) != 0)) {
        FUN_140da5434(plVar3,0);
      }
    }
    else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
            ((0x1745d < local_3c && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
      FUN_14572541c(param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      *(uint *)(param_1 + 0x28) = local_3c;
      lVar9 = 0;
      lVar10 = 0;
      do {
        FUN_140da514a(param_2,*(longlong *)(param_1 + 0x20) + lVar9);
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0xb0;
      } while (lVar10 < *(int *)(param_1 + 0x28));
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 0;
      if ((*(uint *)(param_1 + 0x2c) == local_3c) || (FUN_140da5434(plVar3), 0 < (int)local_3c)) {
        iVar8 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
            FUN_1457a99fc(plVar3,iVar4);
          }
          lVar9 = (longlong)iVar4 * 0xb0 + *plVar3;
          FUN_140da5051(lVar9);
          FUN_140da514a(param_2,lVar9);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)local_3c);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da5051 FUN_140da5051 body=190 status=ok
// SIG undefined FUN_140da5051(void)

void FUN_140da5051(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0xbf80000000000000;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  param_1[6] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar1;
  param_1[9] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[7] = DAT_14c8464f8;
  param_1[8] = uVar1;
  param_1[0xc] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[10] = DAT_14c8464e0;
  param_1[0xb] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  *(undefined4 *)(param_1 + 0x11) = DAT_14cb7bd70;
  param_1[0x10] = DAT_14cb7bd68;
  *(undefined4 *)((longlong)param_1 + 0x94) = DAT_14cb7bd88;
  *(undefined8 *)((longlong)param_1 + 0x8c) = DAT_14cb7bd80;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}



// FUNCTION 140da5110 FUN_140da5110 body=58 status=ok
// SIG undefined FUN_140da5110(void)

void FUN_140da5110(undefined8 *param_1,int param_2)

{
  FUN_140da4884(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140da551a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140da514a FUN_140da514a body=663 status=ok
// SIG undefined FUN_140da514a(void)

longlong * FUN_140da514a(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140da53e2();
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 4),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  pbVar1 = (byte *)(param_2 + 8);
  (**(code **)(*param_1 + 0x178))(param_1,pbVar1,DAT_14cb7c418);
  (**(code **)(*param_1 + 0x178))(param_1,(char *)(param_2 + 9),DAT_14cb7c410);
  bVar4 = *(byte *)(param_2 + 8);
  if ((bVar4 & 1) != 0) {
    local_31 = *(int *)(param_2 + 0x98) != 0 & *(byte *)(param_1 + 5) >> 2;
    (**(code **)(*param_1 + 0x178))(param_1,&local_31,1);
    if (local_31 == 1) {
      FUN_14011750a(param_2 + 0x80,param_1);
      FUN_14011750a(param_2 + 0x8c,param_1);
      FUN_14011750a(param_2 + 0x98,param_1);
      (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0xa4);
    }
    bVar4 = *pbVar1;
  }
  if ((bVar4 & 2) != 0) {
    FUN_1401b2392(param_2 + 0x50,param_1);
    FUN_1401b2392(param_2 + 0x68,param_1);
    bVar4 = *(byte *)(param_2 + 8);
  }
  if ((bVar4 & 8) != 0) {
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x19),1);
    }
    else {
      *(undefined1 *)(param_2 + 0x19) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
  }
  bVar4 = *pbVar1;
  if ((bVar4 & 0x10) != 0) {
    (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x18,1);
    bVar4 = *(byte *)(param_2 + 8);
  }
  cVar5 = *(char *)(param_2 + 9);
  if ((cVar5 == '\x02' & bVar4 >> 2) == 1) {
    FUN_1401fde76(param_2 + 0x20,param_1);
    FUN_14032b138(param_2 + 0x38,param_1);
    cVar5 = *(char *)(param_2 + 9);
  }
  if (cVar5 == '\x05') {
    (**(code **)(*param_1 + 0x120))(param_1,param_2 + 0xc);
    puVar6 = (undefined4 *)(param_2 + 0x14);
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
      }
      else {
        FUN_14572512c(param_1,puVar6);
      }
    }
    else {
      *puVar6 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da53e2 FUN_140da53e2 body=82 status=ok
// SIG undefined FUN_140da53e2(void)

longlong * FUN_140da53e2(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140da5434 FUN_140da5434 body=229 status=ok
// SIG undefined FUN_140da5434(void)

void FUN_140da5434(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xbb) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,8);
  }
  return;
}



// FUNCTION 140da551a FUN_140da551a body=333 status=ok
// SIG undefined FUN_140da551a(void)

void FUN_140da551a(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 0x228;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x3c) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x3fffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140da5583;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x3fffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140da5583:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x228)) {
      uVar4 = uVar3 / 0x228 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x228,8);
  }
  return;
}



// FUNCTION 140da5667 FUN_140da5667 body=411 status=ok
// SIG undefined FUN_140da5667(void)

void FUN_140da5667(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 3) = DAT_14cb7bd68;
  param_1[5] = DAT_14cb7bd70;
  *(undefined8 *)(param_1 + 6) = DAT_14cb7bd80;
  param_1[8] = DAT_14cb7bd88;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0xffffffff00000080;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0xf;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 299) = 0;
  *(undefined8 *)((longlong)param_1 + 0x133) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13b) = 0xff;
  param_1[0x51] = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)(param_1 + 0x56) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x52) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  *(undefined8 *)(param_1 + 0x5c) = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x58) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x5a) = uVar1;
  *(undefined8 *)(param_1 + 0x62) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x5e) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 100) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x66) = uVar1;
  param_1[0x6c] = DAT_14cb7bd70;
  *(undefined8 *)(param_1 + 0x6a) = DAT_14cb7bd68;
  param_1[0x6f] = DAT_14cb7bd88;
  *(undefined8 *)(param_1 + 0x6d) = DAT_14cb7bd80;
  *(undefined8 *)((longlong)param_1 + 0x1cd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d5) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  return;
}



// FUNCTION 140da5802 FUN_140da5802 body=1117 status=ok
// SIG undefined FUN_140da5802(void)

longlong * FUN_140da5802(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 auStack_58 [37];
  byte local_33;
  byte local_32;
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140da53e2();
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 4),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 8),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_32 = *(int *)(param_2 + 0x24) != 0 & *(byte *)(param_1 + 5) >> 2;
  (**(code **)(*param_1 + 0x178))(param_1,&local_32,1);
  if (local_32 == 1) {
    FUN_14011750a(param_2 + 0xc,param_1);
    FUN_14011750a(param_2 + 0x18,param_1);
    FUN_14011750a(param_2 + 0x24,param_1);
  }
  FUN_140cd18ac(param_2 + 0x30,param_1);
  (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x108,1);
  (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x109,1);
  pcVar1 = (char *)(param_2 + 0x138);
  (**(code **)(*param_1 + 0x178))(param_1,pcVar1,DAT_14cb7c410);
  (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x139,1);
  FUN_1401fde76(param_2 + 0x148,param_1);
  FUN_14032b138(param_2 + 0x160,param_1);
  pcVar2 = (char *)(param_2 + 0x13a);
  pcVar5 = *(char **)param_1[1];
  if ((char *)((undefined8 *)param_1[1])[1] < pcVar5 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,pcVar2,1);
  }
  else {
    *pcVar2 = *pcVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if (*pcVar2 != '\0') {
    puVar6 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x13b),1);
    }
    else {
      *(undefined1 *)(param_2 + 0x13b) = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
  }
  if (*pcVar1 == '\x05') {
    (**(code **)(*param_1 + 0x120))(param_1,param_2 + 0x13c);
    puVar4 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x144),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x144) = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  local_33 = *(int *)(param_2 + 0x1c0) != 0 & *(byte *)(param_1 + 5) >> 2;
  (**(code **)(*param_1 + 0x178))(param_1,&local_33,1);
  if (local_33 == 1) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x1cc);
    FUN_14011750a(param_2 + 0x1a8,param_1);
    FUN_14011750a(param_2 + 0x1b4,param_1);
    FUN_14011750a(param_2 + 0x1c0,param_1);
    (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x1dc,1);
    if (*(char *)(param_2 + 0x1dc) == '\x01') {
      FUN_14480c34d(param_1,param_2 + 0x1e0);
      FUN_1401fb57a(param_1,param_2 + 0x1f8);
      FUN_14480c34d(param_1,param_2 + 0x210);
    }
    bVar3 = *(byte *)(param_1 + 5);
    local_31 = *(longlong *)(param_2 + 0x1d4) != 0 & bVar3 >> 2;
    (**(code **)(*param_1 + 0x178))(param_1,&local_31,1);
    if (local_31 == 1) {
      (**(code **)(*param_1 + 0x160))(param_1,(undefined8 *)(param_2 + 0x1d4));
    }
    else if ((bVar3 & 4) == 0) {
      *(undefined8 *)(param_2 + 0x1d4) = 0;
    }
  }
  else if (*pcVar1 == '\x01') {
    FUN_1401b2392(param_2 + 0x178,param_1);
    FUN_1401b2392(param_2 + 400,param_1);
  }
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x110);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da5c60 FUN_140da5c60 body=59 status=ok
// SIG undefined FUN_140da5c60(void)

void FUN_140da5c60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa8) != 0) {
      uVar1 = FUN_140da5c9c();
      *(undefined8 *)(param_1 + 0x60) = uVar1;
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
  }
  return;
}



// FUNCTION 140da5c9c FUN_140da5c9c body=102 status=ok
// SIG undefined FUN_140da5c9c(void)

void FUN_140da5c9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140b0ae5c();
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



// FUNCTION 140da5d12 FUN_140da5d12 body=350 status=ok
// SIG undefined FUN_140da5d12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140da5d12(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b760;
  param_1[0x16] = &PTR_FUN_14b023b20;
  param_1[0x19] = &PTR_FUN_14b023b40;
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x18) != '\0') &&
     (plVar3 = (longlong *)param_1[0x17], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da5e7e FUN_140da5e7e body=137 status=ok
// SIG undefined FUN_140da5e7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140da5e7e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140da5f08 FUN_140da5f08 body=208 status=ok
// SIG undefined FUN_140da5f08(void)

int FUN_140da5f08(longlong *param_1,longlong param_2,int param_3,char param_4,undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 0x2c) < 1) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x10);
      lVar1 = lVar2 + lVar7;
      *(undefined1 *)(lVar2 + 0x15 + lVar7) = param_5;
      *(undefined1 *)(lVar2 + 0x14 + lVar7) = 1;
      *(int *)(lVar2 + 0xc + lVar7) = *(int *)(lVar2 + 8 + lVar7) - param_3;
      cVar3 = (**(code **)(*param_1 + 0x128))(param_1,lVar1);
      if (cVar3 != '\0') {
        iVar4 = *(int *)(lVar2 + 0xc + lVar7);
        if ((param_4 != '\0') && (iVar5 < iVar4)) {
          cVar3 = (**(code **)(*param_1 + 0x130))(param_1,lVar1);
          iVar4 = *(int *)(lVar2 + 0xc + lVar7);
          if (cVar3 != '\0') {
            iVar5 = iVar4;
          }
        }
        (**(code **)(*param_1 + 0x68))(param_1,iVar4,lVar1);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xb0;
    } while (lVar6 < *(int *)(param_2 + 0x2c));
  }
  return iVar5;
}



// FUNCTION 140da6020 FUN_140da6020 body=969 status=ok
// SIG undefined FUN_140da6020(void)

void FUN_140da6020(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  ulonglong uVar1;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined1 local_180 [16];
  undefined **local_170;
  longlong local_168;
  undefined4 local_160;
  int local_15c;
  undefined1 local_158 [16];
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  longlong local_128;
  undefined4 local_120;
  longlong local_118;
  longlong local_108;
  undefined8 local_f0;
  uint local_e8;
  undefined **local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  uint local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((param_2 < 2) &&
     (((param_6 != '\0' || ((char)param_1[(ulonglong)param_2 * 0x12 + 3] != '\x01')) ||
      ((param_3 != (undefined8 *)0x0 && (*(char *)(param_3 + 1) == '\x01')))))) {
    local_f0 = 0;
    local_e8 = local_e8 & 0xffffff00;
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0x80;
    uStack_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_e0 = &PTR_FUN_14a46be50;
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = 0x7fffffff;
    local_64 = 0;
    if (param_3 == (undefined8 *)0x0) {
      local_68 = (uint)*(byte *)((longlong)param_1 + 9);
    }
    else {
      local_e8 = *(uint *)(param_3 + 1);
      local_f0 = *param_3;
      FUN_14093c3cc(local_78,param_3 + 0xf);
      local_68 = *(uint *)(param_3 + 0x11);
      local_64 = *(undefined1 *)((longlong)param_3 + 0x8c);
    }
    local_188 = param_5;
    FUN_140da63ea(local_180,param_1 + (ulonglong)param_2 * 0x12 + 2,&local_f0,param_4);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_180);
    local_170 = &PTR_FUN_14a46be50;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    local_170 = &PTR_FUN_14a177080;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    local_120 = 0;
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    local_160 = 0;
    if (local_15c != 0) {
      FUN_14472eb64(&local_168,0);
    }
    local_138 = 0xffffffff;
    local_140 = 0;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      FUN_1446efbd8(local_158,0);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    local_e0 = &PTR_FUN_14a46be50;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    local_e0 = &PTR_FUN_14a177080;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    uVar1 = uStack_d0 >> 0x20;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_14472eb64(&local_d8,0);
    }
    uStack_a8 = 0xffffffff;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      FUN_1446efbd8(local_c8,0);
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da63ea FUN_140da63ea body=1011 status=ok
// SIG undefined FUN_140da63ea(void)

undefined8 *
FUN_140da63ea(undefined8 *param_1,longlong param_2,undefined8 *param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[2] = &PTR_FUN_14a46be50;
  param_1[0xf] = 0;
  iVar2 = *(int *)(param_3 + 0x10);
  _Src = (void *)param_3[0xf];
  *(int *)(param_1 + 0x10) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_140a3dae8(param_1 + 0xf,iVar2,0);
    memcpy((void *)param_1[0xf],_Src,(longlong)iVar2 << 3);
  }
  puVar1 = param_1 + 2;
  *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)((longlong)param_3 + 0x8c);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_3 + 0x11);
  uVar4 = (ulonglong)*(uint *)(param_2 + 0x80);
  fVar7 = *(float *)(param_2 + 0x88);
  if (fVar7 == NAN) {
    fVar7 = 0.0;
  }
  if ((uVar4 != 0) &&
     ((pfVar3 = *(float **)(param_2 + 0x78), *(char *)(param_2 + 0x8c) != '\x01' ||
      (*pfVar3 <= param_4)))) {
    if (((int)*(uint *)(param_2 + 0x80) < 2) || (param_4 < *pfVar3)) {
      pfVar3 = pfVar3 + 1;
    }
    else {
      if (param_4 < pfVar3[uVar4 * 2 + -2]) {
        uVar5 = 0;
        do {
          if (param_4 < pfVar3[uVar5 * 2]) {
            uVar4 = 1;
            if (1 < (int)uVar5) {
              uVar4 = uVar5 & 0xffffffff;
            }
            pfVar3 = pfVar3 + uVar4 * 2 + -1;
            goto LAB_140da6560;
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
        goto LAB_140da6562;
      }
      pfVar3 = pfVar3 + uVar4 * 2 + -1;
    }
LAB_140da6560:
    fVar7 = *pfVar3;
  }
LAB_140da6562:
  LOCK();
  UNLOCK();
  local_98 = DAT_14c761474 + 1;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_140da67de(puVar1,&local_74,param_4,fVar7);
  param_5 = param_5 + param_4;
  uVar4 = (ulonglong)*(uint *)(param_3 + 0x10);
  fVar6 = 0.0;
  if (*(float *)(param_3 + 0x11) != NAN) {
    fVar6 = *(float *)(param_3 + 0x11);
  }
  if ((uVar4 != 0) &&
     ((pfVar3 = (float *)param_3[0xf], *(char *)((longlong)param_3 + 0x8c) != '\x01' ||
      (*pfVar3 <= param_5)))) {
    if (((int)*(uint *)(param_3 + 0x10) < 2) || (param_5 < *pfVar3)) {
      pfVar3 = pfVar3 + 1;
    }
    else {
      if (param_5 < pfVar3[uVar4 * 2 + -2]) {
        uVar5 = 0;
        do {
          if (param_5 < pfVar3[uVar5 * 2]) {
            uVar4 = 1;
            if (1 < (int)uVar5) {
              uVar4 = uVar5 & 0xffffffff;
            }
            pfVar3 = pfVar3 + uVar4 * 2 + -1;
            goto LAB_140da660d;
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
        goto LAB_140da660f;
      }
      pfVar3 = pfVar3 + uVar4 * 2 + -1;
    }
LAB_140da660d:
    fVar6 = *pfVar3;
  }
LAB_140da660f:
  LOCK();
  UNLOCK();
  local_98 = DAT_14c761474 + 1;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_140da67de(puVar1,&local_78,param_5,fVar6);
  if ((local_74 != local_78) && (FUN_140f40076(puVar1,&local_7c,local_74), local_7c != local_78)) {
    do {
      FUN_147a3fcc6(puVar1);
      FUN_140f40076(puVar1,&local_7c,local_74);
    } while (local_7c != local_78);
  }
  if (1.0 < param_5) {
    LOCK();
    UNLOCK();
    local_98 = DAT_14c761474 + 1;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_140da67de(puVar1,&local_7c,param_4 + -1.0,fVar7);
    LOCK();
    UNLOCK();
    local_98 = DAT_14c761474 + 1;
    DAT_14c761474 = DAT_14c761474 + 1;
    FUN_140da67de(puVar1,&local_80,param_5 + -1.0,fVar6);
    if ((local_7c != local_80) && (FUN_140f40076(puVar1,&local_84,local_7c), local_84 != local_80))
    {
      do {
        FUN_147a3fcc6(puVar1);
        FUN_140f40076(puVar1,&local_84,local_7c);
      } while (local_84 != local_80);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140da67de FUN_140da67de body=250 status=ok
// SIG undefined FUN_140da67de(void)

undefined8 FUN_140da67de(longlong param_1,undefined8 param_2,float param_3,undefined4 param_4)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0x70);
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      pfVar1 = (float *)(*(longlong *)(param_1 + 0x68) + uVar5 * 8);
      if (param_3 < *pfVar1 || param_3 == *pfVar1) goto LAB_140da6834;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
    uVar5 = (ulonglong)uVar2;
  }
LAB_140da6834:
  *(uint *)(param_1 + 0x70) = uVar2 + 1;
  if (*(uint *)(param_1 + 0x74) < uVar2 + 1) {
    FUN_140da6988((longlong *)(param_1 + 0x68),uVar2);
  }
  uVar4 = uVar5 & 0xffffffff;
  memmove((void *)(*(longlong *)(param_1 + 0x68) + uVar4 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x68) + uVar4 * 8),(ulonglong)(uVar2 - (int)uVar5) << 3);
  lVar3 = *(longlong *)(param_1 + 0x68);
  *(float *)(lVar3 + uVar4 * 8) = param_3;
  *(undefined4 *)(lVar3 + 4 + uVar4 * 8) = param_4;
  FUN_1406509a6(param_1 + 8,&stack0x00000028,uVar5 & 0xffffffff);
  FUN_140da68da(param_1,param_2,uVar5 & 0xffffffff);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da68da FUN_140da68da body=172 status=ok
// SIG undefined FUN_140da68da(void)

undefined4 * FUN_140da68da(longlong *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if (-1 < (int)param_3) {
    iVar1 = (**(code **)(*param_1 + 8))();
    uVar2 = 0;
    if ((int)param_3 < iVar1) {
      iVar1 = (int)param_1[0xc];
      if ((iVar1 <= (int)param_3) || ((ulonglong)param_3 * 4 + param_1[0xb] == 0)) {
        LOCK();
        UNLOCK();
        local_34 = DAT_14c761474 + 1;
        DAT_14c761474 = DAT_14c761474 + 1;
        FUN_1406509a6(param_1 + 1,&local_34,param_3);
        iVar1 = (int)param_1[0xc];
      }
      if ((int)param_3 < iVar1) {
        puVar3 = (undefined4 *)((ulonglong)param_3 * 4 + param_1[0xb]);
      }
      else {
        puVar3 = (undefined4 *)0x0;
      }
      uVar2 = *puVar3;
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da6988 FUN_140da6988 body=353 status=ok
// SIG undefined FUN_140da6988(void)

void FUN_140da6988(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140da6a0d;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140da6a0d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140da6aea FUN_140da6aea body=146 status=ok
// SIG undefined FUN_140da6aea(void)

undefined8 FUN_140da6aea(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40 [3];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0xf0))(param_1,local_40,param_2,param_3);
  uVar1 = local_40[0];
  if ((&DAT_149e41a24)[local_28] == '\x01') {
    local_40[0] = 0;
    (*(code *)(&PTR_LAB_149e404b0)[local_28])(local_40);
    local_28 = 2;
  }
  else {
    uVar1 = 0;
  }
  (*(code *)(&PTR_LAB_149e404b0)[local_28])(local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da6b7e FUN_140da6b7e body=1 status=ok
// SIG undefined FUN_140da6b7e(void)

void FUN_140da6b7e(void)

{
  return;
}



// FUNCTION 140da6ba6 FUN_140da6ba6 body=426 status=ok
// SIG undefined FUN_140da6ba6(void)

undefined8 * FUN_140da6ba6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  HANDLE hFile;
  undefined8 *puVar1;
  undefined8 uVar2;
  DWORD DVar3;
  undefined1 auStackY_298 [32];
  LARGE_INTEGER local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  char local_248;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_298;
  DVar3 = (uint)((char)param_4 * '\x02' & 4) + (param_4 & 1) * 2 + 1;
  FUN_140659024(&local_260,param_3);
  *(undefined2 *)CONCAT44(uStack_254,local_258) = 0;
  hFile = CreateFileW((LPCWSTR)local_260,0x80000000,DVar3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,
                      (HANDLE)0x0);
  if (local_248 == '\x01') {
    FUN_1400020a8(local_260.QuadPart);
  }
  if (hFile == (HANDLE)0xffffffffffffffff) {
    DVar3 = GetLastError();
    local_260.QuadPart = 0x149e3e286;
    local_258 = 0x1f;
    FUN_140da6d52(param_2,&local_260,DVar3);
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    *puVar1 = &PTR_FUN_149e40450;
    puVar1[1] = hFile;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 7) = 0x10000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined4 *)(puVar1 + 8) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[9] = 0x8000000000000000;
    *(DWORD *)(puVar1 + 10) = DVar3;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0x40000000;
    *(undefined2 *)(puVar1 + 0xf) = 0;
    GetFileSizeEx(hFile,&local_260);
    ((LARGE_INTEGER *)(puVar1 + 2))->QuadPart = (LONGLONG)local_260;
    uVar2 = FUN_14001cc68(0x10000,0);
    puVar1[5] = uVar2;
    uVar2 = FUN_14001cc68(0x10000,0);
    puVar1[6] = uVar2;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    FUN_140756b76(puVar1,0);
    *param_2 = puVar1;
  }
  *(bool *)(param_2 + 3) = hFile == (HANDLE)0xffffffffffffffff;
  if ((local_40 ^ (ulonglong)auStackY_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da6d52 FUN_140da6d52 body=149 status=ok
// SIG undefined FUN_140da6d52(void)

longlong * FUN_140da6d52(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_30,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_30 == param_1) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_30;
    *(undefined4 *)(param_1 + 1) = local_28;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  }
  *(undefined4 *)(param_1 + 2) = param_3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da6de8 FUN_140da6de8 body=38 status=ok
// SIG undefined FUN_140da6de8(void)

void FUN_140da6de8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140da6e0e(*(undefined8 *)(param_1 + 0x260));
  if (lVar1 == 0) {
    return;
  }
  FUN_1457a9b24(lVar1);
  return;
}



// FUNCTION 140da6e0e FUN_140da6e0e body=153 status=ok
// SIG undefined FUN_140da6e0e(void)

ulonglong FUN_140da6e0e(ulonglong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (DAT_14cb99578 != DAT_14cb995a4) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar4 = &DAT_14cb995a8;
    if (DAT_14cb995b0 != (undefined *)0x0) {
      puVar4 = DAT_14cb995b0;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14cb995b8 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      while (puVar1 = (ulonglong *)(DAT_14cb99570 + (longlong)iVar3 * 0x18), *puVar1 != param_1) {
        iVar3 = (int)puVar1[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (puVar1 != (ulonglong *)0x0) {
        if (puVar1 + 1 != (ulonglong *)0x0) {
          return puVar1[1];
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140da6ea8 FUN_140da6ea8 body=101 status=ok
// SIG undefined FUN_140da6ea8(void)

undefined8 * FUN_140da6ea8(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_149ecb4f0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140da6f1c FUN_140da6f1c body=31 status=ok
// SIG undefined FUN_140da6f1c(void)

undefined8 FUN_140da6f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140da6f3c FUN_140da6f3c body=355 status=ok
// SIG undefined FUN_140da6f3c(void)

void FUN_140da6f3c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    FUN_140da70a0();
    local_40 = 1;
    local_48 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_30,lVar5,DAT_14caa6e28);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
      if (local_30 != 0) {
        LOCK();
        puVar1 = (uint *)(local_30 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_30 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_30 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = local_30;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar9 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar9) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar9) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_30;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da70a0 FUN_140da70a0 body=423 status=ok
// SIG undefined FUN_140da70a0(void)

undefined * FUN_140da70a0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa6e60) {
    FUN_144b3d300(&DAT_14caa6e60);
    if (DAT_14caa6e60 == -1) {
      FUN_140da7248(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LandscapeParameters";
      local_78 = L"FLandscapeUniformShaderParameters";
      local_50 = 0x100;
      local_58 = 0x68;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa6de0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143262c22);
      _Init_thread_footer(&DAT_14caa6e60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caa6de0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da7248 FUN_140da7248 body=226 status=ok
// SIG undefined FUN_140da7248(void)

longlong * FUN_140da7248(longlong *param_1)

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
  pcVar13 = FUN_14632623a;
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



// FUNCTION 140da732c FUN_140da732c body=104 status=ok
// SIG undefined FUN_140da732c(void)

void FUN_140da732c(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x9a28) = 0;
  bVar1 = *(byte *)(param_1 + 0x65);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x3c08) + 0x10))(param_1 + 0x3c08);
  FUN_140893a5c(uVar2);
  FUN_140da7394(param_1);
  if (((bVar1 & 0x18) != 0x10) && (*(char *)(param_1 + 0x178) == '\x03')) {
    FUN_140cf87a4(param_1 + 0x60e8,1);
    FUN_140cf9a2a(param_1);
    return;
  }
  return;
}



// FUNCTION 140da7394 FUN_140da7394 body=158 status=ok
// SIG undefined FUN_140da7394(void)

void FUN_140da7394(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*param_1 + 0x738))();
  FUN_1407fb560(param_1);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar3 = (longlong *)(**(code **)(param_1[0x219] + 0x20))(param_1 + 0x219);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (param_1[0x6ba] != 0) {
    FUN_140521208();
    param_1[0x6ba] = 0;
    plVar3 = (longlong *)param_1[0x6bb];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x6bb] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140da742e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140da7432 FUN_140da7432 body=293 status=ok
// SIG undefined FUN_140da7432(void)

undefined8 FUN_140da7432(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140da7551;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140da7551;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140da7551:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140da74fa;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140da74fa;
    }
  }
  uVar6 = 0;
LAB_140da74fa:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da7558 FUN_140da7558 body=420 status=ok
// SIG undefined FUN_140da7558(void)

void FUN_140da7558(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1449027d0(param_1,&local_50);
  lVar3 = *(longlong *)(local_50 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  param_2 = param_2 * 100.0;
  if (100.0 <= param_2) {
    param_2 = 100.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if ((param_2 < 75.0) || (*(char *)(lVar3 + 0x1a0) != '\0')) {
    if ((param_2 < 75.0) && (*(char *)(lVar3 + 0x1a0) != '\0')) {
      FUN_140da76fe(param_1,&DAT_14cbd8bc0);
      if (*(char *)(lVar3 + 0x1a0) == '\0') {
        if (*(int *)(lVar3 + 0x1a4) != 0) goto LAB_140da75f8;
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(lVar3 + 0x1a4) + 1;
      }
      uVar5 = 0;
      goto LAB_140da769a;
    }
  }
  else {
    FUN_140da76fe(param_1,&DAT_14cbd8b98);
    if (*(char *)(lVar3 + 0x1a0) == '\0') {
      iVar4 = *(int *)(lVar3 + 0x1a4) + 1;
    }
    else {
      if (*(int *)(lVar3 + 0x1a4) != 0) goto LAB_140da75f8;
      iVar4 = 1;
    }
    uVar5 = 1;
LAB_140da769a:
    *(undefined1 *)(lVar3 + 0x1a0) = uVar5;
    *(int *)(lVar3 + 0x1a4) = iVar4;
  }
LAB_140da75f8:
  if ((param_2 != *(float *)(lVar3 + 200)) || (NAN(param_2) || NAN(*(float *)(lVar3 + 200)))) {
    iVar4 = *(int *)(lVar3 + 0xcc) + 1;
  }
  else {
    if (*(int *)(lVar3 + 0xcc) != 0) goto LAB_140da7621;
    iVar4 = 1;
  }
  *(float *)(lVar3 + 200) = param_2;
  *(int *)(lVar3 + 0xcc) = iVar4;
LAB_140da7621:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da76fe FUN_140da76fe body=528 status=ok
// SIG undefined FUN_140da76fe(void)

void FUN_140da76fe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_80 = &local_48;
      local_48 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1459f2e4c;
      local_88 = &LAB_148c39de3;
      local_90 = &LAB_1457a9eb2;
      local_98 = &DAT_149e063b2;
      local_a0 = (longlong *)0x0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if ((cVar2 != '\0') && (DAT_14cb7d368 != 0)) {
        lVar3 = FUN_144815d88(DAT_14cb7d368,param_2);
        if (lVar3 != 0) {
          puVar4 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
            puVar4 = *(undefined4 **)(lVar3 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar3 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar3);
            DAT_14c947fe0 = lVar3;
          }
          FUN_140045924(DAT_14c947fe0,&local_60,puVar4,1);
          local_58 = 0x7012;
          local_50 = 0;
          local_48 = local_60;
          local_40 = 0x7012;
          local_38 = 0;
          local_b0 = local_b0 & 0xffffff00;
          local_b8 = local_b8 & 0xffffff00;
          local_a8 = 0x3f800000;
          local_a0 = plVar1;
          FUN_140cab31c(plVar1,&local_48,0xff,plVar1 + 300);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da7910 FUN_140da7910 body=732 status=ok
// SIG undefined FUN_140da7910(void)

void FUN_140da7910(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  (**(code **)(*param_1 + 0x7a8))(param_1,&local_e8);
  puVar14 = &local_e8;
  puVar15 = param_3;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  FUN_144a6c088(param_1,&local_e8,param_2);
  *(undefined4 *)(param_3 + 0x14) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_3 + 0xa4) = local_e8._4_4_;
  *(undefined4 *)(param_3 + 0x15) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_3 + 0xac) = uStack_e0._4_4_;
  if (*(char *)((longlong)param_3 + 0xae) == '\x01') {
    uVar11 = (ushort)((int)param_1[0xf4] != 0) * 2;
  }
  else {
    uVar11 = 0;
  }
  *(ushort *)((longlong)param_3 + 0x9c) =
       uVar11 | *(byte *)((longlong)param_3 + 0xaf) | (ushort)DAT_14c760e18 << 4;
  lVar12 = param_1[0xcc];
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar12);
  }
  dVar1 = *(double *)(lVar12 + 0x200);
  dVar2 = *(double *)(lVar12 + 0x208);
  dVar3 = *(double *)(lVar12 + 0x210);
  dVar4 = *(double *)(lVar12 + 0x218);
  dVar5 = *(double *)(lVar12 + 0x220);
  dVar6 = *(double *)(lVar12 + 0x228);
  *(float *)((longlong)param_3 + 0x84) = (float)(dVar1 - dVar4);
  *(float *)(param_3 + 0x11) = (float)(dVar2 - dVar5);
  *(float *)((longlong)param_3 + 0x8c) = (float)(dVar3 - dVar6);
  *(float *)(param_3 + 0x12) = (float)(dVar1 + dVar4);
  *(float *)((longlong)param_3 + 0x94) = (float)(dVar2 + dVar5);
  *(float *)(param_3 + 0x13) = (float)(dVar3 + dVar6);
  *(int *)(param_3 + 0x16) = (int)param_1[0x184];
  *(undefined4 *)((longlong)param_3 + 0xb4) = 0;
  *(int *)(param_3 + 0x17) = (int)param_1[0xf4];
  local_128 = param_3[0x18];
  uStack_e0 = param_3[0x19];
  local_118 = (longlong *)param_3[0x1a];
  uStack_d0 = param_3[0x1b];
  local_c8 = param_3[0x1c];
  uStack_c0 = param_3[0x1d];
  local_b8 = param_3[0x1e];
  uStack_b0 = param_3[0x1f];
  uVar9 = local_b8;
  uVar10 = uStack_b0;
  local_d8 = local_118;
  uVar8 = uStack_d0;
  local_e8 = local_128;
  uVar7 = uStack_e0;
  param_3[0x1e] = CONCAT44(uStack_f4,local_f8);
  param_3[0x1f] = CONCAT44(uStack_ec,uStack_f0);
  param_3[0x1c] = &PTR_LAB_14a3a6d70;
  param_3[0x1d] = param_1;
  param_3[0x1a] = 0;
  param_3[0x1b] = CONCAT44(uStack_10c,uStack_110);
  param_3[0x18] = &LAB_1432425cc;
  param_3[0x19] = CONCAT44(uStack_11c,uStack_120);
  uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
  uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
  local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_f8 = (undefined4)local_b8;
  uStack_f4 = local_b8._4_4_;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  uStack_110 = (undefined4)uStack_d0;
  uStack_10c = uStack_d0._4_4_;
  uStack_120 = (undefined4)uStack_e0;
  uStack_11c = uStack_e0._4_4_;
  uStack_e0 = uVar7;
  uStack_d0 = uVar8;
  local_b8 = uVar9;
  uStack_b0 = uVar10;
  if (local_128 != 0) {
    plVar13 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar13 = &local_108;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da7bee FUN_140da7bee body=95 status=ok
// SIG undefined FUN_140da7bee(void)

void FUN_140da7bee(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140655806(param_1,iVar2);
    }
    FUN_140da7c4d((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 140da7c4d FUN_140da7c4d body=80 status=ok
// SIG undefined FUN_140da7c4d(void)

void FUN_140da7c4d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140da7c9e FUN_140da7c9e body=160 status=ok
// SIG undefined FUN_140da7c9e(void)

void FUN_140da7c9e(longlong *param_1,undefined4 param_2)

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
        goto LAB_140da7d29;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140da7d29:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140da7d3e FUN_140da7d3e body=520 status=ok
// SIG undefined FUN_140da7d3e(void)

bool FUN_140da7d3e(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  code *local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = FUN_14026506e();
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_110 = &local_f0;
        local_f0 = FUN_141864c34;
        local_100 = FUN_14081d0ea;
        local_108 = &LAB_1464cee30;
        local_118 = &LAB_148bfac22;
        local_120 = &LAB_140f21842;
        local_128 = &DAT_149e063b2;
        local_130 = 0;
        local_138 = 0x10000004;
        local_140 = 0x10;
        local_148 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        bVar2 = false;
        if (*(longlong **)(&DAT_00006850 + lVar1) != (longlong *)0x0) {
          lVar1 = (**(code **)(**(longlong **)(&DAT_00006850 + lVar1) + 0xf30))();
          local_f0 = (code *)0x0;
          local_e8 = 0;
          FUN_14009d848(&local_f0,lVar1);
          FUN_1407b7224(local_e0,lVar1 + 0x10);
          local_d0 = 0;
          local_c8 = 0;
          FUN_14009d848(&local_d0,lVar1 + 0x20);
          FUN_1407b7224(local_c0,lVar1 + 0x30);
          local_b0 = *(undefined8 *)(lVar1 + 0x40);
          uStack_a8 = *(undefined8 *)(lVar1 + 0x48);
          local_a0 = *(undefined4 *)(lVar1 + 0x50);
          uStack_9c = *(undefined4 *)(lVar1 + 0x54);
          uStack_98 = *(undefined4 *)(lVar1 + 0x58);
          uStack_94 = *(undefined4 *)(lVar1 + 0x5c);
          local_90 = *(undefined4 *)(lVar1 + 0x60);
          uStack_8c = *(undefined4 *)(lVar1 + 100);
          uStack_88 = *(undefined4 *)(lVar1 + 0x68);
          uStack_84 = *(undefined4 *)(lVar1 + 0x6c);
          local_80 = *(undefined8 *)(lVar1 + 0x70);
          local_58 = 0;
          local_50 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_4c = 0xffffffff00000080;
          local_44 = 0;
          local_38 = 0;
          local_30 = 0;
          FUN_140d188f2(&local_78,lVar1 + 0x78);
          lVar1 = FUN_14075fac2(&local_f0);
          bVar2 = lVar1 != 0;
          FUN_140da7f48(&local_f0);
        }
        goto LAB_140da7d6e;
      }
    }
  }
  bVar2 = false;
LAB_140da7d6e:
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da7f48 FUN_140da7f48 body=257 status=ok
// SIG undefined FUN_140da7f48(void)

void FUN_140da7f48(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xf);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 4;
  if ((int)param_1[5] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140da7f9a;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140da7f9a:
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((int)param_1[1] != 0) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140da804a FUN_140da804a body=45 status=ok
// SIG undefined FUN_140da804a(void)

undefined8 FUN_140da804a(undefined8 param_1,int param_2)

{
  FUN_140da8078();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 140da8078 FUN_140da8078 body=973 status=ok
// SIG undefined FUN_140da8078(void)

void FUN_140da8078(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d3020;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x4e;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x52) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x51)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x51)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x46;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x4a) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x49)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x49)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x3d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x41) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x40)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x40)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x34;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x37)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x37)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x25;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x29) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x28)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x1e;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x22) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x21)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x21)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140da8446 FUN_140da8446 body=336 status=ok
// SIG undefined FUN_140da8446(void)

void FUN_140da8446(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  cVar2 = *(char *)(param_2 + 0x6c);
  if (cVar2 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x460);
    lVar5 = (longlong)iVar4;
    if (lVar5 == 0) {
      return;
    }
    if ((*(byte *)(param_2 + 0x78) & 2) == 0) goto LAB_140da8568;
  }
  else {
    if ((*(byte *)(param_2 + 0x78) & 2) == 0) {
      iVar4 = *(int *)(param_1 + 0x450);
      if ((longlong)iVar4 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x448);
        lVar7 = 0;
        do {
          FUN_140da8596(*(undefined8 *)(lVar5 + lVar7),param_2,0xff,*(undefined1 *)(param_1 + 0x318)
                       );
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar4 * 8 != lVar7);
      }
      if (cVar2 == '\x02') {
        return;
      }
      lVar5 = (longlong)*(int *)(param_1 + 0x460);
      if (lVar5 == 0) {
        return;
      }
LAB_140da8568:
      puVar6 = *(undefined8 **)(param_1 + 0x458);
      puVar1 = puVar6 + lVar5;
      do {
        FUN_140da8596(*puVar6,param_2,0xff,*(undefined1 *)(param_1 + 0x318));
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
      return;
    }
    bVar3 = *(byte *)(param_2 + 0x74);
    if (((int)(uint)bVar3 < *(int *)(param_1 + 0x450)) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x448) + (ulonglong)bVar3 * 8), lVar5 != 0)) {
      FUN_140da8596(lVar5,param_2,1 << (bVar3 & 0x1f),*(undefined1 *)(param_1 + 0x318));
    }
    if (cVar2 == '\x02') {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x460);
  }
  bVar3 = *(byte *)(param_2 + 0x74);
  if (((int)(uint)bVar3 < iVar4) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x458) + (ulonglong)bVar3 * 8), lVar5 != 0)) {
    FUN_140da8596(lVar5,param_2,1 << (bVar3 & 0x1f),*(undefined1 *)(param_1 + 0x318));
    return;
  }
  return;
}



// FUNCTION 140da8596 FUN_140da8596 body=1370 status=ok
// SIG undefined FUN_140da8596(void)

void FUN_140da8596(longlong param_1,undefined8 *param_2,undefined1 param_3,uint param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_2[2] == 0) && ((param_2[8] == 0 || (0xfffffffd < *(int *)(param_2 + 9) - 1U)))) ||
      (lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x40)), lVar8 == 0)) ||
     (iVar6 = FUN_14490d72a(lVar8), iVar6 == 1)) goto LAB_140da8865;
  if ((*(byte *)((longlong)param_2 + 0x79) & 1) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    iVar6 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar6 + 1U) {
      FUN_1457a9d1c(plVar1,iVar6);
    }
    lVar8 = (longlong)iVar6 * 0xd8;
    FUN_140da8e32(*plVar1 + lVar8,param_2);
    puVar11 = (uint *)(*plVar1 + 0x78 + lVar8);
    *puVar11 = *puVar11 & 0xfffffeff;
    *(undefined1 *)(*plVar1 + 0x74 + lVar8) = param_3;
    goto LAB_140da8865;
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  iVar6 = *(int *)(param_1 + 0x98);
  uVar7 = iVar6 + 1;
  *(uint *)(param_1 + 0x98) = uVar7;
  if (*(uint *)(param_1 + 0x9c) < uVar7) {
    FUN_140da8d1e(plVar1);
  }
  lVar12 = (longlong)iVar6 * 0xf0;
  memset((void *)(*plVar1 + lVar12),0,0xf0);
  lVar8 = *plVar1 + lVar12;
  puVar2 = (undefined8 *)(*plVar1 + lVar12);
  puVar11 = (uint *)(puVar2 + 0x11);
  *puVar2 = *param_2;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0xd);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)puVar2 + 0x14) = param_3;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = param_2[0xb];
  *(undefined8 *)((longlong)puVar2 + 0x24) = param_2[0xc];
  *(undefined4 *)((longlong)puVar2 + 0x84) = *(undefined4 *)((longlong)param_2 + 0xd4);
  puVar2[8] = param_2[0x12];
  uVar9 = param_2[0x11];
  puVar2[6] = param_2[0x10];
  puVar2[7] = uVar9;
  uVar9 = param_2[0x14];
  puVar2[10] = param_2[0x13];
  puVar2[0xb] = uVar9;
  puVar2[0xc] = param_2[0x15];
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x16);
  puVar2[0xf] = param_2[0x19];
  uVar9 = param_2[0x18];
  puVar2[0xd] = param_2[0x17];
  puVar2[0xe] = uVar9;
  *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(param_2 + 0x1a);
  lVar12 = FUN_1402d1dc0(param_2 + 1);
  if (lVar12 == 0) {
    puVar11[0] = 0;
    puVar11[1] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    *(undefined4 *)(lVar8 + 0xa8) = 0;
    if (*(int *)(lVar8 + 0xac) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar8 + 0xa0),0);
    }
    puVar3 = *(undefined2 **)(lVar8 + 0xa0);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_70,lVar12);
    *(undefined4 *)(lVar8 + 0x90) = local_70;
    *(undefined4 *)(lVar8 + 0x94) = uStack_6c;
    *(undefined4 *)(lVar8 + 0x98) = uStack_68;
    *(undefined4 *)(lVar8 + 0x9c) = uStack_64;
    if ((undefined4 *)(lVar8 + 0x90) == &local_70) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar8 + 0xa0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar8 + 0xa0) = local_60;
      local_60 = 0;
      *(undefined4 *)(lVar8 + 0xa8) = local_58;
      *(undefined4 *)(lVar8 + 0xac) = uStack_54;
    }
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    uVar7 = *(uint *)(lVar12 + 0xc);
    if (cVar5 != '\0') {
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      if ((*(uint *)(lVar12 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(lVar8 + 0x88) = 0;
        goto LAB_140da8758;
      }
    }
    *puVar11 = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar10;
      }
    }
    *(int *)(lVar8 + 0x8c) = iVar6;
  }
LAB_140da8758:
  FUN_14065c7a4(lVar8 + 0xb0,param_2 + 6);
  if ((param_2[8] == 0) || (0xfffffffd < *(int *)(param_2 + 9) - 1U)) {
    *(undefined8 *)(lVar8 + 0xc0) = 0;
  }
  else {
    local_78 = param_2[8];
    FUN_1446dcdd4(&local_70);
    if (DAT_14cb78bf0 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_144837462(DAT_14cb78bf0,&local_70);
    }
    *(undefined8 *)(lVar8 + 0xc0) = uVar9;
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  bVar4 = 4;
  if (((ABS((double)param_2[0x17]) <= 9.999999747378752e-05) &&
      (ABS((double)param_2[0x18]) <= 9.999999747378752e-05)) &&
     (ABS((double)param_2[0x19]) <= 9.999999747378752e-05)) {
    bVar4 = (1e-08 < ABS(*(float *)(param_2 + 0x1a) + -1.0)) << 2;
  }
  *(byte *)(lVar8 + 0x15) = *(byte *)(lVar8 + 0x15) & 0xf3 | bVar4;
  FUN_140da8af2(lVar8,*(undefined8 *)(param_1 + 0x40));
  if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
    bVar4 = *(byte *)(lVar8 + 0x15);
    *(byte *)(lVar8 + 0x15) = bVar4 & 0xfe;
    if ((((*(byte *)(param_1 + 0x78) & 2) == 0) || ((*(byte *)(param_1 + 0x78) & 4) != 0)) ||
       ((*(uint *)(lVar8 + 0x10) & 0x20) == 0)) {
      if (((*(char *)(param_1 + 9) == '\0') && ((*(byte *)(lVar8 + 0x10) & 1) != 0)) &&
         ((*(uint *)(lVar8 + 0x84) == 0 || ((*(uint *)(lVar8 + 0x84) >> (param_4 & 0x1f) & 1) != 0))
         )) {
        FUN_140980b4a(param_1,lVar8);
        FUN_140980756(param_1,lVar8,0);
      }
    }
    else {
      *(byte *)(lVar8 + 0x15) = bVar4 | 1;
    }
  }
LAB_140da8865:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140da8af2 FUN_140da8af2 body=555 status=ok
// SIG undefined FUN_140da8af2(void)

bool FUN_140da8af2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 200) = 0xff;
  lVar6 = FUN_1402d1dc0(param_1 + 0x88);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 0xcc) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
  }
  *(int *)(param_1 + 0xd0) = iVar5;
  puVar1 = (undefined8 *)(param_1 + 0xd8);
  FUN_14065c7a4(puVar1,param_1 + 0xb0);
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (plVar3 != (longlong *)0x0) {
    local_40 = 0;
    local_38 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_60 = param_2;
    lVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_60,&local_40,param_1 + 200);
    if (lVar6 != 0) {
      uVar2 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0xcc) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar5 = iVar7;
        }
      }
      iVar7 = local_38;
      uVar4 = local_40;
      *(int *)(param_1 + 0xd0) = iVar5;
      *(int *)(param_1 + 0xe0) = local_38;
      if (local_38 == 0 && *(int *)(param_1 + 0xe4) == 0) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      else {
        FUN_1405bd402(puVar1,local_38);
        FUN_1405bd2e2(*puVar1,uVar4,iVar7);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3 != (longlong *)0x0;
}



// FUNCTION 140da8d1e FUN_140da8d1e body=274 status=ok
// SIG undefined FUN_140da8d1e(void)

void FUN_140da8d1e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xf0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140da8e32 FUN_140da8e32 body=221 status=ok
// SIG undefined FUN_140da8e32(void)

undefined8 * FUN_140da8e32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1405bd402(param_1 + 6,iVar1,0);
    FUN_1405bd2e2(param_1[6],uVar2,iVar1);
  }
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  puVar7 = param_2 + 0xb;
  puVar8 = param_1 + 0xb;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  return param_1;
}



// FUNCTION 140da8f16 FUN_140da8f16 body=1520 status=ok
// SIG undefined FUN_140da8f16(void)

void FUN_140da8f16(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong ***ppplVar6;
  longlong lVar7;
  longlong lVar8;
  longlong ***ppplVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong **local_88 [6];
  longlong **local_58;
  longlong **local_50;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14037e420();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8442bc) {
    FUN_144b3d300(&DAT_14c8442bc);
    if (DAT_14c8442bc == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
  }
  if (DAT_14c872bf0 == '\x01') {
    if ((DAT_14c872bf1 == '\x01') && ((DAT_14c8442b8 & 1) == 0)) goto LAB_140da8f7c;
LAB_140da8f9d:
    lVar7 = param_1[0x58];
    if ((longlong)(int)lVar7 != 0) {
      lVar8 = param_1[0x57];
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + 0x10 + lVar10) != 0) {
          *(undefined8 *)(lVar8 + 0x10 + lVar10) = 0;
          FUN_1401fc67c();
        }
        lVar10 = lVar10 + 0x50;
      } while ((longlong)(int)lVar7 * 0x50 != lVar10);
    }
  }
  else {
    if (DAT_14c8442b8 != 0) goto LAB_140da8f9d;
LAB_140da8f7c:
    FUN_14356a991(param_1,param_1 + 0x57,param_1 + 0x59);
  }
  FUN_1401fc455(param_1[0x57],(int)param_1[0x58]);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)((longlong)param_1 + 0x2c4) != 0) {
    FUN_1405c03aa(param_1 + 0x57,0);
  }
  if (param_1[0x22] != 0) {
    FUN_1400337aa();
  }
  iVar3 = (int)param_1[0x37];
  if (0 < iVar3) {
    lVar8 = 0x10;
    lVar7 = 0;
    do {
      if (*(longlong *)(param_1[0x36] + lVar8) != 0) {
        FUN_1400337aa();
        iVar3 = (int)param_1[0x37];
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar7 < iVar3);
  }
  iVar3 = (int)param_1[0x39];
  if (0 < iVar3) {
    lVar8 = 0x10;
    lVar7 = 0;
    do {
      if (*(longlong *)(param_1[0x38] + lVar8) != 0) {
        FUN_1400337aa();
        iVar3 = (int)param_1[0x39];
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar7 < iVar3);
  }
  iVar3 = (int)param_1[0x3b];
  if (0 < iVar3) {
    lVar8 = 0x10;
    lVar7 = 0;
    do {
      if (*(longlong *)(param_1[0x3a] + lVar8) != 0) {
        FUN_1400337aa();
        iVar3 = (int)param_1[0x3b];
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar7 < iVar3);
  }
  iVar3 = (int)param_1[0x3d];
  if (0 < iVar3) {
    lVar8 = 0x10;
    lVar7 = 0;
    do {
      if (*(longlong *)(param_1[0x3c] + lVar8) != 0) {
        FUN_1400337aa();
        iVar3 = (int)param_1[0x3d];
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar7 < iVar3);
  }
  iVar3 = (int)param_1[0x3f];
  if (0 < iVar3) {
    lVar8 = 0x10;
    lVar7 = 0;
    do {
      if (*(longlong *)(param_1[0x3e] + lVar8) != 0) {
        FUN_1400337aa();
        iVar3 = (int)param_1[0x3f];
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar7 < iVar3);
  }
  if ((*(byte *)(param_1 + 0x55) & 1) != 0) {
    lVar7 = param_1[0x4d];
    if ((longlong)(int)lVar7 != 0) {
      lVar8 = param_1[0x4c];
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar10) != 0) {
          FUN_1400337aa();
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar7 * 8 != lVar10);
    }
    lVar7 = param_1[0x4f];
    if ((longlong)(int)lVar7 != 0) {
      lVar8 = param_1[0x4e];
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar10) != 0) {
          FUN_1400337aa();
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar7 * 8 != lVar10);
    }
  }
  lVar7 = param_1[0x18];
  if ((lVar7 != 0) && (iVar3 = *(int *)(lVar7 + 0x3a8), (longlong)iVar3 != 0)) {
    lVar7 = *(longlong *)(lVar7 + 0x3a0);
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar7 + lVar8) != 0) {
        FUN_1400337aa();
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  FUN_1403bc1fe(DAT_14ca85550,param_1 + 0x2c);
  if (param_1[0x49] != 0) {
    FUN_1403bde7a(param_1);
  }
  bVar1 = FUN_1402eeec8();
  FUN_1403b9b5a(param_1,bVar1 ^ 1);
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar4 = iVar3 + 0xffff;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  if ((iVar4 >> 0x10 < DAT_14c964390) &&
     (lVar7 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar7 != 0)) {
    lVar7 = *(longlong *)(lVar7 + (longlong)(iVar3 % 0x10000) * 0x10);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (lVar7 != 0) {
      iVar3 = *(int *)((longlong)param_1 + 0xc);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      iVar4 = iVar3 + 0xffff;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      if ((iVar4 >> 0x10 < DAT_14c964390) &&
         (lVar7 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar7 != 0))
      {
        lVar7 = *(longlong *)(lVar7 + (longlong)(iVar3 % 0x10000) * 0x10);
      }
      else {
        lVar7 = 0;
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      if (*(int *)(lVar7 + 0x280) < 0x132) {
        FUN_147bb20d8(&DAT_14caea550,0xcfed5815,&DAT_14a9ce93c);
        local_50 = &local_90;
        local_58 = (longlong **)&DAT_14a9ce93c;
        local_90 = param_1;
        FUN_147bb214c(&DAT_14caea550,&local_98,&local_58,0);
      }
    }
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  }
  cVar2 = FUN_1406917e6();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x4a0))(param_1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x4a8))(param_1);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_1 + 0x4b0))(param_1);
        if (cVar2 == '\0') goto LAB_140da9363;
      }
    }
    local_98 = 0x9e00;
    local_58 = &local_90;
    local_90 = (longlong *)&DAT_14cae9e78;
    local_50 = (longlong **)CONCAT44(local_50._4_4_,1);
    ppplVar9 = local_88;
    FUN_1408ecec8(param_1,ppplVar9);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4a8))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x4a0))(param_1);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_1 + 0x4b0))(param_1);
        if (cVar2 == '\0') goto LAB_140da9363;
      }
    }
    ppplVar9 = &local_58;
    local_38 = 0;
    local_30 = 0x400000000;
    uVar5 = (**(code **)(*param_1 + 0x350))(param_1,DAT_14c760db4,4);
    FUN_14365e3c6(&DAT_14cafb2e8,uVar5,ppplVar9);
  }
  ppplVar6 = (longlong ***)ppplVar9[4];
  if ((longlong ***)ppplVar9[4] == (longlong ***)0x0) {
    ppplVar6 = ppplVar9;
  }
  FUN_144717c65(ppplVar6,*(undefined4 *)(ppplVar9 + 5));
  if (ppplVar9[4] != (longlong **)0x0) {
    FUN_1400020a8();
  }
LAB_140da9363:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da9508 FUN_140da9508 body=664 status=ok
// SIG undefined FUN_140da9508(void)

undefined4 *
FUN_140da9508(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140da983e(param_1,local_50);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)local_48 = *param_3;
  *(undefined4 *)((longlong)local_48 + 4) = uVar3;
  *(undefined4 *)(local_48 + 1) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar5;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar1 = *local_48;
  uVar2 = local_48[1];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar11 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar11 >> 4);
  uVar11 = uVar8 >> 0xd ^ -uVar8;
  uVar12 = uVar11 << 8 ^ (-0x61c88647 - uVar8) - uVar11;
  uVar13 = uVar12 >> 0xd ^ (uVar8 - uVar11) - uVar12;
  uVar8 = uVar13 >> 0xc ^ (uVar11 - uVar12) - uVar13;
  uVar11 = uVar8 << 0x10 ^ (uVar12 - uVar13) - uVar8;
  uVar13 = uVar11 >> 5 ^ (uVar13 - uVar8) - uVar11;
  uVar14 = uVar13 >> 3 ^ (uVar8 - uVar11) - uVar13;
  uVar12 = uVar14 << 10 ^ (uVar11 - uVar13) - uVar14;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar11 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar11 >> 4);
  uVar11 = uVar8 >> 0xd ^ (uVar12 >> 0xf ^ uVar13 - (uVar14 + uVar12)) - uVar8;
  uVar13 = uVar11 << 8 ^ (-0x61c88647 - uVar8) - uVar11;
  uVar12 = uVar13 >> 0xd ^ (uVar8 - uVar11) - uVar13;
  uVar8 = uVar12 >> 0xc ^ (uVar11 - uVar13) - uVar12;
  uVar11 = uVar8 << 0x10 ^ (uVar13 - uVar12) - uVar8;
  uVar12 = uVar11 >> 5 ^ (uVar12 - uVar8) - uVar11;
  uVar8 = uVar12 >> 3 ^ (uVar8 - uVar11) - uVar12;
  uVar11 = uVar8 << 10 ^ (uVar11 - uVar12) - uVar8;
  uVar8 = uVar11 >> 0xf ^ uVar12 - (uVar8 + uVar11);
  local_68 = param_4;
  cVar6 = FUN_140da97a2(param_1,uVar8,local_48);
  if (cVar6 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar11 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x14) = uVar8;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_140da9a24(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140da97a2 FUN_140da97a2 body=155 status=ok
// SIG undefined FUN_140da97a2(void)

void FUN_140da97a2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  uVar5 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar5 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if ((*plVar6 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x18) == param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14701c1ce((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_140da9811;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
    uVar5 = 0;
  }
LAB_140da9811:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140da983e FUN_140da983e body=485 status=ok
// SIG undefined FUN_140da983e(void)

int * FUN_140da983e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1403951a8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140da9a24 FUN_140da9a24 body=968 status=ok
// SIG undefined FUN_140da9a24(void)

void FUN_140da9a24(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar6 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar11 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    iVar7 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_6c = iVar10;
        lVar9 = *param_1;
        lVar14 = (longlong)iVar12;
        uVar3 = *(undefined8 *)(lVar9 + lVar14 * 0x18);
        uVar4 = *(undefined8 *)(lVar9 + 8 + lVar14 * 0x18);
        uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar15 = (uint)uVar3 & 0xffff;
        uVar17 = ((uint)uVar3 << 0x10 | uVar15) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4);
        uVar15 = uVar17 >> 0xd ^ -uVar17;
        uVar6 = uVar15 << 8 ^ (-0x61c88647 - uVar17) - uVar15;
        uVar17 = uVar6 >> 0xd ^ (uVar17 - uVar15) - uVar6;
        uVar18 = uVar17 >> 0xc ^ (uVar15 - uVar6) - uVar17;
        uVar6 = uVar18 << 0x10 ^ (uVar6 - uVar17) - uVar18;
        uVar15 = uVar6 >> 5 ^ (uVar17 - uVar18) - uVar6;
        uVar18 = uVar15 >> 3 ^ (uVar18 - uVar6) - uVar15;
        uVar19 = uVar18 << 10 ^ (uVar6 - uVar15) - uVar18;
        uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar17 = (uint)uVar4 & 0xffff;
        uVar17 = ((uint)uVar4 << 0x10 | uVar17) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar17 >> 4);
        uVar6 = uVar17 >> 0xd ^ (uVar19 >> 0xf ^ uVar15 - (uVar18 + uVar19)) - uVar17;
        uVar18 = uVar6 << 8 ^ (-0x61c88647 - uVar17) - uVar6;
        uVar15 = uVar18 >> 0xd ^ (uVar17 - uVar6) - uVar18;
        uVar17 = uVar15 >> 0xc ^ (uVar6 - uVar18) - uVar15;
        uVar6 = uVar17 << 0x10 ^ (uVar18 - uVar15) - uVar17;
        uVar18 = uVar6 >> 5 ^ (uVar15 - uVar17) - uVar6;
        uVar15 = uVar18 >> 3 ^ (uVar17 - uVar6) - uVar18;
        uVar6 = uVar15 << 10 ^ (uVar6 - uVar18) - uVar15;
        uVar16 = (longlong)(int)(uVar6 >> 0xf ^ uVar18 - (uVar15 + uVar6)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar16;
        *(int *)(lVar9 + 0x14 + lVar14 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x10 + lVar14 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        uVar11 = ~(uint)uVar13 & uVar11;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        lVar9 = (longlong)iVar7;
        uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4) & uVar11;
        iVar10 = local_6c;
        if (uVar6 == 0) {
          iVar12 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar12 = iVar2 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar5 = iVar12;
          if (iVar12 < iVar7) {
            iVar5 = iVar7;
          }
          if (iVar12 <= iVar7) break;
          lVar14 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar6 = *(uint *)((longlong)plVar8 + lVar14 * 4 + lVar9 * 4 + 4);
            if (uVar6 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar5 - lVar9 == lVar14) goto LAB_140da9daf;
          }
          iVar7 = iVar7 + (int)lVar14 + 1;
          uVar11 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar16 = uVar13 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar2);
    }
  }
LAB_140da9daf:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140daa03e FUN_140daa03e body=153 status=ok
// SIG undefined FUN_140daa03e(void)

undefined8 * FUN_140daa03e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0af820;
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  if (*(char *)(param_1 + 0x32) == '\x01') {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140daa0d8 FUN_140daa0d8 body=57 status=ok
// SIG undefined FUN_140daa0d8(void)

void FUN_140daa0d8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = (longlong)*(int *)(param_1 + 0x10) << 5;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 140daa122 FUN_140daa122 body=83 status=ok
// SIG undefined FUN_140daa122(void)

void FUN_140daa122(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    uVar1 = 0;
  }
  else {
    if (*(longlong *)(param_2 + 0x40) != param_1) {
      return;
    }
    if (*(char *)(param_1 + 0x17c) != '\x01') {
      return;
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      return;
    }
    *(longlong *)(param_1 + 0x180) = param_2;
    uVar1 = FUN_140daa176(param_1);
  }
  *(undefined4 *)(param_1 + 0x188) = uVar1;
  return;
}



// FUNCTION 140daa176 FUN_140daa176 body=118 status=ok
// SIG undefined FUN_140daa176(void)

undefined4 FUN_140daa176(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x4c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar3 + 0x180))();
      if (lVar2 != 0) {
        uVar4 = *(undefined4 *)(lVar2 + 0x930);
      }
    }
  }
  return uVar4;
}



// FUNCTION 140daa1ec FUN_140daa1ec body=300 status=ok
// SIG undefined FUN_140daa1ec(void)

void FUN_140daa1ec(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [12];
  undefined1 local_b0 [64];
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar2 = FUN_140c23b2e(param_1);
    plVar3 = (longlong *)FUN_140ec3c65(uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60));
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_d0 = 0;
  local_c8 = 0;
  FUN_14106bb46(param_1);
  cVar1 = FUN_14106ba28(param_1);
  if (cVar1 == '\0') {
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = DAT_14cb7bd68;
    local_40 = DAT_14cb7bd70;
    local_3c = DAT_14cb7bd80;
    local_34 = DAT_14cb7bd88;
    local_30 = 0;
    local_28 = 0;
    local_c0[0] = 4;
    FUN_140daa42e(param_1,local_bc);
    FUN_14106b9aa(param_1,local_b0);
    FUN_140ac173c(&local_48,param_1 + 0x28);
    FUN_140daa31a(param_1,local_c0);
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140daa31a FUN_140daa31a body=92 status=ok
// SIG undefined FUN_140daa31a(void)

void FUN_140daa31a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_140daa376(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
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
                    /* WARNING: Could not recover jumptable at 0x000140daa372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140daa376 FUN_140daa376 body=54 status=ok
// SIG undefined FUN_140daa376(void)

void FUN_140daa376(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_140daa3ac();
  if (cVar2 == '\0') {
    uVar1 = FUN_1400bd1c2(param_1);
    FUN_140daa4ac(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140daa3ac FUN_140daa3ac body=129 status=ok
// SIG undefined FUN_140daa3ac(void)

bool FUN_140daa3ac(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x14))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar3;
      }
      else {
        lVar4 = 0;
      }
      if ((*(longlong *)(lVar4 + 0x30) != 0) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360) != 0)) {
        iVar2 = FUN_14490d72a();
        return iVar2 == 3;
      }
    }
  }
  return false;
}



// FUNCTION 140daa42e FUN_140daa42e body=126 status=ok
// SIG undefined FUN_140daa42e(void)

undefined8 * FUN_140daa42e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140daa47e;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x28);
      *param_2 = *(undefined8 *)(lVar4 + 0x20);
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
    if (lVar4 != 0) {
      return param_2;
    }
  }
LAB_140daa47e:
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return param_2;
}



// FUNCTION 140daa4ac FUN_140daa4ac body=954 status=ok
// SIG undefined FUN_140daa4ac(void)

void FUN_140daa4ac(longlong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  
  iVar14 = DAT_14cb7d150;
  uVar27 = 0;
  if (param_1 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(param_1 + 0x38);
  }
  uVar29 = 1;
  iVar23 = 0;
  iVar16 = 0;
  if (DAT_14cb7d150 != 0) {
    puVar24 = &DAT_14cb7d138;
    if (DAT_14cb7d148 != (uint *)0x0) {
      puVar24 = DAT_14cb7d148;
    }
    uVar25 = *puVar24;
    if (uVar25 == 0) {
      iVar16 = DAT_14cb7d150 + 0x1e;
      if (-1 < DAT_14cb7d150 + -1) {
        iVar16 = DAT_14cb7d150 + -1;
      }
      uVar27 = 0;
      uVar29 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar29 = uVar27;
      }
      iVar23 = 0;
      do {
        if (uVar29 == uVar27) {
          return;
        }
        iVar23 = iVar23 + 0x20;
        uVar25 = puVar24[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar27 = 0;
    }
    uVar29 = (ulonglong)(-uVar25 & uVar25);
    uVar1 = uVar29 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar16 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (DAT_14cb7d150 <= iVar16) {
      iVar16 = DAT_14cb7d150;
    }
  }
  if (iVar16 != DAT_14cb7d150) {
    uVar25 = 0xffffffff;
    do {
      lVar22 = (longlong)iVar16 * 0x20 + DAT_14cb7d128;
      cVar15 = FUN_1405f6df2(lVar22,uVar28);
      if ((cVar15 != '\0') && (iVar16 = *(int *)(lVar22 + 0x10), (longlong)iVar16 != 0)) {
        lVar22 = *(longlong *)(lVar22 + 8);
        lVar26 = 0;
        do {
          iVar17 = *(int *)(lVar22 + 4 + lVar26);
          if ((((iVar17 != 0) && (uVar20 = *(uint *)(lVar22 + lVar26), -1 < (int)uVar20)) &&
              ((int)uVar20 < DAT_14c9647dc)) &&
             (((plVar21 = (longlong *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
               plVar21 != (longlong *)0x0 && ((int)plVar21[2] == iVar17)) &&
              (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar3 = *plVar21, lVar3 != 0)))))) {
            iVar17 = *(int *)(lVar3 + 0x80);
            *(uint *)(lVar3 + 0x80) = iVar17 + 1U;
            if (*(uint *)(lVar3 + 0x84) < iVar17 + 1U) {
              FUN_1457ecdd8((longlong *)(lVar3 + 0x78),iVar17);
            }
            lVar4 = *(longlong *)(lVar3 + 0x78);
            lVar19 = (longlong)iVar17 * 0xa0;
            lVar3 = lVar4 + lVar19;
            uVar5 = *param_2;
            uVar6 = param_2[1];
            uVar7 = param_2[2];
            uVar8 = param_2[3];
            uVar9 = param_2[4];
            uVar10 = param_2[5];
            uVar11 = param_2[6];
            puVar2 = (undefined4 *)(lVar4 + 0xc + lVar19);
            *puVar2 = param_2[3];
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            puVar2 = (undefined4 *)(lVar4 + lVar19);
            *puVar2 = uVar5;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            cVar15 = *(char *)(param_2 + 0x14);
            *(char *)(lVar4 + 0x50 + lVar19) = cVar15;
            if (cVar15 == '\x01') {
              uVar5 = param_2[8];
              uVar6 = param_2[9];
              uVar7 = param_2[10];
              uVar8 = param_2[0xb];
              uVar9 = param_2[0xc];
              uVar10 = param_2[0xd];
              uVar11 = param_2[0xe];
              uVar12 = param_2[0xf];
              uVar13 = *(undefined8 *)(param_2 + 0x12);
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_2 + 0x10);
              *(undefined8 *)(lVar3 + 0x48) = uVar13;
              *(undefined4 *)(lVar3 + 0x30) = uVar9;
              *(undefined4 *)(lVar3 + 0x34) = uVar10;
              *(undefined4 *)(lVar3 + 0x38) = uVar11;
              *(undefined4 *)(lVar3 + 0x3c) = uVar12;
              *(undefined4 *)(lVar3 + 0x20) = uVar5;
              *(undefined4 *)(lVar3 + 0x24) = uVar6;
              *(undefined4 *)(lVar3 + 0x28) = uVar7;
              *(undefined4 *)(lVar3 + 0x2c) = uVar8;
            }
            *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(param_2 + 0x16);
            lVar4 = *(longlong *)(param_2 + 0x18);
            *(longlong *)(lVar3 + 0x60) = lVar4;
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            *(undefined8 *)(lVar3 + 0x68) = 0;
            iVar17 = param_2[0x1c];
            _Src = *(void **)(param_2 + 0x1a);
            *(int *)(lVar3 + 0x70) = iVar17;
            if ((longlong)iVar17 == 0) {
              *(undefined4 *)(lVar3 + 0x74) = 0;
            }
            else {
              FUN_1446dd7be((undefined8 *)(lVar3 + 0x68),iVar17,0);
              memcpy(*(void **)(lVar3 + 0x68),_Src,(longlong)iVar17 * 0xc);
            }
            *(undefined4 *)(lVar3 + 0x80) = param_2[0x20];
            *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(param_2 + 0x1e);
            *(undefined8 *)(lVar3 + 0x84) = *(undefined8 *)(param_2 + 0x21);
            *(undefined4 *)(lVar3 + 0x8c) = param_2[0x23];
            *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(param_2 + 0x24);
            *(undefined4 *)(lVar3 + 0x98) = param_2[0x26];
          }
          lVar26 = lVar26 + 8;
        } while ((longlong)iVar16 * 8 != lVar26);
      }
      uVar25 = uVar25 & ~(uint)uVar29;
      puVar24 = DAT_14cb7d148;
      if (DAT_14cb7d148 == (uint *)0x0) {
        puVar24 = &DAT_14cb7d138;
      }
      iVar16 = (int)uVar27;
      lVar22 = (longlong)iVar16;
      uVar20 = puVar24[lVar22] & uVar25;
      if (uVar20 == 0) {
        iVar17 = DAT_14cb7d150 + 0x1e;
        if (-1 < DAT_14cb7d150 + -1) {
          iVar17 = DAT_14cb7d150 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar18 = iVar17;
        if (iVar17 < iVar16) {
          iVar18 = iVar16;
        }
        if (iVar16 < iVar17) {
          lVar26 = 0;
          do {
            uVar20 = puVar24[lVar22 + lVar26 + 1];
            if (uVar20 != 0) {
              uVar27 = (ulonglong)(iVar16 + (int)lVar26 + 1);
              uVar25 = 0xffffffff;
              goto LAB_140daa771;
            }
            iVar23 = iVar23 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar18 - lVar22 != lVar26);
          uVar25 = 0xffffffff;
          iVar16 = iVar18;
        }
        uVar27 = (ulonglong)(iVar16 + 1);
        iVar16 = DAT_14cb7d150;
      }
      else {
LAB_140daa771:
        uVar29 = (ulonglong)(-uVar20 & uVar20);
        uVar1 = uVar29 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar16 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (DAT_14cb7d150 <= iVar16) {
          iVar16 = DAT_14cb7d150;
        }
      }
    } while (iVar16 != iVar14);
  }
  return;
}



// FUNCTION 140daa866 FUN_140daa866 body=53 status=ok
// SIG undefined FUN_140daa866(void)

void FUN_140daa866(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  FUN_140daa89c();
  uVar1 = FUN_14026189c(param_2,&DAT_14cbe7648,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x35c) = uVar1;
  return;
}



// FUNCTION 140daa89c FUN_140daa89c body=97 status=ok
// SIG undefined FUN_140daa89c(void)

void FUN_140daa89c(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  FUN_140daa8fe();
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7650);
  *(undefined2 *)(param_1 + 0x2d8) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cbe7658);
  *(undefined2 *)(param_1 + 0x2da) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cbe7660,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x2dc) = uVar1;
  return;
}



// FUNCTION 140daa8fe FUN_140daa8fe body=431 status=ok
// SIG undefined FUN_140daa8fe(void)

void FUN_140daa8fe(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140daaaae();
  local_70 = 0x40200000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xf00000d0;
  local_30 = 0;
  local_28 = 0x3f800000;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb947a0);
  *(undefined2 *)(param_1 + 0x2ba) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb947a8,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 700) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb947b0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x2be) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb947b8);
  *(undefined2 *)(param_1 + 0x2c0) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb947c0);
  *(undefined2 *)(param_1 + 0x2c2) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb947c8);
  *(undefined2 *)(param_1 + 0x2c4) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb947d0);
  *(undefined2 *)(param_1 + 0x2c6) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb947d8);
  *(undefined2 *)(param_1 + 0x2c8) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb947e0);
  *(undefined2 *)(param_1 + 0x2ca) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb947e8,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x2cc) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb947f0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x2ce) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb947f8);
  *(undefined2 *)(param_1 + 0x2d0) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94800,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x2d2) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140daaaae FUN_140daaaae body=552 status=ok
// SIG undefined FUN_140daaaae(void)

void FUN_140daaaae(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94808,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94810,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  local_b0[0] = 0x44fa0000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xf00000d0;
  local_70 = 0;
  local_68 = 0x3f800000;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94818,local_b0);
  *(undefined2 *)(param_1 + 0x36) = uVar1;
  local_b0[0] = 0x44fa0000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xf00000d0;
  local_70 = 0;
  local_68 = 0x3f800000;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94820,local_b0);
  *(undefined2 *)(param_1 + 0x38) = uVar1;
  local_b0[0] = 0x44fa0000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xf00000d0;
  local_70 = 0;
  local_68 = 0x3f800000;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94828,local_b0);
  *(undefined2 *)(param_1 + 0x3a) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94830,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  local_b0[0] = 0x3f000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xf00000d0;
  local_70 = 0;
  local_68 = 0x3f800000;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94838,local_b0);
  *(undefined2 *)(param_1 + 0x3e) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94840,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94848,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x42) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94850,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb94858);
  *(undefined2 *)(param_1 + 0x46) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94860,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb94868,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x4a) = uVar1;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140daacec FUN_140daacec body=137 status=ok
// SIG undefined FUN_140daacec(void)

undefined8 * FUN_140daacec(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e12690;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140daad14;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140daad14:
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140daad76 FUN_140daad76 body=2524 status=ok
// SIG undefined FUN_140daad76(void)

void FUN_140daad76(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ushort uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_1e8 [32];
  uint *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  longlong local_1a0;
  longlong local_198;
  int local_190;
  uint local_188 [4];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  undefined4 local_164;
  undefined2 local_160;
  undefined2 local_15e;
  undefined1 local_15c [28];
  undefined8 local_140;
  uint local_138 [8];
  undefined8 local_118;
  uint local_110 [8];
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  longlong *local_b8;
  uint local_b0 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1b8 = FUN_14009d2a0();
  lVar19 = *(longlong *)(param_1 + 0x28);
  local_d8 = &PTR_FUN_14a4d6d10;
  local_90 = 0x10000000000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_1c0 = param_1;
  plVar7 = (longlong *)FUN_14009d2a0();
  local_b8 = plVar7;
  FUN_140dab754(local_138);
  if (((int)local_138[0] < 0) || (*(int *)(lVar19 + 0x630) <= (int)local_138[0])) {
LAB_140daae18:
    local_c0 = 0;
  }
  else {
    lVar18 = lVar19 + 0x618;
    if (*(longlong *)(lVar19 + 0x628) != 0) {
      lVar18 = *(longlong *)(lVar19 + 0x628);
    }
    if ((*(uint *)(lVar18 + (ulonglong)(local_138[0] >> 5) * 4) >> (local_138[0] & 0x1f) & 1) == 0)
    goto LAB_140daae18;
    local_c0 = *(longlong *)(*(longlong *)(lVar19 + 0x608) + (ulonglong)local_138[0] * 8);
  }
  if ((longlong)(int)plVar7[1] != 0) {
    lVar18 = *plVar7;
    lVar14 = (longlong)(int)plVar7[1] * 0x58 + lVar18;
    do {
      plVar7 = (longlong *)(lVar18 + 0x30);
      if ((*(byte *)(lVar18 + 0x50) & 2) == 0) {
        plVar7 = (longlong *)*plVar7;
      }
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))();
      if ((plVar7 != (longlong *)0x0) && (*(short *)(lVar18 + 0x16) != -1)) {
        uVar5 = *(ushort *)(lVar18 + 0x14);
        lVar8 = FUN_14482820e(lVar19 + 0x28);
        if ((uVar5 != 0xffff) &&
           ((*(uint *)(lVar8 + 0x20) != (uint)uVar5 &&
             (int)(uint)uVar5 <= (int)*(uint *)(lVar8 + 0x20) &&
            ((*(uint *)(lVar8 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)))) {
          (**(code **)(*plVar7 + 8))(plVar7,lVar19,lVar18,local_c0);
          uVar4 = local_90;
          uVar5 = *(ushort *)(lVar18 + 0x16);
          iVar6 = uVar5 + 1;
          iVar13 = iVar6 - (int)local_90;
          if (iVar13 != 0 && (int)local_90 <= iVar6) {
            if ((int)local_90 == 0) {
LAB_140daaeee:
              if (local_90._4_4_ <= (int)(uint)uVar5) {
                local_90 = CONCAT44(0x100,(int)local_90);
                FUN_14497ddce(local_b0,uVar4 & 0xffffffff);
                iVar6 = (int)local_90 + iVar13;
              }
              iVar10 = iVar6 + 0x1f;
              if (-1 < iVar6) {
                iVar10 = iVar6;
              }
              local_90 = CONCAT44(local_90._4_4_,iVar6);
              if (iVar6 % 0x20 != 0) {
                bVar9 = -(char)(iVar6 % 0x20);
                local_b0[iVar10 >> 5] = (local_b0[iVar10 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
              }
            }
            else {
              iVar10 = (int)local_90 + 0x1e;
              if (-1 < (int)local_90 + -1) {
                iVar10 = (int)local_90 + -1;
              }
              if (iVar10 >> 5 != (uint)(uVar5 >> 5)) goto LAB_140daaeee;
              local_90 = CONCAT44(local_90._4_4_,iVar6);
            }
            FUN_1447c45ca(local_b0,uVar4 & 0xffffffff,iVar13,0);
          }
          uVar4 = uStack_c8;
          local_b0[uVar5 >> 5] = local_b0[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
          uVar2 = (uint)uStack_c8;
          uVar15 = 0;
          if ((int)(uint)uStack_c8 < 1) {
LAB_140daaf73:
            uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 + 1);
            if (uStack_c8._4_4_ == uVar2) {
              FUN_140dab7c6(&local_d0,uVar4 & 0xffffffff);
            }
            lVar8 = (ulonglong)uVar15 * 0x10;
            memmove((void *)(local_d0 + lVar8 + 0x10),(void *)(local_d0 + lVar8),
                    (ulonglong)(uVar2 - uVar15) << 4);
            puVar11 = (ushort *)(lVar8 + local_d0);
            uVar5 = *(ushort *)(lVar18 + 0x16);
          }
          else {
            uVar5 = *(ushort *)(lVar18 + 0x16);
            uVar15 = 0;
            uVar16 = (uint)uStack_c8;
            do {
              uVar1 = (uVar16 >> 1) + uVar15;
              if (*(ushort *)(local_d0 + (ulonglong)uVar1 * 0x10) < uVar5) {
                uVar15 = uVar1 + (uVar16 & 1);
              }
              bVar3 = 1 < uVar16;
              uVar16 = uVar16 >> 1;
            } while (bVar3);
            if (((int)(uint)uStack_c8 <= (int)uVar15) ||
               (uVar5 < *(ushort *)(local_d0 + (ulonglong)uVar15 * 0x10))) goto LAB_140daaf73;
            puVar11 = (ushort *)(local_d0 + (ulonglong)uVar15 * 0x10);
          }
          *puVar11 = uVar5;
          *(longlong **)(puVar11 + 4) = plVar7;
        }
      }
      lVar18 = lVar18 + 0x58;
    } while (lVar18 != lVar14);
  }
  iVar6 = FUN_14055dcee(local_b0,0,0xffffffff);
  if (iVar6 == 0) goto LAB_140dab224;
  if ((local_c0 == 0) || (lVar19 = FUN_14083f088(*(undefined8 *)(local_1c0 + 0x28)), lVar19 != 0)) {
    local_118 = 0x10000000000;
    local_f0 = 0x10000000000;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_140dad9c2(local_138,local_b0,2);
    lVar19 = local_1b8;
    local_160 = *(undefined2 *)(local_1b8 + 0x4a);
    uStack_80 = (undefined2 *)local_15c;
    local_15e = *(undefined2 *)(local_1b8 + 0x13e);
    local_88 = &local_160;
    FUN_1403b5126(local_138,&local_88,2);
    uVar4 = local_118;
    uVar5 = *(ushort *)(lVar19 + 0x11a);
    iVar6 = uVar5 + 1;
    iVar13 = iVar6 - (int)local_118;
    if (iVar13 != 0 && (int)local_118 <= iVar6) {
      if ((int)local_118 == 0) {
LAB_140dab0b1:
        if (local_118._4_4_ <= (int)(uint)uVar5) {
          local_118 = CONCAT44(0x100,(int)local_118);
          FUN_14497ddce(local_138,uVar4 & 0xffffffff);
          iVar6 = (int)local_118 + iVar13;
        }
        iVar10 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar10 = iVar6;
        }
        local_118 = CONCAT44(local_118._4_4_,iVar6);
        if (iVar6 % 0x20 != 0) {
          bVar9 = -(char)(iVar6 % 0x20);
          local_138[iVar10 >> 5] = (local_138[iVar10 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
        }
      }
      else {
        iVar10 = (int)local_118 + 0x1e;
        if (-1 < (int)local_118 + -1) {
          iVar10 = (int)local_118 + -1;
        }
        if (iVar10 >> 5 != (uint)(uVar5 >> 5)) goto LAB_140dab0b1;
        local_118 = CONCAT44(local_118._4_4_,iVar6);
      }
      FUN_1447c45ca(local_138,uVar4 & 0xffffffff,iVar13,0);
    }
    local_138[uVar5 >> 5] = local_138[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
    local_88._0_4_ = CONCAT22(*(undefined2 *)(lVar19 + 0x130),*(undefined2 *)(lVar19 + 0x120));
    lVar19 = 0;
    do {
      uVar4 = local_f0;
      uVar5 = *(ushort *)((longlong)&local_88 + lVar19);
      iVar6 = uVar5 + 1;
      iVar13 = iVar6 - (int)local_f0;
      if (iVar13 != 0 && (int)local_f0 <= iVar6) {
        if ((int)local_f0 == 0) {
LAB_140dab175:
          if (local_f0._4_4_ <= (int)(uint)uVar5) {
            local_f0 = CONCAT44(0x100,(int)local_f0);
            FUN_14497ddce(local_110,uVar4 & 0xffffffff);
            iVar6 = (int)local_f0 + iVar13;
          }
          iVar10 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar10 = iVar6;
          }
          local_f0 = CONCAT44(local_f0._4_4_,iVar6);
          if (iVar6 % 0x20 != 0) {
            bVar9 = -(char)(iVar6 % 0x20);
            local_110[iVar10 >> 5] = (local_110[iVar10 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
          }
        }
        else {
          iVar10 = (int)local_f0 + 0x1e;
          if (-1 < (int)local_f0 + -1) {
            iVar10 = (int)local_f0 + -1;
          }
          if (iVar10 >> 5 != (uint)(uVar5 >> 5)) goto LAB_140dab175;
          local_f0 = CONCAT44(local_f0._4_4_,iVar6);
        }
        FUN_1447c45ca(local_110,uVar4 & 0xffffffff,iVar13,0);
      }
      local_110[uVar5 >> 5] = local_110[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
      lVar19 = lVar19 + 2;
    } while (lVar19 != 4);
    FUN_140857d6a(*(longlong *)(local_1c0 + 0x28) + 0x28,local_138,&local_d8,1);
  }
  else {
    local_118 = 0x10000000000;
    local_f0 = 0x10000000000;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_140dad9c2(local_138,local_b0,2);
    lVar19 = local_1b8;
    local_160 = *(undefined2 *)(local_1b8 + 0x11a);
    local_88 = &local_160;
    uStack_80 = &local_15e;
    FUN_1447c44f6(local_138,&local_88);
    local_160 = *(undefined2 *)(lVar19 + 0x60);
    local_88 = &local_160;
    uStack_80 = &local_15e;
    FUN_1447c44f6(local_110,&local_88);
    local_160 = *(undefined2 *)(lVar19 + 0x120);
    local_15e = *(undefined2 *)(lVar19 + 0x130);
    local_88 = &local_160;
    uStack_80 = (undefined2 *)local_15c;
    FUN_1447c44f6(local_110,&local_88);
    FUN_140857d6a(*(longlong *)(local_1c0 + 0x28) + 0x28,local_138,&local_d8,1);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    local_118 = 0x10000000000;
    local_f0 = 0x10000000000;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_140dad9c2(local_138,local_b0,2);
    local_160 = *(undefined2 *)(local_1b8 + 0x60);
    local_15e = *(undefined2 *)(local_1b8 + 0x11c);
    local_88 = &local_160;
    uStack_80 = (undefined2 *)local_15c;
    FUN_1447c44f6(local_138);
    lVar19 = *(longlong *)(local_1c0 + 0x28);
    FUN_14150e78a(&local_1a0,lVar19 + 0x28,local_138);
    iVar6 = *(int *)(lVar19 + 0x38);
    if (local_190 != iVar6) {
      do {
        lVar19 = *(longlong *)(*(longlong *)(local_198 + 0x60) + (longlong)local_190 * 8);
        local_140 = 0;
        FUN_1400abb7c(&local_160,(longlong)local_190 * 0x28 + *(longlong *)(local_198 + 8));
        local_68 = 0x10000000000;
        local_1c8 = local_188;
        FUN_14009e926(&local_160,local_b0,&local_88,2);
        local_188[0] = (uint)local_88;
        local_188[1] = local_88._4_4_;
        local_188[2] = (undefined4)uStack_80;
        local_188[3] = uStack_80._4_4_;
        local_178 = local_78;
        uStack_174 = uStack_74;
        uStack_170 = uStack_70;
        uStack_16c = uStack_6c;
        local_168 = (int)local_68;
        local_164 = local_68._4_4_;
        iVar13 = -1;
        if (0x1f < (int)local_68 + 0x1fU) {
          lVar18 = 0;
          puVar17 = local_188;
LAB_140dab6eb:
          uVar2 = *puVar17;
          if (uVar2 == 0) goto code_r0x000140dab6f3;
          iVar10 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
            }
          }
          iVar10 = iVar10 - (int)lVar18;
          if (iVar10 < (int)local_68) {
            iVar13 = iVar10;
          }
        }
LAB_140dab65b:
        if (*(ushort *)(lVar19 + 0xc) != 0) {
          puVar12 = *(undefined8 **)(lVar19 + 0x28);
          lVar18 = (ulonglong)*(ushort *)(lVar19 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar12 + 0x1e) == *(short *)(local_1b8 + 0x60))
            goto LAB_140dab66b;
            puVar12 = puVar12 + 4;
            lVar18 = lVar18 + -0x20;
          } while (lVar18 != 0);
        }
        puVar12 = (undefined8 *)0x0;
LAB_140dab66b:
        iVar10 = *(int *)(lVar19 + 0x14);
        if (iVar10 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
        }
        LOCK();
        *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
        UNLOCK();
        local_1b0 = *puVar12;
        local_1a8 = (uint)*(ushort *)(lVar19 + 0xe);
        FUN_14765c91c(local_c0,iVar13,&local_1b0);
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + -1;
          UNLOCK();
          if (iVar10 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(puVar12 + 1));
          }
        }
        local_190 = FUN_1403b8464(&local_1a0,local_190 + 1);
      } while (local_190 != iVar6);
    }
    if (local_1a0 != 0) {
      if (*(char *)(local_198 + 0x270) == '\0') {
        *(int *)(local_198 + 0x264) = *(int *)(local_198 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_198 + 0x264) = *(int *)(local_198 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_140dab224:
  lVar19 = local_d0;
  local_d8 = &PTR_FUN_14a4d6d10;
  lVar18 = (longlong)(int)(uint)uStack_c8;
  if (lVar18 != 0) {
    lVar14 = 0;
    do {
      (**(code **)(**(longlong **)(lVar19 + 8 + lVar14) + 0x18))();
      lVar14 = lVar14 + 0x10;
    } while (lVar18 * 0x10 != lVar14);
  }
  if (local_d0 != 0) {
    FUN_1400020a8(local_d0);
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140dab6f3:
  lVar18 = lVar18 + -0x20;
  puVar17 = puVar17 + 1;
  if ((ulonglong)((int)local_68 + 0x1fU & 0xffffffe0) + lVar18 == 0) goto LAB_140dab65b;
  goto LAB_140dab6eb;
}



// FUNCTION 140dab754 FUN_140dab754 body=114 status=ok
// SIG undefined FUN_140dab754(void)

int * FUN_140dab754(int *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab2c64) {
    FUN_144b3d300(&DAT_14cab2c64);
    if (DAT_14cab2c64 == -1) {
      DAT_14cab2c60 = DAT_14cab2be0;
      DAT_14cab2be0 = DAT_14cab2be0 + 1;
      _Init_thread_footer(&DAT_14cab2c64);
    }
  }
  *param_1 = DAT_14cab2c60;
  return param_1;
}



// FUNCTION 140dab7c6 FUN_140dab7c6 body=269 status=ok
// SIG undefined FUN_140dab7c6(void)

void FUN_140dab7c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140dab8d4 FUN_140dab8d4 body=80 status=ok
// SIG undefined FUN_140dab8d4(void)

void FUN_140dab8d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_140dab926(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dab926 FUN_140dab926 body=53 status=ok
// SIG undefined FUN_140dab926(void)

undefined8 FUN_140dab926(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cbc65a8,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 140dab95c FUN_140dab95c body=55 status=ok
// SIG undefined FUN_140dab95c(void)

void FUN_140dab95c(longlong *param_1)

{
  FUN_140dab994(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140dab994 FUN_140dab994 body=121 status=ok
// SIG undefined FUN_140dab994(void)

void FUN_140dab994(longlong param_1,int param_2)

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



// FUNCTION 140daba1c FUN_140daba1c body=40 status=ok
// SIG undefined FUN_140daba1c(void)

undefined8 FUN_140daba1c(undefined8 param_1,int param_2)

{
  FUN_140daba44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140daba44 FUN_140daba44 body=136 status=ok
// SIG undefined FUN_140daba44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140daba44(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b067710;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140dababe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140dabacc FUN_140dabacc body=3022 status=ok
// SIG undefined FUN_140dabacc(void)

void FUN_140dabacc(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined1 auStack_298 [32];
  longlong **local_278;
  longlong **local_270;
  uint *local_268;
  longlong *local_260;
  undefined1 *local_258;
  undefined8 *local_248;
  longlong local_240;
  longlong local_238;
  undefined4 local_22c;
  ushort *local_228;
  undefined1 *local_220;
  uint local_214;
  undefined4 *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined2 local_1f8;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined2 local_1f0;
  undefined1 local_1eb;
  undefined4 local_1e8;
  undefined1 local_1e4;
  ushort local_1da;
  undefined1 local_1d8 [6];
  undefined2 local_1d2;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined2 local_1c0;
  undefined1 local_1bb;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  uint local_188 [8];
  int local_168;
  int local_164;
  longlong local_138;
  undefined1 local_128 [32];
  int local_108;
  undefined1 local_100 [32];
  int local_e0;
  code *local_d8;
  byte local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 **local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_240 = param_4;
  local_238 = FUN_14009d2a0();
  local_1d8._0_2_ = *(undefined2 *)(local_238 + 0x4a);
  local_1d2 = *(undefined2 *)(local_238 + 0x108);
  local_1d8._2_4_ = *(undefined4 *)(local_238 + 0x104);
  puVar17 = (undefined2 *)*param_3;
  local_1c0 = puVar17[0x10];
  local_1c2 = puVar17[0xe];
  local_1c4 = puVar17[0xc];
  local_1c6 = puVar17[10];
  local_1c8 = puVar17[8];
  local_1ca = puVar17[6];
  local_1cc = puVar17[4];
  local_1d0 = *puVar17;
  local_1ce = puVar17[2];
  local_1bb = 0;
  local_1b8 = CONCAT35(local_1b8._5_3_,0x6ff);
  local_1da = *(ushort *)((longlong)param_2 + 0x14);
  local_228 = &local_1da;
  local_220 = local_1d8;
  local_248 = param_3;
  FUN_140dad0c2(local_1d8,&local_1b0);
  lVar18 = param_6 + 0x28;
  local_190 = *(uint *)(param_6 + 0x290);
  bVar12 = uStack_194._1_1_ & 0xfe | (*(uint *)(param_6 + 0x290) & 0xfffffeff) == 1;
  uStack_194._0_2_ = CONCAT11(bVar12,(undefined1)uStack_194);
  local_22c = CONCAT22(local_22c._2_2_,CONCAT11(bVar12,(undefined1)uStack_194)) & 0xfffffdff;
  local_c8 = FUN_14026c938;
  local_c0 = (longlong *)CONCAT71(local_c0._1_7_,3);
  if (((((((short)local_1b0 != -1) && ((short)uStack_1a8 != -1)) && (uStack_1a8._2_2_ != -1)) &&
       (((short)uStack_1a4 != -1 && (uStack_1a4._2_2_ != -1)))) &&
      (((short)local_1a0 != -1 && ((local_1a0._2_2_ != -1 && ((short)uStack_19c != -1)))))) &&
     ((uStack_19c._2_2_ != -1 && ((short)uStack_198 != -1)))) {
    cVar8 = FUN_140dac6d2(&local_1b0,lVar18);
    if (cVar8 != '\0') {
      plVar10 = (longlong *)FUN_14001cc68(0x58,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14a4c2560;
      plVar10[2] = (longlong)&PTR_FUN_14a4c2578;
      plVar11 = (longlong *)*param_2;
      plVar10[3] = (longlong)plVar11;
      plVar10[4] = 0;
      plVar10[5] = 0;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))(plVar11,&local_70);
        plVar10[4] = local_70;
        plVar10[5] = lStack_68;
      }
      plVar10[10] = CONCAT44(uStack_18c,local_190);
      *(undefined4 *)(plVar10 + 8) = local_1a0;
      *(undefined4 *)((longlong)plVar10 + 0x44) = uStack_19c;
      *(undefined4 *)(plVar10 + 9) = uStack_198;
      *(undefined4 *)((longlong)plVar10 + 0x4c) = uStack_194;
      *(undefined4 *)(plVar10 + 6) = local_1b0;
      *(undefined4 *)((longlong)plVar10 + 0x34) = uStack_1ac;
      *(undefined4 *)(plVar10 + 7) = uStack_1a8;
      *(undefined4 *)((longlong)plVar10 + 0x3c) = uStack_1a4;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      local_50 = 0;
      uVar9 = local_108 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar9) {
        uVar14 = 0x100;
        if (0x100 < uVar9) {
          uVar14 = uVar9;
        }
        local_50 = (ulonglong)uVar14 << 0x20;
        FUN_14497ddce(&local_70,0);
      }
      local_50 = CONCAT44(local_50._4_4_,local_108);
      if (local_108 != 0) {
        memcpy(&local_70,local_128,(ulonglong)(local_108 + 0x1fU >> 3 & 0xfffffffc));
      }
      local_78 = 0;
      uVar9 = local_e0 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar9) {
        uVar14 = 0x100;
        if (0x100 < uVar9) {
          uVar14 = uVar9;
        }
        local_78 = (ulonglong)uVar14 << 0x20;
        FUN_14497ddce(local_98,0);
      }
      local_78 = CONCAT44(local_78._4_4_,local_e0);
      if (local_e0 != 0) {
        memcpy(local_98,local_100,(ulonglong)(local_e0 + 0x1fU >> 3 & 0xfffffffc));
      }
      FUN_140dac962(&local_1b0,&local_70);
      local_200 = &local_d8;
      local_208 = (longlong *)&LAB_140ce4272;
      local_a0 = (undefined4 **)CONCAT71(local_a0._1_7_,local_c0._0_1_);
      local_d8 = (code *)&local_1b0;
      (*(code *)(&PTR_LAB_14a475bc0)[(ulonglong)local_c0 & 0xff])(&local_a8);
      local_268 = local_188;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_258 = local_98;
      local_270 = (longlong **)&local_208;
      local_278 = &local_a8;
      local_260 = &local_70;
      local_b8 = plVar10 + 2;
      local_b0 = plVar10;
      FUN_1406ac01c(param_5,&local_214,&local_22c,&local_b8);
      if (local_214 == 0xffffffff) {
        if ((local_22c & 0x400) != 0) {
          FUN_145c7137e(param_5,&local_210);
          local_214 = (uint)local_210;
          if ((uint)local_210 != 0xffffffff) goto LAB_140dabf2f;
        }
      }
      else {
LAB_140dabf2f:
        FUN_1407ce0e2(param_5,local_214,0xffffffff);
        FUN_1407cdf34(param_5,local_214,0xffffffff);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(local_240 + 4) < 1) goto LAB_140dabf7f;
  local_1b8 = 0x10000000000;
  puVar17 = (undefined2 *)*local_248;
  iVar3 = *(int *)(local_248 + 1);
  local_240 = lVar18;
  if ((longlong)iVar3 != 0) {
    lVar18 = 0;
    do {
      uVar7 = local_1b8;
      uVar2 = *(ushort *)((longlong)puVar17 + lVar18);
      iVar13 = uVar2 + 1;
      iVar16 = iVar13 - (int)local_1b8;
      if (iVar16 != 0 && (int)local_1b8 <= iVar13) {
        if ((int)local_1b8 == 0) {
LAB_140dac020:
          if (local_1b8._4_4_ <= (int)(uint)uVar2) {
            local_1b8 = CONCAT44(0x100,(int)local_1b8);
            FUN_14497ddce(local_1d8,uVar7 & 0xffffffff);
            iVar13 = (int)local_1b8 + iVar16;
          }
          iVar15 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar15 = iVar13;
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar13);
          if (iVar13 % 0x20 != 0) {
            bVar12 = -(char)(iVar13 % 0x20);
            *(uint *)(local_1d8 + (longlong)(iVar15 >> 5) * 4) =
                 (uint)(*(int *)(local_1d8 + (longlong)(iVar15 >> 5) * 4) << (bVar12 & 0x1f)) >>
                 (bVar12 & 0x1f);
          }
        }
        else {
          iVar15 = (int)local_1b8 + 0x1e;
          if (-1 < (int)local_1b8 + -1) {
            iVar15 = (int)local_1b8 + -1;
          }
          if (iVar15 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dac020;
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar13);
        }
        FUN_1447c45ca(local_1d8,uVar7 & 0xffffffff,iVar16,0);
      }
      *(uint *)(local_1d8 + (ulonglong)(uVar2 >> 5) * 4) =
           *(uint *)(local_1d8 + (ulonglong)(uVar2 >> 5) * 4) | 1 << ((byte)uVar2 & 0x1f);
      lVar18 = lVar18 + 4;
    } while ((longlong)iVar3 * 4 != lVar18);
    puVar17 = (undefined2 *)*local_248;
  }
  local_1f0 = puVar17[0x10];
  local_1f2 = puVar17[0xe];
  local_1f4 = puVar17[0xc];
  local_1f6 = puVar17[10];
  local_1f8 = puVar17[8];
  local_208 = (longlong *)
              CONCAT26(*(undefined2 *)(local_238 + 0x108),
                       CONCAT42(*(undefined4 *)(local_238 + 0x104),*(undefined2 *)(local_238 + 0x4a)
                               ));
  local_200 = (code **)CONCAT26(puVar17[6],CONCAT24(puVar17[4],CONCAT22(puVar17[2],*puVar17)));
  local_1eb = 0;
  local_1e8 = 0x6ff;
  local_1e4 = 0;
  FUN_140dada72(&local_1b0);
  FUN_140dad9c2(local_188,local_1d8,2);
  iVar3 = local_168;
  uVar2 = *(ushort *)((longlong)param_2 + 0x14);
  iVar13 = uVar2 + 1;
  iVar16 = iVar13 - local_168;
  if (iVar16 != 0 && local_168 <= iVar13) {
    if (local_168 == 0) {
LAB_140dac1b7:
      if (local_164 <= (int)(uint)uVar2) {
        local_164 = 0x100;
        FUN_14497ddce(local_188,local_168);
        iVar13 = local_168 + iVar16;
      }
      iVar15 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar15 = iVar13;
      }
      local_168 = iVar13;
      iVar13 = local_168;
      if (iVar13 % 0x20 != 0) {
        bVar12 = -(char)(iVar13 % 0x20);
        local_188[iVar15 >> 5] = (local_188[iVar15 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
        iVar13 = local_168;
      }
    }
    else {
      iVar15 = local_168 + 0x1e;
      if (-1 < local_168 + -1) {
        iVar15 = local_168 + -1;
      }
      if (iVar15 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dac1b7;
    }
    local_168 = iVar13;
    FUN_1447c45ca(local_188,iVar3,iVar16,0);
  }
  local_188[uVar2 >> 5] = local_188[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
  FUN_140dad9c2(local_188,local_1d8,0x84);
  local_190 = *(uint *)(param_6 + 0x290);
  uStack_194._0_2_ =
       CONCAT11(uStack_194._1_1_ & 0xfe | (local_190 & 0xfffffeff) == 1,(undefined1)uStack_194);
  local_1da = (ushort)uStack_194 & 0xfdff;
  local_d8 = FUN_14091149c;
  local_d0 = 3;
  if ((short)local_1b0 != -1) {
    cVar8 = FUN_140dac69c(&local_1b0,local_240);
    if (cVar8 != '\0') {
      plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14a4c2580;
      plVar11[2] = (longlong)&PTR_FUN_14a4c2598;
      param_2 = (longlong *)*param_2;
      plVar11[3] = (longlong)param_2;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar4 = *(undefined4 *)((longlong)local_248 + 4);
      uVar5 = *(undefined4 *)(local_248 + 1);
      uVar6 = *(undefined4 *)((longlong)local_248 + 0xc);
      *(undefined4 *)(plVar11 + 6) = *(undefined4 *)local_248;
      *(undefined4 *)((longlong)plVar11 + 0x34) = uVar4;
      *(undefined4 *)(plVar11 + 7) = uVar5;
      *(undefined4 *)((longlong)plVar11 + 0x3c) = uVar6;
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 8))(param_2,&local_70);
        plVar11[4] = local_70;
        plVar11[5] = lStack_68;
      }
      plVar11[0xc] = CONCAT44(uStack_18c,local_190);
      *(undefined4 *)(plVar11 + 10) = local_1a0;
      *(undefined4 *)((longlong)plVar11 + 0x54) = uStack_19c;
      *(undefined4 *)(plVar11 + 0xb) = uStack_198;
      *(undefined4 *)((longlong)plVar11 + 0x5c) = uStack_194;
      *(undefined4 *)(plVar11 + 8) = local_1b0;
      *(undefined4 *)((longlong)plVar11 + 0x44) = uStack_1ac;
      *(undefined4 *)(plVar11 + 9) = uStack_1a8;
      *(undefined4 *)((longlong)plVar11 + 0x4c) = uStack_1a4;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      local_50 = 0;
      uVar9 = local_108 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar9) {
        uVar14 = 0x100;
        if (0x100 < uVar9) {
          uVar14 = uVar9;
        }
        local_50 = (ulonglong)uVar14 << 0x20;
        FUN_14497ddce(&local_70,0);
      }
      local_50 = CONCAT44(local_50._4_4_,local_108);
      if (local_108 != 0) {
        memcpy(&local_70,local_128,(ulonglong)(local_108 + 0x1fU >> 3 & 0xfffffffc));
      }
      local_78 = 0;
      uVar9 = local_e0 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar9) {
        uVar14 = 0x100;
        if (0x100 < uVar9) {
          uVar14 = uVar9;
        }
        local_78 = (ulonglong)uVar14 << 0x20;
        FUN_14497ddce(local_98,0);
      }
      local_78 = CONCAT44(local_78._4_4_,local_e0);
      if (local_e0 != 0) {
        memcpy(local_98,local_100,(ulonglong)(local_e0 + 0x1fU >> 3 & 0xfffffffc));
      }
      FUN_140dadb3c(&local_1b0,&local_70);
      local_a0 = &local_210;
      local_a8 = (longlong *)&LAB_1411779ce;
      local_b0 = (longlong *)CONCAT71(local_b0._1_7_,local_d0);
      local_210 = &local_1b0;
      (*(code *)(&PTR_LAB_14a475bc0)[local_d0])(&local_b8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_258 = local_98;
      local_270 = &local_a8;
      local_278 = &local_b8;
      local_268 = local_188;
      local_260 = &local_70;
      local_c8 = (code *)(plVar11 + 2);
      local_c0 = plVar11;
      FUN_1406ac01c(param_5,&local_22c,&local_1da,&local_c8);
      if (local_22c == 0xffffffff) {
        if ((local_1da & 0x400) != 0) {
          FUN_145c7137e(param_5,&local_214);
          local_22c = local_214;
          if (local_214 != 0xffffffff) goto LAB_140dac526;
        }
      }
      else {
LAB_140dac526:
        FUN_1407ce0e2(param_5,local_22c,0xffffffff);
        FUN_1407cdf34(param_5,local_22c,0xffffffff);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_140dabf7f:
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dac69c FUN_140dac69c body=53 status=ok
// SIG undefined FUN_140dac69c(void)

undefined4 FUN_140dac69c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar4 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 140dac6d2 FUN_140dac6d2 body=656 status=ok
// SIG undefined FUN_140dac6d2(void)

undefined8 FUN_140dac6d2(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[6];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[7];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[8];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar9 = false;
  }
  else {
    bVar9 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[9];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar10 = false;
  }
  else {
    bVar10 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[10];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[0xb];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar11 = false;
  }
  else {
    bVar11 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[0xc];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar12 = false;
  }
  else {
    bVar12 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),
                  (byte)uVar3 & bVar11 & bVar12 &
                  bVar8 & bVar9 & bVar10 & bVar6 & bVar7 & bVar4 & bVar5);
}



// FUNCTION 140dac962 FUN_140dac962 body=1888 status=ok
// SIG undefined FUN_140dac962(void)

void FUN_140dac962(ushort *param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  uVar2 = *param_1;
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dac9a7:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dac9a7;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar8 = 1;
  do {
    uVar2 = param_1[lVar8];
    if (uVar2 != 0xffff) {
      iVar5 = uVar2 + 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar7 = iVar5 - iVar3;
      if (iVar7 != 0 && iVar3 <= iVar5) {
        if (iVar3 == 0) {
LAB_140daca34:
          if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
            *(undefined4 *)(param_2 + 0x24) = 0x100;
            FUN_14497ddce(param_2,iVar3);
            iVar5 = *(int *)(param_2 + 0x20) + iVar7;
          }
          iVar6 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar6 = iVar5;
          }
          *(int *)(param_2 + 0x20) = iVar5;
          if (iVar5 % 0x20 != 0) {
            bVar4 = -(char)(iVar5 % 0x20);
            *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
                 (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
                 (bVar4 & 0x1f);
          }
        }
        else {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140daca34;
          *(int *)(param_2 + 0x20) = iVar5;
        }
        FUN_1447c45ca(param_2,iVar3,iVar7,0);
      }
      puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  uVar2 = param_1[4];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dacaca:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dacaca;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[5];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dacb52:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dacb52;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[6];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dacbd1:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dacbd1;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[7];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dacc59:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dacc59;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[8];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140daccd8:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140daccd8;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[9];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dacd60:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dacd60;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[10];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dacddf:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dacddf;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[0xb];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dace67:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dace67;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[0xc];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_140dacf25;
  if (iVar3 == 0) {
LAB_140dacee6:
    if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_2 + 0x24) = 0x100;
      FUN_14497ddce(param_2,iVar3);
      iVar5 = *(int *)(param_2 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_2 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dacee6;
    *(int *)(param_2 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_2,iVar3,iVar7,0);
LAB_140dacf25:
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140dad0c2 FUN_140dad0c2 body=1989 status=ok
// SIG undefined FUN_140dad0c2(void)

ushort * FUN_140dad0c2(undefined8 *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  
  uVar8 = param_1[1];
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 3);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = uVar8;
  *(undefined8 *)(param_2 + 0x10) = param_1[4];
  *(undefined4 *)(param_2 + 8) = uVar4;
  *(undefined4 *)(param_2 + 10) = uVar5;
  *(undefined4 *)(param_2 + 0xc) = uVar6;
  *(undefined4 *)(param_2 + 0xe) = uVar7;
  puVar1 = param_2 + 0x14;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0x100;
  param_2[0x27] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0x100;
  param_2[0x3b] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0x100;
  param_2[0x57] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0x100;
  param_2[0x6b] = 0;
  uVar2 = *param_2;
  iVar12 = uVar2 + 1;
  iVar10 = iVar12;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar1,0);
    iVar10 = *(int *)(param_2 + 0x24) + iVar12;
  }
  iVar13 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar13 = iVar10;
  }
  *(int *)(param_2 + 0x24) = iVar10;
  if (iVar10 % 0x20 != 0) {
    bVar9 = -(char)(iVar10 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar13 >> 5) * 2) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar13 >> 5) * 2) << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar12,0);
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  FUN_140dad887(param_2 + 1,puVar1);
  uVar2 = param_2[4];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad1bf:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad1bf;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[5];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad245:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad245;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[6];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad2d5:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad2d5;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[7];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad35b:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad35b;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[8];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad3eb:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad3eb;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[9];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad471:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad471;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[10];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad501:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad501;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[0xb];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 != 0 && iVar10 <= iVar12) {
    if (iVar10 == 0) {
LAB_140dad587:
      if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
        param_2[0x26] = 0x100;
        param_2[0x27] = 0;
        FUN_14497ddce(puVar1,iVar10);
        iVar12 = *(int *)(param_2 + 0x24) + iVar13;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 0x24) = iVar12;
      if (iVar12 % 0x20 != 0) {
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
             (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    else {
      iVar11 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar11 = iVar10 + -1;
      }
      if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad587;
      *(int *)(param_2 + 0x24) = iVar12;
    }
    FUN_1447c45ca(puVar1,iVar10,iVar13,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[0xc];
  iVar12 = uVar2 + 1;
  iVar10 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar10;
  if (iVar13 == 0 || iVar12 < iVar10) goto LAB_140dad657;
  if (iVar10 == 0) {
LAB_140dad617:
    if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
      param_2[0x26] = 0x100;
      param_2[0x27] = 0;
      FUN_14497ddce(puVar1,iVar10);
      iVar12 = *(int *)(param_2 + 0x24) + iVar13;
    }
    iVar11 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar11 = iVar12;
    }
    *(int *)(param_2 + 0x24) = iVar12;
    if (iVar12 % 0x20 != 0) {
      bVar9 = -(char)(iVar12 % 0x20);
      *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
           (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
           (bVar9 & 0x1f);
    }
  }
  else {
    iVar11 = iVar10 + 0x1e;
    if (-1 < iVar10 + -1) {
      iVar11 = iVar10 + -1;
    }
    if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad617;
    *(int *)(param_2 + 0x24) = iVar12;
  }
  FUN_1447c45ca(puVar1,iVar10,iVar13,0);
LAB_140dad657:
  *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
       *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
  puVar14 = (ushort *)*param_3;
  puVar3 = (ushort *)param_3[1];
  do {
    if (puVar14 == puVar3) {
      return param_2;
    }
    uVar2 = *puVar14;
    iVar12 = uVar2 + 1;
    iVar10 = *(int *)(param_2 + 0x24);
    iVar13 = iVar12 - iVar10;
    if (iVar13 != 0 && iVar10 <= iVar12) {
      if (iVar10 == 0) {
LAB_140dad6a5:
        if (*(int *)(param_2 + 0x26) <= (int)(uint)uVar2) {
          param_2[0x26] = 0x100;
          param_2[0x27] = 0;
          FUN_14497ddce(puVar1,iVar10);
          iVar12 = *(int *)(param_2 + 0x24) + iVar13;
        }
        iVar11 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar11 = iVar12;
        }
        *(int *)(param_2 + 0x24) = iVar12;
        if (iVar12 % 0x20 != 0) {
          bVar9 = -(char)(iVar12 % 0x20);
          *(uint *)(puVar1 + (longlong)(iVar11 >> 5) * 2) =
               (uint)(*(int *)(puVar1 + (longlong)(iVar11 >> 5) * 2) << (bVar9 & 0x1f)) >>
               (bVar9 & 0x1f);
        }
      }
      else {
        iVar11 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar11 = iVar10 + -1;
        }
        if (iVar11 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dad6a5;
        *(int *)(param_2 + 0x24) = iVar12;
      }
      FUN_1447c45ca(puVar1,iVar10,iVar13,0);
    }
    *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
         *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
    puVar14 = puVar14 + 1;
  } while( true );
}



// FUNCTION 140dad887 FUN_140dad887 body=313 status=ok
// SIG undefined FUN_140dad887(void)

void FUN_140dad887(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  uint local_68 [8];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x10000000000;
  lVar7 = 0;
  do {
    uVar2 = local_48;
    uVar1 = *(ushort *)(param_1 + lVar7 * 2);
    if (uVar1 != 0xffff) {
      iVar4 = uVar1 + 1;
      iVar6 = iVar4 - (int)local_48;
      if (iVar6 != 0 && (int)local_48 <= iVar4) {
        if ((int)local_48 == 0) {
LAB_140dad901:
          if (local_48._4_4_ <= (int)(uint)uVar1) {
            local_48 = CONCAT44(0x100,(int)local_48);
            FUN_14497ddce(local_68,uVar2 & 0xffffffff);
            iVar4 = (int)local_48 + iVar6;
          }
          iVar5 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar5 = iVar4;
          }
          local_48 = CONCAT44(local_48._4_4_,iVar4);
          if (iVar4 % 0x20 != 0) {
            bVar3 = -(char)(iVar4 % 0x20);
            local_68[iVar5 >> 5] = (local_68[iVar5 >> 5] << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
          }
        }
        else {
          iVar5 = (int)local_48 + 0x1e;
          if (-1 < (int)local_48 + -1) {
            iVar5 = (int)local_48 + -1;
          }
          if (iVar5 >> 5 != (uint)(uVar1 >> 5)) goto LAB_140dad901;
          local_48 = CONCAT44(local_48._4_4_,iVar4);
        }
        FUN_1447c45ca(local_68,uVar2 & 0xffffffff,iVar6,0);
      }
      local_68[uVar1 >> 5] = local_68[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 3) {
      FUN_140dad9c2(param_2,local_68,1);
      if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 140dad9c2 FUN_140dad9c2 body=176 status=ok
// SIG undefined FUN_140dad9c2(void)

longlong FUN_140dad9c2(longlong param_1,void *param_2,undefined1 param_3)

{
  void *_Dst;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (0 < *(int *)((longlong)param_2 + 0x20)) {
    iVar4 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
      FUN_1403b5252((longlong *)(param_1 + 0x50),iVar4);
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    _Dst = (void *)(lVar1 + (longlong)iVar4 * 0x2c);
    *(undefined8 *)(lVar1 + 0x20 + (longlong)iVar4 * 0x2c) = 0;
    iVar4 = *(int *)((longlong)param_2 + 0x20);
    uVar2 = iVar4 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar2) {
      uVar3 = 0x100;
      if (0x100 < uVar2) {
        uVar3 = uVar2;
      }
      *(uint *)((longlong)_Dst + 0x24) = uVar3;
      FUN_14497ddce(_Dst,0);
      iVar4 = *(int *)((longlong)param_2 + 0x20);
    }
    *(int *)((longlong)_Dst + 0x20) = iVar4;
    if (iVar4 != 0) {
      memcpy(_Dst,param_2,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
    }
    *(undefined1 *)((longlong)_Dst + 0x28) = param_3;
  }
  return param_1;
}



// FUNCTION 140dada72 FUN_140dada72 body=202 status=ok
// SIG undefined FUN_140dada72(void)

ushort * FUN_140dada72(ushort *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  
  uVar7 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(undefined8 *)(param_1 + 0x10) = param_2[4];
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  puVar1 = param_1 + 0x14;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x100;
  param_1[0x27] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x100;
  param_1[0x3b] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x100;
  param_1[0x57] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x100;
  param_1[0x6b] = 0;
  uVar2 = *param_1;
  iVar11 = uVar2 + 1;
  iVar10 = iVar11;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar1,0);
    iVar10 = *(int *)(param_1 + 0x24) + iVar11;
  }
  iVar8 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar8 = iVar10;
  }
  *(int *)(param_1 + 0x24) = iVar10;
  if (iVar10 % 0x20 != 0) {
    bVar9 = -(char)(iVar10 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar8 >> 5) * 2) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar8 >> 5) * 2) << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar11,0);
  *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) =
       *(uint *)(param_1 + (ulonglong)(uVar2 >> 5) * 2 + 0x14) | 1 << ((byte)uVar2 & 0x1f);
  FUN_140dad887(param_1 + 1,puVar1);
  return param_1;
}



// FUNCTION 140dadb3c FUN_140dadb3c body=1948 status=ok
// SIG undefined FUN_140dadb3c(void)

void FUN_140dadb3c(ushort *param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  uVar2 = *param_1;
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140dadb81:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dadb81;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar8 = 1;
  do {
    uVar2 = param_1[lVar8];
    if (uVar2 != 0xffff) {
      iVar5 = uVar2 + 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar7 = iVar5 - iVar3;
      if (iVar7 != 0 && iVar3 <= iVar5) {
        if (iVar3 == 0) {
LAB_140dadc0e:
          if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
            *(undefined4 *)(param_2 + 0x24) = 0x100;
            FUN_14497ddce(param_2,iVar3);
            iVar5 = *(int *)(param_2 + 0x20) + iVar7;
          }
          iVar6 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar6 = iVar5;
          }
          *(int *)(param_2 + 0x20) = iVar5;
          if (iVar5 % 0x20 != 0) {
            bVar4 = -(char)(iVar5 % 0x20);
            *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
                 (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
                 (bVar4 & 0x1f);
          }
        }
        else {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dadc0e;
          *(int *)(param_2 + 0x20) = iVar5;
        }
        FUN_1447c45ca(param_2,iVar3,iVar7,0);
      }
      puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  uVar2 = param_1[4];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140dadcac:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dadcac;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[5];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140dadd36:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dadd36;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[6];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140daddc0:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140daddc0;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[7];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140dade4a:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dade4a;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[8];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140daded4:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140daded4;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[9];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140dadf5e:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dadf5e;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[10];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140dadfe8:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dadfe8;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[0xb];
  if (uVar2 != 0xffff) {
    iVar5 = uVar2 + 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar7 = iVar5 - iVar3;
    if (iVar7 != 0 && iVar3 <= iVar5) {
      if (iVar3 == 0) {
LAB_140dae072:
        if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_2 + 0x24) = 0x100;
          FUN_14497ddce(param_2,iVar3);
          iVar5 = *(int *)(param_2 + 0x20) + iVar7;
        }
        iVar6 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        *(int *)(param_2 + 0x20) = iVar5;
        if (iVar5 % 0x20 != 0) {
          bVar4 = -(char)(iVar5 % 0x20);
          *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
      else {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dae072;
        *(int *)(param_2 + 0x20) = iVar5;
      }
      FUN_1447c45ca(param_2,iVar3,iVar7,0);
    }
    puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = param_1[0xc];
  if (uVar2 == 0xffff) {
    return;
  }
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_140dae13b;
  if (iVar3 == 0) {
LAB_140dae0fc:
    if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_2 + 0x24) = 0x100;
      FUN_14497ddce(param_2,iVar3);
      iVar5 = *(int *)(param_2 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_2 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140dae0fc;
    *(int *)(param_2 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_2,iVar3,iVar7,0);
LAB_140dae13b:
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140dae2de FUN_140dae2de body=504 status=ok
// SIG undefined FUN_140dae2de(void)

void FUN_140dae2de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_228 [40];
  longlong *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined **local_1d8;
  longlong local_1d0;
  undefined ***local_1c8;
  undefined8 local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar1 = (longlong *)(param_1 + 0x168);
  lVar2 = param_1 + 0x178;
  local_1d8 = (undefined **)0x100000000;
  local_1c8 = (undefined ***)&DAT_ffffffff;
  local_1c0 = (undefined ****)((ulonglong)local_1c0 & 0xffffffff00000000);
  iVar9 = 0;
  local_1d0 = lVar2;
  if (*(int *)(param_1 + 400) != 0) {
    FUN_1449c0562(&local_1d8);
    iVar9 = *(int *)(param_1 + 400);
  }
  local_1e8 = local_1c8;
  pppuVar4 = local_1e8;
  local_1e0 = (undefined4)local_1c0;
  local_1dc = local_1c0._4_4_;
  local_1f8 = local_1d8;
  local_1f0 = local_1d0;
  local_1e8._4_4_ = (int)((ulonglong)local_1c8 >> 0x20);
  iVar5 = local_1e8._4_4_;
  local_200 = plVar1;
  if ((local_1e8._4_4_ != iVar9) || (local_1e8 = pppuVar4, local_1d0 != lVar2)) {
    do {
      local_1e8 = pppuVar4;
      lVar8 = *(longlong *)(*local_200 + 8 + (longlong)iVar5 * 0x18);
      if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + 0x10) != 0) {
          plVar6 = (longlong *)FUN_1464b04b0();
          uVar3 = *(undefined8 *)(lVar8 + 0x10);
          lVar7 = *(longlong *)(param_2 + 8);
          if (lVar7 == 0) {
            FUN_1404a881e(param_2);
            lVar7 = *(longlong *)(param_2 + 8);
          }
          local_1c0 = &local_1c8;
          local_1d8 = &PTR_FUN_149e37810;
          local_1c8 = &local_1d8;
          local_1d0 = lVar7;
          (**(code **)(*plVar6 + 0x2c0))(plVar6,local_1c0,uVar3);
        }
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          plVar6 = (longlong *)FUN_1464b04b0();
          uVar3 = *(undefined8 *)(lVar8 + 0x38);
          lVar8 = *(longlong *)(param_2 + 8);
          if (lVar8 == 0) {
            FUN_1404a881e(param_2);
            lVar8 = *(longlong *)(param_2 + 8);
          }
          local_1c0 = &local_1c8;
          local_1d8 = &PTR_FUN_149e37810;
          local_1c8 = &local_1d8;
          local_1d0 = lVar8;
          (**(code **)(*plVar6 + 0x2c0))(plVar6,local_1c0,uVar3);
        }
      }
      local_1e8 = (undefined ***)CONCAT44(local_1e8._4_4_,(uint)local_1e8 & ~local_1f8._4_4_);
      FUN_1449c0562(&local_1f8);
      iVar5 = local_1e8._4_4_;
      pppuVar4 = local_1e8;
    } while (((local_1e8._4_4_ != iVar9) || (local_1f0 != lVar2)) || (local_200 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dae4d8 FUN_140dae4d8 body=623 status=ok
// SIG undefined FUN_140dae4d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140dae4d8(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  void *local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cade150) && (FUN_144b3d300(&DAT_14cade150), DAT_14cade150 == -1)) {
    DAT_14cade140 = 0;
    _DAT_14cade148 = 0;
    atexit((_func_5014 *)&LAB_14350e8a2);
    _Init_thread_footer(&DAT_14cade150);
  }
  if (DAT_14cade148 == 0) {
    FUN_1457a9e34(&local_68,0x10,1,0);
    uVar8 = (ulonglong)local_58;
    lVar11 = local_68;
    if ((-1 < (int)local_58) && ((int)local_58 < local_60)) {
      iVar2 = local_60;
      do {
        plVar1 = *(longlong **)(lVar11 + (uVar8 & 0xffffffff) * 8);
        uVar6 = (uint)uVar8;
        if ((plVar1 != (longlong *)0x0) && (0 < (int)plVar1[0x3c])) {
          lVar10 = 0;
          iVar7 = 0;
          do {
            lVar11 = *(longlong *)(plVar1[0x3b] + lVar10);
            if ((((lVar11 != 0) && (lVar3 = FUN_140dae748(), lVar3 != 0)) &&
                (*(int *)(lVar3 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                == lVar3 + 0x30)) {
              lVar11 = plVar1[0x22];
              if (lVar11 == 0) {
                (**(code **)(*plVar1 + 1000))(plVar1);
                lVar11 = plVar1[0x22];
                if (lVar11 != 0) goto LAB_140dae685;
                plVar5 = (longlong *)0x0;
              }
              else {
LAB_140dae685:
                uVar4 = FUN_140dae748();
                plVar5 = (longlong *)FUN_144718840(lVar11,uVar4);
              }
              local_78 = (void *)0x0;
              uStack_70 = 0;
              (**(code **)(*plVar5 + 0x18))(plVar5,&local_78);
              uVar8 = _DAT_14cade148;
              lVar11 = (longlong)(int)(uint)uStack_70;
              if (lVar11 != 0) {
                iVar2 = DAT_14cade148;
                lVar3 = (longlong)DAT_14cade148;
                _DAT_14cade148 = CONCAT44(DAT_14cade14c,DAT_14cade148 + (uint)uStack_70);
                if ((uint)(DAT_14cade14c - iVar2) < (uint)uStack_70) {
                  FUN_140d4598c(&DAT_14cade140,uVar8 & 0xffffffff);
                }
                memcpy((void *)(lVar3 * 0x20 + DAT_14cade140),local_78,lVar11 << 5);
              }
              if (local_78 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            iVar7 = iVar7 + 1;
            lVar10 = lVar10 + 0x10;
            lVar11 = local_68;
            iVar2 = local_60;
            uVar6 = local_58;
          } while (iVar7 < (int)plVar1[0x3c]);
        }
        uVar8 = (longlong)(int)uVar6;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
          local_58 = (uint)uVar8;
          if ((longlong)iVar2 <= (longlong)uVar8) break;
        } while (*(longlong *)(lVar11 + uVar8 * 8) == 0);
      } while ((-2 < (longlong)uVar9) && ((int)local_58 < iVar2));
    }
    if (lVar11 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cade140;
}



// FUNCTION 140dae748 FUN_140dae748 body=228 status=ok
// SIG undefined FUN_140dae748(void)

longlong FUN_140dae748(void)

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
  if (DAT_14cac1f20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147879241;
    local_40 = &LAB_1459be51a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"TimeOfDayListener",&DAT_14cac1f20,&DAT_147879240);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1f20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dae82e FUN_140dae82e body=3660 status=ok
// SIG undefined FUN_140dae82e(void)

undefined8 * FUN_140dae82e(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1457aa044();
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 2;
  *(undefined8 *)((longlong)param_1 + 0xde4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdf4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xdfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe04) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0c) = 0;
  param_1[0x1c2] = 2;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 2;
  param_1[0x1cb] = 0;
  *param_1 = &PTR_FUN_14b991ef0;
  param_1[0x72] = &PTR_FUN_14b9933d0;
  param_1[0x85] = &PTR_LAB_14b993430;
  param_1[299] = &PTR_FUN_14b993450;
  param_1[300] = &PTR_FUN_14b993470;
  param_1[0x132] = &PTR_FUN_14b993560;
  param_1[0x133] = &PTR_FUN_14b9935b0;
  param_1[0x134] = &PTR_FUN_14b9935e0;
  param_1[0x135] = &PTR_FUN_14b993610;
  param_1[0x136] = &PTR_FUN_14b993630;
  param_1[0x1b5] = &PTR_FUN_14b993680;
  param_1[0x1c3] = &PTR_FUN_14b993710;
  param_1[0x1c7] = &PTR_FUN_14b993790;
  param_1[0x1c8] = &PTR_FUN_14b9937d0;
  param_1[0x1c9] = &PTR_FUN_14b993830;
  param_1[0x1ca] = &PTR_FUN_14b993880;
  param_1[0x1cc] = &PTR_FUN_14b9938a0;
  param_1[0x1cd] = &PTR_FUN_14b9938f0;
  param_1[0x1ce] = &PTR_FUN_14b993910;
  param_1[0x1d4] = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0;
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  *(undefined4 *)((longlong)param_1 + 0xeac) = 2;
  *(undefined1 *)(param_1 + 0x1d6) = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0x200000000;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  *(undefined1 *)(param_1 + 0x1db) = 0;
  *(undefined1 *)(param_1 + 0x27d) = 0;
  *(undefined1 *)(param_1 + 0x30d) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(undefined1 *)(param_1 + 0x431) = 0;
  param_1[0x434] = 0;
  *(undefined4 *)(param_1 + 0x435) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf12) = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf29) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf31) = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21ac) = 2;
  *(undefined1 *)(param_1 + 0x436) = 0;
  param_1[0x439] = 0;
  param_1[0x43a] = 0x200000000;
  param_1[0x43d] = 0;
  param_1[0x43e] = 0;
  param_1[0x43b] = 0;
  param_1[0x43c] = 0;
  param_1[0x444] = 0;
  param_1[0x445] = 0;
  param_1[0x442] = 0;
  param_1[0x443] = 0;
  param_1[0x440] = 0;
  param_1[0x441] = 0;
  param_1[0x447] = 0;
  param_1[0x448] = 0;
  *(undefined4 *)(param_1 + 0x449) = 2;
  *(undefined4 *)((longlong)param_1 + 0x225c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2254) = 0;
  param_1[0x44c] = 2;
  param_1[0x44d] = 0;
  *(undefined1 *)(param_1 + 0x44e) = 0;
  param_1[0x44f] = 0;
  *(undefined4 *)(param_1 + 0x450) = 0x6000;
  param_1[0x451] = 0;
  param_1[0x452] = 0;
  *(undefined4 *)(param_1 + 0x453) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x456) = 0;
  param_1[0x454] = 0;
  param_1[0x455] = 0;
  *(undefined4 *)(param_1 + 0x459) = 0;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22d4) = DAT_14c948620;
  *(undefined8 *)((longlong)param_1 + 0x22cc) = DAT_14c948618;
  param_1[0x45b] = 0;
  param_1[0x45c] = 0;
  param_1[0x45d] = 2;
  FUN_144a6ccf8(param_1 + 0x45e);
  FUN_144a6ccf8(param_1 + 0x461);
  param_1[0x464] = 0;
  param_1[0x465] = 0;
  *(undefined4 *)(param_1 + 0x466) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x233c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2344) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x234c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2354) = 0;
  *(undefined4 *)((longlong)param_1 + 0x235c) = 0;
  param_1[0x46c] = 2;
  *(undefined1 *)(param_1 + 0x46d) = 0;
  param_1[0x46e] = 0;
  *(undefined4 *)(param_1 + 0x46f) = 0x6000;
  param_1[0x470] = 0;
  param_1[0x471] = 0;
  *(undefined4 *)(param_1 + 0x472) = 0x6000;
  param_1[0x473] = 0;
  param_1[0x474] = 0;
  *(undefined4 *)(param_1 + 0x475) = 0x6000;
  param_1[0x476] = 0;
  *(undefined4 *)((longlong)param_1 + 0x23b7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x23bb) = 1;
  *(undefined1 *)((longlong)param_1 + 0x23bd) = 0;
  param_1[0x478] = 0;
  *(undefined4 *)(param_1 + 0x479) = 0x6000;
  param_1[0x47a] = 0;
  param_1[0x47b] = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0x6000;
  param_1[0x47d] = 0;
  param_1[0x47e] = 0;
  *(undefined4 *)(param_1 + 0x47f) = 0x6000;
  param_1[0x480] = 0;
  FUN_1447a97f4(param_1 + 0x481);
  param_1[0x486] = 0;
  *(undefined4 *)(param_1 + 0x487) = 0x6000;
  param_1[0x488] = 0;
  param_1[0x489] = 0;
  *(undefined4 *)(param_1 + 0x48a) = 0x6000;
  param_1[0x48b] = 0;
  param_1[0x48d] = 0;
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  param_1[0x490] = 0;
  FUN_140daf67c(param_1 + 0x491);
  param_1[0x495] = 0;
  param_1[0x496] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24b2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24ba) = 0;
  param_1[0x499] = 0;
  param_1[0x49a] = 0;
  param_1[0x49b] = 0;
  *(undefined4 *)(param_1 + 0x49c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24fc) = 0;
  param_1[0x4a0] = 0;
  param_1[0x4a1] = 0;
  *(undefined4 *)(param_1 + 0x4a2) = 0x7201;
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  *(undefined4 *)(param_1 + 0x4a5) = 0x7202;
  param_1[0x4a6] = 0;
  *(undefined4 *)(param_1 + 0x4a7) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x253c) = 0;
  param_1[0x4a8] = 0;
  param_1[0x4a9] = 0;
  *(undefined4 *)(param_1 + 0x4aa) = 0;
  param_1[0x4ab] = 0;
  param_1[0x4ac] = 0;
  *(undefined4 *)(param_1 + 0x4ad) = 2;
  param_1[0x4b3] = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2579) = 0;
  *(undefined8 *)((longlong)param_1 + 0x256c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2574) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25a4) = 2;
  *(undefined1 *)(param_1 + 0x4b5) = 0;
  param_1[0x4b8] = 0;
  param_1[0x4b9] = 0x200000000;
  lVar8 = 0x25fc;
  do {
    puVar3 = (undefined8 *)((longlong)param_1 + lVar8 + -0x2c);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -0x1c) = 2;
    puVar3 = (undefined8 *)((longlong)param_1 + lVar8 + -0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar8 + -8) = 0x200000000;
    *(undefined8 *)((longlong)param_1 + lVar8) = 0;
    ((undefined8 *)((longlong)param_1 + lVar8))[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + 0x10) = 0;
    lVar8 = lVar8 + 0x40;
  } while (lVar8 != 0x277c);
  memset(param_1 + 0x4ea,0,0xb8);
  FUN_140f23ff6(param_1 + 0x501);
  *(undefined4 *)(param_1 + 0x52e) = 0;
  param_1[0x534] = 0;
  param_1[0x535] = 0x200000000;
  param_1[0x523] = 0;
  param_1[0x524] = 0;
  param_1[0x525] = 0;
  param_1[0x526] = 0;
  param_1[0x527] = 0;
  param_1[0x528] = 0;
  param_1[0x529] = 0;
  param_1[0x52a] = 0;
  param_1[0x52b] = 0;
  param_1[0x52c] = 0;
  *(undefined4 *)(param_1 + 0x52d) = 0;
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  *(undefined1 *)(param_1 + 0x531) = 0;
  param_1[0x536] = 0;
  param_1[0x537] = 0;
  param_1[0x538] = 2;
  uVar9 = DAT_14c967818;
  param_1[0x539] = DAT_14c967818;
  param_1[0x53a] = uVar9;
  param_1[0x53b] = uVar9;
  param_1[0x53c] = 0;
  param_1[0x53d] = 0;
  param_1[0x53e] = 0x3ff0000000000000;
  param_1[0x53f] = 0x3ff0000000000000;
  param_1[0x540] = 0x20000000200;
  *(undefined1 *)(param_1 + 0x541) = 10;
  param_1[0x542] = 0;
  param_1[0x543] = 0;
  lVar8 = 0x2a98;
  do {
    *(undefined8 *)((longlong)param_1 + lVar8 + -0x78) = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + -0x70) = 0x3002;
    *(undefined8 *)((longlong)param_1 + lVar8 + -0x68) = 0;
    *(undefined8 *)((longlong)param_1 + lVar8 + -0x30) = 0;
    puVar3 = (undefined8 *)((longlong)param_1 + lVar8 + -0x28);
    *puVar3 = 0x200000000;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar8 + 7) = 0;
    lVar8 = lVar8 + 0x88;
  } while (lVar8 != 0x2dc8);
  *(undefined1 *)(param_1 + 0x5aa) = 0;
  *(undefined2 *)(param_1 + 0x5ab) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d5c) = 0;
  *(undefined1 *)(param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d64) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d81) = 0;
  param_1[0x5ae] = 0;
  param_1[0x5af] = 0;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x5b2] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x5b3] = uVar9;
  param_1[0x5b4] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x5b5) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2dac) = uVar5;
  *(undefined4 *)(param_1 + 0x5b6) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2db4) = uVar7;
  param_1[0x5b7] = DAT_14c8464f0;
  FUN_140daf76a(param_1 + 0x5b8);
  param_1[0x631] = 0;
  param_1[0x632] = 0;
  param_1[0x633] = 0;
  *(undefined4 *)(param_1 + 0x634) = 9;
  *(undefined1 *)(param_1 + 0x639) = 0;
  param_1[0x635] = 0;
  param_1[0x636] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31bc) = 0;
  param_1[0x63a] = 0;
  param_1[0x63b] = 0;
  param_1[0x63c] = 2;
  *(undefined1 *)(param_1 + 0x63d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31ec) = 0;
  param_1[0x63f] = 0;
  param_1[0x640] = 0;
  param_1[0x641] = 0;
  param_1[0x642] = 0;
  param_1[0x643] = 0;
  *(undefined4 *)(param_1 + 0x644) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x322c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3234) = 0x200000000;
  param_1[0x64b] = 0;
  *(undefined1 *)(param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x323c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3244) = 0;
  param_1[0x64d] = 0;
  param_1[0x64e] = 0;
  *(undefined4 *)(param_1 + 0x64f) = 2;
  *(undefined1 *)((longlong)param_1 + 0x3291) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x327c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3284) = 0;
  *(undefined4 *)((longlong)param_1 + 0x329c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x654) = 0x3f19999a;
  *(undefined4 *)((longlong)param_1 + 0x32a4) = 0x42340000;
  *(undefined4 *)(param_1 + 0x655) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x32ac) = 0x3f0000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x32b4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32bc) = 0;
  param_1[0x658] = 0;
  param_1[0x659] = 0;
  param_1[0x65a] = 0;
  param_1[0x65b] = 0;
  *(undefined4 *)(param_1 + 0x65c) = 2;
  param_1[0x682] = 0;
  *(undefined4 *)(param_1 + 0x683) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3311) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x341c) = 2;
  param_1[0x690] = 0;
  param_1[0x691] = 0x300000000;
  param_1[0x692] = 0;
  param_1[0x693] = 0;
  *(undefined4 *)(param_1 + 0x694) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34b4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34cc) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x34e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34dc) = 0;
  param_1[0x69d] = 2;
  FUN_1457a9ef6(param_1 + 0x69e);
  param_1[0x721] = 0;
  FUN_1457aa1b8(param_1 + 0x722);
  param_1[0x766] = 0;
  uVar9 = FUN_1406d132e();
  FUN_14112365e(param_1 + 0x767,uVar9);
  param_1[0x77f] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x780) = 0;
  FUN_1405bceb4(param_1 + 0x77f);
  param_1[0x767] = &PTR_FUN_14b9946b8;
  param_1[0x77f] = &PTR_LAB_14b9946c0;
  *(undefined1 *)(param_1 + 0x781) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0c) = 0xbf80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x3c14) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x3c1c) = 1;
  *(undefined4 *)(param_1 + 0x784) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x785) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c2c) = 0;
  param_1[0x786] = 0;
  param_1[0x787] = 0;
  param_1[0x788] = 0;
  param_1[0x789] = 0;
  param_1[0x78a] = 0;
  param_1[0x78b] = 0;
  param_1[0x78c] = 0;
  *(undefined4 *)(param_1 + 0x78d) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c7c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x3ce4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ccc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ca4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8c) = 0;
  *(undefined4 *)(param_1 + 0x79d) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3cec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cfc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3d04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d14) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3d1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3d64) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d6c) = 0;
  param_1[0x7ae] = 0;
  param_1[0x7af] = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 4;
  *(undefined1 *)((longlong)param_1 + 0x3d84) = 0;
  param_1[0x7b1] = 0;
  param_1[0x7b2] = 0;
  *(undefined4 *)(param_1 + 0x7b3) = 2;
  *(undefined4 *)((longlong)param_1 + 0x3dac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3da4) = 0;
  param_1[0x7b6] = 2;
  param_1[0x7b7] = 0;
  param_1[0x7ba] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x7b8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x3dc4) = uVar5;
  *(undefined4 *)(param_1 + 0x7b9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3dcc) = uVar7;
  param_1[0x7bb] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_140daf509;
  lVar8 = FUN_1409b37ec();
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x8a] = lVar8;
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | 4;
  param_1[0x63e] = 0x3d99999a3e99999a;
  local_68 = FUN_145cfe61a;
  local_60._0_4_ = 0;
  FUN_1457a9f44(&DAT_14cb7d8b0,&local_58,param_1,&local_68);
  param_1[0x4f4] = local_58;
  local_68 = FUN_145cfe5ee;
  local_60._0_4_ = 0;
  FUN_1457a9f44(&DAT_14cb7df50,&local_58,param_1,&local_68);
  param_1[0x4f5] = local_58;
  local_68 = FUN_145cfe646;
  local_60._0_4_ = 0;
  FUN_1457a9f44(&DAT_14cb7df68,&local_58,param_1,&local_68);
  param_1[0x4f6] = local_58;
  local_68 = FUN_148db819c;
  local_60 = (longlong *)((ulonglong)local_60._4_4_ << 0x20);
  FUN_1457a9f44(&DAT_14cb7df80,&local_58,param_1,&local_68);
  param_1[0x4f7] = local_58;
  lVar8 = FUN_14592314a();
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x14f] = lVar8;
  lVar8 = FUN_145922d9c();
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x65d] = lVar8;
  lVar8 = FUN_14592340c();
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x65f] = lVar8;
  lVar8 = FUN_145922e88();
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x661] = lVar8;
  lVar8 = FUN_145999744();
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0xa0] = lVar8;
  plVar10 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b994750;
  pcVar1 = (code *)(plVar10 + 2);
  FUN_1457aa2d8(pcVar1,param_1);
  local_68 = pcVar1;
  local_60 = plVar10;
  FUN_1457aa116(&local_68,pcVar1);
  if (plVar10 == (longlong *)0x0) {
    param_1[0x43b] = 0x10;
    plVar11 = (longlong *)param_1[0x43c];
    if (plVar11 != (longlong *)0x0) {
      param_1[0x43c] = 0;
LAB_140daf5b2:
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
joined_r0x000140daf5eb:
        if (iVar4 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    param_1[0x43b] = pcVar1;
    plVar11 = (longlong *)param_1[0x43c];
    if (plVar10 == plVar11) {
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar11 = plVar10;
        goto joined_r0x000140daf5eb;
      }
    }
    else {
      param_1[0x43c] = plVar10;
      if (plVar11 != (longlong *)0x0) goto LAB_140daf5b2;
    }
  }
  plVar10 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_60 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_1457a9ebe(param_1 + 0x69e,param_1);
  lVar8 = FUN_1403ca227();
  *(undefined4 *)((longlong)param_1 + 0x329c) = *(undefined4 *)(lVar8 + 0x438);
  *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(lVar8 + 0x43c);
  *(undefined4 *)((longlong)param_1 + 0x32a4) = *(undefined4 *)(lVar8 + 0x440);
  *(undefined4 *)(param_1 + 0x655) = *(undefined4 *)(lVar8 + 0x444);
  *(undefined4 *)((longlong)param_1 + 0x32ac) = *(undefined4 *)(lVar8 + 0x448);
  *(undefined4 *)(param_1 + 0x656) = *(undefined4 *)(lVar8 + 0x44c);
  *(undefined4 *)((longlong)param_1 + 0x32b4) = 0;
  FUN_1457a9ec8(param_1 + 0x7ad,param_1);
LAB_140daf509:
  FUN_1446f470e(&local_70,L"StructuredInteractableUserState",1);
  uVar9 = FUN_1458fce16();
  local_80 = 0;
  local_88 = 1;
  lVar8 = FUN_14048696c(param_1,local_70,uVar9,uVar9);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x495] = lVar8;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140daf67c FUN_140daf67c body=50 status=ok
// SIG undefined FUN_140daf67c(void)

undefined8 * FUN_140daf67c(undefined8 *param_1)

{
  FUN_140daf6ae();
  param_1[1] = &DAT_14cb84be8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b413550;
  return param_1;
}



// FUNCTION 140daf6ae FUN_140daf6ae body=188 status=ok
// SIG undefined FUN_140daf6ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140daf6ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb84c58) {
    FUN_144b3d300(&DAT_14cb84c58);
    if (DAT_14cb84c58 == -1) {
      _DAT_14cb84c08 = 0;
      _DAT_14cb84c10 = 0;
      _DAT_14cb84be8 = 0;
      uRam000000014cb84bf0 = 0;
      _DAT_14cb84c14 = 0xffffffff00000080;
      _DAT_14cb84c1c = 0;
      DAT_14cb84c28 = 0;
      _DAT_14cb84c30 = 0;
      DAT_14cb84c38 = 0;
      uRam000000014cb84c40 = 0;
      _DAT_14cb84c48 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb84c50);
      atexit(FUN_143dbe1a2);
      _Init_thread_footer(&DAT_14cb84c58);
    }
  }
  return &DAT_14cb84be8;
}



// FUNCTION 140daf76a FUN_140daf76a body=538 status=ok
// SIG undefined FUN_140daf76a(void)

undefined8 * FUN_140daf76a(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14b9963c0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  lVar1 = 0x38;
  do {
    *(undefined4 *)((longlong)param_1 + lVar1) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0xc) = 0;
    *(undefined1 *)((longlong)param_1 + lVar1 + -4) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x138);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x30] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  FUN_141067f4a(param_1 + 0x31);
  param_1[0x31] = &PTR_FUN_14b91a930;
  param_1[0x36] = 0;
  *(byte *)((longlong)param_1 + 0x192) = *(byte *)((longlong)param_1 + 0x192) | 6;
  *(undefined1 *)(param_1 + 0x32) = 5;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0xffffffffffffffff;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) & 0xe0;
  FUN_1449db8d8(param_1);
  if (((byte *)param_1[0x35] != (byte *)0x0) && ((*(byte *)param_1[0x35] & 1) != 0)) {
    param_1[0x36] = 0;
    FUN_1405f3418(param_1 + 0x31);
  }
  *(undefined4 *)(param_1 + 0x2e) = 1000;
  return param_1;
}



// FUNCTION 140daf984 FUN_140daf984 body=1268 status=ok
// SIG undefined FUN_140daf984(void)

undefined8 * FUN_140daf984(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14149a6f4();
  *param_1 = &PTR_FUN_14aa48c60;
  param_1[0x72] = &PTR_FUN_14aa49b80;
  param_1[0x85] = &PTR_LAB_14aa49be0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  memset(param_1 + 0x9f,0,0xa8);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  param_1[0xc5] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xc6) = 0x3f800000;
  param_1[0xf4] = 0;
  param_1[0xfb] = 0xffffffff;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  memset(param_1 + 0xcf,0,0x88);
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x744) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0;
  memset(param_1 + 0xfc,0,0x110);
  param_1[0x11c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x11d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x8ec) = 1;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f4) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x904) = 1;
  *(undefined4 *)(param_1 + 0x121) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x90c) = 1;
  *(undefined1 *)(param_1 + 0x122) = 0;
  *(undefined4 *)((longlong)param_1 + 0x914) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x123) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x125) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x126) = 0;
  *(undefined1 *)((longlong)param_1 + 0x934) = 0;
  param_1[0x129] = 0;
  param_1[0x127] = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  lVar5 = FUN_1412bd3b2();
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0xa0] = lVar5;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x3f800000;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 8;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 1;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 1;
  *(undefined4 *)(param_1 + 0xf5) = 0xc2c80000;
  *(undefined1 *)(param_1 + 0xcd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x66a) = 3;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 0x47c35000;
  param_1[0xf9] = 0;
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffff0 | 8;
  *(byte *)((longlong)param_1 + 0x634) = *(byte *)((longlong)param_1 + 0x634) | 100;
  *(undefined4 *)(param_1 + 0xca) = 0x3f800000;
  plVar6 = (longlong *)FUN_140389788();
  if (plVar6[0x22] == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
  }
  *(uint *)((longlong)param_1 + 0x634) = *(uint *)((longlong)param_1 + 0x634) | 0x380;
  *(undefined1 *)(param_1 + 199) = 0x80;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  *(undefined1 *)(param_1 + 0x97) = 1;
  *(undefined4 *)(param_1 + 0x92) = 0x41a00000;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfb;
  *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) | 2;
  *(undefined1 *)((longlong)param_1 + 0x7ac) = 0;
  *(byte *)(param_1 + 0xfa) = *(byte *)(param_1 + 0xfa) & 0xfc | 2;
  iVar2 = *(int *)(param_1 + 0xcc);
  lVar5 = (longlong)iVar2;
  *(uint *)(param_1 + 0xcc) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x664) < iVar2 + 1U) {
    FUN_14011bb82(param_1 + 0xcb,iVar2);
  }
  lVar7 = param_1[0xcb];
  *(undefined8 *)(lVar7 + lVar5 * 0x18) = DAT_14c966e98;
  *(undefined8 *)(lVar7 + 8 + lVar5 * 0x18) = DAT_14c966ea0;
  lVar3 = DAT_14c966ea8;
  *(longlong *)(lVar7 + 0x10 + lVar5 * 0x18) = DAT_14c966ea8;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[0x39] != 0) {
    FUN_140583ed2(param_1[0x39],CONCAT71((int7)((ulonglong)(lVar5 * 3) >> 8),1));
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar4 = local_40;
  *local_40 = &PTR_LAB_14aa4d520;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_40[2] = lVar7;
  *local_40 = &PTR_FUN_14aa4d4b0;
  local_40[3] = FUN_145a479ca;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  if (DAT_14c83f4c8 == 0) {
LAB_140dafd79:
    if (DAT_14c83f4c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (DAT_14c83f4c0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c83f4c0)(DAT_14c83f4c0,0);
    FUN_1446efa72(&DAT_14c83f4c0,0,0,0x10);
    DAT_14c83f4c8 = 0;
    goto LAB_140dafd79;
  }
  DAT_14c83f4c0 = puVar4;
  DAT_14c83f4c8 = 2;
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_140dafdd9;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140dafdd9:
  *(undefined1 *)(param_1 + 0x12a) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dafe7a FUN_140dafe7a body=339 status=ok
// SIG undefined FUN_140dafe7a(void)

undefined8 * FUN_140dafe7a(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140dafe7a;
      local_50 = 0;
      local_58 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  puVar1[1] = &DAT_14c963e38;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71720;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140daffce(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140daffce FUN_140daffce body=197 status=ok
// SIG undefined FUN_140daffce(void)

undefined8 *
FUN_140daffce(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_38 = uVar1;
  if (((uVar1 & 1) != 0) && (uVar1 = uVar1 & 0xfffffffffffffffe, uVar1 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar1);
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar1);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar1);
    }
  }
  FUN_1403a630a(param_1,&local_38,param_3,param_4);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  *param_1 = &PTR_LAB_149e71720;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140db0094 FUN_140db0094 body=40 status=ok
// SIG undefined FUN_140db0094(void)

undefined8 FUN_140db0094(undefined8 param_1,int param_2)

{
  FUN_140db00bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140db00bc FUN_140db00bc body=1267 status=ok
// SIG undefined FUN_140db00bc(void)

void FUN_140db00bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b5d12e0;
  param_1[0x72] = &PTR_FUN_14b5d1950;
  param_1[0x73] = &PTR_FUN_14b5d1970;
  param_1[0x74] = &PTR_FUN_14b5d19a0;
  param_1[0x75] = &PTR_FUN_14b5d19b0;
  param_1[0x76] = &PTR_FUN_14b5d1a20;
  param_1[0x77] = &PTR_FUN_14b5d1a50;
  param_1[0x78] = &PTR_FUN_14b5d1a80;
  param_1[0x7f] = &PTR_FUN_14b5d1b30;
  param_1[0x80] = &PTR_FUN_14b5d1ba0;
  param_1[0x81] = &PTR_FUN_14b5d1c10;
  param_1[0x82] = &PTR_FUN_14b5d1c40;
  param_1[0x83] = &PTR_FUN_14b5d1c80;
  param_1[0x84] = &PTR_FUN_14b5d1d20;
  param_1[0x85] = &PTR_FUN_14b5d1d40;
  param_1[0x89] = &PTR_FUN_14b5d1d60;
  param_1[0x8a] = &PTR_FUN_14b5d1e20;
  param_1[0x8b] = &PTR_FUN_14b5d1ea0;
  param_1[0x8c] = &PTR_FUN_14b5d1ef0;
  param_1[0x8d] = &PTR_FUN_14b5d1f30;
  param_1[0x8e] = &PTR_FUN_14b5d1f50;
  param_1[0x8f] = &PTR_FUN_14b5d1f70;
  param_1[0x90] = &PTR_FUN_14b5d1f90;
  param_1[0x91] = &PTR_FUN_14b5d1fb0;
  param_1[0x92] = &PTR_FUN_14b5d1fd0;
  param_1[0x93] = &PTR_FUN_14b5d1ff0;
  param_1[0x94] = &PTR_FUN_14b5d2010;
  param_1[0x95] = &PTR_FUN_14b5d2030;
  param_1[0x96] = &PTR_FUN_14b5d2050;
  param_1[0x34b] = &PTR_FUN_14b5d2070;
  param_1[0x352] = &PTR_FUN_14b5d2080;
  param_1[0x353] = &PTR_FUN_14b5d20c0;
  param_1[0x354] = &PTR_FUN_14b5d2100;
  param_1[0x355] = &PTR_FUN_14b5d2150;
  param_1[0x356] = &PTR_FUN_14b5d2180;
  param_1[0x359] = &PTR_FUN_14b5d21c0;
  param_1[0x35a] = &PTR_FUN_14b5d21d0;
  param_1[0x35b] = &PTR_FUN_14b5d2200;
  param_1[0x35c] = &PTR_FUN_14b5d22a0;
  param_1[0x4bf] = &PTR_FUN_14b5d22c0;
  param_1[0x4c0] = &PTR_FUN_14b5d23b0;
  param_1[0x4c1] = &PTR_FUN_14b5d2420;
  plVar3 = (longlong *)param_1[0x522];
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
  *(undefined4 *)(param_1 + 0x519) = 0;
  if (param_1[0x518] != 0) {
    FUN_1400020a8();
  }
  FUN_140db05b0(param_1 + 0x510);
  FUN_140db05e8(param_1 + 0x507,1);
  plVar3 = (longlong *)param_1[0x4fd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x4e3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = param_1 + 0x4df;
  if (*(int *)(param_1 + 0x4e0) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140db0397;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x4e0) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140db0397:
  FUN_144760e21(param_1[0x4dc],*(undefined4 *)(param_1 + 0x4dd));
  if (param_1[0x4dc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4da] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4d7],*(undefined4 *)(param_1 + 0x4d8));
  if (param_1[0x4d7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4ce],*(undefined4 *)(param_1 + 0x4cf));
  if (param_1[0x4ce] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4cc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4c9],*(undefined4 *)(param_1 + 0x4ca));
  if (param_1[0x4c9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4c4],*(undefined4 *)(param_1 + 0x4c5));
  if (param_1[0x4c4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c2] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 140db05b0 FUN_140db05b0 body=55 status=ok
// SIG undefined FUN_140db05b0(void)

void FUN_140db05b0(longlong *param_1)

{
  FUN_140db06b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140db05e8 FUN_140db05e8 body=205 status=ok
// SIG undefined FUN_140db05e8(void)

void FUN_140db05e8(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 0x38) = *(int *)(param_1[3] + 0x38) + -1;
    UNLOCK();
    lVar2 = param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      lVar4 = lVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      lVar4 = param_1[3];
    }
    LOCK();
    bVar6 = param_1 == *(longlong **)(lVar4 + 0x30);
    if (bVar6) {
      *(longlong *)(lVar4 + 0x30) = lVar3;
    }
    UNLOCK();
    if (!bVar6) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    lVar3 = param_1[2];
    lVar4 = param_1[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 == '\0') && ((longlong)*(int *)(lVar4 + 0x20) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5) != 0)) {
          FUN_140db0732(lVar4 + 0x18,lVar3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x20) * 0x10 != lVar5);
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140db06b6 FUN_140db06b6 body=123 status=ok
// SIG undefined FUN_140db06b6(void)

void FUN_140db06b6(longlong param_1,int param_2)

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



// FUNCTION 140db0732 FUN_140db0732 body=162 status=ok
// SIG undefined FUN_140db0732(void)

void FUN_140db0732(longlong *param_1,undefined8 param_2)

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
        goto LAB_140db07bf;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140db07bf:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140db07d4 FUN_140db07d4 body=175 status=ok
// SIG undefined FUN_140db07d4(void)

void FUN_140db07d4(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140db0884(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_14736f934(param_1 + 0xa8,0);
  }
  FUN_140db08c4(param_1 + 0xa8,*(int *)(param_1 + 0xc0) + 1,1);
  local_1c = 0;
  FUN_140db0a94((longlong)*(int *)(param_1 + 0xc0) * 0x50 + *(longlong *)(param_1 + 0xa8),local_20,
                &local_1c,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db0884 FUN_140db0884 body=63 status=ok
// SIG undefined FUN_140db0884(void)

void FUN_140db0884(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1401bc218(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 140db08c4 FUN_140db08c4 body=191 status=ok
// SIG undefined FUN_140db08c4(void)

void FUN_140db08c4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140db0984(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined4 *)((longlong)iVar1 * 0x50 + *param_1 + 0x48);
      do {
        *(undefined8 *)(puVar2 + -10) = 0;
        puVar2[-8] = 0;
        *(undefined8 *)(puVar2 + -0x12) = 0;
        *(undefined8 *)(puVar2 + -0x10) = 0;
        *(undefined8 *)(puVar2 + -7) = 0xffffffff00000080;
        puVar2[-5] = 0;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x14;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_14736f9a6(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_14736fa0e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140db0984 FUN_140db0984 body=272 status=ok
// SIG undefined FUN_140db0984(void)

void FUN_140db0984(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140db0a94 FUN_140db0a94 body=503 status=ok
// SIG undefined FUN_140db0a94(void)

int * FUN_140db0a94(longlong *param_1,int *param_2,uint *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_68 [32];
  int local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a6ca48(param_1,local_48);
  uVar6 = *param_3;
  *local_40 = uVar6;
  local_40[1] = 0xffffffff;
  iVar11 = *(int *)((longlong)param_1 + 0x34);
  if (((int)param_1[1] != iVar11) && ((int)param_1[1] - iVar11 != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      lVar3 = *param_1;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0xc) == uVar6) {
          if (iVar11 != 0) {
            *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = local_48[0];
          }
          puVar1 = (undefined4 *)(lVar3 + (longlong)local_48[0] * 0xc);
          *puVar1 = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = (undefined4)param_1[6];
          }
          puVar1[1] = uVar12;
          *(int *)(param_1 + 6) = local_48[0];
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          iVar11 = local_48[0] + 0x1f;
          if (-1 < local_48[0]) {
            iVar11 = local_48[0];
          }
          bVar4 = (byte)local_48[0] & 0x1f;
          puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar11 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          cVar10 = '\x01';
          goto LAB_140db0b40;
        }
        iVar8 = *(int *)(lVar3 + (longlong)iVar8 * 0xc + 4);
      } while (iVar8 != -1);
    }
  }
  cVar10 = '\0';
  iVar8 = local_48[0];
LAB_140db0b40:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 == '\0') {
    uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar7 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= (int)param_1[9])) {
      uVar6 = (int)param_1[9] - 1U & uVar6;
      local_40[2] = uVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      local_40[1] = *(uint *)((longlong)plVar5 +
                             ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
           iVar8;
    }
    else {
      *(int *)(param_1 + 9) = iVar11;
      FUN_1449809d4(param_1);
    }
  }
  *param_2 = iVar8;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140db0c8c FUN_140db0c8c body=480 status=ok
// SIG undefined FUN_140db0c8c(void)

void FUN_140db0c8c(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_140db0e6c(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140db0ea4(param_1 + 0x2a);
  plVar1 = param_1 + 0x22;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x26) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x25)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x25)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x1a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x13;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x16)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x16)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_144760e21(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140db0e6c FUN_140db0e6c body=55 status=ok
// SIG undefined FUN_140db0e6c(void)

void FUN_140db0e6c(longlong *param_1)

{
  FUN_140db0edc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140db0ea4 FUN_140db0ea4 body=55 status=ok
// SIG undefined FUN_140db0ea4(void)

void FUN_140db0ea4(longlong *param_1)

{
  FUN_140db0f56(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140db0edc FUN_140db0edc body=121 status=ok
// SIG undefined FUN_140db0edc(void)

void FUN_140db0edc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140db0f56 FUN_140db0f56 body=407 status=ok
// SIG undefined FUN_140db0f56(void)

void FUN_140db0f56(longlong *param_1,int param_2)

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



// FUNCTION 140db10ee FUN_140db10ee body=856 status=ok
// SIG undefined FUN_140db10ee(void)

void FUN_140db10ee(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140db1448();
  puVar3 = cohtml::IEventHandler::operator_new(0x20);
  *puVar3 = &PTR_FUN_14b479100;
  puVar3[2] = &LAB_145a0ba8c;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = param_1;
  uVar4 = FUN_140db1ba0(param_1,L"Event_AttemptAction",puVar3);
  lVar1 = param_1 + 0x38;
  local_58 = "Event_AttemptAction";
  local_50 = 0x13;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  local_58 = (char *)(ulonglong)uVar2;
  puVar3 = (undefined8 *)
           FUN_140db173c(lVar1,(uVar2 & 0xffff | uVar2 << 0x10) + ((uVar2 & 0xffff) >> 4) +
                               ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10),&local_58);
  *puVar3 = uVar4;
  puVar3 = cohtml::IEventHandler::operator_new(0x20);
  *puVar3 = &PTR_FUN_14b479120;
  puVar3[2] = FUN_148a01b2c;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = param_1;
  uVar4 = FUN_140db1ba0(param_1,L"Event_OnCohEscapeInputHandlerAdded",puVar3);
  local_58 = "Event_OnCohEscapeInputHandlerAdded";
  local_50 = 0x22;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  local_58 = (char *)(ulonglong)uVar2;
  puVar3 = (undefined8 *)
           FUN_140db173c(lVar1,(uVar2 & 0xffff | uVar2 << 0x10) + ((uVar2 & 0xffff) >> 4) +
                               ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10),&local_58);
  *puVar3 = uVar4;
  puVar3 = cohtml::IEventHandler::operator_new(0x20);
  *puVar3 = &PTR_FUN_14b479120;
  puVar3[2] = FUN_148a01b6e;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = param_1;
  uVar4 = FUN_140db1ba0(param_1,L"Event_OnCohEscapeInputHandlerRemoved",puVar3);
  local_58 = "Event_OnCohEscapeInputHandlerRemoved";
  local_50 = 0x24;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  local_58 = (char *)(ulonglong)uVar2;
  puVar3 = (undefined8 *)
           FUN_140db173c(lVar1,(uVar2 & 0xffff | uVar2 << 0x10) + ((uVar2 & 0xffff) >> 4) +
                               ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10),&local_58);
  *puVar3 = uVar4;
  puVar3 = cohtml::IEventHandler::operator_new(0x20);
  *puVar3 = &PTR_FUN_14b479140;
  puVar3[2] = &LAB_141285bf0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = param_1;
  uVar4 = FUN_140db1ba0(param_1,L"Event_OnTooltipFocused",puVar3);
  local_58 = "Event_OnTooltipFocused";
  local_50 = 0x16;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  local_58 = (char *)(ulonglong)uVar2;
  puVar3 = (undefined8 *)
           FUN_140db173c(lVar1,(uVar2 & 0xffff | uVar2 << 0x10) + ((uVar2 & 0xffff) >> 4) +
                               ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10),&local_58);
  *puVar3 = uVar4;
  puVar3 = cohtml::IEventHandler::operator_new(0x20);
  *puVar3 = &PTR_FUN_14b479160;
  puVar3[2] = &LAB_140c7f0aa;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = param_1;
  uVar4 = FUN_140db1ba0(param_1,L"Event_OnTooltipUnfocused",puVar3);
  local_58 = "Event_OnTooltipUnfocused";
  local_50 = 0x18;
  local_4c = 0;
  uVar2 = FUN_14001a6c0(&local_58,1);
  local_58 = (char *)(ulonglong)uVar2;
  puVar3 = (undefined8 *)
           FUN_140db173c(lVar1,(uVar2 & 0xffff | uVar2 << 0x10) + ((uVar2 & 0xffff) >> 4) +
                               ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10),&local_58);
  *puVar3 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db1448 FUN_140db1448 body=755 status=ok
// SIG undefined FUN_140db1448(void)

void FUN_140db1448(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b478e30;
  puVar2[2] = thunk_FUN_140afad18;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"ScriptEvent",puVar2);
  lVar5 = param_1 + 0x38;
  local_50 = "ScriptEvent";
  local_48 = 0xb;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  local_50 = (char *)(ulonglong)uVar1;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar5,(uVar1 & 0xffff | uVar1 << 0x10) + ((uVar1 & 0xffff) >> 4) +
                               ((uVar1 >> 0x10) << 0x13 | uVar1 >> 0x10),&local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b478e50;
  puVar2[2] = FUN_140de1078;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"ScriptEvent_Spatial",puVar2);
  local_50 = "ScriptEvent_Spatial";
  local_48 = 0x13;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  local_50 = (char *)(ulonglong)uVar1;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar5,(uVar1 & 0xffff | uVar1 << 0x10) + ((uVar1 & 0xffff) >> 4) +
                               ((uVar1 >> 0x10) << 0x13 | uVar1 >> 0x10),&local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b478e70;
  puVar2[2] = FUN_143eb4cda;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"TextInputHasFocusChanged",puVar2);
  local_50 = "TextInputHasFocusChanged";
  local_48 = 0x18;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  local_50 = (char *)(ulonglong)uVar1;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar5,(uVar1 & 0xffff | uVar1 << 0x10) + ((uVar1 & 0xffff) >> 4) +
                               ((uVar1 >> 0x10) << 0x13 | uVar1 >> 0x10),&local_50);
  *puVar2 = uVar3;
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x34))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = 0;
    }
    puVar2 = cohtml::IEventHandler::operator_new(0x20);
    *puVar2 = &PTR_FUN_14b478e90;
    puVar2[2] = FUN_148a00e78;
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[1] = param_1;
    if (*(longlong *)(lVar5 + 0x40) == 0) {
      plVar4 = (longlong *)(lVar5 + 0x28);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x238) + 8);
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 0x1a0))(plVar4,"Event_PlayMaterialAnimation",puVar2);
    }
    *(undefined8 *)(param_1 + 0x228) = uVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db173c FUN_140db173c body=189 status=ok
// SIG undefined FUN_140db173c(void)

longlong * FUN_140db173c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140db17d1;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140db17fa(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_140db17d1:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140db17fa FUN_140db17fa body=290 status=ok
// SIG undefined FUN_140db17fa(void)

undefined4 *
FUN_140db17fa(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140db19b6(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140db191e(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
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
      FUN_140db1f4e(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db191e FUN_140db191e body=152 status=ok
// SIG undefined FUN_140db191e(void)

void FUN_140db191e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147ad3be4((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_140db1987;
    }
  }
  uVar5 = 0;
LAB_140db1987:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140db19b6 FUN_140db19b6 body=489 status=ok
// SIG undefined FUN_140db19b6(void)

int * FUN_140db19b6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140db1ba0 FUN_140db1ba0 body=941 status=ok
// SIG undefined FUN_140db1ba0(void)

undefined8 FUN_140db1ba0(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  void *_Src;
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [128];
  undefined1 *local_178;
  undefined1 *local_170;
  int local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  wchar_t *local_150;
  char local_148;
  wchar_t local_140 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar7 = *(uint *)(param_1 + 0x30);
    uVar4 = 0;
    if (((int)uVar7 < 0) || (DAT_14c9647dc <= (int)uVar7)) goto LAB_140db1e50;
    lVar5 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x34))) {
      uVar4 = 0;
      if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) goto LAB_140db1e50;
      local_160 = local_140;
      local_148 = '\0';
      local_150 = (wchar_t *)&local_40;
      builtin_wcsncpy(local_140,L"Event_",6);
      local_158 = local_140 + 6;
      _Src = *(void **)(param_1 + 0x20);
      uVar7 = *(uint *)(param_1 + 0x28);
      iVar2 = uVar7 - 1;
      if (uVar7 == 0) {
        iVar2 = 0;
      }
      lVar5 = (longlong)iVar2;
      if (0x79 < iVar2) {
        FUN_140213274(&local_160,lVar5);
      }
      pwVar1 = local_158;
      if (1 < uVar7) {
        memcpy(local_158,_Src,lVar5 * 2);
        local_158 = pwVar1 + lVar5;
      }
      if (local_150 <= local_158 + 1) {
        FUN_140213274(&local_160,1);
      }
      *local_158 = L'_';
      if (param_2 == (wchar_t *)0x0) {
        iVar2 = 0;
        local_158 = local_158 + 1;
      }
      else {
        local_158 = local_158 + 1;
        sVar3 = wcslen(param_2);
        iVar2 = (int)sVar3;
      }
      lVar5 = (longlong)iVar2;
      if (local_150 <= local_158 + lVar5) {
        FUN_140213274(&local_160,lVar5);
      }
      pwVar1 = local_158;
      if (iVar2 != 0) {
        memcpy(local_158,param_2,lVar5 * 2);
        local_158 = pwVar1 + lVar5;
      }
      pwVar1 = local_160;
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_140db1e84:
        lVar5 = 0;
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x30);
        lVar5 = 0;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if ((plVar6 == (longlong *)0x0) ||
             (((int)plVar6[2] != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_140db1e84;
          lVar5 = *plVar6;
        }
      }
      *local_158 = L'\0';
      local_178 = (undefined1 *)0x0;
      if (local_160 == (wchar_t *)0x0) {
        local_170 = (undefined1 *)0x0;
        local_168 = 0;
      }
      else {
        sVar3 = wcslen(local_160);
        local_168 = FUN_14475aa65(0,pwVar1,sVar3 & 0xffffffff);
        uVar7 = local_168 + 1;
        local_170 = (undefined1 *)0x0;
        if (0x80 < uVar7) {
          FUN_1446efa72(&local_178,0,uVar7,1);
          local_170 = local_178;
        }
        if (local_170 == (undefined1 *)0x0) {
          local_170 = local_1f8;
        }
        FUN_14475a98a(local_170,uVar7,pwVar1,(int)sVar3 + 1);
      }
      if (*(longlong *)(lVar5 + 0x40) == 0) {
        plVar6 = (longlong *)(lVar5 + 0x28);
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x238) + 8);
      }
      plVar6 = (longlong *)*plVar6;
      if (plVar6 == (longlong *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x1a0))(plVar6,local_170,param_3);
      }
      if (local_178 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_148 == '\x01') {
        FUN_1400020a8(local_160);
      }
      goto LAB_140db1e50;
    }
  }
  uVar4 = 0;
LAB_140db1e50:
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db1f4e FUN_140db1f4e body=688 status=ok
// SIG undefined FUN_140db1f4e(void)

void FUN_140db1f4e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140db1fb4;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140db1fb4:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140db21fe FUN_140db21fe body=284 status=ok
// SIG undefined FUN_140db21fe(void)

undefined8 FUN_140db21fe(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140db2314;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140db2314;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140db2314:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140db22c1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140db22c1;
    }
  }
  uVar6 = 0;
LAB_140db22c1:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db2353 FUN_140db2353 body=52 status=ok
// SIG undefined FUN_140db2353(void)

void FUN_140db2353(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140db2388(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3ce850;
  *(undefined2 *)(puVar1 + 5) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 140db2388 FUN_140db2388 body=94 status=ok
// SIG undefined FUN_140db2388(void)

undefined8 * FUN_140db2388(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14ab51ed0;
  return param_1;
}



// FUNCTION 140db23e6 FUN_140db23e6 body=93 status=ok
// SIG undefined FUN_140db23e6(void)

void FUN_140db23e6(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140db2444();
  local_28 = 0x12a4febb;
  uStack_24 = 0xb55f4367;
  uStack_20 = 0xb5d3a4df;
  uStack_1c = 0xeb1087b9;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 0) {
    FUN_148cdfa68(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140db2444 FUN_140db2444 body=1544 status=ok
// SIG undefined FUN_140db2444(void)

void FUN_140db2444(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144842962();
  local_38 = 0x54f89935;
  uStack_34 = 0x870a4d39;
  uStack_30 = 0x9fb22a9c;
  uStack_2c = 0x725548e2;
  iVar5 = FUN_1448a256a(param_1);
  if (iVar5 < 0) {
    lVar7 = FUN_14048bbc8(param_1 + 0x758);
    if (lVar7 == param_1) {
      FUN_1409308e8(param_1);
    }
    FUN_1487c64fc(param_1);
    FUN_1487c66ae(param_1);
  }
  lVar7 = *(longlong *)(param_1 + 0xd40);
  if (lVar7 == 0) {
    uVar6 = FUN_1409fd3f6();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0xd40) = lVar7;
  }
  if (*(longlong *)(param_1 + 0xd48) == 0) {
    plVar1 = (longlong *)(param_1 + 0xd38);
    if ((lVar7 != 0) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0xd48) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,plVar1);
        *(longlong *)(param_1 + 0xd48) = lVar7;
        if (lVar7 != 0) goto LAB_140db25f5;
      }
    }
    lVar8 = FUN_1409fd42f();
    lVar7 = *(longlong *)(lVar8 + 0x90);
    if (*plVar1 != lVar7) {
      *(undefined8 *)(param_1 + 0xd48) = 0;
    }
    *(longlong *)(param_1 + 0xd38) = lVar7;
    if (*(longlong *)(param_1 + 0xd40) != *(longlong *)(lVar8 + 0x98)) {
      *(undefined8 *)(param_1 + 0xd48) = 0;
    }
    uVar6 = FUN_14477b664();
    lVar9 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0xd40) = lVar9;
    lVar7 = *(longlong *)(lVar8 + 0xa0);
    *(longlong *)(param_1 + 0xd48) = lVar7;
    if (lVar9 == 0) {
      uVar6 = FUN_1409fd3f6();
      lVar9 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0xd40) = lVar9;
      lVar7 = *(longlong *)(param_1 + 0xd48);
    }
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0xd48) = 0;
      if ((lVar9 != 0) && (*(longlong *)(param_1 + 0xd38) != 0)) {
        plVar3 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0xd48) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,plVar1);
          *(longlong *)(param_1 + 0xd48) = lVar7;
          if (lVar7 != 0) goto LAB_140db25f5;
        }
      }
      *(undefined1 *)(param_1 + 0xd30) = 0;
    }
  }
LAB_140db25f5:
  lVar7 = *(longlong *)(param_1 + 0xe18);
  if (lVar7 == 0) {
    uVar6 = FUN_1409fd3bc();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0xe18) = lVar7;
  }
  if (*(longlong *)(param_1 + 0xe20) == 0) {
    plVar1 = (longlong *)(param_1 + 0xe10);
    if ((lVar7 != 0) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0xe20) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,plVar1);
        *(longlong *)(param_1 + 0xe20) = lVar7;
        if (lVar7 != 0) goto LAB_140db2766;
      }
    }
    lVar8 = FUN_1409fd42f();
    lVar7 = *(longlong *)(lVar8 + 0x78);
    if (*plVar1 != lVar7) {
      *(undefined8 *)(param_1 + 0xe20) = 0;
    }
    *(longlong *)(param_1 + 0xe10) = lVar7;
    if (*(longlong *)(param_1 + 0xe18) != *(longlong *)(lVar8 + 0x80)) {
      *(undefined8 *)(param_1 + 0xe20) = 0;
    }
    uVar6 = FUN_14477b664();
    lVar9 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0xe18) = lVar9;
    lVar7 = *(longlong *)(lVar8 + 0x88);
    *(longlong *)(param_1 + 0xe20) = lVar7;
    if (lVar9 == 0) {
      uVar6 = FUN_1409fd3bc();
      lVar9 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0xe18) = lVar9;
      lVar7 = *(longlong *)(param_1 + 0xe20);
    }
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0xe20) = 0;
      if ((lVar9 != 0) && (*(longlong *)(param_1 + 0xe10) != 0)) {
        plVar3 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0xe20) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,plVar1);
          *(longlong *)(param_1 + 0xe20) = lVar7;
          if (lVar7 != 0) goto LAB_140db2766;
        }
      }
      *(undefined1 *)(param_1 + 0xe08) = 0;
    }
  }
LAB_140db2766:
  lVar7 = *(longlong *)(param_1 + 0xc00);
  if (lVar7 == 0) {
    uVar6 = FUN_1409fd3bc();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0xc00) = lVar7;
  }
  if (*(longlong *)(param_1 + 0xc08) == 0) {
    plVar1 = (longlong *)(param_1 + 0xbf8);
    if ((lVar7 != 0) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0xc08) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,plVar1);
        *(longlong *)(param_1 + 0xc08) = lVar7;
        if (lVar7 != 0) goto LAB_140db28d7;
      }
    }
    lVar8 = FUN_1409fd42f();
    lVar7 = *(longlong *)(lVar8 + 0x78);
    if (*plVar1 != lVar7) {
      *(undefined8 *)(param_1 + 0xc08) = 0;
    }
    *(longlong *)(param_1 + 0xbf8) = lVar7;
    if (*(longlong *)(param_1 + 0xc00) != *(longlong *)(lVar8 + 0x80)) {
      *(undefined8 *)(param_1 + 0xc08) = 0;
    }
    uVar6 = FUN_14477b664();
    lVar9 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0xc00) = lVar9;
    lVar7 = *(longlong *)(lVar8 + 0x88);
    *(longlong *)(param_1 + 0xc08) = lVar7;
    if (lVar9 == 0) {
      uVar6 = FUN_1409fd3bc();
      lVar9 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0xc00) = lVar9;
      lVar7 = *(longlong *)(param_1 + 0xc08);
    }
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0xc08) = 0;
      if ((lVar9 != 0) && (*(longlong *)(param_1 + 0xbf8) != 0)) {
        plVar3 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0xc08) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,plVar1);
          *(longlong *)(param_1 + 0xc08) = lVar7;
          if (lVar7 != 0) goto LAB_140db28d7;
        }
      }
      *(undefined1 *)(param_1 + 0xbf0) = 0;
    }
  }
LAB_140db28d7:
  cVar4 = FUN_1418823d4(param_1 + 0x690);
  if (cVar4 != '\0') {
    *(undefined8 *)(param_1 + 0x8e4) = 0;
    *(undefined8 *)(param_1 + 0x8ec) = 0;
    *(undefined8 *)(param_1 + 0x8f4) = 0;
  }
  lVar7 = FUN_14048bbc8(param_1 + 0x758);
  if (lVar7 == param_1) {
    FUN_1409309cc(param_1,1);
  }
  if (((*(char *)(param_1 + 0x8e0) == '\x01') &&
      ((lVar7 = *(longlong *)(param_1 + 0xb0), lVar7 != 0 ||
       (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)))) &&
     ((bVar2 = *(byte *)(lVar7 + 0x152), bVar2 == 1 ||
      ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))))) {
    *(undefined1 *)(param_1 + 0x6f1) = 0;
  }
  FUN_140930bae(param_1);
  FUN_14048bbc8(param_1 + 0x758);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140db2a4e FUN_140db2a4e body=56 status=ok
// SIG undefined FUN_140db2a4e(void)

void FUN_140db2a4e(longlong param_1,undefined8 param_2)

{
  FUN_140c8307c();
  FUN_140c7b284(param_1 + 0x1488,param_2);
  FUN_140db2a86(param_1 + 0x6f90,param_2);
  return;
}


