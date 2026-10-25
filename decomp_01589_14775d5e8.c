// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14775d5e8 FUN_14775d5e8 body=154 status=ok
// SIG undefined FUN_14775d5e8(void)

void FUN_14775d5e8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x90) = local_28;
  *(undefined4 *)(param_1 + 0x94) = uStack_24;
  *(undefined4 *)(param_1 + 0x98) = uStack_20;
  *(undefined4 *)(param_1 + 0x9c) = uStack_1c;
  FUN_141272672(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d684 FUN_14775d684 body=156 status=ok
// SIG undefined FUN_14775d684(void)

void FUN_14775d684(undefined8 param_1,longlong param_2)

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
  FUN_14775d722(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775d722 FUN_14775d722 body=799 status=ok
// SIG undefined FUN_14775d722(void)

void FUN_14775d722(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_3d8 [32];
  undefined1 *local_3b8;
  undefined1 local_3a1;
  code *local_3a0;
  longlong *local_398;
  undefined8 local_388;
  longlong *local_380;
  undefined8 local_378;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  longlong local_328;
  longlong *local_320;
  longlong local_318;
  longlong *local_310;
  longlong local_308;
  longlong *plStack_300;
  undefined1 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  FUN_140760c2c(param_1,&local_318);
  if (local_318 != 0) {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_308 = 0;
      plStack_300 = (longlong *)0x0;
      local_2f8 = 1;
      local_2f0 = 0;
      uStack_2e8 = 0;
      FUN_14697d4de(local_318,&local_308);
      FUN_14576702a(&local_308);
    }
    else {
      FUN_145c895fc(&local_308);
      local_358 = 0;
      uStack_350 = 0;
      local_348 = 1;
      local_340 = 0;
      uStack_338 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 1;
      FUN_144a450dc(local_98,&local_340);
      FUN_1449db362(&local_340);
      local_378 = 0;
      local_370 = 1;
      local_368 = 0;
      uStack_360 = 0;
      local_88 = 0;
      local_80 = 1;
      FUN_144a450dc(local_78,&local_368);
      FUN_1449db362(&local_368);
      local_398 = &local_328;
      local_3a0 = FUN_143336ee2;
      FUN_1407616b4(*(undefined8 *)(param_1 + 0x68),&local_388);
      plVar1 = local_130;
      if (local_380 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_380 + 1) = (int)local_380[1] + 1;
        UNLOCK();
      }
      local_138 = local_388;
      local_130 = local_380;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      local_3b8 = &local_3a1;
      FUN_145c892fc(&local_3a0,"SToolTip",".\\Runtime/UMG/Private/Components/Widget.cpp",0x21e);
      FUN_145c89054(&local_3a0,&local_328,&local_308);
      plVar1 = local_398;
      if (local_398 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_398 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_398)(local_398);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_380 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_380 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_380)(local_380);
          LOCK();
          piVar2 = (int *)((longlong)local_380 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_380 + 0x10))(local_380);
          }
        }
      }
      FUN_145c890ca(&local_308);
      local_308 = local_328 + 0x268;
      if (local_328 == 0) {
        local_308 = 0;
      }
      plStack_300 = local_320;
      if (local_320 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_320 + 1) = (int)local_320[1] + 1;
        UNLOCK();
      }
      local_2f8 = 1;
      local_2f0 = 0;
      uStack_2e8 = 0;
      FUN_14697d4de(local_318,&local_308);
      FUN_14576702a(&local_308);
      if (local_320 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_320 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_320)(local_320);
          LOCK();
          piVar2 = (int *)((longlong)local_320 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_320 + 0x10))(local_320);
          }
        }
      }
    }
  }
  if (local_310 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_310 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_310)(local_310);
      LOCK();
      piVar2 = (int *)((longlong)local_310 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_310 + 0x10))(local_310);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775da42 FUN_14775da42 body=189 status=ok
// SIG undefined FUN_14775da42(void)

void FUN_14775da42(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775db00(param_1,pplVar1);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775db00 FUN_14775db00 body=216 status=ok
// SIG undefined FUN_14775db00(void)

void FUN_14775db00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)*param_2;
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x58) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0x60) = (int)param_2[1];
  local_28 = DAT_14cab8db8;
  local_30 = DAT_14cab8db0;
  FUN_140e2f5f4(param_1 + 0x28);
  FUN_140760c2c(param_1,&local_40);
  if (local_40 != 0) {
    FUN_14697e8c0(local_40,param_2);
  }
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
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775dbea FUN_14775dbea body=156 status=ok
// SIG undefined FUN_14775dbea(void)

void FUN_14775dbea(undefined8 param_1,longlong param_2)

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
  FUN_14775dc88(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775dc88 FUN_14775dc88 body=300 status=ok
// SIG undefined FUN_14775dc88(void)

void FUN_14775dc88(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_2 + 0x84) & 2) != 0)) {
    cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if ((cVar3 != '\0') && (param_2[0x86] != 0)) {
      FUN_140760c2c(param_1,&local_30);
      if (local_30 != 0) {
        lVar5 = FUN_144a7ba4c(param_2);
        if (lVar5 != 0) {
          uVar4 = FUN_1400c16ce(DAT_14c98e618,*(undefined4 *)(lVar5 + 0xe0));
          cVar3 = FUN_1410a3d58(DAT_14c98e618,uVar4,&local_30,2);
          if (cVar3 == '\0') {
            local_40 = local_30;
            local_38 = local_28;
            if (local_28 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_28 + 1) = (int)local_28[1] + 1;
              UNLOCK();
            }
            FUN_140592b68(lVar5 + 0x1f8,&local_40,2,0);
          }
          else {
            FUN_146948d3e(lVar5 + 0x1f8);
          }
        }
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ddb6 FUN_14775ddb6 body=155 status=ok
// SIG undefined FUN_14775ddb6(void)

void FUN_14775ddb6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775de52 FUN_14775de52 body=112 status=ok
// SIG undefined FUN_14775de52(void)

void FUN_14775de52(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong **)(param_1 + 0x58);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x60);
  FUN_140008f88(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775df42 FUN_14775df42 body=62 status=ok
// SIG undefined FUN_14775df42(void)

void FUN_14775df42(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14775d53c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775df94 FUN_14775df94 body=147 status=ok
// SIG undefined FUN_14775df94(void)

void FUN_14775df94(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xd8) = param_2;
  FUN_140760c2c(param_1,&local_28);
  if ((local_28 != 0) && (*(char *)(local_28 + 0x37) != *(char *)(param_1 + 0xd8))) {
    *(char *)(local_28 + 0x37) = *(char *)(param_1 + 0xd8);
    FUN_140163244(local_28,2);
  }
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



// FUNCTION 14775e038 FUN_14775e038 body=21 status=ok
// SIG undefined FUN_14775e038(void)

void FUN_14775e038(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14775b22e();
  *param_2 = uVar1;
  return;
}



// FUNCTION 14775e068 FUN_14775e068 body=8 status=ok
// SIG undefined FUN_14775e068(void)

undefined1 FUN_14775e068(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xda);
}



// FUNCTION 14775e078 FUN_14775e078 body=21 status=ok
// SIG undefined FUN_14775e078(void)

void FUN_14775e078(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14775b038();
  *param_2 = uVar1;
  return;
}



// FUNCTION 14775e096 FUN_14775e096 body=21 status=ok
// SIG undefined FUN_14775e096(void)

void FUN_14775e096(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_145beedf4();
  *param_2 = uVar1;
  return;
}



// FUNCTION 14775e0bc FUN_14775e0bc body=21 status=ok
// SIG undefined FUN_14775e0bc(void)

void FUN_14775e0bc(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14775e0d2();
  *param_2 = uVar1;
  return;
}



// FUNCTION 14775e0d2 FUN_14775e0d2 body=131 status=ok
// SIG undefined FUN_14775e0d2(void)

ulonglong FUN_14775e0d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 unaff_RBX;
  undefined1 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_30);
  puVar4 = (undefined1 *)(param_1 + 0xdd);
  if (local_30 != 0) {
    puVar4 = (undefined1 *)(local_30 + 0x36);
  }
  uVar3 = *puVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e15e FUN_14775e15e body=144 status=ok
// SIG undefined FUN_14775e15e(void)

void FUN_14775e15e(longlong param_1,char param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(char *)(param_1 + 0xdd) = param_2;
  FUN_140760c2c(param_1,&local_30);
  if ((local_30 != 0) && (*(char *)(local_30 + 0x36) != param_2)) {
    *(char *)(local_30 + 0x36) = param_2;
    FUN_140163244(local_30,2);
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



// FUNCTION 14775e200 FUN_14775e200 body=23 status=ok
// SIG undefined FUN_14775e200(void)

void FUN_14775e200(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14775b408();
  *param_2 = uVar1;
  return;
}



// FUNCTION 14775e24c FUN_14775e24c body=190 status=ok
// SIG undefined FUN_14775e24c(void)

void FUN_14775e24c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = 0;
  do {
    local_38 = *(undefined4 *)(*(undefined8 **)((longlong)&PTR_DAT_14a53aca0 + lVar2) + 1);
    local_40 = **(undefined8 **)((longlong)&PTR_DAT_14a53aca0 + lVar2);
    cVar1 = (*(code *)*param_3)(param_3[1],&local_40);
    if (cVar1 == '\0') goto LAB_14775e2e8;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  if (param_2 != 0) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_50 = *param_3;
      local_48 = param_3[1];
      FUN_14797ef84(param_2,&local_50,1);
    }
  }
LAB_14775e2e8:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e30c FUN_14775e30c body=293 status=ok
// SIG undefined FUN_14775e30c(void)

void FUN_14775e30c(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  byte local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar3 = (*(byte *)(param_1 + 0xd9) & 4) == 0 ^ param_2;
  if (bVar3 == 0) {
    *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) & 0xfb | param_2 * '\x04';
  }
  FUN_140760c2c(param_1,&local_38);
  if (local_38 != 0) {
    local_50[1] = 1;
    local_48 = 0;
    uStack_40 = 0;
    local_50[0] = param_2;
    FUN_140a52028(local_38 + 0x3a,local_38,local_50);
    FUN_1449db362(&local_48);
  }
  if (bVar3 == 0) {
    local_58 = DAT_14cab8dd8;
    local_60 = DAT_14cab8dd0;
    FUN_140e2f5f4(param_1 + 0x28);
    if (0xbf < *(byte *)(param_1 + 0xd9)) {
      FUN_1476cba12(param_1 + 0x118,&DAT_14cab76f8,(*(byte *)(param_1 + 0xd9) & 4) == 0);
      FUN_1477837c8(param_1 + 0x120,param_1,param_1 + 0x118);
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e432 FUN_14775e432 body=64 status=ok
// SIG undefined FUN_14775e432(void)

void FUN_14775e432(longlong param_1)

{
  if (*(byte *)(param_1 + 0xd9) < 0xc0) {
    return;
  }
  FUN_1476cba12(param_1 + 0x118);
  FUN_1477837c8(param_1 + 0x120,param_1,param_1 + 0x118);
  return;
}



// FUNCTION 14775e472 FUN_14775e472 body=120 status=ok
// SIG undefined FUN_14775e472(void)

ulonglong FUN_14775e472(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x3b));
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e4ec FUN_14775e4ec body=271 status=ok
// SIG undefined FUN_14775e4ec(void)

void FUN_14775e4ec(longlong param_1,byte param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar6 = FUN_14775e5fc(param_1);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    *(longlong *)(param_1 + 0xf0) = lVar6;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_5c = CONCAT31(local_5c._1_3_,param_3);
  uStack_58 = param_4;
  FUN_14485c47a(&uStack_50,param_5);
  if (param_2 < 6) {
    uVar2 = *param_6;
    uVar3 = param_6[1];
    lVar7 = (ulonglong)param_2 * 8;
    lVar6 = *(longlong *)(&DAT_14a545200 + lVar7);
    lVar4 = *(longlong *)(&DAT_14a545230 + lVar7);
    lVar7 = *(longlong *)(&DAT_14a545260 + lVar7);
    lVar5 = *(longlong *)(param_1 + 0xf0);
    *(undefined4 *)(lVar5 + 0x10 + lVar6) = uStack_50._4_4_;
    puVar1 = (undefined4 *)(lVar5 + lVar6);
    *puVar1 = local_5c;
    puVar1[1] = (undefined4)uStack_58;
    puVar1[2] = uStack_58._4_4_;
    puVar1[3] = (undefined4)uStack_50;
    *(undefined8 *)(lVar5 + lVar4) = uVar2;
    *(undefined8 *)(lVar5 + lVar7) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e5fc FUN_14775e5fc body=175 status=ok
// SIG undefined FUN_14775e5fc(void)

undefined8 FUN_14775e5fc(undefined8 param_1)

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
  local_b8 = FUN_1459d4344();
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



// FUNCTION 14775e6ac FUN_14775e6ac body=110 status=ok
// SIG undefined FUN_14775e6ac(void)

bool FUN_14775e6ac(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
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
    return local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e71c FUN_14775e71c body=113 status=ok
// SIG undefined FUN_14775e71c(void)

undefined8 FUN_14775e71c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_1412864c6();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (plVar1 = *(longlong **)(lVar3 + 0x20), plVar1 != (longlong *)0x0)) {
      lVar3 = FUN_1405e2bf2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014775e786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14775e78e FUN_14775e78e body=68 status=ok
// SIG undefined FUN_14775e78e(void)

void FUN_14775e78e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e7d4 FUN_14775e7d4 body=273 status=ok
// SIG undefined FUN_14775e7d4(void)

undefined8 * FUN_14775e7d4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 local_221;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_208;
  longlong *local_200;
  undefined1 local_1f8 [448];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140a50678(local_1f8);
  local_238 = &local_221;
  FUN_140a52ce6(local_220,"SSpacer",".\\Runtime/UMG/Private/Components/Widget.cpp",0x56c);
  FUN_140a50c6a(local_220,&local_208,local_1f8);
  *param_2 = local_208;
  param_2[1] = local_200;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_200 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)local_200 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_200 + 0x10))(local_200);
        }
      }
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_218 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar2 = (int *)((longlong)local_218 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_218 + 0x10))(local_218);
      }
    }
  }
  FUN_1449db362(local_38);
  FUN_140a4ff8c(local_1f8);
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775e8e6 FUN_14775e8e6 body=219 status=ok
// SIG undefined FUN_14775e8e6(void)

longlong *
FUN_14775e8e6(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined2 *param_4)

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
  *puVar3 = &PTR_LAB_14a5446b0;
  *(undefined2 *)(puVar3 + 1) = *param_4;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[2] = *(undefined8 *)(param_4 + 4);
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(param_4 + 8) = 0;
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
  *puVar3 = &PTR_FUN_14a544640;
  puVar3[5] = 0;
  FUN_14485c47a(puVar3 + 5,param_2);
  *(undefined4 *)(puVar3 + 7) = uVar1;
  puVar3[6] = uVar2;
  return param_1;
}



// FUNCTION 14775e9c2 FUN_14775e9c2 body=212 status=ok
// SIG undefined FUN_14775e9c2(void)

