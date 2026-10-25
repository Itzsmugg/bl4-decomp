// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146557f16 FUN_146557f16 body=1669 status=ok
// SIG undefined FUN_146557f16(void)

void FUN_146557f16(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a63f30();
  cVar4 = FUN_144a792c0(param_1,0x30);
  if (cVar4 != '\0') goto LAB_14655808b;
  puVar1 = (undefined8 *)(param_1 + 0x3d0);
  lVar5 = FUN_14012b3c6(puVar1);
  if (lVar5 == 0) {
LAB_1465580ac:
    lVar5 = FUN_14060ed7a();
    if (lVar5 == 0) {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x3d8) = 0;
      *(undefined8 *)(param_1 + 0x3e0) = 0;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      if (*(int *)(param_1 + 0x3f4) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 1000),0);
      }
      puVar3 = *(undefined2 **)(param_1 + 1000);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    else {
      FUN_1400bbfae(&local_48,lVar5);
      *(undefined4 *)(param_1 + 0x3d8) = local_48;
      *(undefined4 *)(param_1 + 0x3dc) = uStack_44;
      *(undefined4 *)(param_1 + 0x3e0) = uStack_40;
      *(undefined4 *)(param_1 + 0x3e4) = uStack_3c;
      if ((undefined4 *)(param_1 + 0x3d8) == &local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 1000) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 1000) = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 0x3f0) = local_30;
        *(undefined4 *)(param_1 + 0x3f4) = local_2c;
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
          *(undefined8 *)(param_1 + 0x3d0) = 0;
          goto LAB_146557f9b;
        }
      }
      FUN_14485c47a(puVar1,lVar5);
    }
  }
  else {
    lVar5 = FUN_14012b3c6(puVar1);
    lVar6 = FUN_14060ed7a();
    if (((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_1465580ac;
  }
LAB_146557f9b:
  puVar1 = (undefined8 *)(param_1 + 0x3f8);
  lVar5 = FUN_14012b3c6(puVar1);
  if (lVar5 == 0) {
LAB_14655815c:
    lVar5 = FUN_14070f4be();
    if (lVar5 == 0) {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x400) = 0;
      *(undefined8 *)(param_1 + 0x408) = 0;
      *(undefined4 *)(param_1 + 0x418) = 0;
      if (*(int *)(param_1 + 0x41c) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x410),0);
      }
      puVar3 = *(undefined2 **)(param_1 + 0x410);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    else {
      FUN_1400bbfae(&local_48,lVar5);
      *(undefined4 *)(param_1 + 0x400) = local_48;
      *(undefined4 *)(param_1 + 0x404) = uStack_44;
      *(undefined4 *)(param_1 + 0x408) = uStack_40;
      *(undefined4 *)(param_1 + 0x40c) = uStack_3c;
      if ((undefined4 *)(param_1 + 0x400) == &local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x410) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x410) = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 0x418) = local_30;
        *(undefined4 *)(param_1 + 0x41c) = local_2c;
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
          *(undefined8 *)(param_1 + 0x3f8) = 0;
          goto LAB_146557feb;
        }
      }
      FUN_14485c47a(puVar1,lVar5);
    }
  }
  else {
    lVar5 = FUN_14012b3c6(puVar1);
    lVar6 = FUN_14070f4be();
    if (((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_14655815c;
  }
LAB_146557feb:
  puVar1 = (undefined8 *)(param_1 + 0x420);
  lVar5 = FUN_14012b3c6(puVar1);
  if (lVar5 == 0) {
LAB_14655820c:
    lVar5 = FUN_14019f430();
    if (lVar5 == 0) {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x428) = 0;
      *(undefined8 *)(param_1 + 0x430) = 0;
      *(undefined4 *)(param_1 + 0x440) = 0;
      if (*(int *)(param_1 + 0x444) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x438),0);
      }
      puVar3 = *(undefined2 **)(param_1 + 0x438);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    else {
      FUN_1400bbfae(&local_48,lVar5);
      *(undefined4 *)(param_1 + 0x428) = local_48;
      *(undefined4 *)(param_1 + 0x42c) = uStack_44;
      *(undefined4 *)(param_1 + 0x430) = uStack_40;
      *(undefined4 *)(param_1 + 0x434) = uStack_3c;
      if ((undefined4 *)(param_1 + 0x428) == &local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x438) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x438) = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 0x440) = local_30;
        *(undefined4 *)(param_1 + 0x444) = local_2c;
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
          *(undefined8 *)(param_1 + 0x420) = 0;
          goto LAB_14655803b;
        }
      }
      FUN_14485c47a(puVar1,lVar5);
    }
  }
  else {
    lVar5 = FUN_14012b3c6(puVar1);
    lVar6 = FUN_14019f430();
    if (((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_14655820c;
  }
LAB_14655803b:
  puVar1 = (undefined8 *)(param_1 + 0x448);
  lVar5 = FUN_14012b3c6(puVar1);
  if (lVar5 != 0) {
    lVar5 = FUN_14012b3c6(puVar1);
    lVar6 = FUN_1406b439e();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) goto LAB_14655808b;
  }
  lVar5 = FUN_1406b439e();
  if (lVar5 == 0) {
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x450) = 0;
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0;
    if (*(int *)(param_1 + 0x46c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x460),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x460);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x450) = local_48;
    *(undefined4 *)(param_1 + 0x454) = uStack_44;
    *(undefined4 *)(param_1 + 0x458) = uStack_40;
    *(undefined4 *)(param_1 + 0x45c) = uStack_3c;
    if ((undefined4 *)(param_1 + 0x450) == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x460) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x460) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x468) = local_30;
      *(undefined4 *)(param_1 + 0x46c) = local_2c;
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
        *(undefined8 *)(param_1 + 0x448) = 0;
        goto LAB_14655808b;
      }
    }
    FUN_14485c47a(puVar1,lVar5);
  }
LAB_14655808b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655859c FUN_14655859c body=249 status=ok
// SIG undefined FUN_14655859c(void)

undefined8 * FUN_14655859c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a1ca340;
  FUN_14012c1dc(plVar5 + 2,param_3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x568);
  *(uint *)(param_1 + 0x568) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x56c) < iVar3 + 1U) {
    FUN_14012c348((longlong *)(param_1 + 0x560),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x560);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
  lVar4 = *(longlong *)(param_1 + 0x560);
  lVar6 = (longlong)(*(int *)(param_1 + 0x568) + -1) * 0x10;
  *param_2 = *(undefined8 *)(lVar4 + lVar6);
  lVar4 = *(longlong *)(lVar4 + 8 + lVar6);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146558696 FUN_146558696 body=495 status=ok
// SIG undefined FUN_146558696(void)

void FUN_146558696(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [40];
  longlong local_a0;
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = 0;
  FUN_1408234aa(param_1,local_60,param_3,&DAT_14cb889e0);
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar2 = FUN_1406b2efc(param_3 + 0x2c0);
    local_8c = *(undefined4 *)(param_1 + 0x14);
    local_98[0] = 2;
    local_94 = 0;
    local_148 = 0;
    lVar2 = FUN_140641812(lVar2 + 0xb0,local_60,local_98,0);
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_146558739;
    cVar1 = *(char *)(param_1 + 0x18);
    lVar2 = FUN_1406b2efc(param_3 + 0x2c0);
    if (cVar1 == '\x01') {
      lVar2 = lVar2 + 0x30;
      local_100[0] = *(undefined1 *)(param_1 + 0x20);
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      FUN_1401f3db8(&local_f8,param_1 + 0x28);
      local_e0 = *(undefined8 *)(param_1 + 0x40);
      local_d8 = *(undefined4 *)(param_1 + 0x48);
      local_d0 = 0;
      puVar3 = local_100;
    }
    else {
      lVar2 = lVar2 + 0xb0;
      local_138[0] = *(undefined1 *)(param_1 + 0x20);
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      FUN_1401f3db8(&local_130,param_1 + 0x28);
      local_118 = *(undefined8 *)(param_1 + 0x40);
      local_110 = *(undefined4 *)(param_1 + 0x48);
      local_108 = 0;
      puVar3 = local_138;
    }
    FUN_14891c39a(local_98,puVar3);
    FUN_14883af66(local_c8,local_98);
    local_148 = 0;
    lVar2 = FUN_1488fcf52(lVar2,local_60,local_c8,0);
    if (local_a0 != 0) {
      FUN_144a2da94(local_a0);
      FUN_1400020a8(local_a0);
    }
    FUN_144a2da94(local_98);
  }
  if (lVar2 != 0) {
    lVar2 = FUN_140c80b38(lVar2);
    *(undefined1 *)(lVar2 + 0x10) = 0;
  }
LAB_146558739:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146558886 FUN_146558886 body=102 status=ok
// SIG undefined FUN_146558886(void)

void FUN_146558886(longlong param_1,undefined8 param_2)

{
  FUN_14011750a(param_1 + 0x10);
  FUN_14011750a(param_1 + 0x1c,param_2);
  FUN_14011750a(param_1 + 0x28,param_2);
  FUN_14011750a(param_1 + 0x34,param_2);
  FUN_14011750a(param_1 + 0x40,param_2);
  FUN_14011750a(param_1 + 0x4c,param_2);
  FUN_14011750a(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 1465588ec FUN_1465588ec body=66 status=ok
// SIG undefined FUN_1465588ec(void)

void FUN_1465588ec(longlong param_1,undefined8 param_2)

{
  FUN_14011750a(param_1 + 0x10);
  FUN_14011750a(param_1 + 0x1c,param_2);
  FUN_14011750a(param_1 + 0x28,param_2);
  FUN_14011750a(param_1 + 0x34,param_2);
  return;
}



// FUNCTION 14655892e FUN_14655892e body=284 status=ok
// SIG undefined FUN_14655892e(void)

void FUN_14655892e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011750a(param_1 + 0x10);
  FUN_14011750a(param_1 + 0x1c,param_2);
  FUN_14011750a(param_1 + 0x28,param_2);
  FUN_14011750a(param_1 + 0x34,param_2);
  FUN_14011750a(param_1 + 0x40,param_2);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x4c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x50);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x50) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x50) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146558a5c FUN_146558a5c body=29 status=ok
// SIG undefined FUN_146558a5c(void)

undefined8 FUN_146558a5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146558a79 FUN_146558a79 body=73 status=ok
// SIG undefined FUN_146558a79(void)

void FUN_146558a79(longlong param_1,int param_2)

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



// FUNCTION 146558ac2 FUN_146558ac2 body=48 status=ok
// SIG undefined FUN_146558ac2(void)

void FUN_146558ac2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146558af2 FUN_146558af2 body=267 status=ok
// SIG undefined FUN_146558af2(void)

void FUN_146558af2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b41df60;
  plVar3 = (longlong *)param_1[0x17];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146558bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146558bfe FUN_146558bfe body=118 status=ok
// SIG undefined FUN_146558bfe(void)

void FUN_146558bfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41cfb0;
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



// FUNCTION 146558c74 FUN_146558c74 body=132 status=ok
// SIG undefined FUN_146558c74(void)

void FUN_146558c74(longlong param_1,int param_2)

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



// FUNCTION 146558cfa FUN_146558cfa body=29 status=ok
// SIG undefined FUN_146558cfa(void)

undefined8 FUN_146558cfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146558d18 FUN_146558d18 body=29 status=ok
// SIG undefined FUN_146558d18(void)

undefined8 FUN_146558d18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146558d36 FUN_146558d36 body=29 status=ok
// SIG undefined FUN_146558d36(void)

undefined8 FUN_146558d36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146558d54 FUN_146558d54 body=411 status=ok
// SIG undefined FUN_146558d54(void)

