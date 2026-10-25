// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ddfe70 FUN_148ddfe70 body=172 status=ok
// SIG undefined FUN_148ddfe70(void)

undefined8 * FUN_148ddfe70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x428) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1447210f0();
  }
  FUN_1409e0c66(&local_28,uVar4);
  *param_2 = 0;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    iVar3 = (int)local_20[1];
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        break;
      }
      LOCK();
      iVar2 = (int)local_20[1];
      bVar5 = iVar3 == iVar2;
      if (bVar5) {
        *(int *)(local_20 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar5);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (param_2[1] != 0) {
      *param_2 = local_28;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ddff1e FUN_148ddff1e body=242 status=ok
// SIG undefined FUN_148ddff1e(void)

void FUN_148ddff1e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_2;
  if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 0x498))) goto LAB_148ddff43;
  if (*(char *)(param_1 + 0x450) == '\x04') {
    plVar4 = (longlong *)param_2[1];
    local_18 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      local_20 = lVar3;
      FUN_1442224dc(param_1,&local_20);
      goto LAB_148ddff43;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_20 = lVar3;
    FUN_1442224dc();
  }
  else {
    if (*(char *)(param_1 + 0x450) != '\x03') goto LAB_148ddff43;
    plVar4 = (longlong *)param_2[1];
    local_18 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      local_20 = lVar3;
      FUN_14422236e(param_1,&local_20);
      goto LAB_148ddff43;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_20 = lVar3;
    FUN_14422236e();
  }
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
LAB_148ddff43:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de0012 FUN_148de0012 body=122 status=ok
// SIG undefined FUN_148de0012(void)

void FUN_148de0012(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_144222288();
  if (*(longlong *)(param_1 + 0x428) != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar1 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        puVar4 = (undefined8 *)(param_1 + 0x500);
        lVar2 = FUN_144a61814(lVar1,puVar4);
        if (lVar2 != 0) {
          FUN_1405a424c(lVar1,*puVar4);
        }
        *puVar4 = 0;
      }
    }
  }
  return;
}



// FUNCTION 148de008c FUN_148de008c body=189 status=ok
// SIG undefined FUN_148de008c(void)

undefined2 * FUN_148de008c(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  FUN_140bc29bc(param_1 + 4,param_2 + 4);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    *(undefined4 *)(param_1 + 0x146) = *(undefined4 *)(param_2 + 0x146);
    *(undefined8 *)(param_2 + 0x144) = 0;
  }
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  FUN_140f85fd4(param_1 + 0x14c,param_2 + 0x14c);
  FUN_140f85fd4(param_1 + 0x174,param_2 + 0x174);
  *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 148de014a FUN_148de014a body=313 status=ok
// SIG undefined FUN_148de014a(void)

void FUN_148de014a(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined1 local_b0 [16];
  undefined2 local_a0 [2];
  undefined4 local_9c;
  code *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x428) != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0xcc);
        local_98 = FUN_148de07fa;
        local_90 = 0;
        FUN_148de062e(local_b0,param_1,&local_98);
        local_98 = (code *)0x0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,local_b0);
        local_58 = 1;
        local_b8 = local_a0;
        local_a0[0] = 1;
        local_9c = 0xbf800000;
        FUN_1406f4044(lVar2,param_1 + 0x500,&local_98,uVar1);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(local_b0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de0284 FUN_148de0284 body=913 status=ok
// SIG undefined FUN_148de0284(void)

void FUN_148de0284(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  undefined1 auStack_3c8 [32];
  undefined8 ***local_3a8 [3];
  ushort local_390;
  byte local_388;
  ulonglong local_380;
  longlong *local_378;
  undefined4 local_358;
  longlong local_100;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  cVar3 = *(char *)(param_1 + 0xe0);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_3c8);
  }
  if (cVar3 == '\x01') {
    plVar6 = (longlong *)FUN_148df7b53(param_1 + 0x4a8);
    plVar7 = plVar6 + 2;
    if (plVar6 != (longlong *)0x0) goto LAB_148de05b6;
LAB_148de035c:
    plVar6 = (longlong *)0x0;
LAB_148de035e:
    if (plVar7 != (longlong *)0x0) {
      local_380 = *(ulonglong *)(param_1 + 0x430);
      plVar4 = *(longlong **)(param_1 + 0x438);
      local_378 = plVar4;
      if (plVar4 == (longlong *)0x0) {
        FUN_148ddf7a0(plVar7,&local_380);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        FUN_148ddf7a0(plVar7);
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
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_1 + 0x448);
      *(longlong **)(param_1 + 0x440) = plVar7;
      *(longlong **)(param_1 + 0x448) = plVar6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      local_380 = local_380 & 0xffffffffffffff00;
      local_358 = 0;
      FUN_1456bb102(&local_380,*(undefined8 *)(param_1 + 0x428));
      FUN_1448729ea(param_1 + 0x378,local_3a8,&local_380);
      uVar9 = FUN_144a7ecd0(local_3a8);
      FUN_14020a6c0(param_1 + 200,uVar9);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_388 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar8 = local_3a8;
        if (0x18 < local_390) {
          ppppuVar8 = (undefined8 ****)local_3a8[0];
        }
        (*pcVar5)(ppppuVar8);
      }
      if (0x18 < local_390) {
        FUN_1400020a8(local_3a8[0]);
      }
      FUN_144a5ac3a(&local_380);
      local_380 = local_380 & 0xffffffffffffff00;
      local_358 = 0;
      FUN_1456bb102(&local_380,*(undefined8 *)(param_1 + 0x428));
      FUN_1448729ea(param_1 + 0x3c8,local_3a8,&local_380);
      uVar9 = FUN_144a7ecd0(local_3a8);
      FUN_14020a6c0(param_1 + 0xd4,uVar9);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_388 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar8 = local_3a8;
        if (0x18 < local_390) {
          ppppuVar8 = (undefined8 ****)local_3a8[0];
        }
        (*pcVar5)(ppppuVar8);
      }
      if (0x18 < local_390) {
        FUN_1400020a8(local_3a8[0]);
      }
      FUN_144a5ac3a(&local_380);
      goto LAB_148de0566;
    }
  }
  else {
    if (cVar3 == '\x02') {
      plVar6 = (longlong *)FUN_14001cc68(0x48);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_14b99ebc0;
      plVar7 = plVar6 + 2;
      plVar6[3] = 0;
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[7] = 0;
      plVar6[8] = 0;
      plVar6[2] = (longlong)&PTR_FUN_14b99ebe0;
      if (plVar6 == (longlong *)0x0) goto LAB_148de035c;
LAB_148de05b6:
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_148de035e;
    }
    plVar6 = (longlong *)0x0;
  }
  memset(&local_380,0,0x348);
  FUN_145926a7c(&local_380);
  FUN_148de008c(param_1 + 0xe0,&local_380);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  local_378 = (longlong *)0x0;
  FUN_14076ba36();
LAB_148de0566:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148de062e FUN_148de062e body=457 status=ok
// SIG undefined FUN_148de062e(void)