longlong * FUN_14775e9c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_14113f0c0(param_1 + 0x40);
  if (cVar2 != '\0') {
    local_28 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = FUN_14479d2ce(param_1 + 0x40);
    FUN_144a5dc74(param_2);
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    FUN_1446efa72(param_2 + 3,0,3,0x10);
    *(undefined4 *)(param_2 + 4) = 3;
    FUN_147766644(param_2[3],uVar3,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)(param_2 + 2) = 1;
  param_2[3] = 0;
  param_2[4] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ea9a FUN_14775ea9a body=212 status=ok
// SIG undefined FUN_14775ea9a(void)

longlong * FUN_14775ea9a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_14113f0c0(param_1 + 0x60);
  if (cVar2 != '\0') {
    local_28 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = FUN_14479d2ce(param_1 + 0x60);
    FUN_144a5dc74(param_2);
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    FUN_1446efa72(param_2 + 3,0,3,0x10);
    *(undefined4 *)(param_2 + 4) = 3;
    FUN_147766644(param_2[3],uVar3,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_2 + 2) = 1;
  param_2[3] = 0;
  param_2[4] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775eb72 FUN_14775eb72 body=22 status=ok
// SIG undefined FUN_14775eb72(void)

undefined8 FUN_14775eb72(undefined8 param_1,undefined8 param_2)

{
  FUN_140760c2c();
  return param_2;
}



// FUNCTION 14775eb88 FUN_14775eb88 body=125 status=ok
// SIG undefined FUN_14775eb88(void)

void FUN_14775eb88(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_14287bbd4(param_1,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ec06 FUN_14775ec06 body=419 status=ok
// SIG undefined FUN_14775ec06(void)

longlong * FUN_14775ec06(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (longlong)(int)DAT_14cab8da8;
  if (lVar4 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    uVar5 = FUN_1458629d0();
    FUN_140aa7b7e(uVar5,&local_58,1);
    if ((int)uStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
    if ((int)DAT_14cab8dac < (int)uStack_50) {
      FUN_1477835b0();
    }
    lVar4 = local_58;
    if ((int)uStack_50 != 0) {
      lVar7 = (longlong)(int)uStack_50;
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar8);
        lVar10 = (longlong)(int)DAT_14cab8da8;
        DAT_14cab8da8 = DAT_14cab8da8 + 1;
        if (DAT_14cab8dac < DAT_14cab8da8) {
          FUN_147783618();
        }
        DAT_14cab8da0[lVar10] = lVar2;
        if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c();
        }
        lVar8 = lVar8 + 8;
      } while (lVar7 * 8 != lVar8);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar4 = (longlong)(int)DAT_14cab8da8;
    if (lVar4 == 0) goto LAB_14775ec85;
  }
  plVar1 = DAT_14cab8da0 + lVar4;
  plVar9 = DAT_14cab8da0;
  do {
    lVar4 = *plVar9;
    if (lVar4 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(lVar4 + 0x110);
      if (plVar6 == (longlong *)0x0) {
        FUN_140aa6c08(lVar4);
        plVar6 = *(longlong **)(lVar4 + 0x110);
      }
    }
    cVar3 = (**(code **)(*plVar6 + 0x2a8))(plVar6,param_2);
    if (cVar3 != '\0') {
      lVar4 = *plVar9;
      *param_1 = lVar4;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      goto LAB_14775ec8c;
    }
    plVar9 = plVar9 + 1;
  } while (plVar9 != plVar1);
LAB_14775ec85:
  *param_1 = 0;
LAB_14775ec8c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14775edac FUN_14775edac body=562 status=ok
// SIG undefined FUN_14775edac(void)

ulonglong FUN_14775edac(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((longlong)*(int *)(param_2 + 0x44) + (longlong)param_1 != 0) &&
       (*(char *)(*(longlong *)(param_2 + 0x70) + 0xb4) == '\x01')) &&
      (lVar4 = FUN_140d2ab24(), lVar4 != 0)) &&
     (((FUN_14775ec06(&local_48,lVar4), lVar7 = local_48, local_48 != 0 &&
       (lVar5 = FUN_1458629d0(), lVar5 != 0)) &&
      ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)))))) {
    lVar5 = FUN_1458629d0();
    if ((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar8 = lVar7;
      }
    }
    plVar6 = (longlong *)FUN_14776495b(param_1,lVar8);
    FUN_14485c47a(plVar6 + 5,param_3);
    FUN_14702ac0a(plVar6 + 6,param_4);
    (**(code **)(*plVar6 + 0x2b0))(plVar6,lVar4);
    if (plVar6 != (longlong *)0x0) {
      plVar1 = param_1 + 0x27;
      uVar3 = *(uint *)(param_1 + 0x28);
      if (0 < (int)uVar3) {
        lVar4 = *plVar1;
        uVar9 = 0;
        do {
          if (param_2 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(longlong *)(param_2 + 0x20);
          }
          if (*(longlong *)(*(longlong *)(lVar4 + uVar9 * 8) + 0x68) == lVar7) {
            if (uVar3 - 1 != (int)uVar9) {
              memmove((void *)(lVar4 + uVar9 * 8),(void *)(lVar4 + uVar9 * 8 + 8),
                      (longlong)(int)((uVar3 - 1) - (int)uVar9) << 3);
              uVar3 = *(uint *)(param_1 + 0x28);
            }
            *(uint *)(param_1 + 0x28) = uVar3 - 1;
            FUN_1477836a6(plVar1);
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
      }
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar6);
      }
      iVar2 = (int)param_1[0x28];
      *(uint *)(param_1 + 0x28) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x144) < iVar2 + 1U) {
        FUN_147783742(plVar1,iVar2);
      }
      *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = plVar6;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar6);
      }
      uVar9 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      if (((param_1[0x1f] != 0) && (param_1[0x20] != 0)) && (0 < *(int *)(param_1[0x20] + 8))) {
        if (param_2 == 0) {
          local_48 = 0;
        }
        else {
          local_48 = *(longlong *)(param_2 + 0x20);
        }
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      goto LAB_14775edf8;
    }
  }
  uVar9 = 0;
LAB_14775edf8:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14775efe0 FUN_14775efe0 body=1 status=ok
// SIG undefined FUN_14775efe0(void)

void FUN_14775efe0(void)

{
  return;
}



// FUNCTION 14775efe1 FUN_14775efe1 body=161 status=ok
// SIG undefined FUN_14775efe1(void)

longlong FUN_14775efe1(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
LAB_14775f00e:
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      lVar2 = FUN_1412864c6();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (param_1 = *(longlong *)(lVar1 + 0x20), param_1 != 0)) {
        lVar1 = FUN_1405e2bf2();
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) goto LAB_14775f068;
      }
    }
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1405e2bf2();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) goto LAB_14775f00e;
LAB_14775f068:
    lVar1 = FUN_14775f082(param_1);
    if (lVar1 == 0) {
      lVar1 = FUN_14775f0e6(param_1);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 14775f082 FUN_14775f082 body=98 status=ok
// SIG undefined FUN_14775f082(void)

void FUN_14775f082(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b387ae();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14779361a(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775f0e6 FUN_14775f0e6 body=98 status=ok
// SIG undefined FUN_14775f0e6(void)

void FUN_14775f0e6(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b387ae();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1477924da(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775f149 FUN_14775f149 body=150 status=ok
// SIG undefined FUN_14775f149(void)

longlong FUN_14775f149(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_1405e2bf2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14775f1d0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_1412864c6();
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
    return 0;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30) {
    return 0;
  }
  param_1 = *(longlong *)(lVar1 + 0x20);
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_1405e2bf2();
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
    return 0;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30) {
    return 0;
  }
LAB_14775f1d0:
  lVar1 = FUN_14775f082(param_1);
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1;
}



// FUNCTION 14775f1e0 FUN_14775f1e0 body=337 status=ok
// SIG undefined FUN_14775f1e0(void)

longlong * FUN_14775f1e0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  if (*param_3 != 0) {
    lVar3 = FUN_14775efe1(param_1 + -0x28);
    if (lVar3 != 0) {
      local_58 = *param_4;
      *param_4 = 0;
      local_50 = *(undefined4 *)(param_4 + 1);
      *(undefined4 *)(param_4 + 1) = 0;
      local_60 = (undefined4)param_3[1];
      local_68 = *param_3;
      local_88 = &local_58;
      local_80 = 0;
      local_78 = 0;
      FUN_147023f3a(lVar3 + 0x28,&local_70,param_1 + -0x28);
      FUN_1449db362(&local_80);
      *param_2 = local_70;
      if (local_70 != 0) {
        lVar3 = param_1 + 0x120;
        iVar4 = (int)param_3[1];
        iVar5 = (iVar4 - *(int *)(param_1 + 0x138)) + 1;
        if (0 < iVar5) {
          uVar2 = FUN_144a54ea4(lVar3,iVar5);
          FUN_1447c6044(lVar3,uVar2,iVar5,0);
          iVar4 = (int)param_3[1];
        }
        if (*(longlong *)(param_1 + 0x130) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x130);
        }
        iVar5 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar5 = iVar4;
        }
        puVar1 = (uint *)(lVar3 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      }
    }
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775f332 FUN_14775f332 body=265 status=ok
// SIG undefined FUN_14775f332(void)

undefined1 FUN_14775f332(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_42;
  char local_41;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_3 != 0 && *param_2 != 0) && (uVar4 = *(uint *)(param_2 + 1), -1 < (int)uVar4)) &&
     ((int)uVar4 < *(int *)(param_1 + 0x138))) {
    lVar2 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar2 = param_1 + 0x120;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
      lVar2 = FUN_14775f149(param_1 + -0x28);
      local_38 = (undefined4)param_2[1];
      local_40 = *param_2;
      local_58 = param_3;
      FUN_14702455a(lVar2 + 0x28,&local_42,param_1 + -0x28);
      iVar1 = (int)param_2[1];
      uVar4 = 1 << ((byte)iVar1 & 0x1f);
      lVar2 = param_1 + 0x120;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x130);
      }
      iVar5 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar5 = iVar1;
      }
      lVar3 = (longlong)(iVar5 >> 5);
      if (local_41 == '\x01') {
        uVar4 = uVar4 | *(uint *)(lVar2 + lVar3 * 4);
      }
      else {
        uVar4 = ~uVar4 & *(uint *)(lVar2 + lVar3 * 4);
      }
      *(uint *)(lVar2 + lVar3 * 4) = uVar4;
      goto LAB_14775f399;
    }
  }
  local_42 = 0;
LAB_14775f399:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_42;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775f43c FUN_14775f43c body=158 status=ok
// SIG undefined FUN_14775f43c(void)

undefined4 FUN_14775f43c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_14775f149(param_1 + -0x28);
    if (lVar1 != 0) {
      FUN_1470248d0(lVar1 + 0x28,local_50,param_1 + -0x28,param_2);
      if ((undefined1 *)(param_1 + 0x120) != local_48) {
        FUN_144a69486((undefined1 *)(param_1 + 0x120));
      }
      uVar2 = local_50[0];
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775f4dc FUN_14775f4dc body=193 status=ok
// SIG undefined FUN_14775f4dc(void)

undefined4 FUN_14775f4dc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined1 local_50 [16];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  if (param_3 != 0) {
    lVar1 = FUN_14775f149(param_1 + -0x28);
    if (lVar1 != 0) {
      local_60 = *(undefined4 *)(param_2 + 1);
      local_68 = *param_2;
      local_78 = param_3;
      FUN_147024ada(lVar1 + 0x28,local_58,param_1 + -0x28);
      if ((undefined1 *)(param_1 + 0x120) != local_50) {
        FUN_144a69486((undefined1 *)(param_1 + 0x120));
      }
      uVar2 = local_58[0];
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775f68e FUN_14775f68e body=38 status=ok
// SIG undefined FUN_14775f68e(void)

void FUN_14775f68e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14112ea38();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775f762 FUN_14775f762 body=42 status=ok
// SIG undefined FUN_14775f762(void)

void FUN_14775f762(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xaa0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775f7e2 FUN_14775f7e2 body=37 status=ok
// SIG undefined FUN_14775f7e2(void)

void FUN_14775f7e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1407609f2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14775f83c FUN_14775f83c body=259 status=ok
// SIG undefined FUN_14775f83c(void)

void FUN_14775f83c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((((local_28 != *(float *)(param_1 + 0x6a8)) ||
        (NAN(local_28) || NAN(*(float *)(param_1 + 0x6a8)))) ||
       (local_24 != *(float *)(param_1 + 0x6ac))) ||
      ((NAN(local_24) || NAN(*(float *)(param_1 + 0x6ac)) ||
       (local_20 != *(float *)(param_1 + 0x6b0))))) ||
     ((NAN(local_20) || NAN(*(float *)(param_1 + 0x6b0)) ||
      ((local_1c != *(float *)(param_1 + 0x6b4) ||
       (NAN(local_1c) || NAN(*(float *)(param_1 + 0x6b4)))))))) {
    *(float *)(param_1 + 0x6a8) = local_28;
    *(float *)(param_1 + 0x6ac) = local_24;
    *(float *)(param_1 + 0x6b0) = local_20;
    *(float *)(param_1 + 0x6b4) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14775f940 FUN_14775f940 body=157 status=ok
// SIG undefined FUN_14775f940(void)

void FUN_14775f940(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x730) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775f9e2 FUN_14775f9e2 body=154 status=ok
// SIG undefined FUN_14775f9e2(void)

void FUN_14775f9e2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x681) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775fa7e FUN_14775fa7e body=189 status=ok
// SIG undefined FUN_14775fa7e(void)

void FUN_14775fa7e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(int *)(param_1 + 0x660) != (int)local_28) || (*(int *)(param_1 + 0x664) != (int)local_20))
  {
    *(ulonglong *)(param_1 + 0x660) = CONCAT44((int)local_20,(int)local_28);
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775fb3c FUN_14775fb3c body=149 status=ok
// SIG undefined FUN_14775fb3c(void)

void FUN_14775fb3c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x728) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775fbd6 FUN_14775fbd6 body=154 status=ok
// SIG undefined FUN_14775fbd6(void)

void FUN_14775fbd6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x668) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775fc72 FUN_14775fc72 body=196 status=ok
// SIG undefined FUN_14775fc72(void)

void FUN_14775fc72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x6a0) != local_20) {
    FUN_14112e8e8(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x6a0) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775fd38 FUN_14775fd38 body=162 status=ok
// SIG undefined FUN_14775fd38(void)

void FUN_14775fd38(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar4 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x688) = *puVar4;
  *(undefined4 *)(param_1 + 0x68c) = uVar1;
  *(undefined4 *)(param_1 + 0x690) = uVar2;
  *(undefined4 *)(param_1 + 0x694) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775fddc FUN_14775fddc body=156 status=ok
// SIG undefined FUN_14775fddc(void)

void FUN_14775fddc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x66c) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775fe7a FUN_14775fe7a body=166 status=ok
// SIG undefined FUN_14775fe7a(void)

void FUN_14775fe7a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(char *)(param_1 + 0xe7) = local_19;
  (**(code **)(*param_1 + 0x3b0))(param_1,local_19 != '\0');
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ff26 FUN_14775ff26 body=154 status=ok
// SIG undefined FUN_14775ff26(void)

void FUN_14775ff26(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x6ce) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775ffc2 FUN_14775ffc2 body=259 status=ok
// SIG undefined FUN_14775ffc2(void)