undefined8 FUN_146558d54(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = param_3;
  FUN_140056680(&local_48,L"MovingPlatform");
  local_58 = *(undefined2 **)(param_2 + 0x18);
  FUN_1400021e4(&local_58,local_68);
  FUN_1449b8608(local_78,&local_48,&DAT_149e01f60);
  FUN_1401c7f3e(&local_58,local_78,local_68);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_48 = local_58;
  uStack_40 = uStack_50;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (param_3 != 0) {
    FUN_1400021e4(&local_38,local_68);
    FUN_1449b8608(local_78,&local_48,&DAT_149e01f60);
    FUN_1401c7f3e(&local_58,local_78,local_68);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  puVar1 = local_48;
  if ((int)uStack_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146558ef0 FUN_146558ef0 body=187 status=ok
// SIG undefined FUN_146558ef0(void)

undefined8 FUN_146558ef0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_140bedf02();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x100048;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 146558fac FUN_146558fac body=145 status=ok
// SIG undefined FUN_146558fac(void)

void FUN_146558fac(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140838726(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x599,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655903e FUN_14655903e body=176 status=ok
// SIG undefined FUN_14655903e(void)

undefined8 * FUN_14655903e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb89558) {
    FUN_144b3d300(&DAT_14cb89558);
    if (DAT_14cb89558 == -1) {
      builtin_wcsncpy(local_38,L"OnBeginOverlap",0xf);
      FUN_1446f470e(&DAT_14cb89550,local_38,1);
      _Init_thread_footer(&DAT_14cb89558);
    }
  }
  *param_1 = DAT_14cb89550;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465590f0 FUN_1465590f0 body=145 status=ok
// SIG undefined FUN_1465590f0(void)

void FUN_1465590f0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140852908(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x59a,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146559182 FUN_146559182 body=176 status=ok
// SIG undefined FUN_146559182(void)

undefined8 * FUN_146559182(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb89568) {
    FUN_144b3d300(&DAT_14cb89568);
    if (DAT_14cb89568 == -1) {
      builtin_wcsncpy(local_38 + 8,L"rlap",5);
      builtin_wcsncpy(local_38,L"OnEndOve",8);
      FUN_1446f470e(&DAT_14cb89560,local_38,1);
      _Init_thread_footer(&DAT_14cb89568);
    }
  }
  *param_1 = DAT_14cb89560;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146559234 FUN_146559234 body=254 status=ok
// SIG undefined FUN_146559234(void)

undefined8
FUN_146559234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a7feda0;
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
  *local_48 = &PTR_FUN_14b41ef10;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1408278de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146559334 FUN_146559334 body=226 status=ok
// SIG undefined FUN_146559334(void)

void FUN_146559334(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412aa84a();
  FUN_1446f470e(&local_58,L"MovingPlatformController",1);
  uVar1 = FUN_140bedf02();
  FUN_140bedf02();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"SplineTrackActor",1);
  uVar1 = FUN_140bedf02();
  FUN_140bedf02();
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



// FUNCTION 146559418 FUN_146559418 body=2193 status=ok
// SIG undefined FUN_146559418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146559418(int *param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  double *pdVar33;
  double *pdVar34;
  undefined1 *puVar35;
  ulonglong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar3;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  iVar30 = *param_1;
  if (iVar30 == 1) {
    lVar31 = *(longlong *)(param_3 + 0xb0);
    if (lVar31 == 0) {
      lVar31 = FUN_1448abda6(param_3);
    }
    local_158 = (double)((ulonglong)local_158 & 0xffffffffffffff00);
    local_130 = (double)((ulonglong)local_130 & 0xffffffff00000000);
    FUN_1456bb102(&local_158,lVar31);
    FUN_1447c3578(param_1 + 0x1c,local_1d8,&local_158);
    lVar31 = FUN_14030a32e(local_1d8);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1b8[0] * 0x120));
    if (pcVar6 != (code *)0x0) {
      puVar35 = local_1d8;
      if (0x18 < (ushort)uStack_1c0) {
        puVar35 = (undefined1 *)local_1d8._0_8_;
      }
      (*pcVar6)(puVar35);
    }
    if (0x18 < (ushort)uStack_1c0) {
      FUN_1400020a8(local_1d8._0_8_);
    }
    FUN_144a5ac3a(&local_158);
    if (lVar31 == 0) goto LAB_1465598ab;
    pdVar33 = (double *)&DAT_14c846480;
    if (*(longlong *)(lVar31 + 0x1c8) != 0) {
      pdVar33 = (double *)(*(longlong *)(lVar31 + 0x1c8) + 0x240);
    }
  }
  else {
    if (iVar30 == 0) {
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      auVar51 = _DAT_149934d80;
      auVar41 = *(undefined1 (*) [16])(param_3 + 0x800);
      dVar7 = auVar41._0_8_;
      dVar16 = auVar41._8_8_;
      auVar50 = *(undefined1 (*) [16])(param_3 + 0x810);
      dVar8 = auVar50._0_8_;
      dVar15 = auVar50._8_8_;
      auVar44 = *(undefined1 (*) [16])(param_1 + 0x14);
      dVar9 = auVar44._0_8_;
      dVar40 = auVar44._8_8_;
      auVar5 = *(undefined1 (*) [16])(param_1 + 0x18);
      dVar10 = auVar5._0_8_;
      auVar41 = minpd(auVar44,auVar41);
      auVar44 = minpd(auVar5,auVar50);
      auVar50._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
      iVar30 = movmskpd(0,auVar50);
      auVar41._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
      auVar41._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
      uVar32 = movmskpd((int)param_1,auVar41);
      if ((uVar32 & 0x3fffffff) == 0 && iVar30 == 0) {
        dVar22 = *(double *)(param_1 + 4);
        dVar23 = *(double *)(param_1 + 6);
        dVar24 = *(double *)(param_1 + 8);
        dVar25 = *(double *)(param_1 + 10);
        dVar26 = *(double *)(param_3 + 0x7c0);
        dVar27 = *(double *)(param_3 + 0x7c8);
        dVar28 = *(double *)(param_3 + 2000);
        dVar29 = *(double *)(param_3 + 0x7d8);
        dVar1 = *(double *)(param_3 + 0x7d8);
        dVar39 = *(double *)(param_3 + 0x7d8);
        dVar2 = *(double *)(param_3 + 0x7c0);
        dVar3 = *(double *)(param_3 + 0x7c0);
        dVar4 = *(double *)(param_3 + 0x7c8);
        dVar45 = *(double *)(param_3 + 0x7c8);
        dVar48 = *(double *)(param_3 + 2000);
        dVar43 = *(double *)(param_3 + 2000);
        dVar17 = *(double *)(param_1 + 0xc) * dVar7;
        dVar47 = *(double *)(param_1 + 0xe) * dVar16;
        dVar18 = *(double *)(param_1 + 0x10) * dVar8;
        dVar19 = *(double *)(param_1 + 0x12) * dVar15;
        dVar12 = dVar47 * dVar26 - dVar27 * dVar17;
        dVar13 = dVar18 * dVar27 - dVar28 * dVar47;
        dVar20 = dVar17 * dVar28 - dVar26 * dVar18;
        dVar21 = dVar19 * dVar29 - dVar29 * dVar19;
        dVar13 = dVar13 + dVar13;
        dVar20 = dVar20 + dVar20;
        dVar12 = dVar12 + dVar12;
        dVar21 = dVar21 + dVar21;
        dVar46 = *(double *)(param_3 + 0x7e0);
        dVar14 = (dVar13 * dVar28 - dVar12 * dVar26) + dVar39 * dVar20 + dVar47 +
                 *(double *)(param_3 + 0x7e8);
        dVar47 = *(double *)(param_3 + 0x7f0);
        dVar49 = *(double *)(param_3 + 0x7f8);
        *param_2 = dVar23 * dVar48 * -1.0 + dVar24 * dVar4 + dVar25 * dVar2 * 1.0 + dVar22 * dVar1;
        param_2[1] = dVar22 * dVar43 * 1.0 +
                     dVar25 * dVar45 + dVar24 * dVar3 * -1.0 + dVar23 * dVar39;
        param_2[2] = dVar25 * dVar48 * 1.0 +
                     ((dVar2 * dVar23 * 1.0 + dVar24 * dVar1) - dVar22 * dVar4);
        param_2[3] = dVar24 * dVar43 * -1.0 +
                     ((dVar3 * dVar22 * -1.0 + dVar25 * dVar39) - dVar23 * dVar45);
        auVar11._8_4_ = SUB84(dVar14,0);
        auVar11._0_8_ = (dVar12 * dVar27 - dVar28 * dVar20) + dVar1 * dVar13 + dVar17 + dVar46;
        auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 4) = auVar11;
        param_2[6] = (dVar20 * dVar26 - dVar27 * dVar13) + dVar1 * dVar12 + dVar18 + dVar47;
        param_2[7] = (dVar21 * dVar29 - dVar21 * dVar29) + dVar39 * dVar21 + dVar19 + dVar49;
        param_2[8] = dVar9 * dVar7;
        param_2[9] = dVar40 * dVar16;
        param_2[10] = dVar10 * dVar8;
        param_2[0xb] = auVar5._8_8_ * dVar15;
      }
      else {
        dVar4 = *(double *)(param_3 + 0x7c0);
        dVar45 = *(double *)(param_3 + 0x7c8);
        dVar48 = *(double *)(param_3 + 2000);
        dVar43 = dVar45 + dVar45;
        dVar46 = dVar48 + dVar48;
        dVar1 = dVar4 * (dVar4 + dVar4);
        local_188 = (1.0 - (dVar1 + dVar45 * dVar43)) * dVar8;
        dVar3 = *(double *)(param_3 + 0x7c0) * dVar46;
        dVar39 = *(double *)(param_3 + 0x7d8);
        dVar47 = dVar46 * dVar39;
        dVar49 = (dVar4 + dVar4) * *(double *)(param_3 + 0x7d8);
        dVar39 = dVar43 * dVar39;
        local_198 = (dVar39 + dVar3) * dVar8;
        dVar15 = dVar15 * auVar5._8_8_;
        dVar1 = (DAT_149934d80._8_8_ - (dVar48 * dVar46 + dVar1)) * dVar16;
        dVar2 = (dVar43 * dVar4 + dVar47) * dVar7;
        local_1a8 = (dVar46 * dVar45 + dVar49) * dVar16;
        dStack_190 = (dVar46 * dVar45 - dVar49) * dVar8;
        local_1c8 = (dVar3 - dVar39) * dVar7;
        local_1d8._8_4_ = SUB84(dVar2,0);
        local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar48 * dVar46 + dVar45 * dVar43)) * dVar7;
        local_1d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar1,0);
        local_1b8._0_8_ = (dVar43 * dVar4 - dVar47) * dVar16;
        local_1b8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = *(undefined8 *)(param_3 + 0x7e0);
        uStack_170 = *(undefined8 *)(param_3 + 0x7e8);
        local_168 = *(undefined8 *)(param_3 + 0x7f0);
        uStack_160 = 0x3ff0000000000000;
        dVar2 = *(double *)(param_1 + 4);
        dVar3 = *(double *)(param_1 + 6);
        dVar4 = *(double *)(param_1 + 8);
        dVar45 = dVar3 + dVar3;
        dVar48 = dVar4 + dVar4;
        dVar1 = dVar2 * (dVar2 + dVar2);
        local_208 = (1.0 - (dVar1 + dVar3 * dVar45)) * dVar10;
        dVar39 = *(double *)(param_1 + 10);
        dVar43 = dVar48 * dVar39;
        dVar46 = (dVar2 + dVar2) * *(double *)(param_1 + 10);
        dVar39 = dVar45 * dVar39;
        local_218 = (dVar39 + *(double *)(param_1 + 4) * dVar48) * dVar10;
        dStack_210 = (dVar48 * dVar3 - dVar46) * dVar10;
        dVar16 = dVar16 * dVar40;
        local_258 = ((double)DAT_149934d80 - (dVar4 * dVar48 + dVar3 * dVar45)) * dVar9;
        dVar1 = (DAT_149934d80._8_8_ - (dVar4 * dVar48 + dVar1)) * dVar40;
        dStack_250 = (dVar45 * dVar2 + dVar43) * dVar9;
        local_228 = (dVar48 * dVar3 + dVar46) * dVar40;
        local_248 = (*(double *)(param_1 + 4) * dVar48 - dVar39) * dVar9;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar1,0);
        local_238._0_8_ = (dVar45 * dVar2 - dVar43) * dVar40;
        local_238._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = *(undefined8 *)(param_1 + 0xc);
        uStack_1f0 = *(undefined8 *)(param_1 + 0xe);
        local_1e8 = *(undefined8 *)(param_1 + 0x10);
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar37._8_8_ = -(ulonglong)(0.0 <= dVar16);
        auVar37._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
        auVar41 = blendvpd(_DAT_149936790,auVar51,auVar37);
        uVar36 = -(ulonglong)(0.0 <= dVar8 * dVar10);
        dVar40 = (double)(~uVar36 & 0xbff0000000000000 | uVar36 & 0x3ff0000000000000);
        dVar39 = auVar41._0_8_;
        local_148 = local_148 * dVar39;
        local_150 = local_150 * dVar39;
        local_158 = local_158 * dVar39;
        dVar39 = auVar41._8_8_;
        local_128 = local_128 * dVar39;
        local_130 = local_130 * dVar39;
        local_138 = dVar39 * local_138;
        local_108 = local_108 * dVar40;
        local_110 = local_110 * dVar40;
        local_118 = dVar40 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar40 = local_268 * local_268 + local_278 * local_278;
        dVar39 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar42._0_8_ = dVar40 + dVar39;
        auVar42._8_8_ = dVar40 + dVar39;
        auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
        auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
        auVar41 = sqrtpd(auVar42,auVar42);
        auVar50 = divpd(auVar51,auVar41);
        auVar51._0_8_ = auVar50._0_8_ * local_268;
        auVar51._8_8_ = auVar50._8_8_ * dStack_260;
        auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar38);
        auVar5._8_4_ = SUB84(dVar16,0);
        auVar5._0_8_ = dVar7 * dVar9;
        auVar5._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 8) = auVar5;
        auVar44._8_4_ = SUB84(dVar15,0);
        auVar44._0_8_ = dVar8 * dVar10;
        auVar44._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 10) = auVar44;
        *param_2 = (double)((ulonglong)(local_278 * auVar50._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
        param_2[1] = (double)((ulonglong)(dStack_270 * auVar50._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
        *(undefined1 (*) [16])(param_2 + 2) = auVar41;
        param_2[4] = local_f8;
        param_2[5] = dStack_f0;
        param_2[6] = local_e8;
        param_2[7] = 0.0;
      }
      goto LAB_14655956f;
    }
    if ((iVar30 == 2) || (iVar30 == 3)) {
      pdVar33 = (double *)(param_3 + 0x7c0);
      for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
        *param_2 = *pdVar33;
        pdVar33 = pdVar33 + 1;
        param_2 = param_2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_298);
    }
LAB_1465598ab:
    pdVar33 = (double *)(param_3 + 0x7c0);
  }
  pdVar34 = param_2;
  for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
    *pdVar34 = *pdVar33;
    pdVar33 = pdVar33 + 1;
    pdVar34 = pdVar34 + 1;
  }