longlong * FUN_148de062e(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar6 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *puVar6 = &PTR_LAB_14a1c8830;
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
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b99ec00;
    puVar6[3] = local_48;
    puVar6[4] = 0;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar4;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *puVar6 = &PTR_LAB_14a1c8830;
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
    puVar6[2] = lVar8;
    *puVar6 = &PTR_FUN_14b99ec00;
    puVar6[3] = local_48;
    puVar6[4] = local_40;
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar4;
    puVar6[5] = uVar5;
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de07fa FUN_148de07fa body=338 status=ok
// SIG undefined FUN_148de07fa(void)

void FUN_148de07fa(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  undefined7 uVar7;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *(longlong *)(param_1 + 0x440);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = 0;
  uStack_30 = 0;
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,3);
  if (*(char *)(param_1 + 0x370) == '\0') {
    FUN_148ddfb5a(lVar8,param_1 + 0xa8,&local_38);
LAB_148de08ed:
    if ((longlong)(int)uStack_30 != 0) {
      lVar9 = (longlong)(int)uStack_30 << 4;
      lVar8 = local_38 + 8;
      do {
        cVar3 = FUN_148de0960(param_1);
        if (cVar3 == '\0') {
          uVar6 = CONCAT71(uVar7,5);
          goto LAB_148de083f;
        }
        uVar5 = FUN_14479d2ce(lVar8);
        cVar3 = FUN_144222ebe(param_1,*(undefined8 *)(lVar8 + -8),uVar5);
        if (cVar3 != '\0') {
          FUN_148de0a28(param_1);
        }
        lVar8 = lVar8 + 0x10;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      goto LAB_148de0849;
    }
  }
  else if (*(char *)(param_1 + 0x370) == '\x01') {
    local_48 = 0;
    uStack_40 = 0;
    cVar3 = FUN_148ddfac0(lVar8,param_1 + 0xa8);
    uVar2 = uStack_30;
    if (cVar3 != '\0') {
      lVar8 = (longlong)(int)uStack_30;
      uVar4 = (int)uStack_30 + 1;
      uStack_30 = CONCAT44(uStack_30._4_4_,uVar4);
      if (uStack_30._4_4_ < uVar4) {
        FUN_148df759a(&local_38,uVar2 & 0xffffffff);
      }
      puVar1 = (undefined4 *)(local_38 + lVar8 * 0x10);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
    }
    goto LAB_148de08ed;
  }
LAB_148de083f:
  FUN_1442226ca(param_1,uVar6 & 0xffffffff);
LAB_148de0849:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148de0960 FUN_148de0960 body=73 status=ok
// SIG undefined FUN_148de0960(void)

bool FUN_148de0960(longlong param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  float extraout_XMM0_Da;
  
  cVar1 = FUN_1403ae288(param_1 + 0x4d0);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    uVar3 = FUN_140280ec4(param_1 + 0x4d0);
    uVar3 = FUN_144a87362(uVar3);
    FUN_143d46ea6(uVar3);
    bVar2 = *(float *)(param_1 + 0xd8) <= extraout_XMM0_Da;
  }
  return bVar2;
}



// FUNCTION 148de09aa FUN_148de09aa body=66 status=ok
// SIG undefined FUN_148de09aa(void)

undefined8 FUN_148de09aa(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1403ae288(param_1 + 0x4d0);
  if (cVar1 != '\0') {
    uVar2 = FUN_140280ec4(param_1 + 0x4d0);
    uVar2 = FUN_144a87362(uVar2);
    uVar2 = FUN_141362ac2(uVar2,2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148de09ec FUN_148de09ec body=59 status=ok
// SIG undefined FUN_148de09ec(void)

void FUN_148de09ec(longlong param_1)

{
  if ((*(byte *)(param_1 + -0x40) & 2) != 0) {
    FUN_1442226ca(param_1 + -0x70,0);
    if ((*(char *)(param_1 + -8) == '\x01') && (*(longlong *)(param_1 + -0x20) != 0)) {
      FUN_1418ac434(*(longlong *)(param_1 + -0x20),param_1 + -0x10);
      *(undefined1 *)(param_1 + -8) = 0;
    }
  }
  return;
}



// FUNCTION 148de0a28 FUN_148de0a28 body=100 status=ok
// SIG undefined FUN_148de0a28(void)

void FUN_148de0a28(longlong param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  
  fVar1 = *(float *)(param_1 + 0xd8);
  cVar2 = FUN_1403ae288(param_1 + 0x4d0);
  if (cVar2 != '\0') {
    lVar3 = FUN_14008e0ae(param_1 + 0x4d0);
    FUN_1409d461e(lVar3,(*(float *)(lVar3 + 200) + *(float *)(lVar3 + 0x120)) - fVar1,1);
    return;
  }
  return;
}



// FUNCTION 148de0a98 FUN_148de0a98 body=61 status=ok
// SIG undefined FUN_148de0a98(void)

void FUN_148de0a98(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x38) * 0x68;
    lVar2 = *(longlong *)(param_1 + 0x30) + 0x28;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x68;
      lVar1 = lVar1 + -0x68;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148de0ad6 FUN_148de0ad6 body=183 status=ok
// SIG undefined FUN_148de0ad6(void)

void FUN_148de0ad6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148de0b8e(param_1,&local_28);
  if ((*(byte *)(local_28 + 0x30) & 2) != 0) {
    FUN_1442226ca(local_28,1);
    FUN_148bbbc64(local_28 + 0xe0,param_2);
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
  if (*(longlong *)(param_2 + 0x280) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_2 + 8) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14076ba36(param_2 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de0b8e FUN_148de0b8e body=144 status=ok
// SIG undefined FUN_148de0b8e(void)

undefined8 * FUN_148de0b8e(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 148de0c22 FUN_148de0c22 body=32 status=ok
// SIG undefined FUN_148de0c22(void)

undefined8 FUN_148de0c22(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Is Busy In Menu");
  return param_2;
}



// FUNCTION 148de0c42 FUN_148de0c42 body=407 status=ok
// SIG undefined FUN_148de0c42(void)

longlong * FUN_148de0c42(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x5d8))(plVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_144a5dd5e();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        lVar5 = FUN_1402a1246(lVar5);
        if (lVar5 != 0) {
          cVar2 = *(char *)(lVar5 + 0x1350);
          plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14b99ec90;
          plVar4 = plVar7 + 2;
          plVar7[3] = 0;
          plVar7[4] = 0;
          *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
          *(char *)(plVar7 + 7) = cVar2 * '\x02';
          plVar7[2] = (longlong)&PTR_FUN_14b99ecb0;
          local_70 = plVar4;
          local_68 = plVar7;
          FUN_148df812c(&local_70,plVar4);
          local_60 = &LAB_148de0dda;
          local_58 = 0;
          FUN_148df81d4(local_50,&local_70);
          FUN_14112c702(lVar5 + 0x1338,&local_60,local_50);
          FUN_1449db362(local_50);
          plVar3 = local_68;
          *param_2 = (longlong)plVar4;
          param_2[1] = (longlong)plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_68 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_68)(local_68);
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
          if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_2;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 148de0de6 FUN_148de0de6 body=32 status=ok
// SIG undefined FUN_148de0de6(void)

undefined8 FUN_148de0de6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Is Using Gadget");
  return param_2;
}



// FUNCTION 148de0e06 FUN_148de0e06 body=521 status=ok
// SIG undefined FUN_148de0e06(void)

undefined8 FUN_148de0e06(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  wchar_t *local_c0;
  char local_b8;
  wchar_t local_b0 [50];
  wchar_t local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = FUN_148b8fef5();
  local_d0 = local_b0;
  local_b8 = '\0';
  local_c0 = local_4c;
  local_c8 = local_d0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    builtin_wcsncpy(local_b0,L"NOT (",5);
    local_c8 = local_b0 + 5;
  }
  builtin_wcsncpy(local_c8,L"Fight For Your Life: ",0x15);
  local_c8 = local_c8 + 0x15;
  iVar1 = *(int *)(param_1 + 0x20);
  local_e8 = param_2;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = L'[';
      local_c8 = local_c8 + 1;
      FUN_1401cfad2(uVar4,&local_e0,*(undefined1 *)(lVar2 + lVar5));
      iVar3 = local_d8 + -1;
      if (local_d8 == 0) {
        iVar3 = 0;
      }
      FUN_1449668a2(&local_d0,local_e0,iVar3);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = L']';
      local_c8 = local_c8 + 1;
      lVar5 = lVar5 + 1;
    } while (iVar1 != lVar5);
  }
  uVar4 = local_e8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (local_c0 <= local_c8 + 1) {
      FUN_140213274(&local_d0,1);
    }
    *local_c8 = L')';
    local_c8 = local_c8 + 1;
  }
  *local_c8 = L'\0';
  FUN_140056680(uVar4,local_d0);
  if (local_b8 == '\x01') {
    FUN_1400020a8(local_d0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148de1010 FUN_148de1010 body=123 status=ok
// SIG undefined FUN_148de1010(void)

undefined8 FUN_148de1010(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 0x10,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Is Using Interactible [%s]",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148de10a0 FUN_148de10a0 body=32 status=ok
// SIG undefined FUN_148de10a0(void)

undefined8 FUN_148de10a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Is Loading Screen active");
  return param_2;
}



// FUNCTION 148de10c0 FUN_148de10c0 body=68 status=ok
// SIG undefined FUN_148de10c0(void)

undefined8 FUN_148de10c0(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = L"INVALID";
  if (*(char *)(param_1 + 0x10) == '\x01') {
    pwVar1 = L"Is Reviving Other";
  }
  pwVar2 = L"Is Carrying";
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar2 = pwVar1;
  }
  FUN_140002266(param_2,L"Oak Character Condition: %s",pwVar2);
  return param_2;
}



// FUNCTION 148de1104 FUN_148de1104 body=32 status=ok
// SIG undefined FUN_148de1104(void)

undefined8 FUN_148de1104(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Oak Character Health Condition");
  return param_2;
}



// FUNCTION 148de1124 FUN_148de1124 body=1105 status=ok
// SIG undefined FUN_148de1124(void)

undefined8 FUN_148de1124(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  int local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  wchar_t *local_a0;
  char local_98;
  wchar_t local_90 [50];
  wchar_t local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = local_90;
  local_98 = '\0';
  local_a0 = local_2c;
  builtin_wcsncpy(local_90 + 0x10,L"ent: [",6);
  builtin_wcsncpy(local_90 + 8,L"er Movem",8);
  builtin_wcsncpy(local_90,L"Oak Play",8);
  local_a8 = local_90 + 0x16;
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar3 = 0;
  if ((uVar1 & 1) != 0) {
    FUN_140056680(&local_c0,L"GroundSlamming");
    iVar4 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar4 = iVar3;
    }
    FUN_1449668a2(&local_b0,local_c0,iVar4);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    iVar3 = 1;
  }
  cVar2 = (char)iVar3;
  if ((uVar1 & 2) != 0) {
    FUN_140056680(&local_c0,L"Dashing");
    if (cVar2 != '\0') {
      if (local_a0 <= local_a8 + 1) {
        FUN_140213274(&local_b0,1);
      }
      *local_a8 = L'+';
      local_a8 = local_a8 + 1;
    }
    iVar3 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar3 = 0;
    }
    FUN_1449668a2(&local_b0,local_c0,iVar3);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    cVar2 = '\x01';
  }
  if ((uVar1 & 4) != 0) {
    FUN_140056680(&local_c0,L"Gliding");
    if (cVar2 != '\0') {
      if (local_a0 <= local_a8 + 1) {
        FUN_140213274(&local_b0,1);
      }
      *local_a8 = L'+';
      local_a8 = local_a8 + 1;
    }
    iVar3 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar3 = 0;
    }
    FUN_1449668a2(&local_b0,local_c0,iVar3);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    cVar2 = '\x01';
  }
  if ((uVar1 & 8) != 0) {
    FUN_140056680(&local_c0,L"Zooming");
    if (cVar2 != '\0') {
      if (local_a0 <= local_a8 + 1) {
        FUN_140213274(&local_b0,1);
      }
      *local_a8 = L'+';
      local_a8 = local_a8 + 1;
    }
    iVar3 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar3 = 0;
    }
    FUN_1449668a2(&local_b0,local_c0,iVar3);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    cVar2 = '\x01';
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_140056680(&local_c0,L"Moving");
    if (cVar2 != '\0') {
      if (local_a0 <= local_a8 + 1) {
        FUN_140213274(&local_b0,1);
      }
      *local_a8 = L'+';
      local_a8 = local_a8 + 1;
    }
    iVar3 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar3 = 0;
    }
    FUN_1449668a2(&local_b0,local_c0,iVar3);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    cVar2 = '\x01';
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_140056680(&local_c0,L"Grappling");
    if (cVar2 != '\0') {
      if (local_a0 <= local_a8 + 1) {
        FUN_140213274(&local_b0,1);
      }
      *local_a8 = L'+';
      local_a8 = local_a8 + 1;
    }
    iVar3 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar3 = 0;
    }
    FUN_1449668a2(&local_b0,local_c0,iVar3);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    cVar2 = '\x01';
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_140056680(&local_c0,L"Carrying");
    if (cVar2 != '\0') {
      if (local_a0 <= local_a8 + 1) {
        FUN_140213274(&local_b0,1);
      }
      *local_a8 = L'+';
      local_a8 = local_a8 + 1;
    }
    iVar3 = local_b8 + -1;
    if (local_b8 == 0) {
      iVar3 = 0;
    }
    FUN_1449668a2(&local_b0,local_c0,iVar3);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_a0 <= local_a8 + 1) {
    FUN_140213274(&local_b0,1);
  }
  *local_a8 = L']';
  local_a8[1] = L'\0';
  local_a8 = local_a8 + 1;
  FUN_140056680(param_2,local_b0);
  if (local_98 == '\x01') {
    FUN_1400020a8(local_b0);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de1576 FUN_148de1576 body=32 status=ok
// SIG undefined FUN_148de1576(void)

undefined8 FUN_148de1576(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Is Cinematic active (For Realz)");
  return param_2;
}



// FUNCTION 148de1596 FUN_148de1596 body=568 status=ok
// SIG undefined FUN_148de1596(void)

undefined8 FUN_148de1596(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  size_t sVar4;
  wchar_t *_Str;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  wchar_t *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  char local_b8;
  wchar_t local_b0 [17];
  undefined8 local_8e [8];
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = local_b0;
  local_b8 = '\0';
  local_c0 = (undefined8 *)local_4c;
  builtin_wcsncpy(local_b0 + 8,L"quipped: ",9);
  builtin_wcsncpy(local_b0,L"Weapon E",8);
  local_c8 = local_8e;
  if ((ulonglong)*(byte *)(param_1 + 0x10) < 7) {
    _Str = (wchar_t *)(&PTR_DAT_14b9a0b78)[*(byte *)(param_1 + 0x10)];
  }
  else {
    _Str = L"INVALID";
  }
  sVar4 = wcslen(_Str);
  FUN_1449668a2(&local_d0,_Str,sVar4 & 0xffffffff);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if (local_c0 <= local_c8 + 1) {
      FUN_140213274(&local_d0,4);
    }
    *local_c8 = 0x5b0020002d0020;
    local_c8 = local_c8 + 1;
    iVar1 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar5 = 0;
      bVar3 = false;
      do {
        if (bVar3) {
          if (local_c0 <= (undefined8 *)((longlong)local_c8 + 4)) {
            FUN_140213274(&local_d0,2);
          }
          *(undefined4 *)local_c8 = 0x20002c;
          local_c8 = (undefined8 *)((longlong)local_c8 + 4);
        }
        local_e8 = *(undefined8 *)(lVar2 + lVar5);
        FUN_1400021e4(&local_e8,&local_e0);
        iVar6 = local_d8 + -1;
        if (local_d8 == 0) {
          iVar6 = 0;
        }
        FUN_1449668a2(&local_d0,local_e0,iVar6);
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        lVar5 = lVar5 + 0x18;
        bVar3 = true;
      } while ((longlong)iVar1 * 0x18 != lVar5);
    }
    if (local_c0 <= (undefined8 *)((longlong)local_c8 + 2)) {
      FUN_140213274(&local_d0,1);
    }
    *(undefined2 *)local_c8 = 0x5d;
    local_c8 = (undefined8 *)((longlong)local_c8 + 2);
  }
  *(undefined2 *)local_c8 = 0;
  FUN_140056680(param_2,local_d0);
  if (local_b8 == '\x01') {
    FUN_1400020a8(local_d0);
  }
  if ((local_4c._4_8_ ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148de17d0 FUN_148de17d0 body=32 status=ok
// SIG undefined FUN_148de17d0(void)

undefined8 FUN_148de17d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"WeaponAmmo");
  return param_2;
}



// FUNCTION 148de17f0 FUN_148de17f0 body=291 status=ok
// SIG undefined FUN_148de17f0(void)

undefined8 FUN_148de17f0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  wchar_t *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  char local_88;
  wchar_t local_80 [50];
  wchar_t local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_80;
  local_88 = '\0';
  local_90 = local_1c;
  builtin_wcsncpy(local_80 + 10,L"ion:",4);
  builtin_wcsncpy(local_80,L"Weapon Act",10);
  local_98 = local_80 + 0xe;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    builtin_wcsncpy(local_80 + 0xe,L" (Reloading)",0xc);
    local_98 = local_80 + 0x1a;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    builtin_wcsncpy(local_98,L" (Zoomed)",9);
    local_98 = local_98 + 9;
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    if (local_90 <= local_98 + 8) {
      FUN_140213274(&local_a0,8);
    }
    builtin_wcsncpy(local_98,L" (Using)",8);
    local_98 = local_98 + 8;
  }
  *local_98 = L'\0';
  FUN_140056680(param_2,local_a0);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de1914 FUN_148de1914 body=40 status=ok
// SIG undefined FUN_148de1914(void)

void FUN_148de1914(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_148de4c28(param_1 + 0x40);
  if (cVar1 == '\0') {
    return;
  }
  FUN_145813b9c(param_1);
  return;
}



// FUNCTION 148de193c FUN_148de193c body=32 status=ok
// SIG undefined FUN_148de193c(void)

undefined8 FUN_148de193c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Using Underbarrel");
  return param_2;
}



// FUNCTION 148de195c FUN_148de195c body=32 status=ok
// SIG undefined FUN_148de195c(void)

undefined8 FUN_148de195c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Offhand Locked");
  return param_2;
}



// FUNCTION 148de197c FUN_148de197c body=32 status=ok
// SIG undefined FUN_148de197c(void)

undefined8 FUN_148de197c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Action Skill Locked");
  return param_2;
}