void FUN_14775ffc2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((((local_28 != *(float *)(param_1 + 0x6b8)) ||
        (NAN(local_28) || NAN(*(float *)(param_1 + 0x6b8)))) ||
       (local_24 != *(float *)(param_1 + 0x6bc))) ||
      ((NAN(local_24) || NAN(*(float *)(param_1 + 0x6bc)) ||
       (local_20 != *(float *)(param_1 + 0x6c0))))) ||
     ((NAN(local_20) || NAN(*(float *)(param_1 + 0x6c0)) ||
      ((local_1c != *(float *)(param_1 + 0x6c4) ||
       (NAN(local_1c) || NAN(*(float *)(param_1 + 0x6c4)))))))) {
    *(float *)(param_1 + 0x6b8) = local_28;
    *(float *)(param_1 + 0x6bc) = local_24;
    *(float *)(param_1 + 0x6c0) = local_20;
    *(float *)(param_1 + 0x6c4) = local_1c;
    FUN_1407631e0(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477600ca FUN_1477600ca body=181 status=ok
// SIG undefined FUN_1477600ca(void)

void FUN_1477600ca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((bool)*(char *)(param_1 + 0x6cd) != (local_1c != 0)) &&
     (*(bool *)(param_1 + 0x6cd) = local_1c != 0, (*(byte *)(param_1 + 0x9c) & 1) != 0)) {
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147760180 FUN_147760180 body=160 status=ok
// SIG undefined FUN_147760180(void)

void FUN_147760180(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xaa8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147760222 FUN_147760222 body=149 status=ok
// SIG undefined FUN_147760222(void)

void FUN_147760222(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x650) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477602bc FUN_1477602bc body=175 status=ok
// SIG undefined FUN_1477602bc(void)

void FUN_1477602bc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x699) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x740) != 0) {
    *(bool *)(*(longlong *)(param_1 + 0x740) + 0x688) = local_1c != 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776036c FUN_14776036c body=151 status=ok
// SIG undefined FUN_14776036c(void)

void FUN_14776036c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147760404(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147760404 FUN_147760404 body=231 status=ok
// SIG undefined FUN_147760404(void)

void FUN_147760404(longlong *param_1,char param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(char *)((longlong)param_1 + 0x69a) = param_2;
  if (param_1[0xe8] != 0) {
    puVar2 = &DAT_14c96b23c;
    if (param_2 == '\0') {
      puVar2 = &DAT_14c96b238;
    }
    local_28 = *puVar2;
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_14020e622();
    if ((char)param_1[0xd0] == '\x01') {
      FUN_146930146(param_1[0xe8] + 0x268,0);
    }
  }
  cVar1 = FUN_1407609f2(param_1);
  if (cVar1 != '\0') {
    if (((char)param_1[0xe7] != '\0') || (*(char *)((longlong)param_1 + 0x669) == '\x01')) {
      (**(code **)(*param_1 + 0x3b0))(param_1,1);
    }
    if (*(char *)((longlong)param_1 + 0x791) == '\x01') {
      if (param_1[0xed] != 0) {
        FUN_140457ffc(param_1[0xed] + 0x1c8,param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0x791) = 0;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147760548 FUN_147760548 body=75 status=ok
// SIG undefined FUN_147760548(void)

void FUN_147760548(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1417aa22c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147760598 FUN_147760598 body=26 status=ok
// SIG undefined FUN_147760598(void)

void FUN_147760598(undefined8 param_1)

{
  FUN_1406552bc();
  FUN_140762f94(param_1);
  return;
}



// FUNCTION 147760680 FUN_147760680 body=626 status=ok
// SIG undefined FUN_147760680(void)

void FUN_147760680(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) goto LAB_147760745;
  FUN_146ad75fc(*param_2,&local_48);
  if (local_48 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x138,0x10);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      FUN_1448abda6(param_1);
    }
    *puVar8 = &PTR_FUN_14a540320;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    FUN_14485c47a(puVar8 + 3);
    puVar8[4] = 0xffffffffffffffff;
    memset(puVar8 + 7,0,0x100);
    *(undefined4 *)(puVar8 + 0x21) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 0xffffffff;
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar4 = local_40;
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14a5447d0;
    plVar9[2] = (longlong)puVar8;
    local_48 = puVar8;
    if (plVar9 == local_40) {
      plVar5 = local_40;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
          plVar4 = plVar9;
          goto joined_r0x000147760888;
        }
      }
    }
    else {
      plVar5 = plVar9;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar8 = (undefined8 *)*local_40;
          local_40 = plVar9;
          (*(code *)*puVar8)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
joined_r0x000147760888:
          plVar5 = local_40;
          if (iVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            plVar5 = local_40;
          }
        }
      }
    }
    local_40 = plVar5;
    lVar7 = *param_2;
    local_50 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_58 = local_48;
    FUN_146ad755e(lVar7,&local_58);
  }
  plVar4 = local_40;
  puVar8 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  lVar6 = FUN_14479d2ce(local_48 + 3);
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6(param_1);
  }
  if (lVar6 == lVar7) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_1);
    FUN_147765a0e(puVar8 + 1,&local_38);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_147760745:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477608f4 FUN_1477608f4 body=99 status=ok
// SIG undefined FUN_1477608f4(void)

void FUN_1477608f4(longlong *param_1,char param_2)

{
  if ((byte)(param_2 - 3U) < 0xfe) {
    if (((char)param_1[0xe7] != '\0') || (*(char *)((longlong)param_1 + 0x669) == '\x01')) {
      (**(code **)(*param_1 + 0x3b0))(param_1,1);
    }
    if (*(char *)((longlong)param_1 + 0x791) == '\x01') {
      if (param_1[0xed] != 0) {
        FUN_140457ffc(param_1[0xed] + 0x1c8,param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0x791) = 0;
    }
  }
  return;
}



// FUNCTION 147760958 FUN_147760958 body=921 status=ok
// SIG undefined FUN_147760958(void)

void FUN_147760958(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((*(longlong *)(param_1 + 0x768) == 0) && (*(longlong *)(param_1 + 0x770) == 0)) ||
       ((lVar8 = *(longlong *)(param_1 + 0xb0), lVar8 == 0 &&
        (lVar8 = FUN_1448abda6(param_1), lVar8 == 0)))) ||
      ((bVar2 = *(byte *)(lVar8 + 0x152), bVar2 != 1 &&
       ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))))) ||
     ((lVar7 = FUN_1449baec6(lVar8), lVar7 == 0 ||
      (plVar3 = *(longlong **)(lVar7 + 0x138), plVar3 == (longlong *)0x0)))) goto LAB_147760a12;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_147760a12;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar12 = iVar6 == iVar5;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar12);
  plVar4 = *(longlong **)(lVar7 + 0x130);
  if (plVar4 != (longlong *)0x0) {
    FUN_141237a6a(&local_60,param_2,lVar8);
    lVar8 = param_1 + 0x71c;
    (**(code **)(*plVar4 + 0x48))(plVar4,&local_70,param_2,lVar8);
    if (local_70 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_14a540340;
      FUN_1414dd38a(puVar9 + 3);
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      *(undefined4 *)(puVar9 + 3) = local_60;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_5c;
      *(undefined4 *)(puVar9 + 4) = uStack_58;
      *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_54;
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14a5448d0;
      plVar10[2] = (longlong)puVar9;
      local_70 = puVar9;
      local_80 = puVar9;
      local_78 = plVar10;
      if ((puVar9 == (undefined8 *)0x0) ||
         (((puVar9[1] != 0 && (puVar9[2] != 0)) && (0 < *(int *)(puVar9[2] + 8))))) {
        local_88 = *(undefined4 *)(param_1 + 0x724);
        if (plVar10 != (longlong *)0x0) goto LAB_147760c6d;
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          puVar9[1] = puVar9;
          if ((longlong *)puVar9[2] != plVar10) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar11 = (longlong *)puVar9[2];
            if (plVar11 != (longlong *)0x0) goto LAB_147760cd4;
            puVar9[2] = plVar10;
          }
LAB_147760c3e:
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
          local_88 = *(undefined4 *)(param_1 + 0x724);
LAB_147760c6d:
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          (**(code **)(*plVar4 + 0x50))(plVar4,param_2,lVar8,&local_80);
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar10 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          goto LAB_147760b68;
        }
        puVar9[1] = puVar9;
        plVar11 = (longlong *)puVar9[2];
        if (plVar11 != (longlong *)0x0) {
LAB_147760cd4:
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
          puVar9[2] = plVar10;
          if (plVar10 != (longlong *)0x0) goto LAB_147760c3e;
        }
        local_88 = *(undefined4 *)(param_1 + 0x724);
        local_78 = (longlong *)0x0;
      }
      (**(code **)(*plVar4 + 0x50))(plVar4,param_2,lVar8,&local_80);
LAB_147760b65:
      plVar10 = (longlong *)0x0;
    }
    else {
      if (local_68 == (longlong *)0x0) goto LAB_147760b65;
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      plVar10 = local_68;
    }
LAB_147760b68:
    *(undefined1 *)(param_1 + 0x718) = 1;
    FUN_147760cf2(local_70,param_1);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_68 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
LAB_147760a12:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147760cf2 FUN_147760cf2 body=266 status=ok
// SIG undefined FUN_147760cf2(void)

void FUN_147760cf2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (code *)0x0;
  FUN_14485c47a(&local_38);
  FUN_147765a0e(param_1 + 0x38,&local_38);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 == (longlong *)0x0) goto LAB_147760db2;
  iVar6 = (int)plVar2[1];
  do {
    if (iVar6 == 0) goto LAB_147760db2;
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar6 == iVar5;
    if (bVar8) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar8);
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x768) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x770);
      if (lVar4 == 0) goto LAB_147760d95;
      plVar7 = &local_60;
      local_58 = *(longlong *)(param_2 + 0x778);
      local_60 = lVar4;
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      local_30 = &local_39;
      local_38 = FUN_143336ee2;
      plVar7 = local_50;
      FUN_1407616b4(*(longlong *)(param_2 + 0x768),plVar7);
    }
    FUN_1477913e6(lVar3,param_2,plVar7);
  }
LAB_147760d95:
  LOCK();
  plVar7 = plVar2 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_147760db2:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147760dfe FUN_147760dfe body=185 status=ok
// SIG undefined FUN_147760dfe(void)