LAB_14655956f:
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146559cb0 FUN_146559cb0 body=62 status=ok
// SIG undefined FUN_146559cb0(void)

undefined8 FUN_146559cb0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_1447210f0(param_1);
    if (*(longlong **)(lVar1 + 0x178) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146559cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x178) + 0x640))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146559d0e FUN_146559d0e body=108 status=ok
// SIG undefined FUN_146559d0e(void)

undefined1 FUN_146559d0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x9c)) {
    FUN_140b361ee(param_2,1);
  }
  param_1 = param_1 + 0x390;
  lVar1 = FUN_14479d2ce(param_1);
  if ((*(byte *)(lVar1 + 99) & 8) == 0) {
    uVar2 = FUN_14479d2ce(param_1);
    FUN_140c7ce82(uVar2,1);
  }
  lVar1 = FUN_14479d2ce(param_1);
  if ((*(byte *)(lVar1 + 0x60) & 0x10) == 0) {
    uVar2 = FUN_14479d2ce(param_1);
    FUN_1405ba932(uVar2,0);
  }
  return 1;
}



// FUNCTION 146559d80 FUN_146559d80 body=117 status=ok
// SIG undefined FUN_146559d80(void)

void FUN_146559d80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_141245f18();
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar1 != 0)) {
    lVar2 = FUN_1401b1144();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar1 + 0x634);
      *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(lVar1 + 0x638);
      *(double *)(param_1 + 0x78) =
           (double)*(float *)(lVar1 + 0x63c) * (double)*(float *)(lVar1 + 0x63c);
    }
  }
  return;
}



// FUNCTION 146559df6 FUN_146559df6 body=127 status=ok
// SIG undefined FUN_146559df6(void)

void FUN_146559df6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_14094b946(param_1,&local_20);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146559e76 FUN_146559e76 body=172 status=ok
// SIG undefined FUN_146559e76(void)