// FUNCTION 148de199c FUN_148de199c body=32 status=ok
// SIG undefined FUN_148de199c(void)

undefined8 FUN_148de199c(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Is Seamless Travelling");
  return param_2;
}



// FUNCTION 148de19bc FUN_148de19bc body=89 status=ok
// SIG undefined FUN_148de19bc(void)

void FUN_148de19bc(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (lVar3 != 0) {
      lVar3 = FUN_14130060e(DAT_14cb0d2b0,lVar3);
      uVar4 = *(undefined1 *)(lVar3 + 0x80);
      goto LAB_148de1a07;
    }
  }
  uVar4 = 0;
LAB_148de1a07:
  FUN_1402a7054(param_1,uVar4);
  return;
}



// FUNCTION 148de1a16 FUN_148de1a16 body=32 status=ok
// SIG undefined FUN_148de1a16(void)

undefined8 FUN_148de1a16(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Is Teleporting");
  return param_2;
}



// FUNCTION 148de1a36 FUN_148de1a36 body=295 status=ok
// SIG undefined FUN_148de1a36(void)

undefined8 FUN_148de1a36(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = FUN_1489877b3(*(undefined1 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = FUN_1406eea5e();
    uVar3 = FUN_14477b664(uVar3);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  FUN_14686b592(param_1 + 0x10,&local_50);
  puVar4 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar4 = local_50;
  }
  FUN_1400021e4(param_1 + 0x10,&local_60);
  puVar5 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar5 = local_60;
  }
  FUN_140002266(&local_70,L"(\"%s\",\"%s\")",puVar5,puVar4);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_70;
  if (local_68 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_78 = uVar1;
  FUN_140002266(param_2,L"Token Stack \'%s\' %s %i",puVar4,uVar2);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148de1b5e FUN_148de1b5e body=54 status=ok
// SIG undefined FUN_148de1b5e(void)

undefined8 FUN_148de1b5e(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"not ";
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar1 = L"";
  }
  FUN_140002266(param_2,L"Is %sdriving a vehicle",pwVar1);
  return param_2;
}



// FUNCTION 148de1b9a FUN_148de1b9a body=255 status=ok
// SIG undefined FUN_148de1b9a(void)

void FUN_148de1b9a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint local_50;
  uint local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = FUN_143880244();
  lVar3 = FUN_144a8069e(uVar2);
  if (((lVar3 != 0) && (lVar3 = FUN_1458b3d24(lVar3), lVar3 != 0)) &&
     (FUN_143888b1a(param_1,&local_58,param_2), local_48 < local_50)) {
    do {
      lVar4 = FUN_14030a32e((longlong)(int)local_48 * 0x38 + local_58);
      if ((longlong)*(int *)(lVar3 + 0x238) != 0) {
        lVar6 = *(longlong *)(lVar3 + 0x230);
        lVar5 = (longlong)*(int *)(lVar3 + 0x238) << 5;
        do {
          if (*(longlong *)(lVar6 + 0x10) == lVar4) {
            if ((lVar6 == 0) == (bool)*(char *)(lVar1 + 0x80)) goto LAB_148de1c6e;
            goto LAB_148de1c66;
          }
          lVar6 = lVar6 + 0x20;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
      }
      if (*(char *)(lVar1 + 0x80) == '\0') {
LAB_148de1c66:
        FUN_143888b08(&local_58);
      }
LAB_148de1c6e:
      local_48 = local_48 + 1;
      FUN_143888ae0(&local_58);
    } while (local_48 < local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148de1caa FUN_148de1caa body=788 status=ok
// SIG undefined FUN_148de1caa(void)

longlong * FUN_148de1caa(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(*param_3 + 0x28);
  if (lVar4 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    if (lVar9 == 0) {
      uVar8 = FUN_145cdcf34();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x10) = lVar9;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (lVar10 != 0) {
LAB_148de1d86:
      if (lVar9 == 0) {
        uVar8 = FUN_145cdcf34();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x10) = lVar9;
        lVar10 = *(longlong *)(param_1 + 0x18);
        if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar1 != 0)) {
          plVar5 = *(longlong **)(lVar9 + 0xb8);
          if (plVar5 == (longlong *)0x0) {
LAB_148de1fb8:
            lVar10 = 0;
          }
          else {
            cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5);
            if (cVar7 == '\0') goto LAB_148de1fb8;
            uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar10 = FUN_144aff482(uVar8,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar10;
        }
      }
      FUN_148de1fc0(lVar4,&local_50,lVar10);
      if (local_50 == 0) {
LAB_148de1e2e:
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        cVar7 = FUN_1442160ee(local_50);
        if (cVar7 == '\0') goto LAB_148de1e2e;
        cVar7 = FUN_144216794(local_50,1,1);
        plVar1 = local_48;
        if (cVar7 == '\0') goto LAB_148de1e2e;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
        lVar4 = param_3[1];
        plVar5 = (longlong *)param_3[2];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        plVar11 = (longlong *)FUN_14001cc68(0x60,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14b99ff90;
        plVar3 = plVar11 + 2;
        FUN_148985ee8(plVar3);
        plVar11[2] = (longlong)&PTR_LAB_14b99ffd0;
        plVar11[8] = lVar4;
        plVar11[9] = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        plVar11[2] = (longlong)&PTR_FUN_14b99ffb0;
        plVar11[10] = local_50;
        plVar11[0xb] = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
        }
        local_60 = plVar3;
        local_58 = plVar11;
        FUN_148dfcf8a(&local_60,plVar3);
        plVar6 = local_58;
        *param_2 = (longlong)plVar3;
        param_2[1] = (longlong)plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_58 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_58)(local_58);
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
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      if (local_48 == (longlong *)0x0) {
LAB_148de1e60:
        if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_148de1e60;
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_148de1e60;
      (**(code **)(*local_48 + 0x10))(local_48);
      goto LAB_148de1d62;
    }
    if ((lVar9 != 0) && (*plVar1 != 0)) {
      plVar5 = *(longlong **)(lVar9 + 0xb8);
      if (plVar5 != (longlong *)0x0) {
        cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar7 != '\0') {
          uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar10 = FUN_144aff482(uVar8,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar10;
          if (lVar10 != 0) {
            lVar9 = *(longlong *)(param_1 + 0x10);
            goto LAB_148de1d86;
          }
          goto LAB_148de1d5c;
        }
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
LAB_148de1d5c:
  *param_2 = 0;
  param_2[1] = 0;
LAB_148de1d62:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 148de1fc0 FUN_148de1fc0 body=170 status=ok
// SIG undefined FUN_148de1fc0(void)

undefined8 * FUN_148de1fc0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14897417a(param_1,&local_30);
  uVar4 = FUN_1465b2c96();
  cVar3 = FUN_1458b432a(param_1,uVar4,&local_30);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_30;
    param_2[1] = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de206c FUN_148de206c body=88 status=ok
// SIG undefined FUN_148de206c(void)

void FUN_148de206c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    local_18 = *(undefined8 *)(param_3 + 4);
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    FUN_148dfd032(param_1 + 0x6e88,param_2,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de20c6 FUN_148de20c6 body=305 status=ok
// SIG undefined FUN_148de20c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148de20c6(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar3 = FUN_14113f0c0(param_3);
  if (cVar3 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbd3190) && (FUN_144b3d300(&DAT_14cbd3190), DAT_14cbd3190 == -1)) {
      DAT_14cbd3180 = 0;
      _DAT_14cbd3188 = 0;
      atexit(FUN_1442234c9);
      _Init_thread_footer(&DAT_14cbd3190);
    }
    uVar2 = _DAT_14cbd3188;
    FUN_14602a519(DAT_14cbd3180,_DAT_14cbd3188 & 0xffffffff);
    uVar1 = _DAT_14cbd3188 >> 0x20;
    _DAT_14cbd3188 = _DAT_14cbd3188 & 0xffffffff00000000;
    if (((longlong)uVar2 < 0) && ((int)uVar1 != 0)) {
      FUN_148dfd42e();
    }
    FUN_148de21f8(param_1 + 0x10);
    if ((longlong)DAT_14cbd3188 != 0) {
      lVar6 = (longlong)DAT_14cbd3188 << 5;
      lVar5 = DAT_14cbd3180;
      do {
        cVar3 = FUN_144729dda(lVar5);
        if ((cVar3 != '\0') &&
           (((param_2 == 0 || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) ||
            (cVar3 = FUN_140e8a950(lVar5,param_2), cVar3 == '\0')))) {
          uVar4 = FUN_14479d2ce(lVar5);
          FUN_148c40576(param_3,uVar4);
        }
        lVar5 = lVar5 + 0x20;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 148de21f8 FUN_148de21f8 body=113 status=ok
// SIG undefined FUN_148de21f8(void)

void FUN_148de21f8(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != &DAT_14cbd3180) {
    FUN_14602a519(DAT_14cbd3180,DAT_14cbd3188);
    iVar1 = *(int *)(param_1 + 1);
    uVar2 = *param_1;
    DAT_14cbd3188 = iVar1;
    if (iVar1 != 0 || DAT_14cbd318c != 0) {
      FUN_148dfd46e(iVar1);
      FUN_148dfd4d1(DAT_14cbd3180,uVar2,iVar1);
      return;
    }
    DAT_14cbd318c = 0;
  }
  return;
}



// FUNCTION 148de226c FUN_148de226c body=130 status=ok
// SIG undefined FUN_148de226c(void)

void FUN_148de226c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1459bd676(param_1,&local_30);
  FUN_148de20c6(local_30,param_2,param_3);
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



// FUNCTION 148de2300 FUN_148de2300 body=207 status=ok
// SIG undefined FUN_148de2300(void)

void FUN_148de2300(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar5 = (**(code **)(*param_1 + 0x180))();
    FUN_1459bd504(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_148de226c(local_30,param_2,param_3);
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
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
          }
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



// FUNCTION 148de23e2 FUN_148de23e2 body=202 status=ok
// SIG undefined FUN_148de23e2(void)

undefined4 FUN_148de23e2(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar5 = (**(code **)(*param_1 + 0x180))();
    FUN_1459bd504(&local_28,uVar5);
    if (local_20 != (longlong *)0x0) {
      iVar4 = (int)local_20[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_20[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_20 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_20;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        uVar6 = 0;
        if ((local_28 != 0) && (*(longlong *)(local_28 + 0x28) != 0)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_28 + 0x28) + 0x18);
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148de24ae FUN_148de24ae body=45 status=ok
// SIG undefined FUN_148de24ae(void)

undefined4 *
FUN_148de24ae(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1447262c2(param_4);
  uVar1 = FUN_148de23e2(uVar2);
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 8) = 2;
  return param_2;
}



// FUNCTION 148de24dc FUN_148de24dc body=54 status=ok
// SIG undefined FUN_148de24dc(void)

void FUN_148de24dc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140e8a950(param_1 + 0x28);
  if (cVar1 != '\0') {
    FUN_141272f14(param_1 + 0x10,param_2);
    return;
  }
  return;
}



// FUNCTION 148de2512 FUN_148de2512 body=145 status=ok
// SIG undefined FUN_148de2512(void)

void FUN_148de2512(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    lVar3 = 0;
    do {
      if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_1457b808a(*(longlong *)(param_1 + 0x120),1,*(undefined8 *)(lVar2 + 0x10 + lVar3));
      }
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_148dfda40(param_1 + 0x110);
  }
  FUN_1407058ce(param_1);
  FUN_140705914(param_1);
  *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
  return;
}



// FUNCTION 148de25a4 FUN_148de25a4 body=514 status=ok
// SIG undefined FUN_148de25a4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148de25a4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) &&
     (*(char *)(param_2 + 0x5d30) != '\x02')) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x118);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      lVar3 = lVar4 << 5;
      lVar5 = lVar2;
      do {
        if (*(longlong *)(lVar5 + 0x10) == param_2) {
          if (lVar5 != 0) {
            if (*(char *)(param_1 + 300) == '\0') {
              iVar1 = *(int *)(lVar5 + 0x18);
            }
            else {
              iVar1 = *(int *)(lVar5 + 0x18);
              if (*(int *)(param_1 + 0x128) <= iVar1) goto LAB_148de25d6;
            }
            *(int *)(lVar5 + 0x18) = iVar1 + 1;
            FUN_140705884(param_1,lVar5);
            if (*(longlong *)(param_1 + 0x120) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_78);
            }
            goto LAB_148de25d6;
          }
          break;
        }
        lVar5 = lVar5 + 0x20;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    *(uint *)(param_1 + 0x118) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
      FUN_148c45746((longlong *)(param_1 + 0x110),iVar1);
      lVar2 = *(longlong *)(param_1 + 0x110);
    }
    lVar4 = lVar4 * 0x20;
    *(undefined8 *)(lVar2 + lVar4) = 0xffffffffffffffff;
    *(undefined4 *)(lVar2 + 8 + lVar4) = 0xffffffff;
    *(longlong *)(lVar2 + 0x10 + lVar4) = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    *(undefined4 *)(lVar2 + lVar4 + 0x18) = 1;
    FUN_1407058ce(param_1);
    FUN_140705914(param_1);
    *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      local_38[1] = 0;
      FUN_14485c47a(local_38 + 1,param_2);
      local_38[0] = *(longlong *)(param_1 + 0x120);
      if ((local_38[0] != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_50 = FUN_148de28f6;
      local_48 = 0;
      local_58 = local_38 + 1;
      FUN_148de27be(param_2 + 0x4e80,local_40,local_38);
      if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_1457b808a(*(longlong *)(param_1 + 0x120),0,param_2);
      }
    }
  }
LAB_148de25d6:
  if ((local_38[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148de27be FUN_148de27be body=310 status=ok
// SIG undefined FUN_148de27be(void)

undefined8
FUN_148de27be(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  lVar3 = *param_3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar4 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b99c200;
  local_50[1] = *param_5;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b9a0320;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,lVar3);
  *(undefined4 *)(puVar4 + 5) = uVar1;
  puVar4[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de28f6 FUN_148de28f6 body=94 status=ok
// SIG undefined FUN_148de28f6(void)

void FUN_148de28f6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de2a62 FUN_148de2a62 body=12 status=ok
// SIG undefined FUN_148de2a62(void)

void FUN_148de2a62(longlong param_1)

{
  FUN_148de25a4(param_1 + 0x120);
  return;
}



// FUNCTION 148de2a6e FUN_148de2a6e body=46 status=ok
// SIG undefined FUN_148de2a6e(void)

int FUN_148de2a6e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x238) != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x230) + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x238) * 0x20 != lVar2);
    return iVar1;
  }
  return 0;
}



// FUNCTION 148de2ad0 FUN_148de2ad0 body=7 status=ok
// SIG undefined FUN_148de2ad0(void)

undefined4 FUN_148de2ad0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x238);
}



// FUNCTION 148de2ad8 FUN_148de2ad8 body=12 status=ok
// SIG undefined FUN_148de2ad8(void)

void FUN_148de2ad8(longlong param_1)

{
  FUN_148de2512(param_1 + 0x120);
  return;
}



// FUNCTION 148de2ae4 FUN_148de2ae4 body=406 status=ok
// SIG undefined FUN_148de2ae4(void)

void FUN_148de2ae4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  longlong local_128 [14];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0 && param_1 != 0) {
    lVar3 = FUN_1447210f0(param_1);
    lVar4 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30)) {
      param_1 = 0;
    }
    lVar4 = FUN_144a2f878();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) && (lVar3 != 0))
       && (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
      cVar2 = FUN_1449ce97a(param_2);
      if (cVar2 == '\0') {
        lVar3 = FUN_14018ffce(param_1);
        if (lVar3 != 0) {
          local_128[0] = 0;
          local_128[1] = 0;
          FUN_140baf362(lVar3 + 0x3f0,local_128,0);
          plVar1 = local_128 + 2;
          local_b8 = 0;
          local_b0 = 0;
          uStack_ac = 0x80;
          uStack_a8 = 0xffffffff;
          uStack_a4 = 0;
          local_128[2] = 0;
          local_128[3] = 0;
          local_128[4] = 0;
          local_128[5] = 0;
          local_128[6] = 0;
          local_128[7] = 0;
          local_128[8] = 0;
          local_128[9] = 0;
          local_128[10] = 0;
          local_128[0xb] = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_60 = 0xf;
          local_58 = 1;
          local_54 = 0;
          uStack_4c = 0;
          FUN_14088c870(plVar1,local_128);
          FUN_148cce140(param_2,plVar1,1);
          FUN_140368b56(plVar1);
          if (local_128[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de2c7c FUN_148de2c7c body=120 status=ok
// SIG undefined FUN_148de2c7c(void)

void FUN_148de2c7c(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_38 = FUN_14477b664(uVar2);
  local_30 = param_2[2];
  bVar1 = FUN_14143e6c6(param_1,&local_40);
  *param_3 = bVar1 ^ 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de2cf6 FUN_148de2cf6 body=144 status=ok
// SIG undefined FUN_148de2cf6(void)

void FUN_148de2cf6(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    uVar2 = FUN_14119d0a4(lVar1);
    uVar3 = FUN_14001cc68(0x98,0x10);
    FUN_148de2d86(uVar3,param_2,param_4,param_3);
    FUN_140b1330e(uVar2,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),uVar3);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_14076ba36(param_2 + 0x20);
  return;
}



// FUNCTION 148de2d86 FUN_148de2d86 body=798 status=ok
// SIG undefined FUN_148de2d86(void)

undefined8 *
FUN_148de2d86(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b99ba40;
  lVar3 = *param_2;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,lVar3);
  param_1[2] = 0;
  lVar3 = param_2[1];
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  param_1[3] = 0;
  FUN_14485c47a(param_1 + 3,lVar3);
  lVar3 = param_2[2];
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  uVar8 = 0;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4,lVar3);
  *(undefined4 *)(param_1 + 5) = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  FUN_14485c47a((longlong)param_1 + 0x34,*(undefined8 *)(param_3 + 4));
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  FUN_145a25158(param_1 + 8,param_2 + 0x55);
  FUN_141857172(param_1 + 0xb,param_2 + 0x52);
  *(char *)(param_1 + 0xe) = (char)param_2[0x58];
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x2c1);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x2c2);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x2c3);
  *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0x2c4);
  *(undefined1 *)((longlong)param_1 + 0x75) = *(undefined1 *)((longlong)param_2 + 0x2c5);
  *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)((longlong)param_2 + 0x2c6);
  param_1[0xf] = param_4;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (*param_2 != 0) {
    uVar8 = FUN_14112c5dc();
  }
  FUN_14485c47a(param_1 + 2,uVar8);
  if (param_2[1] != 0) {
    cVar6 = FUN_140dbf4b8(param_2 + 3);
    if (cVar6 != '\0') {
      uVar11 = -(uint)(0.0 < *(float *)(param_2[1] + 0x74));
      *(uint *)((longlong)param_1 + 0x3c) =
           ~uVar11 & 0x3f800000 | (uint)(1.0 / *(float *)(param_2[1] + 0x74)) & uVar11;
      uVar8 = FUN_1447210f0(param_2[1]);
      FUN_1409e0c66(&local_58,uVar8);
      if (local_50 != (longlong *)0x0) {
        iVar7 = (int)local_50[1];
        do {
          if (iVar7 == 0) {
            plVar9 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)local_50[1];
          bVar10 = iVar7 == iVar5;
          if (bVar10) {
            *(int *)(local_50 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
          plVar9 = local_50;
        } while (!bVar10);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        if (plVar9 != (longlong *)0x0) {
          if (local_58 != 0) {
            local_68 = 0;
            FUN_140a41f04(local_58,&local_58,param_2[1],param_2 + 3);
            plVar2 = local_50;
            if (param_1 + 0x11 != &local_58) {
              param_1[0x11] = local_58;
              local_58 = 0;
              plVar4 = (longlong *)param_1[0x12];
              if (local_50 != plVar4) {
                local_50 = (longlong *)0x0;
                param_1[0x12] = plVar2;
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
              }
            }
            plVar2 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_50 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_50)(local_50);
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
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148de30a6 FUN_148de30a6 body=617 status=ok
// SIG undefined FUN_148de30a6(void)

void FUN_148de30a6(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0 && param_1 != 0) {
    uVar2 = FUN_140eca14a();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar4 != 0) {
        lVar5 = FUN_1403ca43f();
        local_b0 = local_b0 & 0xffffffffffffff00;
        uStack_88 = uStack_88 & 0xffffffff00000000;
        FUN_14575a19a(&local_b0,0);
        pfVar7 = &local_68;
        FUN_140168c66(lVar5 + 0x250,pfVar7,&local_b0);
        fVar8 = (float)FUN_144a7b41a(pfVar7,0);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar1 != (code *)0x0) {
          if (0x18 < local_50) {
            pfVar7 = (float *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar1)(pfVar7);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
        FUN_144a5ac3a(&local_b0);
        if (0.0 < fVar8) {
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_70 = 0;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_1);
          }
          local_a8 = param_1;
          lVar5 = FUN_1403ca43f();
          uVar6 = FUN_14095dd8e(lVar5 + 0x228);
          if ((uVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(uVar6);
          }
          local_50 = 4;
          local_48 = 3;
          local_b0 = uVar6;
          local_68 = fVar8;
          local_b8 = FUN_140c602de();
          if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_b8);
          }
          pfVar7 = &local_68;
          FUN_14095c1ce(&local_80,&local_b8,pfVar7,0);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
          if (pcVar1 != (code *)0x0) {
            if (0x18 < local_50) {
              pfVar7 = (float *)CONCAT44(uStack_64,local_68);
            }
            (*pcVar1)(pfVar7);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(CONCAT44(uStack_64,local_68));
          }
          FUN_143e46b86(lVar4,&local_b0);
          FUN_141435294(&local_b0);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de3310 FUN_148de3310 body=111 status=ok
// SIG undefined FUN_148de3310(void)

undefined4 FUN_148de3310(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  uVar4 = FUN_148de3380(0,param_2,&local_28);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de3380 FUN_148de3380 body=520 status=ok
// SIG undefined FUN_148de3380(void)

ulonglong FUN_148de3380(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  longlong lVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  undefined7 uVar11;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
LAB_148de33c9:
    bVar5 = true;
  }
  else {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) != lVar6 + 0x30)) goto LAB_148de33c9;
    bVar5 = false;
  }
  uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (param_2 != 0) {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (!bVar5 && *(longlong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
      lVar6 = FUN_1403ca43f();
      if (*(char *)(param_2 + 0x5d30) != '\x02') {
        lVar7 = FUN_1415c99d8(param_2 + 0x10b0);
        lVar3 = *(longlong *)(lVar6 + 0x278);
        if (lVar3 != 0) {
          if ((longlong)*(int *)(lVar7 + 0x80) != 0) {
            lVar12 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0x78) + lVar12) == lVar3) goto LAB_148de355f;
              lVar12 = lVar12 + 8;
            } while ((longlong)*(int *)(lVar7 + 0x80) * 8 != lVar12);
          }
          if ((longlong)*(int *)(lVar7 + 0x90) != 0) {
            lVar12 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0x88) + lVar12) == lVar3) goto LAB_148de355f;
              lVar12 = lVar12 + 8;
            } while ((longlong)*(int *)(lVar7 + 0x90) * 8 != lVar12);
          }
        }
        uVar8 = (**(code **)(*(longlong *)(param_2 + 0x10e0) + 0x50))(param_2 + 0x10e0);
        uVar9 = FUN_1458d5cdc();
        FUN_140d92a98(uVar8,&local_48,uVar9);
        plVar1 = local_40;
        if (&local_48 != param_3) {
          *param_3 = local_48;
          local_48 = 0;
          plVar4 = (longlong *)param_3[1];
          if (local_40 != plVar4) {
            local_40 = (longlong *)0x0;
            param_3[1] = (longlong)plVar1;
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
        }
        plVar1 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_40 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (*param_3 == 0) {
          uVar10 = 0;
        }
        else {
          lVar6 = FUN_145764230(*param_3,lVar6 + 0x280,0);
          uVar10 = CONCAT71(uVar11,lVar6 == param_1) ^ 3;
        }
      }
    }
  }