void FUN_147760dfe(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    FUN_147766546(param_1 + 0x38,&local_30);
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    if (puVar3 != (undefined8 *)0x0) {
      iVar4 = *(int *)(puVar3 + 1);
      do {
        if (iVar4 == 0) goto LAB_147760e1b;
        LOCK();
        iVar2 = *(int *)(puVar3 + 1);
        bVar5 = iVar4 == iVar2;
        if (bVar5) {
          *(int *)(puVar3 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar5);
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1477916fe(*(longlong *)(param_1 + 0x28),param_2);
      }
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
LAB_147760e1b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147760ecc FUN_147760ecc body=93 status=ok
// SIG undefined FUN_147760ecc(void)

undefined8 * FUN_147760ecc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_147783d5e(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147760f2a FUN_147760f2a body=188 status=ok
// SIG undefined FUN_147760f2a(void)

void FUN_147760f2a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    (**(code **)(*param_1 + 0xab0))(param_1,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (param_1[0xed] != 0) {
    FUN_14112e8e8(param_1);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0xed] = param_2;
  (**(code **)(*param_1 + 0xa88))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147760fe8 FUN_147760fe8 body=209 status=ok
// SIG undefined FUN_147760fe8(void)

void FUN_147760fe8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1[0xed] != 0) {
    (**(code **)(*param_1 + 0xaa8))(param_1,0);
  }
  if (param_1[0xee] != 0) {
    FUN_14112e8e8(param_1);
    param_1[0xee] = 0;
    plVar3 = (longlong *)param_1[0xef];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xef] = 0;
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
  lVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0xef];
  param_1[0xee] = lVar4;
  param_1[0xef] = lVar5;
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
                    /* WARNING: Could not recover jumptable at 0x0001477610b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa88))(param_1);
  return;
}



// FUNCTION 1477610ba FUN_1477610ba body=458 status=ok
// SIG undefined FUN_1477610ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1477610ba(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar8;
  undefined1 auVar7 [16];
  double dVar9;
  double dVar10;
  
  dVar6 = *param_2 - *(double *)(param_1 + 0x260);
  dVar8 = param_2[1] - *(double *)(param_1 + 0x268);
  dVar5 = param_2[2] - *(double *)(param_1 + 0x270);
  dVar3 = -*(double *)(param_1 + 0x240);
  dVar1 = -*(double *)(param_1 + 0x248);
  dVar2 = *(double *)(param_1 + 0x250) * -1.0;
  dVar4 = *(double *)(param_1 + 600) * 1.0;
  dVar9 = dVar8 * dVar3 - dVar1 * dVar6;
  dVar10 = dVar5 * dVar1 - dVar2 * dVar8;
  dVar6 = dVar6 * dVar2 + dVar5 * *(double *)(param_1 + 0x240);
  dVar10 = dVar10 + dVar10;
  dVar6 = dVar6 + dVar6;
  dVar9 = dVar9 + dVar9;
  auVar7 = divpd(_DAT_149935300,*(undefined1 (*) [16])(param_1 + 0x280));
  dVar2 = (double)(-(ulonglong)
                    (9.99999993922529e-09 < ABS(SUB168(*(undefined1 (*) [16])(param_1 + 0x280),8)))
                  & auVar7._8_8_) * ((dVar2 * dVar10 - dVar3 * dVar9) + dVar8 + dVar4 * dVar6);
  dVar3 = -(dVar4 * dVar9 + dVar5 + (dVar6 * dVar3 - dVar1 * dVar10)) *
          (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x290))) &
                  (ulonglong)(1.0 / *(double *)(param_1 + 0x290)));
  *param_3 = -dVar2;
  param_3[1] = dVar3;
  *param_3 = (double)*(int *)(param_1 + 0x678) * *(double *)(param_1 + 0x688) - dVar2;
  dVar3 = (double)*(int *)(param_1 + 0x67c) * *(double *)(param_1 + 0x690) + dVar3;
  param_3[1] = dVar3;
  param_3[1] = (dVar3 / (double)*(int *)(param_1 + 0x67c)) * (double)*(int *)(param_1 + 0x67c);
  return;
}



// FUNCTION 147761284 FUN_147761284 body=1938 status=ok
// SIG undefined FUN_147761284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_147761284(longlong param_1,undefined1 (*param_2) [16],double *param_3,double *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  
  dVar19 = *param_3 - *(double *)(param_1 + 0x260);
  dVar25 = param_3[1] - *(double *)(param_1 + 0x268);
  dVar18 = param_3[2] - *(double *)(param_1 + 0x270);
  uVar4 = DAT_149931e80;
  dVar23 = *(double *)(param_1 + 0x240);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar13 = *(double *)(param_1 + 0x250) * -1.0;
  dVar15 = *(double *)(param_1 + 600) * 1.0;
  dVar16 = (double)((ulonglong)dVar23 ^ uVar4);
  dVar17 = (double)(*(ulonglong *)(param_1 + 0x248) ^ DAT_149931e80._8_8_);
  dVar27 = dVar25 * dVar16 - dVar19 * dVar17;
  dVar7 = dVar18 * dVar17 - dVar25 * dVar13;
  dVar31 = dVar19 * dVar13 - dVar18 * dVar16;
  dVar7 = dVar7 + dVar7;
  dVar31 = dVar31 + dVar31;
  dVar27 = dVar27 + dVar27;
  auVar24 = divpd(_DAT_149934d80,auVar1);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar24._0_8_);
  dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar24._8_8_);
  dVar30 = *param_4;
  dVar21 = param_4[1];
  dVar20 = dVar21 * dVar16 - dVar17 * dVar30;
  dVar26 = param_4[2] * dVar17 - dVar13 * dVar21;
  dVar28 = dVar30 * dVar13 - dVar16 * param_4[2];
  dVar26 = dVar26 + dVar26;
  dVar28 = dVar28 + dVar28;
  dVar20 = dVar20 + dVar20;
  dVar32 = *(double *)(param_1 + 0x290);
  dVar8 = (dVar23 * dVar27 + dVar13 * dVar7 + dVar15 * dVar31 + dVar25) * dVar6;
  dVar25 = param_4[2];
  dVar29 = *(double *)(param_1 + 0x730) * 0.017453292519943295;
  dVar9 = ((dVar20 * dVar17 - dVar28 * dVar13) + dVar15 * dVar26 + dVar30) * dVar5;
  dVar6 = (dVar23 * dVar20 + dVar13 * dVar26 + dVar15 * dVar28 + dVar21) * dVar6;
  dVar21 = (double)*(int *)(param_1 + 0x678) / dVar29;
  dVar29 = dVar29 * 0.5;
  dVar23 = cos(dVar29);
  dVar30 = sin(dVar29);
  dVar30 = dVar30 * (dVar21 + dVar21);
  dVar29 = (0.5 - *(double *)(param_1 + 0x688)) * dVar30 + dVar8;
  dVar23 = (double)(uVar4 ^ (ulonglong)dVar21) * dVar23;
  dVar14 = dVar9 * dVar9 + dVar6 * dVar6;
  dVar22 = dVar23 * dVar9 + dVar29 * dVar6 + 0.0;
  dVar22 = dVar22 + dVar22;
  dVar21 = dVar22 * dVar22 +
           dVar14 * -4.0 *
           ((dVar23 * dVar23 + dVar29 * dVar29) - (double)((float)dVar21 * (float)dVar21));
  if (0.0 <= dVar21) {
    if (dVar21 < 0.0) {
      dVar21 = sqrt(dVar21);
    }
    else {
      dVar21 = SQRT(dVar21);
    }
    dVar14 = (dVar21 - dVar22) / (dVar14 + dVar14);
    dVar21 = dVar30 * -0.5;
    uVar33 = 0x60000000;
    if ((((dVar23 != 0.0) || (NAN(dVar23))) || (dVar21 != 0.0)) || (uVar11 = uVar33, NAN(dVar21))) {
      dVar21 = atan2(dVar21,dVar23);
      uVar11 = SUB84(dVar21 + 6.2831854820251465,0);
    }
    dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar32)) & (ulonglong)(1.0 / dVar32));
    dVar29 = dVar29 + dVar6 * dVar14;
    dVar21 = (double)FUN_144719204(uVar11,0x401921fb60000000);
    dVar30 = dVar30 * 0.5;
    if (((dVar23 != 0.0) || (NAN(dVar23))) || ((dVar30 != 0.0 || (NAN(dVar30))))) {
      dVar30 = atan2(dVar30,dVar23);
      uVar33 = SUB84(dVar30 + 6.2831854820251465,0);
    }
    dVar23 = dVar23 + dVar9 * dVar14;
    dVar30 = (double)FUN_144719204(uVar33,0x401921fb60000000);
    if (((dVar29 != 0.0) || (NAN(dVar29))) || ((dVar23 != 0.0 || (NAN(dVar23))))) {
      dVar23 = atan2(dVar29,dVar23);
      fVar12 = (float)dVar23 + 6.2831855;
    }
    else {
      fVar12 = 6.2831855;
    }
    fVar12 = (float)FUN_1447c7e44(fVar12,0x40c90fdb);
    dVar23 = dVar21;
    if (dVar30 <= dVar21) {
      dVar23 = dVar30;
    }
    dVar20 = (dVar18 + dVar27 * dVar15 + (dVar31 * dVar16 - dVar7 * dVar17)) * dVar32 +
             (dVar25 + dVar20 * dVar15 + (dVar28 * dVar16 - dVar26 * dVar17)) * dVar32 * dVar14;
    iVar2 = *(int *)(param_1 + 0x67c);
    dVar25 = *(double *)(param_1 + 0x690);
    iVar3 = *(int *)(param_1 + 0x678);
    dVar29 = (((dVar27 * dVar17 - dVar31 * dVar13) + dVar15 * dVar7 + dVar19) * dVar5 +
             dVar9 * dVar14) * *(double *)(param_1 + 0x280);
    dVar6 = (dVar8 + dVar6 * dVar14) * *(double *)(param_1 + 0x288);
    dVar14 = dVar20 * *(double *)(param_1 + 0x290);
    dVar31 = *(double *)(param_1 + 0x240);
    dVar8 = *(double *)(param_1 + 0x248);
    dVar9 = *(double *)(param_1 + 0x250);
    dVar5 = *(double *)(param_1 + 600);
    dVar32 = dVar6 * dVar31 - dVar29 * dVar8;
    dVar13 = dVar14 * dVar8 - dVar6 * dVar9;
    dVar27 = dVar29 * dVar9 - dVar31 * dVar14;
    dVar13 = dVar13 + dVar13;
    dVar27 = dVar27 + dVar27;
    dVar32 = dVar32 + dVar32;
    dVar7 = (dVar9 * dVar13 - dVar31 * dVar32) + *(double *)(param_1 + 600) * dVar27 + dVar6 +
            *(double *)(param_1 + 0x268);
    dVar6 = *(double *)(param_1 + 0x270);
    auVar1._8_4_ = SUB84(dVar7,0);
    auVar1._0_8_ = (dVar32 * dVar8 - dVar27 * dVar9) + dVar5 * dVar13 + dVar29 +
                   *(double *)(param_1 + 0x260);
    auVar1._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *param_2 = auVar1;
    *(double *)param_2[1] = dVar32 * dVar5 + dVar14 + (dVar27 * dVar31 - dVar13 * dVar8) + dVar6;
    *(double *)(param_2[1] + 8) = (double)iVar3 * (((double)fVar12 - dVar23) / ABS(dVar30 - dVar21))
    ;
    *(double *)param_2[2] = (double)iVar2 * dVar25 - dVar20;
  }
  else {
    *(undefined8 *)param_2[1] = DAT_14c8464f0;
    uVar10 = DAT_14c8464e8;
    *(undefined8 *)*param_2 = DAT_14c8464e0;
    *(undefined8 *)(*param_2 + 8) = uVar10;
    uVar10 = DAT_14c8463f8;
    *(undefined8 *)(param_2[1] + 8) = DAT_14c8463f0;
    *(undefined8 *)param_2[2] = uVar10;
  }
  return param_2;
}



// FUNCTION 147761a16 FUN_147761a16 body=360 status=ok
// SIG undefined FUN_147761a16(void)

longlong *
FUN_147761a16(longlong param_1,longlong *param_2,double *param_3,undefined1 param_4,
             undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar1 = *(double *)(param_1 + 0x758);
  dVar2 = *(double *)(param_1 + 0x750);
  dVar3 = param_3[1];
  dVar4 = *param_3;
  dVar6 = param_3[1];
  *(double *)(param_1 + 0x750) = *param_3;
  *(double *)(param_1 + 0x758) = dVar6;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x740) != 0) {
    local_80 = 0xffffffff;
    local_88 = param_4;
    FUN_1402b178a(*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x520),local_70,
                  CONCAT44((float)param_3[1],(float)*param_3),param_5);
    FUN_147761b80(param_2,local_70);
    FUN_14493a258(local_70[0]);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    lVar7 = param_2[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar5 = *param_2;
      lVar8 = 0;
      do {
        *(float *)(lVar5 + 0x48 + lVar8) = (float)dVar4;
        *(float *)(lVar5 + 0x4c + lVar8) = (float)dVar3;
        *(float *)(lVar5 + 0x50 + lVar8) = (float)dVar2;
        *(float *)(lVar5 + 0x54 + lVar8) = (float)dVar1;
        *(undefined1 *)(lVar5 + 0x58 + lVar8) = 1;
        lVar8 = lVar8 + 0x60;
      } while ((longlong)(int)lVar7 * 0x60 != lVar8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147761b80 FUN_147761b80 body=78 status=ok
// SIG undefined FUN_147761b80(void)

longlong * FUN_147761b80(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14493a258(*param_1,(int)param_1[1]);
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



// FUNCTION 147761bd8 FUN_147761bd8 body=45 status=ok
// SIG undefined FUN_147761bd8(void)

longlong FUN_147761bd8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145977296(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761c06 FUN_147761c06 body=45 status=ok
// SIG undefined FUN_147761c06(void)

longlong FUN_147761c06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145977296(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761c34 FUN_147761c34 body=45 status=ok
// SIG undefined FUN_147761c34(void)

longlong FUN_147761c34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c691b2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761c6a FUN_147761c6a body=45 status=ok
// SIG undefined FUN_147761c6a(void)

longlong FUN_147761c6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c69288(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761ca0 FUN_147761ca0 body=45 status=ok
// SIG undefined FUN_147761ca0(void)

longlong FUN_147761ca0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c90c50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761cdc FUN_147761cdc body=45 status=ok
// SIG undefined FUN_147761cdc(void)

longlong FUN_147761cdc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c52d9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761d0a FUN_147761d0a body=45 status=ok
// SIG undefined FUN_147761d0a(void)

longlong FUN_147761d0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141027e22(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761d38 FUN_147761d38 body=45 status=ok
// SIG undefined FUN_147761d38(void)

longlong FUN_147761d38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458dfdc4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761d6e FUN_147761d6e body=45 status=ok
// SIG undefined FUN_147761d6e(void)

longlong FUN_147761d6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145db4a28(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761da4 FUN_147761da4 body=45 status=ok
// SIG undefined FUN_147761da4(void)

longlong FUN_147761da4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf116c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761dd6 FUN_147761dd6 body=45 status=ok
// SIG undefined FUN_147761dd6(void)

longlong FUN_147761dd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584ba72(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147761e42 FUN_147761e42 body=50 status=ok
// SIG undefined FUN_147761e42(void)

longlong * FUN_147761e42(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0x108);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 147761e84 FUN_147761e84 body=71 status=ok
// SIG undefined FUN_147761e84(void)

int FUN_147761e84(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x290) + 0x2d0))(param_1 + -0x290);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_1400c16ce(DAT_14c98e618,*(undefined4 *)(lVar2 + 0xe0));
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}



// FUNCTION 147761ed0 FUN_147761ed0 body=195 status=ok
// SIG undefined FUN_147761ed0(void)

longlong * FUN_147761ed0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x68))();
  if (cVar2 == '\0') {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1);
    if (((longlong *)*plVar3 == (longlong *)0x0 || (int)plVar3[1] == 0) ||
       (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x30))(), cVar2 == '\0')) {
      *param_2 = 0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x40))();
      if (*(int *)(puVar4 + 1) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*puVar4;
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
      lVar1 = *param_2;
      if ((((lVar1 != 0) && (lVar5 = FUN_1405e2bf2(), lVar5 != 0)) &&
          (*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && (*param_2 != 0)))) {
        return param_2;
      }
    }
  }
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return param_2;
}



// FUNCTION 147761f96 FUN_147761f96 body=98 status=ok
// SIG undefined FUN_147761f96(void)

undefined8 FUN_147761f96(longlong *param_1,undefined8 param_2)

{
  char extraout_AL;
  longlong *plVar1;
  undefined7 uVar4;
  undefined7 extraout_var;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x50))();
  uVar4 = (undefined7)((ulonglong)plVar1 >> 8);
  if ((longlong *)*plVar1 != (longlong *)0x0 && (int)plVar1[1] != 0) {
    (**(code **)(*(longlong *)*plVar1 + 0x30))();
    uVar4 = extraout_var;
    if (extraout_AL != '\0') {
      puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x50))();
      if (*(int *)(puVar2 + 1) == 0) {
        plVar1 = (longlong *)0x0;
      }
      else {
        plVar1 = (longlong *)*puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000147761ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
      return uVar3;
    }
  }
  return CONCAT71(uVar4,1);
}



// FUNCTION 147762002 FUN_147762002 body=45 status=ok
// SIG undefined FUN_147762002(void)

longlong FUN_147762002(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584bd96(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762030 FUN_147762030 body=45 status=ok
// SIG undefined FUN_147762030(void)

longlong FUN_147762030(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c1e4ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776205e FUN_14776205e body=45 status=ok
// SIG undefined FUN_14776205e(void)

longlong FUN_14776205e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c6935e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762094 FUN_147762094 body=45 status=ok
// SIG undefined FUN_147762094(void)

longlong FUN_147762094(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c69434(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477620ca FUN_1477620ca body=45 status=ok
// SIG undefined FUN_1477620ca(void)

longlong FUN_1477620ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf1214(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477620f8 FUN_1477620f8 body=45 status=ok
// SIG undefined FUN_1477620f8(void)

longlong FUN_1477620f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac6d9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762126 FUN_147762126 body=45 status=ok
// SIG undefined FUN_147762126(void)

longlong FUN_147762126(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f981ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762164 FUN_147762164 body=45 status=ok
// SIG undefined FUN_147762164(void)

longlong FUN_147762164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145da7e52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776219c FUN_14776219c body=45 status=ok
// SIG undefined FUN_14776219c(void)

longlong FUN_14776219c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14594e4c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477621d2 FUN_1477621d2 body=45 status=ok
// SIG undefined FUN_1477621d2(void)

longlong FUN_1477621d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf12bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762200 FUN_147762200 body=45 status=ok
// SIG undefined FUN_147762200(void)

longlong FUN_147762200(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145af1208(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776222e FUN_14776222e body=45 status=ok
// SIG undefined FUN_14776222e(void)

longlong FUN_14776222e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf1364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776225c FUN_14776225c body=45 status=ok
// SIG undefined FUN_14776225c(void)

longlong FUN_14776225c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf140c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776228a FUN_14776228a body=45 status=ok
// SIG undefined FUN_14776228a(void)

longlong FUN_14776228a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d01ac0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477622b8 FUN_1477622b8 body=45 status=ok
// SIG undefined FUN_1477622b8(void)

longlong FUN_1477622b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458e4ec6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477622e6 FUN_1477622e6 body=45 status=ok
// SIG undefined FUN_1477622e6(void)

longlong FUN_1477622e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145851c42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762314 FUN_147762314 body=45 status=ok
// SIG undefined FUN_147762314(void)

longlong FUN_147762314(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a274bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776234a FUN_14776234a body=45 status=ok
// SIG undefined FUN_14776234a(void)

longlong FUN_14776234a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f3c930(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762378 FUN_147762378 body=45 status=ok
// SIG undefined FUN_147762378(void)

longlong FUN_147762378(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141147776(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477623ae FUN_1477623ae body=45 status=ok
// SIG undefined FUN_1477623ae(void)

longlong FUN_1477623ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145db1fa8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477623dc FUN_1477623dc body=45 status=ok
// SIG undefined FUN_1477623dc(void)

longlong FUN_1477623dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140e8baaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776240a FUN_14776240a body=45 status=ok
// SIG undefined FUN_14776240a(void)

longlong FUN_14776240a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcfea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762438 FUN_147762438 body=45 status=ok
// SIG undefined FUN_147762438(void)

longlong FUN_147762438(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c199cc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762466 FUN_147762466 body=45 status=ok
// SIG undefined FUN_147762466(void)

longlong FUN_147762466(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584ba0c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762494 FUN_147762494 body=45 status=ok
// SIG undefined FUN_147762494(void)

longlong FUN_147762494(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aea8e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477624c2 FUN_1477624c2 body=45 status=ok
// SIG undefined FUN_1477624c2(void)

longlong FUN_1477624c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf14b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477624f0 FUN_1477624f0 body=45 status=ok
// SIG undefined FUN_1477624f0(void)

longlong FUN_1477624f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141119892(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776251e FUN_14776251e body=45 status=ok
// SIG undefined FUN_14776251e(void)

longlong FUN_14776251e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e0e7ee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776254c FUN_14776254c body=38 status=ok
// SIG undefined FUN_14776254c(void)

undefined8 FUN_14776254c(undefined8 param_1,int param_2)

{
  FUN_1477599a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776257c FUN_14776257c body=51 status=ok
// SIG undefined FUN_14776257c(void)

undefined8 FUN_14776257c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 0x10);
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
  return 0;
}



// FUNCTION 1477625b0 FUN_1477625b0 body=51 status=ok
// SIG undefined FUN_1477625b0(void)

undefined8 FUN_1477625b0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 0x10);
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
  return 0;
}



// FUNCTION 1477625e4 FUN_1477625e4 body=51 status=ok
// SIG undefined FUN_1477625e4(void)

undefined8 FUN_1477625e4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 0x10);
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
  return 0;
}



// FUNCTION 147762650 FUN_147762650 body=49 status=ok
// SIG undefined FUN_147762650(void)

bool FUN_147762650(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x188))();
  bVar2 = true;
  if (cVar1 != '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x188))(param_1);
    bVar2 = cVar1 == '\x02';
  }
  return bVar2;
}



// FUNCTION 1477626d2 FUN_1477626d2 body=51 status=ok
// SIG undefined FUN_1477626d2(void)

undefined8 FUN_1477626d2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
  return 0;
}



// FUNCTION 14776271a FUN_14776271a body=45 status=ok
// SIG undefined FUN_14776271a(void)

longlong FUN_14776271a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcfea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762754 FUN_147762754 body=45 status=ok
// SIG undefined FUN_147762754(void)

longlong FUN_147762754(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14110ad5a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762782 FUN_147762782 body=48 status=ok
// SIG undefined FUN_147762782(void)

longlong FUN_147762782(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14110ad5a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477627b2 FUN_1477627b2 body=48 status=ok
// SIG undefined FUN_1477627b2(void)

longlong FUN_1477627b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14110ad5a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477627e2 FUN_1477627e2 body=48 status=ok
// SIG undefined FUN_1477627e2(void)

longlong FUN_1477627e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14110ad5a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776283e FUN_14776283e body=94 status=ok
// SIG undefined FUN_14776283e(void)

undefined1 FUN_14776283e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(param_3 + lVar2);
      lVar1 = *(longlong *)(param_3 + 8 + lVar2);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + 8 + lVar2);
        }
      }
      *(longlong *)(param_2 + 8 + lVar2) = lVar1;
      lVar2 = lVar2 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1477628c4 FUN_1477628c4 body=59 status=ok
// SIG undefined FUN_1477628c4(void)

undefined8 FUN_1477628c4(longlong *param_1)

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



// FUNCTION 147762966 FUN_147762966 body=122 status=ok
// SIG undefined FUN_147762966(void)

longlong FUN_147762966(longlong param_1,longlong param_2)

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
    FUN_1477629e0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1477629e0 FUN_1477629e0 body=228 status=ok
// SIG undefined FUN_1477629e0(void)

longlong * FUN_1477629e0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147762ac4(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined1 *)(lVar4 + lVar5) = *(undefined1 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147762ac4 FUN_147762ac4 body=386 status=ok
// SIG undefined FUN_147762ac4(void)

void FUN_147762ac4(longlong *param_1,int param_2)

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
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147762c48 FUN_147762c48 body=54 status=ok
// SIG undefined FUN_147762c48(void)

void FUN_147762c48(longlong *param_1)

{
  FUN_147762ac4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147762c7e FUN_147762c7e body=51 status=ok
// SIG undefined FUN_147762c7e(void)

void FUN_147762c7e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2f0);
  *param_2 = &PTR_FUN_14a53f540;
  FUN_140a581a0(param_2 + 2);
  return;
}



// FUNCTION 147762cea FUN_147762cea body=70 status=ok
// SIG undefined FUN_147762cea(void)

undefined1 FUN_147762cea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_140a5e6b8(param_2,param_3);
      param_3 = param_3 + 0x2f0;
      param_2 = param_2 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147762d58 FUN_147762d58 body=59 status=ok
// SIG undefined FUN_147762d58(void)

undefined8 FUN_147762d58(longlong *param_1)

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



// FUNCTION 147762da4 FUN_147762da4 body=49 status=ok
// SIG undefined FUN_147762da4(void)

void FUN_147762da4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14a53f540;
    FUN_140e9e952(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 147762e24 FUN_147762e24 body=52 status=ok
// SIG undefined FUN_147762e24(void)

undefined8 * FUN_147762e24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a53f540;
  FUN_140e9e952(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147762e5a FUN_147762e5a body=51 status=ok
// SIG undefined FUN_147762e5a(void)

void FUN_147762e5a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  *param_2 = &PTR_FUN_14a53f6d0;
  FUN_140ca8f8e(param_2 + 2);
  return;
}



// FUNCTION 147762ec6 FUN_147762ec6 body=70 status=ok
// SIG undefined FUN_147762ec6(void)

undefined1 FUN_147762ec6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_140f13d9e(param_2,param_3);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147762f34 FUN_147762f34 body=59 status=ok
// SIG undefined FUN_147762f34(void)

undefined8 FUN_147762f34(longlong *param_1)

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



// FUNCTION 147762fd6 FUN_147762fd6 body=97 status=ok
// SIG undefined FUN_147762fd6(void)

undefined8 * FUN_147762fd6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a53f6d0;
  param_1[2] = &PTR_FUN_149ed05f0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147763038 FUN_147763038 body=94 status=ok
// SIG undefined FUN_147763038(void)

void FUN_147763038(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_14a53f6d0;
    param_1[2] = &PTR_FUN_149ed05f0;
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
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147763096 FUN_147763096 body=29 status=ok
// SIG undefined FUN_147763096(void)

undefined8 FUN_147763096(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477630b4 FUN_1477630b4 body=491 status=ok
// SIG undefined FUN_1477630b4(void)

ulonglong FUN_1477630b4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar4 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar3 + lVar4);
    uVar5 = (ulonglong)uVar7;
    uVar8 = *(ushort *)((longlong)&DAT_14a53f718 + lVar4);
    if (uVar7 != uVar8) break;
    if (uVar7 == 0) goto LAB_14776313b;
LAB_14776310f:
    lVar4 = lVar4 + 2;
  }
  if ((uVar8 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar9 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_14776310f;
  }
  if (uVar7 != uVar8) goto LAB_147763199;
LAB_14776313b:
  plVar6 = param_2 + 4;
  FUN_140056680(&local_48,&DAT_149f0f4f8);
  puVar3 = local_48;
  if (local_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  iVar2 = FUN_146a4aa22(plVar6,uVar1,&local_48);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar2 == -1) {
LAB_147763199:
    uVar5 = 0;
  }
  else {
    FUN_140056680(&local_48,&DAT_149f0f4f8);
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar5 = (ulonglong)(local_40 - 1);
    if (local_40 == 0) {
      uVar5 = 0;
    }
    uVar1 = FUN_144a49b4a(uVar5,puVar3);
    iVar2 = FUN_146a4aa22(plVar6,uVar1,&local_48);
    uVar5 = 0;
    if (iVar2 != -1) {
      uVar5 = (longlong)iVar2 * 0x20 + *plVar6;
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a63a7c(param_3,&local_48,*(int *)(uVar5 + 0x10),
                  *(int *)(uVar5 + 0x14) - *(int *)(uVar5 + 0x10));
    plVar6 = *(longlong **)(param_1 + 0x10);
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,puVar3,1);
    lVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,local_50,0);
    uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),lVar4 != 0);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1477632a0 FUN_1477632a0 body=1241 status=ok
// SIG undefined FUN_1477632a0(void)

undefined8 * FUN_1477632a0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined8 local_260;
  int *local_258;
  int *local_250;
  undefined4 *local_248;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined8 local_228;
  longlong *local_220;
  undefined4 local_214;
  undefined8 local_210;
  longlong local_208;
  int local_200;
  undefined1 local_1fc;
  int local_1f8;
  undefined1 local_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  plVar14 = *(longlong **)(param_1 + 0x10);
  plVar1 = (longlong *)(param_3 + 0x10);
  FUN_140056680(&local_1f0,&DAT_149f0f4f8);
  puVar13 = &DAT_149dfb77a;
  puVar9 = &DAT_149dfb77a;
  if (local_1e8 != 0) {
    puVar9 = (undefined2 *)CONCAT44(uStack_1ec,local_1f0);
  }
  uVar8 = (ulonglong)(local_1e8 - 1);
  if (local_1e8 == 0) {
    uVar8 = 0;
  }
  uVar4 = FUN_144a49b4a(uVar8,puVar9);
  iVar5 = FUN_1457511aa(plVar1,uVar4,&local_1f0);
  uVar8 = 0;
  if (iVar5 != -1) {
    uVar8 = (longlong)iVar5 * 0x28 + *(longlong *)(param_3 + 0x10);
  }
  if (*(int *)(uVar8 + 0x18) != 0) {
    puVar13 = *(undefined2 **)(uVar8 + 0x10);
  }
  FUN_1446f470e(&local_210,puVar13,1);
  local_208 = (**(code **)(*plVar14 + 0x2a8))(plVar14,local_210,1);
  if (CONCAT44(uStack_1ec,local_1f0) != 0) {
    FUN_1400020a8();
  }
  if (local_208 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_1f4 = 0;
    FUN_140056680(&local_1f0,L"width");
    if (local_1e8 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)CONCAT44(uStack_1ec,local_1f0);
    }
    uVar8 = (ulonglong)(local_1e8 - 1);
    if (local_1e8 == 0) {
      uVar8 = 0;
    }
    uVar4 = FUN_144a49b4a(uVar8,puVar13);
    iVar5 = FUN_1457511aa(plVar1,uVar4,&local_1f0);
    uVar8 = 0;
    if (iVar5 != -1) {
      uVar8 = (longlong)iVar5 * 0x28 + *plVar1;
    }
    plVar14 = (longlong *)(uVar8 + 0x10);
    if (uVar8 == 0) {
      plVar14 = (longlong *)0x0;
    }
    if (CONCAT44(uStack_1ec,local_1f0) != 0) {
      FUN_1400020a8();
    }
    if (plVar14 != (longlong *)0x0) {
      cVar3 = FUN_14680fb24(plVar14,&local_1f0);
      iVar5 = local_1f0;
      if (cVar3 == '\0') {
        lVar7 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*plVar14 + lVar7);
          uVar8 = (ulonglong)uVar10;
          uVar11 = *(ushort *)((longlong)L"desired" + lVar7);
          if (uVar10 != uVar11) break;
          if (uVar10 == 0) goto LAB_1477634c0;
LAB_147763494:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_147763494;
        }
        if (uVar10 != uVar11) goto LAB_1477634dc;
LAB_1477634c0:
        iVar5 = (int)*(float *)(local_208 + 0x20);
      }
      local_1f4 = 1;
      local_1f8 = iVar5;
    }
LAB_1477634dc:
    local_1fc = 0;
    FUN_140056680(&local_1f0,L"height");
    if (local_1e8 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)CONCAT44(uStack_1ec,local_1f0);
    }
    uVar8 = (ulonglong)(local_1e8 - 1);
    if (local_1e8 == 0) {
      uVar8 = 0;
    }
    uVar4 = FUN_144a49b4a(uVar8,puVar13);
    iVar5 = FUN_1457511aa(plVar1,uVar4,&local_1f0);
    uVar8 = 0;
    if (iVar5 != -1) {
      uVar8 = (longlong)iVar5 * 0x28 + *plVar1;
    }
    plVar14 = (longlong *)(uVar8 + 0x10);
    if (uVar8 == 0) {
      plVar14 = (longlong *)0x0;
    }
    if (CONCAT44(uStack_1ec,local_1f0) != 0) {
      FUN_1400020a8();
    }
    if (plVar14 != (longlong *)0x0) {
      cVar3 = FUN_14680fb24(plVar14,&local_1f0);
      iVar5 = local_1f0;
      if (cVar3 == '\0') {
        lVar7 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*plVar14 + lVar7);
          uVar8 = (ulonglong)uVar10;
          uVar11 = *(ushort *)((longlong)L"desired" + lVar7);
          if (uVar10 != uVar11) break;
          if (uVar10 == 0) goto LAB_1477635db;
LAB_1477635af:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_1477635af;
        }
        if (uVar10 != uVar11) goto LAB_1477635f7;
LAB_1477635db:
        iVar5 = (int)*(float *)(local_208 + 0x24);
      }
      local_1fc = 1;
      local_200 = iVar5;
    }
LAB_1477635f7:
    local_214 = 2;
    FUN_140056680(&local_1f0,L"stretch");
    if (local_1e8 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)CONCAT44(uStack_1ec,local_1f0);
    }
    uVar8 = (ulonglong)(local_1e8 - 1);
    if (local_1e8 == 0) {
      uVar8 = 0;
    }
    uVar4 = FUN_144a49b4a(uVar8,puVar13);
    iVar5 = FUN_1457511aa(plVar1,uVar4,&local_1f0);
    uVar8 = 0;
    if (iVar5 != -1) {
      uVar8 = (longlong)iVar5 * 0x28 + *plVar1;
    }
    lVar7 = uVar8 + 0x10;
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    if (CONCAT44(uStack_1ec,local_1f0) != 0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      uVar6 = FUN_146a9077b();
      lVar7 = FUN_14689a7b0(uVar6,lVar7,0);
      if (lVar7 != -1) {
        local_214 = (undefined4)lVar7;
      }
    }
    thunk_FUN_140a5071c(&local_1f0);
    local_268 = &local_208;
    local_258 = &local_1f8;
    local_250 = &local_200;
    local_248 = &local_214;
    local_260 = param_4;
    FUN_1477637f2(local_240);
    FUN_147763780(local_240,&local_228,&local_1f0);
    *param_2 = local_228;
    param_2[1] = local_220;
    if (local_220 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_220 + 1) = (int)local_220[1] + 1;
      UNLOCK();
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_220 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar2 = (int *)((longlong)local_220 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_220 + 0x10))(local_220);
          }
        }
      }
    }
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_238 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar2 = (int *)((longlong)local_238 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_238 + 0x10))(local_238);
        }
      }
    }
    FUN_140a4ff8c(&local_1f0);
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14776377a thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 147763780 FUN_147763780 body=113 status=ok
// SIG undefined FUN_147763780(void)

longlong * FUN_147763780(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147763a86(param_1[2],*param_1);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1477637f2 FUN_1477637f2 body=351 status=ok
// SIG undefined FUN_1477637f2(void)

undefined8 * FUN_1477637f2(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x278);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a53f7b0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x268);
  FUN_140a55f88(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a53f7d0;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1477639de(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1477638e4;
    param_1[1] = 0;
LAB_1477638ae:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1477638e4;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1477638e4;
      goto LAB_1477638ae;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477638e4;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1477638e4:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x268;
  FUN_140a52e78(*param_1,"SRichInlineImage",
                ".\\Runtime/UMG/Private/Components/RichTextBlockImageDecorator.cpp",0xa1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147763952 FUN_147763952 body=45 status=ok
// SIG undefined FUN_147763952(void)

void FUN_147763952(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 147763980 FUN_147763980 body=29 status=ok
// SIG undefined FUN_147763980(void)

undefined8 FUN_147763980(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776399e FUN_14776399e body=63 status=ok
// SIG undefined FUN_14776399e(void)

undefined8 * FUN_14776399e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477639de FUN_1477639de body=167 status=ok
// SIG undefined FUN_1477639de(void)

void FUN_1477639de(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147763a59;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147763a59;
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
LAB_147763a59:
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
                    /* WARNING: Could not recover jumptable at 0x000147763a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147763a86 FUN_147763a86 body=144 status=ok
// SIG undefined FUN_147763a86(void)

void FUN_147763a86(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 local_18;
  char local_14;
  undefined4 local_10;
  char local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)param_1[4];
  local_c = *(char *)((undefined4 *)param_1[3] + 1);
  if (local_c == '\x01') {
    local_10 = *(undefined4 *)param_1[3];
  }
  local_14 = *(char *)((undefined4 *)param_1[2] + 1);
  if (local_14 == '\x01') {
    local_18 = *(undefined4 *)param_1[2];
  }
  local_28 = &local_10;
  FUN_147763b18(param_2,*(undefined8 *)*param_1,param_1[1],&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147763b18 FUN_147763b18 body=1577 status=ok
// SIG undefined FUN_147763b18(void)

void FUN_147763b18(longlong param_1,longlong param_2,longlong param_3,int *param_4,int *param_5,
                  undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_8b8 [32];
  undefined1 *local_898;
  undefined1 local_889;
  undefined1 local_888 [8];
  longlong *local_880;
  undefined1 local_869;
  undefined1 local_868 [8];
  longlong *local_860;
  undefined1 local_849;
  undefined1 local_848 [8];
  longlong *local_840;
  longlong local_830;
  undefined1 local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  longlong *local_808;
  undefined4 local_800;
  undefined1 local_7fc;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined4 local_7e8;
  undefined1 local_7e4;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  longlong *local_7c8;
  float local_7c0;
  undefined1 local_7bc;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  float local_7a8;
  undefined1 local_7a4;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  longlong *local_788;
  undefined8 local_780;
  longlong *local_778;
  undefined1 local_770 [424];
  longlong local_5c8;
  undefined1 local_5c0;
  undefined1 local_5b8 [128];
  undefined1 local_538 [424];
  undefined8 local_390;
  longlong *local_388;
  undefined4 local_37c;
  undefined4 local_378;
  undefined1 local_374;
  undefined1 local_370 [16];
  undefined4 local_360;
  undefined1 local_35c;
  undefined1 local_358 [64];
  undefined1 local_318 [472];
  undefined8 local_140;
  longlong *local_138;
  float local_130;
  undefined1 local_12c;
  undefined1 local_128 [16];
  float local_118;
  undefined1 local_114;
  undefined1 local_110 [160];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  lVar6 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    plVar9 = *(longlong **)(lVar6 + 0x38);
  }
  else {
    uVar8 = *(undefined8 *)(lVar6 + 0x20);
    plVar9 = *(longlong **)(lVar6 + 0x28);
  }
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  fVar11 = *(float *)(param_2 + 0x24);
  uVar7 = FUN_1408634be(uVar8,param_3 + 8,0x3f800000);
  if ((char)param_5[1] == '\x01') {
    fVar10 = (float)*param_5;
  }
  else {
    fVar10 = (float)uVar7;
    if (fVar11 <= (float)uVar7) {
      fVar10 = fVar11;
    }
  }
  fVar11 = fVar10;
  if ((char)param_4[1] == '\x01') {
    fVar11 = (float)*param_4;
  }
  FUN_140a53a96(local_318);
  local_7a4 = 1;
  local_7a0 = 0;
  uStack_798 = 0;
  local_114 = 1;
  local_7a8 = fVar10;
  local_118 = fVar10;
  FUN_144a450dc(local_110,&local_7a0);
  FUN_1449db362(&local_7a0);
  local_7bc = 1;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_12c = 1;
  local_7c0 = fVar11;
  local_130 = fVar11;
  FUN_144a450dc(local_128,&local_7b8);
  FUN_1449db362(&local_7b8);
  FUN_145ff9e3e(local_538);
  local_7e8 = param_6;
  local_7e4 = 1;
  local_7e0 = 0;
  uStack_7d8 = 0;
  local_360 = param_6;
  local_35c = 1;
  FUN_144a450dc(local_358,&local_7e0);
  FUN_1449db362(&local_7e0);
  local_800 = 1;
  local_7fc = 1;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_378 = 1;
  local_374 = 1;
  FUN_144a450dc(local_370,&local_7f8);
  FUN_1449db362(&local_7f8);
  local_37c = 2;
  FUN_140a53334(local_770);
  local_828 = 1;
  local_820 = 0;
  uStack_818 = 0;
  local_5c0 = 1;
  local_830 = param_2;
  local_5c8 = param_2;
  FUN_144a450dc(local_5b8,&local_820);
  FUN_1449db362(&local_820);
  local_898 = &local_849;
  FUN_140a554b8(local_848,"SImage",
                ".\\Runtime/UMG/Private/Components/RichTextBlockImageDecorator.cpp",0x3f);
  FUN_140a52c70(local_848,&local_810,local_770);
  plVar3 = local_388;
  plVar4 = local_808;
  if (local_808 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_808 + 1) = (int)local_808[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_808 + 1) = (int)local_808[1] + 1;
    UNLOCK();
  }
  local_390 = local_810;
  local_388 = local_808;
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
  local_898 = &local_869;
  FUN_145ffa146(local_868,"SScaleBox",
                ".\\Runtime/UMG/Private/Components/RichTextBlockImageDecorator.cpp",0x3a);
  FUN_145ff9564(local_868,&local_7d0,local_538);
  plVar1 = local_138;
  plVar3 = local_7c8;
  if (local_7c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7c8 + 1) = (int)local_7c8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_7c8 + 1) = (int)local_7c8[1] + 1;
    UNLOCK();
  }
  local_140 = local_7d0;
  local_138 = local_7c8;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar1 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  local_898 = &local_889;
  FUN_140a53d66(local_888,&DAT_149efe19f,
                ".\\Runtime/UMG/Private/Components/RichTextBlockImageDecorator.cpp",0x36);
  FUN_140a50bf4(local_888,&local_790,local_318);
  local_780 = local_790;
  local_778 = local_788;
  if (local_788 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_788 + 1) = (int)local_788[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_780);
  plVar1 = local_778;
  if (local_778 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_778 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_778)(local_778);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_788 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_788 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_788)(local_788);
      LOCK();
      piVar2 = (int *)((longlong)local_788 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_788 + 0x10))(local_788);
      }
    }
  }
  if (local_880 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_880 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_880)(local_880);
      LOCK();
      piVar2 = (int *)((longlong)local_880 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_880 + 0x10))(local_880);
      }
    }
  }
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
  if (local_7c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_7c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_7c8)(local_7c8);
      LOCK();
      piVar2 = (int *)((longlong)local_7c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7c8 + 0x10))(local_7c8);
      }
    }
  }
  if (local_860 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_860 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_860)(local_860);
      LOCK();
      piVar2 = (int *)((longlong)local_860 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_860 + 0x10))(local_860);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_808 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_808 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_808)(local_808);
      LOCK();
      piVar2 = (int *)((longlong)local_808 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_808 + 0x10))(local_808);
      }
    }
  }
  if (local_840 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_840 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_840)(local_840);
      LOCK();
      piVar2 = (int *)((longlong)local_840 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_840 + 0x10))(local_840);
      }
    }
  }
  FUN_140a55a86(local_770);
  FUN_145ff94f2(local_538);
  FUN_140a5660c(local_318);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((char)param_4[1] == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((char)param_5[1] == '\x01') {
    *(undefined1 *)(param_5 + 1) = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_8b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147764142 FUN_147764142 body=41 status=ok
// SIG undefined FUN_147764142(void)

void FUN_147764142(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14776416c(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 14776416c FUN_14776416c body=108 status=ok
// SIG undefined FUN_14776416c(void)

void FUN_14776416c(longlong param_1)

{
  FUN_1449db362(param_1 + 0xb0);
  FUN_1449db362(param_1 + 0x98);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1449db362(param_1 + 0x78);
    FUN_1449db362(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  FUN_1449db362(param_1 + 0x30);
  FUN_1477641d8(param_1);
  return;
}



// FUNCTION 1477641d8 FUN_1477641d8 body=83 status=ok
// SIG undefined FUN_1477641d8(void)

void FUN_1477641d8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147764220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 14776422c FUN_14776422c body=218 status=ok
// SIG undefined FUN_14776422c(void)

undefined8 FUN_14776422c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[8] = 0;
  local_20[9] = 0;
  local_20[10] = 0;
  *local_20 = &PTR_FUN_149edb640;
  local_20[1] = 0;
  local_20[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_20[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  *(undefined4 *)(local_20 + 8) = 1;
  *(undefined1 **)((longlong)local_20 + 0x44) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)local_20 + 0x4c) = 0;
  *local_20 = &PTR_FUN_14a53fa10;
  local_20[4] = &PTR_LAB_14a53fa20;
  FUN_147764308(param_2,&local_20,param_1 + 0x1e0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147764308 FUN_147764308 body=141 status=ok
// SIG undefined FUN_147764308(void)

undefined8 * FUN_147764308(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  param_1[1] = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xad) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_14a53fa58;
  param_1[0x19] = param_3;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 147764396 FUN_147764396 body=38 status=ok
// SIG undefined FUN_147764396(void)

undefined8 FUN_147764396(undefined8 param_1,int param_2)

{
  FUN_147764444();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477643ce FUN_1477643ce body=80 status=ok
// SIG undefined FUN_1477643ce(void)

int FUN_1477643ce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x18))();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x20))
                        (*(longlong **)(param_1 + -0x18),iVar3);
      if (lVar2 == param_1 + -0x20) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return -1;
}



// FUNCTION 14776441e FUN_14776441e body=38 status=ok
// SIG undefined FUN_14776441e(void)

undefined8 FUN_14776441e(undefined8 param_1,int param_2)

{
  FUN_147764444();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147764444 FUN_147764444 body=69 status=ok
// SIG undefined FUN_147764444(void)

void FUN_147764444(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a53fa38;
  param_1[4] = &PTR_LAB_14a53fa40;
  if ((param_1[1] != 0) && (lVar1 = *(longlong *)(param_1[1] + 8), lVar1 != 0)) {
    FUN_140c4c666(lVar1,param_1 + 4);
  }
  FUN_140cc7538(param_1);
  return;
}



// FUNCTION 14776448a FUN_14776448a body=38 status=ok
// SIG undefined FUN_14776448a(void)

undefined8 FUN_14776448a(undefined8 param_1,int param_2)

{
  FUN_1477530d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147764504 FUN_147764504 body=59 status=ok
// SIG undefined FUN_147764504(void)

undefined8 FUN_147764504(longlong *param_1)

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



// FUNCTION 1477645a6 FUN_1477645a6 body=221 status=ok
// SIG undefined FUN_1477645a6(void)

float * FUN_1477645a6(float *param_1,double *param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  
  dVar1 = *param_2;
  fVar2 = 0.0;
  fVar3 = 0.0;
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    fVar3 = (float)dVar1;
    if (89.0 <= fVar3) {
      fVar3 = 89.0;
    }
    if (fVar3 <= -89.0) {
      fVar3 = -89.0;
    }
    fVar3 = tanf((90.0 - fVar3) * 0.017453292);
    fVar3 = 1.0 / fVar3;
  }
  dVar1 = param_2[1];
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    fVar2 = (float)dVar1;
    if (89.0 <= fVar2) {
      fVar2 = 89.0;
    }
    if (fVar2 <= -89.0) {
      fVar2 = -89.0;
    }
    fVar2 = tanf((90.0 - fVar2) * 0.017453292);
    fVar2 = 1.0 / fVar2;
  }
  *param_1 = fVar3;
  param_1[1] = fVar2;
  return param_1;
}



// FUNCTION 147764684 FUN_147764684 body=23 status=ok
// SIG undefined FUN_147764684(void)

undefined8 FUN_147764684(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 8))();
  return param_2;
}



// FUNCTION 14776469c FUN_14776469c body=382 status=ok
// SIG undefined FUN_14776469c(void)

longlong * FUN_14776469c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    local_38 = (code *)0x0;
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 8);
    uVar6 = FUN_14477b072(plVar5,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,&local_38);
    pcVar3 = local_38;
    if (local_38 == (code *)0x0) {
      *param_2 = DAT_14c98dec8;
      lVar4 = DAT_14c98ded0;
      goto LAB_1477646ca;
    }
    local_30 = &local_39;
    local_38 = FUN_143336ee2;
    FUN_1407616b4(pcVar3,&local_50);
    plVar5 = local_48;
    if (local_48 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = local_50;
      plVar7 = *(longlong **)(param_1 + 0x20);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
LAB_1477647b3:
        LOCK();
        plVar5 = plVar7 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001477647e0:
          if (iVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x18) = local_50;
      plVar7 = *(longlong **)(param_1 + 0x20);
      if (local_48 == plVar7) {
        LOCK();
        plVar7 = local_48 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar7 = plVar5;
          goto joined_r0x0001477647e0;
        }
      }
      else {
        *(longlong **)(param_1 + 0x20) = local_48;
        if (plVar7 != (longlong *)0x0) goto LAB_1477647b3;
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_48 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
  }
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x20);
LAB_1477646ca:
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776481c FUN_14776481c body=133 status=ok
// SIG undefined FUN_14776481c(void)

void FUN_14776481c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_147764873;
    }
    *(longlong **)(param_1 + 0x20) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_147764873:
                    /* WARNING: Could not recover jumptable at 0x00014776487f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1477648a4 FUN_1477648a4 body=20 status=ok
// SIG undefined FUN_1477648a4(void)

byte FUN_1477648a4(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_14113f0c0(param_1 + 8);
  return bVar1 ^ 1;
}



// FUNCTION 1477648be FUN_1477648be body=72 status=ok
// SIG undefined FUN_1477648be(void)

void FUN_1477648be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001477648fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147764908 FUN_147764908 body=83 status=ok
// SIG undefined FUN_147764908(void)

undefined8 * FUN_147764908(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a53fca0;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 14776495b FUN_14776495b body=185 status=ok
// SIG undefined FUN_14776495b(void)

undefined8 FUN_14776495b(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147764b10 FUN_147764b10 body=63 status=ok
// SIG undefined FUN_147764b10(void)

undefined1 FUN_147764b10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147764cb0(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 147764b78 FUN_147764b78 body=59 status=ok
// SIG undefined FUN_147764b78(void)

undefined8 FUN_147764b78(longlong *param_1)

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



// FUNCTION 147764bc4 FUN_147764bc4 body=38 status=ok
// SIG undefined FUN_147764bc4(void)

void FUN_147764bc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_140595c52(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 147764c3c FUN_147764c3c body=68 status=ok
// SIG undefined FUN_147764c3c(void)

undefined8 * FUN_147764c3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a544ad0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140595d6e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147764c8a FUN_147764c8a body=38 status=ok
// SIG undefined FUN_147764c8a(void)

undefined8 FUN_147764c8a(undefined8 param_1,int param_2)

{
  FUN_140595d6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147764cb0 FUN_147764cb0 body=134 status=ok
// SIG undefined FUN_147764cb0(void)

longlong FUN_147764cb0(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_147764d36();
  FUN_147765084(param_1 + 0x110,param_2 + 0x110);
  lVar2 = *(longlong *)(param_2 + 0x160);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x160);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x160) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x168);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x168);
    }
  }
  *(longlong *)(param_1 + 0x168) = lVar2;
  return param_1;
}



// FUNCTION 147764d36 FUN_147764d36 body=105 status=ok
// SIG undefined FUN_147764d36(void)

longlong FUN_147764d36(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_147764da0();
  lVar4 = *(longlong *)(param_2 + 0xe8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0xe8);
    }
  }
  *(longlong *)(param_1 + 0xe8) = lVar4;
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  FUN_140670b3c(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 147764da0 FUN_147764da0 body=191 status=ok
// SIG undefined FUN_147764da0(void)

longlong FUN_147764da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1447a122a(param_1 + 8,param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_147764e60(param_1 + 0x28,param_2 + 0x28);
  FUN_1402ae23a(param_1 + 0x38,param_2 + 0x38);
  FUN_1406fa324(param_1 + 0x48,param_2 + 0x48);
  FUN_147764eb0(param_1 + 0x58,param_2 + 0x58);
  FUN_14620e1f0(param_1 + 0x68,param_2 + 0x68);
  FUN_1457d1b7e(param_1 + 0x78,param_2 + 0x78);
  FUN_1457d258e(param_1 + 0x88,param_2 + 0x88);
  FUN_140cae46a(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 147764e60 FUN_147764e60 body=79 status=ok
// SIG undefined FUN_147764e60(void)

undefined8 * FUN_147764e60(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147764f00(param_1,iVar1);
      FUN_147764f62(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147764eb0 FUN_147764eb0 body=79 status=ok
// SIG undefined FUN_147764eb0(void)

undefined8 * FUN_147764eb0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147764fc2(param_1,iVar1);
      FUN_147765024(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147764f00 FUN_147764f00 body=98 status=ok
// SIG undefined FUN_147764f00(void)

void FUN_147764f00(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147764f62 FUN_147764f62 body=96 status=ok
// SIG undefined FUN_147764f62(void)

void FUN_147764f62(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined4 *)(param_1 + 8 + lVar3) = *(undefined4 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147764fc2 FUN_147764fc2 body=98 status=ok
// SIG undefined FUN_147764fc2(void)

void FUN_147764fc2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147765024 FUN_147765024 body=96 status=ok
// SIG undefined FUN_147765024(void)

void FUN_147765024(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147765084 FUN_147765084 body=122 status=ok
// SIG undefined FUN_147765084(void)

longlong FUN_147765084(longlong param_1,longlong param_2)

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
    FUN_1477650fe(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1477650fe FUN_1477650fe body=297 status=ok
// SIG undefined FUN_1477650fe(void)

longlong * FUN_1477650fe(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_140595cf2(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14045f6dc(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar10 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          lVar6 = *(longlong *)(lVar3 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar6;
          if ((lVar6 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
          puVar8 = puVar1;
          puVar9 = (undefined8 *)(lVar7 + lVar4 + 0x10);
          for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          *(undefined8 *)(lVar7 + lVar4 + 0x70) = puVar1[0xc];
        }
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x80;
      } while (uVar2 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 147765228 FUN_147765228 body=57 status=ok
// SIG undefined FUN_147765228(void)

undefined8 * FUN_147765228(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a540320;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147765262 FUN_147765262 body=905 status=ok
// SIG undefined FUN_147765262(void)

void FUN_147765262(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte unaff_BL;
  longlong lVar10;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined2 local_173;
  undefined1 local_171;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_15c;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  byte local_13c;
  undefined2 local_13b;
  undefined1 local_139;
  undefined8 local_138;
  longlong *local_130;
  undefined1 local_128 [8];
  float local_120;
  float local_11c;
  float local_118;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  byte local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar4 = *(int *)(param_1 + 0x10);
  local_188 = param_2;
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar10 = 0;
    do {
      local_180 = *(undefined8 *)(lVar5 + lVar10);
      lVar9 = FUN_14479d2ce(&local_180);
      if (lVar9 != 0) {
        lVar6 = *(longlong *)(lVar9 + 0x740);
        plVar7 = *(longlong **)(lVar9 + 0x748);
        if (plVar7 != (longlong *)0x0) {
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
        }
        if (lVar6 != 0) {
          FUN_14570e3a0(local_128);
          uVar8 = *(undefined8 *)(lVar9 + 0x678);
          local_138 = *(undefined8 *)(lVar9 + 0x740);
          local_140 = local_108 * 0.0 + local_100 * 0.0 + local_f8;
          local_144 = local_10c * 0.0 + local_104 * 0.0 + local_fc;
          local_160 = local_118 + local_120 * 0.0;
          local_164 = local_120 * 0.0 + local_11c;
          plVar7 = *(longlong **)(lVar9 + 0x748);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          local_16c = (float)(int)((ulonglong)uVar8 >> 0x20);
          local_170 = (float)(int)uVar8;
          local_148 = local_108 * 0.0 + local_100;
          local_14c = local_10c * 0.0 + local_104;
          local_150 = local_108 + local_100 * 0.0;
          local_154 = local_10c + local_104 * 0.0;
          unaff_BL = unaff_BL & 0xfe | local_f4 & 1;
          local_168 = local_120;
          local_15c = 0;
          local_139 = local_171;
          local_13b = local_173;
          local_13c = unaff_BL;
          local_130 = plVar7;
          if (plVar7 != (longlong *)0x0) {
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
          }
          FUN_1402018be(local_188,&local_170);
          plVar1 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_130 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
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
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar4 * 8 != lVar10);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477655ec FUN_1477655ec body=849 status=ok
// SIG undefined FUN_1477655ec(void)

void FUN_1477655ec(longlong param_1,float *param_2,longlong param_3,longlong param_4,double *param_5
                  )

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  char cVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  float *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = param_1 + 0x18;
  local_100 = param_1;
  local_f0 = param_2;
  cVar13 = FUN_144729dda(lVar1);
  if (cVar13 != '\0') {
    lVar14 = FUN_14479d2ce(lVar1);
    uVar12 = DAT_14cb0d2b0;
    bVar9 = *(byte *)(lVar14 + 0x152);
    if ((bVar9 == 1) || ((bVar9 < 7 && ((0x68U >> (bVar9 & 0x1f) & 1) != 0)))) {
      uVar15 = FUN_14479d2ce(lVar1);
      local_f8 = FUN_147d7ff84(uVar12,uVar15,0);
      if ((local_f8 != 0) &&
         ((*(longlong *)(local_f8 + 0x30) != 0 &&
          (iVar10 = *(int *)(local_100 + 0x10), (longlong)iVar10 != 0)))) {
        dVar7 = param_5[1];
        dVar8 = *param_5;
        fVar4 = *(float *)(param_4 + 8);
        fVar20 = 1.0 / (*(float *)(param_4 + 0x1c) * *(float *)(param_4 + 0x28) -
                       *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x20));
        fVar21 = *(float *)(param_4 + 0x1c) * fVar20;
        fVar19 = -*(float *)(param_4 + 0x24) * fVar20;
        fVar18 = -*(float *)(param_4 + 0x20) * fVar20;
        fVar20 = fVar20 * *(float *)(param_4 + 0x28);
        fVar5 = *(float *)(param_4 + 0x30);
        fVar6 = *(float *)(param_4 + 0x2c);
        lVar1 = *(longlong *)(local_100 + 8);
        lVar14 = 0;
        do {
          local_a8 = *(undefined8 *)(lVar1 + lVar14);
          plVar16 = (longlong *)FUN_14479d2ce(&local_a8);
          if (plVar16 != (longlong *)0x0) {
            lVar11 = plVar16[0xe8];
            plVar17 = (longlong *)plVar16[0xe9];
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
              UNLOCK();
              LOCK();
              plVar2 = plVar17 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar17)(plVar17);
                LOCK();
                piVar3 = (int *)((longlong)plVar17 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                }
              }
            }
            if ((((lVar11 == param_3) &&
                 (local_b8 = (double)((fVar20 * (float)dVar8 + fVar19 * (float)dVar7 +
                                      (-fVar6 * fVar20 - fVar5 * fVar19)) * fVar4),
                 local_b0 = (double)((fVar18 * (float)dVar8 + fVar21 * (float)dVar7 +
                                     (-fVar6 * fVar18 - fVar21 * fVar5)) * fVar4),
                 plVar17 = (longlong *)
                           FUN_14776593e(local_100,*(undefined8 *)(local_f8 + 0x30),&local_b8),
                 plVar17 != (longlong *)0x0)) && ((char)plVar16[0xd3] == '\x01')) &&
               (((int)plVar16[0xcf] != 0 &&
                (plVar16 == plVar17 && (ulonglong)plVar16[0xcf] >> 0x20 != 0)))) {
              local_e8 = *(undefined4 *)(local_100 + 0x48);
              uStack_e4 = *(undefined4 *)(local_100 + 0x4c);
              uStack_e0 = *(undefined4 *)(local_100 + 0x50);
              uStack_dc = *(undefined4 *)(local_100 + 0x54);
              local_d8 = *(undefined8 *)(local_100 + 0x58);
              (**(code **)(*plVar16 + 0xa98))(plVar16,&local_e8,&local_c8);
              *local_f0 = (float)local_c8;
              local_f0[1] = (float)local_c0;
              local_f0[2] = (float)local_c8;
              local_f0[3] = (float)local_c0;
              *(undefined1 *)(local_f0 + 4) = 1;
              goto LAB_1477658e5;
            }
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)iVar10 * 8 != lVar14);
      }
    }
  }
  *(undefined1 *)(local_f0 + 4) = 0;
LAB_1477658e5:
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14776593e FUN_14776593e body=193 status=ok
// SIG undefined FUN_14776593e(void)

undefined8 FUN_14776593e(longlong param_1,longlong param_2,double *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(ulonglong *)(param_1 + 0x20) == (ulonglong)DAT_14c75b13c) {
    if ((*(double *)(param_1 + 0x28) == *param_3) &&
       (!NAN(*(double *)(param_1 + 0x28)) && !NAN(*param_3))) {
      if ((*(double *)(param_1 + 0x30) == param_3[1]) &&
         (!NAN(*(double *)(param_1 + 0x30)) && !NAN(param_3[1]))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
      }
    }
  }
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)DAT_14c75b13c;
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  if (param_2 != 0) {
    local_38 = param_1 + 0x38;
    local_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    cVar4 = FUN_14364e710(param_2,&local_28,3,1);
    if (cVar4 != '\0') {
      uVar5 = FUN_14479d2ce(param_1 + 0x110);
      goto LAB_1477659c0;
    }
  }
  uVar5 = 0;
LAB_1477659c0:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147765a0e FUN_147765a0e body=124 status=ok
// SIG undefined FUN_147765a0e(void)

void FUN_147765a0e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_147765a8a(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147765ac0(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 147765a8a FUN_147765a8a body=53 status=ok
// SIG undefined FUN_147765a8a(void)

ulonglong FUN_147765a8a(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147765ac0 FUN_147765ac0 body=132 status=ok
// SIG undefined FUN_147765ac0(void)

void FUN_147765ac0(longlong param_1,int param_2)

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



// FUNCTION 147765b46 FUN_147765b46 body=186 status=ok
// SIG undefined FUN_147765b46(void)

void FUN_147765b46(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar7 = (longlong)(int)param_1[1] << 3;
    iVar4 = 1;
    lVar6 = 0;
    do {
      cVar1 = FUN_147765a8a(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar4 == 0) {
          return;
        }
        iVar2 = (int)param_1[1];
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(*param_1 + (lVar6 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_147765c00(param_1);
        return;
      }
      lVar3 = lVar3 + 8;
      lVar6 = lVar6 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 147765c00 FUN_147765c00 body=62 status=ok
// SIG undefined FUN_147765c00(void)

void FUN_147765c00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147765c3e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147765c3e FUN_147765c3e body=93 status=ok
// SIG undefined FUN_147765c3e(void)

ulonglong FUN_147765c3e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 147765c9c FUN_147765c9c body=638 status=ok
// SIG undefined FUN_147765c9c(void)

longlong * FUN_147765c9c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_268 [40];
  longlong local_240;
  longlong local_238;
  longlong local_230 [2];
  longlong local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  longlong local_200;
  longlong *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_147765d71;
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar11 = iVar6 == iVar5;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + 0x28);
    if (lVar9 != 0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *param_2 = lVar9;
      param_2[1] = (longlong)plVar8;
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
    if (lVar9 != 0) goto LAB_147765d40;
  }
LAB_147765d71:
  FUN_147765f42(&local_1f0);
  local_220 = param_1 + 0x18;
  FUN_14776602e(local_218);
  FUN_147765fb4(local_218,&local_200,&local_1f0);
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_210 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)local_210 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  FUN_140a4ff8c(&local_1f0);
  plVar1 = local_1f8;
  *(longlong *)(param_1 + 0x28) = local_200;
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != local_1f8) {
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_1f8 + 0xc) = *(int *)((longlong)local_1f8 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x30) = plVar1;
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x38);
    lVar10 = (longlong)*(int *)(param_1 + 0x40) << 3;
    do {
      lVar7 = FUN_14479d2ce(lVar9);
      lVar4 = local_200;
      if (lVar7 != 0) {
        if (*(longlong *)(lVar7 + 0x768) == 0) {
          lVar3 = *(longlong *)(lVar7 + 0x770);
          if (lVar3 == 0) goto LAB_147765e84;
          local_238 = *(longlong *)(lVar7 + 0x778);
          if (local_238 != 0) {
            LOCK();
            *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
            UNLOCK();
          }
          plVar8 = &local_240;
          local_240 = lVar3;
        }
        else {
          local_1e8 = local_218;
          local_1f0 = FUN_143336ee2;
          FUN_1407616b4(*(longlong *)(lVar7 + 0x768),local_230,&local_1f0);
          plVar8 = local_230;
        }
        FUN_1477913e6(lVar4,lVar7,plVar8);
      }
LAB_147765e84:
      lVar9 = lVar9 + 8;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  *param_2 = local_200;
  param_2[1] = (longlong)local_1f8;
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
    UNLOCK();
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1f8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)local_1f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1f8 + 0x10))(local_1f8);
        }
      }
    }
  }
LAB_147765d40:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147765f1c FUN_147765f1c body=38 status=ok
// SIG undefined FUN_147765f1c(void)

undefined8 FUN_147765f1c(undefined8 param_1,int param_2)

{
  FUN_1477664ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147765f42 FUN_147765f42 body=113 status=ok
// SIG undefined FUN_147765f42(void)

longlong FUN_147765f42(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147765fb4 FUN_147765fb4 body=122 status=ok
// SIG undefined FUN_147765fb4(void)

longlong * FUN_147765fb4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147791230(*param_1,param_3,*(undefined8 *)param_1[2]);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14776602e FUN_14776602e body=300 status=ok
// SIG undefined FUN_14776602e(void)

longlong * FUN_14776602e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x308,0x10);
  FUN_14776615c(plVar3);
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_147766446(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1477660ed;
    param_1[1] = 0;
LAB_1477660b7:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1477660ed;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1477660ed;
      goto LAB_1477660b7;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477660ed;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1477660ed:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2f8;
  FUN_140a52e78(*param_1,"SWorldWidgetScreenLayer",
                ".\\Runtime/UMG/Private/Components/WidgetComponent.cpp",0x74);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776615c FUN_14776615c body=164 status=ok
// SIG undefined FUN_14776615c(void)

undefined8 * FUN_14776615c(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a540370;
  memset(param_1 + 2,0,0x2f8);
  FUN_140a55f88(param_1 + 2);
  param_1[2] = &PTR_FUN_14a540390;
  FUN_1414dd38a(param_1 + 0x4f);
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  return param_1;
}



// FUNCTION 14776620a FUN_14776620a body=29 status=ok
// SIG undefined FUN_14776620a(void)

undefined8 FUN_14776620a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147766228 FUN_147766228 body=38 status=ok
// SIG undefined FUN_147766228(void)

undefined8 FUN_147766228(undefined8 param_1,int param_2)

{
  FUN_14776624e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14776624e FUN_14776624e body=135 status=ok
// SIG undefined FUN_14776624e(void)

void FUN_14776624e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a540390;
  plVar3 = (longlong *)param_1[0x5e];
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
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_1477662d6(param_1 + 0x53);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1477662d6 FUN_1477662d6 body=52 status=ok
// SIG undefined FUN_1477662d6(void)

void FUN_1477662d6(longlong *param_1)

{
  FUN_14776630a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14776630a FUN_14776630a body=314 status=ok
// SIG undefined FUN_14776630a(void)

void FUN_14776630a(longlong *param_1)

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
      FUN_147791160(*local_68 + (longlong)iStack_4c * 0x50 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147766446 FUN_147766446 body=167 status=ok
// SIG undefined FUN_147766446(void)

void FUN_147766446(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1477664c1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1477664c1;
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
LAB_1477664c1:
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
                    /* WARNING: Could not recover jumptable at 0x0001477664e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1477664ee FUN_1477664ee body=87 status=ok
// SIG undefined FUN_1477664ee(void)

void FUN_1477664ee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a540340;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014776653a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147766546 FUN_147766546 body=254 status=ok
// SIG undefined FUN_147766546(void)

void FUN_147766546(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar3 = 0;
  bVar6 = false;
  do {
    lVar5 = lVar3 * 8;
    while( true ) {
      cVar1 = FUN_147765a8a(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 8;
      if (iVar2 <= lVar3) {
        if (!bVar6) {
          return;
        }
        goto LAB_14776662e;
      }
    }
    do {
      if (iVar2 - 1U != (uint)lVar3) {
        iVar4 = ~(uint)lVar3 + iVar2;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),
                (longlong)iVar4 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      if (iVar2 + -1 <= lVar3) goto LAB_14776662e;
      cVar1 = FUN_147765a8a(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
    } while (cVar1 != '\0');
    lVar3 = lVar3 + 1;
    bVar6 = true;
  } while (lVar3 < iVar2);
LAB_14776662e:
  FUN_147765c00(param_1);
  return;
}



// FUNCTION 147766644 FUN_147766644 body=154 status=ok
// SIG undefined FUN_147766644(void)

undefined8 * FUN_147766644(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149f05a70;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14a5405d0;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 1477666de FUN_1477666de body=29 status=ok
// SIG undefined FUN_1477666de(void)

undefined8 FUN_1477666de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147766714 FUN_147766714 body=29 status=ok
// SIG undefined FUN_147766714(void)

bool FUN_147766714(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 147766732 FUN_147766732 body=26 status=ok
// SIG undefined FUN_147766732(void)

bool FUN_147766732(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 147766756 FUN_147766756 body=101 status=ok
// SIG undefined FUN_147766756(void)

void FUN_147766756(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5405d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477667bc FUN_1477667bc body=101 status=ok
// SIG undefined FUN_1477667bc(void)

void FUN_1477667bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5405d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147766822 FUN_147766822 body=134 status=ok
// SIG undefined FUN_147766822(void)

void FUN_147766822(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5405d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147766899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477668a8 FUN_1477668a8 body=158 status=ok
// SIG undefined FUN_1477668a8(void)

undefined8 * FUN_1477668a8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_147766a18(&local_38);
  local_28 = '\x01';
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_38);
  *param_2 = local_38;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = local_30;
  if ((local_28 == '\x01') && (local_38 != (longlong *)0x0)) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147766948 FUN_147766948 body=207 status=ok
// SIG undefined FUN_147766948(void)

bool FUN_147766948(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,local_40,0);
    plVar3 = local_40[0];
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_30 = 0;
    FUN_147766a18(local_40);
    local_30 = '\x01';
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18),local_40);
    if ((local_30 == '\x01') && (local_40[0] != (longlong *)0x0)) {
      (**(code **)(*local_40[0] + 0x10))();
    }
  }
  if ((plVar3 != (longlong *)0x0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147766a18 FUN_147766a18 body=94 status=ok
// SIG undefined FUN_147766a18(void)

undefined8 FUN_147766a18(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(local_28);
  FUN_14023423e(param_1,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147766a78 FUN_147766a78 body=98 status=ok
// SIG undefined FUN_147766a78(void)

void FUN_147766a78(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147766ada FUN_147766ada body=369 status=ok
// SIG undefined FUN_147766ada(void)

longlong *
FUN_147766ada(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a545150;
  plVar1 = plVar4 + 2;
  FUN_146aa32ea(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_147766c74(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147766bdf;
    param_1[1] = 0;
LAB_147766ba2:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_147766bdf;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_147766bdf;
      goto LAB_147766ba2;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147766bdf;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_147766bdf:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x228;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147766c4c FUN_147766c4c body=9 status=ok
// SIG undefined FUN_147766c4c(void)

void FUN_147766c4c(longlong param_1)

{
  FUN_1429039b8(param_1 + 0x10);
  return;
}



// FUNCTION 147766c56 FUN_147766c56 body=29 status=ok
// SIG undefined FUN_147766c56(void)

undefined8 FUN_147766c56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147766c74 FUN_147766c74 body=167 status=ok
// SIG undefined FUN_147766c74(void)

void FUN_147766c74(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147766cef;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147766cef;
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
LAB_147766cef:
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
                    /* WARNING: Could not recover jumptable at 0x000147766d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147766d1c FUN_147766d1c body=324 status=ok
// SIG undefined FUN_147766d1c(void)

longlong * FUN_147766d1c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a540640;
  plVar4 = plVar3 + 2;
  FUN_146a8fe66(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_147766e8a(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147766df3;
    param_1[1] = 0;
LAB_147766dbd:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147766df3;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147766df3;
      goto LAB_147766dbd;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147766df3;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147766df3:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x220;
  FUN_140a52e78(*param_1,"SRadialBox",".\\Runtime/UMG/Private/Components/DynamicEntryBoxBase.cpp",
                0x11c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147766e62 FUN_147766e62 body=9 status=ok
// SIG undefined FUN_147766e62(void)

void FUN_147766e62(longlong param_1)

{
  FUN_1429064d6(param_1 + 0x10);
  return;
}



// FUNCTION 147766e6c FUN_147766e6c body=29 status=ok
// SIG undefined FUN_147766e6c(void)

undefined8 FUN_147766e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147766e8a FUN_147766e8a body=167 status=ok
// SIG undefined FUN_147766e8a(void)

void FUN_147766e8a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147766f05;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147766f05;
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
LAB_147766f05:
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
                    /* WARNING: Could not recover jumptable at 0x000147766f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147766f32 FUN_147766f32 body=107 status=ok
// SIG undefined FUN_147766f32(void)

void FUN_147766f32(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cab7860;
  if (param_1 <= (int)DAT_14cab7860) {
    iVar2 = 4;
    if (4 < DAT_14cab7860) {
      lVar5 = (longlong)(int)DAT_14cab7860;
      if (4 < DAT_14cab7864) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cab7864 = iVar2;
    FUN_147766f9e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cab7860);
}



// FUNCTION 147766f9e FUN_147766f9e body=142 status=ok
// SIG undefined FUN_147766f9e(void)

void FUN_147766f9e(int param_1,uint param_2)

{
  if (param_2 < 5) {
    if (DAT_14cab7858 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cab7838,DAT_14cab7858,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cab7858 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cab7858,0,param_2,8);
    memmove(DAT_14cab7858,&DAT_14cab7838,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cab7858,param_1,param_2,8);
  return;
}



// FUNCTION 14776702c FUN_14776702c body=1071 status=ok
// SIG undefined FUN_14776702c(void)

ulonglong FUN_14776702c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar16 = param_1 + 4;
  cVar6 = FUN_144729dda(plVar16);
  if (((((cVar6 != '\0') || (cVar6 = FUN_144729dda(param_1 + 5), cVar6 != '\0')) &&
       (lVar11 = *param_2, lVar11 != 0)) &&
      ((lVar8 = FUN_1405e2bf2(), lVar8 != 0 && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar11 + 0x38))))
      ) && ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30 && (*param_2 != 0)))) {
    lVar11 = param_1[3];
    local_a0 = param_1;
    local_90 = param_3;
    if ((longlong)(int)lVar11 != 0) {
      local_98 = param_1 + 2;
      lVar8 = param_1[2];
      lVar17 = 0;
      do {
        uVar12 = *(ulonglong *)(lVar8 + lVar17);
        lVar4 = *(longlong *)(uVar12 + 0x10);
        lVar10 = *param_2;
        if (((lVar10 == 0) || (lVar9 = FUN_1405e2bf2(), lVar9 == 0)) ||
           ((*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
             lVar9 + 0x30)))) {
          lVar10 = 0;
        }
        else {
          lVar10 = *param_2;
        }
        if (lVar4 == lVar10) {
          local_78 = uVar12;
          local_50 = uVar12;
          if ((uVar12 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(uVar12);
          }
          FUN_14776745c(local_98,&local_78,1);
          lVar11 = FUN_14479d2ce(plVar16);
          plVar16 = local_a0;
          if (uVar12 != 0) goto LAB_1477671a8;
          goto LAB_147767162;
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar17);
    }
    lVar11 = FUN_14479d2ce(plVar16);
LAB_147767162:
    plVar16 = local_a0;
    if (lVar11 == 0) {
      lVar17 = FUN_14479d2ce(local_a0 + 6);
      lVar8 = *param_2;
      if (lVar17 == 0) {
        local_68 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar14 = FUN_14479d2ce(plVar16 + 5);
        uVar12 = FUN_1412b606d(uVar14,&local_68,0);
      }
      else {
        local_60 = lVar8;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar12 = FUN_143335f3f(lVar17,&local_60,0);
      }
    }
    else {
      local_58 = *param_2;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uVar12 = FUN_143335ec0(lVar11,&local_58,0);
    }
    local_50 = uVar12;
    if (uVar12 != 0) {
LAB_1477671a8:
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      iVar3 = (int)plVar16[1];
      *(uint *)(plVar16 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar16 + 0xc) < iVar3 + 1U) {
        FUN_147702a74(plVar16,iVar3);
      }
      *(ulonglong *)(*plVar16 + (longlong)iVar3 * 8) = uVar12;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar12);
      }
      if (lVar11 != 0) {
        FUN_140760c2c(lVar11,&local_78);
        plVar15 = local_70;
        uVar5 = local_78;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        uVar12 = local_50;
        if (uVar5 == 0) goto LAB_1477670a2;
      }
      uVar7 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      puVar13 = (ulonglong *)FUN_1477675fa(plVar16 + 7,uVar7 >> 0x10 ^ uVar7,&local_50);
      uVar12 = local_50;
      if (*puVar13 != 0) goto LAB_1477670a2;
      local_88 = *local_90;
      local_80 = local_90[1];
      FUN_147767550(local_50,&local_78);
      plVar16 = local_70;
      if (local_70 == (longlong *)0x0) {
        *puVar13 = local_78;
        plVar15 = (longlong *)puVar13[1];
        if (plVar15 != (longlong *)0x0) {
          puVar13[1] = 0;
LAB_1477673f5:
          LOCK();
          plVar16 = plVar15 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
joined_r0x000147767420:
            if (iVar3 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        *puVar13 = local_78;
        plVar15 = (longlong *)puVar13[1];
        if (local_70 == plVar15) {
          LOCK();
          plVar15 = local_70 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
            plVar15 = plVar16;
            goto joined_r0x000147767420;
          }
        }
        else {
          puVar13[1] = (ulonglong)local_70;
          if (plVar15 != (longlong *)0x0) goto LAB_1477673f5;
        }
      }
      uVar12 = local_50;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_70 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          uVar12 = local_50;
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
            uVar12 = local_50;
          }
        }
      }
      goto LAB_1477670a2;
    }
  }
  uVar12 = 0;
LAB_1477670a2:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14776745c FUN_14776745c body=243 status=ok
// SIG undefined FUN_14776745c(void)

undefined8 FUN_14776745c(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar7 = 1;
    lVar6 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == lVar2) {
        if (iVar7 == 0) {
          return 0;
        }
        iVar5 = (int)param_1[1];
        iVar7 = iVar5 - iVar7;
        if (iVar7 != 0) {
          iVar8 = 1;
          if (iVar7 < 1) {
            iVar8 = iVar7;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar8) * 8),(longlong)iVar8 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        if (param_3 == '\x01') {
          FUN_147702afa(param_1);
          return 1;
        }
        return 1;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 147767550 FUN_147767550 body=166 status=ok
// SIG undefined FUN_147767550(void)

undefined8 * FUN_147767550(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  local_30 = param_3[1];
  FUN_1407616b4(param_1,&local_28,&local_38);
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
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477675fa FUN_1477675fa body=190 status=ok
// SIG undefined FUN_1477675fa(void)

longlong FUN_1477675fa(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14776769b;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1477676ba(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14776769b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1477676ba FUN_1477676ba body=302 status=ok
// SIG undefined FUN_1477676ba(void)

undefined4 *
FUN_1477676ba(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  FUN_147702648(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_14770272e(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
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
      FUN_147702896(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477677ea FUN_1477677ea body=168 status=ok
// SIG undefined FUN_1477677ea(void)

undefined8 *
FUN_1477677ea(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_147767894(param_2,&local_38,*param_3,&local_28);
  *param_1 = local_38;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147767894 FUN_147767894 body=315 status=ok
// SIG undefined FUN_147767894(void)

undefined8
FUN_147767894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_228 [32];
  undefined8 **local_208;
  undefined8 *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  undefined1 local_1d8 [424];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e0 = param_3;
  FUN_1417aa8de(local_1d8);
  plVar3 = local_28;
  local_30 = *param_4;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 8) = *(int *)((longlong)plVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar5 = (undefined8 *)*local_28;
      local_28 = plVar4;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar4 = local_28;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar4 = local_28;
      }
    }
  }
  local_28 = plVar4;
  local_200 = &local_1e0;
  local_208 = &local_200;
  FUN_1412240d2(local_1f8,"SObjectWidget","Runtime\\UMG\\Public\\Blueprint/UserWidgetPool.h",0x41);
  FUN_1410fb2a4(local_1f8,param_2,local_1d8);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_1417aa988(local_1d8);
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477679d0 FUN_1477679d0 body=38 status=ok
// SIG undefined FUN_1477679d0(void)

undefined8 FUN_1477679d0(undefined8 param_1,int param_2)

{
  FUN_140f715a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