undefined8 * FUN_146559e76(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  lVar1 = DAT_14cb88bb8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb88bb8 != 0) {
    uVar2 = thunk_FUN_14050fd64();
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 8);
    }
    FUN_1447325ac(puVar3,&local_30,1);
    local_40 = 0;
    local_48 = 0;
    FUN_140844808(uVar2,param_2,local_30,lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146559f24 FUN_146559f24 body=886 status=ok
// SIG undefined FUN_146559f24(void)

longlong * FUN_146559f24(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_14655a093;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_14655a0c0:
    plVar6 = (longlong *)FUN_14892f7a0();
    plVar8 = plVar6 + 2;
    local_78 = plVar8;
    local_70 = plVar6;
    FUN_14892f88c(&local_78,plVar8);
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
LAB_14655a162:
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
joined_r0x00014655a258:
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
          goto joined_r0x00014655a258;
        }
      }
      else {
        param_1[1] = (longlong)plVar6;
        if (plVar8 != (longlong *)0x0) goto LAB_14655a162;
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
    if (lVar7 == 0) goto LAB_14655a093;
  }
  else {
    uVar5 = FUN_14580e7fe();
    local_68 = *param_2;
    local_60 = (undefined4)param_2[1];
    local_58 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_50,&local_68,uVar5,param_3);
    lVar7 = CONCAT44(uStack_4c,local_50);
    if (lVar7 != 0) {
      uVar5 = FUN_14580e7fe();
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
LAB_14655a1db:
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
                  goto LAB_14655a1db;
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
    if (lVar7 == 0) goto LAB_14655a0c0;
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
LAB_14655a093:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655a29c FUN_14655a29c body=96 status=ok
// SIG undefined FUN_14655a29c(void)

void FUN_14655a29c(longlong param_1,char param_2)

{
  longlong lVar1;
  
  FUN_1407a7646();
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  if ((param_2 == '\x01' && lVar1 != 0) && (DAT_14cadbee0 == '\x01')) {
    FUN_14082bc44(param_1 + 0x40,lVar1,lVar1 + 0x950);
    return;
  }
  return;
}



// FUNCTION 14655a2fc FUN_14655a2fc body=254 status=ok
// SIG undefined FUN_14655a2fc(void)

undefined8
FUN_14655a2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9c20;
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
  *local_48 = &PTR_FUN_14b41f4a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ebcfd8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655a3fc FUN_14655a3fc body=38 status=ok
// SIG undefined FUN_14655a3fc(void)

void FUN_14655a3fc(longlong param_1,undefined8 param_2)

{
  FUN_141245f18();
  FUN_14485c47a(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 14655a422 FUN_14655a422 body=652 status=ok
// SIG undefined FUN_14655a422(void)

longlong * FUN_14655a422(longlong param_1,longlong *param_2,longlong *****param_3)

{
  longlong *****ppppplVar1;
  int *piVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ****pppplVar5;
  int iVar6;
  longlong *****ppppplVar7;
  longlong *****ppppplVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  longlong ****local_68;
  longlong ****local_60;
  longlong ****local_58;
  longlong ****local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140520a5e(param_1,&local_58);
  local_68 = (longlong ****)0x0;
  local_60 = local_50;
  if ((longlong *****)local_50 == (longlong *****)0x0) {
    ppppplVar8 = (longlong *****)0x0;
  }
  else {
    iVar6 = *(int *)(local_50 + 1);
    do {
      if (iVar6 == 0) {
        local_60 = (longlong ****)0x0;
        break;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar6 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar9);
    LOCK();
    piVar2 = (int *)((longlong)local_50 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*local_50)[2])();
    }
    if ((longlong *****)local_60 != (longlong *****)0x0) {
      local_68 = local_58;
    }
    ppppplVar8 = (longlong *****)local_60;
    if ((longlong *****)local_68 != (longlong *****)0x0) goto LAB_14655a55c;
  }
  ppppplVar7 = (longlong *****)FUN_14001cc68(200,0x10);
  ppppplVar7[1] = (longlong ****)&DAT_100000001;
  *ppppplVar7 = (longlong ****)&PTR_FUN_14a90a2b0;
  ppppplVar1 = ppppplVar7 + 2;
  FUN_14050fb38(ppppplVar1,param_3,0);
  local_58 = (longlong ****)ppppplVar1;
  local_50 = (longlong ****)ppppplVar7;
  FUN_140b0cc54(&local_58,ppppplVar1);
  pppplVar5 = local_50;
  pppplVar4 = local_60;
  local_68 = local_58;
  if ((longlong *****)local_50 == (longlong *****)0x0) {
    if (ppppplVar8 != (longlong *****)0x0) {
      local_60 = (longlong ****)0x0;
LAB_14655a5dc:
      LOCK();
      ppppplVar1 = ppppplVar8 + 1;
      *(int *)ppppplVar1 = *(int *)ppppplVar1 + -1;
      UNLOCK();
      if (*(int *)ppppplVar1 == 0) {
        (*(code *)**ppppplVar8)(ppppplVar8);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
joined_r0x00014655a617:
        if (iVar6 == 0) {
          (*(code *)(*ppppplVar8)[2])(ppppplVar8);
        }
      }
      goto LAB_14655a4ff;
    }
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
    UNLOCK();
    if (local_50 == local_60) {
      LOCK();
      ppppplVar8 = (longlong *****)(local_50 + 1);
      *(int *)ppppplVar8 = *(int *)ppppplVar8 + -1;
      UNLOCK();
      if (*(int *)ppppplVar8 == 0) {
        (*(code *)**local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
        ppppplVar8 = (longlong *****)pppplVar5;
        goto joined_r0x00014655a617;
      }
    }
    else {
      local_60 = local_50;
      ppppplVar8 = (longlong *****)pppplVar4;
      if ((longlong *****)pppplVar4 != (longlong *****)0x0) goto LAB_14655a5dc;
    }
LAB_14655a4ff:
    pppplVar4 = local_50;
    if ((longlong *****)local_50 != (longlong *****)0x0) {
      LOCK();
      ppppplVar8 = (longlong *****)(local_50 + 1);
      *(int *)ppppplVar8 = *(int *)ppppplVar8 + -1;
      UNLOCK();
      if (*(int *)ppppplVar8 == 0) {
        (*(code *)**local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
        }
      }
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
  local_50 = (longlong ****)&local_68;
  local_58 = (longlong ****)param_3;
  FUN_14050fda8(param_1 + 0x4e8,local_44,&local_58,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
LAB_14655a55c:
  pppplVar4 = local_60;
  *param_2 = (longlong)local_68;
  param_2[1] = (longlong)local_60;
  if ((longlong *****)local_60 != (longlong *****)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = *(int *)(local_60 + 1) + 1;
    UNLOCK();
    if ((longlong *****)local_60 != (longlong *****)0x0) {
      LOCK();
      ppppplVar8 = (longlong *****)(local_60 + 1);
      *(int *)ppppplVar8 = *(int *)ppppplVar8 + -1;
      UNLOCK();
      if (*(int *)ppppplVar8 == 0) {
        (*(code *)**local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655a6b0 FUN_14655a6b0 body=106 status=ok
// SIG undefined FUN_14655a6b0(void)

void FUN_14655a6b0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = param_3[2];
    local_28 = *param_3;
    uStack_20 = param_3[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_145d816a4(local_48,&local_48,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655a71c FUN_14655a71c body=106 status=ok
// SIG undefined FUN_14655a71c(void)

void FUN_14655a71c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = param_3[2];
    local_28 = *param_3;
    uStack_20 = param_3[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_1458bf33a(local_48,&local_48,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655a788 FUN_14655a788 body=121 status=ok
// SIG undefined FUN_14655a788(void)

undefined8 FUN_14655a788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_140fecfdc(param_3);
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_145722198(plVar2);
    if ((plVar3 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar1 != '\0')) {
      return 1;
    }
    plVar3 = (longlong *)plVar2[0x36];
    if (((plVar3 != plVar2 && plVar3 != (longlong *)0x0) &&
        (plVar2 = (longlong *)(**(code **)(*plVar3 + 0x5d8))(), plVar2 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14655a802 FUN_14655a802 body=152 status=ok
// SIG undefined FUN_14655a802(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14655a802(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"player_analytics",1);
  FUN_14147d486(&DAT_14cb89298,local_18,6);
  _DAT_14cb89298 = &PTR_FUN_14b41eda8;
  FUN_145a0a460(&DAT_14cb89298);
  FUN_140834d1a(&DAT_14cb89298,L"Aggregated player action statistics.");
  _DAT_14cb892f8 = 0;
  _DAT_14cb892f0 = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655a8e8 FUN_14655a8e8 body=29 status=ok
// SIG undefined FUN_14655a8e8(void)

undefined8 FUN_14655a8e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655a906 FUN_14655a906 body=29 status=ok
// SIG undefined FUN_14655a906(void)

bool FUN_14655a906(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14655a924 FUN_14655a924 body=24 status=ok
// SIG undefined FUN_14655a924(void)

bool FUN_14655a924(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655a93c FUN_14655a93c body=29 status=ok
// SIG undefined FUN_14655a93c(void)

bool FUN_14655a93c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14655a95a FUN_14655a95a body=24 status=ok
// SIG undefined FUN_14655a95a(void)

bool FUN_14655a95a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655a972 FUN_14655a972 body=85 status=ok
// SIG undefined FUN_14655a972(void)

void FUN_14655a972(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41efc0;
  return;
}



// FUNCTION 14655a9c8 FUN_14655a9c8 body=29 status=ok
// SIG undefined FUN_14655a9c8(void)

undefined8 FUN_14655a9c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655a9e6 FUN_14655a9e6 body=147 status=ok
// SIG undefined FUN_14655a9e6(void)

void FUN_14655a9e6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14655aa7a FUN_14655aa7a body=283 status=ok
// SIG undefined FUN_14655aa7a(void)

undefined8 * FUN_14655aa7a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b1d7d10;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1457e219a(param_1 + 4,iVar1,0);
    FUN_1457e214d(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_141026906(param_1 + 6,iVar1,0);
    FUN_1410268b9(param_1[6],uVar2,iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1457e20d8(param_1 + 8,iVar1,0);
    FUN_1457e208c(param_1[8],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  lVar3 = *(longlong *)(param_2 + 0x60);
  param_1[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14655ab96 FUN_14655ab96 body=9 status=ok
// SIG undefined FUN_14655ab96(void)

void FUN_14655ab96(longlong param_1)

{
  FUN_140beec42(param_1 + 0x10);
  return;
}



// FUNCTION 14655aba0 FUN_14655aba0 body=29 status=ok
// SIG undefined FUN_14655aba0(void)

undefined8 FUN_14655aba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655abc8 FUN_14655abc8 body=29 status=ok
// SIG undefined FUN_14655abc8(void)

undefined8 FUN_14655abc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655abe6 FUN_14655abe6 body=66 status=ok
// SIG undefined FUN_14655abe6(void)

undefined8 * FUN_14655abe6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41f430;
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



// FUNCTION 14655ac28 FUN_14655ac28 body=26 status=ok
// SIG undefined FUN_14655ac28(void)

bool FUN_14655ac28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14655ac42 FUN_14655ac42 body=24 status=ok
// SIG undefined FUN_14655ac42(void)

bool FUN_14655ac42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655ac5a FUN_14655ac5a body=85 status=ok
// SIG undefined FUN_14655ac5a(void)

void FUN_14655ac5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f520;
  return;
}



// FUNCTION 14655acb0 FUN_14655acb0 body=29 status=ok
// SIG undefined FUN_14655acb0(void)

undefined8 FUN_14655acb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655acce FUN_14655acce body=483 status=ok
// SIG undefined FUN_14655acce(void)

void FUN_14655acce(longlong *param_1)

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



// FUNCTION 14655aeb2 FUN_14655aeb2 body=171 status=ok
// SIG undefined FUN_14655aeb2(void)

void FUN_14655aeb2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar3 = FUN_144a79464();
    lVar2 = *(longlong *)(lVar2 + 0x1f0);
    if ((((lVar2 != 0) &&
         ((((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30 && (*(longlong *)(lVar2 + 0x1e0) != 0)))))) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68), lVar2 != 0)) &&
       (-1 < *(short *)(param_2 + 0x18))) {
      plVar4 = (longlong *)FUN_140d71416(lVar2,param_2 + 0x18);
      if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x4dc) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014655af56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x750))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14655af5e FUN_14655af5e body=353 status=ok
// SIG undefined FUN_14655af5e(void)

void FUN_14655af5e(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar3 = FUN_144a79464();
    lVar2 = *(longlong *)(lVar2 + 0x1f0);
    if ((((lVar2 != 0) &&
         ((((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30 && (*(longlong *)(lVar2 + 0x1e0) != 0)))))) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68), lVar2 != 0)) &&
       (-1 < *(short *)(param_2 + 3))) {
      plVar4 = (longlong *)FUN_140d71416(lVar2,param_2 + 3);
      if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x4dc) == '\0')) {
        FUN_1413fa72a(*param_2,local_50,param_2 + 3);
        FUN_1447325ac(local_50,&local_58,1);
        (**(code **)(*plVar4 + 0x7a0))(plVar4);
        *(undefined8 *)((longlong)plVar4 + 0x4c4) = local_58;
        if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
          (**(code **)(*plVar4 + 0x790))(plVar4,param_4);
        }
        *(undefined1 *)((longlong)plVar4 + 0x4dc) = 1;
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655b0c0 FUN_14655b0c0 body=30 status=ok
// SIG undefined FUN_14655b0c0(void)

void FUN_14655b0c0(longlong param_1)

{
  FUN_1405f1eac();
  *(undefined8 *)(param_1 + 0x530) = 0;
  return;
}



// FUNCTION 14655b0de FUN_14655b0de body=96 status=ok
// SIG undefined FUN_14655b0de(void)

void FUN_14655b0de(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x4c4) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1449f3324();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014655b133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10c0))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14655b13e FUN_14655b13e body=37 status=ok
// SIG undefined FUN_14655b13e(void)

void FUN_14655b13e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1403b0700();
  FUN_145d0a0b4(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14655b164 FUN_14655b164 body=176 status=ok
// SIG undefined FUN_14655b164(void)

undefined4 *
FUN_14655b164(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  uVar3 = FUN_1447262c2(param_4);
  plVar4 = (longlong *)FUN_1401cd47c(uVar3);
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  lVar5 = FUN_1401cd272(param_1 + 8,uVar3);
  if (lVar5 == 0) {
    uVar2 = 2;
    uVar8 = 0;
  }
  else {
    cVar1 = FUN_144729dda(lVar5 + 0x58);
    lVar7 = 0x2c;
    if (cVar1 != '\0') {
      lVar6 = FUN_14479d2ce(lVar5 + 0x58);
      if (*(char *)(lVar6 + 0x180) == '\x01') {
        lVar7 = (ulonglong)(*(byte *)(lVar5 + 0x91) ^ 1) * 4 + 0x28;
      }
    }
    uVar8 = *(undefined4 *)(param_1 + lVar7);
    uVar2 = 3;
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar8;
  *(undefined1 *)(param_2 + 8) = uVar2;
  return param_2;
}



// FUNCTION 14655b214 FUN_14655b214 body=67 status=ok
// SIG undefined FUN_14655b214(void)

void FUN_14655b214(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(param_2 + 0x20);
  FUN_140c57d2c(param_1,param_1 + 0x20);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655b258 FUN_14655b258 body=591 status=ok
// SIG undefined FUN_14655b258(void)

void FUN_14655b258(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_58,L"ProgressGraphDef",1);
  uVar1 = FUN_140db2c5a();
  FUN_140db2c5a();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"GraphGroupDef",1);
  uVar1 = FUN_140db2c5a();
  FUN_140db2c5a();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"Nodes",1);
  uVar1 = FUN_140db2c5a();
  FUN_140db2c5a();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"Groups",1);
  uVar1 = FUN_140db2c5a();
  FUN_140db2c5a();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsUnlocked",1);
  uVar1 = FUN_140db2c5a();
  FUN_140db2c5a();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bIsActivated",1);
  uVar1 = FUN_140db2c5a();
  FUN_140db2c5a();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"AllowedOperations",1);
  uVar1 = FUN_140db2c5a();
  FUN_140db2c5a();
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



// FUNCTION 14655b4a8 FUN_14655b4a8 body=140 status=ok
// SIG undefined FUN_14655b4a8(void)

undefined8
FUN_14655b4a8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (plVar3 = (longlong *)FUN_1405f1c0c(lVar1), plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x328))(plVar3,lVar1,param_2,param_3,param_4,param_5,param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14655b534 FUN_14655b534 body=140 status=ok
// SIG undefined FUN_14655b534(void)

void FUN_14655b534(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_38,L"ProgressStateData",1);
  uVar1 = FUN_140db2b7c();
  FUN_140db2b7c();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655b5c2 FUN_14655b5c2 body=207 status=ok
// SIG undefined FUN_14655b5c2(void)

void FUN_14655b5c2(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    puVar3 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb899a0);
    pbVar1 = (byte *)*puVar3;
    puVar5 = &DAT_149e02088;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
      puVar5 = &DAT_149e02088;
      if (*(undefined1 **)(pbVar1 + 8) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(pbVar1 + 8);
      }
    }
    FUN_1400b22c2(local_38,puVar5);
    FUN_140b10a34(local_38,param_1 + 8);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    uVar4 = FUN_144a06846(param_2,&DAT_14cb899c8);
    uVar2 = FUN_1410451c0(uVar4,0);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655b692 FUN_14655b692 body=93 status=ok
// SIG undefined FUN_14655b692(void)

void FUN_14655b692(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4203c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14655b6f0 FUN_14655b6f0 body=29 status=ok
// SIG undefined FUN_14655b6f0(void)

bool FUN_14655b6f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14655b70e FUN_14655b70e body=26 status=ok
// SIG undefined FUN_14655b70e(void)

bool FUN_14655b70e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14655b728 FUN_14655b728 body=24 status=ok
// SIG undefined FUN_14655b728(void)

bool FUN_14655b728(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655b740 FUN_14655b740 body=29 status=ok
// SIG undefined FUN_14655b740(void)

bool FUN_14655b740(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14655b75e FUN_14655b75e body=26 status=ok
// SIG undefined FUN_14655b75e(void)

bool FUN_14655b75e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14655b778 FUN_14655b778 body=24 status=ok
// SIG undefined FUN_14655b778(void)

bool FUN_14655b778(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655b790 FUN_14655b790 body=29 status=ok
// SIG undefined FUN_14655b790(void)

undefined8 FUN_14655b790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655b7ae FUN_14655b7ae body=29 status=ok
// SIG undefined FUN_14655b7ae(void)

undefined8 FUN_14655b7ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655b7cc FUN_14655b7cc body=29 status=ok
// SIG undefined FUN_14655b7cc(void)

undefined8 FUN_14655b7cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655b7ea FUN_14655b7ea body=29 status=ok
// SIG undefined FUN_14655b7ea(void)

undefined8 FUN_14655b7ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655b808 FUN_14655b808 body=118 status=ok
// SIG undefined FUN_14655b808(void)

void FUN_14655b808(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b420a70;
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



// FUNCTION 14655b87e FUN_14655b87e body=29 status=ok
// SIG undefined FUN_14655b87e(void)

undefined8 FUN_14655b87e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655b89c FUN_14655b89c body=95 status=ok
// SIG undefined FUN_14655b89c(void)

void FUN_14655b89c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14655b8fc FUN_14655b8fc body=428 status=ok
// SIG undefined FUN_14655b8fc(void)

longlong * FUN_14655b8fc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14655b9dc:
    *puVar5 = &PTR_LAB_14b420dd0;
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
    *puVar5 = &PTR_FUN_14b420e70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14655b9dc;
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
    *puVar5 = &PTR_LAB_14b420dd0;
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
    *puVar5 = &PTR_FUN_14b420e70;
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



// FUNCTION 14655baa8 FUN_14655baa8 body=68 status=ok
// SIG undefined FUN_14655baa8(void)

undefined8 * FUN_14655baa8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b420e70;
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



// FUNCTION 14655baec FUN_14655baec body=26 status=ok
// SIG undefined FUN_14655baec(void)

bool FUN_14655baec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14655bb06 FUN_14655bb06 body=71 status=ok
// SIG undefined FUN_14655bb06(void)

undefined8 * FUN_14655bb06(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14655bb4e FUN_14655bb4e body=29 status=ok
// SIG undefined FUN_14655bb4e(void)

undefined8 FUN_14655bb4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655bb6c FUN_14655bb6c body=125 status=ok
// SIG undefined FUN_14655bb6c(void)

void FUN_14655bb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655bbea FUN_14655bbea body=190 status=ok
// SIG undefined FUN_14655bbea(void)

undefined8 * FUN_14655bbea(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a410) {
    FUN_144b3d300(&DAT_14cb8a410);
    if (DAT_14cb8a410 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"igger",6);
      builtin_wcsncpy(local_48 + 8,L"ximityTr",8);
      builtin_wcsncpy(local_48,L"SetupPro",8);
      FUN_1446f470e(&DAT_14cb8a408,local_48,1);
      _Init_thread_footer(&DAT_14cb8a410);
    }
  }
  *param_1 = DAT_14cb8a408;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655bcaa FUN_14655bcaa body=240 status=ok
// SIG undefined FUN_14655bcaa(void)

void FUN_14655bcaa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_AttachmentReplication",1);
    FUN_140721fbe(param_1 + 0x1328,local_20);
  }
  else {
    if ((*(longlong *)(param_1 + 0x1c8) != 0) && (*(char *)(param_1 + 0xfd8) < '\0')) {
      FUN_140583e18(*(longlong *)(param_1 + 0x1c8),1);
    }
    FUN_140fbdf08(param_1);
    if (*(char *)(param_1 + 0xfd8) < '\0') {
      lVar1 = FUN_144944cf2(param_1);
      if (lVar1 != 0) {
        lVar1 = FUN_144944cf2(param_1);
        lVar1 = *(longlong *)(lVar1 + 0x1c8);
        if (lVar1 != 0) {
          lVar2 = FUN_144a3a302();
          lVar1 = *(longlong *)(lVar1 + 0x10);
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
          }
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



// FUNCTION 14655bdcc FUN_14655bdcc body=506 status=ok
// SIG undefined FUN_14655bdcc(void)

void FUN_14655bdcc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x1148) = param_2;
  if (((((*(byte *)(param_1 + 0x1151) & 1) != 0) &&
       (lVar3 = *(longlong *)(param_1 + 0xe10), lVar3 != 0)) && (param_2 != 0)) &&
     ((*(byte *)(lVar3 + 0x251) & 4) == 0)) {
    if ((*(longlong *)(param_1 + 0x1b0) != param_2) || ((*(byte *)(lVar3 + 0x250) & 2) != 0)) {
      FUN_140b515ce(param_1,param_2);
      lVar3 = *(longlong *)(param_1 + 0xe10);
    }
    if (0.0 < *(float *)(lVar3 + 0x254)) {
      local_b8 = 0;
      uVar4 = FUN_1401b4c98(param_1);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xe10) + 0x254);
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar2 = local_b0;
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
      *local_b0 = &PTR_FUN_14b4225a0;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,param_1);
      *(undefined4 *)(puVar2 + 5) = 0;
      puVar2[4] = &LAB_14893d428;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_c8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar4,&local_b8,&local_98,uVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655bfc8 FUN_14655bfc8 body=147 status=ok
// SIG undefined FUN_14655bfc8(void)

undefined8 FUN_14655bfc8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x80);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x80);
    if ((longlong)iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar2) == *param_2) {
          return 0;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)iVar1 << 3 != lVar2);
    }
  }
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_1446f84a2(param_1 + 0x78,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = *param_2;
  FUN_141165eb6(param_1 + 0x30,param_2);
  return 1;
}



// FUNCTION 14655c05c FUN_14655c05c body=282 status=ok
// SIG undefined FUN_14655c05c(void)

void FUN_14655c05c(longlong param_1,undefined4 param_2)

{
  void **ppvVar1;
  void *_Src;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0:
    pwVar2 = L"Can\'t process reward.";
    break;
  case 1:
    pwVar2 = L"Unique reward already given.";
    break;
  case 2:
    pwVar2 = L"Failed to process some rewards.";
    break;
  case 3:
    pwVar2 = L"Failed to process all rewards.";
    break;
  default:
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    goto LAB_14655c13c;
  }
  FUN_140056680(&local_38,pwVar2);
  _Src = local_38;
  ppvVar1 = (void **)(param_1 + 0xa8);
  if (ppvVar1 != &local_38) {
    *(int *)(param_1 + 0xb0) = local_30;
    if (local_30 == 0 && *(int *)(param_1 + 0xb4) == 0) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_30);
      if (local_30 != 0) {
        memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14655c13c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655c18e FUN_14655c18e body=140 status=ok
// SIG undefined FUN_14655c18e(void)

undefined8
FUN_14655c18e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (plVar3 = (longlong *)FUN_1405f1c0c(lVar1), plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x328))(plVar3,lVar1,param_2,param_3,param_4,param_5,param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14655c220 FUN_14655c220 body=495 status=ok
// SIG undefined FUN_14655c220(void)

void FUN_14655c220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = FUN_1411d67c8();
  if (lVar7 != 0) {
    lVar8 = FUN_1447210f0(lVar7);
    if (lVar8 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      plVar5 = *(longlong **)(param_1 + 0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        lVar9 = FUN_140963a30(lVar4 + 0x60);
        if (lVar9 != 0) {
          lVar7 = FUN_1407ca824(lVar7);
          if (lVar7 != 0) {
            lVar10 = FUN_1411d6a18(param_1);
            if (lVar10 != 0) {
              local_78 = 0;
              local_70 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_6c = 0xffffffff00000080;
              local_64 = 0;
              local_58 = 0;
              local_50 = 0;
              fVar3 = *(float *)(lVar10 + 0x84);
              if (0.0 <= fVar3) {
                if (*(longlong **)(lVar8 + 0x178) == (longlong *)0x0) {
                  dVar11 = *(double *)(lVar8 + 0x6d0);
                }
                else {
                  dVar11 = (double)(**(code **)(**(longlong **)(lVar8 + 0x178) + 0x640))();
                  fVar3 = *(float *)(lVar10 + 0x84);
                }
                FUN_1489a502a(&local_98,
                              (ulonglong)(-(uint)(fVar3 < 0.0) & 0x7f7fffff) |
                              CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                       ~-(uint)(fVar3 < 0.0) & (uint)((float)dVar11 - fVar3)));
              }
              if (*(char *)(lVar4 + 0x88) == '\x01') {
                FUN_140dd07e4(&local_98,2);
              }
              uVar6 = FUN_14096df60(lVar7,lVar9,1,&local_98);
              *(undefined1 *)(param_1 + 0x50) = uVar6;
              local_50 = 0;
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              FUN_140333f4e(&local_98);
            }
          }
        }
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
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655c410 FUN_14655c410 body=52 status=ok
// SIG undefined FUN_14655c410(void)

void FUN_14655c410(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1411d67c8();
  lVar2 = FUN_1407ca824(uVar1);
  if (lVar2 != 0) {
    FUN_140c4a7e8(lVar2,*(undefined1 *)(param_1 + 0x50),1);
    return;
  }
  return;
}



// FUNCTION 14655c444 FUN_14655c444 body=157 status=ok
// SIG undefined FUN_14655c444(void)

longlong * FUN_14655c444(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar1 = FUN_144a74fb4();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return param_1;
  }
  lVar1 = FUN_144a6c4d8();
  if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar1 = FUN_140e1d66a();
    if (*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) {
      return (longlong *)0x0;
    }
    if (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30) {
      return (longlong *)0x0;
    }
    param_1 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  plVar2 = (longlong *)FUN_140849bbe(param_1);
  return plVar2;
}



// FUNCTION 14655c4e2 FUN_14655c4e2 body=157 status=ok
// SIG undefined FUN_14655c4e2(void)

longlong * FUN_14655c4e2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar1 = FUN_1400b5618();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return param_1;
  }
  lVar1 = FUN_144a6c4d8();
  if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar1 = FUN_140e1d66a();
    if (*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) {
      return (longlong *)0x0;
    }
    if (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30) {
      return (longlong *)0x0;
    }
    param_1 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  plVar2 = (longlong *)FUN_1410c6bfc(param_1);
  return plVar2;
}



// FUNCTION 14655c580 FUN_14655c580 body=85 status=ok
// SIG undefined FUN_14655c580(void)

void FUN_14655c580(void)

{
  FUN_144760e21(DAT_14cb89d98,DAT_14cb89da0);
  if (DAT_14cb89d98 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cb89d80,DAT_14cb89d88);
  if (DAT_14cb89d80 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14655c5d6 FUN_14655c5d6 body=147 status=ok
// SIG undefined FUN_14655c5d6(void)

void FUN_14655c5d6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
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



// FUNCTION 14655c66a FUN_14655c66a body=29 status=ok
// SIG undefined FUN_14655c66a(void)

undefined8 FUN_14655c66a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655c688 FUN_14655c688 body=66 status=ok
// SIG undefined FUN_14655c688(void)

undefined8 * FUN_14655c688(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b422b20;
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



// FUNCTION 14655c6d6 FUN_14655c6d6 body=29 status=ok
// SIG undefined FUN_14655c6d6(void)

undefined8 FUN_14655c6d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655c6f4 FUN_14655c6f4 body=29 status=ok
// SIG undefined FUN_14655c6f4(void)

undefined8 FUN_14655c6f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655c712 FUN_14655c712 body=29 status=ok
// SIG undefined FUN_14655c712(void)

undefined8 FUN_14655c712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655c730 FUN_14655c730 body=29 status=ok
// SIG undefined FUN_14655c730(void)

undefined8 FUN_14655c730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655c74e FUN_14655c74e body=184 status=ok
// SIG undefined FUN_14655c74e(void)

undefined8 * FUN_14655c74e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  local_2a = *(undefined2 *)((longlong)param_2 + 6);
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 3,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1403b5126(param_2 + 3,&local_48,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655c807 FUN_14655c807 body=47 status=ok
// SIG undefined FUN_14655c807(void)

longlong FUN_14655c807(void)

{
  if (DAT_14cb8a488 == 0) {
    FUN_14073dd9a(&DAT_14cb8a488,&PTR_LAB_14b422fb8);
  }
  return DAT_14cb8a488;
}



// FUNCTION 14655c836 FUN_14655c836 body=47 status=ok
// SIG undefined FUN_14655c836(void)

longlong FUN_14655c836(void)

{
  if (DAT_14cb8a4a0 == 0) {
    FUN_14073dd9a(&DAT_14cb8a4a0,&PTR_LAB_14b423418);
  }
  return DAT_14cb8a4a0;
}



// FUNCTION 14655c866 FUN_14655c866 body=259 status=ok
// SIG undefined FUN_14655c866(void)

undefined8 * FUN_14655c866(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *param_2;
  param_1[1] = param_3;
  if ((param_3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
    param_3 = (longlong *)param_1[1];
  }
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_3 != (longlong *)0x0) {
    uVar1 = FUN_140427846();
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          FUN_1406f1bc8(lVar4,local_58);
          FUN_1411b8130(param_1 + 2,local_58);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655c96a FUN_14655c96a body=232 status=ok
// SIG undefined FUN_14655c96a(void)

void FUN_14655c96a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x4fc) != 0) && (*(char *)(param_1 + 0x4d0) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    if (*param_2 == DAT_14cb8a5c0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (*param_2 == DAT_14cb8a538) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    FUN_1400021e4(param_2,local_78);
    FUN_1489507ce(local_68,local_78);
    FUN_146341752(lVar1,local_68,1);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655ca90 FUN_14655ca90 body=266 status=ok
// SIG undefined FUN_14655ca90(void)

undefined8
FUN_14655ca90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined2 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4244b0;
  *(undefined2 *)(local_48 + 1) = *param_5;
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
  *local_48 = &PTR_FUN_14b424440;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655cb9c FUN_14655cb9c body=231 status=ok
// SIG undefined FUN_14655cb9c(void)

undefined8 * FUN_14655cb9c(longlong param_1,short param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  short *psVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x520) != 0) {
    psVar5 = (short *)(*(longlong *)(param_1 + 0x518) + 0xc);
    lVar4 = 0;
    while (*psVar5 != param_2) {
      psVar5 = psVar5 + 0x48;
      lVar4 = lVar4 + -0x90;
      if (-lVar4 == (longlong)*(int *)(param_1 + 0x520) * 0x90) {
        return (undefined8 *)0x0;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x518) - lVar4;
    if (lVar4 != 0) {
      if ((longlong)*(int *)(psVar5 + 0x32) != 0) {
        puVar3 = *(undefined8 **)(psVar5 + 0x2e);
        lVar6 = (longlong)*(int *)(psVar5 + 0x32) * 0xc;
        do {
          lVar2 = FUN_14479d2ce(puVar3);
          if (lVar2 == param_3) {
            if (puVar3 != (undefined8 *)0x0) {
              return puVar3;
            }
            break;
          }
          puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
          lVar6 = lVar6 + -0xc;
        } while (lVar6 != 0);
      }
      iVar1 = *(int *)(psVar5 + 0x32);
      *(uint *)(psVar5 + 0x32) = iVar1 + 1U;
      if (*(uint *)(psVar5 + 0x34) < iVar1 + 1U) {
        FUN_14655d502(lVar4 + 0x68,iVar1);
      }
      puVar3 = (undefined8 *)(*(longlong *)(psVar5 + 0x2e) + (longlong)iVar1 * 0xc);
      *puVar3 = 0;
      FUN_14485c47a(puVar3,param_3);
      *(undefined1 *)(puVar3 + 1) = 0;
      return puVar3;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14655cc84 FUN_14655cc84 body=239 status=ok
// SIG undefined FUN_14655cc84(void)

undefined8 FUN_14655cc84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8bcd00;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b4246e0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1461a6280;
  FUN_141211dc4(&DAT_14cadbec8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655cd74 FUN_14655cd74 body=124 status=ok
// SIG undefined FUN_14655cd74(void)

short * FUN_14655cd74(short *param_1)

{
  short sVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a57c) {
    FUN_144b3d300(&DAT_14cb8a57c);
    if (DAT_14cb8a57c == -1) {
      DAT_14cb8a578 = 0;
      _Init_thread_footer(&DAT_14cb8a57c);
    }
  }
  *param_1 = DAT_14cb8a578;
  sVar1 = DAT_14cb8a578 + 2;
  if ((short)(DAT_14cb8a578 + 1) != -1) {
    sVar1 = DAT_14cb8a578 + 1;
  }
  DAT_14cb8a578 = sVar1;
  return param_1;
}



// FUNCTION 14655cdf6 FUN_14655cdf6 body=246 status=ok
// SIG undefined FUN_14655cdf6(void)

void FUN_14655cdf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140c16b86(param_1 + 0x8a8);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x5b8) + 0x10))(param_1 + 0x5b8);
    FUN_140e951a6(&local_38,uVar4);
    if (local_38 != 0) {
      FUN_14495448a(local_40,L"GbxLevelSequencePlayer",*(undefined4 *)(param_1 + 0xc));
      FUN_145d4f580(local_38,lVar3,local_40);
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
    *(byte *)(param_1 + 0x2d0) = *(byte *)(param_1 + 0x2d0) & 0xc1;
  }
  *(undefined1 *)(param_1 + 0xa00) = 0;
  FUN_14080e450(param_1,1);
  FUN_140c16dfe(param_1,1);
  FUN_140c16d2a(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655ceed FUN_14655ceed body=1088 status=ok
// SIG undefined FUN_14655ceed(void)

void FUN_14655ceed(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  uint local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_14038fb82();
  FUN_140056680(&local_78,L"LightingChannels");
  puVar9 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar9 = local_78;
  }
  FUN_140002266(&local_a8,L"%s.%s",puVar9,L"bChannel0");
  puVar9 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar9 = local_a8;
  }
  FUN_1446f470e(&local_80,puVar9,1);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar9 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar9 = local_78;
  }
  FUN_140002266(&local_a8,L"%s.%s",puVar9,L"bChannel1");
  puVar9 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar9 = local_a8;
  }
  FUN_1446f470e(&local_88,puVar9,1);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar9 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar9 = local_78;
  }
  FUN_140002266(&local_a8,L"%s.%s",puVar9,L"bChannel2");
  puVar9 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar9 = local_a8;
  }
  FUN_1446f470e(&local_90,puVar9,1);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1457a9e34(&local_a8,0x10,1,0);
  uVar10 = (ulonglong)local_98;
  if ((-1 < (int)local_98) && ((int)local_98 < local_a0)) {
    lVar1 = lVar4 + 0x118;
    do {
      lVar2 = *(longlong *)(local_a8 + (uVar10 & 0xffffffff) * 4);
      lVar6 = FUN_144a3a302();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        if ((lVar4 != 0) && (lVar6 = (longlong)*(int *)(lVar4 + 0x260), 0 < lVar6)) {
          uVar10 = lVar6 + 1;
          lVar6 = lVar6 * 0x28;
          do {
            lVar6 = lVar6 + -0x28;
            lVar12 = *(longlong *)(lVar4 + 600);
            if (*(longlong *)(lVar4 + 600) == 0) {
              lVar12 = lVar1;
            }
            if ((*(longlong *)(lVar12 + lVar6) == lVar2) &&
               (*(longlong *)(lVar12 + 8 + lVar6) == local_80)) {
              *(undefined8 *)(lVar12 + lVar6) = 0;
              ((undefined8 *)(lVar12 + lVar6))[1] = 0;
            }
            uVar10 = uVar10 - 1;
          } while (1 < uVar10);
          lVar6 = (longlong)*(int *)(lVar4 + 0x260);
          if (0 < lVar6) {
            uVar10 = lVar6 + 1;
            lVar6 = lVar6 * 0x28;
            do {
              lVar6 = lVar6 + -0x28;
              lVar12 = *(longlong *)(lVar4 + 600);
              if (*(longlong *)(lVar4 + 600) == 0) {
                lVar12 = lVar1;
              }
              if ((*(longlong *)(lVar12 + lVar6) == lVar2) &&
                 (*(longlong *)(lVar12 + 8 + lVar6) == local_88)) {
                *(undefined8 *)(lVar12 + lVar6) = 0;
                ((undefined8 *)(lVar12 + lVar6))[1] = 0;
              }
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
            lVar6 = (longlong)*(int *)(lVar4 + 0x260);
            if (0 < lVar6) {
              uVar10 = lVar6 + 1;
              lVar6 = lVar6 * 0x28;
              do {
                lVar6 = lVar6 + -0x28;
                lVar12 = *(longlong *)(lVar4 + 600);
                if (*(longlong *)(lVar4 + 600) == 0) {
                  lVar12 = lVar1;
                }
                if ((*(longlong *)(lVar12 + lVar6) == lVar2) &&
                   (*(longlong *)(lVar12 + 8 + lVar6) == local_90)) {
                  *(undefined8 *)(lVar12 + lVar6) = 0;
                  ((undefined8 *)(lVar12 + lVar6))[1] = 0;
                }
                uVar10 = uVar10 - 1;
              } while (1 < uVar10);
            }
          }
        }
        uVar7 = FUN_144a52528();
        FUN_1446ddc76(&local_68,"MovieScene",1);
        cVar3 = FUN_14011feae(uVar7,local_68);
        if (cVar3 != '\0') {
          FUN_1446ddc76(&local_68,"MovieScene",1);
          uVar7 = local_68;
          uVar8 = FUN_144a52528();
          uVar7 = FUN_14493e38c(uVar8,uVar7);
          FUN_148952400(uVar7,lVar2,&local_80);
          FUN_148952400(uVar7,lVar2,&local_88);
          FUN_148952400(uVar7,lVar2,&local_90);
        }
      }
      uVar10 = (longlong)(int)local_98;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
        local_98 = (uint)uVar10;
        if ((longlong)local_a0 <= (longlong)uVar10) break;
      } while (*(longlong *)(local_a8 + uVar10 * 4) == 0);
    } while ((-2 < (longlong)uVar11) && ((int)local_98 < local_a0));
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_b0,"LevelSequence",1);
  plVar5 = (longlong *)FUN_1447c1074(local_b0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,DAT_14cb8a590);
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655d32e FUN_14655d32e body=40 status=ok
// SIG undefined FUN_14655d32e(void)

undefined8 FUN_14655d32e(undefined8 param_1,int param_2)

{
  FUN_1459cfd76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655d356 FUN_14655d356 body=29 status=ok
// SIG undefined FUN_14655d356(void)

undefined8 FUN_14655d356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655d374 FUN_14655d374 body=29 status=ok
// SIG undefined FUN_14655d374(void)

bool FUN_14655d374(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14655d392 FUN_14655d392 body=29 status=ok
// SIG undefined FUN_14655d392(void)

bool FUN_14655d392(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14655d3b0 FUN_14655d3b0 body=29 status=ok
// SIG undefined FUN_14655d3b0(void)

undefined8 FUN_14655d3b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655d3ce FUN_14655d3ce body=132 status=ok
// SIG undefined FUN_14655d3ce(void)

void FUN_14655d3ce(longlong param_1,int param_2)

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



// FUNCTION 14655d452 FUN_14655d452 body=24 status=ok
// SIG undefined FUN_14655d452(void)

bool FUN_14655d452(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655d474 FUN_14655d474 body=24 status=ok
// SIG undefined FUN_14655d474(void)

bool FUN_14655d474(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655d48c FUN_14655d48c body=93 status=ok
// SIG undefined FUN_14655d48c(void)

void FUN_14655d48c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b424590;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14655d4ea FUN_14655d4ea body=24 status=ok
// SIG undefined FUN_14655d4ea(void)

bool FUN_14655d4ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655d502 FUN_14655d502 body=147 status=ok
// SIG undefined FUN_14655d502(void)

void FUN_14655d502(longlong param_1,int param_2)

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



// FUNCTION 14655d596 FUN_14655d596 body=24 status=ok
// SIG undefined FUN_14655d596(void)

bool FUN_14655d596(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  return lVar1 != 0;
}



// FUNCTION 14655d5ae FUN_14655d5ae body=106 status=ok
// SIG undefined FUN_14655d5ae(void)

void FUN_14655d5ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4247c0;
  FUN_1447a97f4(puVar1 + 1,param_1 + 8);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_14b424750;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar2;
  return;
}



// FUNCTION 14655d618 FUN_14655d618 body=147 status=ok
// SIG undefined FUN_14655d618(void)

void FUN_14655d618(longlong param_1,int param_2)

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



// FUNCTION 14655d6ac FUN_14655d6ac body=24 status=ok
// SIG undefined FUN_14655d6ac(void)

bool FUN_14655d6ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655d6c4 FUN_14655d6c4 body=93 status=ok
// SIG undefined FUN_14655d6c4(void)

void FUN_14655d6c4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      FUN_1406966b6(param_2,&DAT_14cb8a668,1);
                    /* WARNING: Could not recover jumptable at 0x00014655d717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x5c8))(param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 14655d722 FUN_14655d722 body=52 status=ok
// SIG undefined FUN_14655d722(void)

void FUN_14655d722(longlong param_1)

{
  FUN_140836bcc();
  if ((char)*(ulonglong *)(param_1 + 0xa0) == '\x01') {
    *(ulonglong *)(param_1 + 0xa0) = *(ulonglong *)(param_1 + 0xa0) & 0xffffffff00000000;
  }
  return;
}



// FUNCTION 14655d756 FUN_14655d756 body=468 status=ok
// SIG undefined FUN_14655d756(void)

void FUN_14655d756(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined5 uStack_68;
  undefined8 uStack_63;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_14655d885;
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      if (*(int *)(param_3 + 0x30) != 0) goto LAB_14655d885;
    }
    else if ((cVar3 != '\x02') || (*(int *)(param_3 + 0x30) != 1)) goto LAB_14655d885;
  }
  uStack_68 = 0;
  uStack_63 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_6b = 0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  iVar4 = *(int *)(param_1 + -100);
  iVar5 = *(int *)(param_1 + -0x5c);
  lVar6 = *(longlong *)(param_3 + 0x28);
  FUN_1405e06c2(*param_2,&local_98,param_3,param_3 + 0x90);
  if ((longlong)local_90 != 0) {
    lVar10 = 0;
    do {
      local_a0 = *(undefined8 *)(local_98 + lVar10);
      uVar8 = FUN_14479d2ce(&local_a0);
      lVar9 = FUN_140e1d22c(uVar8);
      if (lVar9 != 0) {
        local_a8 = &local_88;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2b0))
                  (*(longlong **)(param_1 + 0x10),lVar9,0,
                   (float)(((double)((lVar6 >> 0x20) * ((longlong)iVar5 - (longlong)iVar4)) +
                           (double)((ulonglong)(double)(int)((ulonglong)lVar6 >> 0x20) &
                                   0x8000000000000000)) / (double)(int)lVar6));
      }
      plVar7 = plStack_80;
      lVar10 = lVar10 + 8;
    } while ((longlong)local_90 * 8 != lVar10);
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
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
LAB_14655d885:
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655d92c FUN_14655d92c body=368 status=ok
// SIG undefined FUN_14655d92c(void)

void FUN_14655d92c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined5 uStack_60;
  undefined3 local_5b;
  undefined5 uStack_58;
  undefined8 uStack_53;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_14655d9ff;
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      if (*(int *)(param_3 + 0x30) != 0) goto LAB_14655d9ff;
    }
    else if ((cVar3 != '\x02') || (*(int *)(param_3 + 0x30) != 1)) goto LAB_14655d9ff;
  }
  uStack_58 = 0;
  uStack_53 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_5b = 0;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_1405e06c2(*param_2,&local_88,param_3,param_3 + 0x90);
  if ((longlong)local_80 != 0) {
    lVar7 = 0;
    do {
      local_90 = *(undefined8 *)(local_88 + lVar7);
      uVar5 = FUN_14479d2ce(&local_90);
      lVar6 = FUN_140e1d22c(uVar5);
      if (lVar6 != 0) {
        local_98 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2d0))
                  (*(longlong **)(param_1 + 0x10),lVar6,0,&local_78);
      }
      plVar4 = plStack_70;
      lVar7 = lVar7 + 8;
    } while ((longlong)local_80 * 8 != lVar7);
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
  }
LAB_14655d9ff:
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
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655da9e FUN_14655da9e body=241 status=ok
// SIG undefined FUN_14655da9e(void)

undefined8 *
FUN_14655da9e(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_38,"root_and_subs",1);
  FUN_145ac35e6(param_1,param_2,local_38);
  *param_1 = &PTR_FUN_14b424ea0;
  *(undefined2 *)(param_1 + 10) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x52) = param_4;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655db90 FUN_14655db90 body=261 status=ok
// SIG undefined FUN_14655db90(void)

undefined2 *
FUN_14655db90(undefined2 *param_1,undefined8 param_2,char *param_3,undefined2 param_4,char *param_5,
             undefined2 param_6)

{
  size_t sVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = param_4;
  plVar2 = (longlong *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  sVar1 = strlen(param_5);
  FUN_140cd1a74(plVar2,param_5,sVar1);
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x18] = param_6;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  sVar1 = strlen(param_3);
  FUN_140cd1a74(param_1 + 0x1c,param_3,sVar1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined2 **)(param_1 + 0x34) = DAT_14cb8a710;
  DAT_14c763a30 = 1;
  if (0xf < *(ulonglong *)(param_1 + 0x10)) {
    plVar2 = (longlong *)*plVar2;
  }
  DAT_14cb8a710 = param_1;
  FUN_1446ddc76(&local_58,plVar2,1);
  *(undefined8 *)(param_1 + 0x14) = local_58;
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655dc96 FUN_14655dc96 body=96 status=ok
// SIG undefined FUN_14655dc96(void)

void FUN_14655dc96(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (DAT_14cb8a710 != 0) {
    lVar1 = DAT_14cb8a710;
    if (DAT_14cb8a710 == param_1) {
      puVar2 = &DAT_14cb8a710;
    }
    else {
      do {
        lVar3 = lVar1;
        lVar1 = *(longlong *)(lVar3 + 0x68);
        if (lVar1 == 0) goto LAB_14655dcc5;
      } while (lVar1 != param_1);
      puVar2 = (undefined8 *)(lVar3 + 0x68);
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
LAB_14655dcc5:
  FUN_1401d9a90(param_1 + 0x38);
  FUN_1401d9a90(param_1 + 8);
  return;
}



// FUNCTION 14655dd0c FUN_14655dd0c body=107 status=ok
// SIG undefined FUN_14655dd0c(void)

void FUN_14655dd0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
    FUN_140834d9a(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014655dd73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14655dd90 FUN_14655dd90 body=64 status=ok
// SIG undefined FUN_14655dd90(void)

void FUN_14655dd90(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 14655de12 FUN_14655de12 body=40 status=ok
// SIG undefined FUN_14655de12(void)

undefined8 FUN_14655de12(undefined8 param_1,int param_2)

{
  FUN_1458d399e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655de3a FUN_14655de3a body=85 status=ok
// SIG undefined FUN_14655de3a(void)

void FUN_14655de3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425a90;
  return;
}



// FUNCTION 14655de90 FUN_14655de90 body=29 status=ok
// SIG undefined FUN_14655de90(void)

undefined8 FUN_14655de90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655deae FUN_14655deae body=132 status=ok
// SIG undefined FUN_14655deae(void)

void FUN_14655deae(longlong param_1,int param_2)

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



// FUNCTION 14655df34 FUN_14655df34 body=24 status=ok
// SIG undefined FUN_14655df34(void)

bool FUN_14655df34(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655df4c FUN_14655df4c body=24 status=ok
// SIG undefined FUN_14655df4c(void)

bool FUN_14655df4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655df64 FUN_14655df64 body=29 status=ok
// SIG undefined FUN_14655df64(void)

bool FUN_14655df64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14655df82 FUN_14655df82 body=26 status=ok
// SIG undefined FUN_14655df82(void)

bool FUN_14655df82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14655df9c FUN_14655df9c body=24 status=ok
// SIG undefined FUN_14655df9c(void)

bool FUN_14655df9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655dfb4 FUN_14655dfb4 body=26 status=ok
// SIG undefined FUN_14655dfb4(void)

bool FUN_14655dfb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14655dfce FUN_14655dfce body=24 status=ok
// SIG undefined FUN_14655dfce(void)

bool FUN_14655dfce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655dfe6 FUN_14655dfe6 body=24 status=ok
// SIG undefined FUN_14655dfe6(void)

bool FUN_14655dfe6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655dffe FUN_14655dffe body=26 status=ok
// SIG undefined FUN_14655dffe(void)

bool FUN_14655dffe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14655e018 FUN_14655e018 body=24 status=ok
// SIG undefined FUN_14655e018(void)

bool FUN_14655e018(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14655e030 FUN_14655e030 body=29 status=ok
// SIG undefined FUN_14655e030(void)

undefined8 FUN_14655e030(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e04e FUN_14655e04e body=29 status=ok
// SIG undefined FUN_14655e04e(void)

undefined8 FUN_14655e04e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e06c FUN_14655e06c body=138 status=ok
// SIG undefined FUN_14655e06c(void)

void FUN_14655e06c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_14480f766(lVar4 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0xa0);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_14103b6f6(lVar4,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014655e0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14655e0f6 FUN_14655e0f6 body=29 status=ok
// SIG undefined FUN_14655e0f6(void)

undefined8 FUN_14655e0f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e114 FUN_14655e114 body=29 status=ok
// SIG undefined FUN_14655e114(void)

undefined8 FUN_14655e114(longlong param_1,undefined8 param_2)

{
  FUN_145924da0(*(undefined8 *)(param_1 + 0x90));
  return param_2;
}



// FUNCTION 14655e132 FUN_14655e132 body=145 status=ok
// SIG undefined FUN_14655e132(void)

void FUN_14655e132(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x90);
  local_20 = *(undefined8 *)(param_1 + 0x70);
  local_18 = *(longlong **)(param_1 + 0x78);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_20,param_2,param_3);
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



// FUNCTION 14655e1e2 FUN_14655e1e2 body=356 status=ok
// SIG undefined FUN_14655e1e2(void)

void FUN_14655e1e2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xb9) == '\0') {
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (lVar5 != 0) {
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        FUN_14480f766(lVar5 + 0x18);
        lVar5 = *(longlong *)(param_1 + 0xa0);
      }
      *(undefined8 *)(param_1 + 0xb0) = 0;
      FUN_14103b6f6(lVar5,1);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      plVar4 = *(longlong **)(param_1 + 0xa8);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xa8) = 0;
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
    *(undefined2 *)(param_1 + 0xb8) = 0x101;
  }
  else if ((*(char *)(param_1 + 0xb8) != '\0') && (*(char *)(param_1 + 0xb8) != '\x01'))
  goto LAB_14655e273;
  puVar6 = &local_48;
  local_30 = 4;
  local_48 = 0;
  local_28 = 1;
  FUN_1410f7fb4(param_1,param_2,&DAT_14cb8aa00,puVar6);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_30) {
      puVar6 = (undefined4 *)CONCAT44(uStack_44,local_48);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(uStack_44,local_48));
  }
LAB_14655e273:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14655e372 FUN_14655e372 body=29 status=ok
// SIG undefined FUN_14655e372(void)

undefined8 FUN_14655e372(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e390 FUN_14655e390 body=48 status=ok
// SIG undefined FUN_14655e390(void)

void FUN_14655e390(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14655e3c0 FUN_14655e3c0 body=29 status=ok
// SIG undefined FUN_14655e3c0(void)

undefined8 FUN_14655e3c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e3de FUN_14655e3de body=85 status=ok
// SIG undefined FUN_14655e3de(void)

void FUN_14655e3de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4271c0;
  return;
}



// FUNCTION 14655e434 FUN_14655e434 body=29 status=ok
// SIG undefined FUN_14655e434(void)

undefined8 FUN_14655e434(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e452 FUN_14655e452 body=29 status=ok
// SIG undefined FUN_14655e452(void)

undefined8 FUN_14655e452(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e470 FUN_14655e470 body=29 status=ok
// SIG undefined FUN_14655e470(void)

undefined8 FUN_14655e470(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e48e FUN_14655e48e body=29 status=ok
// SIG undefined FUN_14655e48e(void)

undefined8 FUN_14655e48e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655e4ac FUN_14655e4ac body=118 status=ok
// SIG undefined FUN_14655e4ac(void)

void FUN_14655e4ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b426ea0;
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



// FUNCTION 14655e522 FUN_14655e522 body=82 status=ok
// SIG undefined FUN_14655e522(void)

void FUN_14655e522(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_140ac2c32(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 4) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 4;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 14655e574 FUN_14655e574 body=90 status=ok
// SIG undefined FUN_14655e574(void)

void FUN_14655e574(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1412d7b64();
  iVar2 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  thunk_FUN_1412d7b64(param_1);
  return;
}



// FUNCTION 14655e5ce FUN_14655e5ce body=174 status=ok
// SIG undefined FUN_14655e5ce(void)

void FUN_14655e5ce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x98);
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
        *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) & 0xfe;
        FUN_140834d9a(lVar2);
      }
      FUN_140ce01e8(lVar2 + 0x20,0);
      FUN_140d2f778(lVar2 + 0x20);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
    uVar3 = *(undefined4 *)(param_1 + 0xa0);
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  FUN_140d8c315(lVar4,uVar3);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_141147e0e(param_1 + 0x98);
  }
  thunk_FUN_1412d7b64(param_1);
  return;
}



// FUNCTION 14655e67c FUN_14655e67c body=134 status=ok
// SIG undefined FUN_14655e67c(void)

void FUN_14655e67c(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      if (0 < (int)(*(uint *)(param_2 + 0x10) & 1 << ((byte)lVar1 & 0x1f))) {
        if (*param_2 == '\0') {
          FUN_141060940(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar2),
                        *(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x14));
        }
        else if (*param_2 == '\x01') {
          FUN_14106072c(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar2),
                        *(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x14));
        }
      }
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 < *(int *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 14655e702 FUN_14655e702 body=428 status=ok
// SIG undefined FUN_14655e702(void)

longlong * FUN_14655e702(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14655e7e2:
    *puVar5 = &PTR_LAB_14b42a7c0;
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
    *puVar5 = &PTR_FUN_14b428f70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14655e7e2;
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
    *puVar5 = &PTR_LAB_14b42a7c0;
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
    *puVar5 = &PTR_FUN_14b428f70;
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



// FUNCTION 14655e8ae FUN_14655e8ae body=300 status=ok
// SIG undefined FUN_14655e8ae(void)

longlong * FUN_14655e8ae(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b429390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429320;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b429390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429320;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14655e9da FUN_14655e9da body=187 status=ok
// SIG undefined FUN_14655e9da(void)

bool FUN_14655e9da(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_14477b664(*(undefined8 *)(param_1 + 0x18));
  local_38 = FUN_14477b664(uVar2);
  local_30 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = FUN_145a26b42(param_2,&local_40);
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 0:
    bVar3 = iVar1 == param_3;
    break;
  case 1:
    bVar3 = iVar1 != param_3;
    break;
  case 2:
    bVar3 = iVar1 < param_3;
    break;
  case 3:
    bVar3 = iVar1 <= param_3;
    break;
  case 4:
    bVar3 = param_3 < iVar1;
    break;
  case 5:
    bVar3 = param_3 <= iVar1;
    break;
  default:
    bVar3 = false;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 14655ea96 FUN_14655ea96 body=300 status=ok
// SIG undefined FUN_14655ea96(void)

longlong * FUN_14655ea96(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b429390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429440;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b429390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429440;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14655ebc2 FUN_14655ebc2 body=344 status=ok
// SIG undefined FUN_14655ebc2(void)

undefined8 FUN_14655ebc2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    uVar4 = FUN_1411ef8e8();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x30) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_1411ef8e8();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x30);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x30) = lVar6;
    }
  }
  uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  uVar4 = FUN_1456c4a72(lVar6,uVar4);
  return uVar4;
}



// FUNCTION 14655ed1a FUN_14655ed1a body=300 status=ok
// SIG undefined FUN_14655ed1a(void)

longlong * FUN_14655ed1a(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b42a950;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429970;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a950;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429970;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14655ee46 FUN_14655ee46 body=253 status=ok
// SIG undefined FUN_14655ee46(void)

bool FUN_14655ee46(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (lVar7 == 0) {
      uVar5 = FUN_145cd97be();
      lVar7 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x18) = lVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x10));
      }
      *(longlong *)(param_1 + 0x20) = lVar6;
    }
    iVar4 = FUN_14126015e(lVar1,lVar6);
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    bVar8 = iVar4 == *(int *)(param_1 + 0x2c);
  }
  else {
    switch(*(char *)(param_1 + 0x28)) {
    case '\x01':
      bVar8 = iVar4 != *(int *)(param_1 + 0x2c);
      break;
    case '\x02':
      bVar8 = iVar4 < *(int *)(param_1 + 0x2c);
      break;
    case '\x03':
      bVar8 = iVar4 <= *(int *)(param_1 + 0x2c);
      break;
    case '\x04':
      bVar8 = *(int *)(param_1 + 0x2c) < iVar4;
      break;
    case '\x05':
      bVar8 = *(int *)(param_1 + 0x2c) <= iVar4;
      break;
    default:
      bVar8 = false;
    }
  }
  return bVar8;
}



// FUNCTION 14655ef44 FUN_14655ef44 body=300 status=ok
// SIG undefined FUN_14655ef44(void)

longlong * FUN_14655ef44(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b42a6d0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429d50;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a6d0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429d50;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14655f070 FUN_14655f070 body=252 status=ok
// SIG undefined FUN_14655f070(void)

bool FUN_14655f070(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (lVar7 == 0) {
      uVar5 = FUN_145cd97be();
      lVar7 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x18) = lVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x10));
      }
      *(longlong *)(param_1 + 0x20) = lVar6;
    }
    iVar4 = FUN_14126015e(lVar1,lVar6);
  }
  if (*(char *)(param_1 + 0x28) == '\x05') {
    bVar8 = param_3 <= iVar4;
  }
  else {
    switch(*(char *)(param_1 + 0x28)) {
    case '\0':
      bVar8 = iVar4 == param_3;
      break;
    case '\x01':
      bVar8 = iVar4 != param_3;
      break;
    case '\x02':
      bVar8 = iVar4 < param_3;
      break;
    case '\x03':
      bVar8 = iVar4 <= param_3;
      break;
    case '\x04':
      bVar8 = param_3 < iVar4;
      break;
    default:
      bVar8 = false;
    }
  }
  return bVar8;
}



// FUNCTION 14655f16c FUN_14655f16c body=300 status=ok
// SIG undefined FUN_14655f16c(void)

longlong * FUN_14655f16c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b42a6d0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429e00;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a6d0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429e00;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14655f298 FUN_14655f298 body=300 status=ok
// SIG undefined FUN_14655f298(void)

longlong * FUN_14655f298(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429eb0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429eb0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14655f3c4 FUN_14655f3c4 body=100 status=ok
// SIG undefined FUN_14655f3c4(void)

char FUN_14655f3c4(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((*(char *)(param_1 + 0x20) == '\x01') && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (cVar1 = FUN_140f3cbbe(), cVar1 != '\0')) {
    return '\x01';
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x20;
    do {
      lVar3 = lVar3 + -0x20;
      cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (cVar1 != '\0') {
        return cVar1;
      }
      plVar2 = plVar2 + 4;
    } while (lVar3 != 0);
  }
  return '\0';
}



// FUNCTION 14655f428 FUN_14655f428 body=159 status=ok
// SIG undefined FUN_14655f428(void)

undefined8 * FUN_14655f428(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x248) & 4) == 0) {
    local_30 = 0;
    local_28 = 0;
    FUN_14009d848(&local_30,param_3);
    FUN_1448b6402(param_1 + 0x208,param_2,&local_30);
    FUN_1449db362(&local_30);
  }
  else {
    if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_3 + 0x60))();
    }
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655f4c8 FUN_14655f4c8 body=245 status=ok
// SIG undefined FUN_14655f4c8(void)

ulonglong FUN_14655f4c8(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  undefined7 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    uVar3 = FUN_14155b406();
    lVar2 = FUN_14477b664(uVar3);
    param_2[1] = lVar2;
  }
  lVar8 = param_2[2];
  if (((lVar8 == 0) && (lVar8 = 0, lVar2 != 0)) && (*param_2 != 0)) {
    plVar7 = *(longlong **)(lVar2 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (lVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), (char)lVar2 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
      lVar2 = FUN_144aff482(uVar3,param_2);
      lVar8 = lVar2;
    }
    param_2[2] = lVar8;
  }
  if ((longlong)*(int *)(param_1 + 0x180) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x178);
    lVar4 = (longlong)*(int *)(param_1 + 0x180) << 4;
    do {
      lVar2 = (**(code **)(*(longlong *)*plVar7 + 8))();
      if (lVar2 == lVar8) {
        if (plVar7 != (longlong *)0x0) {
          uVar6 = (undefined7)((ulonglong)param_3 >> 8);
          bVar5 = 1;
          if (*param_3 == 0) {
            bVar1 = 0;
          }
          else {
            bVar1 = FUN_14480f766(*plVar7 + 0x18);
          }
          goto LAB_14655f53d;
        }
        break;
      }
      plVar7 = plVar7 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  bVar1 = (byte)lVar2;
  bVar5 = 0;
  uVar6 = 0;
LAB_14655f53d:
  return CONCAT71(uVar6,bVar5 & bVar1) & 0xffffffff;
}



// FUNCTION 14655f5bd FUN_14655f5bd body=120 status=ok
// SIG undefined FUN_14655f5bd(void)

undefined8 FUN_14655f5bd(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"__UserParam_%i",param_2);
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_1,iVar1,local_28,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655f636 FUN_14655f636 body=187 status=ok
// SIG undefined FUN_14655f636(void)

undefined8 FUN_14655f636(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 14655f70c FUN_14655f70c body=153 status=ok
// SIG undefined FUN_14655f70c(void)

longlong * FUN_14655f70c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4278a0;
  plVar3[9] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b256da0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 9) = 0;
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



// FUNCTION 14655f7a6 FUN_14655f7a6 body=29 status=ok
// SIG undefined FUN_14655f7a6(void)

undefined8 FUN_14655f7a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655f7c4 FUN_14655f7c4 body=118 status=ok
// SIG undefined FUN_14655f7c4(void)

void FUN_14655f7c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4278c0;
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



// FUNCTION 14655f83a FUN_14655f83a body=428 status=ok
// SIG undefined FUN_14655f83a(void)

longlong * FUN_14655f83a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14655f91a:
    *puVar5 = &PTR_LAB_14b4279a0;
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
    *puVar5 = &PTR_FUN_14b427930;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14655f91a;
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
    *puVar5 = &PTR_LAB_14b4279a0;
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
    *puVar5 = &PTR_FUN_14b427930;
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



// FUNCTION 14655f9e6 FUN_14655f9e6 body=68 status=ok
// SIG undefined FUN_14655f9e6(void)

undefined8 * FUN_14655f9e6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b427930;
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



// FUNCTION 14655fa2a FUN_14655fa2a body=29 status=ok
// SIG undefined FUN_14655fa2a(void)

undefined8 FUN_14655fa2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fa48 FUN_14655fa48 body=23 status=ok
// SIG undefined FUN_14655fa48(void)

undefined1 FUN_14655fa48(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 14655fa60 FUN_14655fa60 body=47 status=ok
// SIG undefined FUN_14655fa60(void)

undefined8 FUN_14655fa60(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_146119910();
  if ((lVar1 != 0) && (*param_3 != 0)) {
    uVar2 = FUN_14480f766(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14655fa90 FUN_14655fa90 body=68 status=ok
// SIG undefined FUN_14655fa90(void)

undefined8 * FUN_14655fa90(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b427ee0;
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



// FUNCTION 14655fad4 FUN_14655fad4 body=29 status=ok
// SIG undefined FUN_14655fad4(void)

undefined8 FUN_14655fad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655faf2 FUN_14655faf2 body=118 status=ok
// SIG undefined FUN_14655faf2(void)

void FUN_14655faf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b427140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b428070;
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



// FUNCTION 14655fb68 FUN_14655fb68 body=29 status=ok
// SIG undefined FUN_14655fb68(void)

undefined8 FUN_14655fb68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fb86 FUN_14655fb86 body=23 status=ok
// SIG undefined FUN_14655fb86(void)

undefined1 FUN_14655fb86(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 14655fb9e FUN_14655fb9e body=29 status=ok
// SIG undefined FUN_14655fb9e(void)

undefined8 FUN_14655fb9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fbbc FUN_14655fbbc body=23 status=ok
// SIG undefined FUN_14655fbbc(void)

undefined1 FUN_14655fbbc(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 14655fbd4 FUN_14655fbd4 body=118 status=ok
// SIG undefined FUN_14655fbd4(void)

void FUN_14655fbd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a740;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4284d0;
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



// FUNCTION 14655fc4a FUN_14655fc4a body=29 status=ok
// SIG undefined FUN_14655fc4a(void)

undefined8 FUN_14655fc4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fc68 FUN_14655fc68 body=23 status=ok
// SIG undefined FUN_14655fc68(void)

undefined1 FUN_14655fc68(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 14655fc80 FUN_14655fc80 body=223 status=ok
// SIG undefined FUN_14655fc80(void)

void FUN_14655fc80(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    uVar5 = FUN_145cd97be();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0xc0) = lVar4;
  }
  lVar6 = *(longlong *)(param_1 + 200);
  if (((lVar6 != 0) || (lVar6 = 0, lVar4 == 0)) || (*(longlong *)(param_1 + 0xb8) == 0))
  goto LAB_14655fcc2;
  plVar2 = *(longlong **)(lVar4 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14655fd5c:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_14655fd5c;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0xb8));
  }
  *(longlong *)(param_1 + 200) = lVar6;
LAB_14655fcc2:
  FUN_14590094c(uVar1,lVar6,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14655fd60 FUN_14655fd60 body=118 status=ok
// SIG undefined FUN_14655fd60(void)

void FUN_14655fd60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a6d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b428600;
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



// FUNCTION 14655fdd6 FUN_14655fdd6 body=29 status=ok
// SIG undefined FUN_14655fdd6(void)

undefined8 FUN_14655fdd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fdf4 FUN_14655fdf4 body=29 status=ok
// SIG undefined FUN_14655fdf4(void)

undefined8 FUN_14655fdf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fe12 FUN_14655fe12 body=29 status=ok
// SIG undefined FUN_14655fe12(void)

undefined8 FUN_14655fe12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fe30 FUN_14655fe30 body=118 status=ok
// SIG undefined FUN_14655fe30(void)

void FUN_14655fe30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b428f70;
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



// FUNCTION 14655fea6 FUN_14655fea6 body=29 status=ok
// SIG undefined FUN_14655fea6(void)

undefined8 FUN_14655fea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655fec4 FUN_14655fec4 body=124 status=ok
// SIG undefined FUN_14655fec4(void)

void FUN_14655fec4(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_140d86252(*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar3 = 0;
      do {
        param_4 = CONCAT31((int3)(param_4 >> 8),
                           *(undefined1 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar3) + 0x28)) &
                  0xffffff02;
        uVar2 = CONCAT31((int3)(param_4 >> 8),(byte)param_4 >> 1);
        if ((byte)param_4 != 0) break;
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar3);
      goto LAB_14655ff20;
    }
  }
  uVar2 = 0;
LAB_14655ff20:
  FUN_1402a7054(param_1,uVar2);
  return;
}



// FUNCTION 14655ff40 FUN_14655ff40 body=29 status=ok
// SIG undefined FUN_14655ff40(void)

undefined8 FUN_14655ff40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655ff5e FUN_14655ff5e body=29 status=ok
// SIG undefined FUN_14655ff5e(void)

undefined8 FUN_14655ff5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655ff7c FUN_14655ff7c body=68 status=ok
// SIG undefined FUN_14655ff7c(void)

undefined8 * FUN_14655ff7c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429320;
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



// FUNCTION 14655ffc0 FUN_14655ffc0 body=29 status=ok
// SIG undefined FUN_14655ffc0(void)

undefined8 FUN_14655ffc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14655ffde FUN_14655ffde body=68 status=ok
// SIG undefined FUN_14655ffde(void)

undefined8 * FUN_14655ffde(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429440;
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



// FUNCTION 146560022 FUN_146560022 body=29 status=ok
// SIG undefined FUN_146560022(void)

undefined8 FUN_146560022(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146560040 FUN_146560040 body=66 status=ok
// SIG undefined FUN_146560040(void)

undefined8 * FUN_146560040(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429760;
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



// FUNCTION 146560082 FUN_146560082 body=29 status=ok
// SIG undefined FUN_146560082(void)

undefined8 FUN_146560082(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465600a0 FUN_1465600a0 body=118 status=ok
// SIG undefined FUN_1465600a0(void)

void FUN_1465600a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a8e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429810;
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



// FUNCTION 146560116 FUN_146560116 body=29 status=ok
// SIG undefined FUN_146560116(void)

undefined8 FUN_146560116(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146560134 FUN_146560134 body=66 status=ok
// SIG undefined FUN_146560134(void)

undefined8 * FUN_146560134(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4298c0;
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



// FUNCTION 146560176 FUN_146560176 body=118 status=ok
// SIG undefined FUN_146560176(void)

void FUN_146560176(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4298c0;
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



// FUNCTION 1465601ec FUN_1465601ec body=29 status=ok
// SIG undefined FUN_1465601ec(void)

undefined8 FUN_1465601ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14656020a FUN_14656020a body=68 status=ok
// SIG undefined FUN_14656020a(void)

undefined8 * FUN_14656020a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429970;
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



// FUNCTION 14656024e FUN_14656024e body=118 status=ok
// SIG undefined FUN_14656024e(void)

void FUN_14656024e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429970;
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



// FUNCTION 1465602c4 FUN_1465602c4 body=29 status=ok
// SIG undefined FUN_1465602c4(void)

undefined8 FUN_1465602c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465602e2 FUN_1465602e2 body=66 status=ok
// SIG undefined FUN_1465602e2(void)

undefined8 * FUN_1465602e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429d50;
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



// FUNCTION 146560324 FUN_146560324 body=118 status=ok
// SIG undefined FUN_146560324(void)

void FUN_146560324(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a6d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429d50;
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



// FUNCTION 14656039a FUN_14656039a body=29 status=ok
// SIG undefined FUN_14656039a(void)

undefined8 FUN_14656039a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465603b8 FUN_1465603b8 body=118 status=ok
// SIG undefined FUN_1465603b8(void)

void FUN_1465603b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a6d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429e00;
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



// FUNCTION 14656042e FUN_14656042e body=29 status=ok
// SIG undefined FUN_14656042e(void)

undefined8 FUN_14656042e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14656044c FUN_14656044c body=66 status=ok
// SIG undefined FUN_14656044c(void)

undefined8 * FUN_14656044c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429eb0;
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



// FUNCTION 14656048e FUN_14656048e body=118 status=ok
// SIG undefined FUN_14656048e(void)

void FUN_14656048e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b429eb0;
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



// FUNCTION 146560504 FUN_146560504 body=48 status=ok
// SIG undefined FUN_146560504(void)

void FUN_146560504(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146560534 FUN_146560534 body=48 status=ok
// SIG undefined FUN_146560534(void)

void FUN_146560534(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 146560564 FUN_146560564 body=93 status=ok
// SIG undefined FUN_146560564(void)

void FUN_146560564(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b429f90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429f20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1465605c2 FUN_1465605c2 body=132 status=ok
// SIG undefined FUN_1465605c2(void)

void FUN_1465605c2(longlong param_1,int param_2)

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



// FUNCTION 146560650 FUN_146560650 body=24 status=ok
// SIG undefined FUN_146560650(void)

bool FUN_146560650(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146560668 FUN_146560668 body=93 status=ok
// SIG undefined FUN_146560668(void)

void FUN_146560668(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42a2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1465606c6 FUN_1465606c6 body=29 status=ok
// SIG undefined FUN_1465606c6(void)

undefined8 FUN_1465606c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465606e4 FUN_1465606e4 body=29 status=ok
// SIG undefined FUN_1465606e4(void)

undefined8 FUN_1465606e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146560712 FUN_146560712 body=122 status=ok
// SIG undefined FUN_146560712(void)

void FUN_146560712(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x248) & 1) != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
      FUN_14120b214((longlong *)(param_1 + 0x48),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14656078c FUN_14656078c body=223 status=ok
// SIG undefined FUN_14656078c(void)

void FUN_14656078c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_LAB_14b42c990;
  *(undefined4 *)(puVar3 + 1) = *param_4;
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
  *puVar3 = &PTR_FUN_14b42b850;
  puVar3[3] = uVar4;
  puVar3[4] = plVar5;
  if (plVar5 == (longlong *)0x0) {
    puVar3[5] = param_3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
                    /* WARNING: Could not recover jumptable at 0x000146560867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14656086c FUN_14656086c body=292 status=ok
// SIG undefined FUN_14656086c(void)

void FUN_14656086c(longlong *param_1,undefined8 *param_2)

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
    *puVar3 = &PTR_LAB_14b42ba50;
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
    *puVar3 = &PTR_FUN_14b42b9e0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_143e3d2b6;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b42ba50;
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
    *puVar3 = &PTR_FUN_14b42b9e0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_143e3d2b6;
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
                    /* WARNING: Could not recover jumptable at 0x00014656097b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}