LAB_148de3407:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_148de355f:
  uVar10 = CONCAT71(uVar11,4);
  goto LAB_148de3407;
}



// FUNCTION 148de358a FUN_148de358a body=142 status=ok
// SIG undefined FUN_148de358a(void)

undefined8 FUN_148de358a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = FUN_148bc1e7b();
  FUN_1406f1d90(uVar2,local_30,uVar1);
  puVar3 = (undefined8 *)FUN_1447a1f4a(local_30);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  FUN_140002266(param_2,L"Character Movement Type: %s",puVar4);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de3620 FUN_148de3620 body=68 status=ok
// SIG undefined FUN_148de3620(void)

void FUN_148de3620(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = FUN_1410862f0(param_2);
    FUN_143ce0c78(lVar2,*(undefined4 *)(param_1 + 0x30),uVar1);
    return;
  }
  return;
}



// FUNCTION 148de36ce FUN_148de36ce body=191 status=ok
// SIG undefined FUN_148de36ce(void)

undefined8 FUN_148de36ce(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pwVar1 = L"Remove";
  if (*(char *)(param_1 + 0x30) == '\0') {
    pwVar1 = L"Add";
  }
  FUN_140056680(&local_30,pwVar1);
  FUN_14624635c(param_1 + 0x38,&local_40);
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  puVar2 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar2 = local_30;
  }
  FUN_140002266(param_2,L"%s %i Charge(s)",puVar2,puVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de378e FUN_148de378e body=164 status=ok
// SIG undefined FUN_148de378e(void)

void FUN_148de378e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1442241cd(&local_28,param_3);
  if ((local_28 != 0) && ((*(byte *)(local_28 + 0x30) & 2) != 0)) {
    iVar2 = *(int *)(local_28 + 0xe4);
    iVar3 = iVar2 - *(int *)(local_28 + 0xec);
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    if (0 < iVar3) {
      FUN_145884ed6(local_28,iVar3 + *(int *)(local_28 + 0xec));
    }
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



// FUNCTION 148de3844 FUN_148de3844 body=32 status=ok
// SIG undefined FUN_148de3844(void)

undefined8 FUN_148de3844(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14cbd3200);
  return param_2;
}



// FUNCTION 148de3864 FUN_148de3864 body=158 status=ok
// SIG undefined FUN_148de3864(void)

longlong * FUN_148de3864(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_148dfe782();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148dfe87c(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de3906 FUN_148de3906 body=42 status=ok
// SIG undefined FUN_148de3906(void)

void FUN_148de3906(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_148de3930();
  memset(_Dst,0,0x118);
  FUN_148bc0000(_Dst);
  return;
}



// FUNCTION 148de3930 FUN_148de3930 body=113 status=ok
// SIG undefined FUN_148de3930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148de3930(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbd32c8;
  if (DAT_14cbd32c8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x2300,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x23;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbd32c8;
    _DAT_14cbd32d0 = _DAT_14cbd32d0 + 0x20;
  }
  DAT_14cbd32c8 = (undefined8 *)*puVar2;
  _DAT_14cbd32d4 = _DAT_14cbd32d4 + 1;
  return;
}



// FUNCTION 148de39a2 FUN_148de39a2 body=44 status=ok
// SIG undefined FUN_148de39a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148de39a2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbd32d4 = _DAT_14cbd32d4 + -1;
  *param_1 = DAT_14cbd32c8;
  DAT_14cbd32c8 = param_1;
  return;
}



// FUNCTION 148de39ce FUN_148de39ce body=44 status=ok
// SIG undefined FUN_148de39ce(void)

void FUN_148de39ce(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x118);
  FUN_148bc0000(param_1);
  return;
}



// FUNCTION 148de3a2a FUN_148de3a2a body=47 status=ok
// SIG undefined FUN_148de3a2a(void)

void FUN_148de3a2a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 0x6c);
  iVar1 = (**(code **)(*param_1 + 0x30))();
  iVar2 = iVar2 - iVar1;
  if (-1 < iVar2) {
    return;
  }
  FUN_140d4ce5c(param_1,-iVar2);
  return;
}



// FUNCTION 148de3a5c FUN_148de3a5c body=95 status=ok
// SIG undefined FUN_148de3a5c(void)

void FUN_148de3a5c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *param_1 = *param_2;
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 1) != '\x01') goto LAB_148de3a70;
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
LAB_148de3a70:
  if (*(char *)(param_2 + 3) == '\x01') {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)(param_2 + 5) != '\x01') {
    if (*(char *)(param_1 + 5) == '\x01') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    return;
  }
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 148de3aca FUN_148de3aca body=38 status=ok
// SIG undefined FUN_148de3aca(void)

undefined8 FUN_148de3aca(undefined8 param_1,int param_2)

{
  FUN_148de66e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3af0 FUN_148de3af0 body=38 status=ok
// SIG undefined FUN_148de3af0(void)

undefined8 FUN_148de3af0(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3b1c FUN_148de3b1c body=38 status=ok
// SIG undefined FUN_148de3b1c(void)

undefined8 FUN_148de3b1c(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3b48 FUN_148de3b48 body=54 status=ok
// SIG undefined FUN_148de3b48(void)

longlong FUN_148de3b48(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3b80 FUN_148de3b80 body=38 status=ok
// SIG undefined FUN_148de3b80(void)

undefined8 FUN_148de3b80(undefined8 param_1,int param_2)

{
  FUN_1458748de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3ba6 FUN_148de3ba6 body=38 status=ok
// SIG undefined FUN_148de3ba6(void)

undefined8 FUN_148de3ba6(undefined8 param_1,int param_2)

{
  FUN_1458748de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3bce FUN_148de3bce body=68 status=ok
// SIG undefined FUN_148de3bce(void)

undefined8 * FUN_148de3bce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b99b6a0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1458748de(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3c14 FUN_148de3c14 body=124 status=ok
// SIG undefined FUN_148de3c14(void)

void FUN_148de3c14(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148de3c92 FUN_148de3c92 body=52 status=ok
// SIG undefined FUN_148de3c92(void)

void FUN_148de3c92(longlong *param_1)

{
  FUN_148de3cc6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148de3cc6 FUN_148de3cc6 body=89 status=ok
// SIG undefined FUN_148de3cc6(void)

void FUN_148de3cc6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148de3d20 FUN_148de3d20 body=29 status=ok
// SIG undefined FUN_148de3d20(void)

undefined8 FUN_148de3d20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3d3e FUN_148de3d3e body=76 status=ok
// SIG undefined FUN_148de3d3e(void)

undefined8 * FUN_148de3d3e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_148de3d8a();
  *param_2 = plVar3 + 2;
  param_2[1] = plVar3;
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



// FUNCTION 148de3d8a FUN_148de3d8a body=89 status=ok
// SIG undefined FUN_148de3d8a(void)

void FUN_148de3d8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99b710;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[2] = &PTR_FUN_14b7f22a0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x59) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x61) = 0;
  return;
}



// FUNCTION 148de3dee FUN_148de3dee body=29 status=ok
// SIG undefined FUN_148de3dee(void)

undefined8 FUN_148de3dee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3e12 FUN_148de3e12 body=38 status=ok
// SIG undefined FUN_148de3e12(void)

undefined8 FUN_148de3e12(undefined8 param_1,int param_2)

{
  FUN_145c6f15a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3e38 FUN_148de3e38 body=157 status=ok
// SIG undefined FUN_148de3e38(void)

undefined8 FUN_148de3e38(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar4 = param_1 + 0x90;
  cVar1 = FUN_14486ea84(lVar4);
  if (cVar1 != '\0') {
    FUN_141332d0e(param_2,param_1 + 0x58);
    uVar2 = FUN_140280ec4(lVar4);
    lVar3 = FUN_144a87362(uVar2);
    if (0.0 < *(float *)(lVar3 + 0x54)) {
      uVar2 = FUN_140280ec4(lVar4);
      uVar2 = FUN_144a87362(uVar2);
      fVar5 = (float)FUN_143d46ea6(uVar2);
      uVar2 = FUN_140280ec4(lVar4);
      lVar4 = FUN_144a87362(uVar2);
      *(float *)(param_2 + 4) = fVar5 / *(float *)(lVar4 + 0x54);
      *(undefined1 *)(param_2 + 8) = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148de3ed6 FUN_148de3ed6 body=195 status=ok
// SIG undefined FUN_148de3ed6(void)

undefined4 FUN_148de3ed6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14486ea84(param_1 + 0x90);
  if ((char)uVar1 != '\0') {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_148de3a5c(param_2);
    uVar2 = FUN_140280ec4(param_1 + 0x90);
    lVar3 = FUN_144a87362(uVar2);
    fVar5 = *(float *)(lVar3 + 0x30) - *(float *)(lVar3 + 0x24);
    fVar4 = 0.0;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      fVar4 = (*(float *)(lVar3 + 200) - *(float *)(lVar3 + 0x24)) / fVar5;
    }
    *(int *)(param_2 + 0x10) = (int)((1.0 - fVar4) * 100.0);
    *(undefined1 *)(param_2 + 0x14) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de3f9a FUN_148de3f9a body=45 status=ok
// SIG undefined FUN_148de3f9a(void)

longlong FUN_148de3f9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c6f15a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3fc8 FUN_148de3fc8 body=38 status=ok
// SIG undefined FUN_148de3fc8(void)

undefined8 FUN_148de3fc8(undefined8 param_1,int param_2)

{
  FUN_145c6f15a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de3fee FUN_148de3fee body=75 status=ok
// SIG undefined FUN_148de3fee(void)

undefined8 FUN_148de3fee(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_148de3a5c(param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de403a FUN_148de403a body=45 status=ok
// SIG undefined FUN_148de403a(void)

longlong FUN_148de403a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c6f15a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de406e FUN_148de406e body=81 status=ok
// SIG undefined FUN_148de406e(void)

undefined8 FUN_148de406e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de40c6 FUN_148de40c6 body=89 status=ok
// SIG undefined FUN_148de40c6(void)

bool FUN_148de40c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de4111;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de4111:
  return lVar6 == param_2;
}



// FUNCTION 148de413c FUN_148de413c body=118 status=ok
// SIG undefined FUN_148de413c(void)

void FUN_148de413c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b7f0;
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



// FUNCTION 148de41b2 FUN_148de41b2 body=118 status=ok
// SIG undefined FUN_148de41b2(void)

void FUN_148de41b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b7f0;
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



// FUNCTION 148de4228 FUN_148de4228 body=156 status=ok
// SIG undefined FUN_148de4228(void)

void FUN_148de4228(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99b7f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de42b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de42c4 FUN_148de42c4 body=104 status=ok
// SIG undefined FUN_148de42c4(void)

void FUN_148de42c4(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de4311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de4322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de432c FUN_148de432c body=101 status=ok
// SIG undefined FUN_148de432c(void)

ulonglong FUN_148de432c(longlong param_1)

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
LAB_148de4386:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148de4386;
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



// FUNCTION 148de4392 FUN_148de4392 body=68 status=ok
// SIG undefined FUN_148de4392(void)

undefined8 * FUN_148de4392(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99b880;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de43da FUN_148de43da body=81 status=ok
// SIG undefined FUN_148de43da(void)

undefined8 FUN_148de43da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de4432 FUN_148de4432 body=91 status=ok
// SIG undefined FUN_148de4432(void)

bool FUN_148de4432(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de4462;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de4462:
  return lVar6 == param_2;
}



// FUNCTION 148de44aa FUN_148de44aa body=118 status=ok
// SIG undefined FUN_148de44aa(void)

void FUN_148de44aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b880;
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



// FUNCTION 148de4520 FUN_148de4520 body=118 status=ok
// SIG undefined FUN_148de4520(void)

void FUN_148de4520(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b880;
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



// FUNCTION 148de4596 FUN_148de4596 body=156 status=ok
// SIG undefined FUN_148de4596(void)

void FUN_148de4596(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99b880;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de4622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de4632 FUN_148de4632 body=100 status=ok
// SIG undefined FUN_148de4632(void)

void FUN_148de4632(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de467e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de468b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de469a FUN_148de469a body=81 status=ok
// SIG undefined FUN_148de469a(void)

undefined8 FUN_148de469a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de46f2 FUN_148de46f2 body=89 status=ok
// SIG undefined FUN_148de46f2(void)

bool FUN_148de46f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de473d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de473d:
  return lVar6 == param_2;
}



// FUNCTION 148de474c FUN_148de474c body=118 status=ok
// SIG undefined FUN_148de474c(void)

void FUN_148de474c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9667e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b8f0;
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



// FUNCTION 148de47c2 FUN_148de47c2 body=118 status=ok
// SIG undefined FUN_148de47c2(void)

void FUN_148de47c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9667e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b8f0;
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



// FUNCTION 148de4838 FUN_148de4838 body=156 status=ok
// SIG undefined FUN_148de4838(void)

void FUN_148de4838(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9667e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99b8f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de48c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de48d4 FUN_148de48d4 body=104 status=ok
// SIG undefined FUN_148de48d4(void)

void FUN_148de48d4(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de4921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de4932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de493c FUN_148de493c body=68 status=ok
// SIG undefined FUN_148de493c(void)

undefined8 * FUN_148de493c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99b960;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de4984 FUN_148de4984 body=81 status=ok
// SIG undefined FUN_148de4984(void)

undefined8 FUN_148de4984(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de49dc FUN_148de49dc body=89 status=ok
// SIG undefined FUN_148de49dc(void)

bool FUN_148de49dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de4a27;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de4a27:
  return lVar6 == param_2;
}



// FUNCTION 148de4a36 FUN_148de4a36 body=118 status=ok
// SIG undefined FUN_148de4a36(void)

void FUN_148de4a36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99b9d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b960;
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



// FUNCTION 148de4aac FUN_148de4aac body=118 status=ok
// SIG undefined FUN_148de4aac(void)

void FUN_148de4aac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99b9d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99b960;
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



// FUNCTION 148de4b22 FUN_148de4b22 body=156 status=ok
// SIG undefined FUN_148de4b22(void)

void FUN_148de4b22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99b9d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99b960;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de4bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de4bbe FUN_148de4bbe body=104 status=ok
// SIG undefined FUN_148de4bbe(void)

void FUN_148de4bbe(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de4c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de4c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de4c28 FUN_148de4c28 body=118 status=ok
// SIG undefined FUN_148de4c28(void)

ulonglong FUN_148de4c28(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de4ca0 FUN_148de4ca0 body=86 status=ok
// SIG undefined FUN_148de4ca0(void)

undefined8 * FUN_148de4ca0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99ba40;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de4cf6 FUN_148de4cf6 body=351 status=ok
// SIG undefined FUN_148de4cf6(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_148de4cf6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if (*(float *)(*(longlong *)(param_1 + 0x88) + 0x178) <= 0.0) goto LAB_148de4d30;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  uVar6 = FUN_14479d2ce(param_1 + 0x18);
  uVar7 = FUN_14479d2ce(param_1 + 0x10);
  uVar4 = FUN_148de3380(uVar7,uVar6,&local_38);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar4) {
  case 0:
    goto switchD_148de4db1_caseD_0;
  default:
    FUN_148de4ed0(param_1,param_2);
    goto LAB_148de4e32;
  case 2:
    break;
  case 4:
    goto switchD_148de4db1_caseD_4;
  case 5:
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((local_38 == 0) || (lVar9 = *(longlong *)(local_38 + 0x30), lVar9 == 0)) {
LAB_148de4df3:
    lVar9 = 0;
  }
  else {
    lVar8 = FUN_1458d5cdc();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_148de4df3;
  }
  FUN_14485c47a(param_1 + 0x20,lVar9);
switchD_148de4db1_caseD_0:
  cVar5 = FUN_144729dda(param_1 + 0x20);
  if (cVar5 == '\0') {
switchD_148de4db1_caseD_4:
    FUN_148de4e6a(param_1,param_2);
  }
  else {
    cVar5 = FUN_148de4f36(param_1);
    if (cVar5 == '\0') goto switchD_148de4db1_caseD_4;
    FUN_148de574a(param_1,param_2);
  }
LAB_148de4e32:
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
LAB_148de4d30:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de4e6a FUN_148de4e6a body=101 status=ok
// SIG undefined FUN_148de4e6a(void)

void FUN_148de4e6a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x78) = 1;
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 148de4ed0 FUN_148de4ed0 body=101 status=ok
// SIG undefined FUN_148de4ed0(void)

void FUN_148de4ed0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x78) = 2;
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 148de4f36 FUN_148de4f36 body=2067 status=ok
// SIG undefined FUN_148de4f36(void)

ulonglong FUN_148de4f36(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong ***ppplVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong ****pppplVar11;
  longlong ****pppplVar12;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [24];
  undefined1 *local_d8;
  longlong ***local_d0;
  undefined1 local_c4 [4];
  longlong ***local_c0 [2];
  undefined1 local_b0;
  ushort local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar5 = FUN_148de57b0();
  if (cVar5 != '\0') {
    lVar6 = FUN_14479d2ce(param_1 + 8);
    if (lVar6 != 0) {
      lVar6 = FUN_14479d2ce(param_1 + 0x20);
      if (lVar6 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x88);
        iVar2 = *(int *)(lVar6 + 0x4f0);
        if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar6 + 0x880))) {
          lVar9 = lVar6 + 0x4f8;
          if (*(longlong *)(lVar6 + 0x878) != 0) {
            lVar9 = *(longlong *)(lVar6 + 0x878);
          }
          lVar9 = (longlong)iVar2 * 0x38 + lVar9;
          if (lVar9 != 0) {
            FUN_144a7b7fe(lVar9,local_f0);
            lVar6 = FUN_14479d2ce(param_1 + 0x18);
            if (lVar6 != 0) {
              lVar9 = FUN_144a2f878();
              if (*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) {
                uVar10 = 0;
                if (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30) {
                  local_78 = 0;
                  local_70 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  local_6c = 0xffffffff00000080;
                  local_64 = 0;
                  local_58 = 0;
                  local_50 = 0;
                  pppplVar12 = *(longlong *****)(param_1 + 0x40);
                  uVar7 = FUN_14479d2ce(param_1 + 8);
                  local_a8 = 8;
                  local_c0[0] = (longlong ***)0x0;
                  FUN_14485c47a(local_c0,uVar7);
                  local_a0 = 6;
                  FUN_1446ddc76(local_f8,"Skill",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar11 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar11 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar11);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 8;
                  local_a0 = 0x12;
                  local_c0[0] = (longlong ***)pppplVar12;
                  FUN_1446ddc76(local_f8,"TargetList",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  uVar7 = FUN_14479d2ce(param_1 + 0x10);
                  local_a8 = 8;
                  local_c0[0] = (longlong ***)0x0;
                  FUN_14485c47a(local_c0,uVar7);
                  local_a0 = 7;
                  FUN_1446ddc76(local_f8,"StasisOwner",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 4;
                  local_c0[0] = (longlong ***)
                                CONCAT44(local_c0[0]._4_4_,(uint)*(byte *)(param_1 + 0x70));
                  local_a0 = 1;
                  FUN_1446ddc76(local_f8,"PeerReview",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 4;
                  local_c0[0] = (longlong ***)
                                CONCAT44(local_c0[0]._4_4_,(uint)*(byte *)(param_1 + 0x71));
                  local_a0 = 1;
                  FUN_1446ddc76(local_f8,"MorePower",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 4;
                  local_c0[0] = (longlong ***)
                                CONCAT44(local_c0[0]._4_4_,(uint)*(byte *)(param_1 + 0x73));
                  local_a0 = 1;
                  FUN_1446ddc76(local_f8,"NthDimension",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 4;
                  local_c0[0] = (longlong ***)
                                CONCAT44(local_c0[0]._4_4_,(uint)*(byte *)(param_1 + 0x72));
                  local_a0 = 1;
                  FUN_1446ddc76(local_f8,"KinematicChaos",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 4;
                  local_c0[0] = (longlong ***)
                                CONCAT44(local_c0[0]._4_4_,(uint)*(byte *)(param_1 + 0x74));
                  local_a0 = 1;
                  FUN_1446ddc76(local_f8,"ControlledChaos",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 4;
                  local_c0[0] = (longlong ***)
                                CONCAT44(local_c0[0]._4_4_,(uint)*(byte *)(param_1 + 0x75));
                  local_a0 = 1;
                  FUN_1446ddc76(local_f8,"ParticleDiffuser",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  local_a8 = 4;
                  local_c0[0] = (longlong ***)
                                CONCAT44(local_c0[0]._4_4_,(uint)*(byte *)(param_1 + 0x76));
                  local_a0 = 1;
                  FUN_1446ddc76(local_f8,"InPerpetuity",1);
                  local_d8 = local_f8;
                  local_d0 = (longlong ***)local_c0;
                  FUN_140e5edc4(&local_98,local_c4,&local_d8,0);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    pppplVar12 = local_c0;
                    if (0x18 < local_a8) {
                      pppplVar12 = (longlong ****)local_c0[0];
                    }
                    (*pcVar3)(pppplVar12);
                  }
                  if (0x18 < local_a8) {
                    FUN_1400020a8(local_c0[0]);
                  }
                  uVar7 = (**(code **)(*(longlong *)(lVar6 + 0x10e0) + 0x50))(lVar6 + 0x10e0);
                  uVar8 = FUN_14479d2ce(param_1 + 0x20);
                  local_100 = 1;
                  local_108 = &local_98;
                  FUN_14096dfee(uVar7,&local_d8,uVar8,0);
                  ppplVar4 = local_d0;
                  uVar10 = CONCAT71((int7)((ulonglong)local_f8 >> 8),local_d8 != (undefined1 *)0x0);
                  if (local_d8 != (undefined1 *)0x0) {
                    if ((longlong ****)local_d0 == (longlong ****)0x0) {
                      local_b0 = 0;
                      FUN_148e183ee(local_d8,local_f0,*(undefined4 *)(local_d8 + 0x178));
                    }
                    else {
                      LOCK();
                      *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
                      UNLOCK();
                      local_b0 = 0;
                      FUN_148e183ee(local_d8,local_f0,*(undefined4 *)(local_d8 + 0x178));
                      LOCK();
                      pppplVar12 = (longlong ****)(ppplVar4 + 1);
                      *(int *)pppplVar12 = *(int *)pppplVar12 + -1;
                      UNLOCK();
                      if (*(int *)pppplVar12 == 0) {
                        (*(code *)**ppplVar4)(ppplVar4);
                        LOCK();
                        piVar1 = (int *)((longlong)ppplVar4 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (*(code *)(*ppplVar4)[2])(ppplVar4);
                        }
                      }
                    }
                  }
                  ppplVar4 = local_d0;
                  if ((longlong ****)local_d0 != (longlong ****)0x0) {
                    LOCK();
                    pppplVar12 = (longlong ****)(local_d0 + 1);
                    *(int *)pppplVar12 = *(int *)pppplVar12 + -1;
                    UNLOCK();
                    if (*(int *)pppplVar12 == 0) {
                      (*(code *)**local_d0)(local_d0);
                      LOCK();
                      piVar1 = (int *)((longlong)ppplVar4 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (*(code *)(*ppplVar4)[2])(ppplVar4);
                      }
                    }
                  }
                  local_50 = 0;
                  if (local_58 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140333f4e(&local_98);
                }
                goto LAB_148de4ff4;
              }
            }
          }
        }
      }
    }
  }
  uVar10 = 0;
LAB_148de4ff4:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de574a FUN_148de574a body=101 status=ok
// SIG undefined FUN_148de574a(void)

void FUN_148de574a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x78) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 148de57b0 FUN_148de57b0 body=313 status=ok
// SIG undefined FUN_148de57b0(void)

undefined8 FUN_148de57b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (lVar5 == 0) {
    uVar4 = FUN_14110242a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x60) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x68) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  cVar3 = FUN_144729dda(param_1 + 8);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 8);
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (lVar5 == 0) {
      uVar6 = FUN_14110242a();
      lVar5 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x60) = lVar5;
    }
    if (((*(longlong *)(param_1 + 0x68) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar6 = FUN_144aff482(uVar6,plVar1);
      }
      *(undefined8 *)(param_1 + 0x68) = uVar6;
    }
    uVar4 = FUN_144a851c4(uVar4);
    return uVar4;
  }
  return 0;
}



// FUNCTION 148de58ea FUN_148de58ea body=29 status=ok
// SIG undefined FUN_148de58ea(void)

undefined8 FUN_148de58ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de5908 FUN_148de5908 body=29 status=ok
// SIG undefined FUN_148de5908(void)

undefined8 FUN_148de5908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de5926 FUN_148de5926 body=296 status=ok
// SIG undefined FUN_148de5926(void)

int FUN_148de5926(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar7 = *param_1;
      do {
        puVar1 = (undefined8 *)(lVar7 + (longlong)iVar9 * 0x28);
        if (puVar1[1] == 0) {
          uVar6 = FUN_145cd97be();
          uVar6 = FUN_14477b664(uVar6);
          puVar1[1] = uVar6;
        }
        lVar7 = param_3[1];
        if (lVar7 == 0) {
          lVar7 = FUN_145cd97be();
        }
        uVar6 = *param_3;
        uVar8 = FUN_14477b664(lVar7);
        local_50 = uVar6;
        uVar3 = FUN_144a7891a(uVar8);
        local_58 = *puVar1;
        uVar6 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar6);
        local_60 = &local_50;
        local_68 = uVar8;
        cVar2 = FUN_144a789b8(uVar4,uVar6,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_148de5952;
        lVar7 = *param_1;
        iVar9 = *(int *)(lVar7 + 0x20 + (longlong)iVar9 * 0x28);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_148de5952:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 148de5a50 FUN_148de5a50 body=408 status=ok
// SIG undefined FUN_148de5a50(void)

undefined4 * FUN_148de5a50(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148de5bea(param_1,local_48);
  FUN_145a25158(local_40,*param_3);
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  lVar6 = local_40[1];
  if (lVar6 == 0) {
    lVar6 = FUN_145cd97be();
  }
  uVar1 = *local_40;
  uVar7 = FUN_14477b664(lVar6);
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4),uVar5 >> 0x10 ^ uVar5);
  cVar3 = FUN_148de5cd0(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_148de5da0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de5bea FUN_148de5bea body=230 status=ok
// SIG undefined FUN_148de5bea(void)

int * FUN_148de5bea(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 148de5cd0 FUN_148de5cd0 body=93 status=ok
// SIG undefined FUN_148de5cd0(void)

undefined8 FUN_148de5cd0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_148de5926(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_148de5d2e(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 148de5d2e FUN_148de5d2e body=114 status=ok
// SIG undefined FUN_148de5d2e(void)

void FUN_148de5d2e(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148de5da0 FUN_148de5da0 body=547 status=ok
// SIG undefined FUN_148de5da0(void)

void FUN_148de5da0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar5 != uVar10);
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
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar11 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar3 = *local_80;
        lVar7 = *(longlong *)(lVar3 + 8 + (longlong)iVar11 * 0x28);
        if (lVar7 == 0) {
          lVar7 = FUN_145cd97be();
        }
        puVar2 = (undefined8 *)(lVar3 + (longlong)iVar11 * 0x28);
        uVar4 = *puVar2;
        uVar8 = FUN_14477b664(lVar7);
        uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar10 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar12 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4),
                              uVar10 >> 0x10 ^ uVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)((longlong)puVar2 + 0x24) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(puVar2 + 4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar11 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148de5fc4 FUN_148de5fc4 body=64 status=ok
// SIG undefined FUN_148de5fc4(void)

undefined8 * FUN_148de5fc4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bb10;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de6008 FUN_148de6008 body=81 status=ok
// SIG undefined FUN_148de6008(void)

undefined8 FUN_148de6008(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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
  return uVar6;
}



// FUNCTION 148de6060 FUN_148de6060 body=89 status=ok
// SIG undefined FUN_148de6060(void)

bool FUN_148de6060(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de60ab;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_148de60ab:
  return lVar6 == param_2;
}



// FUNCTION 148de60e2 FUN_148de60e2 body=131 status=ok
// SIG undefined FUN_148de60e2(void)

void FUN_148de60e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99bb80;
  FUN_145a25158(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b99bb10;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 148de6166 FUN_148de6166 body=131 status=ok
// SIG undefined FUN_148de6166(void)

void FUN_148de6166(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99bb80;
  FUN_145a25158(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b99bb10;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 148de61ea FUN_148de61ea body=169 status=ok
// SIG undefined FUN_148de61ea(void)

void FUN_148de61ea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99bb80;
  FUN_145a25158(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bb10;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de6283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de6294 FUN_148de6294 body=210 status=ok
// SIG undefined FUN_148de6294(void)

void FUN_148de6294(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  local_21 = param_2;
  local_20 = param_3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148de62be:
    local_30 = 0;
    local_38 = &local_20;
    FUN_148de642c(param_1 + 8,param_1 + 0x38,&local_30,&local_21);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148de62be;
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
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_38 = &local_20;
    FUN_148de642c(param_1 + 8,param_1 + 0x38,&local_30,&local_21);
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148de6378 FUN_148de6378 body=177 status=ok
// SIG undefined FUN_148de6378(void)

ulonglong FUN_148de6378(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_21 = param_2;
  local_20 = param_3;
  if (plVar3 == (longlong *)0x0) {
LAB_148de63df:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148de63df;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_38 = &local_20;
      local_30 = lVar4;
      FUN_148de642c(param_1 + 8,param_1 + 0x38,&local_30,&local_21);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148de642c FUN_148de642c body=138 status=ok
// SIG undefined FUN_148de642c(void)

void FUN_148de642c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = (code *)*param_2;
  uVar2 = *param_3;
  local_50 = *param_1;
  uVar3 = FUN_14477b664(param_1[1]);
  local_48 = FUN_14477b664(uVar3);
  local_40 = param_1[2];
  (*pcVar1)(uVar2,*param_4,*param_5,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de64b8 FUN_148de64b8 body=428 status=ok
// SIG undefined FUN_148de64b8(void)

void FUN_148de64b8(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar8 = param_2[1];
    if (lVar8 == 0) {
      lVar8 = FUN_145cd97be();
    }
    uVar10 = *param_2;
    uVar9 = FUN_14477b664(lVar8);
    uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = (uint)((ulonglong)uVar10 >> 0x10);
    uVar13 = (uint)uVar10 & 0xffff;
    iVar5 = FUN_144a78877(((uint)uVar10 << 0x10 | uVar13) + (int)((ulonglong)uVar10 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4),uVar4 >> 0x10 ^ uVar4);
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar12 + uVar9 * 4);
    if (iVar5 != -1) {
      puVar14 = (undefined8 *)((longlong)plVar12 + uVar9 * 4);
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x28);
        if (puVar1[1] == 0) {
          uVar10 = FUN_145cd97be();
          uVar10 = FUN_14477b664(uVar10);
          puVar1[1] = uVar10;
        }
        lVar8 = param_2[1];
        if (lVar8 == 0) {
          lVar8 = FUN_145cd97be();
        }
        uVar10 = *param_2;
        uVar11 = FUN_14477b664(lVar8);
        local_50 = uVar10;
        uVar6 = FUN_144a7891a(uVar11);
        local_58 = *puVar1;
        uVar10 = puVar1[1];
        uVar7 = FUN_144a7891a(uVar10);
        local_60 = &local_50;
        local_68 = uVar11;
        cVar2 = FUN_144a789b8(uVar7,uVar10,&local_58,uVar6);
        if (cVar2 != '\0') {
          FUN_148de6666(param_1,*(undefined4 *)puVar14);
          break;
        }
        iVar5 = *(int *)(puVar1 + 4);
        puVar14 = puVar1 + 4;
      } while (iVar5 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148de6666 FUN_148de6666 body=87 status=ok
// SIG undefined FUN_148de6666(void)

void FUN_148de6666(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_148de5d2e();
  return;
}



// FUNCTION 148de66be FUN_148de66be body=9 status=ok
// SIG undefined FUN_148de66be(void)

void FUN_148de66be(longlong param_1)

{
  FUN_148de66e6(param_1 + 0x10);
  return;
}



// FUNCTION 148de66c8 FUN_148de66c8 body=29 status=ok
// SIG undefined FUN_148de66c8(void)

undefined8 FUN_148de66c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de66e6 FUN_148de66e6 body=96 status=ok
// SIG undefined FUN_148de66e6(void)

void FUN_148de66e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9a0a70;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1);
  return;
}



// FUNCTION 148de6746 FUN_148de6746 body=38 status=ok
// SIG undefined FUN_148de6746(void)

undefined8 FUN_148de6746(undefined8 param_1,int param_2)

{
  FUN_148de66e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de676c FUN_148de676c body=167 status=ok
// SIG undefined FUN_148de676c(void)

void FUN_148de676c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148de67e7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148de67e7;
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
LAB_148de67e7:
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
                    /* WARNING: Could not recover jumptable at 0x000148de6807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148de6814 FUN_148de6814 body=386 status=ok
// SIG undefined FUN_148de6814(void)

longlong * FUN_148de6814(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148de6925:
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
    *puVar5 = &PTR_FUN_14b99bc70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148de6925;
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
    *puVar5 = &PTR_FUN_14b99bc70;
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



// FUNCTION 148de6996 FUN_148de6996 body=64 status=ok
// SIG undefined FUN_148de6996(void)

undefined8 * FUN_148de6996(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bc70;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de69da FUN_148de69da body=81 status=ok
// SIG undefined FUN_148de69da(void)

undefined8 FUN_148de69da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de6a32 FUN_148de6a32 body=89 status=ok
// SIG undefined FUN_148de6a32(void)

bool FUN_148de6a32(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de6a7d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de6a7d:
  return lVar6 == param_2;
}



// FUNCTION 148de6aa8 FUN_148de6aa8 body=118 status=ok
// SIG undefined FUN_148de6aa8(void)

void FUN_148de6aa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bc70;
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



// FUNCTION 148de6b1e FUN_148de6b1e body=118 status=ok
// SIG undefined FUN_148de6b1e(void)

void FUN_148de6b1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bc70;
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



// FUNCTION 148de6b94 FUN_148de6b94 body=156 status=ok
// SIG undefined FUN_148de6b94(void)

void FUN_148de6b94(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bc70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de6c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de6c30 FUN_148de6c30 body=100 status=ok
// SIG undefined FUN_148de6c30(void)

void FUN_148de6c30(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de6c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de6c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de6c94 FUN_148de6c94 body=100 status=ok
// SIG undefined FUN_148de6c94(void)

ulonglong FUN_148de6c94(longlong param_1)

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
LAB_148de6ced:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148de6ced;
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



// FUNCTION 148de6cf8 FUN_148de6cf8 body=386 status=ok
// SIG undefined FUN_148de6cf8(void)

longlong * FUN_148de6cf8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148de6e09:
    *puVar5 = &PTR_LAB_14a1c7440;
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
    *puVar5 = &PTR_FUN_14b99bce0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148de6e09;
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
    *puVar5 = &PTR_LAB_14a1c7440;
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
    *puVar5 = &PTR_FUN_14b99bce0;
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



// FUNCTION 148de6e7a FUN_148de6e7a body=64 status=ok
// SIG undefined FUN_148de6e7a(void)

undefined8 * FUN_148de6e7a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bce0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de6ebe FUN_148de6ebe body=81 status=ok
// SIG undefined FUN_148de6ebe(void)

undefined8 FUN_148de6ebe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de6f16 FUN_148de6f16 body=89 status=ok
// SIG undefined FUN_148de6f16(void)

bool FUN_148de6f16(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de6f61;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de6f61:
  return lVar6 == param_2;
}



// FUNCTION 148de6f8c FUN_148de6f8c body=118 status=ok
// SIG undefined FUN_148de6f8c(void)

void FUN_148de6f8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bce0;
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



// FUNCTION 148de7002 FUN_148de7002 body=118 status=ok
// SIG undefined FUN_148de7002(void)

void FUN_148de7002(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bce0;
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



// FUNCTION 148de7078 FUN_148de7078 body=156 status=ok
// SIG undefined FUN_148de7078(void)

void FUN_148de7078(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de7104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de7114 FUN_148de7114 body=104 status=ok
// SIG undefined FUN_148de7114(void)

void FUN_148de7114(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de7161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de7172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de717c FUN_148de717c body=101 status=ok
// SIG undefined FUN_148de717c(void)

ulonglong FUN_148de717c(longlong param_1)

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
LAB_148de71d6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148de71d6;
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



// FUNCTION 148de71e2 FUN_148de71e2 body=64 status=ok
// SIG undefined FUN_148de71e2(void)

undefined8 * FUN_148de71e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bd50;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de7226 FUN_148de7226 body=81 status=ok
// SIG undefined FUN_148de7226(void)

undefined8 FUN_148de7226(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de727e FUN_148de727e body=89 status=ok
// SIG undefined FUN_148de727e(void)

bool FUN_148de727e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de72c9;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de72c9:
  return lVar6 == param_2;
}



// FUNCTION 148de72f4 FUN_148de72f4 body=118 status=ok
// SIG undefined FUN_148de72f4(void)

void FUN_148de72f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bd50;
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



// FUNCTION 148de736a FUN_148de736a body=118 status=ok
// SIG undefined FUN_148de736a(void)

void FUN_148de736a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bd50;
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



// FUNCTION 148de73e0 FUN_148de73e0 body=156 status=ok
// SIG undefined FUN_148de73e0(void)

void FUN_148de73e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bd50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de746c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de747c FUN_148de747c body=104 status=ok
// SIG undefined FUN_148de747c(void)

void FUN_148de747c(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de74c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de74da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de74e4 FUN_148de74e4 body=101 status=ok
// SIG undefined FUN_148de74e4(void)

ulonglong FUN_148de74e4(longlong param_1)

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
LAB_148de753e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148de753e;
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



// FUNCTION 148de754a FUN_148de754a body=64 status=ok
// SIG undefined FUN_148de754a(void)

undefined8 * FUN_148de754a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bdc0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de758e FUN_148de758e body=81 status=ok
// SIG undefined FUN_148de758e(void)

undefined8 FUN_148de758e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de75e6 FUN_148de75e6 body=89 status=ok
// SIG undefined FUN_148de75e6(void)

bool FUN_148de75e6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de7631;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de7631:
  return lVar6 == param_2;
}



// FUNCTION 148de765c FUN_148de765c body=118 status=ok
// SIG undefined FUN_148de765c(void)

void FUN_148de765c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bdc0;
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



// FUNCTION 148de76d2 FUN_148de76d2 body=118 status=ok
// SIG undefined FUN_148de76d2(void)

void FUN_148de76d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bdc0;
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



// FUNCTION 148de7748 FUN_148de7748 body=156 status=ok
// SIG undefined FUN_148de7748(void)

void FUN_148de7748(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a7c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bdc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de77d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de77e4 FUN_148de77e4 body=104 status=ok
// SIG undefined FUN_148de77e4(void)

void FUN_148de77e4(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de7831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de7842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148de784c FUN_148de784c body=101 status=ok
// SIG undefined FUN_148de784c(void)

ulonglong FUN_148de784c(longlong param_1)

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
LAB_148de78a6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148de78a6;
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



// FUNCTION 148de78b8 FUN_148de78b8 body=89 status=ok
// SIG undefined FUN_148de78b8(void)

bool FUN_148de78b8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de7903;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de7903:
  return lVar6 == param_2;
}



// FUNCTION 148de7912 FUN_148de7912 body=118 status=ok
// SIG undefined FUN_148de7912(void)

void FUN_148de7912(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b99be30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de7988 FUN_148de7988 body=156 status=ok
// SIG undefined FUN_148de7988(void)

void FUN_148de7988(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab67120;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b99be30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de7a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de7a24 FUN_148de7a24 body=98 status=ok
// SIG undefined FUN_148de7a24(void)

ulonglong FUN_148de7a24(longlong param_1)

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
LAB_148de7a7b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148de7a7b;
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
      (**(code **)(param_1 + 0x28))(lVar4,*(undefined1 *)(param_1 + 8));
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



// FUNCTION 148de7a8a FUN_148de7a8a body=81 status=ok
// SIG undefined FUN_148de7a8a(void)

undefined8 FUN_148de7a8a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de7ae2 FUN_148de7ae2 body=89 status=ok
// SIG undefined FUN_148de7ae2(void)

bool FUN_148de7ae2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de7b2d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de7b2d:
  return lVar6 == param_2;
}



// FUNCTION 148de7b3c FUN_148de7b3c body=118 status=ok
// SIG undefined FUN_148de7b3c(void)

void FUN_148de7b3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bea0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de7bb2 FUN_148de7bb2 body=118 status=ok
// SIG undefined FUN_148de7bb2(void)

void FUN_148de7bb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bea0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de7c28 FUN_148de7c28 body=156 status=ok
// SIG undefined FUN_148de7c28(void)

void FUN_148de7c28(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bea0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de7cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de7cc4 FUN_148de7cc4 body=98 status=ok
// SIG undefined FUN_148de7cc4(void)

void FUN_148de7cc4(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de7d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de7d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148de7d30 FUN_148de7d30 body=89 status=ok
// SIG undefined FUN_148de7d30(void)

bool FUN_148de7d30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de7d7b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de7d7b:
  return lVar6 == param_2;
}



// FUNCTION 148de7d8a FUN_148de7d8a body=118 status=ok
// SIG undefined FUN_148de7d8a(void)

void FUN_148de7d8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bf10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de7e00 FUN_148de7e00 body=156 status=ok
// SIG undefined FUN_148de7e00(void)

void FUN_148de7e00(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bf10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de7e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de7e9c FUN_148de7e9c body=93 status=ok
// SIG undefined FUN_148de7e9c(void)

ulonglong FUN_148de7e9c(longlong param_1)

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
LAB_148de7eee:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148de7eee;
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



// FUNCTION 148de7efa FUN_148de7efa body=68 status=ok
// SIG undefined FUN_148de7efa(void)

undefined8 * FUN_148de7efa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bfa0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de7f42 FUN_148de7f42 body=81 status=ok
// SIG undefined FUN_148de7f42(void)

undefined8 FUN_148de7f42(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de7f9a FUN_148de7f9a body=89 status=ok
// SIG undefined FUN_148de7f9a(void)

bool FUN_148de7f9a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de7fe5;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de7fe5:
  return lVar6 == param_2;
}



// FUNCTION 148de8010 FUN_148de8010 body=118 status=ok
// SIG undefined FUN_148de8010(void)

void FUN_148de8010(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bfa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de8086 FUN_148de8086 body=118 status=ok
// SIG undefined FUN_148de8086(void)

void FUN_148de8086(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99bfa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de80fc FUN_148de80fc body=156 status=ok
// SIG undefined FUN_148de80fc(void)

void FUN_148de80fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99bfa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de8188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de8198 FUN_148de8198 body=94 status=ok
// SIG undefined FUN_148de8198(void)

void FUN_148de8198(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de81e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de81eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148de81fa FUN_148de81fa body=81 status=ok
// SIG undefined FUN_148de81fa(void)

undefined8 FUN_148de81fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148de8252 FUN_148de8252 body=89 status=ok
// SIG undefined FUN_148de8252(void)

bool FUN_148de8252(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148de829d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148de829d:
  return lVar6 == param_2;
}



// FUNCTION 148de82ac FUN_148de82ac body=118 status=ok
// SIG undefined FUN_148de82ac(void)

void FUN_148de82ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99c080;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99c010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de8322 FUN_148de8322 body=118 status=ok
// SIG undefined FUN_148de8322(void)

void FUN_148de8322(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99c080;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99c010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de8398 FUN_148de8398 body=156 status=ok
// SIG undefined FUN_148de8398(void)

void FUN_148de8398(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99c080;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99c010;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148de8424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de8434 FUN_148de8434 body=98 status=ok
// SIG undefined FUN_148de8434(void)

void FUN_148de8434(longlong param_1)

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
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148de847d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148de848c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148de8498 FUN_148de8498 body=9 status=ok
// SIG undefined FUN_148de8498(void)

void FUN_148de8498(longlong param_1)

{
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 148de84a2 FUN_148de84a2 body=29 status=ok
// SIG undefined FUN_148de84a2(void)

undefined8 FUN_148de84a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de84c0 FUN_148de84c0 body=9 status=ok
// SIG undefined FUN_148de84c0(void)

void FUN_148de84c0(longlong param_1)

{
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 148de84ca FUN_148de84ca body=29 status=ok
// SIG undefined FUN_148de84ca(void)

undefined8 FUN_148de84ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de84e8 FUN_148de84e8 body=132 status=ok
// SIG undefined FUN_148de84e8(void)

void FUN_148de84e8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148de856e FUN_148de856e body=62 status=ok
// SIG undefined FUN_148de856e(void)

void FUN_148de856e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148de85ac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 148de85ac FUN_148de85ac body=93 status=ok
// SIG undefined FUN_148de85ac(void)

ulonglong FUN_148de85ac(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148de860a FUN_148de860a body=179 status=ok
// SIG undefined FUN_148de860a(void)

char * FUN_148de860a(longlong *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*pcVar1 == *param_3) {
          if (pcVar1 != (char *)0x0) goto LAB_148de86a0;
          break;
        }
        iVar2 = *(int *)(pcVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_148de86be(param_1,&local_1c,param_2);
  pcVar1 = (char *)(*param_1 + (longlong)local_1c * 0x18);
LAB_148de86a0:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar1 + 4;
}



// FUNCTION 148de86be FUN_148de86be body=277 status=ok
// SIG undefined FUN_148de86be(void)

undefined4 * FUN_148de86be(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148de87d4(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 0xc) = 0xffffffff00000000;
  *(undefined8 *)(local_40 + 4) = 0;
  cVar1 = FUN_148de88ba(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x14) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x10) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148de89ac(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de87d4 FUN_148de87d4 body=230 status=ok
// SIG undefined FUN_148de87d4(void)

int * FUN_148de87d4(longlong *param_1,int *param_2)

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



// FUNCTION 148de88ba FUN_148de88ba body=128 status=ok
// SIG undefined FUN_148de88ba(void)

undefined8 FUN_148de88ba(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
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
        pcVar1 = (char *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*pcVar1 == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined4 *)pcVar1 = uVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar3;
          *(undefined4 *)(pcVar1 + 8) = uVar4;
          *(undefined4 *)(pcVar1 + 0xc) = uVar5;
          FUN_148de893a(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = *(int *)(pcVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148de893a FUN_148de893a body=114 status=ok
// SIG undefined FUN_148de893a(void)

void FUN_148de893a(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148de89ac FUN_148de89ac body=410 status=ok
// SIG undefined FUN_148de89ac(void)

void FUN_148de89ac(longlong *param_1)

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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0x18);
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



// FUNCTION 148de8b48 FUN_148de8b48 body=67 status=ok
// SIG undefined FUN_148de8b48(void)

void FUN_148de8b48(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_148bbcf68(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148de8cd0(param_1);
    return;
  }
  FUN_148de8b8c(param_1);
  FUN_148bbcf68(param_1,0);
  return;
}



// FUNCTION 148de8b8c FUN_148de8b8c body=322 status=ok
// SIG undefined FUN_148de8b8c(void)

void FUN_148de8b8c(longlong *param_1)

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



// FUNCTION 148de8cd0 FUN_148de8cd0 body=410 status=ok
// SIG undefined FUN_148de8cd0(void)

void FUN_148de8cd0(longlong *param_1)

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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0x18);
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



// FUNCTION 148de8e6c FUN_148de8e6c body=305 status=ok
// SIG undefined FUN_148de8e6c(void)

undefined4 * FUN_148de8e6c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148de8f9e(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  bVar3 = *(byte *)*param_3;
  *local_38 = bVar3;
  lVar7 = *plVar1;
  *(longlong *)(local_38 + 8) = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    bVar3 = *local_38;
  }
  local_38[0x10] = 0xff;
  local_38[0x11] = 0xff;
  local_38[0x12] = 0xff;
  local_38[0x13] = 0xff;
  local_44 = local_40[0];
  cVar4 = FUN_148de9084(param_1,bVar3,local_38,&local_44);
  uVar2 = local_44;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar3;
      *(uint *)(local_38 + 0x14) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0x10) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_148de8cd0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148de8f9e FUN_148de8f9e body=230 status=ok
// SIG undefined FUN_148de8f9e(void)

int * FUN_148de8f9e(longlong *param_1,int *param_2)

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



// FUNCTION 148de9084 FUN_148de9084 body=128 status=ok
// SIG undefined FUN_148de9084(void)

undefined8 FUN_148de9084(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
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
        pcVar1 = (char *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*pcVar1 == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined4 *)pcVar1 = uVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar3;
          *(undefined4 *)(pcVar1 + 8) = uVar4;
          *(undefined4 *)(pcVar1 + 0xc) = uVar5;
          FUN_148de9104(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = *(int *)(pcVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148de9104 FUN_148de9104 body=114 status=ok
// SIG undefined FUN_148de9104(void)

void FUN_148de9104(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148de9176 FUN_148de9176 body=29 status=ok
// SIG undefined FUN_148de9176(void)

undefined8 FUN_148de9176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148de91ae FUN_148de91ae body=29 status=ok
// SIG undefined FUN_148de91ae(void)

bool FUN_148de91ae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148de91cc FUN_148de91cc body=26 status=ok
// SIG undefined FUN_148de91cc(void)

bool FUN_148de91cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148de91e6 FUN_148de91e6 body=24 status=ok
// SIG undefined FUN_148de91e6(void)

bool FUN_148de91e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148de920a FUN_148de920a body=101 status=ok
// SIG undefined FUN_148de920a(void)

void FUN_148de920a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99c200;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b99c190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de9270 FUN_148de9270 body=101 status=ok
// SIG undefined FUN_148de9270(void)

void FUN_148de9270(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99c200;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b99c190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148de92d6 FUN_148de92d6 body=134 status=ok
// SIG undefined FUN_148de92d6(void)

void FUN_148de92d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99c200;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b99c190;
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
                    /* WARNING: Could not recover jumptable at 0x000148de934d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148de935c FUN_148de935c body=40 status=ok
// SIG undefined FUN_148de935c(void)

void FUN_148de935c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148de9381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148de9384 FUN_148de9384 body=150 status=ok
// SIG undefined FUN_148de9384(void)

bool FUN_148de9384(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 148de941e FUN_148de941e body=62 status=ok
// SIG undefined FUN_148de941e(void)

void FUN_148de941e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148de945c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa8,8);
  }
  return;
}



// FUNCTION 148de945c FUN_148de945c body=110 status=ok
// SIG undefined FUN_148de945c(void)

ulonglong FUN_148de945c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148de9495;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa8,8);
      param_2 = param_2 / 0xa8;
    }
  }
LAB_148de9495:
  return param_2 & 0xffffffff;
}



// FUNCTION 148de94ca FUN_148de94ca body=144 status=ok
// SIG undefined FUN_148de94ca(void)

void FUN_148de94ca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + uVar4) == *param_2) &&
         (*(int *)(lVar2 + 8 + uVar4) == (int)param_2[1])) {
        if ((int)(uVar4 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      lVar1 = lVar2 + uVar4;
      uVar4 = uVar4 + 0x18;
    } while (lVar1 + 0x18 != lVar2 + lVar5 * 0x18);
  }
  uVar3 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    FUN_148de955a(param_1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar5 * 0x18) = *param_2;
  *(int *)(lVar2 + 8 + lVar5 * 0x18) = (int)param_2[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
  return;
}



// FUNCTION 148de955a FUN_148de955a body=147 status=ok
// SIG undefined FUN_148de955a(void)

void FUN_148de955a(longlong param_1,int param_2)

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



// FUNCTION 148de95ee FUN_148de95ee body=144 status=ok
// SIG undefined FUN_148de95ee(void)

void FUN_148de95ee(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + uVar4) == *param_2) &&
         (*(int *)(lVar2 + 8 + uVar4) == (int)param_2[1])) {
        if ((int)(uVar4 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      lVar1 = lVar2 + uVar4;
      uVar4 = uVar4 + 0x18;
    } while (lVar1 + 0x18 != lVar2 + lVar5 * 0x18);
  }
  uVar3 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    FUN_148de967e(param_1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar5 * 0x18) = *param_2;
  *(int *)(lVar2 + 8 + lVar5 * 0x18) = (int)param_2[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
  return;
}


