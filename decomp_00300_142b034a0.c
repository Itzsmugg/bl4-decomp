// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b034a0 FUN_142b034a0 body=97 status=ok
// SIG undefined FUN_142b034a0(void)

undefined8 * FUN_142b034a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a158740;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 142b03508 FUN_142b03508 body=29 status=ok
// SIG undefined FUN_142b03508(void)

void FUN_142b03508(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b03526 FUN_142b03526 body=83 status=ok
// SIG undefined FUN_142b03526(void)

undefined8 * FUN_142b03526(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a158740;
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



// FUNCTION 142b0357b FUN_142b0357b body=226 status=ok
// SIG undefined FUN_142b0357b(void)

void FUN_142b0357b(void)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (ulonglong)DAT_14c892ed8;
  FUN_1446f470e(&local_30,L"/Unknown",1);
  DAT_14c99f9f0 = local_30;
  local_30 = "NetworkMessaging";
  local_28 = 0x10;
  local_24 = 0;
  DAT_14c99f9f8 = uVar2;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c99fa00 = (ulonglong)uVar1;
  local_30 = (char *)0x800000014a157cbe;
  local_1c = 9;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14629d720(&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b03660 FUN_142b03660 body=109 status=ok
// SIG undefined FUN_142b03660(void)

void FUN_142b03660(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a158ae8;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c99fa0c,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b03866 FUN_142b03866 body=190 status=ok
// SIG undefined FUN_142b03866(void)

void FUN_142b03866(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 7;
  FUN_14282b410(L"/Script/EngineMessages",0,0,&PTR_FUN_14a1593e0);
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0x16;
  FUN_14282b410(L"/Script/EngineMessages",0,0,&PTR_FUN_14a15aff0);
  local_38 = 0x800000014a15b360;
  local_24 = 0xe;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14629e7aa(&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b03928 FUN_142b03928 body=449 status=ok
// SIG undefined FUN_142b03928(void)

void FUN_142b03928(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_118 [40];
  longlong local_f0 [2];
  undefined **local_e0 [11];
  longlong *local_88;
  longlong local_68;
  longlong local_50;
  int local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x10) == '\x03') {
    FUN_146821d9a(local_e0);
    if ((local_38 <= local_40) && (local_30 == '\x01')) {
      local_38 = local_38 * 2;
      if (local_38 < local_40 + 1) {
        local_38 = local_40 + 1;
      }
      lVar2 = (longlong)local_48;
      iVar3 = (int)(local_38 + 7U >> 3);
      uVar4 = iVar3 - local_48;
      uVar1 = local_44 - local_48;
      local_48 = iVar3;
      if (uVar1 < uVar4) {
        FUN_1447403be(&local_50);
      }
      memset((void *)(lVar2 + local_50),0,(longlong)(int)uVar4);
    }
    local_30 = '\x01';
    FUN_14031d518(local_e0,param_1 + 0x40);
    FUN_14031d518(local_e0,param_1 + 0x38);
    FUN_1401177fa(local_e0,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0xa0));
    FUN_1400e92ba(param_2,local_e0);
    FUN_140056680(local_f0,L"PostReliability");
    if (local_f0[0] != 0) {
      FUN_1400020a8();
    }
    local_e0[0] = &PTR_FUN_149e37560;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_e0[0] = &PTR__purecall_149e35f70;
    if (local_88 != (longlong *)0x0) {
      if (*local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_88);
    }
    if (local_68 != 0) {
      if (*(longlong *)(local_68 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_68);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b03aea FUN_142b03aea body=195 status=ok
// SIG undefined FUN_142b03aea(void)

void FUN_142b03aea(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  int local_38;
  undefined4 local_34;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[2] == '\x03') {
    cVar1 = (**(code **)(*param_1 + 8))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      if (cVar1 != '\0') {
        FUN_140056680(local_30,L"PostReliability");
        if (local_30[0] != 0) {
          FUN_1400020a8();
        }
        (**(code **)(*param_2 + 0x188))(param_2,&local_34);
        (**(code **)(*param_2 + 0x188))(param_2,&local_38);
        iVar2 = (int)param_1[8] + 1;
        if (iVar2 == local_38) {
          *(int *)(param_1 + 8) = iVar2;
          *(undefined4 *)((longlong)param_1 + 0x3c) = local_34;
        }
        else {
          FUN_14170c290(param_2,0,0);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b03bbb FUN_142b03bbb body=102 status=ok
// SIG undefined FUN_142b03bbb(void)

void FUN_142b03bbb(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a15dc40;
  local_14 = 0x1b;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629eca4(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b03c24 FUN_142b03c24 body=273 status=ok
// SIG undefined FUN_142b03c24(void)

void FUN_142b03c24(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [184];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1a8);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  lVar4 = **(longlong **)(param_1 + 0x208);
  if (lVar4 != 0) {
    do {
      puVar3 = *(undefined8 **)(lVar4 + 8);
      lVar5 = *(longlong *)(param_1 + 0x208);
      *(longlong *)(param_1 + 0x208) = lVar4;
      *(undefined8 *)(lVar4 + 8) = 0;
      if (lVar5 != 0) {
        FUN_1400020a8();
      }
      FUN_146821d9a(local_f8);
      FUN_1401177fa(local_f8,*puVar3,*(undefined4 *)(puVar3 + 1));
      FUN_142b03d36(param_1,puVar3[8],local_f8,(longlong)puVar3 + 0xc);
      FUN_144a8b786(local_f8);
      lVar4 = **(longlong **)(param_1 + 0x208);
    } while (lVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b03d36 FUN_142b03d36 body=475 status=ok
// SIG undefined FUN_142b03d36(void)

void FUN_142b03d36(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
    if (cVar3 != '\0') {
      if (0 < *(int *)(param_1 + 0x1b0)) {
        lVar5 = 0;
        lVar6 = 0;
        bVar7 = false;
        do {
          if ((*(byte *)(param_3 + 0x29) & 2) != 0) break;
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + lVar5);
          if (bVar7) {
            cVar3 = (**(code **)(*plVar2 + 8))(plVar2);
            bVar7 = true;
            if (cVar3 != '\0') {
              if ((longlong)(ulonglong)*(uint *)((longlong)plVar2 + 0x14) <
                  *(longlong *)(param_3 + 0xa0)) {
                FUN_14572541c(param_3);
                break;
              }
              (**(code **)(*plVar2 + 0x28))(plVar2,param_3,param_4);
            }
          }
          else {
            bVar7 = plVar2 == param_2;
          }
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0x10;
        } while (lVar6 < *(int *)(param_1 + 0x1b0));
      }
      if (((*(byte *)(param_3 + 0x29) & 2) == 0) && (0 < *(longlong *)(param_3 + 0xa0))) {
        FUN_140056680(local_58,L"PostPacketHandler");
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1400748c2(param_3,1);
        lVar5 = *(longlong *)(param_1 + 0x230);
        if (lVar5 != 0) {
          FUN_1470792e2(lVar5,*(undefined8 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0xa0),
                        param_4);
          *(longlong **)
           (*(longlong *)(*(longlong *)(lVar5 + 0x28) + -8 + (longlong)*(int *)(lVar5 + 0x30) * 8) +
           0x40) = param_2;
        }
        bVar1 = *(byte *)(param_1 + 2);
        bVar4 = bVar1 | 1;
        *(byte *)(param_1 + 2) = bVar4;
        if ((*(int *)(param_1 + 0x18) != 0) &&
           (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x60))
                    (plVar2,*(undefined8 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0xa0),param_4)
          ;
          bVar4 = *(byte *)(param_1 + 2);
        }
        *(byte *)(param_1 + 2) = bVar4 & 0xfe | bVar1 & 1;
      }
      if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  FUN_140033559(".\\Runtime/PacketHandlers/PacketHandler/Private/PacketHandler.cpp",0x3ec,
                L"Called SendHandlerPacket when no LowLevelSend delegate is bound");
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 142b03f12 FUN_142b03f12 body=91 status=ok
// SIG undefined FUN_142b03f12(void)

void FUN_142b03f12(void)

{
  if (DAT_14c99fd28 != 0) {
    if (DAT_14c99fd20 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c99fd20)(DAT_14c99fd20,0);
    FUN_1446efa72(&DAT_14c99fd20,0,0,0x10);
    DAT_14c99fd28 = 0;
  }
  if (DAT_14c99fd20 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b03f6d FUN_142b03f6d body=91 status=ok
// SIG undefined FUN_142b03f6d(void)

void FUN_142b03f6d(void)

{
  if (DAT_14c99fd40 != 0) {
    if (DAT_14c99fd38 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c99fd38)(DAT_14c99fd38,0);
    FUN_1446efa72(&DAT_14c99fd38,0,0,0x10);
    DAT_14c99fd40 = 0;
  }
  if (DAT_14c99fd38 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b03fc8 FUN_142b03fc8 body=1542 status=ok
// SIG undefined FUN_142b03fc8(void)

void FUN_142b03fc8(undefined1 *param_1,undefined1 param_2,undefined4 param_3,char param_4,
                  longlong param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined2 *local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 8) = param_6;
  param_1[2] = param_1[2] & 0xfb | param_4 * '\x04';
  if (param_4 == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    FUN_14029eeae(&stack0x00000038,&local_68);
    puVar9 = local_68;
    if ((int)uStack_60 == 0) {
      puVar9 = (undefined8 *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_58,L"%s PacketHandlerProfileConfig",puVar9);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    puVar4 = local_58;
    if ((int)local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_98 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,puVar4,L"Components",&local_48);
    if ((int)uStack_40 == 0) {
      local_98 = &DAT_14c872ce8;
      FUN_14105aa76(DAT_14c872ce0,L"PacketHandlerComponents",L"Components",&local_48);
    }
    FUN_14629ef06();
    if (DAT_14c99fd20 != (longlong *)0x0 && DAT_14c99fd28 != 0) {
      (**(code **)(*DAT_14c99fd20 + 0x60))(DAT_14c99fd20,&local_48);
    }
    if ((longlong)(int)uStack_40 != 0) {
      lVar10 = (longlong)(int)uStack_40 << 4;
      lVar8 = local_48;
      do {
        FUN_142b045d0(param_1,local_78,lVar8,1);
        plVar5 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_70 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        lVar8 = lVar8 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_14629ef78();
    if (DAT_14c99fd38 != (longlong *)0x0 && DAT_14c99fd40 != 0) {
      (**(code **)(*DAT_14c99fd38 + 0x60))(DAT_14c99fd38,&local_68);
    }
    uVar6 = 0;
    if ((longlong)(int)uStack_60 != 0) {
      puVar11 = local_68 + (longlong)(int)uStack_60 * 2;
      puVar9 = local_68;
      do {
        local_88 = *puVar9;
        local_80 = (longlong *)puVar9[1];
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        FUN_142b04bc4(param_1,&local_88,1);
        plVar5 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_80 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar11);
      uVar6 = uStack_60 & 0xffffffff;
    }
    FUN_145c6bbbe(local_68,uVar6);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_98 = &DAT_14c872ce8;
  cVar2 = FUN_1449da20c(DAT_14c872ce0,L"PacketHandlerComponents",L"EncryptionComponent");
  if ((cVar2 != '\0') && (1 < (int)uStack_40)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c99fd58) && (FUN_144b3d300(&DAT_14c99fd58), DAT_14c99fd58 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14c99fd50 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"net.AllowEncryption",1);
      _Init_thread_footer(&DAT_14c99fd58);
    }
    if ((DAT_14c99fd50 == (longlong *)0x0) ||
       (iVar3 = (**(code **)(*DAT_14c99fd50 + 0xb0))(), iVar3 != 0)) {
      FUN_142b045d0(param_1,&local_58,&local_48,1);
      plVar5 = local_50;
      if (local_50 == (longlong *)0x0) {
        *(undefined2 **)(param_1 + 0x1b8) = local_58;
        plVar7 = *(longlong **)(param_1 + 0x1c0);
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x1c0) = 0;
LAB_142b04106:
          LOCK();
          plVar5 = plVar7 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
joined_r0x000142b04131:
            if (iVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        *(undefined2 **)(param_1 + 0x1b8) = local_58;
        plVar7 = *(longlong **)(param_1 + 0x1c0);
        if (local_50 == plVar7) {
          LOCK();
          plVar7 = local_50 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
            plVar7 = plVar5;
            goto joined_r0x000142b04131;
          }
        }
        else {
          *(longlong **)(param_1 + 0x1c0) = local_50;
          if (plVar7 != (longlong *)0x0) goto LAB_142b04106;
        }
      }
      plVar5 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffffff00);
  local_98 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"PacketHandlerComponents",L"bEnableReliability",&local_68);
  if (((char)local_68 != '\x01') || (*(longlong *)(param_1 + 0x230) != 0)) goto LAB_142b041a0;
  puVar4 = (undefined2 *)FUN_14001cc68(0x58,0x10);
  FUN_14707905e(puVar4);
  local_58 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a15ddf0;
  plVar5[2] = (longlong)puVar4;
  local_50 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    *(undefined2 **)(param_1 + 0x230) = puVar4;
    plVar7 = *(longlong **)(param_1 + 0x238);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x238) = 0;
LAB_142b044f3:
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000142b0451e:
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined2 **)(param_1 + 0x230) = puVar4;
    plVar7 = *(longlong **)(param_1 + 0x238);
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar7 = plVar5;
        goto joined_r0x000142b0451e;
      }
    }
    else {
      *(longlong **)(param_1 + 0x238) = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_142b044f3;
    }
  }
  FUN_142b04bc4(param_1,&local_58,1);
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_142b041a0:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_5 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b045d0 FUN_142b045d0 body=1521 status=ok
// SIG undefined FUN_142b045d0(void)

undefined2 **
FUN_142b045d0(undefined8 param_1,undefined2 **param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = (undefined2 *)0x0;
  param_2[1] = (undefined2 *)0x0;
  iVar4 = (int)param_3[1];
  if (1 < iVar4) {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar17 = 0;
    do {
      sVar2 = *(short *)(*param_3 + (longlong)(int)uVar17 * 2);
      if (sVar2 != 0x20) {
        if (sVar2 == 0x28) {
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
          iVar11 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar11 = 0;
          }
          if ((int)uVar16 < iVar11) {
            uVar17 = (ulonglong)(int)uVar16;
            sVar2 = *(short *)(*param_3 + uVar17 * 2);
            while (sVar2 != 0x29) {
              uVar17 = uVar17 + 1;
              FUN_140002184(&local_68);
              iVar4 = (int)param_3[1];
              iVar11 = iVar4 + -1;
              if (iVar4 == 0) {
                iVar11 = 0;
              }
              if ((longlong)iVar11 <= (longlong)uVar17) break;
              sVar2 = *(short *)(*param_3 + uVar17 * 2);
            }
          }
        }
        else {
          FUN_140002184(&local_58);
          iVar4 = (int)param_3[1];
        }
      }
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      iVar11 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar11 = 0;
      }
    } while ((int)uVar16 < iVar11);
    puVar7 = local_58;
    if ((int)uStack_50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    lVar10 = 0;
    while( true ) {
      uVar13 = *(ushort *)((longlong)puVar7 + lVar10);
      uVar17 = (ulonglong)uVar13;
      uVar14 = *(ushort *)((longlong)L"ReliabilityHandlerComponent" + lVar10);
      if (uVar13 != uVar14) break;
      if (uVar13 == 0) goto LAB_142b04a87;
LAB_142b046f5:
      lVar10 = lVar10 + 2;
    }
    if ((uVar14 | uVar13) < 0x80) {
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar15]) goto LAB_142b046f5;
    }
    if (uVar13 != uVar14) {
      local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
      local_a8 = local_a8 & 0xffffffff00000000;
      iVar4 = FUN_1447ee042(&local_58,&DAT_149e0635c,1,1);
      if (iVar4 == -1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        puVar7 = local_58;
        if ((int)uStack_50 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_98,puVar7,1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        plVar8 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_98,&local_78,0);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x40))(plVar8,&local_78,&local_68);
          plVar8 = local_70;
          if (&local_78 != param_2) {
            *param_2 = local_78;
            local_78 = (undefined2 *)0x0;
            plVar3 = (longlong *)param_2[1];
            if (local_70 != plVar3) {
              local_70 = (longlong *)0x0;
              param_2[1] = (undefined2 *)plVar8;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar8 = plVar3 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
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
          plVar8 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_70 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
        }
      }
      else {
        puVar7 = local_58;
        if ((int)uStack_50 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        uVar16 = (int)uStack_50 - 1;
        if ((int)uStack_50 == 0) {
          uVar16 = 0;
        }
        uVar5 = iVar4 + 1U;
        if ((int)uVar16 <= (int)(iVar4 + 1U)) {
          uVar5 = uVar16;
        }
        uVar17 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar17 = 0;
        }
        FUN_14006620a(&local_88,puVar7 + uVar17,uVar16 - (int)uVar17);
        iVar4 = (int)local_80;
        iVar6 = ((int)local_80 == 0) + 10;
        local_78 = local_88;
        local_88 = (undefined2 *)0x0;
        iVar11 = local_80._4_4_;
        local_70 = local_80;
        local_80 = (longlong *)0x0;
        iVar12 = iVar6 + iVar4;
        if (iVar12 < iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6);
        }
        if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar12);
        }
        if (iVar11 < iVar12) {
          FUN_1446f8c06(&local_78);
        }
        FUN_1400020e8(&local_78,L"_Singleton",10);
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar7 = local_78;
        if ((int)local_70 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        uVar9 = FUN_1459d3894();
        local_a8 = 0;
        plVar8 = (longlong *)FUN_140277cc4(uVar9,puVar7,0xc,0);
        if (plVar8 == (longlong *)0x0) {
          puVar7 = local_58;
          if ((int)uStack_50 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          uVar9 = FUN_1459d3894();
          local_a0 = 0;
          local_a8 = local_a8 & 0xffffffff00000000;
          lVar10 = FUN_141433b6f(uVar9,0,puVar7,0);
          if (lVar10 != 0) {
            puVar7 = local_78;
            if ((int)local_70 == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            FUN_1446f470e(&local_90,puVar7,1);
            plVar8 = (longlong *)FUN_14629efe9(DAT_14c951640,lVar10,local_90);
            if (plVar8 != (longlong *)0x0) goto LAB_142b0498f;
          }
        }
        else {
LAB_142b0498f:
          (**(code **)(*plVar8 + 0x2a0))(plVar8,&local_88,&local_68);
          plVar8 = local_80;
          if (&local_88 != param_2) {
            *param_2 = local_88;
            local_88 = (undefined2 *)0x0;
            plVar3 = (longlong *)param_2[1];
            if (local_80 != plVar3) {
              local_80 = (longlong *)0x0;
              param_2[1] = (undefined2 *)plVar8;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar8 = plVar3 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
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
          plVar8 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_80 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (*param_2 != (undefined2 *)0x0) {
        FUN_142b04bc4(param_1,param_2,param_4);
      }
    }
LAB_142b04a87:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b04bc4 FUN_142b04bc4 body=433 status=ok
// SIG undefined FUN_142b04bc4(void)

void FUN_142b04bc4(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  if (*(char *)(param_1 + 1) == '\0') {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      plVar5 = (longlong *)param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x1a8);
      lVar6 = (longlong)*(int *)(param_1 + 0x1b0);
      if (lVar6 == 0) {
        bVar12 = false;
        plVar11 = plVar10;
      }
      else {
        lVar7 = lVar6 * 0x10;
        plVar2 = plVar10 + lVar6 * 2;
        do {
          bVar12 = *(longlong *)(*plVar10 + 0x1c) == *(longlong *)(lVar4 + 0x1c);
          plVar11 = plVar10;
          if (bVar12) break;
          plVar10 = plVar10 + 2;
          lVar7 = lVar7 + -0x10;
          plVar11 = plVar2;
        } while (lVar7 != 0);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar5 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        LOCK();
        plVar10 = plVar5 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        LOCK();
        plVar10 = plVar5 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      if ((bool)(bVar12 & plVar11 != (longlong *)0x0)) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x1b0);
      *(uint *)(param_1 + 0x1b0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x1b4) < iVar3 + 1U) {
        FUN_14629f1b2((longlong *)(param_1 + 0x1a8),iVar3);
      }
      lVar4 = *(longlong *)(param_1 + 0x1a8);
      *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
      lVar6 = param_2[1];
      *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      *(longlong *)(*param_2 + 8) = param_1;
      if ((*(int *)(param_1 + 0x38) != 0) &&
         (plVar5 = *(longlong **)(param_1 + 0x30), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x60))(plVar5,param_2);
      }
      if (param_3 != '\0') {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000142b04d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_2 + 0x48))();
      return;
    }
    pwVar9 = L"Failed to add handler - invalid instance.";
    uVar8 = 0x149;
  }
  else {
    pwVar9 = L"Handler added during runtime.";
    uVar8 = 0x142;
  }
  FUN_140033559(".\\Runtime/PacketHandlers/PacketHandler/Private/PacketHandler.cpp",uVar8,pwVar9);
  return;
}



// FUNCTION 142b04d76 FUN_142b04d76 body=1138 status=ok
// SIG undefined FUN_142b04d76(void)

ulonglong FUN_142b04d76(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined ****ppppuVar7;
  ulonglong uVar8;
  undefined7 uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_1a8 [40];
  undefined ***local_180;
  longlong local_178 [2];
  undefined ***local_168 [3];
  undefined ***local_150 [3];
  longlong local_138 [2];
  undefined **local_128 [5];
  byte local_ff;
  longlong *local_d0;
  longlong local_b0;
  longlong local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar3 = (int)param_2[2];
  lVar11 = *param_2;
  uVar9 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(int *)(param_1 + 0x1b0) < 1) {
LAB_142b04dde:
    FUN_144a99d0c(local_128,lVar11,(longlong)iVar3);
    FUN_140056680(local_138);
    if (local_138[0] != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 1) == '\0') {
      if (*(int *)(param_1 + 0x1b0) < 1) {
        FUN_1415522a8();
      }
      else {
        FUN_145ae349a();
      }
    }
    lVar11 = (longlong)*(int *)(param_1 + 0x1b0);
    if (0 < lVar11) {
      local_180 = (undefined ***)(param_2 + 4);
      uVar8 = lVar11 + 1;
      lVar11 = lVar11 << 4;
      do {
        lVar11 = lVar11 + -0x10;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + lVar11);
        cVar2 = (**(code **)(*plVar1 + 8))();
        if (((cVar2 != '\0') && ((local_ff & 2) == 0)) && (local_80 < local_88)) {
          if (local_80 != 0) {
            cVar2 = (**(code **)(*plVar1 + 0x40))();
            if ((cVar2 == '\0') && (local_80 != 0)) {
              uVar10 = (uint)(local_88 - local_80);
              if (0 < (int)uVar10) {
                uVar5 = (local_88 - local_80) + 7U >> 3;
                local_78 = 0;
                uStack_70 = uVar5 & 0xffffffff;
                if ((int)uVar5 == 0) {
                  lVar6 = 0;
                }
                else {
                  FUN_1447403be(&local_78,0);
                  lVar6 = (longlong)(int)uStack_70;
                }
                *(undefined1 *)(local_78 + -1 + lVar6) = 0;
                uVar10 = uVar10 & 0x7fffffff;
                (*(code *)local_128[0][0x2f])(local_128,local_78,uVar10);
                FUN_14170c378(local_128,&local_78,uVar10);
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          if (*(char *)(param_2 + 7) == '\x01') {
            local_150[0] = local_128;
            lVar6 = 0x30;
            ppppuVar7 = local_150;
          }
          else {
            local_168[0] = local_128;
            lVar6 = 0x18;
            ppppuVar7 = local_168;
          }
          ppppuVar7[1] = local_180;
          ppppuVar7[2] = (undefined ***)(param_2 + 7);
          (**(code **)(*plVar1 + lVar6))();
        }
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
    }
    if ((local_ff & 2) == 0) {
      if ((local_80 == 0) || (local_88 - local_80 == 0)) {
        FUN_14626c7de(param_1 + 0xf8,local_128);
      }
      else {
        uVar8 = (local_88 - local_80) + 7U >> 3;
        local_78 = 0;
        uStack_70 = uVar8 & 0xffffffff;
        if ((int)uVar8 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1447403be(&local_78,0);
          lVar11 = (longlong)(int)uStack_70;
        }
        *(undefined1 *)(local_78 + -1 + lVar11) = 0;
        (*(code *)local_128[0][0x2f])(local_128,local_78,local_88 - local_80);
        FUN_14170c378(param_1 + 0xf8,&local_78,local_88 - local_80);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      if (*(longlong *)(param_1 + 0x1a0) < *(longlong *)(param_1 + 0x198)) {
        FUN_140056680(local_178,L"PrePacketHandler");
        if (local_178[0] != 0) {
          FUN_1400020a8();
        }
      }
      iVar4 = *(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x1a0);
      lVar11 = *(longlong *)(param_1 + 0x188);
      iVar3 = iVar4 + 0xe;
      if (-1 < iVar4 + 7) {
        iVar3 = iVar4 + 7;
      }
      iVar3 = iVar3 >> 3;
      uVar8 = 0;
    }
    else {
      uVar8 = CONCAT71(uVar9,1);
      lVar11 = 0;
      iVar3 = 0;
      iVar4 = 0;
    }
    *param_2 = lVar11;
    *(int *)(param_2 + 1) = iVar3;
    *(int *)(param_2 + 2) = iVar4;
    local_128[0] = &PTR_FUN_149e37220;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_128[0] = &PTR__purecall_149e35f70;
    if (local_d0 != (longlong *)0x0) {
      if (*local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_d0);
    }
    if (local_b0 != 0) {
      if (*(longlong *)(local_b0 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_b0);
    }
  }
  else {
    if (lVar11 != 0) {
      cVar2 = *(char *)(lVar11 + -1 + (longlong)(int)param_2[1]);
      if (cVar2 != '\0') {
        do {
          iVar3 = iVar3 + -1;
          bVar12 = -1 < cVar2;
          cVar2 = cVar2 * '\x02';
        } while (bVar12);
        goto LAB_142b04dde;
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    uVar8 = CONCAT71(uVar9,1);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b051ea FUN_142b051ea body=844 status=ok
// SIG undefined FUN_142b051ea(void)

undefined8 *
FUN_142b051ea(longlong param_1,undefined8 *param_2,void *param_3,int param_4,undefined8 *param_5,
             char param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *_Dst;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    *param_2 = param_3;
    *(int *)(param_2 + 1) = param_4;
    goto LAB_142b05488;
  }
  lVar1 = param_1 + 0x40;
  FUN_14493765a(lVar1);
  cVar4 = *(char *)(param_1 + 1);
  if (cVar4 == '\0') {
    if (*(int *)(param_1 + 0x1b0) < 1) {
      FUN_1415522a8(param_1);
    }
    else {
      FUN_145ae349a(param_1);
    }
    cVar4 = *(char *)(param_1 + 1);
  }
  if (cVar4 == '\x02') {
    FUN_1401177fa(lVar1,param_3,(longlong)param_4);
    FUN_140056680(local_58,L"PrePacketHandler");
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      if ((*(byte *)(param_1 + 0x69) & 2) == 0) {
        lVar9 = 0;
        lVar10 = 0;
LAB_142b052c5:
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + lVar9);
        cVar4 = (**(code **)(*plVar11 + 8))(plVar11);
        if (cVar4 == '\0') {
LAB_142b05318:
          lVar10 = lVar10 + 1;
          iVar5 = *(int *)(param_1 + 0x1b0);
          if ((iVar5 <= lVar10) || (lVar9 = lVar9 + 0x10, (*(byte *)(param_1 + 0x69) & 2) != 0))
          goto LAB_142b05331;
          goto LAB_142b052c5;
        }
        if (*(longlong *)(param_1 + 0xe0) <=
            (longlong)(ulonglong)*(uint *)((longlong)plVar11 + 0x14)) {
          if (param_6 == '\0') {
            (**(code **)(*plVar11 + 0x28))(plVar11,lVar1,param_5);
          }
          else {
            (**(code **)(*plVar11 + 0x38))(plVar11,param_7,lVar1,param_5);
          }
          goto LAB_142b05318;
        }
        FUN_14572541c(lVar1);
        iVar5 = *(int *)(param_1 + 0x1b0);
LAB_142b05331:
        if (iVar5 < 1) goto LAB_142b0536a;
      }
      if (0 < *(longlong *)(param_1 + 0xe0)) {
        FUN_140056680(local_68,L"PostPacketHandler");
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1400748c2(lVar1,1);
      }
    }
LAB_142b0536a:
    if (((param_6 == '\0') && (*(longlong *)(param_1 + 0x230) != 0)) &&
       (0 < *(longlong *)(param_1 + 0xe0))) {
      FUN_1470792e2(*(longlong *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0xd0),
                    *(longlong *)(param_1 + 0xe0),param_5);
    }
  }
  else if (0 < param_4 && cVar4 == '\x01') {
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    if (param_6 == '\0') {
      plVar11 = (longlong *)(param_1 + 0x1c8);
      *(int *)(puVar7 + 1) = param_4;
      uVar3 = param_5[1];
      *(undefined8 *)((longlong)puVar7 + 0xc) = *param_5;
      *(undefined8 *)((longlong)puVar7 + 0x14) = uVar3;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = 0;
      uVar8 = (ulonglong)(param_4 + 7U >> 3);
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      _Dst = (void *)FUN_14001cc68(uVar8,0x10);
      *puVar7 = _Dst;
      memcpy(_Dst,param_3,uVar8);
      uVar8 = (ulonglong)*(int *)(param_1 + 0x1d0);
      uVar6 = *(int *)(param_1 + 0x1d0) + 1;
      *(uint *)(param_1 + 0x1d0) = uVar6;
      if (*(uint *)(param_1 + 0x1d4) < uVar6) {
LAB_142b05515:
        FUN_147079728(plVar11,uVar8 & 0xffffffff);
      }
    }
    else {
      local_78 = *param_7;
      local_70 = param_7[1];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      plVar11 = (longlong *)(param_1 + 0x210);
      local_88 = param_5;
      FUN_147079b48(puVar7,&local_78,param_3,param_4);
      uVar8 = (ulonglong)*(int *)(param_1 + 0x218);
      uVar6 = *(int *)(param_1 + 0x218) + 1;
      *(uint *)(param_1 + 0x218) = uVar6;
      if (*(uint *)(param_1 + 0x21c) < uVar6) goto LAB_142b05515;
    }
    *(undefined8 **)(*plVar11 + uVar8 * 8) = puVar7;
  }
  if ((*(byte *)(param_1 + 0x69) & 2) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xe0);
    *param_2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
  }
LAB_142b05488:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b05538 FUN_142b05538 body=72 status=ok
// SIG undefined FUN_142b05538(void)

undefined8 FUN_142b05538(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x1e8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    *(longlong *)(param_1 + 0x1e8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 142b05580 FUN_142b05580 body=72 status=ok
// SIG undefined FUN_142b05580(void)

undefined8 FUN_142b05580(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x1f8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 0x1f8);
    *(longlong *)(param_1 + 0x1f8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 142b055cc FUN_142b055cc body=196 status=ok
// SIG undefined FUN_142b055cc(void)

void FUN_142b055cc(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/PacketHandler",&PTR_FUN_14a15e1b0,1,0);
  local_48 = 0x800000014a15e1d8;
  local_34 = 0xd;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14629ee44(&local_48);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/PacketHandler",&PTR_FUN_14a15ea60,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b056b3 FUN_142b056b3 body=151 status=ok
// SIG undefined FUN_142b056b3(void)

void FUN_142b056b3(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c99fd78);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c99fd78,4000);
  atexit((_func_5014 *)&LAB_142b05694);
  local_28 = 0x800000014a15ebf4;
  local_14 = 3;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c99fdb4,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0574c FUN_142b0574c body=618 status=ok
// SIG undefined FUN_142b0574c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142b0574c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int aiStack_7038 [2034];
  undefined *puStack_5070;
  undefined1 auStack_5068 [32];
  undefined8 local_5048;
  undefined8 uStack_5040;
  int local_5038 [1024];
  int aiStack_4038 [1024];
  int aiStack_3038 [1024];
  int aiStack_2038 [1024];
  int aiStack_1038 [1026];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5068;
  local_5048 = 0;
  uStack_5040 = 0;
  puStack_5070 = (undefined *)0x142b0578b;
  FUN_145ec3b28(&local_5048);
  lVar7 = local_5048;
  lVar10 = param_1[1];
  lVar14 = (longlong)(int)lVar10;
  lVar5 = *param_1;
  puStack_5070 = (undefined *)0x142b057aa;
  memset(local_5038,0,0x5000);
  if (0 < lVar14) {
    lVar13 = 0;
    do {
      uVar2 = *(uint *)(lVar5 + 8 + lVar13);
      local_5038[uVar2 & 0x3ff] = local_5038[uVar2 & 0x3ff] + 1;
      piVar1 = (int *)((longlong)aiStack_4038 + (ulonglong)(uVar2 >> 8 & 0x1ffc));
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)((longlong)aiStack_2038 + (ulonglong)(uVar2 >> 0x13 & 0x7fc));
      *piVar1 = *piVar1 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar14 << 4 != lVar13);
  }
  lVar13 = 0;
  iVar11 = 0;
  iVar8 = 0;
  iVar17 = 0;
  do {
    iVar3 = local_5038[lVar13];
    local_5038[lVar13] = iVar17 + -1;
    iVar9 = aiStack_4038[lVar13] + iVar8;
    aiStack_4038[lVar13] = iVar8 + -1;
    iVar12 = aiStack_2038[lVar13] + iVar11;
    aiStack_2038[lVar13] = iVar11 + -1;
    lVar13 = lVar13 + 1;
    iVar11 = iVar12;
    iVar8 = iVar9;
    iVar17 = iVar3 + iVar17;
  } while (lVar13 != 0x400);
  lVar13 = 0x1000;
  do {
    iVar11 = aiStack_7038[lVar13];
    aiStack_7038[lVar13] = iVar9 + -1;
    iVar8 = local_5038[lVar13];
    local_5038[lVar13] = iVar12 + -1;
    lVar13 = lVar13 + 1;
    iVar12 = iVar8 + iVar12;
    iVar9 = iVar11 + iVar9;
  } while (lVar13 != 0x1400);
  if (0 < (int)lVar10) {
    lVar14 = lVar14 * 0x10;
    lVar10 = 0;
    do {
      uVar6 = *(undefined8 *)(lVar5 + lVar10);
      uVar2 = *(uint *)(lVar5 + 8 + lVar10);
      uVar4 = *(undefined4 *)(lVar5 + 0xc + lVar10);
      uVar15 = uVar2 & 0x3ff;
      iVar11 = local_5038[uVar15];
      local_5038[uVar15] = (int)((longlong)iVar11 + 1);
      lVar13 = ((longlong)iVar11 + 1) * 0x10;
      *(undefined8 *)(lVar7 + lVar13) = uVar6;
      *(uint *)(lVar7 + 8 + lVar13) = uVar2;
      *(undefined4 *)(lVar7 + 0xc + lVar13) = uVar4;
      lVar10 = lVar10 + 0x10;
    } while (lVar14 != lVar10);
    lVar10 = 0;
    do {
      uVar6 = *(undefined8 *)(lVar7 + lVar10);
      uVar2 = *(uint *)(lVar7 + 8 + lVar10);
      uVar4 = *(undefined4 *)(lVar7 + 0xc + lVar10);
      uVar16 = (ulonglong)(uVar2 >> 8 & 0x1ffc);
      lVar13 = (longlong)*(int *)((longlong)aiStack_4038 + uVar16) + 1;
      *(int *)((longlong)aiStack_4038 + uVar16) = (int)lVar13;
      lVar13 = lVar13 * 0x10;
      *(undefined8 *)(lVar5 + lVar13) = uVar6;
      *(uint *)(lVar5 + 8 + lVar13) = uVar2;
      *(undefined4 *)(lVar5 + 0xc + lVar13) = uVar4;
      lVar10 = lVar10 + 0x10;
    } while (lVar14 != lVar10);
    lVar10 = 0;
    do {
      uVar6 = *(undefined8 *)(lVar5 + lVar10);
      uVar2 = *(uint *)(lVar5 + 8 + lVar10);
      uVar4 = *(undefined4 *)(lVar5 + 0xc + lVar10);
      uVar16 = (ulonglong)(uVar2 >> 0x13 & 0x7fc);
      lVar13 = (longlong)*(int *)((longlong)aiStack_2038 + uVar16) + 1;
      *(int *)((longlong)aiStack_2038 + uVar16) = (int)lVar13;
      lVar13 = lVar13 * 0x10;
      *(undefined8 *)(lVar7 + lVar13) = uVar6;
      *(uint *)(lVar7 + 8 + lVar13) = uVar2;
      *(undefined4 *)(lVar7 + 0xc + lVar13) = uVar4;
      lVar10 = lVar10 + 0x10;
    } while (lVar14 != lVar10);
  }
  local_5038[0] = (int)local_5048;
  local_5038[1] = local_5048._4_4_;
  local_5038[2] = (undefined4)uStack_5040;
  local_5038[3] = uStack_5040._4_4_;
  lVar5 = *param_1;
  lVar10 = param_1[1];
  *(int *)param_1 = (int)local_5048;
  *(undefined4 *)((longlong)param_1 + 4) = local_5048._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_5040;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5040._4_4_;
  local_5048 = lVar5;
  uStack_5040 = lVar10;
  if (lVar5 != 0) {
    puStack_5070 = (undefined *)0x142b0598e;
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_5068) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_5070 = &UNK_142b059b6;
  FUN_144d8e3a0();
}



// FUNCTION 142b059c4 FUN_142b059c4 body=449 status=ok
// SIG undefined FUN_142b059c4(void)

uint * FUN_142b059c4(longlong param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  plVar4 = (longlong *)(param_1 + 0x68);
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar5 = uVar1 & 0x3fffffff;
  *param_2 = uVar5;
  iVar2 = *param_3;
  iVar6 = param_3[2];
  if (iVar2 + iVar6 == 0) {
    *(uint *)(param_1 + 0x70) = uVar1 + 1;
    if (*(uint *)(param_1 + 0x74) < uVar1 + 1) {
      FUN_1447808da(plVar4,uVar1);
    }
    *(undefined4 *)(*plVar4 + (longlong)(int)uVar1 * 4) = 0;
    return param_2;
  }
  if (iVar2 == 0) goto LAB_142b05a79;
  uVar5 = uVar5 | 0x40000000;
  *param_2 = uVar5;
  uVar3 = param_3[1];
  *(uint *)(param_1 + 0x70) = uVar1 + 1;
  if (*(uint *)(param_1 + 0x74) < uVar1 + 1) {
    FUN_1447808da(plVar4,uVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar1 * 4) = iVar2;
  iVar6 = *(int *)(param_1 + 0x70);
  uVar1 = iVar2 * 2;
  *(int *)(param_1 + 0x70) = iVar6 + iVar2 * 2;
  if ((uint)(*(int *)(param_1 + 0x74) - iVar6) < uVar1) {
    FUN_1447808da(plVar4,iVar6);
LAB_142b05a54:
    memcpy((void *)((longlong)iVar6 * 4 + *plVar4),(void *)((ulonglong)uVar3 + (longlong)param_3),
           (longlong)(int)uVar1 << 2);
  }
  else if (uVar1 != 0) goto LAB_142b05a54;
  iVar6 = param_3[2];
LAB_142b05a79:
  if (iVar6 != 0) {
    *param_2 = uVar5 | 0x80000000;
    uVar1 = param_3[3];
    iVar2 = *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
      FUN_1447808da(plVar4,iVar2);
    }
    *(int *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 4) = iVar6;
    uVar5 = iVar6 * 5;
    iVar2 = *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = iVar2 + uVar5;
    if ((uint)(*(int *)(param_1 + 0x74) - iVar2) < uVar5) {
      FUN_1447808da(plVar4,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *plVar4),
           (void *)((longlong)(param_3 + 2) + (ulonglong)uVar1),(longlong)(int)uVar5 << 2);
  }
  return param_2;
}



// FUNCTION 142b05b85 FUN_142b05b85 body=69 status=ok
// SIG undefined FUN_142b05b85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05b85(void)

{
  _DAT_14c99fdb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fdc0,1);
  return;
}



// FUNCTION 142b05bca FUN_142b05bca body=69 status=ok
// SIG undefined FUN_142b05bca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05bca(void)

{
  _DAT_14c99fdc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fdd0,1);
  return;
}



// FUNCTION 142b05c0f FUN_142b05c0f body=69 status=ok
// SIG undefined FUN_142b05c0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05c0f(void)

{
  _DAT_14c99fdd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fde0,1);
  return;
}



// FUNCTION 142b05c54 FUN_142b05c54 body=69 status=ok
// SIG undefined FUN_142b05c54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05c54(void)

{
  _DAT_14c99fde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fdf0,1);
  return;
}



// FUNCTION 142b05c99 FUN_142b05c99 body=69 status=ok
// SIG undefined FUN_142b05c99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05c99(void)

{
  _DAT_14c99fdf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe00,1);
  return;
}



// FUNCTION 142b05cde FUN_142b05cde body=69 status=ok
// SIG undefined FUN_142b05cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05cde(void)

{
  _DAT_14c99fe10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe18,1);
  return;
}



// FUNCTION 142b05d23 FUN_142b05d23 body=69 status=ok
// SIG undefined FUN_142b05d23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05d23(void)

{
  _DAT_14c99fe20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe28,1);
  return;
}



// FUNCTION 142b05d68 FUN_142b05d68 body=69 status=ok
// SIG undefined FUN_142b05d68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05d68(void)

{
  _DAT_14c99fe30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe38,1);
  return;
}



// FUNCTION 142b05dad FUN_142b05dad body=69 status=ok
// SIG undefined FUN_142b05dad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05dad(void)

{
  _DAT_14c99fe48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe50,1);
  return;
}



// FUNCTION 142b05df2 FUN_142b05df2 body=69 status=ok
// SIG undefined FUN_142b05df2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05df2(void)

{
  _DAT_14c99fe60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe68,1);
  return;
}



// FUNCTION 142b05e37 FUN_142b05e37 body=69 status=ok
// SIG undefined FUN_142b05e37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05e37(void)

{
  _DAT_14c99fe70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe78,1);
  return;
}



// FUNCTION 142b05e7c FUN_142b05e7c body=69 status=ok
// SIG undefined FUN_142b05e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05e7c(void)

{
  _DAT_14c99fe80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fe88,1);
  return;
}



// FUNCTION 142b05ec1 FUN_142b05ec1 body=69 status=ok
// SIG undefined FUN_142b05ec1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b05ec1(void)

{
  _DAT_14c99fe98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b05f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fea0,1);
  return;
}



// FUNCTION 142b05f06 FUN_142b05f06 body=53 status=ok
// SIG undefined FUN_142b05f06(void)

void FUN_142b05f06(void)

{
  if (DAT_14c99fee0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c99fee0)(DAT_14c99fee0,1);
  }
  if (DAT_14c99fed0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b05f3c FUN_142b05f3c body=222 status=ok
// SIG undefined FUN_142b05f3c(void)

void FUN_142b05f3c(char *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_144b07d40(param_1);
  *(undefined4 *)(param_2 + 200) = 1;
  if (*param_1 == '\x01') {
    FUN_144911efa(param_1,param_2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_140259550(param_1 + 8,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
    if (1 < *(int *)(param_1 + 0x10)) {
      lVar2 = *(longlong *)(param_1 + 8);
      uVar6 = (ulonglong)(*(int *)(param_1 + 0x10) - 1);
      lVar3 = *(longlong *)(lVar2 + uVar6 * 8);
      do {
        uVar7 = (int)uVar6 - 1;
        uVar8 = (ulonglong)(uVar7 >> 1);
        lVar4 = *(longlong *)(lVar2 + uVar8 * 8);
        bVar5 = *(int *)(lVar4 + 0x94) < *(int *)(lVar3 + 0x94);
        if (*(int *)(lVar3 + 0x94) == *(int *)(lVar4 + 0x94)) {
          bVar5 = *(uint *)(lVar3 + 0x90) < *(uint *)(lVar4 + 0x90);
        }
        if (!bVar5) break;
        *(longlong *)(lVar2 + uVar6 * 8) = lVar4;
        *(longlong *)(lVar2 + uVar8 * 8) = lVar3;
        uVar6 = uVar8;
      } while (1 < uVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b06013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 142b0601a FUN_142b0601a body=75 status=ok
// SIG undefined FUN_142b0601a(void)

longlong * FUN_142b0601a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != param_2) {
    *param_1 = (longlong)param_2;
    if (param_2 != (longlong *)0x0) {
      LOCK();
      param_2[2] = param_2[2] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 142b06066 FUN_142b06066 body=568 status=ok
// SIG undefined FUN_142b06066(void)

undefined8 * FUN_142b06066(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = param_2[5];
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = param_2[7];
    param_2[7] = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = param_2[9];
    param_2[9] = 0;
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = param_2[0xb];
    param_2[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    param_2[0xc] = 0;
    if (param_1[0xd] != 0) {
      FUN_1400020a8();
    }
    param_1[0xd] = param_2[0xd];
    param_2[0xd] = 0;
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
    param_2[0xe] = 0;
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    param_1[0xf] = param_2[0xf];
    param_2[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    param_2[0x10] = 0;
    if (param_1[0x11] != 0) {
      FUN_1400020a8();
    }
    param_1[0x11] = param_2[0x11];
    param_2[0x11] = 0;
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
    param_2[0x12] = 0;
  }
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  return param_1;
}



// FUNCTION 142b0629e FUN_142b0629e body=6460 status=ok
// SIG undefined FUN_142b0629e(void)

int * FUN_142b0629e(longlong param_1,int *param_2,wchar_t *param_3,undefined4 param_4,int *param_5,
                   undefined8 *param_6)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  undefined1 auVar8 [16];
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  void *pvVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  size_t sVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  undefined8 *_Src_00;
  ulonglong uVar24;
  undefined2 *puVar25;
  wchar_t *_Str;
  uint uVar26;
  uint uVar27;
  ushort uVar28;
  ushort uVar29;
  wchar_t *pwVar30;
  undefined1 uVar31;
  bool bVar32;
  undefined1 auStack_6d8 [32];
  undefined2 *local_6b8;
  longlong local_6b0;
  undefined8 *local_6a8;
  int *local_6a0;
  longlong *local_698;
  wchar_t *local_690;
  undefined4 local_684;
  undefined8 *local_680;
  undefined8 *local_678;
  size_t local_670;
  undefined2 *local_668;
  int iStack_660;
  undefined4 uStack_65c;
  int local_658;
  undefined4 uStack_654;
  undefined8 local_650;
  undefined1 auStack_648 [16];
  undefined1 auStack_638 [16];
  undefined4 local_628;
  undefined4 local_624;
  undefined8 local_620;
  undefined4 local_618;
  undefined4 local_614;
  undefined8 local_610;
  undefined4 local_608;
  undefined4 local_604;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined1 local_5d0;
  longlong *local_5c8;
  int local_5c0;
  undefined2 local_5bc [128];
  int local_4bc;
  undefined2 local_4b8 [128];
  undefined8 local_3b8;
  undefined1 local_3b0 [16];
  char local_3a0;
  wchar_t local_398 [60];
  undefined8 local_320;
  undefined2 *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218;
  longlong local_198;
  int iStack_190;
  undefined4 uStack_18c;
  int local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  puVar11 = (undefined8 *)FUN_14001cc68(0x138);
  *puVar11 = *(undefined8 *)(param_1 + 0x260);
  puVar11[1] = param_1 + 0x28;
  sVar16 = 0;
  puVar11[0xc] = 0;
  *(undefined4 *)(puVar11 + 0xd) = 0;
  *(undefined1 (*) [16])(puVar11 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)puVar11 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar11 + 0x74) = 0;
  puVar11[0x10] = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  local_680 = puVar11 + 0x21;
  *(undefined1 (*) [16])(puVar11 + 0x1e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x1c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x1a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x16) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)puVar11 + 0x114) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x21) = (undefined1  [16])0x0;
  puVar11[0x25] = 0xffffffffffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x134) = 0;
  local_690 = param_3;
  if (param_3 == (wchar_t *)0x0) {
    local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,4);
    local_3b0 = (undefined1  [16])0x0;
    FUN_1400020e8(local_3b0,L"Expected .utoc extension on container path \'",0x2c);
LAB_142b0649c:
    FUN_1400020e8(local_3b0,param_3,sVar16 & 0xffffffff);
    FUN_1400020e8(local_3b0,&DAT_149e0208a,1);
    uVar6 = local_3b0._0_8_;
    iVar10 = local_3b0._8_4_ + -1;
    if (local_3b0._8_4_ == 0) {
      iVar10 = 0;
    }
    local_4bc = (int)local_3b8;
    iVar22 = 0x7f;
    if (iVar10 < 0x7f) {
      iVar22 = iVar10;
    }
    memcpy(local_4b8,(void *)local_3b0._0_8_,(longlong)iVar22 * 2);
    local_4b8[iVar22] = 0;
    if ((void *)uVar6 != (void *)0x0) {
LAB_142b06bc2:
      FUN_1400020a8();
    }
  }
  else {
    local_6a8 = (undefined8 *)wcslen(param_3);
    iVar10 = (int)local_6a8;
    if (iVar10 < 5) {
LAB_142b06440:
      local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,4);
      local_3b0 = (undefined1  [16])0x0;
      FUN_1400020e8(local_3b0,L"Expected .utoc extension on container path \'",0x2c);
      sVar16 = wcslen(param_3);
      goto LAB_142b0649c;
    }
    local_678 = puVar11 + 2;
    lVar20 = 5;
    lVar23 = 0;
    while( true ) {
      uVar28 = *(ushort *)((longlong)&DAT_149e1dd44 + lVar23);
      uVar21 = (ulonglong)uVar28;
      uVar29 = *(ushort *)((longlong)param_3 + lVar23 + ((ulonglong)(uint)(iVar10 * 2) - 10));
      if (uVar28 != uVar29) break;
      if (uVar28 == 0) goto LAB_142b06518;
LAB_142b06408:
      lVar20 = lVar20 + -1;
      if (lVar20 == 0) goto LAB_142b06518;
      lVar23 = lVar23 + 2;
    }
    if ((uVar29 | uVar28) < 0x80) {
      uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      uVar18 = (ulonglong)uVar29;
      uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
      if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[uVar18]) goto LAB_142b06408;
    }
    if (uVar28 != uVar29) goto LAB_142b06440;
LAB_142b06518:
    local_698 = (longlong *)CONCAT44(local_698._4_4_,iVar10 + -5);
    local_684 = param_4;
    FUN_1402980a2(puVar11 + 0x18,param_3);
    plVar12 = (longlong *)FUN_1400dbadc();
    if (*plVar12 == 0) {
      lVar20 = FUN_140e92164();
      *plVar12 = lVar20;
    }
    pvVar13 = (void *)FUN_14001cc68(0x138);
    memset(pvVar13,0,0x110);
    *(undefined8 *)((longlong)pvVar13 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)pvVar13 + 0x40) = 0;
    *(undefined8 *)((longlong)pvVar13 + 0x48) = 0;
    memset((void *)((longlong)pvVar13 + 0x51),0,0xb3);
    *(undefined8 *)((longlong)pvVar13 + 0x108) = 0;
    *(undefined8 *)((longlong)pvVar13 + 0x110) = 0;
    *(undefined8 *)((longlong)pvVar13 + 0x118) = 0;
    *(undefined8 *)((longlong)pvVar13 + 0x120) = 0;
    *(undefined8 *)((longlong)pvVar13 + 0x128) = 0;
    *(undefined8 *)((longlong)pvVar13 + 0x130) = 0;
    FUN_1427664ce(&local_178,param_3,0,pvVar13);
    if ((int)local_178 == 0) {
      puVar11[0x12] = *(undefined8 *)((longlong)pvVar13 + 0x58);
      plVar12 = puVar11 + 0x22;
      iVar10 = *(int *)((longlong)pvVar13 + 0x34);
      iVar22 = *(int *)(puVar11 + 0x23);
      local_6b0 = param_1;
      local_6a0 = param_2;
      if (iVar22 < iVar10) {
        *(int *)(puVar11 + 0x23) = iVar10;
        if ((uint)(*(int *)((longlong)puVar11 + 0x11c) - iVar22) < (uint)(iVar10 - iVar22)) {
          FUN_14173745c(plVar12,iVar22);
        }
        FUN_142b105c5((longlong)iVar22 * 0x38 + *plVar12,iVar10 - iVar22);
      }
      else {
        if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar10);
        }
        if (iVar10 < iVar22) {
          FUN_147081482(plVar12,iVar10,iVar22 - iVar10);
          FUN_1470814dc(plVar12);
        }
      }
      if (*(int *)((longlong)pvVar13 + 0x34) != 0) {
        uVar21 = (ulonglong)local_698 & 0xffffffff;
        local_670 = uVar21 * 2;
        uVar26 = 0;
        do {
          lVar20 = (longlong)(int)uVar26 * 0x38 + *plVar12;
          local_3a0 = '\0';
          local_3b0._8_8_ = &local_198;
          local_3b0._0_8_ = local_398;
          local_3b8 = local_398;
          if ((uint)local_6a8 < 0x105) {
            if ((int)local_698 != 0) goto LAB_142b066b2;
          }
          else {
            FUN_140213274(&local_3b8,uVar21);
LAB_142b066b2:
            uVar6 = local_3b0._0_8_;
            memcpy((void *)local_3b0._0_8_,local_690,local_670);
            local_3b0._0_8_ = uVar6 + uVar21 * 2;
          }
          if (uVar26 != 0) {
            FUN_140212e80(&local_3b8,L"_s%d",uVar26);
          }
          if ((ulonglong)local_3b0._8_8_ <= (wchar_t *)(local_3b0._0_8_ + 10)) {
            FUN_140213274(&local_3b8,5);
          }
          builtin_wcsncpy((wchar_t *)local_3b0._0_8_,L".ucas",5);
          local_3b0._0_8_ = local_3b0._0_8_ + 10;
          FUN_1402980a2(lVar20 + 0x18,local_3b8,
                        (ulonglong)(local_3b0._0_8_ - (longlong)local_3b8) >> 1);
          plVar19 = (longlong *)*puVar11;
          *(undefined2 *)local_3b0._0_8_ = 0;
          cVar9 = (**(code **)(*plVar19 + 0x10))(plVar19,local_3b8,lVar20,lVar20 + 8);
          if (cVar9 == '\0') {
            local_668 = (undefined2 *)CONCAT44(local_668._4_4_,4);
            iStack_660 = 0;
            uStack_65c = 0;
            local_658 = 0;
            uStack_654 = 0;
            FUN_1400020e8(&iStack_660,L"Failed to open IoStore container file \'",0x27);
            pwVar30 = local_3b8;
            *(undefined2 *)local_3b0._0_8_ = 0;
            sVar16 = 0;
            if (local_3b8 != (wchar_t *)0x0) {
              sVar16 = wcslen(local_3b8);
            }
            FUN_1400020e8(&iStack_660,pwVar30,sVar16);
            FUN_1400020e8(&iStack_660,&DAT_149e0208a,1);
            _Src = (void *)CONCAT44(uStack_65c,iStack_660);
            iVar10 = local_658 + -1;
            if (local_658 == 0) {
              iVar10 = 0;
            }
            local_4bc = (int)local_668;
            iVar22 = 0x7f;
            if (iVar10 < 0x7f) {
              iVar22 = iVar10;
            }
            memcpy(local_4b8,_Src,(longlong)iVar22 * 2);
            param_2 = local_6a0;
            param_1 = local_6b0;
            local_4b8[iVar22] = 0;
            if (_Src != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_3a0 == '\x01') {
              FUN_1400020a8();
            }
            goto LAB_142b06bb2;
          }
          LOCK();
          UNLOCK();
          iVar10 = DAT_14c99feac + 1;
          *(int *)(lVar20 + 0x10) = DAT_14c99feac;
          DAT_14c99feac = iVar10;
          if (local_3a0 == '\x01') {
            FUN_1400020a8(local_3b8);
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(uint *)((longlong)pvVar13 + 0x34));
      }
      if ((DAT_14c75f5ec == 0) || (*(int *)((longlong)pvVar13 + 0xb8) == 0)) {
        uVar26 = 0;
        if (*(int *)((longlong)pvVar13 + 0x18) != 0) {
          do {
            local_3b8 = (wchar_t *)
                        ((longlong)(int)uVar26 * 0xc + *(longlong *)((longlong)pvVar13 + 0x90));
            local_3b0._0_8_ = (longlong)(int)uVar26 * 10 + *(longlong *)((longlong)pvVar13 + 0xa0);
            FUN_14619cc74(puVar11 + 8,&local_4bc,&local_3b8);
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)((longlong)pvVar13 + 0x18));
        }
        uVar31 = 0;
        param_1 = local_6b0;
      }
      else {
        iVar10 = *(int *)((longlong)pvVar13 + 200);
        if ((longlong)iVar10 != 0) {
          lVar20 = *(longlong *)((longlong)pvVar13 + 0xc0);
          lVar23 = 0;
          do {
            lVar14 = (longlong)*(int *)(lVar20 + lVar23);
            local_3b8 = (wchar_t *)(lVar14 * 0xc + *(longlong *)((longlong)pvVar13 + 0x90));
            local_3b0._0_8_ = lVar14 * 10 + *(longlong *)((longlong)pvVar13 + 0xa0);
            FUN_14619cc74(puVar11 + 8,&local_4bc,&local_3b8);
            lVar23 = lVar23 + 4;
          } while ((longlong)iVar10 * 4 != lVar23);
        }
        if (local_678 != (undefined8 *)((longlong)pvVar13 + 0xb0)) {
          if (puVar11[2] != 0) {
            FUN_1400020a8();
          }
          puVar11[2] = *(undefined8 *)((longlong)pvVar13 + 0xb0);
          *(undefined8 *)((longlong)pvVar13 + 0xb0) = 0;
          *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)pvVar13 + 0xb8);
          *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)((longlong)pvVar13 + 0xbc);
          *(undefined8 *)((longlong)pvVar13 + 0xb8) = 0;
        }
        param_1 = local_6b0;
        if (puVar11 + 6 != (undefined8 *)((longlong)pvVar13 + 0xa0)) {
          if (puVar11[6] != 0) {
            FUN_1400020a8();
          }
          puVar11[6] = *(undefined8 *)((longlong)pvVar13 + 0xa0);
          *(undefined8 *)((longlong)pvVar13 + 0xa0) = 0;
          *(undefined4 *)(puVar11 + 7) = *(undefined4 *)((longlong)pvVar13 + 0xa8);
          *(undefined4 *)((longlong)puVar11 + 0x3c) = *(undefined4 *)((longlong)pvVar13 + 0xac);
          *(undefined8 *)((longlong)pvVar13 + 0xa8) = 0;
        }
        uVar31 = 1;
        if (puVar11 + 4 != (undefined8 *)((longlong)pvVar13 + 0x90)) {
          if (puVar11[4] != 0) {
            FUN_1400020a8();
          }
          puVar11[4] = *(undefined8 *)((longlong)pvVar13 + 0x90);
          *(undefined8 *)((longlong)pvVar13 + 0x90) = 0;
          *(undefined4 *)(puVar11 + 5) = *(undefined4 *)((longlong)pvVar13 + 0x98);
          *(undefined4 *)((longlong)puVar11 + 0x2c) = *(undefined4 *)((longlong)pvVar13 + 0x9c);
          *(undefined8 *)((longlong)pvVar13 + 0x98) = 0;
        }
      }
      param_2 = local_6a0;
      *(undefined1 *)((longlong)puVar11 + 0x135) = uVar31;
      if (puVar11 + 0x14 != (undefined8 *)((longlong)pvVar13 + 0xe0)) {
        if (puVar11[0x14] != 0) {
          FUN_1400020a8();
        }
        puVar11[0x14] = *(undefined8 *)((longlong)pvVar13 + 0xe0);
        *(undefined8 *)((longlong)pvVar13 + 0xe0) = 0;
        *(undefined4 *)(puVar11 + 0x15) = *(undefined4 *)((longlong)pvVar13 + 0xe8);
        *(undefined4 *)((longlong)puVar11 + 0xac) = *(undefined4 *)((longlong)pvVar13 + 0xec);
        *(undefined8 *)((longlong)pvVar13 + 0xe8) = 0;
      }
      puVar11[0x13] = (ulonglong)*(uint *)((longlong)pvVar13 + 0x2c);
      if (puVar11 + 0x16 != (undefined8 *)((longlong)pvVar13 + 0xd0)) {
        if (puVar11[0x16] != 0) {
          FUN_1400020a8();
        }
        puVar11[0x16] = *(undefined8 *)((longlong)pvVar13 + 0xd0);
        *(undefined8 *)((longlong)pvVar13 + 0xd0) = 0;
        *(undefined4 *)(puVar11 + 0x17) = *(undefined4 *)((longlong)pvVar13 + 0xd8);
        *(undefined4 *)((longlong)puVar11 + 0xbc) = *(undefined4 *)((longlong)pvVar13 + 0xdc);
        *(undefined8 *)((longlong)pvVar13 + 0xd8) = 0;
      }
      *(undefined1 *)(puVar11 + 0x20) = *(undefined1 *)((longlong)pvVar13 + 0x50);
      uVar6 = *(undefined8 *)((longlong)pvVar13 + 0x48);
      puVar11[0x1a] = *(undefined8 *)((longlong)pvVar13 + 0x40);
      puVar11[0x1b] = uVar6;
      pauVar15 = (undefined1 (*) [16])FUN_14001cc68(0x18,0x10);
      *pauVar15 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar15[1] = 0;
      FUN_142b0601a(local_680,pauVar15);
      plVar12 = (longlong *)puVar11[0x21];
      if (plVar12 != (longlong *)((longlong)pvVar13 + 0x108)) {
        if (*plVar12 != 0) {
          FUN_1400020a8();
        }
        *plVar12 = *(longlong *)((longlong)pvVar13 + 0x108);
        *(undefined8 *)((longlong)pvVar13 + 0x108) = 0;
        *(undefined4 *)(plVar12 + 1) = *(undefined4 *)((longlong)pvVar13 + 0x110);
        *(undefined4 *)((longlong)plVar12 + 0xc) = *(undefined4 *)((longlong)pvVar13 + 0x114);
        *(undefined8 *)((longlong)pvVar13 + 0x110) = 0;
      }
      LOCK();
      UNLOCK();
      iVar10 = DAT_14c99feb0 + 1;
      DAT_14c99feb0 = DAT_14c99feb0 + 1;
      *(int *)(puVar11 + 0x24) = iVar10;
      puVar11[0x25] = *(undefined8 *)((longlong)pvVar13 + 0x38);
      *(undefined4 *)(puVar11 + 0x26) = local_684;
      _Src_00 = (undefined8 *)&DAT_14c845dc8;
    }
    else {
      _Src_00 = &local_178;
    }
    memcpy(&local_4bc,_Src_00,0x104);
LAB_142b06bb2:
    if (pvVar13 != (void *)0x0) {
      FUN_141703cfc(pvVar13);
      goto LAB_142b06bc2;
    }
  }
  iVar10 = local_4bc;
  if (local_4bc != 0) {
    memcpy(param_2 + 1,local_4b8,0x100);
    *param_2 = iVar10;
    goto LAB_142b07a38;
  }
  if ((*(byte *)(puVar11 + 0x20) & 2) != 0) {
    if ((((*(int *)(puVar11 + 0x1a) == *param_5) &&
         (*(int *)((longlong)puVar11 + 0xd4) == param_5[1])) &&
        (*(int *)(puVar11 + 0x1b) == param_5[2])) &&
       (*(int *)((longlong)puVar11 + 0xdc) == param_5[3])) {
      lVar20 = 0;
      do {
        if (*(int *)((longlong)param_6 + lVar20 * 4) != 0) {
          uVar6 = *param_6;
          uVar7 = param_6[1];
          *(undefined1 (*) [16])(puVar11 + 0x1e) = *(undefined1 (*) [16])(param_6 + 2);
          puVar11[0x1c] = uVar6;
          puVar11[0x1d] = uVar7;
          goto LAB_142b06d95;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 != 8);
    }
    local_178 = (undefined **)0x0;
    uStack_170 = 0;
    iVar10 = 0;
    FUN_1407c869a(puVar11 + 0x1a,&local_178,0);
    local_6b8 = &DAT_149dfb77a;
    if ((int)uStack_170 != 0) {
      local_6b8 = (undefined2 *)local_178;
    }
    local_668 = (undefined2 *)0x0;
    iStack_660 = 0;
    uStack_65c = 0;
    FUN_1407c869a(param_5,&local_668,0);
    puVar25 = &DAT_149dfb77a;
    if (iStack_660 != 0) {
      puVar25 = local_668;
    }
    FUN_140002266(&local_3b8,
                  L"Invalid encryption key \'%s\' (container \'%s\', encryption key \'%s\')",puVar25
                  ,local_690);
    pwVar30 = local_3b8;
    _Str = L"";
    if (local_3b0._0_4_ != 0) {
      _Str = local_3b8;
    }
    if (_Str != (wchar_t *)0x0) {
      sVar16 = wcslen(_Str);
      iVar10 = (int)sVar16;
    }
    local_5c0 = 0xd;
    iVar22 = 0x7f;
    if (iVar10 < 0x7f) {
      iVar22 = iVar10;
    }
    memcpy(local_5bc,_Str,(longlong)iVar22 * 2);
    local_5bc[iVar22] = 0;
    *param_2 = local_5c0;
    memcpy(param_2 + 1,local_5bc,0x100);
    if (pwVar30 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar30);
    }
    if (local_668 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_178 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    goto LAB_142b07a38;
  }
LAB_142b06d95:
  local_70 = puVar11[0x25];
  local_68 = 0x6000000;
  local_6b0 = param_1;
  puVar17 = (undefined1 *)FUN_1447a8686(puVar11);
  local_6a0 = param_2;
  if (puVar17 == (undefined1 *)0x0) {
    local_668 = (undefined2 *)CONCAT44(local_668._4_4_,8);
    iStack_660 = 0;
    uStack_65c = 0;
    local_658 = 0;
    uStack_654 = 0;
    FUN_1400020e8(&iStack_660,L"Container header chunk not found",0x20);
    pvVar13 = (void *)CONCAT44(uStack_65c,iStack_660);
    iVar10 = local_658 + -1;
    if (local_658 == 0) {
      iVar10 = 0;
    }
    local_178 = (undefined **)CONCAT44(local_178._4_4_,(int)local_668);
    iVar22 = 0x7f;
    if (iVar10 < 0x7f) {
      iVar22 = iVar10;
    }
    memcpy((void *)((longlong)&local_178 + 4),pvVar13,(longlong)iVar22 * 2);
    *(undefined2 *)((longlong)&local_178 + (longlong)iVar22 * 2 + 4) = 0;
    iVar10 = (int)local_178;
    local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,(int)local_178);
    memcpy((void *)((longlong)&local_3b8 + 4),(void *)((longlong)&local_178 + 4),0x100);
    lVar20 = local_6b0;
    if (pvVar13 != (void *)0x0) {
      FUN_1400020a8(pvVar13);
      lVar20 = local_6b0;
    }
  }
  else {
    uVar26 = *(uint *)(puVar17 + 1);
    uVar4 = *(uint *)(puVar17 + 6);
    uVar21 = (ulonglong)
             CONCAT14(*puVar17,uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                               uVar26 << 0x18);
    uVar26 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    local_6a8 = (undefined8 *)
                (((uVar21 + CONCAT14(puVar17[5],uVar26)) - 1) / (ulonglong)puVar11[0x13]);
    iVar10 = (int)(uVar21 / (ulonglong)puVar11[0x13]);
    uVar18 = *(ulonglong *)(puVar11[0x16] + (longlong)iVar10 * 0xc) & 0xffffffffff;
    lVar20 = puVar11[0x22];
    uVar21 = puVar11[0x12];
    uVar24 = uVar18 % uVar21;
    FUN_1400eecdc(&local_5c8,(ulonglong)CONCAT14(puVar17[5],uVar26) + 0xf & 0xfffffffffffffff0);
    plVar19 = (longlong *)FUN_1400dbadc();
    plVar12 = (longlong *)*plVar19;
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)FUN_140e92164();
      *plVar19 = (longlong)plVar12;
    }
    lVar20 = lVar20 + (longlong)(int)(uVar18 / uVar21) * 0x38;
    if (*(int *)(lVar20 + 0x20) == 0) {
      puVar25 = &DAT_149dfb77a;
    }
    else {
      puVar25 = *(undefined2 **)(lVar20 + 0x18);
    }
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0xe8))(plVar12,puVar25,0);
    if (plVar12 == (longlong *)0x0) {
      local_668 = (undefined2 *)CONCAT44(local_668._4_4_,4);
      iStack_660 = 0;
      uStack_65c = 0;
      local_658 = 0;
      uStack_654 = 0;
      FUN_1400020e8(&iStack_660,L"Failed to open container file ",0x1e);
      iVar10 = *(int *)(lVar20 + 0x20) + -1;
      if (*(int *)(lVar20 + 0x20) == 0) {
        iVar10 = 0;
      }
      FUN_1400020e8(&iStack_660,*(undefined8 *)(lVar20 + 0x18),iVar10);
      pvVar13 = (void *)CONCAT44(uStack_65c,iStack_660);
      iVar10 = local_658 + -1;
      if (local_658 == 0) {
        iVar10 = 0;
      }
      local_178 = (undefined **)CONCAT44(local_178._4_4_,(int)local_668);
      iVar22 = 0x7f;
      if (iVar10 < 0x7f) {
        iVar22 = iVar10;
      }
      memcpy((void *)((longlong)&local_178 + 4),pvVar13,(longlong)iVar22 * 2);
      *(undefined2 *)((longlong)&local_178 + (longlong)iVar22 * 2 + 4) = 0;
      local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,(int)local_178);
      memcpy((void *)((longlong)&local_3b8 + 4),(void *)((longlong)&local_178 + 4),0x100);
      lVar20 = local_6b0;
      if (pvVar13 != (void *)0x0) {
        FUN_1400020a8(pvVar13);
        lVar20 = local_6b0;
      }
    }
    else {
      cVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,uVar24);
      if (cVar9 == '\0') {
        local_668 = (undefined2 *)CONCAT44(local_668._4_4_,6);
        iStack_660 = 0;
        uStack_65c = 0;
        local_658 = 0;
        uStack_654 = 0;
        FUN_140002266(&local_198,L"Failed seeking to offset %llu in container file",uVar24);
LAB_142b071dc:
        iVar10 = iStack_190 + -1;
        if (iStack_190 == 0) {
          iVar10 = 0;
        }
        FUN_1400020e8(&iStack_660,local_198,iVar10);
        pvVar13 = (void *)CONCAT44(uStack_65c,iStack_660);
        iVar10 = local_658 + -1;
        if (local_658 == 0) {
          iVar10 = 0;
        }
        local_178 = (undefined **)CONCAT44(local_178._4_4_,(int)local_668);
        iVar22 = 0x7f;
        if (iVar10 < 0x7f) {
          iVar22 = iVar10;
        }
        memcpy((void *)((longlong)&local_178 + 4),pvVar13,(longlong)iVar22 * 2);
        *(undefined2 *)((longlong)&local_178 + (longlong)iVar22 * 2 + 4) = 0;
        local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,(int)local_178);
        memcpy((void *)((longlong)&local_3b8 + 4),(void *)((longlong)&local_178 + 4),0x100);
        if (local_198 != 0) {
          FUN_1400020a8();
          pvVar13 = (void *)CONCAT44(uStack_65c,iStack_660);
        }
        lVar20 = local_6b0;
        if (pvVar13 != (void *)0x0) {
          FUN_1400020a8(pvVar13);
        }
      }
      else {
        cVar9 = (**(code **)(*plVar12 + 0x20))
                          (plVar12,*local_5c8,
                           (ulonglong)CONCAT14((char)local_5c8[3],(int)local_5c8[1]));
        if (cVar9 == '\0') {
          local_668 = (undefined2 *)CONCAT44(local_668._4_4_,6);
          iStack_660 = 0;
          uStack_65c = 0;
          local_658 = 0;
          uStack_654 = 0;
          FUN_140002266(&local_198,L"Failed reading %llu bytes at offset %llu",
                        (ulonglong)CONCAT14((char)local_5c8[3],(int)local_5c8[1]),uVar24);
          goto LAB_142b071dc;
        }
        bVar3 = *(byte *)(puVar11 + 0x20);
        bVar32 = true;
        local_698 = plVar12;
        if (*(int *)(puVar11 + 0x1c) == 0) {
          lVar20 = 0;
          do {
            if (lVar20 == 7) {
              if ((bVar3 & 4) == 0) goto LAB_142b073a3;
              bVar32 = false;
              break;
            }
            lVar23 = lVar20 * 4;
            lVar20 = lVar20 + 1;
          } while (*(int *)((longlong)puVar11 + lVar23 + 0xe4) == 0);
        }
        iVar22 = (int)local_6a8;
        if (iVar10 <= iVar22) {
          local_6a8 = puVar11 + 0x1c;
          lVar20 = *local_5c8;
          pwVar30 = (wchar_t *)(longlong)iVar22;
          lVar23 = (longlong)iVar10;
          local_690 = pwVar30;
          do {
            uVar21 = (ulonglong)
                     ((*(uint *)(puVar11[0x16] + 4 + lVar23 * 0xc) >> 8) + 0xf & 0xfffffff0);
            if ((bVar3 & 4) != 0) {
              lVar14 = *(longlong *)*local_680;
              local_198 = 0;
              iStack_190 = 0;
              uStack_18c = 0;
              local_188 = 0;
              FUN_140f0be04(lVar20,uVar21,&local_198);
              auVar8._8_4_ = iStack_190;
              auVar8._0_8_ = local_198;
              auVar8._12_4_ = uStack_18c;
              pwVar30 = local_690;
              if (*(undefined1 (*) [16])(lVar14 + lVar23 * 0x14) != auVar8 ||
                  local_188 != *(int *)(lVar14 + 0x10 + lVar23 * 0x14)) {
                local_668 = (undefined2 *)CONCAT44(local_668._4_4_,0xc);
                iStack_660 = 0;
                uStack_65c = 0;
                local_658 = 0;
                uStack_654 = 0;
                FUN_1400020e8(&iStack_660,L"Signature error detected when reading container header",
                              0x36);
                pvVar13 = (void *)CONCAT44(uStack_65c,iStack_660);
                iVar10 = local_658 + -1;
                if (local_658 == 0) {
                  iVar10 = 0;
                }
                local_178 = (undefined **)CONCAT44(local_178._4_4_,(int)local_668);
                iVar22 = 0x7f;
                if (iVar10 < 0x7f) {
                  iVar22 = iVar10;
                }
                memcpy((void *)((longlong)&local_178 + 4),pvVar13,(longlong)iVar22 * 2);
                *(undefined2 *)((longlong)&local_178 + (longlong)iVar22 * 2 + 4) = 0;
                local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,(int)local_178);
                memcpy((void *)((longlong)&local_3b8 + 4),(void *)((longlong)&local_178 + 4),0x100);
                plVar12 = local_698;
                lVar20 = local_6b0;
                if (pvVar13 != (void *)0x0) {
                  FUN_1400020a8(pvVar13);
                  plVar12 = local_698;
                  lVar20 = local_6b0;
                }
                goto LAB_142b07641;
              }
            }
            if (bVar32) {
              (*(code *)PTR_FUN_14c759068)(local_6a8,lVar20,uVar21);
            }
            lVar20 = lVar20 + uVar21;
            bVar5 = lVar23 < (longlong)pwVar30;
            lVar23 = lVar23 + 1;
          } while (bVar5);
        }
LAB_142b073a3:
        lVar23 = local_5c8[1];
        lVar20 = *local_5c8;
        memset(&local_178,0,0x90);
        FUN_144869430(&local_178);
        local_e8 = 0;
        local_178 = &PTR_FUN_149e1ddc0;
        local_d0 = 0x7fffffffffffffff;
        local_150 = local_150 & 0xfffffffffffffeff | 1;
        local_668 = (undefined2 *)0xffffffffffffffff;
        local_e0 = lVar20;
        local_d8 = (longlong)(int)lVar23;
        memset(&iStack_660,0,0x91);
        FUN_1403999e9(&local_178);
        if ((local_150 & 0x200) != 0) {
          local_320 = 0;
          local_3b8 = (wchar_t *)0xffffffffffffffff;
          memset(local_3b0,0,0x91);
          FUN_142b06066(&local_668,&local_3b8);
          FUN_141119470(&local_3b8);
        }
        local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,DAT_14c845dc8);
        memcpy((void *)((longlong)&local_3b8 + 4),&DAT_14c845dcc,0x100);
        local_298 = local_650;
        local_2b0 = local_668;
        local_2a8 = CONCAT44(uStack_65c,iStack_660);
        uStack_2a0 = CONCAT44(uStack_654,local_658);
        iStack_660 = 0;
        uStack_65c = 0;
        local_658 = 0;
        uStack_654 = 0;
        local_650 = 0;
        uStack_290 = auStack_648._0_8_;
        local_288 = auStack_648._8_8_;
        auStack_648 = (undefined1  [16])0x0;
        uStack_280 = auStack_638._0_8_;
        local_278 = auStack_638._8_8_;
        auStack_638 = (undefined1  [16])0x0;
        local_270 = local_628;
        local_26c = local_624;
        local_628 = 0;
        local_624 = 0;
        local_268 = local_620;
        local_620 = 0;
        local_260 = local_618;
        local_25c = local_614;
        local_618 = 0;
        local_614 = 0;
        local_258 = local_610;
        local_610 = 0;
        local_250 = local_608;
        local_24c = local_604;
        local_608 = 0;
        local_604 = 0;
        local_248 = local_600;
        local_600 = 0;
        local_240 = local_5f8;
        local_23c = local_5f4;
        local_5f8 = 0;
        local_5f4 = 0;
        local_238 = local_5f0;
        local_5f0 = 0;
        local_230 = local_5e8;
        local_22c = local_5e4;
        local_5e8 = 0;
        local_5e4 = 0;
        local_228 = local_5e0;
        local_5e0 = 0;
        local_220 = local_5d8;
        local_21c = local_5d4;
        local_5d8 = 0;
        local_5d4 = 0;
        local_218 = local_5d0;
        FUN_141119470();
        plVar19 = local_120;
        plVar12 = local_698;
        lVar20 = local_6b0;
        local_178 = &PTR__purecall_149e35f70;
        if (local_120 != (longlong *)0x0) {
          if (*local_120 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar19);
        }
        lVar23 = local_100;
        if (local_100 != 0) {
          if (*(longlong *)(local_100 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar23);
          lVar20 = local_6b0;
        }
      }
LAB_142b07641:
      (**(code **)*plVar12)(plVar12);
    }
    if (local_5c8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_5c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_144716208(local_5c8);
        FUN_1400020a8(local_5c8);
      }
    }
    iVar10 = (int)local_3b8;
  }
  local_178 = (undefined **)0xffffffffffffffff;
  uVar26 = 0;
  memset(&uStack_170,0,0x91);
  param_2 = local_6a0;
  if (iVar10 == 8) {
LAB_142b076d2:
    AcquireSRWLockExclusive((PSRWLOCK)(lVar20 + 0x278));
    uVar4 = *(uint *)(lVar20 + 0x288);
    lVar23 = *(longlong *)(lVar20 + 0x280);
    if (0 < (int)uVar4) {
      uVar26 = 0;
      uVar27 = uVar4;
      do {
        uVar2 = (uVar27 >> 1) + uVar26;
        lVar14 = *(longlong *)(lVar23 + (ulonglong)uVar2 * 8);
        iVar10 = *(int *)(lVar14 + 0x130);
        if (*(int *)(puVar11 + 0x26) == iVar10) {
          bVar32 = *(uint *)(lVar14 + 0x120) < *(uint *)(puVar11 + 0x24);
        }
        else {
          bVar32 = iVar10 < *(int *)(puVar11 + 0x26);
        }
        if (!bVar32) {
          uVar26 = uVar2 + (uVar27 & 1);
        }
        bVar32 = 1 < uVar27;
        uVar27 = uVar27 >> 1;
      } while (bVar32);
    }
    plVar12 = (longlong *)(lVar20 + 0x280);
    *(uint *)(lVar20 + 0x288) = uVar4 + 1;
    if (*(uint *)(lVar20 + 0x28c) < uVar4 + 1) {
      FUN_14629f90e(plVar12,uVar4);
      lVar23 = *plVar12;
    }
    uVar21 = (ulonglong)uVar26;
    memmove((void *)(lVar23 + uVar21 * 8 + 8),(void *)(lVar23 + uVar21 * 8),
            (ulonglong)(uVar4 - uVar26) << 3);
    *(undefined8 **)(*plVar12 + uVar21 * 8) = puVar11;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar20 + 0x278));
    param_2 = local_6a0;
    *local_6a0 = DAT_14c845dc8;
    memcpy(local_6a0 + 1,&DAT_14c845dcc,0x100);
    *(undefined ***)(param_2 + 0x42) = local_178;
    *(undefined8 *)(param_2 + 0x44) = uStack_170;
    puVar11 = (undefined8 *)0x0;
    uStack_170 = 0;
    param_2[0x46] = (int)local_168;
    param_2[0x47] = local_168._4_4_;
    local_168 = 0;
    *(undefined8 *)(param_2 + 0x48) = local_160;
    local_160 = 0;
    param_2[0x4a] = (int)local_158;
    param_2[0x4b] = local_158._4_4_;
    local_158 = 0;
    *(ulonglong *)(param_2 + 0x4c) = local_150;
    local_150 = 0;
    param_2[0x4e] = (int)local_148;
    param_2[0x4f] = local_148._4_4_;
    local_148 = 0;
    *(undefined8 *)(param_2 + 0x50) = local_140;
    local_140 = 0;
    param_2[0x52] = (int)local_138;
    param_2[0x53] = local_138._4_4_;
    local_138 = 0;
    *(undefined8 *)(param_2 + 0x54) = local_130;
    local_130 = 0;
    param_2[0x56] = (int)local_128;
    param_2[0x57] = local_128._4_4_;
    local_128 = 0;
    *(longlong **)(param_2 + 0x58) = local_120;
    local_120 = (longlong *)0x0;
    param_2[0x5a] = (int)local_118;
    param_2[0x5b] = local_118._4_4_;
    local_118 = 0;
    *(undefined8 *)(param_2 + 0x5c) = local_110;
    local_110 = 0;
    param_2[0x5e] = (int)local_108;
    param_2[0x5f] = local_108._4_4_;
    local_108 = 0;
    *(longlong *)(param_2 + 0x60) = local_100;
    local_100 = 0;
    param_2[0x62] = (int)local_f8;
    param_2[99] = local_f8._4_4_;
    local_f8 = 0;
    *(undefined8 *)(param_2 + 100) = local_f0;
    local_f0 = 0;
    param_2[0x66] = (int)local_e8;
    param_2[0x67] = local_e8._4_4_;
    local_e8 = 0;
    *(undefined1 *)(param_2 + 0x68) = (undefined1)local_e0;
  }
  else {
    if (iVar10 == 0) {
      FUN_142b07bdc(&local_3b8,&local_668);
      FUN_142b06066(&local_178,&local_668);
      FUN_141119470(&local_668);
      goto LAB_142b076d2;
    }
    *local_6a0 = iVar10;
    memcpy(local_6a0 + 1,(void *)((longlong)&local_3b8 + 4),0x100);
  }
  FUN_141119470(&local_178);
  bVar32 = (int)local_3b8 == 0;
  local_3b8 = (wchar_t *)CONCAT26(local_3b8._6_2_,1);
  if (bVar32) {
    FUN_141119470(&local_2b0);
  }
LAB_142b07a38:
  if (puVar11 != (undefined8 *)0x0) {
    FUN_141249530(puVar11);
    FUN_1400020a8(puVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142b07bdc FUN_142b07bdc body=500 status=ok
// SIG undefined FUN_142b07bdc(void)

undefined8 * FUN_142b07bdc(int *param_1,undefined8 *param_2)

{
  if (*param_1 != 0) {
    FUN_1467e8feb(param_1);
  }
  *param_1 = DAT_14c845ecc;
  memcpy(param_1 + 1,&DAT_14c845ed0,0x100);
  *param_2 = *(undefined8 *)(param_1 + 0x42);
  param_2[1] = *(undefined8 *)(param_1 + 0x44);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(int *)(param_2 + 2) = param_1[0x46];
  *(int *)((longlong)param_2 + 0x14) = param_1[0x47];
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_2[3] = *(undefined8 *)(param_1 + 0x48);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(int *)(param_2 + 4) = param_1[0x4a];
  *(int *)((longlong)param_2 + 0x24) = param_1[0x4b];
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_2[5] = *(undefined8 *)(param_1 + 0x4c);
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(int *)(param_2 + 6) = param_1[0x4e];
  *(int *)((longlong)param_2 + 0x34) = param_1[0x4f];
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_2[7] = *(undefined8 *)(param_1 + 0x50);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(int *)(param_2 + 8) = param_1[0x52];
  *(int *)((longlong)param_2 + 0x44) = param_1[0x53];
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_2[9] = *(undefined8 *)(param_1 + 0x54);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(int *)(param_2 + 10) = param_1[0x56];
  *(int *)((longlong)param_2 + 0x54) = param_1[0x57];
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(int *)(param_2 + 0xc) = param_1[0x5a];
  *(int *)((longlong)param_2 + 100) = param_1[0x5b];
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_2[0xd] = *(undefined8 *)(param_1 + 0x5c);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(int *)(param_2 + 0xe) = param_1[0x5e];
  *(int *)((longlong)param_2 + 0x74) = param_1[0x5f];
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_2[0xf] = *(undefined8 *)(param_1 + 0x60);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(int *)(param_2 + 0x10) = param_1[0x62];
  *(int *)((longlong)param_2 + 0x84) = param_1[99];
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_2[0x11] = *(undefined8 *)(param_1 + 100);
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(int *)(param_2 + 0x12) = param_1[0x66];
  *(int *)((longlong)param_2 + 0x94) = param_1[0x67];
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(char *)(param_2 + 0x13) = (char)param_1[0x68];
  return param_2;
}



// FUNCTION 142b07dd0 FUN_142b07dd0 body=368 status=ok
// SIG undefined FUN_142b07dd0(void)

void FUN_142b07dd0(longlong param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x278);
  AcquireSRWLockExclusive(SRWLock);
  if ((longlong)*(int *)(param_1 + 0x288) < 1) {
LAB_142b07e80:
                    /* WARNING: Could not recover jumptable at 0x000142b07e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x280);
  lVar4 = 0;
LAB_142b07e1c:
  lVar2 = *(longlong *)(*plVar1 + lVar4 * 8);
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(lVar2 + 200) != 0) {
    puVar5 = *(undefined2 **)(lVar2 + 0xc0);
  }
  lVar8 = 0;
  do {
    uVar6 = *(ushort *)((longlong)puVar5 + lVar8);
    uVar7 = (ulonglong)uVar6;
    uVar3 = *(ushort *)(param_2 + lVar8);
    if (uVar6 == uVar3) {
      if (uVar6 == 0) goto LAB_142b07e9a;
    }
    else {
      if (0x7f < (uVar3 | uVar6)) break;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar9 = (ulonglong)uVar3;
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar9]) break;
    }
    lVar8 = lVar8 + 2;
  } while( true );
  if (uVar6 == uVar3) {
LAB_142b07e9a:
    *(undefined8 *)(*plVar1 + lVar4 * 8) = 0;
    FUN_147081774(plVar1);
    FUN_1470817d4(plVar1);
    ReleaseSRWLockExclusive(SRWLock);
    if (lVar2 != 0) {
      FUN_14707a428(param_1 + 0x148,lVar2 + 0x90);
      if ((longlong)*(int *)(lVar2 + 0x118) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x110);
        lVar8 = (longlong)*(int *)(lVar2 + 0x118) * 0x38 + lVar4;
        do {
          if (*(int *)(lVar4 + 0x30) != 0) {
            while (*(int *)(lVar4 + 0x30) != 0) {
              FUN_14000f986(0);
            }
          }
          lVar4 = lVar4 + 0x38;
        } while (lVar4 != lVar8);
      }
      FUN_141249530(lVar2);
      FUN_1400020a8(lVar2);
      return;
    }
    return;
  }
  lVar4 = lVar4 + 1;
  if (lVar4 == *(int *)(param_1 + 0x288)) goto LAB_142b07e80;
  goto LAB_142b07e1c;
}



// FUNCTION 142b07f9a FUN_142b07f9a body=106 status=ok
// SIG undefined FUN_142b07f9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b07f9a(void)

{
  _DAT_14c99ff18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99ff20,1);
  if (DAT_14c99ff08 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99fef8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b08004 FUN_142b08004 body=926 status=ok
// SIG undefined FUN_142b08004(void)

void FUN_142b08004(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  size_t _Size;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  char local_e1;
  longlong local_e0;
  PSRWLOCK local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  int iStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 10) < 2) {
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[9] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[9];
    }
    lVar10 = (param_2[3] - *(longlong *)(*plVar5 + 0x18)) +
             *(longlong *)(*(longlong *)(*plVar5 + 0x30) + 8);
  }
  else {
    lVar10 = param_2[0x16];
  }
  if (*(char *)(param_2 + 0x1d) == '\0') {
    lVar11 = param_2[0x15];
    if (param_2[0x1c] != 0) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_140f0be04(lVar10,*(undefined4 *)(param_2 + 5));
      auVar2._8_8_ = uStack_70;
      auVar2._0_8_ = local_78;
      if (*(undefined1 (*) [16])param_2[0x1c] != auVar2 ||
          local_68 != *(int *)((undefined1 (*) [16])param_2[0x1c])[1]) {
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0xffffffff;
        local_d8 = (PSRWLOCK)(param_1 + 0x278);
        local_a4 = 0;
        uStack_9c = 0;
        local_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_84 = 0;
        iStack_80 = 0;
        local_e1 = param_3;
        local_e0 = lVar11;
        AcquireSRWLockShared(local_d8);
        iVar1 = *(int *)(param_1 + 0x288);
        local_d0 = param_1;
        if ((longlong)iVar1 == 0) {
          lVar6 = 0;
        }
        else {
          lVar11 = *(longlong *)(param_1 + 0x280);
          lVar7 = 0;
          lVar6 = 0;
          do {
            lVar9 = *(longlong *)(lVar11 + lVar7);
            if (*(int *)(param_2 + 1) == *(int *)(lVar9 + 0x120)) {
              FUN_140c50e9c(&local_c8,lVar9 + 0xc0);
              if (lVar6 != 0) {
                FUN_1400020a8(lVar6);
              }
              local_b8 = local_c8;
              uStack_b0 = local_c0;
              lVar6 = local_c8;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar1 * 8 != lVar7);
        }
        local_a8 = *(undefined4 *)((longlong)param_2 + 0xc);
        puVar8 = (undefined8 *)param_2[0x1c];
        local_94 = *(undefined4 *)(puVar8 + 2);
        local_a4 = *puVar8;
        uStack_9c = puVar8[1];
        iStack_80 = local_68;
        uStack_90 = (undefined4)local_78;
        uStack_8c = (undefined4)((ulonglong)local_78 >> 0x20);
        uStack_88 = (undefined4)uStack_70;
        local_84 = (undefined4)((ulonglong)uStack_70 >> 0x20);
        ReleaseSRWLockShared(local_d8);
        param_1 = local_d0;
        lVar11 = local_e0;
        param_3 = local_e1;
        lVar7 = *(longlong *)(local_d0 + 0x18);
        if ((longlong)*(int *)(lVar7 + 0x18) != 0) {
          lVar9 = 0;
          do {
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar9) != 0) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar9) != 0)) {
              FUN_147081870(lVar7 + 0x10,&local_b8);
              lVar6 = local_b8;
              break;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)*(int *)(lVar7 + 0x18) * 0x10 != lVar9);
        }
        if (lVar6 != 0) {
          FUN_1400020a8(lVar6);
        }
      }
    }
    lVar6 = 0;
    do {
      if (*(int *)((longlong)(param_2 + 0x17) + lVar6 * 4) != 0) {
        (*(code *)PTR_FUN_14c759068)(param_2 + 0x17,lVar10,*(undefined4 *)(param_2 + 5));
        break;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
    lVar6 = param_2[2];
    if (lVar6 != 0) {
      uVar4 = *(uint *)(param_2 + 4);
      lVar7 = *(longlong *)(lVar11 + 0x10);
      if (*(ulonglong *)(lVar11 + 8) < (ulonglong)uVar4) {
        FUN_1400020a8(lVar7);
        lVar7 = FUN_14001cc68(*(undefined4 *)(param_2 + 4),0);
        *(longlong *)(lVar11 + 0x10) = lVar7;
        *(ulonglong *)(lVar11 + 8) = (ulonglong)*(uint *)(param_2 + 4);
        uVar4 = *(uint *)(param_2 + 4);
        lVar6 = param_2[2];
      }
      local_108 = (longlong)*(int *)((longlong)param_2 + 0x24);
      local_f8 = 0;
      local_100 = 0;
      cVar3 = FUN_140aa9920(lVar6,lVar7,(longlong)(int)uVar4,lVar10);
      lVar10 = lVar7;
      if (cVar3 == '\0') {
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
    }
    puVar8 = param_2 + 0xb;
    if ((undefined8 *)param_2[0x13] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_2[0x13];
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if ((longlong)iVar1 != 0) {
      lVar11 = 0;
      do {
        _Size = *(size_t *)((longlong)puVar8 + lVar11 + 0x18);
        if (_Size != 0) {
          memcpy((void *)(**(longlong **)(**(longlong **)((longlong)puVar8 + lVar11) + 0x60) +
                         *(longlong *)((longlong)puVar8 + lVar11 + 8)),
                 (void *)(*(longlong *)((longlong)puVar8 + lVar11 + 0x10) + lVar10),_Size);
        }
        lVar11 = lVar11 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar11);
    }
  }
  if (param_3 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d8));
    *param_2 = *(undefined8 *)(param_1 + 0x300);
    *(undefined8 **)(param_1 + 0x300) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d8));
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b083a4 FUN_142b083a4 body=357 status=ok
// SIG undefined FUN_142b083a4(void)

void FUN_142b083a4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (*(int *)(param_2 + 0x50) < 2) {
    plVar5 = (longlong *)(param_2 + 0x38);
    if (*(longlong **)(param_2 + 0x48) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_2 + 0x48);
    }
    lVar8 = *plVar5;
    piVar2 = (int *)(lVar8 + 0x3c);
    *piVar2 = *piVar2 + -1;
    if ((*piVar2 == 0) && (puVar7 = *(undefined8 **)(lVar8 + 0x30), puVar7 != (undefined8 *)0x0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
      *puVar7 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 **)(param_1 + 0x118) = puVar7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
      (**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))();
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
  }
  else if (*(longlong *)(param_2 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  puVar7 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = *(undefined8 *)(param_1 + 0x2c0);
    *(undefined8 **)(param_1 + 0x2c0) = puVar7;
  }
  iVar3 = *(int *)(param_2 + 0xa0);
  if (0 < (longlong)iVar3) {
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(param_2 + 0x98);
      if (*(longlong *)(param_2 + 0x98) == 0) {
        lVar6 = param_2 + 0x58;
      }
      pbVar1 = (byte *)(*(longlong *)(lVar6 + lVar8) + 0x38);
      *pbVar1 = *pbVar1 | *(byte *)(param_2 + 0xe8);
      piVar2 = (int *)(*(longlong *)(lVar6 + lVar8) + 0x34);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        puVar7 = *(undefined8 **)(lVar6 + lVar8);
        if (*(char *)((longlong)puVar7 + 0x39) == '\0') {
          puVar4 = (undefined8 *)*puVar7;
          *puVar7 = 0;
          if (*(char *)(puVar7 + 7) == '\x01') {
            *(undefined1 *)((longlong)puVar4 + 0xb9) = 1;
          }
          puVar4[1] = 0;
          if (*(undefined8 **)(param_1 + 0x310) == (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 0x308) = puVar4;
          }
          else {
            **(undefined8 **)(param_1 + 0x310) = puVar4;
          }
          *(undefined8 **)(param_1 + 0x310) = puVar4;
          *puVar4 = 0;
          puVar7 = *(undefined8 **)(lVar6 + lVar8);
        }
        FUN_144aa7232(param_1 + 0x1b0,puVar7);
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar8);
  }
  return;
}



// FUNCTION 142b0851f FUN_142b0851f body=41 status=ok
// SIG undefined FUN_142b0851f(void)

void FUN_142b0851f(void)

{
  DAT_14c99ffc0 = 0;
  if (DAT_14c99ffb8 != 0) {
    FUN_1400020a8();
  }
  FUN_146199f84();
  return;
}



// FUNCTION 142b08556 FUN_142b08556 body=202 status=ok
// SIG undefined FUN_142b08556(void)

void FUN_142b08556(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14707a802();
  if ((DAT_14c9a0160 == (longlong *)0x0 || DAT_14c9a0168 == 0) ||
     (cVar1 = (**(code **)(*DAT_14c9a0160 + 0x30))(), cVar1 == '\0')) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_14707a872(&local_48,param_3);
    (*(code *)PTR_FUN_14c759068)(&local_48,param_1,param_2);
  }
  else {
    FUN_14707a802();
    local_48 = *param_3;
    uStack_40 = param_3[1];
    plVar2 = DAT_14c9a0160;
    if (DAT_14c9a0168 == 0) {
      plVar2 = (longlong *)0x0;
    }
    (**(code **)(*plVar2 + 0x58))(*(undefined4 *)param_3,param_1,param_2,&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b08621 FUN_142b08621 body=69 status=ok
// SIG undefined FUN_142b08621(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b08621(void)

{
  _DAT_14c99fff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b08663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99fff8,1);
  return;
}



// FUNCTION 142b08666 FUN_142b08666 body=69 status=ok
// SIG undefined FUN_142b08666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b08666(void)

{
  _DAT_14c9a0008 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b086a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0010,1);
  return;
}



// FUNCTION 142b086ab FUN_142b086ab body=69 status=ok
// SIG undefined FUN_142b086ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b086ab(void)

{
  _DAT_14c9a0020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b086ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0028,1);
  return;
}



// FUNCTION 142b086f0 FUN_142b086f0 body=69 status=ok
// SIG undefined FUN_142b086f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b086f0(void)

{
  _DAT_14c9a0030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b08732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0038,1);
  return;
}



// FUNCTION 142b08735 FUN_142b08735 body=69 status=ok
// SIG undefined FUN_142b08735(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b08735(void)

{
  _DAT_14c9a0040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b08777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0048,1);
  return;
}



// FUNCTION 142b0877a FUN_142b0877a body=69 status=ok
// SIG undefined FUN_142b0877a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b0877a(void)

{
  _DAT_14c9a0050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b087bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0058,1);
  return;
}



// FUNCTION 142b087bf FUN_142b087bf body=69 status=ok
// SIG undefined FUN_142b087bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b087bf(void)

{
  _DAT_14c9a0060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b08801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0068,1);
  return;
}



// FUNCTION 142b08804 FUN_142b08804 body=69 status=ok
// SIG undefined FUN_142b08804(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b08804(void)

{
  _DAT_14c9a0078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b08846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0080,1);
  return;
}



// FUNCTION 142b08849 FUN_142b08849 body=69 status=ok
// SIG undefined FUN_142b08849(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b08849(void)

{
  _DAT_14c9a0090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b0888b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0098,1);
  return;
}



// FUNCTION 142b0888e FUN_142b0888e body=116 status=ok
// SIG undefined FUN_142b0888e(void)

void FUN_142b0888e(void)

{
  char cVar1;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_18);
  cVar1 = FUN_142b0f0fc(DAT_14c9a0260);
  while (cVar1 == '\0') {
    Sleep(1);
    cVar1 = FUN_142b0f0fc(DAT_14c9a0260);
  }
  QueryPerformanceCounter(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b08903 FUN_142b08903 body=69 status=ok
// SIG undefined FUN_142b08903(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b08903(void)

{
  _DAT_14c9a00a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b08945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a00a8,1);
  return;
}



// FUNCTION 142b08948 FUN_142b08948 body=84 status=ok
// SIG undefined FUN_142b08948(void)

void FUN_142b08948(void)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_14c9a0260;
  cVar2 = FUN_142b0f0fc(DAT_14c9a0260);
  while (cVar2 == '\0') {
    Sleep(1);
    cVar2 = FUN_142b0f0fc(DAT_14c9a0260);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000142b08995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
  return;
}



// FUNCTION 142b0899c FUN_142b0899c body=69 status=ok
// SIG undefined FUN_142b0899c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b0899c(void)

{
  _DAT_14c9a00b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b089de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a00b8,1);
  return;
}



// FUNCTION 142b089ef FUN_142b089ef body=106 status=ok
// SIG undefined FUN_142b089ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b089ef(void)

{
  _DAT_14c9a0108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0110,1);
  if (DAT_14c9a00f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a00e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b08a5a FUN_142b08a5a body=842 status=ok
// SIG undefined FUN_142b08a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b08a5a(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar7 = (uint *)*puVar2;
  if (puVar7 != (uint *)0x0) goto LAB_142b08b1b;
  do {
    uVar5 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar5 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar5 | 1;
      __tlregdtor(&LAB_142b0ff23);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = *(undefined4 **)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x310) = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar6 = 0xffffffff;
    *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
    puVar6[0x12] = 0;
    *puVar2 = puVar6;
    FUN_140217a48(puVar2);
    puVar7 = (uint *)*puVar2;
LAB_142b08b1b:
    uVar10 = *(longlong *)(puVar7 + 0x10) + 7;
    while( true ) {
      puVar11 = (undefined8 *)(uVar10 & 0xfffffffffffffff8);
      if (puVar11 + 0x18 <= puVar7 + 0x4000) {
        *(undefined8 **)(puVar7 + 0x10) = puVar11 + 0x18;
        puVar7[0x12] = puVar7[0x12] + 1;
        FUN_1447247dc(puVar11,0);
        *puVar11 = &PTR_FUN_14a161b78;
        *(undefined1 *)(puVar11 + 0x15) = param_2;
        puVar11[0x16] = param_3;
        *(undefined4 *)(puVar11 + 0x17) = param_4;
        uVar5 = DAT_14c9a0120;
        if (((DAT_14c9a0118 != 0x400) || (DAT_14c7585d8 != 0)) &&
           ((DAT_14c9a0118 != 0x800 || (DAT_14c7585dc != 0)))) {
          uVar5 = DAT_14c9a0118 | _DAT_14c9a011c;
        }
        uVar9 = uVar5 >> 10 & 3;
        if ((uVar5 >> 9 & 1) == 0 || uVar9 < 2) {
          uVar10 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
        }
        else {
          uVar10 = 2;
        }
        if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
        }
        puVar11[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar11[9] = puVar11;
        puVar11[10] = puVar11;
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar3 == 0) {
          uVar4 = 1;
          if ((char)uVar10 != '\x06') {
            uVar4 = uVar10;
          }
          uVar10 = uVar4;
          uVar8 = 0;
        }
        else {
          if ((char)uVar10 == '\x06') {
            uVar10 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar3 + 0x30);
        }
        puVar11[0xf] = uVar8;
        puVar11[0x10] = uVar10 << 0x3b | 0xc00000527800b400;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
        if (puVar11 == (undefined8 *)0x0) {
          local_31 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
          UNLOCK();
          local_31 = 1;
          FUN_1447439e4(puVar11);
          LOCK();
          piVar1 = (int *)(puVar11 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
        if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar5 = *puVar7;
      *puVar7 = *puVar7 + puVar7[0x12] + 1;
      UNLOCK();
      if ((uVar5 ^ puVar7[0x12]) != 0xffffffff) break;
      puVar7 = (uint *)*puVar2;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar2 = puVar7;
      uVar10 = (longlong)puVar7 + 0x5f;
    }
  } while( true );
}



// FUNCTION 142b08da6 FUN_142b08da6 body=928 status=ok
// SIG undefined FUN_142b08da6(void)

void FUN_142b08da6(longlong param_1,undefined1 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_128 [47];
  undefined1 local_f9;
  LPCRITICAL_SECTION local_f8;
  longlong local_f0;
  int local_e4;
  longlong local_e0;
  void *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong local_c0;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_f8 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_f8);
  lVar6 = param_1 + (longlong)param_4 * 0x20;
  *(longlong **)(lVar6 + 0x168) = param_3;
  lVar7 = param_3[1];
  local_f9 = param_2;
  local_f0 = param_1;
  local_e4 = param_4;
  local_c8 = param_3;
  if ((*(byte *)((longlong)param_3 + 0x53) & lVar7 != 0) == 0) {
    if ((lVar7 != 0) && (*(char *)((longlong)param_3 + 0x55) == '\0')) {
      (**(code **)(*param_3 + 0x20))(param_3);
    }
    param_3[1] = 0;
  }
  else {
    lVar7 = 0;
  }
  *(longlong *)(lVar6 + 0x180) = lVar7;
  uVar8 = *(ulonglong *)(lVar6 + 0x178);
  uVar9 = (longlong)(uVar8 + 0xffff) >> 0x10;
  if ((longlong)uVar9 < 1) {
    LeaveCriticalSection(local_f8);
  }
  else {
    uVar10 = *(ulonglong *)
              (*(longlong *)(local_f0 + 0xe0) +
              (longlong)(int)(~*(uint *)(local_f0 + 0x104) & *(uint *)(lVar6 + 0x170)) * 0x30);
    local_d0 = uVar10 >> 0x10;
    uVar5 = 0x10;
    if (uVar9 < 0x10) {
      uVar5 = uVar9;
    }
    local_e0 = (uVar10 >> 0x30) * 0x98;
    local_c0 = (longlong)(int)(uVar10 >> 0x10) * 4;
    memcpy(local_88,(void *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(local_f0 + 0xa8) + 0x88 + local_e0) +
                              0x40) + local_c0),(ulonglong)(uint)((int)uVar5 << 2));
    LeaveCriticalSection(local_f8);
    uVar10 = 0;
    do {
      lpCriticalSection = local_f8;
      uVar9 = uVar9 - 1;
      uVar5 = 0x10000;
      if ((longlong)uVar8 < 0x10000) {
        uVar5 = uVar8;
      }
      if ((uVar10 & 0xf) == 0 && uVar10 != 0) {
        uVar3 = 0xf;
        if (uVar9 < 0xf) {
          uVar3 = (uint)uVar9;
        }
        EnterCriticalSection(local_f8);
        memcpy(local_88,(void *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(local_f0 + 0xa8) + 0x88 + local_e0) +
                                  0x40) + local_c0 + uVar10 * 4),(ulonglong)uVar3 * 4 + 4);
        LeaveCriticalSection(lpCriticalSection);
      }
      iVar4 = (*(code *)PTR_FUN_14c75b148)(lVar7,uVar5 & 0xffffffff,0);
      iVar1 = local_88[uVar10 & 0xf];
      if (iVar4 != iVar1) {
        EnterCriticalSection(local_f8);
        lVar6 = *(longlong *)(local_f0 + 0xa8) + local_e0;
        lVar2 = *(longlong *)(lVar6 + 0x88);
        FUN_140f0be04(*(undefined8 *)(lVar2 + 0x40),(longlong)*(int *)(lVar2 + 0x48) << 2);
        FUN_1400021e4(lVar6 + 0x2c,&local_b8);
        local_a8 = (void *)0x0;
        lVar6 = (longlong)local_b0;
        local_a0 = local_b0;
        if (lVar6 == 0) {
          local_9c = 0;
        }
        else {
          local_d8 = local_b8;
          FUN_1446dd670(&local_a8,local_b0,0);
          memcpy(local_a8,local_d8,lVar6 * 2);
        }
        local_98 = (int)local_d0 + (int)uVar10;
        local_94 = iVar1;
        local_90 = iVar4;
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_14707af8e();
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
        FUN_1470823d0(&DAT_14c9a01a0,&local_a8);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        LeaveCriticalSection(local_f8);
      }
      lVar7 = lVar7 + uVar5;
      uVar8 = uVar8 - uVar5;
      uVar10 = uVar10 + 1;
    } while (uVar9 != 0);
  }
  FUN_14021f8e8(local_f0,local_f9,local_c8,local_e4);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b09147 FUN_142b09147 body=69 status=ok
// SIG undefined FUN_142b09147(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b09147(void)

{
  _DAT_14c9a0128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b09189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0130,1);
  return;
}



// FUNCTION 142b0918c FUN_142b0918c body=1308 status=ok
// SIG undefined FUN_142b0918c(void)

void FUN_142b0918c(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  uint uVar23;
  undefined8 uVar24;
  int *piVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_e0;
  byte local_cd;
  int local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar5 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar5 != 0) {
    lVar17 = *(longlong *)(param_1 + 0x20);
    lVar29 = 0;
    iVar28 = 0;
    local_c8 = param_1;
    do {
      if ((((*(int *)(lVar17 + 0x24 + lVar29) == *param_2) &&
           (*(int *)(lVar17 + 0x28 + lVar29) == param_2[1])) &&
          (*(int *)(lVar17 + 0x2c + lVar29) == param_2[2])) &&
         (*(int *)(lVar17 + 0x30 + lVar29) == param_2[3])) {
        if (*(uint *)(lVar17 + 0x18 + lVar29) < 2) {
          uVar24 = 0;
        }
        else {
          uVar24 = *(undefined8 *)(lVar17 + 0x10 + lVar29);
        }
        puVar15 = &DAT_149dfb77a;
        if (*(int *)(lVar17 + 8 + lVar29) != 0) {
          puVar15 = *(undefined2 **)(lVar17 + lVar29);
        }
        local_e0 = 0;
        local_e8 = 1;
        cVar7 = FUN_1416bd1f2(param_1,puVar15,*(undefined4 *)(lVar17 + 0x20 + lVar29),uVar24);
        param_1 = local_c8;
        if (cVar7 != '\0') {
          local_a8 = *(undefined8 *)(lVar17 + lVar29);
          iVar8 = *(int *)(lVar17 + 8 + lVar29);
          local_a0 = iVar8 + -1;
          if (iVar8 == 0) {
            local_a0 = 0;
          }
          iVar8 = FUN_140fedc14(&local_a8);
          local_a8 = CONCAT44(local_a8._4_4_,iVar8);
          if (iVar8 != -1) {
            FUN_1447cbafe(&local_98,local_ac,&local_a8);
          }
          iVar28 = iVar28 + 1;
          param_1 = local_c8;
        }
      }
      lVar29 = lVar29 + 0x38;
    } while ((longlong)iVar5 * 0x38 - lVar29 != 0);
    if (0 < iVar28) {
      plVar10 = (longlong *)FUN_140d57cf8();
      iVar5 = local_70;
      if (plVar10 != (longlong *)0x0) {
        if (local_70 == 0) {
          uVar27 = 1;
          uVar26 = 0;
          iVar8 = 0;
          iVar28 = 0;
        }
        else {
          puVar11 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar11 = local_88;
          }
          uVar12 = *puVar11;
          if (uVar12 == 0) {
            iVar28 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar28 = local_70 + -1;
            }
            uVar26 = 0;
            uVar27 = (ulonglong)(uint)(iVar28 >> 5);
            if (iVar28 >> 5 < 1) {
              uVar27 = uVar26;
            }
            iVar8 = 0;
            do {
              if (uVar27 == uVar26) goto LAB_142b093a0;
              iVar8 = iVar8 + 0x20;
              uVar12 = puVar11[uVar26 + 1];
              uVar26 = uVar26 + 1;
            } while (uVar12 == 0);
          }
          else {
            uVar26 = 0;
            iVar8 = 0;
          }
          uVar27 = (ulonglong)(-uVar12 & uVar12);
          uVar4 = uVar27 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar28 = (iVar8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar28) {
            iVar28 = local_70;
          }
        }
        if (iVar28 != local_70) {
          uVar12 = 0xffffffff;
          do {
            (**(code **)(*plVar10 + 0x48))
                      (plVar10,*(undefined4 *)(local_98 + (longlong)iVar28 * 0xc));
            uVar12 = ~(uint)uVar27 & uVar12;
            puVar11 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar11 = local_88;
            }
            iVar28 = (int)uVar26;
            lVar17 = (longlong)iVar28;
            uVar23 = puVar11[lVar17] & uVar12;
            if (uVar23 == 0) {
              iVar13 = local_70 + 0x1e;
              if (-1 < local_70 + -1) {
                iVar13 = local_70 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar28) {
                iVar14 = iVar28;
              }
              if (iVar28 < iVar13) {
                lVar29 = 0;
                do {
                  uVar23 = puVar11[lVar17 + lVar29 + 1];
                  if (uVar23 != 0) {
                    uVar26 = (ulonglong)(iVar28 + (int)lVar29 + 1);
                    uVar12 = 0xffffffff;
                    goto LAB_142b09627;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar29 = lVar29 + 1;
                } while (iVar14 - lVar17 != lVar29);
                uVar12 = 0xffffffff;
                lVar17 = (longlong)iVar14;
              }
              uVar26 = lVar17 + 1U & 0xffffffff;
              iVar28 = local_70;
            }
            else {
LAB_142b09627:
              uVar27 = (ulonglong)(-uVar23 & uVar23);
              uVar4 = uVar27 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar28 = (iVar8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (local_70 <= iVar28) {
                iVar28 = local_70;
              }
            }
          } while (iVar28 != iVar5);
        }
      }
LAB_142b093a0:
      iVar5 = *(int *)(local_c8 + 0x28);
      lVar17 = (longlong)iVar5;
      if (lVar17 != 0) {
        iVar28 = *param_2;
        iVar8 = param_2[1];
        iVar13 = param_2[2];
        iVar14 = param_2[3];
        local_c0 = *(longlong *)(local_c8 + 0x20);
        local_cd = *(int *)(local_c0 + 0x30) == iVar14 &&
                   (*(int *)(local_c0 + 0x2c) == iVar13 &&
                   (*(int *)(local_c0 + 0x28) == iVar8 && *(int *)(local_c0 + 0x24) == iVar28));
        local_b8 = local_c0 + 0x68;
        iVar9 = 0;
        iVar19 = 0;
        do {
          bVar22 = local_cd ^ 1;
          lVar29 = (longlong)iVar19;
          iVar18 = iVar19 + 1;
          if (iVar19 + 1 < iVar5) {
            iVar18 = iVar5;
          }
          lVar16 = lVar29 * 0x38;
          piVar25 = (int *)(local_b8 + lVar16);
          iVar20 = iVar19;
          do {
            lVar29 = lVar29 + 1;
            iVar21 = iVar18;
            if (lVar17 <= lVar29) break;
            piVar1 = piVar25 + -3;
            piVar2 = piVar25 + -2;
            piVar3 = piVar25 + -1;
            iVar6 = *piVar25;
            iVar20 = iVar20 + 1;
            piVar25 = piVar25 + 0xe;
            iVar21 = iVar20;
          } while ((bool)(local_cd & 1) ==
                   (iVar6 == iVar14 &&
                   (*piVar3 == iVar13 && (*piVar2 == iVar8 && *piVar1 == iVar28))));
          iVar18 = iVar21 - iVar19;
          local_cc = iVar9;
          if ((local_cd & 1) == 0) {
            local_cd = bVar22;
            if (iVar9 != iVar19) {
              memmove((void *)((longlong)iVar9 * 0x38 + local_c0),(void *)(lVar16 + local_c0),
                      (longlong)iVar18 * 0x38);
            }
            iVar9 = local_cc + iVar18;
          }
          else {
            local_cd = bVar22;
            FUN_147081a92(lVar16 + local_c0,iVar18);
            iVar9 = local_cc;
          }
          iVar19 = iVar21;
        } while (lVar29 < lVar17);
        *(int *)(local_c8 + 0x28) = iVar9;
      }
      FUN_1415ff304();
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar26 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar26 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b096aa FUN_142b096aa body=458 status=ok
// SIG undefined FUN_142b096aa(void)

ulonglong FUN_142b096aa(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a06df0(&local_38,param_2,0);
  puVar8 = local_38;
  if (local_30 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar8,1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    uVar3 = (uint)((ulonglong)local_28 >> 0x10);
    uVar7 = (uint)local_28 & 0xffff;
    lVar5 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa0);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa8) - 1U &
                             (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar4 * 0x10) == local_28) {
          uVar9 = 0;
          if (*(int *)(param_1 + 0xb8) == 0) {
            puVar8 = &DAT_149dfb77a;
            uVar1 = uVar9;
          }
          else {
            puVar8 = *(undefined2 **)(param_1 + 0xb0);
            uVar1 = (ulonglong)(*(int *)(param_1 + 0xb8) - 1);
          }
          FUN_144a38768(param_2,puVar8,uVar1,1);
          FUN_1417365aa();
          goto LAB_142b09854;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x60) + 8);
      } while (iVar4 != -1);
    }
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0xb8) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0xb0);
    iVar4 = *(int *)(param_1 + 0xb8) + -1;
  }
  FUN_144a38768(param_2,puVar8,iVar4,1);
  FUN_1417365aa();
  uVar9 = CONCAT71((int7)((ulonglong)&local_38 >> 8),1);
  if ((DAT_14c9a0148 != (longlong *)0x0 && DAT_14c9a0150 != 0) &&
     (cVar2 = (**(code **)(*DAT_14c9a0148 + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    plVar6 = DAT_14c9a0148;
    if (DAT_14c9a0150 == 0) {
      plVar6 = (longlong *)0x0;
    }
    uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,puVar8);
    uVar9 = (ulonglong)uVar3;
  }
LAB_142b09854:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 142b09876 FUN_142b09876 body=569 status=ok
// SIG undefined FUN_142b09876(void)

undefined8 * FUN_142b09876(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ushort local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c75f608 == 0) {
    puVar7 = (undefined8 *)0x0;
    goto LAB_142b099be;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_78 = -1;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_80 = (undefined8 *)0x0;
  cVar5 = FUN_1401154ee();
  if ((cVar5 == '\0') || (local_80 == (undefined8 *)0x0)) {
    FUN_140056680(local_90,param_2);
    cVar5 = FUN_142b096aa(param_1,local_90);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar5 == '\0') goto LAB_142b09993;
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
                       (*(longlong **)(param_1 + 8),param_2);
  }
  else if ((local_38._4_4_ == 0) && ((local_30 & 1) == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(local_80 + 0x45);
    EnterCriticalSection(lpCriticalSection);
    if (local_80[0x44] == 0) {
      if (*(int *)(local_80 + 4) == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)local_80[3];
      }
      lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x188))
                        (*(longlong **)(param_1 + 8),puVar8);
      local_80[0x44] = lVar6;
      if (lVar6 != 0) goto LAB_142b09a0d;
      puVar7 = (undefined8 *)0x0;
    }
    else {
LAB_142b09a0d:
      puVar4 = local_80;
      puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar2 = puVar4[0x41];
      lVar6 = 0x30;
      if (2 < *(int *)((longlong)puVar4 + 0x7c)) {
        if (local_38._4_4_ == 0) {
          lVar6 = 0x35;
        }
        else {
          lVar6 = (longlong)(int)uStack_40 * 0x10 + 0x39;
        }
      }
      lVar9 = lVar6 + 8;
      if (1 < *(int *)((longlong)puVar4 + 0x7c)) {
        lVar9 = lVar6;
      }
      uVar3 = puVar4[0x44];
      puVar7[1] = uStack_68;
      *puVar7 = &PTR_FUN_14a1615d0;
      puVar7[2] = uVar3;
      puVar7[3] = lVar9 + local_78;
      puVar7[4] = uVar2;
      FUN_140056680(puVar7 + 5,param_2);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
LAB_142b09993:
    puVar7 = (undefined8 *)0x0;
  }
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_80 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_80)(local_80,1);
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_142b099be:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b09ab0 FUN_142b09ab0 body=471 status=ok
// SIG undefined FUN_142b09ab0(void)

undefined8 ** FUN_142b09ab0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c846b14 == '\x01') {
    bVar2 = DAT_14c83f0f8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) &&
       (FUN_144b3d300(&DAT_14c83f0fc), bVar2 = DAT_14c83f0f8, DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar2 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
      bVar2 = DAT_14c83f0f8;
    }
  }
  else {
    bVar2 = 1;
  }
  if ((bVar2 != 0) && (0 < DAT_14c75f5f4)) {
    local_50 = 0;
    uStack_48 = 0;
    local_80 = 0xffffffffffffffff;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    ppuVar3 = &local_88;
    local_88 = (undefined8 *)0x0;
    bVar2 = FUN_1401154ee(param_1,param_2,ppuVar3);
    if (bVar2 == 0) {
LAB_142b09bad:
      bVar2 = bVar2 ^ 1;
      if (local_88 != (undefined8 *)0x0) {
LAB_142b09bbd:
        LOCK();
        piVar1 = (int *)(local_88 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_88)(local_88,1);
        }
      }
    }
    else {
      if (local_88 != (undefined8 *)0x0) {
        if (local_88[5] != 0) {
          ppuVar3 = (undefined8 **)FUN_14001cc68(0x1c0,0x10);
          FUN_142b09c88(ppuVar3,&local_80,&local_88,param_2);
          goto LAB_142b09bad;
        }
        bVar2 = 1;
        goto LAB_142b09bbd;
      }
      bVar2 = 1;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (bVar2 == 0) goto LAB_142b09be0;
  }
  ppuVar3 = (undefined8 **)FUN_145bf0dfc(param_1,param_2);
LAB_142b09be0:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ppuVar3;
}



// FUNCTION 142b09c88 FUN_142b09c88 body=929 status=ok
// SIG undefined FUN_142b09c88(void)

undefined8 * FUN_142b09c88(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  uint uVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined8 uVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14a1615e0;
  param_1[1] = *(undefined8 *)(*param_3 + 0x28);
  lVar17 = *param_3;
  param_1[2] = lVar17;
  if (lVar17 == 0) {
    lVar17 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
    lVar17 = *param_3;
  }
  param_1[3] = *(undefined8 *)(lVar17 + 0x208);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  *(undefined4 *)(param_1 + 6) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
  *(undefined4 *)(param_1 + 9) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar9;
  *(undefined4 *)(param_1 + 10) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar11;
  *(undefined4 *)(param_1 + 0xb) = uVar12;
  param_1[0xc] = 0;
  iVar19 = param_2[0xe];
  _Src = *(void **)(param_2 + 0xc);
  *(int *)(param_1 + 0xd) = iVar19;
  if ((longlong)iVar19 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1417367c6(param_1 + 0xc,iVar19,0);
    memcpy((void *)param_1[0xc],_Src,(longlong)iVar19 << 4);
  }
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0x12);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x10);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x24),4000);
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  lVar17 = *param_3;
  uVar2 = *(undefined4 *)(lVar17 + 0xac);
  uVar3 = *(undefined4 *)(lVar17 + 0xb0);
  uVar4 = *(undefined4 *)(lVar17 + 0xb4);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar17 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar2;
  *(undefined4 *)(param_1 + 0x2d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar4;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  iVar19 = *(int *)((longlong)param_1 + 0x74);
  lVar17 = 0x30;
  if (2 < *(int *)(*param_3 + 0x7c)) {
    if (iVar19 == 0) {
      lVar17 = 0x35;
      iVar19 = 0;
    }
    else {
      lVar17 = (longlong)*(int *)(param_1 + 0xd) * 0x10 + 0x39;
    }
  }
  lVar18 = lVar17 + 8;
  if (1 < *(int *)(*param_3 + 0x7c)) {
    lVar18 = lVar17;
  }
  param_1[4] = lVar18 + param_1[6];
  param_1[5] = param_1[8];
  lVar17 = *(longlong *)(*(longlong *)(*param_3 + 0xb8) + (longlong)iVar19 * 8);
  *(longlong *)((longlong)param_1 + 0x14c) = lVar17;
  if (param_1[8] != 0 && lVar17 != 0) {
    uVar1 = *(uint *)(param_1 + 0xd);
    iVar19 = *(int *)(param_1 + 0x1b);
    *(uint *)(param_1 + 0x1b) = iVar19 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xdc) - iVar19) < uVar1) {
      FUN_1417368aa(param_1 + 0x1a);
    }
    uVar20 = 0;
    memset((void *)((longlong)iVar19 * 8 + param_1[0x1a]),0,(longlong)(int)uVar1 << 3);
    if (4 < *(int *)(*param_3 + 0x7c)) {
      uVar20 = param_1[6];
    }
    param_1[0x2b] = uVar20;
  }
  local_d8 = param_1[0x1c];
  uStack_90 = param_1[0x1d];
  local_c8 = (longlong *)param_1[0x1e];
  uStack_80 = param_1[0x1f];
  local_78 = param_1[0x20];
  uStack_70 = param_1[0x21];
  local_68 = param_1[0x22];
  uStack_60 = param_1[0x23];
  uVar14 = local_68;
  uVar15 = uStack_60;
  local_88 = local_c8;
  uVar13 = uStack_80;
  local_98 = local_d8;
  uVar20 = uStack_90;
  param_1[0x22] = CONCAT44(uStack_a4,local_a8);
  param_1[0x23] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x20] = &PTR_LAB_14a161610;
  param_1[0x21] = param_1;
  param_1[0x1e] = 0;
  param_1[0x1f] = CONCAT44(uStack_bc,uStack_c0);
  param_1[0x1c] = FUN_144aa7508;
  param_1[0x1d] = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = uVar20;
  uStack_80 = uVar13;
  local_68 = uVar14;
  uStack_60 = uVar15;
  if (local_d8 != 0) {
    plVar16 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar16 = &local_b8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b0a02c FUN_142b0a02c body=1860 status=ok
// SIG undefined FUN_142b0a02c(void)

undefined1 (*) [16] FUN_142b0a02c(undefined1 (*param_1) [16],undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  longlong *local_98;
  longlong *plStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1446f470e(&local_a8,param_2,1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
  if (DAT_14c99ff80 != DAT_14c99ffac) {
    uVar3 = (uint)((ulonglong)local_a8 >> 0x10);
    uVar15 = (uint)local_a8 & 0xffff;
    puVar17 = &DAT_14c99ffb0;
    if (DAT_14c99ffb8 != (undefined *)0x0) {
      puVar17 = DAT_14c99ffb8;
    }
    iVar8 = *(int *)(puVar17 +
                    (ulonglong)
                    (DAT_14c99ffc0 - 1U &
                    (int)((ulonglong)local_a8 >> 0x20) + ((uint)local_a8 << 0x10 | uVar15) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar15 >> 4)) * 4);
    while (iVar8 != -1) {
      lVar14 = DAT_14c99ff78 + (longlong)iVar8 * 0x20;
      if (*(longlong *)(DAT_14c99ff78 + (longlong)iVar8 * 0x20) == local_a8) {
        if ((lVar14 + 8U & 0xfffffffffffffff7) != 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)(lVar14 + 8);
          lVar14 = *(longlong *)(lVar14 + 0x10);
          *(longlong *)(*param_1 + 8) = lVar14;
          if (lVar14 != 0) {
            LOCK();
            *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
            UNLOCK();
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
          goto LAB_142b0a159;
        }
        break;
      }
      iVar8 = *(int *)(lVar14 + 0x18);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a0140) && (FUN_144b3d300(&DAT_14c9a0140), DAT_14c9a0140 == -1)) {
    plVar10 = (longlong *)FUN_14626b6bc();
    if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
       (cVar7 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar7 == '\0')) {
      lVar14 = 0;
    }
    else {
      local_78 = (longlong *)0x0;
      uStack_70._0_4_ = 0;
      uStack_70._4_4_ = 0;
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      if ((int)plVar10[1] == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)*plVar10;
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,&local_78,&local_88);
      local_98 = (longlong *)0x0;
      plStack_90 = (longlong *)0x0;
      lVar14 = FUN_14707a06c(&local_78,&local_98,&local_88);
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    DAT_14c9a0138 = lVar14;
    _Init_thread_footer(&DAT_14c9a0140);
  }
  if (DAT_14c9a0138 == 0) {
    *param_1 = (undefined1  [16])0x0;
    goto LAB_142b0a159;
  }
  FUN_140056680(&local_78,&DAT_14a160c18);
  FUN_140056680(&local_98,param_2);
  FUN_14170b210(&local_88,&local_98,&local_78);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar10 = (longlong *)FUN_14054d1d4();
  puVar16 = local_88;
  if ((int)uStack_80 == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x18))(plVar10,puVar16,0);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_140056680(&local_78,param_2);
    FUN_14707af8e();
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
    FUN_1411f311e(&DAT_14c9a01b8,&local_78);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar13 = (longlong *)0x0;
    plVar19 = (longlong *)0x0;
  }
  else {
    plVar12 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14a161c00;
    plVar10 = plVar12 + 2;
    *(undefined1 (*) [16])(plVar12 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar12 + 6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar12 + 4) = (undefined1  [16])0x0;
    *(int *)(plVar12 + 2) = 1;
    *(undefined1 (*) [16])(plVar12 + 5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar12 + 3) = (undefined1  [16])0x0;
    *(int *)(plVar12 + 7) = 0;
    *(undefined1 (*) [16])(plVar12 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar12 + 10) = (undefined1  [16])0x0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar19 = plVar12 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
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
    FUN_14707ac16(plVar10,puVar11);
    FUN_140056680(&local_98,param_2);
    lVar14 = DAT_14c9a0138;
    if ((int)*plVar10 == 0) {
LAB_142b0a367:
      FUN_14707af8e();
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
      FUN_1411f311e(&DAT_14c9a01b8,&local_98);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
      bVar5 = false;
    }
    else {
      plVar19 = (longlong *)plVar12[3];
      lVar6 = plVar12[4];
      local_b0 = plVar10;
      plVar13 = (longlong *)FUN_147079f8c();
      plVar10 = local_b0;
      if (plVar13 == (longlong *)0x0) goto LAB_142b0a367;
      plVar1 = plVar12 + 8;
      local_78 = plVar19;
      uStack_70._0_4_ = (int)lVar6;
      iVar8 = (**(code **)(*plVar13 + 0x38))(plVar13,&local_78,plVar1,lVar14);
      plVar10 = local_b0;
      if (iVar8 < 0x15) goto LAB_142b0a367;
      lVar14 = plVar12[8];
      iVar8 = (int)plVar12[9];
      lVar18 = (longlong)iVar8;
      iVar9 = iVar8 + -0x14;
      plVar19 = (longlong *)(lVar14 + -0x14 + lVar18);
      lVar6 = plVar19[1];
      plVar12[5] = *plVar19;
      plVar12[6] = lVar6;
      *(int *)(plVar12 + 7) = *(int *)(lVar14 + -4 + lVar18);
      if (lVar18 < -0x7fffffec) {
        *(int *)(plVar12 + 9) = iVar9;
        if ((uint)(*(int *)((longlong)plVar12 + 0x4c) - iVar8) < 0xffffffec) {
          FUN_1447403be(plVar1);
          lVar14 = *plVar1;
        }
        memset((void *)(lVar14 + lVar18),0,0xffffffffffffffec);
      }
      else {
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        *(int *)(plVar12 + 9) = iVar9;
        FUN_140b3f66e(plVar1);
      }
      local_78 = (longlong *)0x0;
      uStack_70._0_4_ = 0;
      uStack_70._4_4_ = 0;
      local_68 = 0;
      FUN_140f0be04(plVar12[10],(longlong)(int)plVar12[0xb] << 2,&local_78);
      auVar4._8_4_ = (int)uStack_70;
      auVar4._0_8_ = local_78;
      auVar4._12_4_ = uStack_70._4_4_;
      bVar5 = true;
      if (*(undefined1 (*) [16])(plVar12 + 5) != auVar4 || local_68 != (int)plVar12[7])
      goto LAB_142b0a367;
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar13 = (longlong *)0x0;
    plVar19 = plVar13;
    if (bVar5) {
      plVar13 = plVar12;
      plVar19 = plVar10;
    }
    if (plVar12 != (longlong *)0x0 && !bVar5) {
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      plVar19 = (longlong *)0x0;
      plVar13 = (longlong *)0x0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
    if (DAT_14c99ff80 != DAT_14c99ffac) {
      uVar3 = (uint)((ulonglong)local_a8 >> 0x10);
      uVar15 = (uint)local_a8 & 0xffff;
      puVar17 = &DAT_14c99ffb0;
      if (DAT_14c99ffb8 != (undefined *)0x0) {
        puVar17 = DAT_14c99ffb8;
      }
      iVar8 = *(int *)(puVar17 +
                      (ulonglong)
                      (DAT_14c99ffc0 - 1U &
                      (int)((ulonglong)local_a8 >> 0x20) + ((uint)local_a8 << 0x10 | uVar15) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar15 >> 4)) * 4);
      while (iVar8 != -1) {
        lVar14 = DAT_14c99ff78 + (longlong)iVar8 * 0x20;
        if (*(longlong *)(DAT_14c99ff78 + (longlong)iVar8 * 0x20) == local_a8) {
          if ((lVar14 != 0) && (lVar14 != -8)) {
            *(undefined8 *)*param_1 = *(undefined8 *)(lVar14 + 8);
            lVar14 = *(longlong *)(lVar14 + 0x10);
            *(longlong *)(*param_1 + 8) = lVar14;
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
            (**(code **)*puVar11)(puVar11,1);
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (plVar13 == (longlong *)0x0) goto LAB_142b0a159;
            goto LAB_142b0a5ff;
          }
          break;
        }
        iVar8 = *(int *)(lVar14 + 0x18);
      }
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_98 = plVar19;
    plStack_90 = plVar13;
    local_78 = &local_a8;
    uStack_70 = &local_98;
    FUN_147081cd2(local_9c);
    plVar10 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_90 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
    (**(code **)*puVar11)(puVar11,1);
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(longlong **)*param_1 = plVar19;
  *(longlong **)(*param_1 + 8) = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
LAB_142b0a5ff:
    LOCK();
    plVar10 = plVar13 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
LAB_142b0a159:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b0a772 FUN_142b0a772 body=91 status=ok
// SIG undefined FUN_142b0a772(void)

void FUN_142b0a772(void)

{
  if (DAT_14c9a0150 != 0) {
    if (DAT_14c9a0148 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9a0148)(DAT_14c9a0148,0);
    FUN_1446efa72(&DAT_14c9a0148,0,0,0x10);
    DAT_14c9a0150 = 0;
  }
  if (DAT_14c9a0148 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b0a7cd FUN_142b0a7cd body=91 status=ok
// SIG undefined FUN_142b0a7cd(void)

void FUN_142b0a7cd(void)

{
  if (DAT_14c9a0168 != 0) {
    if (DAT_14c9a0160 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9a0160)(DAT_14c9a0160,0);
    FUN_1446efa72(&DAT_14c9a0160,0,0,0x10);
    DAT_14c9a0168 = 0;
  }
  if (DAT_14c9a0160 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b0a82d FUN_142b0a82d body=91 status=ok
// SIG undefined FUN_142b0a82d(void)

void FUN_142b0a82d(void)

{
  if (DAT_14c9a01e0 != 0) {
    if (DAT_14c9a01d8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9a01d8)(DAT_14c9a01d8,0);
    FUN_1446efa72(&DAT_14c9a01d8,0,0,0x10);
    DAT_14c9a01e0 = 0;
  }
  if (DAT_14c9a01d8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b0a888 FUN_142b0a888 body=211 status=ok
// SIG undefined FUN_142b0a888(void)

undefined8 FUN_142b0a888(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x212) == '\x01') {
    lVar1 = FUN_14707da90(param_2,param_1 + 200,param_1 + 400,*(undefined8 *)(param_1 + 0x1f0),
                          *(undefined4 *)(param_1 + 0x7c));
  }
  else if (*(char *)(param_1 + 0x214) == '\0') {
    lVar1 = FUN_144741170(param_2,param_1 + 200,param_1 + 0xe8);
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x188));
    lVar1 = FUN_144741170(param_2,param_1 + 200,param_1 + 0xe8);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x188));
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407fa642(lVar1,param_3,param_1 + 0x1e0,param_1 + 0xd8,param_1 + 0x78);
  }
  return uVar2;
}



// FUNCTION 142b0a95c FUN_142b0a95c body=56 status=ok
// SIG undefined FUN_142b0a95c(void)

undefined8 FUN_142b0a95c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1401ae3d4();
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b0a991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2);
  return uVar2;
}



// FUNCTION 142b0a994 FUN_142b0a994 body=56 status=ok
// SIG undefined FUN_142b0a994(void)

undefined8 FUN_142b0a994(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1401ae3d4();
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b0a9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2);
  return uVar2;
}



// FUNCTION 142b0a9cc FUN_142b0a9cc body=381 status=ok
// SIG undefined FUN_142b0a9cc(void)

undefined8 * FUN_142b0a9cc(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88 [4];
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  uStack_58 = 0;
  local_90 = 0xffffffffffffffff;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_98 = (undefined8 *)0x0;
  cVar4 = FUN_1401154ee(param_1,param_3);
  if (cVar4 == '\0') {
    cVar4 = FUN_1401ae3d4(param_1,param_3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xffffffffffffffff;
    if (cVar4 == '\0') {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xf8;
      FUN_140056680(local_a8,param_3);
      cVar4 = FUN_142b096aa(param_1,local_a8);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x120))
                  (*(longlong **)(param_1 + 8),param_2,param_3);
      }
    }
    else {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 7;
    }
  }
  else {
    uVar2 = local_88[local_50._4_4_ != 0];
    uVar3 = local_98[0x40];
    *param_2 = uVar3;
    param_2[1] = uVar3;
    param_2[2] = uVar3;
    param_2[3] = uVar2;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xf8 | 6;
  }
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0ab4a FUN_142b0ab4a body=3202 status=ok
// SIG undefined FUN_142b0ab4a(void)

bool FUN_142b0ab4a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  void *_Src;
  undefined1 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  code *pcVar16;
  bool bVar17;
  undefined1 auStack_298 [32];
  code **local_278;
  undefined8 **local_270;
  code *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  longlong *local_250;
  longlong local_248;
  longlong *local_240;
  undefined2 *local_238;
  int local_230;
  undefined2 *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  longlong *plStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  code *local_1f8;
  longlong *plStack_1f0;
  undefined ***local_1e8;
  undefined **local_1d8;
  longlong local_1d0;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *(undefined8 *)(param_1 + 8) = param_2;
  uVar7 = FUN_1401cb356();
  local_278 = &local_1f8;
  local_1e8 = (undefined ***)0x0;
  local_1d8 = &PTR_LAB_14a161c20;
  local_1f8 = FUN_142b10b8c;
  local_1d0 = param_1;
  FUN_1401cbba4(uVar7,&local_218,L"RetirePakReaders",0x3f800000);
  *(undefined8 **)(param_1 + 0xf0) = local_218;
  local_218 = (undefined8 *)0x0;
  plVar8 = *(longlong **)(param_1 + 0xf8);
  *(longlong **)(param_1 + 0xf8) = plStack_210;
  plStack_210 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    if (plStack_210 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_210 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_210 + 0x10))();
      }
    }
  }
  if (local_1f8 != (code *)0x0) {
    pppuVar11 = local_1e8;
    if (local_1e8 == (undefined ***)0x0) {
      pppuVar11 = &local_1d8;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  lVar15 = param_1 + 0x60;
  FUN_1446f470e(&local_1f8,L"uasset",1);
  uVar5 = 0;
  FUN_144869592(lVar15,&local_218,&local_1f8,0);
  FUN_1446f470e(&local_1f8,L"umap",1);
  FUN_144869592(lVar15,&local_218,&local_1f8,0);
  FUN_1446f470e(&local_1f8,L"ubulk",1);
  FUN_144869592(lVar15,&local_218,&local_1f8,0);
  FUN_1446f470e(&local_1f8,L"uexp",1);
  FUN_144869592(lVar15,&local_218,&local_1f8,0);
  FUN_1446f470e(&local_1f8,L"uptnl",1);
  FUN_144869592(lVar15,&local_218,&local_1f8,0);
  FUN_1446f470e(&local_1f8,L"ushaderbytecode",1);
  FUN_144869592(lVar15,&local_218,&local_1f8,0);
  plVar8 = (longlong *)FUN_14626b6bc();
  if ((longlong *)*plVar8 != (longlong *)0x0 && (int)plVar8[1] != 0) {
    uVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
  }
  *(undefined1 *)(param_1 + 0x30) = uVar5;
  _Src = DAT_14c99ff60;
  local_228 = (undefined2 *)0x0;
  lVar15 = (longlong)DAT_14c99ff68;
  local_220 = DAT_14c99ff68;
  if (lVar15 == 0) {
    local_21c = 0;
  }
  else {
    FUN_1446dd670(&local_228,DAT_14c99ff68,0);
    memcpy(local_228,_Src,lVar15 * 2);
  }
  if (DAT_14c844ed8 != (longlong *)0x0) {
    FUN_1410f2562(&local_1f8);
    pcVar16 = local_1f8;
    if ((int)plStack_1f0 == 0) {
      pcVar16 = (code *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_238,L"%sPaks/global.utoc",pcVar16);
    if (local_1f8 != (code *)0x0) {
      FUN_1400020a8();
    }
    plVar9 = (longlong *)FUN_1400dbadc();
    plVar8 = (longlong *)*plVar9;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_140e92164();
      *plVar9 = (longlong)plVar8;
    }
    puVar12 = local_238;
    if (local_230 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    cVar6 = (**(code **)(*plVar8 + 0x78))(plVar8,puVar12);
    if (cVar6 != '\0') {
      cVar6 = FUN_14173651b();
      if (cVar6 != '\0') {
        puVar12 = local_238;
        if (local_230 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        FUN_142b0b7cd(puVar12);
      }
      plVar8 = DAT_14c844ed8;
      FUN_1461ac268(&local_1f8);
      plVar9 = plStack_1f0;
      if (plStack_1f0 == (longlong *)0x0) {
        *(code **)(param_1 + 0xd0) = local_1f8;
        plVar10 = *(longlong **)(param_1 + 0xd8);
        if (plVar10 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0xd8) = 0;
LAB_142b0af2d:
          LOCK();
          plVar9 = plVar10 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
joined_r0x000142b0af20:
            if (iVar3 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
        UNLOCK();
        *(code **)(param_1 + 0xd0) = local_1f8;
        plVar10 = *(longlong **)(param_1 + 0xd8);
        if (plStack_1f0 == plVar10) {
          LOCK();
          plVar10 = plStack_1f0 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plStack_1f0)(plStack_1f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
            plVar10 = plVar9;
            goto joined_r0x000142b0af20;
          }
        }
        else {
          *(longlong **)(param_1 + 0xd8) = plStack_1f0;
          if (plVar10 != (longlong *)0x0) goto LAB_142b0af2d;
        }
      }
      if (plStack_1f0 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_1f0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plStack_1f0)(plStack_1f0);
          LOCK();
          piVar1 = (int *)((longlong)plStack_1f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
          }
        }
      }
      lVar15 = *(longlong *)(param_1 + 0xd0);
      plVar9 = *(longlong **)(param_1 + 0xd8);
      if (plVar9 == (longlong *)0x0) {
        local_248 = lVar15 + 8;
        if (lVar15 == 0) {
          local_248 = lVar15;
        }
        local_240 = (longlong *)0x0;
        FUN_145cd6dcc(plVar8,&local_248,0);
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_248 = lVar15 + 8;
        if (lVar15 == 0) {
          local_248 = lVar15;
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_240 = plVar9;
        FUN_145cd6dcc(plVar8,&local_248,0);
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      plVar10 = (longlong *)FUN_14001cc68(0x130);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14a161c40;
      plVar9 = plVar10 + 2;
      memset(plVar9,0,0x120);
      FUN_147082576(plVar9);
      if (plVar10 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xe0) = 0x10;
        plVar9 = *(longlong **)(param_1 + 0xe8);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_142b0b0c2:
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
          if (plVar10 != (longlong *)0x0) goto LAB_142b0b0e6;
        }
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0xe0) = plVar9;
        plVar9 = *(longlong **)(param_1 + 0xe8);
        if (plVar10 == plVar9) {
          LOCK();
          plVar9 = plVar10 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        else {
          *(longlong **)(param_1 + 0xe8) = plVar10;
          if (plVar9 != (longlong *)0x0) goto LAB_142b0b0c2;
        }
LAB_142b0b0e6:
        LOCK();
        plVar9 = plVar10 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      uVar7 = FUN_145e2a7c0();
      local_258 = *(undefined8 *)(param_1 + 0xe0);
      plVar9 = *(longlong **)(param_1 + 0xe8);
      if (plVar9 == (longlong *)0x0) {
        local_250 = (longlong *)0x0;
        FUN_146076f80(uVar7,&local_258,0);
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_250 = plVar9;
        FUN_146076f80(uVar7,&local_258,0);
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      local_208 = 0;
      uStack_200 = 0;
      local_218 = (undefined8 *)0x0;
      plStack_210 = (longlong *)0x0;
      local_268 = (code *)0x0;
      uStack_260 = 0;
      puVar12 = local_238;
      if (local_230 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      local_278 = &local_268;
      local_270 = &local_218;
      FUN_142b0629e(*(longlong *)(param_1 + 0xd0),&local_1f8,puVar12,0);
      if ((int)local_1f8 == 0) {
        lVar15 = *(longlong *)(*plVar8 + 8);
        local_218 = (undefined8 *)0x0;
        plStack_210 = (longlong *)((ulonglong)plStack_210 & 0xffffffff00000000);
        FUN_1446efa72(&local_218,0,2,0x10);
        plStack_210 = (longlong *)CONCAT44(plStack_210._4_4_,2);
        *local_218 = &PTR_LAB_14a161d00;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        local_218[2] = lVar13;
        *local_218 = &PTR_FUN_14a161c90;
        FUN_145f9bf48(lVar15 + 0x10,&local_268,&local_218);
        if ((int)plStack_210 == 0) {
LAB_142b0b299:
          if (local_218 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_218 != (undefined8 *)0x0) {
          (**(code **)*local_218)(local_218,0);
          FUN_1446efa72(&local_218,0,0,0x10);
          plStack_210 = (longlong *)((ulonglong)plStack_210 & 0xffffffff00000000);
          goto LAB_142b0b299;
        }
        bVar17 = (int)local_1f8 == 0;
        local_1f8 = (code *)CONCAT26(local_1f8._6_2_,1);
        if (bVar17) {
          FUN_141119470(local_f0);
        }
      }
    }
    if (local_238 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_1f8 = (code *)0x0;
  plStack_1f0 = (longlong *)0x0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_1415102e0(&local_1f8);
  puVar12 = local_228;
  if (local_220 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_218,puVar12);
  FUN_141632030(param_1,&local_1f8,&local_218);
  if (local_218 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14c872c60 != 3) {
    FUN_1446efa72(&DAT_14c872c58,0,3,0x10);
    DAT_14c872c60 = 3;
  }
  puVar4 = DAT_14c872c58;
  *DAT_14c872c58 = &PTR_LAB_14a161de0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  puVar4[2] = lVar14;
  *puVar4 = &PTR_FUN_14a161d70;
  puVar4[3] = param_1;
  puVar4[4] = FUN_1461bd46a;
  if (DAT_14c872c70 != 3) {
    FUN_1446efa72(&DAT_14c872c68,0,3,0x10);
    DAT_14c872c70 = 3;
  }
  puVar4 = DAT_14c872c68;
  *DAT_14c872c68 = &PTR_LAB_14a161ec0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  puVar4[2] = lVar14;
  *puVar4 = &PTR_FUN_14a161e50;
  puVar4[3] = param_1;
  puVar4[4] = FUN_145d03bc8;
  if (DAT_14c872c80 != 3) {
    FUN_1446efa72(&DAT_14c872c78,0,3,0x10);
    DAT_14c872c80 = 3;
  }
  puVar4 = DAT_14c872c78;
  *DAT_14c872c78 = &PTR_LAB_14a161fa0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  puVar4[2] = lVar14;
  *puVar4 = &PTR_FUN_14a161f30;
  puVar4[3] = param_1;
  puVar4[4] = FUN_14707b0bc;
  if (DAT_14c872c90 != 3) {
    FUN_1446efa72(&DAT_14c872c88,0,3,0x10);
    DAT_14c872c90 = 3;
  }
  puVar4 = DAT_14c872c88;
  *DAT_14c872c88 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  puVar4[2] = lVar14;
  *puVar4 = &PTR_FUN_14a162010;
  puVar4[3] = param_1;
  puVar4[4] = FUN_1415ff304;
  plVar8 = (longlong *)FUN_140d57c82();
  if ((int)plVar8[1] != 2) {
    FUN_1446efa72(plVar8,0,2,0x10);
    *(undefined4 *)(plVar8 + 1) = 2;
  }
  puVar4 = (undefined8 *)*plVar8;
  *puVar4 = &PTR_LAB_14a1620f0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  puVar4[2] = lVar14;
  *puVar4 = &PTR_FUN_14a162080;
  puVar4[3] = param_1;
  FUN_14629f3ba(&local_218,param_1);
  uVar7 = FUN_1457baddc();
  local_218 = (undefined8 *)0x0;
  plStack_210 = (longlong *)((ulonglong)plStack_210 & 0xffffffff00000000);
  FUN_1446efa72(&local_218,0,2,0x10);
  plStack_210._0_4_ = 2;
  *local_218 = &PTR_LAB_14a1621d0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_218[2] = lVar14;
  *local_218 = &PTR_FUN_14a162160;
  local_218[3] = param_1;
  FUN_145c03790(uVar7,&local_238,&local_218);
  *(undefined2 **)(param_1 + 0x100) = local_238;
  if ((int)plStack_210 != 0) {
    if (local_218 == (undefined8 *)0x0) goto LAB_142b0b679;
    (**(code **)*local_218)(local_218,0);
    FUN_1446efa72(&local_218,0,0,0x10);
    plStack_210._0_4_ = 0;
  }
  if (local_218 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142b0b679:
  lVar15 = *(longlong *)(param_1 + 8);
  FUN_1447a1747(local_1f8,(ulonglong)plStack_1f0 & 0xffffffff);
  if (local_1f8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_228 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return lVar15 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0b7cd FUN_142b0b7cd body=1714 status=ok
// SIG undefined FUN_142b0b7cd(void)

void FUN_142b0b7cd(undefined8 param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  void *pvVar5;
  LARGE_INTEGER LVar6;
  uint uVar7;
  LARGE_INTEGER LVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_588 [32];
  undefined4 local_568;
  undefined4 local_560;
  ulonglong local_550;
  ulonglong local_548;
  longlong *local_540;
  ulonglong local_538;
  longlong *local_530;
  void *local_528;
  uint local_520;
  LARGE_INTEGER local_518;
  uint local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined8 local_504;
  void *local_4f8;
  uint local_4f0;
  undefined1 local_4e8 [16];
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  int local_4c8;
  LARGE_INTEGER local_4c0;
  LARGE_INTEGER local_4b8;
  undefined2 *local_4b0;
  char local_4a8;
  undefined1 local_4a0 [512];
  undefined2 local_2a0 [2];
  int local_29c [65];
  undefined1 local_198 [17];
  undefined1 local_187;
  undefined2 local_186;
  uint local_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_147 [7];
  ulonglong local_140;
  longlong local_c8;
  uint local_c0;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_588;
  QueryPerformanceCounter(&local_4c0);
  local_187 = 0;
  local_186 = 0;
  local_164 = 0;
  local_160 = 0xffffffffffffffff;
  local_158 = 0;
  uStack_150 = 0;
  memset(local_147,0,0xb3);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1427664ce(local_29c,param_1,0,local_198);
  if ((local_29c[0] == 0) && ((uint)uStack_88 == local_c0)) {
    plVar9 = (longlong *)FUN_1400dbadc();
    local_540 = (longlong *)*plVar9;
    if (local_540 == (longlong *)0x0) {
      local_540 = (longlong *)FUN_140e92164();
      *plVar9 = (longlong)local_540;
    }
    local_4e8 = (undefined1  [16])0x0;
    if ((int)local_16c < 1) {
      if ((int)local_16c < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((ulonglong)local_16c);
      }
    }
    else {
      local_4e8 = ZEXT416(local_16c) << 0x40;
      FUN_1447403be(local_4e8);
      memset((void *)local_4e8._0_8_,0,(ulonglong)local_16c);
    }
    uVar18 = (ulonglong)local_c0;
    FUN_140056680(&local_4c0,&DAT_149dfb77a);
    FUN_140056680(&local_518,param_1);
    FUN_14170b210(&local_4f8,&local_518,&local_4c0);
    if ((void *)local_518.QuadPart != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((undefined8 *)local_4c0.QuadPart != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_4c0.QuadPart = (LONGLONG)local_4a0;
    local_4a8 = '\0';
    local_4b0 = local_2a0;
    local_4b8.QuadPart = local_4c0.QuadPart;
    if ((int)local_c0 < 1) {
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar16 = 0xffffffff;
      lVar17 = 4;
      lVar20 = 0;
      uVar15 = 0;
      plVar11 = (longlong *)0x0;
      local_548 = uVar18;
      do {
        uVar7 = local_4f0;
        pvVar5 = local_4f8;
        uVar1 = *(uint *)(local_c8 + lVar17);
        uVar10 = *(ulonglong *)(local_c8 + -4 + lVar17) & 0xffffffffff;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_140;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar10;
        local_538 = SUB168(auVar3 / auVar2,0);
        uVar10 = uVar10 % local_140;
        if ((int)uVar16 != SUB164(auVar3 / auVar2,0)) {
          local_4b8.s = local_4c0.s;
          iVar14 = local_4f0 - 1;
          if (local_4f0 == 0) {
            iVar14 = 0;
          }
          lVar19 = (longlong)iVar14;
          local_550 = uVar10;
          if (local_4b0 <= (undefined2 *)(local_4c0.QuadPart + lVar19 * 2)) {
            FUN_140213274(&local_4c0,lVar19);
          }
          LVar6 = local_4b8;
          if (1 < uVar7) {
            memcpy((void *)local_4b8,pvVar5,lVar19 * 2);
            local_4b8.QuadPart = LVar6.QuadPart + lVar19 * 2;
          }
          plVar9 = plVar11;
          if (0 < (int)local_538) {
            local_530 = plVar11;
            FUN_140002266(&local_518,L"_s%d",local_538 & 0xffffffff);
            uVar7 = local_510;
            LVar6 = local_518;
            iVar14 = local_510 - 1;
            if (local_510 == 0) {
              iVar14 = 0;
            }
            lVar19 = (longlong)iVar14;
            if (local_4b0 <= (undefined2 *)(local_4b8.QuadPart + lVar19 * 2)) {
              FUN_140213274(&local_4c0,lVar19);
            }
            LVar8 = local_4b8;
            if (1 < uVar7) {
              memcpy((void *)local_4b8,(void *)LVar6,lVar19 * 2);
              local_4b8.QuadPart = LVar8.QuadPart + lVar19 * 2;
            }
            plVar9 = local_530;
            if ((void *)local_518.QuadPart != (void *)0x0) {
              FUN_1400020a8();
              plVar9 = local_530;
            }
          }
          uVar16 = local_538;
          if (local_4b0 <= (undefined2 *)(local_4b8.QuadPart + 10)) {
            FUN_140213274(&local_4c0,5);
          }
          *(undefined2 *)(local_4b8.QuadPart + 8) = 0x73;
          *(undefined8 *)local_4b8 = 0x6100630075002e;
          *(undefined2 *)(local_4b8.QuadPart + 10) = 0;
          local_4b8.QuadPart = local_4b8.QuadPart + 10;
          plVar11 = (longlong *)(**(code **)(*local_540 + 0xe8))(local_540,local_4c0.QuadPart,0);
          if (plVar11 == (longlong *)0x0) goto LAB_142b0bdd1;
          plVar12 = (longlong *)FUN_14001cc68(0xe8,0x10);
          uVar13 = (**(code **)(*plVar11 + 0x50))(plVar11);
          *(undefined2 *)local_4b8 = 0;
          local_560 = 0;
          local_568 = 0x40000;
          FUN_140996eb8(plVar12,plVar11,local_4c0.QuadPart,uVar13);
          uVar18 = local_548;
          plVar11 = plVar9;
          uVar10 = local_550;
          if ((plVar9 != plVar12) && (plVar11 = plVar12, plVar9 != (longlong *)0x0)) {
            (**(code **)*plVar9)(plVar9,1);
            uVar10 = local_550;
          }
        }
        (**(code **)(*plVar11 + 0x1a0))(plVar11,uVar10);
        (**(code **)(*plVar11 + 0x1d8))(plVar11,uVar10,0);
        (**(code **)(*plVar11 + 0x170))(plVar11,local_4e8._0_8_,(uVar1 >> 8) + 0xf & 0xfffffff0);
        local_4d8 = 0;
        uStack_4d4 = 0;
        uStack_4d0 = 0;
        local_4c8 = 0;
        FUN_140f0be04(local_4e8._0_8_);
        auVar4._4_4_ = uStack_4d4;
        auVar4._0_4_ = local_4d8;
        auVar4._8_8_ = uStack_4d0;
        if (*(undefined1 (*) [16])(local_90 + lVar20) != auVar4 ||
            local_4c8 != *(int *)(local_90 + 0x10 + lVar20)) {
          *(undefined2 *)local_4b8 = 0;
          FUN_140056680(&local_528,local_4c0.QuadPart);
          pvVar5 = local_528;
          local_518.QuadPart = 0;
          lVar19 = (longlong)(int)local_520;
          local_510 = local_520;
          if (lVar19 == 0) {
            local_50c = 0;
          }
          else {
            FUN_1446dd670(&local_518,local_520,0);
            memcpy((void *)local_518,pvVar5,lVar19 * 2);
          }
          local_508 = (undefined4)uVar15;
          local_504 = 0;
          if (local_528 != (void *)0x0) {
            FUN_1400020a8(local_528);
          }
          local_504 = CONCAT44(local_4d8,*(undefined4 *)(local_90 + lVar20));
          FUN_14707af8e();
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
          FUN_1470823d0(&DAT_14c9a01a0);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
          if ((void *)local_518.QuadPart != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar15 = uVar15 + 1;
        lVar20 = lVar20 + 0x14;
        lVar17 = lVar17 + 0xc;
        plVar9 = plVar11;
      } while (uVar18 != uVar15);
    }
    QueryPerformanceCounter(&local_518);
LAB_142b0bdd1:
    if (local_4a8 == '\x01') {
      FUN_1400020a8(local_4c0.QuadPart);
    }
    if (local_4f8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_4e8._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)*plVar9)(plVar9,1);
    }
  }
  FUN_141703cfc(local_198);
  if ((local_60 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b0be82 FUN_142b0be82 body=350 status=ok
// SIG undefined FUN_142b0be82(void)

ulonglong FUN_142b0be82(longlong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (DAT_14c846b14 == 1) {
    uVar3 = (ulonglong)DAT_14c83f0fc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < (int)DAT_14c83f0fc) &&
       (uVar3 = FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == 0xffffffff)) {
      if (DAT_14c846b14 == 0) {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar2 ^ 1;
      uVar3 = _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      DAT_14c75f5f4 = 0;
      return uVar3;
    }
  }
  if ((DAT_14c846b14 & 1) == 0) {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  uVar3 = FUN_14054d46e(&DAT_14c846b20,L"FileOpenLog");
  if ((char)uVar3 != '\0') {
    DAT_14c75f5f4 = 0;
    return uVar3;
  }
  plVar4 = (longlong *)FUN_14626b6bc();
  bVar7 = (int)plVar4[1] == 0;
  plVar4 = (longlong *)*plVar4;
  uVar3 = (ulonglong)(plVar4 == (longlong *)0x0 || bVar7);
  if (plVar4 == (longlong *)0x0 || bVar7) {
    uVar6 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x30))();
    uVar6 = (undefined4)uVar3;
  }
  if (DAT_14c9a0260 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar5 = FUN_14001cc68(0x2c8,0x10);
    FUN_145772f1e(uVar5,uVar1,uVar6);
    uVar3 = 0;
    LOCK();
    if (DAT_14c9a0260 != 0) {
      uVar3 = DAT_14c9a0260;
      uVar5 = DAT_14c9a0260;
    }
    DAT_14c9a0260 = uVar5;
    UNLOCK();
    return uVar3;
  }
  return uVar3;
}



// FUNCTION 142b0bfe0 FUN_142b0bfe0 body=69 status=ok
// SIG undefined FUN_142b0bfe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b0bfe0(void)

{
  _DAT_14c9a01f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b0c022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a01f8,1);
  return;
}



// FUNCTION 142b0c026 FUN_142b0c026 body=1470 status=ok
// SIG undefined FUN_142b0c026(void)

void FUN_142b0c026(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined1 **local_128;
  uint local_11c;
  ulonglong local_118;
  int local_110;
  int local_10c;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  LPCRITICAL_SECTION local_f0;
  longlong local_e8;
  uint *local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined1 *local_c0;
  char **local_b8;
  undefined1 *local_b0;
  char **local_a8;
  undefined1 *local_a0;
  char **local_98;
  undefined1 *local_90;
  char **local_88;
  char *local_80;
  undefined1 *local_78;
  char **local_70;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f0 = (LPCRITICAL_SECTION)(param_1 + 8);
  local_100 = param_3;
  EnterCriticalSection(local_f0);
  puVar18 = (uint *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 0x80);
  if (iVar4 == 0) {
    uVar16 = 1;
    uVar12 = 0;
    iVar19 = 0;
    iVar10 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar9 = puVar18;
    }
    uVar17 = *puVar9;
    if (uVar17 == 0) {
      iVar19 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar19 = iVar4 + -1;
      }
      uVar12 = 0;
      uVar16 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar16 = uVar12;
      }
      iVar19 = 0;
      do {
        if (uVar16 == uVar12) goto LAB_142b0c589;
        iVar19 = iVar19 + 0x20;
        uVar17 = puVar9[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar12 = 0;
      iVar19 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar13 = uVar16 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar10 = (iVar19 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar10) {
      iVar10 = iVar4;
    }
  }
  if (iVar10 < iVar4) {
    local_f8 = (longlong *)(param_1 + 0x58);
    local_108 = (longlong *)(param_1 + 0xa8);
    local_e8 = param_1 + 0xe0;
    lVar2 = param_1 + 0xb8;
    uVar17 = 0xffffffff;
    local_e0 = puVar18;
    local_d8 = param_1;
    local_d0 = param_2;
    do {
      local_10c = iVar10;
      lVar11 = (longlong)local_10c;
      lVar20 = *(longlong *)(*local_f8 + lVar11 * 0x18);
      if (*(longlong *)(lVar20 + 0x28) == param_2) {
        uVar13 = (ulonglong)*(ushort *)(*local_f8 + lVar11 * 0x18 + 8);
        local_11c = uVar17;
        local_118 = uVar16;
        local_110 = iVar19;
        local_c8 = uVar12;
        FUN_14039dfac(param_1,CONCAT71((int7)((ulonglong)(lVar11 * 3) >> 8),1),
                      CONCAT62((int6)((ulonglong)lVar20 >> 0x10),0xffff));
        lVar11 = local_e8;
        lVar20 = *(longlong *)(param_1 + 0xa8);
        lVar15 = uVar13 * 0x98;
        plVar5 = (longlong *)(lVar20 + lVar15);
        local_61 = '\0';
        local_78 = &LAB_14707f55e;
        local_130 = *(undefined4 *)(lVar20 + 0x24 + lVar15);
        local_138 = *(undefined4 *)(lVar20 + 0x20 + lVar15);
        local_140 = *(undefined8 *)(lVar20 + 0x18 + lVar15);
        lVar14 = (uVar13 << 0x30) + -1;
        local_128 = &local_78;
        local_148 = 0;
        local_80 = &local_61;
        local_70 = &local_80;
        FUN_1401706c6(*(undefined4 *)(lVar20 + 0x80 + lVar15),local_e8,0,
                      *(longlong *)(lVar20 + 0x10 + lVar15) + lVar14);
        local_90 = &LAB_14707f568;
        local_130 = *(undefined4 *)(lVar20 + 0x24 + lVar15);
        local_138 = *(undefined4 *)(lVar20 + 0x20 + lVar15);
        local_140 = *(undefined8 *)(lVar20 + 0x18 + lVar15);
        local_128 = &local_90;
        local_148 = 0;
        local_88 = &local_80;
        local_80 = &local_61;
        FUN_1401706c6(*(undefined4 *)(lVar20 + 0x7c + lVar15),lVar11,0,
                      *(longlong *)(lVar20 + 0x10 + lVar15) + lVar14);
        lVar20 = 0x78;
        do {
          local_a0 = &LAB_14707f572;
          local_130 = *(undefined4 *)((longlong)plVar5 + 0x24);
          local_138 = (undefined4)plVar5[4];
          local_140 = plVar5[3];
          local_128 = &local_a0;
          local_148 = 0;
          local_98 = &local_80;
          local_80 = &local_61;
          FUN_14051886f(*(undefined4 *)((longlong)plVar5 + lVar20),lVar2,0,plVar5[2] + lVar14);
          local_b0 = &LAB_14707f57c;
          local_130 = *(undefined4 *)((longlong)plVar5 + 0x24);
          local_138 = (undefined4)plVar5[4];
          local_140 = plVar5[3];
          local_128 = &local_b0;
          local_148 = 0;
          local_a8 = &local_80;
          local_80 = &local_61;
          FUN_14051886f(*(undefined4 *)((longlong)plVar5 + lVar20 + -8),lVar2,0,plVar5[2] + lVar14);
          local_c0 = &LAB_14707f586;
          local_130 = *(undefined4 *)((longlong)plVar5 + 0x24);
          local_138 = (undefined4)plVar5[4];
          local_140 = plVar5[3];
          local_148 = 0;
          local_128 = &local_c0;
          local_b8 = &local_80;
          local_80 = &local_61;
          FUN_14051886f(*(undefined4 *)((longlong)plVar5 + lVar20 + -4),lVar2,0,plVar5[2] + lVar14);
          param_2 = local_d0;
          param_1 = local_d8;
          iVar19 = local_110;
          lVar20 = lVar20 + -0xc;
        } while (lVar20 != 0x30);
        if (local_61 == '\0') {
          if (plVar5[1] != local_100) {
            *(undefined1 *)(plVar5[1] + 0x259) = 0;
          }
          FUN_14707f590(local_f8,local_10c);
          puVar1 = (undefined8 *)*plVar5;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          plVar3 = local_108;
          *plVar5 = 0;
          plVar5[1] = 0;
          iVar4 = *(int *)(param_1 + 0xb0);
          if (0 < (longlong)iVar4) {
            plVar5 = (longlong *)(*local_108 + (longlong)iVar4 * 0x98);
            iVar10 = 0;
            do {
              plVar5 = plVar5 + -0x13;
              if (*plVar5 != 0) {
                iVar7 = iVar10;
                if (iVar10 == 0) goto LAB_142b0c418;
                break;
              }
              iVar10 = iVar10 + 1;
              iVar7 = iVar4;
            } while (iVar4 != iVar10);
            FUN_14707f5e8(local_108,iVar4 - iVar7);
            FUN_14707f64e(plVar3);
            *(undefined8 *)(param_1 + 0x30) = 0;
          }
        }
LAB_142b0c418:
        iVar4 = *(int *)(param_1 + 0x80);
        uVar12 = local_c8;
        uVar16 = local_118;
        puVar18 = local_e0;
        uVar17 = local_11c;
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar9 = *(uint **)(param_1 + 0x78);
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        puVar9 = puVar18;
      }
      iVar10 = (int)uVar12;
      lVar20 = (longlong)iVar10;
      uVar6 = puVar9[lVar20] & uVar17;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar10) {
          iVar8 = iVar10;
        }
        if (iVar7 <= iVar10) break;
        lVar11 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar6 = puVar9[lVar20 + lVar11 + 1];
          if (uVar6 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar8 - lVar20 == lVar11) goto LAB_142b0c589;
        }
        uVar12 = (ulonglong)(iVar10 + (int)lVar11 + 1);
        uVar17 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar13 = uVar16 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar10 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar4);
  }
LAB_142b0c589:
  if (local_100 != 0) {
    *(undefined1 *)(local_100 + 0x259) = 0;
  }
  LeaveCriticalSection(local_f0);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0c5e6 FUN_142b0c5e6 body=871 status=ok
// SIG undefined FUN_142b0c5e6(void)

undefined8 *
FUN_142b0c5e6(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar17 = *param_3;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a162240;
  local_88[0] = FUN_142b1161c;
  local_60 = lVar17;
  local_58 = uVar18;
  if ((param_4[0x11] == 0) || (lVar19 = *param_3, *(int *)(lVar19 + 0x7c) < 3)) {
    bVar1 = *(byte *)(param_4 + 0x12);
    puVar15 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
    if ((bVar1 & 1) == 0) {
      *puVar15 = &PTR_FUN_14a1624b0;
      puVar15[1] = 0;
      puVar15[2] = *param_3;
      uVar4 = param_4[1];
      uVar5 = param_4[2];
      uVar6 = param_4[3];
      uVar7 = param_4[4];
      uVar8 = param_4[5];
      uVar9 = param_4[6];
      uVar10 = param_4[7];
      uVar11 = param_4[7];
      uVar12 = param_4[8];
      uVar13 = param_4[9];
      uVar14 = param_4[10];
      *(undefined4 *)(puVar15 + 3) = *param_4;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar4;
      *(undefined4 *)(puVar15 + 4) = uVar5;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar6;
      *(undefined4 *)(puVar15 + 5) = uVar7;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar8;
      *(undefined4 *)(puVar15 + 6) = uVar9;
      *(undefined4 *)((longlong)puVar15 + 0x34) = uVar10;
      *(undefined4 *)((longlong)puVar15 + 0x34) = uVar11;
      *(undefined4 *)(puVar15 + 7) = uVar12;
      *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar13;
      *(undefined4 *)(puVar15 + 8) = uVar14;
      puVar15[9] = 0;
      iVar2 = param_4[0xe];
      pvVar3 = *(void **)(param_4 + 0xc);
      *(int *)(puVar15 + 10) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar15 + 0x54) = 0;
      }
      else {
        FUN_1417367c6(puVar15 + 9,iVar2,0);
        memcpy((void *)puVar15[9],pvVar3,(longlong)iVar2 << 4);
      }
      *(undefined2 *)(puVar15 + 0xc) = *(undefined2 *)(param_4 + 0x12);
      puVar15[0xb] = *(undefined8 *)(param_4 + 0x10);
      puVar15[0xe] = FUN_142b1161c;
      puVar15[0x10] = 0;
      puVar15[0x12] = &PTR_LAB_14a162240;
      puVar15[0x13] = lVar17;
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        UNLOCK();
        uVar18 = local_58;
      }
      puVar15[0x14] = uVar18;
      if (*(int *)(puVar15[2] + 0x7c) < 3) {
        lVar17 = 0x30;
      }
      else {
        lVar17 = 0x35;
        if (*(int *)((longlong)puVar15 + 0x5c) != 0) {
          lVar17 = (longlong)*(int *)(puVar15 + 10) * 0x10 + 0x39;
        }
      }
      lVar19 = lVar17 + 8;
      if (1 < *(int *)(puVar15[2] + 0x7c)) {
        lVar19 = lVar17;
      }
      puVar15[0x16] = lVar19 + puVar15[3];
    }
    else {
      *puVar15 = &PTR_FUN_14a162450;
      puVar15[1] = 0;
      FUN_1470834c4(puVar15 + 2,*param_3,param_4,local_88);
    }
    lVar17 = *param_3;
    puVar15[0x18] = lVar17;
  }
  else {
    bVar1 = *(byte *)(param_4 + 0x12);
    puVar15 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
    if ((bVar1 & 1) == 0) {
      *puVar15 = &PTR_FUN_14a1623b0;
      puVar15[1] = 0;
      puVar15[2] = lVar19;
      uVar4 = param_4[1];
      uVar5 = param_4[2];
      uVar6 = param_4[3];
      uVar7 = param_4[4];
      uVar8 = param_4[5];
      uVar9 = param_4[6];
      uVar10 = param_4[7];
      uVar11 = param_4[7];
      uVar12 = param_4[8];
      uVar13 = param_4[9];
      uVar14 = param_4[10];
      *(undefined4 *)(puVar15 + 3) = *param_4;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar4;
      *(undefined4 *)(puVar15 + 4) = uVar5;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar6;
      *(undefined4 *)(puVar15 + 5) = uVar7;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar8;
      *(undefined4 *)(puVar15 + 6) = uVar9;
      *(undefined4 *)((longlong)puVar15 + 0x34) = uVar10;
      *(undefined4 *)((longlong)puVar15 + 0x34) = uVar11;
      *(undefined4 *)(puVar15 + 7) = uVar12;
      *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar13;
      *(undefined4 *)(puVar15 + 8) = uVar14;
      puVar15[9] = 0;
      iVar2 = param_4[0xe];
      pvVar3 = *(void **)(param_4 + 0xc);
      *(int *)(puVar15 + 10) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar15 + 0x54) = 0;
      }
      else {
        FUN_1417367c6(puVar15 + 9,iVar2,0);
        memcpy((void *)puVar15[9],pvVar3,(longlong)iVar2 << 4);
      }
      *(undefined2 *)(puVar15 + 0xc) = *(undefined2 *)(param_4 + 0x12);
      puVar15[0xb] = *(undefined8 *)(param_4 + 0x10);
      puVar15[0xe] = FUN_142b1161c;
      puVar15[0x10] = 0;
      puVar15[0x12] = &PTR_LAB_14a162240;
      puVar15[0x13] = lVar17;
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        UNLOCK();
        uVar18 = local_58;
      }
      puVar15[0x14] = uVar18;
    }
    else {
      *puVar15 = &PTR_FUN_14a162260;
      puVar15[1] = 0;
      FUN_147083266(puVar15 + 2,lVar19,param_4,local_88);
    }
    lVar17 = *param_3;
    puVar15[0x16] = lVar17;
  }
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar16 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar16 = &local_68;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0c94e FUN_142b0c94e body=370 status=ok
// SIG undefined FUN_142b0c94e(void)

longlong FUN_142b0c94e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (undefined8 *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  local_80 = 0xffffffffffffffff;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  cVar2 = FUN_1401154ee();
  if (cVar2 == '\0') {
    FUN_140056680(local_98,param_2);
    cVar2 = FUN_142b096aa(param_1,local_98);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
                        (*(longlong **)(param_1 + 8),param_2,param_3);
      goto LAB_142b0ca6d;
    }
  }
  else {
    lVar3 = FUN_142b0c5e6(param_1);
    if (lVar3 != 0) {
      puVar6 = &DAT_149dfb77a;
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(local_88 + 4) != 0) {
        puVar5 = (undefined2 *)local_88[3];
      }
      FUN_142b1289a(&DAT_14c872cc8,puVar5,param_2);
      uVar4 = FUN_14170a3b6();
      if (*(int *)(local_88 + 4) != 0) {
        puVar6 = (undefined2 *)local_88[3];
      }
      FUN_1408be1b6(uVar4,puVar6,param_2);
      goto LAB_142b0ca6d;
    }
  }
  lVar3 = 0;
LAB_142b0ca6d:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_88 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_88)(local_88,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0cac2 FUN_142b0cac2 body=83 status=ok
// SIG undefined FUN_142b0cac2(void)

undefined8 FUN_142b0cac2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1401154ee(param_1,param_2,0,0);
  if (cVar1 != '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b0cb12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 142b0cb16 FUN_142b0cb16 body=458 status=ok
// SIG undefined FUN_142b0cb16(void)

uint FUN_142b0cb16(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  uStack_58 = 0;
  local_90 = 0xffffffffffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_98 = (undefined8 *)0x0;
  cVar2 = FUN_1401154ee(0,param_3);
  plVar4 = *(longlong **)(param_1 + 8);
  if (cVar2 == '\0') {
    local_a8 = param_5;
    uVar3 = (**(code **)(*plVar4 + 0x1e0))(plVar4,param_2,param_3,param_4);
  }
  else {
    uVar3 = 0;
    plVar4 = (longlong *)
             (**(code **)(*plVar4 + 0x100))
                       (plVar4,param_2,0,
                        (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffff01);
    plVar5 = (longlong *)FUN_142b0c5e6(param_1);
    if (plVar5 != (longlong *)0x0 && plVar4 != (longlong *)0x0) {
      uVar6 = FUN_14001cc68(0x10000,0);
      uVar7 = (**(code **)(*plVar5 + 0x50))(plVar5);
      do {
        uVar3 = (uint)((longlong)uVar7 < 1);
        if ((longlong)uVar7 < 1) break;
        uVar8 = uVar7;
        if (0xffff < uVar7) {
          uVar8 = 0x10000;
        }
        cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar6,uVar8);
        if (cVar2 == '\0') break;
        cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,uVar6,uVar8);
        if (cVar2 == '\0') {
          uVar8 = 0;
        }
        uVar7 = uVar7 - uVar8;
      } while (cVar2 != '\0');
      FUN_1400020a8(uVar6);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)*plVar5)(plVar5,1);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)*plVar4)(plVar4,1);
    }
  }
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0cce2 FUN_142b0cce2 body=834 status=ok
// SIG undefined FUN_142b0cce2(void)

longlong * FUN_142b0cce2(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x10;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + -0x10 + lVar4);
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + -0x10 + lVar4) = 0;
    iVar10 = *(int *)(param_1 + 0x40);
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar8 = (longlong)iVar10 * 0x10;
    puVar1 = *(undefined8 **)(lVar4 + -0x10 + lVar8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      iVar3 = *(int *)(param_1 + 0x40) - iVar10;
      if (iVar3 != 0) {
        memmove((void *)(lVar8 + -0x10 + lVar4),(void *)(lVar4 + lVar8),(longlong)iVar3 << 4);
        iVar10 = *(int *)(param_1 + 0x40);
      }
    }
    *(int *)(param_1 + 0x40) = iVar10 + -1;
    FUN_141737810(param_1 + 0x38);
    goto LAB_142b0cf70;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x18);
  }
  if (*(char *)(param_1 + 0x210) == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"signedpak");
    if (cVar2 != '\0') goto LAB_142b0cdcf;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"signed");
    if (cVar2 != '\0') goto LAB_142b0cdcf;
LAB_142b0cdd6:
    if (param_3 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_14054d1d4();
      lVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,0);
    }
    else {
      plVar5 = (longlong *)(**(code **)(*param_3 + 0xe8))(param_3,puVar9,0);
      lVar7 = 0;
      if (plVar5 == (longlong *)0x0) goto LAB_142b0cf70;
      lVar4 = FUN_14001cc68(0xe8,0x10);
      uVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
      local_60 = 0;
      local_68 = 0x400;
      FUN_140996eb8(lVar4,plVar5,puVar9,uVar6);
    }
    if (lVar4 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x30);
      lVar7 = lVar4;
      if (lVar8 != 0) {
        lVar7 = FUN_14001cc68(0xd8,0x10);
        FUN_147086046(lVar7,lVar4,lVar8);
      }
      goto LAB_142b0cf70;
    }
  }
  else {
LAB_142b0cdcf:
    if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_142b0cdd6;
    if (param_3 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_14054d1d4();
      lVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,puVar9,0);
LAB_142b0cf0f:
      if (lVar4 == 0) goto LAB_142b0cf51;
      lVar7 = FUN_14001cc68(0x200,0x40);
      local_50 = lVar4;
      FUN_147085a7e(lVar7,&local_50,puVar9);
      plVar5 = *(longlong **)(param_1 + 0x30);
      *(longlong *)(param_1 + 0x30) = lVar7;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,1);
        goto LAB_142b0cf51;
      }
    }
    else {
      plVar5 = (longlong *)(**(code **)(*param_3 + 0xe8))(param_3,puVar9,0);
      if (plVar5 != (longlong *)0x0) {
        lVar4 = FUN_14001cc68(0xe8,0x10);
        uVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
        local_60 = 0;
        local_68 = 0x400;
        FUN_140996eb8(lVar4,plVar5,puVar9,uVar6);
        goto LAB_142b0cf0f;
      }
LAB_142b0cf51:
      lVar7 = *(longlong *)(param_1 + 0x30);
    }
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 8) != 0)) &&
       (0 < *(int *)(*(longlong *)(lVar7 + 8) + 0x48))) goto LAB_142b0cdd6;
  }
  lVar7 = 0;
LAB_142b0cf70:
  LOCK();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *param_2 = lVar7;
  param_2[1] = param_1;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0d026 FUN_142b0d026 body=3745 status=ok
// SIG undefined FUN_142b0d026(void)

ulonglong FUN_142b0d026(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined **ppuVar8;
  code *pcVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 unaff_RBP;
  undefined7 uVar16;
  ulonglong uVar15;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_328 [40];
  undefined **local_300 [5];
  byte local_2d8;
  byte local_2d7;
  longlong *local_2a8;
  longlong local_288;
  undefined8 local_270;
  void **local_268;
  undefined8 local_260;
  void *local_258;
  undefined8 uStack_250;
  undefined **local_240 [5];
  byte local_218;
  byte local_217;
  longlong *local_1e8;
  longlong local_1c8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  uint local_184;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  undefined **local_160;
  undefined **local_158;
  byte local_138;
  byte local_137;
  byte local_136;
  longlong *local_108;
  longlong local_e8;
  undefined ***local_d0;
  void **local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *(undefined4 *)(param_1 + 0x212) = 0;
  uVar13 = *(ulonglong *)(param_1 + 0x80);
  uVar15 = *(ulonglong *)(param_1 + 0x88);
  if (-1 < (longlong)(uVar13 | uVar15)) {
    uVar3 = uVar15 + uVar13;
    bVar21 = -1 < (longlong)((uVar3 ^ uVar13) & (uVar3 ^ uVar15));
    uVar13 = 0;
    if (bVar21) {
      uVar13 = uVar3;
    }
    if (((longlong)uVar13 <= *(longlong *)(param_1 + 0x208) && bVar21) &&
        (uVar15 & 0xffffffff80000000) == 0) {
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      (**(code **)(*param_2 + 0x1a0))(param_2);
      uVar13 = *(ulonglong *)(param_1 + 0x88);
      uVar18 = (uint)uVar13;
      if ((int)uVar18 < 1) {
        if ((int)uVar18 < 0) goto LAB_142b0de64;
        pvVar12 = (void *)0x0;
      }
      else {
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar18);
        FUN_1447403be(&local_b8);
        memset(local_b8,0,(ulonglong)(uVar18 & 0x7fffffff));
        uVar13 = *(ulonglong *)(param_1 + 0x88);
        pvVar12 = local_b8;
      }
      (**(code **)(*param_2 + 0x170))(param_2,pvVar12,uVar13);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      cVar6 = FUN_141736622(param_1,&local_b8,param_1 + 0x90);
      plVar14 = (longlong *)0x0;
      if (cVar6 != '\0') {
        memset(&local_160,0,0x90);
        FUN_144869430(&local_160);
        local_d0 = (undefined ***)0x0;
        local_160 = &PTR_FUN_149e1e050;
        local_c0 = 0x7fffffffffffffff;
        local_138 = local_138 | 1;
        local_137 = local_137 & 0xfe;
        *(undefined4 *)(param_1 + 0x1f8) = 0;
        plVar11 = (longlong *)(param_1 + 200);
        local_c8 = &local_b8;
        FUN_14021219d(&local_160,plVar11);
        uVar18 = *(int *)(param_1 + 0xd0) - 1;
        if (*(int *)(param_1 + 0xd0) == 0) {
          uVar18 = 0;
        }
        if ((int)uVar18 < 0x10000) {
          if ((0 < (int)uVar18) && (*(short *)(*plVar11 + -2 + (ulonglong)uVar18 * 2) != 0x2f)) {
            FUN_1400020e8(plVar11,&DAT_149e065c6,1);
          }
          piVar2 = (int *)(param_1 + 0x1f8);
          if (local_158[1] < (int *)((longlong)*local_158 + 4)) {
            if ((local_136 & 2) == 0) {
              (*(code *)local_160[0x2e])(&local_160,piVar2,4);
            }
            else {
              FUN_14572512c(&local_160,piVar2);
            }
          }
          else {
            *piVar2 = *(int *)*local_158;
            *local_158 = *local_158 + 4;
          }
          if (-1 < *piVar2) {
            if (local_158[1] < (undefined8 *)((longlong)*local_158 + 8)) {
              if ((local_136 & 2) == 0) {
                (*(code *)local_160[0x2e])(&local_160,(undefined8 *)(param_1 + 0x1f0),8);
              }
              else {
                FUN_146821949(&local_160);
              }
            }
            else {
              *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)*local_158;
              *local_158 = *local_158 + 8;
            }
            local_168 = 0xffffffffffffffff;
            local_170 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            puVar1 = (uint *)((longlong)*local_158 + 4);
            if (local_158[1] < puVar1) {
              local_240[0] = (undefined **)((ulonglong)local_240[0] & 0xffffffff00000000);
              (*(code *)local_160[0x2e])(&local_160,local_240,4);
              uVar18 = (uint)local_240[0];
              if (1 < (uint)local_240[0]) {
                FUN_14572541c(&local_160);
                uVar18 = (uint)local_240[0];
              }
            }
            else {
              uVar18 = *(uint *)*local_158;
              *local_158 = (undefined *)puVar1;
            }
            if (uVar18 == 0) {
              bVar21 = false;
              uVar16 = 0;
            }
            else {
              FUN_1408383eb(&local_160,&local_168);
              FUN_1408383eb(&local_160,&local_170);
              pcVar9 = (code *)local_160[0x2e];
              if (pcVar9 == FUN_14473a572) {
                pcVar9 = (code *)(*local_d0)[0x2e];
                if (pcVar9 == FUN_14004e24c) {
                  FUN_14004e24c(local_d0,&local_88,0x14);
                }
                else if (pcVar9 == FUN_1447395b8) {
                  ppuVar8 = local_d0[0x13];
                  local_78 = *(undefined4 *)((longlong)(local_d0[0x12] + 2) + (longlong)ppuVar8);
                  puVar4 = (undefined8 *)((longlong)local_d0[0x12] + (longlong)ppuVar8);
                  local_88 = *puVar4;
                  uStack_80 = puVar4[1];
                  local_d0[0x13] = (undefined **)((longlong)ppuVar8 + 0x14);
                }
                else {
                  pppuVar10 = local_d0;
                  if (pcVar9 != FUN_144a6950e) goto LAB_142b0d514;
                  if ((*(byte *)((longlong)local_d0 + 0x29) & 2) == 0) {
                    puVar4 = (undefined8 *)*local_d0[1];
                    local_78 = *(undefined4 *)(puVar4 + 2);
                    local_88 = *puVar4;
                    uStack_80 = puVar4[1];
                    ppuVar8 = local_d0[1];
                    goto LAB_142b0d4df;
                  }
                }
              }
              else if (pcVar9 == FUN_140090aac) {
                FUN_140090aac(&local_160,&local_88,0x14);
              }
              else if (pcVar9 == FUN_144a6950e) {
                if ((local_137 & 2) == 0) {
                  puVar4 = (undefined8 *)*local_158;
                  local_88 = *puVar4;
                  uStack_80 = puVar4[1];
                  local_78 = *(undefined4 *)(puVar4 + 2);
                  ppuVar8 = local_158;
LAB_142b0d4df:
                  *ppuVar8 = *ppuVar8 + 0x14;
                }
              }
              else {
                pppuVar10 = &local_160;
LAB_142b0d514:
                (*pcVar9)(pppuVar10,&local_88,0x14);
              }
              bVar21 = local_168 != 0xffffffffffffffff;
              uVar16 = (undefined7)((ulonglong)unaff_RBP >> 8);
            }
            local_178 = 0xffffffffffffffff;
            local_180 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            puVar1 = (uint *)((longlong)*local_158 + 4);
            if (local_158[1] < puVar1) {
              local_240[0] = (undefined **)((ulonglong)local_240[0] & 0xffffffff00000000);
              (*(code *)local_160[0x2e])(&local_160,local_240,4);
              uVar18 = (uint)local_240[0];
              if (1 < (uint)local_240[0]) {
                FUN_14572541c(&local_160);
                uVar18 = (uint)local_240[0];
              }
            }
            else {
              uVar18 = *(uint *)*local_158;
              *local_158 = (undefined *)puVar1;
            }
            if (uVar18 == 0) {
              bVar20 = false;
            }
            else {
              FUN_1408383eb(&local_160,&local_178);
              FUN_1408383eb(&local_160,&local_180);
              pcVar9 = (code *)local_160[0x2e];
              if (pcVar9 == FUN_14473a572) {
                pcVar9 = (code *)(*local_d0)[0x2e];
                if (pcVar9 == FUN_14004e24c) {
                  FUN_14004e24c(local_d0,&local_a8,0x14);
                }
                else if (pcVar9 == FUN_1447395b8) {
                  ppuVar8 = local_d0[0x13];
                  local_98 = *(undefined4 *)((longlong)(local_d0[0x12] + 2) + (longlong)ppuVar8);
                  puVar4 = (undefined8 *)((longlong)local_d0[0x12] + (longlong)ppuVar8);
                  local_a8 = *puVar4;
                  uStack_a0 = puVar4[1];
                  local_d0[0x13] = (undefined **)((longlong)ppuVar8 + 0x14);
                }
                else {
                  pppuVar10 = local_d0;
                  if (pcVar9 != FUN_144a6950e) goto LAB_142b0d72e;
                  if ((*(byte *)((longlong)local_d0 + 0x29) & 2) == 0) {
                    puVar4 = (undefined8 *)*local_d0[1];
                    local_98 = *(undefined4 *)(puVar4 + 2);
                    local_a8 = *puVar4;
                    uStack_a0 = puVar4[1];
                    ppuVar8 = local_d0[1];
                    goto LAB_142b0d720;
                  }
                }
              }
              else if (pcVar9 == FUN_140090aac) {
                FUN_140090aac(&local_160,&local_a8,0x14);
              }
              else if (pcVar9 == FUN_144a6950e) {
                if ((local_137 & 2) == 0) {
                  puVar4 = (undefined8 *)*local_158;
                  local_a8 = *puVar4;
                  uStack_a0 = puVar4[1];
                  local_98 = *(undefined4 *)(puVar4 + 2);
                  ppuVar8 = local_158;
LAB_142b0d720:
                  *ppuVar8 = *ppuVar8 + 0x14;
                }
              }
              else {
                pppuVar10 = &local_160;
LAB_142b0d72e:
                (*pcVar9)(pppuVar10,&local_a8,0x14);
              }
              bVar20 = local_178 != 0xffffffffffffffff;
            }
            FUN_140077068(&local_160,param_1 + 0x1e0);
            local_184 = 0;
            puVar1 = (uint *)((longlong)*local_158 + 4);
            if (local_158[1] < puVar1) {
              if ((local_136 & 2) == 0) {
                (*(code *)local_160[0x2e])(&local_160,&local_184,4);
              }
              else {
                FUN_14572512c(&local_160);
              }
            }
            else {
              local_184 = *(uint *)*local_158;
              *local_158 = (undefined *)puVar1;
            }
            uVar13 = (ulonglong)local_184;
            if (-1 < (int)local_184) {
              plVar14 = (longlong *)(param_1 + 0xd8);
              uVar18 = *(uint *)(param_1 + 0xe0);
              if ((int)uVar18 < (int)local_184) {
                *(uint *)(param_1 + 0xe0) = local_184;
                uVar13 = (ulonglong)(local_184 - uVar18);
                if (*(int *)(param_1 + 0xe4) - uVar18 < local_184 - uVar18) {
                  FUN_147083b10(plVar14,uVar18);
                }
                FUN_147083ad8((longlong)(int)uVar18 * 0x50 + *plVar14);
              }
              else if (local_184 < uVar18) {
                FUN_147083ba4(plVar14,uVar13,uVar18 - local_184);
                FUN_147083c0a(plVar14);
              }
              if (0 < (int)local_184) {
                uVar13 = *(ulonglong *)(param_1 + 0xd8);
                lVar19 = 0;
                do {
                  FUN_14707c7bc(uVar13,&local_160,*(undefined4 *)(param_1 + 0x7c));
                  lVar19 = lVar19 + 1;
                  uVar13 = uVar13 + 0x50;
                } while (lVar19 < (int)local_184);
              }
              if (bVar21) {
                if (bVar20) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9a0208) &&
                     (FUN_144b3d300(&DAT_14c9a0208), DAT_14c9a0208 == -1)) {
                    FUN_145ff0108();
                    _Init_thread_footer(&DAT_14c9a0208);
                  }
                  uVar15 = CONCAT71(uVar16,DAT_14c9a0201);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9a0208) &&
                     (FUN_144b3d300(&DAT_14c9a0208), DAT_14c9a0208 == -1)) {
                    FUN_145ff0108();
                    _Init_thread_footer(&DAT_14c9a0208);
                  }
                  plVar14 = (longlong *)(uVar15 & 0xffffffff ^ 1);
                  if (DAT_14c9a0201 == '\0') {
                    cVar6 = DAT_14c9a0203;
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14c9a0208) &&
                       (FUN_144b3d300(&DAT_14c9a0208), cVar6 = DAT_14c9a0203, DAT_14c9a0208 == -1))
                    {
                      FUN_145ff0108();
                      _Init_thread_footer(&DAT_14c9a0208);
                      cVar6 = DAT_14c9a0203;
                    }
                  }
                  else {
                    cVar6 = '\x01';
                  }
                }
                else {
                  plVar14 = (longlong *)CONCAT71((int7)(uVar13 >> 8),1);
                  uVar15 = 0;
                  cVar6 = '\0';
                }
              }
              else {
                uVar15 = 1;
                plVar14 = (longlong *)0x0;
                cVar6 = '\x01';
                if (!bVar20) goto LAB_142b0db0a;
              }
              local_198 = 0;
              uStack_190 = 0;
              memset(local_240,0,0x90);
              FUN_144869430(local_240);
              local_1b0 = 0;
              local_240[0] = &PTR_FUN_149e1e050;
              local_1a0 = 0x7fffffffffffffff;
              local_218 = local_218 | 1;
              local_217 = local_217 & 0xfe;
              local_1a8 = &local_198;
              if ((char)plVar14 == '\0') {
LAB_142b0da83:
                if (cVar6 != '\0') {
                  if (-1 < (longlong)(local_178 | local_180)) {
                    plVar11 = (longlong *)(local_180 + local_178);
                    plVar14 = (longlong *)0x0;
                    bVar21 = (longlong)
                             (((ulonglong)plVar11 ^ local_178) & ((ulonglong)plVar11 ^ local_180)) <
                             0;
                    if (bVar21) {
                      plVar11 = plVar14;
                    }
                    if ((0x7fffffff < local_180 || bVar21) ||
                        *(longlong *)(param_1 + 0x208) < (longlong)plVar11) goto LAB_142b0dac7;
                    local_258 = (void *)0x0;
                    uStack_250 = 0;
                    (**(code **)(*param_2 + 0x1a0))(param_2);
                    uVar18 = (uint)local_180;
                    if ((int)uVar18 < 1) {
                      uVar13 = local_180;
                      if ((int)uVar18 < 0) {
LAB_142b0de64:
                    /* WARNING: Subroutine does not return */
                        FUN_1456afac4(uVar13 & 0xffffffff);
                      }
                    }
                    else {
                      uStack_250 = CONCAT44(uStack_250._4_4_,uVar18);
                      FUN_1447403be(&local_258);
                      memset(local_258,0,(ulonglong)(uVar18 & 0x7fffffff));
                    }
                    (**(code **)(*param_2 + 0x170))(param_2,local_258,local_180);
                    cVar6 = FUN_141736622(param_1,&local_258,&local_a8,&local_68);
                    if (cVar6 != '\0') {
                      memset(local_300,0,0x90);
                      FUN_144869430(local_300);
                      local_270 = 0;
                      local_300[0] = &PTR_FUN_149e1e050;
                      local_260 = 0x7fffffffffffffff;
                      local_2d8 = local_2d8 | 1;
                      local_2d7 = local_2d7 & 0xfe;
                      local_268 = &local_258;
                      FUN_140211c8c(local_300,param_1 + 0xe8);
                      *(undefined1 *)(param_1 + 0x213) = 1;
                      bVar21 = (char)uVar15 == '\0';
                      if (bVar21) {
                        FUN_140211c8c(local_240,param_1 + 0x138);
                        DAT_14c9a0200 = 1;
                      }
                      plVar14 = (longlong *)0x0;
                      *(bool *)(param_1 + 0x214) = bVar21;
                      local_300[0] = &PTR__purecall_149e35f70;
                      if (local_2a8 != (longlong *)0x0) {
                        if (*local_2a8 != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1400020a8(local_2a8);
                      }
                      if (local_288 != 0) {
                        if (*(longlong *)(local_288 + 0x40) != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1400020a8(local_288);
                      }
                      if (local_258 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                      goto LAB_142b0dac5;
                    }
                    if (local_258 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  goto LAB_142b0daa4;
                }
                FUN_140211c8c(local_240,param_1 + 0xe8);
                *(undefined2 *)(param_1 + 0x213) = 0;
LAB_142b0dac5:
                plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
              }
              else {
                if (-1 < (longlong)(local_168 | local_170)) {
                  plVar11 = (longlong *)(local_170 + local_168);
                  plVar14 = (longlong *)0x0;
                  bVar21 = (longlong)
                           (((ulonglong)plVar11 ^ local_168) & ((ulonglong)plVar11 ^ local_170)) < 0
                  ;
                  if (bVar21) {
                    plVar11 = plVar14;
                  }
                  if ((0x7fffffff < local_170 || bVar21) ||
                      *(longlong *)(param_1 + 0x208) < (longlong)plVar11) goto LAB_142b0dac7;
                  (**(code **)(*param_2 + 0x1a0))(param_2);
                  iVar5 = (int)uStack_190;
                  lVar19 = (longlong)(int)uStack_190;
                  iVar17 = (int)local_170;
                  if ((int)uStack_190 < iVar17) {
                    uStack_190 = CONCAT44(uStack_190._4_4_,iVar17);
                    uVar18 = iVar17 - iVar5;
                    if ((uint)(uStack_190._4_4_ - iVar5) < uVar18) {
                      FUN_1447403be(&local_198);
                    }
                    memset((void *)(lVar19 + local_198),0,(longlong)(int)uVar18);
                  }
                  else {
                    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(local_170 & 0xffffffff);
                    }
                    if (iVar17 < (int)uStack_190) {
                      uStack_190 = CONCAT44(uStack_190._4_4_,iVar17);
                      FUN_140b3f66e();
                    }
                  }
                  plVar14 = &local_198;
                  (**(code **)(*param_2 + 0x170))(param_2,local_198,local_170);
                  cVar7 = FUN_141736622(param_1,plVar14,&local_88,&local_68);
                  if (cVar7 != '\0') {
                    FUN_147083cb8(local_240,param_1 + 400);
                    *(undefined1 *)(param_1 + 0x212) = 1;
                    goto LAB_142b0da83;
                  }
                }
LAB_142b0daa4:
                plVar14 = (longlong *)0x0;
              }
LAB_142b0dac7:
              local_240[0] = &PTR__purecall_149e35f70;
              if (local_1e8 != (longlong *)0x0) {
                if (*local_1e8 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(local_1e8);
              }
              if (local_1c8 != 0) {
                if (*(longlong *)(local_1c8 + 0x40) != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(local_1c8);
              }
              if (local_198 != 0) {
                FUN_1400020a8();
              }
              goto LAB_142b0db0a;
            }
          }
          plVar14 = (longlong *)0x0;
        }
LAB_142b0db0a:
        local_160 = &PTR__purecall_149e35f70;
        if (local_108 != (longlong *)0x0) {
          if (*local_108 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_108);
        }
        if (local_e8 != 0) {
          if (*(longlong *)(local_e8 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_e8);
        }
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_142b0d11f;
    }
  }
  FUN_140033559(".\\Runtime/PakFile/Private/PakFile.cpp",0x17c,
                L"Corrupted index offset in pak file.");
  plVar14 = (longlong *)0x0;
LAB_142b0d11f:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar14 & 0xffffffff;
}



// FUNCTION 142b0deca FUN_142b0deca body=1515 status=ok
// SIG undefined FUN_142b0deca(void)

ulonglong FUN_142b0deca(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  bool bVar12;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined4 *local_260;
  undefined4 *local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined8 *local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined **local_210;
  longlong *local_208;
  byte local_1e8;
  byte local_1e7;
  byte local_1e6;
  longlong *local_1b8;
  longlong local_198;
  undefined8 local_180;
  void **local_178;
  undefined8 local_170;
  void *local_168;
  ulonglong uStack_160;
  code *local_158 [2];
  undefined ***local_148;
  undefined **local_138;
  longlong *local_130;
  undefined ***local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8 [7];
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *(undefined4 *)(param_1 + 0x212) = 0;
  uVar10 = *(ulonglong *)(param_1 + 0x80);
  uVar7 = *(ulonglong *)(param_1 + 0x88);
  if (-1 < (longlong)(uVar7 | uVar10)) {
    uVar3 = uVar7 + uVar10;
    uVar8 = (uVar3 ^ uVar7) & (uVar3 ^ uVar10);
    uVar6 = 0;
    if (-1 < (longlong)uVar8) {
      uVar6 = uVar3;
    }
    if (((uVar7 < 0x80000000) && (-1 < (longlong)uVar8)) &&
       ((longlong)uVar6 <= *(longlong *)(param_1 + 0x208))) {
      local_168 = (void *)0x0;
      uStack_160 = 0;
      if (uVar7 != 0) {
        uStack_160 = uVar7 & 0xffffffff;
        FUN_1447403be(&local_168);
        memset(local_168,0,uVar7);
        uVar10 = *(ulonglong *)(param_1 + 0x80);
      }
      (**(code **)(*param_2 + 0x1a0))(param_2,uVar10);
      (**(code **)(*param_2 + 0x170))(param_2,local_168,*(undefined8 *)(param_1 + 0x88));
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      cVar5 = FUN_141736622(param_1,&local_168,param_1 + 0x90);
      uVar10 = 0;
      if (cVar5 != '\0') {
        memset(&local_210,0,0x90);
        FUN_144869430(&local_210);
        local_180 = 0;
        local_210 = &PTR_FUN_149e1e050;
        local_170 = 0x7fffffffffffffff;
        local_1e8 = local_1e8 | 1;
        local_1e7 = local_1e7 & 0xfe;
        *(undefined4 *)(param_1 + 0x1f8) = 0;
        plVar1 = (longlong *)(param_1 + 200);
        local_178 = &local_168;
        FUN_14021219d(&local_210,plVar1);
        if (0x7ffeffff < *(int *)(param_1 + 0xd0) - 0x10001U) {
          piVar2 = (int *)(param_1 + 0x1f8);
          if ((int *)local_208[1] < (int *)*local_208 + 1) {
            if ((local_1e6 & 2) == 0) {
              (*(code *)local_210[0x2e])(&local_210,piVar2,4);
            }
            else {
              FUN_14572512c(&local_210,piVar2);
            }
          }
          else {
            *piVar2 = *(int *)*local_208;
            *local_208 = *local_208 + 4;
          }
          uVar10 = 0;
          if (-1 < *piVar2) {
            uVar7 = (ulonglong)(*(int *)(param_1 + 0xd0) - 1);
            if (*(int *)(param_1 + 0xd0) == 0) {
              uVar7 = uVar10;
            }
            if ((0 < (int)uVar7) && (*(short *)(*plVar1 + -2 + uVar7 * 2) != 0x2f)) {
              FUN_1400020e8(plVar1,&DAT_149e065c6,1);
            }
            local_c8[0] = 0;
            local_c8[1] = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_c8[2] = 0xffffffffffffffff;
            local_c8[3] = 0;
            local_c8[4] = 0;
            local_c8[5] = 0;
            local_c8[6] = 0;
            local_90 = 0;
            local_78 = 0;
            local_70 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_ec = 0xffffffff00000080;
            local_e4 = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_214 = 0;
            local_218 = 0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9a0208) && (FUN_144b3d300(&DAT_14c9a0208), DAT_14c9a0208 == -1))
            {
              FUN_145ff0108();
              _Init_thread_footer(&DAT_14c9a0208);
            }
            bVar4 = DAT_14c9a0201;
            local_240 = 0;
            if (DAT_14c9a0201 == 0) {
              local_240 = param_1 + 400;
            }
            local_220 = *(undefined4 *)(param_1 + 0x7c);
            local_248 = param_1 + 0xe8;
            local_250 = param_1 + 0x1f0;
            if (*(int *)(param_1 + 0x20) == 0) {
              puVar11 = &DAT_149dfb77a;
            }
            else {
              puVar11 = *(undefined2 **)(param_1 + 0x18);
            }
            local_148 = (undefined ***)0x0;
            local_138 = &PTR_LAB_14a162510;
            local_130 = local_c8;
            local_158[0] = FUN_142b12948;
            local_228 = &local_118;
            local_258 = &local_218;
            local_260 = &local_214;
            local_268 = plVar1;
            local_238 = param_1 + 0x1e0;
            local_230 = param_1 + 0xd8;
            local_128 = &local_210;
            local_120 = param_1;
            FUN_14707c9fa(*(undefined4 *)(param_1 + 0x1f8),local_158,puVar11,param_1 + 0x78);
            if (local_158[0] != (code *)0x0) {
              pppuVar9 = local_148;
              if (local_148 == (undefined ***)0x0) {
                pppuVar9 = &local_138;
              }
              (*(code *)(*pppuVar9)[2])();
            }
            if (*(int *)(param_1 + 0xe4) != *(int *)(param_1 + 0xe0)) {
              FUN_1470845b6(param_1 + 0xd8);
            }
            if (*(int *)(param_1 + 0x1ec) != *(int *)(param_1 + 0x1e8)) {
              FUN_144893a1c(param_1 + 0x1e0);
            }
            *(byte *)(param_1 + 0x212) = bVar4 ^ 1;
            *(undefined1 *)(param_1 + 0x213) = 1;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9a0208) && (FUN_144b3d300(&DAT_14c9a0208), DAT_14c9a0208 == -1))
            {
              FUN_145ff0108();
              _Init_thread_footer(&DAT_14c9a0208);
            }
            bVar12 = DAT_14c9a0201 == 0;
            if (bVar12) {
              DAT_14c9a0200 = 1;
            }
            *(bool *)(param_1 + 0x215) = bVar12;
            *(bool *)(param_1 + 0x214) = bVar12;
            local_d0 = 0;
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
            FUN_1468f114a(&local_118);
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
            uVar10 = 1;
          }
        }
        local_210 = &PTR__purecall_149e35f70;
        if (local_1b8 != (longlong *)0x0) {
          if (*local_1b8 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_1b8);
        }
        if (local_198 != 0) {
          if (*(longlong *)(local_198 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_198);
        }
      }
      if (local_168 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_142b0df32;
    }
  }
  FUN_140033559(".\\Runtime/PakFile/Private/PakFile.cpp",0x29f,
                L"Corrupted index offset/size in pak file.");
  uVar10 = 0;
LAB_142b0df32:
  if ((local_50 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 142b0e4bc FUN_142b0e4bc body=144 status=ok
// SIG undefined FUN_142b0e4bc(void)

undefined8 FUN_142b0e4bc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1401154ee(param_1,param_2,0,0);
  uVar2 = 1;
  if (cVar1 == '\0') {
    FUN_140056680(local_38,param_2);
    cVar1 = FUN_142b096aa(param_1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                        (*(longlong **)(param_1 + 8),param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0e54e FUN_142b0e54e body=245 status=ok
// SIG undefined FUN_142b0e54e(void)

undefined8 FUN_142b0e54e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70 [4];
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = 0xffffffffffffffff;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  cVar1 = FUN_1401154ee(0,param_2,0);
  if (cVar1 == '\0') {
    FUN_140056680(local_88,param_2);
    cVar1 = FUN_142b096aa(param_1,local_88);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0xffffffffffffffff;
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                        (*(longlong **)(param_1 + 8),param_2);
    }
  }
  else {
    uVar2 = local_70[local_38._4_4_ != 0];
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0e644 FUN_142b0e644 body=149 status=ok
// SIG undefined FUN_142b0e644(void)

undefined4 FUN_142b0e644(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  cVar1 = FUN_1401154ee(param_1,param_2,0,0);
  if (cVar1 == '\0') {
    FUN_140056680(local_38,param_2);
    cVar1 = FUN_142b096aa(param_1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                        (*(longlong **)(param_1 + 8),param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0e6da FUN_142b0e6da body=147 status=ok
// SIG undefined FUN_142b0e6da(void)

undefined8 FUN_142b0e6da(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1401154ee(param_1,param_2,0,0);
  uVar2 = 1;
  if (cVar1 == '\0') {
    FUN_140056680(local_38,param_2);
    cVar1 = FUN_142b096aa(param_1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))
                        (*(longlong **)(param_1 + 8),param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0e76e FUN_142b0e76e body=165 status=ok
// SIG undefined FUN_142b0e76e(void)

undefined4 FUN_142b0e76e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0;
  cVar1 = FUN_1401154ee(param_1,param_3,0,0);
  if (cVar1 == '\0') {
    FUN_140056680(local_40,param_3);
    cVar1 = FUN_142b096aa(param_1,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))
                        (*(longlong **)(param_1 + 8),param_2,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0e814 FUN_142b0e814 body=152 status=ok
// SIG undefined FUN_142b0e814(void)

undefined4 FUN_142b0e814(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1401154ee(param_1,param_2,0,0);
  if (cVar1 == '\0') {
    FUN_140056680(local_40,param_2);
    cVar1 = FUN_142b096aa(param_1,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      param_3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
                          (*(longlong **)(param_1 + 8),param_2,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0e8ae FUN_142b0e8ae body=213 status=ok
// SIG undefined FUN_142b0e8ae(void)

undefined8 * FUN_142b0e8ae(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)0x0;
  cVar2 = FUN_1401154ee(param_1,param_3,&local_38,0);
  if (cVar2 == '\0') {
    *param_2 = 0;
    FUN_140056680(local_48,param_3);
    cVar2 = FUN_142b096aa(param_1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                (*(longlong **)(param_1 + 8),param_2,param_3);
    }
  }
  else {
    *param_2 = local_38[0x40];
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142b0e984 FUN_142b0e984 body=148 status=ok
// SIG undefined FUN_142b0e984(void)

void FUN_142b0e984(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1401154ee(param_1,param_2,0,0);
  if (cVar1 == '\0') {
    FUN_140056680(local_40,param_2);
    cVar1 = FUN_142b096aa(param_1,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                (*(longlong **)(param_1 + 8),param_2,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0ea1a FUN_142b0ea1a body=213 status=ok
// SIG undefined FUN_142b0ea1a(void)

undefined8 * FUN_142b0ea1a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)0x0;
  cVar2 = FUN_1401154ee(param_1,param_3,&local_38,0);
  if (cVar2 == '\0') {
    *param_2 = 0;
    FUN_140056680(local_48,param_3);
    cVar2 = FUN_142b096aa(param_1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))
                (*(longlong **)(param_1 + 8),param_2,param_3);
    }
  }
  else {
    *param_2 = local_38[0x40];
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142b0eaf0 FUN_142b0eaf0 body=1145 status=ok
// SIG undefined FUN_142b0eaf0(void)

undefined8 * FUN_142b0eaf0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  char local_129;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined2 *local_118;
  int local_110;
  undefined8 *local_108;
  longlong local_100 [5];
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_80 = 0;
  uStack_78 = 0;
  local_b0 = -1;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_108 = (undefined8 *)0x0;
  cVar4 = FUN_1401154ee(0,param_3);
  if (cVar4 == '\0') {
    FUN_140056680(local_100,param_3);
    cVar4 = FUN_142b096aa(param_1,local_100);
    if (local_100[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar4 == '\0') {
      FUN_140056680(param_2,param_3);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,param_3)
      ;
    }
  }
  else {
    FUN_140056680(local_100,param_3);
    FUN_140beea4a(&local_118,local_100);
    if (local_100[0] != 0) {
      FUN_1400020a8();
    }
    puVar3 = local_108;
    local_129 = *(char *)((longlong)local_108 + 0x214);
    if (local_129 == '\x01') {
      AcquireSRWLockShared((PSRWLOCK)(local_108 + 0x31));
    }
    local_120 = puVar3;
    puVar12 = local_118;
    if (local_110 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    local_128 = param_2;
    plVar6 = (longlong *)FUN_14708596c(local_108,puVar12);
    if (plVar6 != (longlong *)0x0) {
      iVar5 = (int)plVar6[5];
      if (iVar5 == 0) {
        uVar18 = 1;
        uVar16 = 0;
        iVar14 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)plVar6[4];
        if ((uint *)plVar6[4] == (uint *)0x0) {
          puVar11 = (uint *)(plVar6 + 2);
        }
        uVar15 = *puVar11;
        if (uVar15 == 0) {
          iVar7 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar7 = iVar5 + -1;
          }
          uVar16 = 0;
          uVar18 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar18 = uVar16;
          }
          iVar14 = 0;
          do {
            if (uVar18 == uVar16) goto LAB_142b0ee81;
            iVar14 = iVar14 + 0x20;
            uVar15 = puVar11[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar16 = 0;
          iVar14 = 0;
        }
        uVar18 = (ulonglong)(-uVar15 & uVar15);
        uVar2 = uVar18 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar7 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar7) {
          iVar7 = iVar5;
        }
      }
      if (iVar7 < iVar5) {
        uVar15 = 0xffffffff;
        do {
          local_d0 = 0;
          uStack_c8 = 0;
          local_100[0] = -1;
          local_100[3] = 0;
          local_100[4] = 0;
          local_100[1] = 0;
          local_100[2] = 0;
          local_d8 = 0;
          local_b8 = 0;
          local_c0 = 0;
          lVar17 = (longlong)iVar7 * 0x20;
          local_138 = local_108 + 0xf;
          FUN_1407fa642(*plVar6 + lVar17 + 0x10,local_100,local_108 + 0x3c,local_108 + 0x1b);
          puVar12 = local_118;
          param_2 = local_128;
          if (local_100[0] == local_b0) {
            lVar13 = *plVar6;
            iVar5 = *(int *)(lVar13 + 8 + lVar17);
            iVar7 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar7 = 0;
            }
            iVar5 = iVar7 + 1 + (uint)((longlong)local_110 == 0);
            *local_128 = 0;
            *(int *)(local_128 + 1) = local_110;
            if (iVar5 == 0 && local_110 == 0) {
              *(undefined4 *)((longlong)local_128 + 0xc) = 0;
            }
            else {
              if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar5 + local_110);
              }
              FUN_1446dd670(local_128,iVar5 + local_110,0);
              if (local_110 != 0) {
                memcpy((void *)*param_2,puVar12,(longlong)local_110 * 2);
              }
            }
            FUN_1401aebe8(param_2,*(undefined8 *)(lVar13 + lVar17),iVar7);
            if (local_d0 != 0) {
              FUN_1400020a8();
            }
            goto LAB_142b0ee91;
          }
          if (local_d0 != 0) {
            FUN_1400020a8();
          }
          uVar15 = uVar15 & ~(uint)uVar18;
          puVar11 = (uint *)plVar6[4];
          if ((uint *)plVar6[4] == (uint *)0x0) {
            puVar11 = (uint *)(plVar6 + 2);
          }
          iVar5 = (int)plVar6[5];
          iVar7 = (int)uVar16;
          lVar17 = (longlong)iVar7;
          uVar8 = puVar11[lVar17] & uVar15;
          if (uVar8 == 0) {
            iVar9 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar9 = iVar5 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar13 = 0;
            while( true ) {
              iVar14 = iVar14 + 0x20;
              uVar8 = puVar11[lVar17 + lVar13 + 1];
              if (uVar8 != 0) break;
              lVar13 = lVar13 + 1;
              if (iVar10 - lVar17 == lVar13) goto LAB_142b0ee81;
            }
            uVar16 = (ulonglong)(iVar7 + (int)lVar13 + 1);
            uVar15 = 0xffffffff;
          }
          uVar18 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar18 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar7 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar5);
      }
    }
LAB_142b0ee81:
    param_2 = local_128;
    FUN_140056680(local_128,param_3);
LAB_142b0ee91:
    if (local_129 != '\0') {
      ReleaseSRWLockShared((PSRWLOCK)(local_120 + 0x31));
    }
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_108 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_108 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_108)(local_108,1);
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0ef6c FUN_142b0ef6c body=376 status=ok
// SIG undefined FUN_142b0ef6c(void)

void FUN_142b0ef6c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  FUN_1401154ee(param_1,param_2,&local_50,0);
  FUN_1401154ee(param_1,param_3,&local_58,0);
  if (local_50 == (undefined8 *)0x0 && local_58 == (undefined8 *)0x0) {
    FUN_140056680(local_68,param_2);
    cVar2 = FUN_142b096aa(param_1,local_68);
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      FUN_140056680(local_78,param_3);
      cVar2 = FUN_142b096aa(param_1,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') {
      local_88 = param_5;
      (**(code **)(**(longlong **)(param_1 + 8) + 400))
                (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
      goto LAB_142b0f089;
    }
    uVar3 = 0;
    *param_4 = 0;
  }
  else {
    if (local_50 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = local_50[0x40];
    }
    *param_4 = uVar3;
    if (local_58 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = local_58[0x40];
    }
  }
  *param_5 = uVar3;
LAB_142b0f089:
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_58 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_58)(local_58,1);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0f0fc FUN_142b0f0fc body=191 status=ok
// SIG undefined FUN_142b0f0fc(void)

ulonglong FUN_142b0f0fc(longlong param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0xb0);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  if (iVar1 < 1) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    uVar3 = 0;
    do {
      lVar6 = 0x74;
      do {
        iVar2 = *(int *)((ulonglong)uVar3 * 0x98 + *(longlong *)(param_1 + 0xa8) + lVar6);
        if (lVar6 == 0x38) break;
        lVar6 = lVar6 + -0xc;
      } while (iVar2 == 0);
      if (iVar2 != 0) {
        uVar4 = 0;
        goto LAB_142b0f1a0;
      }
      uVar3 = uVar3 + 1;
    } while ((int)(uint)uVar3 < iVar1);
    uVar3 = 0;
    do {
      lVar6 = 0x78;
      do {
        iVar2 = *(int *)((ulonglong)uVar3 * 0x98 + *(longlong *)(param_1 + 0xa8) + lVar6);
        if (lVar6 == 0x3c) break;
        lVar6 = lVar6 + -0xc;
      } while (iVar2 == 0);
      if (iVar2 != 0) break;
      uVar3 = uVar3 + 1;
    } while ((int)(uint)uVar3 < iVar1);
    uVar4 = CONCAT71(uVar5,iVar2 == 0);
  }
LAB_142b0f1a0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar4 & 0xffffffff;
}



// FUNCTION 142b0f1bc FUN_142b0f1bc body=731 status=ok
// SIG undefined FUN_142b0f1bc(void)

void FUN_142b0f1bc(longlong param_1,byte param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  code **local_98;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_1 + 0xe0;
  lVar6 = *(longlong *)(param_1 + 0xa8);
  lVar4 = *(longlong *)(param_1 + 0xe0);
  lVar9 = (longlong)(int)(param_4 & ~*(uint *)(param_1 + 0x104)) * 0x30;
  lVar8 = lVar4 + lVar9;
  uVar5 = *(ulonglong *)(lVar4 + lVar9);
  lVar7 = (uVar5 >> 0x30) * 0x98;
  lVar3 = lVar6 + lVar7;
  lVar2 = (longlong)(int)(~*(uint *)(param_1 + 0x104) & *(uint *)(lVar4 + 0x1c + lVar9)) * 0x30;
  local_b8 = *(longlong *)(lVar4 + 8 + lVar2) + (*(ulonglong *)(lVar4 + lVar2) & 0xffffffffffff) +
             -1;
  local_a8 = *(undefined4 *)(lVar3 + 0x24);
  local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar3 + 0x20));
  local_88 = param_3;
  FUN_142b0f4e8();
  if ((*(int *)(lVar4 + 0x18 + lVar9) != 0 & (param_2 ^ 1)) == 0) {
    FUN_1400020a8(local_88);
    FUN_1403dcd7c(param_1,lVar8);
  }
  else {
    uVar5 = uVar5 & 0xffffffffffff;
    *(undefined8 *)(lVar8 + 0x10) = local_88;
    lVar3 = *(longlong *)(param_1 + 0x40) + *(longlong *)(lVar8 + 8);
    lVar6 = lVar6 + lVar7;
    *(longlong *)(param_1 + 0x40) = lVar3;
    if (*(longlong *)(param_1 + 0x48) < lVar3) {
      lVar4 = lVar3 + 0xffffff;
      if (-1 < lVar3) {
        lVar4 = lVar3;
      }
      *(longlong *)(param_1 + 0x48) = lVar3;
      if (lVar4 >> 0x18 != DAT_14c9a0210) {
        DAT_14c9a0210 = lVar4 >> 0x18;
      }
    }
    *(undefined4 *)(lVar8 + 0x24) = 1;
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar6 + 0x24));
    FUN_1405186d3(lVar6 + 0x80,local_80,*(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar6 + 0x20))
    ;
    local_58 = 0;
    uStack_50 = 0;
    lVar3 = 0x78;
    do {
      if (*(int *)(lVar6 + lVar3) != 0) {
        local_70 = &local_58;
        local_60 = &local_78;
        local_68 = FUN_140170294;
        local_a0 = *(undefined4 *)(lVar6 + 0x24);
        local_a8 = *(undefined4 *)(lVar6 + 0x20);
        local_b0 = *(undefined8 *)(lVar6 + 0x18);
        local_98 = &local_68;
        local_b8 = 0;
        local_78 = param_1;
        FUN_140518bac(lVar6 + lVar3,param_1 + 0xb8,uVar5,*(longlong *)(lVar8 + 8) + (uVar5 - 1));
      }
      lVar4 = local_58;
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0x30);
    lVar8 = (longlong)(int)uStack_50;
    if (lVar8 != 0) {
      lVar3 = 0;
      do {
        uVar1 = *(uint *)(lVar4 + lVar3);
        lVar2 = *(longlong *)(param_1 + 0xb8);
        lVar7 = (longlong)(int)(~*(uint *)(param_1 + 0xdc) & uVar1) * 0x30;
        *(undefined4 *)(lVar2 + 0x2c + lVar7) = 0;
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar6 + 0x24));
        FUN_140518537(lVar6 + 0x34 + (ulonglong)*(byte *)(lVar2 + 0x28 + lVar7) * 0xc,param_1 + 0xb8
                      ,uVar1,*(undefined4 *)(lVar6 + 0x20));
        FUN_142b0f498(param_1,uVar1);
        lVar3 = lVar3 + 4;
      } while (lVar8 * 4 != lVar3);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  FUN_14039dfac(param_1,0,0xffff);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b0f498 FUN_142b0f498 body=80 status=ok
// SIG undefined FUN_142b0f498(void)

void FUN_142b0f498(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xb8);
  lVar3 = (longlong)(int)(~*(uint *)(param_1 + 0xdc) & param_2) * 0x30;
  if (*(int *)(lVar1 + 0x2c + lVar3) == 0) {
    plVar2 = *(longlong **)(lVar1 + lVar3 + 0x10);
    if (((*(longlong *)(lVar1 + lVar3 + 0x18) == plVar2[2]) && (*(uint *)(plVar2 + 3) == param_2))
       && (*(longlong *)(lVar1 + lVar3) == plVar2[1])) {
                    /* WARNING: Could not recover jumptable at 0x000142b0f4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



// FUNCTION 142b0f4e8 FUN_142b0f4e8 body=765 status=ok
// SIG undefined FUN_142b0f4e8(void)

char FUN_142b0f4e8(uint *param_1,longlong *param_2,uint param_3,longlong param_4,longlong param_5,
                  int param_6,int param_7)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (*param_1 == 0) {
    return '\0';
  }
  uVar3 = param_4 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
  uVar7 = param_5 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
  puVar9 = (uint *)((longlong)(int)(*param_1 & ~DAT_14c99ff5c) * 0xc + DAT_14c99ff38);
  if (uVar3 == 0 && uVar7 == 0) {
    puVar4 = puVar9;
    if (param_6 == param_7) {
      uVar8 = *puVar9;
      if (uVar8 == 0) goto LAB_142b0f684;
      lVar10 = *param_2;
      lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
      if (uVar8 != param_3) {
        do {
          lVar11 = lVar5 * 0x30;
          uVar8 = *(uint *)(lVar10 + 0x20 + lVar11);
          if (uVar8 == 0) goto LAB_142b0f684;
          lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
        } while (uVar8 != param_3);
        goto LAB_142b0f660;
      }
      goto LAB_142b0f668;
    }
LAB_142b0f6b4:
    cVar2 = FUN_142b0f4e8(puVar4);
  }
  else {
    if (uVar3 == 0 && uVar7 != 0) {
      uVar8 = puVar9[1];
      if (uVar8 == 0) {
LAB_142b0f684:
        cVar2 = '\0';
        goto LAB_142b0f6b9;
      }
      lVar10 = *param_2;
      lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
      if (uVar8 == param_3) {
        puVar4 = puVar9 + 1;
      }
      else {
        do {
          lVar11 = lVar5 * 0x30;
          uVar8 = *(uint *)(lVar10 + 0x20 + lVar11);
          if (uVar8 == 0) goto LAB_142b0f684;
          lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
        } while (uVar8 != param_3);
LAB_142b0f660:
        puVar4 = (uint *)(lVar10 + lVar11 + 0x20);
      }
    }
    else {
      if (param_6 != param_7) {
        puVar4 = puVar9 + 2;
        goto LAB_142b0f6b4;
      }
      uVar8 = puVar9[2];
      if (uVar8 == 0) goto LAB_142b0f684;
      lVar10 = *param_2;
      lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
      if (uVar8 != param_3) {
        do {
          lVar11 = lVar5 * 0x30;
          uVar8 = *(uint *)(lVar10 + 0x20 + lVar11);
          if (uVar8 == 0) goto LAB_142b0f684;
          lVar5 = (longlong)(int)(uVar8 & ~*(uint *)((longlong)param_2 + 0x24));
        } while (uVar8 != param_3);
        goto LAB_142b0f660;
      }
      puVar4 = puVar9 + 2;
    }
LAB_142b0f668:
    *puVar4 = *(uint *)(lVar10 + 0x20 + lVar5 * 0x30);
    *(undefined4 *)(lVar10 + 0x20 + lVar5 * 0x30) = 0;
    cVar2 = '\x01';
  }
LAB_142b0f6b9:
  iVar1 = DAT_14c99ff50;
  if (cVar2 == '\0') {
    return '\0';
  }
  if (*puVar9 != 0) {
    return cVar2;
  }
  if (puVar9[1] != 0) {
    return cVar2;
  }
  if (puVar9[2] != 0) {
    return cVar2;
  }
  uVar6 = ~DAT_14c99ff5c;
  uVar8 = *param_1;
  lVar10 = (longlong)(int)DAT_14c99ff50;
  DAT_14c99ff50 = DAT_14c99ff50 + 1;
  if (DAT_14c99ff54 < DAT_14c99ff50) {
    FUN_1446f48e2(&DAT_14c99ff48,iVar1);
  }
  *(uint *)(DAT_14c99ff48 + lVar10 * 4) = uVar6 & uVar8;
  if (DAT_14c99ff50 + 1 != DAT_14c99ff40) goto LAB_142b0f7c9;
  DAT_14c99ff40 = 0;
  if (DAT_14c99ff44 != 0) {
    FUN_1412582dc(0);
  }
  DAT_14c99ff50 = 0;
  if (DAT_14c99ff54 == 0) {
LAB_142b0f794:
    uVar8 = DAT_14c99ff40;
    DAT_14c99ff40 = DAT_14c99ff40 + 1;
    if (DAT_14c99ff44 < DAT_14c99ff40) {
      FUN_14629f588(uVar8);
    }
  }
  else {
    FUN_14481578e(&DAT_14c99ff48,0);
    if ((longlong)(int)DAT_14c99ff50 == 0) goto LAB_142b0f794;
    uVar8 = *(uint *)(DAT_14c99ff48 + -4 + (longlong)(int)DAT_14c99ff50 * 4);
    DAT_14c99ff50 = DAT_14c99ff50 - 1;
    FUN_14479f406(&DAT_14c99ff48);
  }
  lVar10 = DAT_14c99ff38;
  *(undefined8 *)(DAT_14c99ff38 + (longlong)(int)uVar8 * 0xc) = 0;
  *(undefined4 *)(lVar10 + 8 + (longlong)(int)uVar8 * 0xc) = 0;
LAB_142b0f7c9:
  *param_1 = 0;
  return '\x01';
}



// FUNCTION 142b0f7f6 FUN_142b0f7f6 body=49 status=ok
// SIG undefined FUN_142b0f7f6(void)

undefined8 FUN_142b0f7f6(undefined8 *param_1,undefined4 *param_2)

{
  FUN_140272d3d(*param_2,*param_1,param_1[1],param_1[2],*(undefined4 *)(param_1 + 3),param_1[4]);
  return 1;
}



// FUNCTION 142b0f828 FUN_142b0f828 body=62 status=ok
// SIG undefined FUN_142b0f828(void)

bool FUN_142b0f828(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)(~*(uint *)(lVar2 + 0x104) & *param_2) * 0x30;
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0xe0) + 0x18 + lVar3);
  if (iVar1 == 0) {
    FUN_1403dcd7c(lVar2,*(longlong *)(lVar2 + 0xe0) + lVar3);
  }
  return iVar1 == 0;
}



// FUNCTION 142b0f866 FUN_142b0f866 body=99 status=ok
// SIG undefined FUN_142b0f866(void)

undefined8 FUN_142b0f866(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*param_1 + 0xe0);
  lVar2 = (longlong)(int)(~*(uint *)(*param_1 + 0x104) & param_2) * 0x30;
  if ((*(int *)(lVar1 + 0x18 + lVar2) == 0) &&
     ((double)DAT_14c9a0070 <= (double)param_1[1] - *(double *)(lVar1 + lVar2 + 0x28))) {
    FUN_1403dcd7c();
    return 1;
  }
  *(undefined1 *)param_1[2] = 0;
  return 0;
}



// FUNCTION 142b0f8ca FUN_142b0f8ca body=62 status=ok
// SIG undefined FUN_142b0f8ca(void)

bool FUN_142b0f8ca(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)(~*(uint *)(lVar2 + 0x104) & *param_2) * 0x30;
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0xe0) + 0x18 + lVar3);
  if (iVar1 == 0) {
    FUN_1403dcd7c(lVar2,*(longlong *)(lVar2 + 0xe0) + lVar3);
  }
  return iVar1 == 0;
}



// FUNCTION 142b0f92a FUN_142b0f92a body=194 status=ok
// SIG undefined FUN_142b0f92a(void)

undefined8
FUN_142b0f92a(uint param_1,longlong *param_2,ulonglong param_3,ulonglong *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 1;
  if (param_1 != 0) {
    do {
      lVar1 = *param_2;
      lVar5 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_1) * 0x30;
      uVar4 = *(ulonglong *)(lVar1 + lVar5) & 0xffffffffffff;
      if ((uVar4 <= *param_4) && (param_3 <= (uVar4 + *(longlong *)(lVar1 + 8 + lVar5)) - 1)) {
        local_4c = param_1;
        cVar2 = (*(code *)*param_5)(param_5[1],&local_4c);
        if (cVar2 == '\0') {
          uVar3 = 0;
          goto LAB_142b0f9c5;
        }
      }
      param_1 = *(uint *)(lVar1 + lVar5 + 0x24);
    } while (param_1 != 0);
    uVar3 = 1;
  }
LAB_142b0f9c5:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0f9ee FUN_142b0f9ee body=236 status=ok
// SIG undefined FUN_142b0f9ee(void)

undefined8 FUN_142b0f9ee(longlong *param_1,uint *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  
  uVar7 = param_1[1];
  lVar2 = *(longlong *)*param_1;
  lVar6 = (longlong)(int)(~*(uint *)(*param_1 + 0x24) & *param_2) * 0x30;
  uVar3 = *(ulonglong *)(lVar2 + lVar6) & 0xffffffffffff;
  uVar10 = (*(longlong *)(lVar2 + 8 + lVar6) + uVar3) - 1;
  if (uVar3 <= uVar7) {
    uVar3 = uVar7;
  }
  if ((ulonglong)param_1[2] < uVar10) {
    uVar10 = param_1[2];
  }
  if (uVar3 <= uVar10) {
    uVar4 = uVar3 - uVar7 >> (*(byte *)(param_1 + 3) & 0x3f);
    uVar10 = uVar10 - uVar7 >> (*(byte *)(param_1 + 3) & 0x3f);
    lVar2 = param_1[4];
    uVar7 = uVar4 >> 6 & 0x3ffffff;
    uVar3 = uVar10 >> 6 & 0x3ffffff;
    bVar9 = (byte)uVar10 & 0x3f;
    uVar10 = -1L << ((byte)uVar4 & 0x3f);
    uVar5 = (uint)uVar7;
    uVar8 = (uint)uVar3;
    if (uVar5 == uVar8) {
      bVar9 = bVar9 ^ 0x3f;
      uVar10 = (uVar10 << bVar9) >> bVar9;
      uVar3 = uVar7;
    }
    else {
      puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
      *puVar1 = *puVar1 | uVar10;
      if (uVar5 + 1 < uVar8) {
        memset((void *)(lVar2 + (uVar4 >> 6 & 0x3ffffff) * 8 + 8),
               (int)CONCAT71((int7)(uVar7 >> 8),0xff),(ulonglong)((uVar8 - uVar5) - 2) * 8 + 8);
      }
      uVar10 = 0xffffffffffffffff >> (~bVar9 & 0x3f);
    }
    puVar1 = (ulonglong *)(lVar2 + uVar3 * 8);
    *puVar1 = *puVar1 | uVar10;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 142b0faf8 FUN_142b0faf8 body=86 status=ok
// SIG undefined FUN_142b0faf8(void)

void FUN_142b0faf8(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_1407faa40(param_1 + 6,0);
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 142b0fb4e FUN_142b0fb4e body=950 status=ok
// SIG undefined FUN_142b0fb4e(void)

undefined8 *
FUN_142b0fb4e(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,longlong param_5
             ,ulonglong param_6)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  undefined4 local_6c;
  LPCRITICAL_SECTION local_68;
  longlong local_60;
  undefined1 local_54 [4];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0x7fffffffffffffff) {
    param_3 = *(longlong *)(param_1 + 0x28) - param_2;
  }
  local_6c = param_4;
  if (*(longlong *)(param_1 + 0x14c) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
      local_a0 = param_2 + *(longlong *)(param_1 + 0x20);
      local_88 = param_6;
      local_90 = CONCAT44(local_90._4_4_,local_6c);
      local_a8 = param_5;
      local_78 = (undefined8 *)0x0;
      local_80 = local_80 & 0xffffffffffffff00;
      local_98 = param_3;
      FUN_1404734aa(puVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x18));
    }
    else {
      puVar4 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
      local_78 = (undefined8 *)(param_1 + 0x160);
      local_a0 = *(longlong *)(param_1 + 0x20);
      local_80 = param_6;
      local_88 = CONCAT44(local_88._4_4_,local_6c);
      local_a8 = param_5;
      local_98 = param_2;
      local_90 = param_3;
      FUN_14707efc6(puVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x18));
    }
    goto LAB_142b0fe78;
  }
  local_68 = (LPCRITICAL_SECTION)(param_1 + 0x120);
  EnterCriticalSection(local_68);
  uVar12 = *(uint *)(param_1 + 0x70);
  uVar3 = param_2 / (longlong)(ulonglong)uVar12;
  puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *puVar4 = &PTR_LAB_149e064f0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x54) = 0;
  *(bool *)((longlong)puVar4 + 0x55) = param_6 != 0;
  if (param_5 == 0) {
LAB_142b0fc41:
    uVar5 = param_6;
  }
  else {
    FUN_14274e1bc(puVar4 + 2,param_5);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)((longlong)puVar4 + 0x54) & 1) == 0) goto LAB_142b0fc41;
  }
  puVar4[1] = uVar5;
  *puVar4 = &PTR_FUN_14a161830;
  puVar4[0xb] = param_1;
  puVar4[0xc] = param_2;
  puVar4[0xd] = param_3;
  puVar4[0xe] = 0;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = local_6c;
  *(undefined2 *)(puVar4 + 0x10) = 1;
  *(undefined1 *)((longlong)puVar4 + 0x82) = 0;
  puVar4[0x15] = 0;
  *(undefined4 *)(puVar4 + 0x16) = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *(undefined8 *)((longlong)puVar4 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0xbc) = 0;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = 0;
  iVar11 = (int)((param_3 + -1 + param_2) / (longlong)(ulonglong)uVar12);
  local_50 = puVar4;
  if (iVar11 < (int)uVar3) {
    FUN_141736b22(param_1 + 0x80,local_54,&local_50);
LAB_142b0fe65:
    FUN_140e64072(puVar4);
  }
  else {
    local_60 = param_1 + 0xe0;
    bVar9 = 0;
    do {
      lVar6 = FUN_140320e50(param_1,uVar3 & 0xffffffff);
      *(int *)(lVar6 + 0x2c) = *(int *)(lVar6 + 0x2c) + 1;
      bVar1 = bVar9;
      if (*(char *)(lVar6 + 0x34) == '\0') {
        puVar7 = (undefined8 *)FUN_140320e50(param_1,uVar3 & 0xffffffff);
        *(undefined1 *)((longlong)puVar7 + 0x34) = 1;
        lVar10 = (longlong)(int)uVar3 * 0x10;
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x60) + 8 + lVar10) -
                *(int *)(*(longlong *)(param_1 + 0x60) + lVar10);
        *(int *)(puVar7 + 4) = iVar2;
        *(int *)((longlong)puVar7 + 0x24) = iVar2;
        if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
          *(uint *)(puVar7 + 4) = iVar2 + 0xfU & 0xfffffff0;
        }
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
        uVar8 = FUN_14001cc68(0xb0,0x10);
        local_a0 = *(longlong *)(param_1 + 0x158) +
                   *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar10);
        local_98 = (longlong)*(int *)(puVar7 + 4);
        local_90 = CONCAT44(local_90._4_4_,local_6c);
        local_a8 = local_60;
        local_80 = CONCAT71(local_80._1_7_,1);
        local_88 = 0;
        local_78 = puVar7;
        FUN_1404734aa(uVar8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x18));
        *puVar7 = uVar8;
        bVar1 = 1;
      }
      bVar13 = *(longlong *)(lVar6 + 0x10) == 0;
      bVar9 = bVar13 | bVar1;
      uVar12 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar12;
    } while (iVar11 + 1U != uVar12);
    FUN_141736b22(param_1 + 0x80,local_54,&local_50);
    if (!(bool)(bVar13 | bVar1)) goto LAB_142b0fe65;
  }
  LeaveCriticalSection(local_68);
LAB_142b0fe78:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0ff4a FUN_142b0ff4a body=282 status=ok
// SIG undefined FUN_142b0ff4a(void)

undefined8 * FUN_142b0ff4a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b0ff23);
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



// FUNCTION 142b10064 FUN_142b10064 body=98 status=ok
// SIG undefined FUN_142b10064(void)

undefined8 * FUN_142b10064(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  *param_1 = &PTR_LAB_149e064f0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  if (param_2 != 0) {
    FUN_14274e1bc(param_1 + 2);
  }
  *param_1 = &PTR_FUN_14a1616e0;
  param_1[1] = param_3;
  FUN_14009bf40(param_1);
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return param_1;
}



// FUNCTION 142b100c8 FUN_142b100c8 body=358 status=ok
// SIG undefined FUN_142b100c8(void)

void FUN_142b100c8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + -5) != '\0') ||
     ((*(char *)(param_1 + 0x4e) == '\0' && ((*(byte *)(param_1 + 0x49) & 1) != 0))))
  goto LAB_142b101d2;
  if (*(longlong *)(param_1 + 0x50) == *(longlong *)(param_1 + 0x20)) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x58) != lVar2) goto LAB_142b1011d;
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
LAB_142b1011d:
    lVar2 = FUN_14001cc68(lVar2,0);
  }
  if (*(char *)(param_1 + -3) == '\0') {
    lVar3 = FUN_14001cc68(*(undefined8 *)(param_1 + 0x58),0);
  }
  else {
    lVar3 = *(longlong *)(param_1 + -0x50);
  }
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar4 = lVar3;
  }
  cVar1 = FUN_14019caaa(DAT_14c9a0260,param_1,lVar4);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + -3) == '\0') {
      FUN_1400020a8(lVar3);
    }
    if (lVar2 == 0) goto LAB_142b101d2;
  }
  else {
    *(longlong *)(param_1 + -0x50) = lVar3;
    if (lVar2 == 0) {
      local_48 = *(undefined4 *)(param_1 + 0x60);
      uStack_44 = *(undefined4 *)(param_1 + 100);
      uStack_40 = *(undefined4 *)(param_1 + 0x68);
      uStack_3c = *(undefined4 *)(param_1 + 0x6c);
      FUN_142b08556(lVar3,*(undefined8 *)(param_1 + 0x58));
      goto LAB_142b101d2;
    }
    local_38 = *(undefined4 *)(param_1 + 0x60);
    uStack_34 = *(undefined4 *)(param_1 + 100);
    uStack_30 = *(undefined4 *)(param_1 + 0x68);
    uStack_2c = *(undefined4 *)(param_1 + 0x6c);
    FUN_142b08556(lVar2,*(undefined8 *)(param_1 + 0x28));
    memcpy(*(void **)(param_1 + -0x50),
           (void *)((*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x20)) + lVar2),
           *(size_t *)(param_1 + 0x58));
  }
  FUN_1400020a8(lVar2);
LAB_142b101d2:
  FUN_14009bf40(param_1 + -0x58);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  *(undefined1 *)(param_1 + -7) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b10230 FUN_142b10230 body=189 status=ok
// SIG undefined FUN_142b10230(void)

void FUN_142b10230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = param_4;
  uVar3 = 0x10001;
  if (0x10001 < param_5) {
    uVar3 = param_5;
  }
  uVar3 = uVar3 - 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if ((longlong)uVar3 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    uVar6 = uVar3;
    do {
      uVar6 = uVar6 * 2;
      iVar2 = iVar2 + 1;
    } while (-1 < (longlong)uVar6);
    *(int *)(param_1 + 4) = iVar2;
  }
  uVar6 = 0x10000;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 >> 1;
    bVar1 = 1 < uVar6;
    uVar6 = uVar6 >> 1;
  } while (bVar1);
  *(undefined4 *)(param_1 + 5) = 0x10;
  iVar5 = iVar2;
  while (uVar6 = uVar3, 1 < uVar4) {
    iVar5 = iVar5 + 1;
    uVar3 = uVar6 >> 1;
    uVar4 = uVar6;
  }
  *(int *)((longlong)param_1 + 0x24) = iVar5;
  param_1[3] = 0xffffffffffffffff >> ((byte)iVar2 & 0x3f);
  return;
}



// FUNCTION 142b102fe FUN_142b102fe body=129 status=ok
// SIG undefined FUN_142b102fe(void)

undefined8 FUN_142b102fe(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = param_1[1];
  lVar2 = *(longlong *)(*param_1 + 0xe0);
  lVar4 = (longlong)(int)(~*(uint *)(*param_1 + 0x104) & *param_2) * 0x30;
  uVar6 = *(ulonglong *)(lVar2 + lVar4) & 0xffffffffffff;
  uVar3 = uVar1;
  if ((longlong)uVar1 < (longlong)uVar6) {
    uVar3 = uVar6;
  }
  lVar7 = *(longlong *)(lVar2 + 8 + lVar4) + uVar6;
  lVar5 = uVar1 + param_1[2];
  if (lVar7 <= (longlong)(uVar1 + param_1[2])) {
    lVar5 = lVar7;
  }
  *(longlong *)param_1[3] = *(longlong *)param_1[3] + (lVar5 - uVar3);
  memcpy((void *)((uVar3 + param_1[4]) - param_1[1]),
         (void *)((*(longlong *)(lVar2 + 0x10 + lVar4) + uVar3) - uVar6),lVar5 - uVar3);
  return 1;
}



// FUNCTION 142b10380 FUN_142b10380 body=143 status=ok
// SIG undefined FUN_142b10380(void)

void FUN_142b10380(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + -5) == '\0') &&
     ((*(char *)(param_1 + 0x4e) != '\0' || ((*(byte *)(param_1 + 0x49) & 1) == 0)))) {
    if (*(char *)(param_1 + -3) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + -0x50);
    }
    else {
      uVar1 = FUN_14001cc68(*(undefined8 *)(param_1 + 0x28),0);
      *(undefined8 *)(param_1 + -0x50) = uVar1;
    }
    FUN_14019caaa(DAT_14c9a0260,param_1,uVar1);
  }
  FUN_14009bf40(param_1 + -0x58);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  *(undefined1 *)(param_1 + -7) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142b10408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  return;
}



// FUNCTION 142b10436 FUN_142b10436 body=57 status=ok
// SIG undefined FUN_142b10436(void)

undefined8 * FUN_142b10436(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1618e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b10470 FUN_142b10470 body=340 status=ok
// SIG undefined FUN_142b10470(void)

undefined8 FUN_142b10470(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != '\0') goto LAB_142b105a2;
  FUN_140056680(&local_48);
  puVar9 = local_48;
  iVar6 = *(int *)(param_1 + 0x20);
  iVar3 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar3 = 0;
  }
  puVar10 = &DAT_149dfb77a;
  if (iVar6 != 0) {
    puVar10 = *(undefined2 **)(param_1 + 0x18);
  }
  iVar6 = local_40 + -1;
  puVar4 = local_48;
  if (local_40 == 0) {
    iVar6 = 0;
    puVar4 = &DAT_149dfb77a;
  }
  cVar5 = FUN_14038a9c4(puVar4,iVar6,puVar10,iVar3);
  if (cVar5 != '\0') {
    plVar7 = (longlong *)FUN_140d57cf8();
    if (plVar7 != (longlong *)0x0) {
      local_38 = local_48;
      local_30 = local_40 + -1;
      if (local_40 == 0) {
        local_30 = 0;
      }
      iVar6 = FUN_140fedc14();
      if ((iVar6 != -1) &&
         (iVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,iVar6), puVar9 = local_48, iVar6 == 1))
      goto LAB_142b10595;
    }
    plVar7 = *(longlong **)(param_1 + 0x10);
    iVar6 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar6 + 1U) {
      FUN_1447a1bd6(plVar7,iVar6);
    }
    puVar9 = local_48;
    lVar2 = *plVar7;
    lVar8 = (longlong)iVar6 * 0x10;
    puVar1 = (undefined8 *)(lVar2 + lVar8);
    *(undefined8 *)(lVar2 + lVar8) = 0;
    *(int *)(lVar2 + 8 + lVar8) = local_40;
    if ((longlong)local_40 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_40,0);
      memcpy((void *)*puVar1,puVar9,(longlong)local_40 * 2);
      puVar9 = local_48;
    }
  }
LAB_142b10595:
  if (puVar9 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar9);
  }
LAB_142b105a2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b105c5 FUN_142b105c5 body=34 status=ok
// SIG undefined FUN_142b105c5(void)

void FUN_142b105c5(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 142b105e8 FUN_142b105e8 body=29 status=ok
// SIG undefined FUN_142b105e8(void)

undefined8 FUN_142b105e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1061a FUN_142b1061a body=93 status=ok
// SIG undefined FUN_142b1061a(void)

void FUN_142b1061a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e065d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b10678 FUN_142b10678 body=93 status=ok
// SIG undefined FUN_142b10678(void)

void FUN_142b10678(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e065d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b106d6 FUN_142b106d6 body=126 status=ok
// SIG undefined FUN_142b106d6(void)

void FUN_142b106d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e065d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a161ad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b10745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b10770 FUN_142b10770 body=38 status=ok
// SIG undefined FUN_142b10770(void)

undefined8 FUN_142b10770(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x18);
  if (*(int *)(puVar1 + 1) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*puVar1;
  }
  (**(code **)(*plVar2 + 0x58))();
  return 1;
}



// FUNCTION 142b10796 FUN_142b10796 body=547 status=ok
// SIG undefined FUN_142b10796(void)

longlong * FUN_142b10796(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142b109ba FUN_142b109ba body=73 status=ok
// SIG undefined FUN_142b109ba(void)

void FUN_142b109ba(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  LOCK();
  DAT_14c9a020c = DAT_14c9a020c + 1;
  UNLOCK();
  FUN_142b08004(lVar1,*(undefined8 *)(param_1 + 0xb0),1);
  LOCK();
  DAT_14c9a020c = DAT_14c9a020c + -1;
  UNLOCK();
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  if (*(int *)(puVar2 + 1) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b109ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))();
  return;
}



// FUNCTION 142b10a04 FUN_142b10a04 body=110 status=ok
// SIG undefined FUN_142b10a04(void)

undefined8 * FUN_142b10a04(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b10a72 FUN_142b10a72 body=282 status=ok
// SIG undefined FUN_142b10a72(void)

undefined8 * FUN_142b10a72(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b0ff23);
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



// FUNCTION 142b10b8c FUN_142b10b8c body=525 status=ok
// SIG undefined FUN_142b10b8c(void)

undefined8 FUN_142b10b8c(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double *pdVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  float fVar5;
  BOOL BVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [40];
  void *local_90;
  longlong local_88;
  ulonglong uStack_80;
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14c75f60c != 0.0) || (NAN(DAT_14c75f60c))) {
    lVar9 = *param_1;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0x38);
    local_88 = 0;
    uStack_80 = 0;
    EnterCriticalSection(lpCriticalSection);
    FUN_140115598(&local_88,lVar9 + 0x10);
    LeaveCriticalSection(lpCriticalSection);
    if ((longlong)(int)uStack_80 == 0) {
      uVar12 = 0;
    }
    else {
      lVar10 = (longlong)(int)uStack_80 * 0x10 + local_88;
      lVar9 = local_88;
      do {
        fVar5 = DAT_14c75f60c;
        lVar2 = *(longlong *)(lVar9 + 8);
        BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
        if (BVar6 != 0) {
          QueryPerformanceCounter(&local_78);
          uVar7 = *(uint *)(lVar2 + 0x40);
          uVar12 = (ulonglong)uVar7 + 1;
          lVar8 = (ulonglong)uVar7 * 0x10 + -8;
          do {
            if ((int)uVar12 + -1 < 1) goto LAB_142b10cd7;
            pvVar3 = *(void **)(lVar2 + 0x38);
            uVar12 = uVar12 - 1;
            pdVar1 = (double *)((longlong)pvVar3 + lVar8);
            lVar8 = lVar8 + -0x10;
          } while (((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - (double)fVar5 <
                   *pdVar1);
          uVar11 = (uint)uVar12;
          local_90 = pvVar3;
          FUN_141119393(pvVar3,uVar12 & 0xffffffff);
          uVar7 = uVar11;
          if (*(uint *)(lVar2 + 0x40) != uVar11) {
            memmove(local_90,(void *)((ulonglong)(uVar11 & 0x7fffffff) * 0x10 + (longlong)local_90),
                    (longlong)(int)(*(uint *)(lVar2 + 0x40) - uVar11) << 4);
            uVar7 = *(uint *)(lVar2 + 0x40);
          }
          *(uint *)(lVar2 + 0x40) = uVar7 - uVar11;
          FUN_141737810((longlong *)(lVar2 + 0x38));
          uVar7 = *(uint *)(lVar2 + 0x40);
LAB_142b10cd7:
          if (((uVar7 == 0) && (*(int *)(lVar2 + 0x48) == 0)) &&
             (plVar4 = *(longlong **)(lVar2 + 0x30), plVar4 != (longlong *)0x0)) {
            *(undefined8 *)(lVar2 + 0x30) = 0;
            (**(code **)(*plVar4 + 0x28))(plVar4,1);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != lVar10);
      uVar12 = uStack_80 & 0xffffffff;
    }
    FUN_14482b2f5(local_88,uVar12);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 142b10da4 FUN_142b10da4 body=12 status=ok
// SIG undefined FUN_142b10da4(void)

void FUN_142b10da4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b10dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b10db0 FUN_142b10db0 body=29 status=ok
// SIG undefined FUN_142b10db0(void)

undefined8 FUN_142b10db0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b10dce FUN_142b10dce body=29 status=ok
// SIG undefined FUN_142b10dce(void)

undefined8 FUN_142b10dce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b10e00 FUN_142b10e00 body=85 status=ok
// SIG undefined FUN_142b10e00(void)

void FUN_142b10e00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161d00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161c90;
  return;
}



// FUNCTION 142b10e56 FUN_142b10e56 body=85 status=ok
// SIG undefined FUN_142b10e56(void)

void FUN_142b10e56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a161d00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a161c90;
  return;
}



// FUNCTION 142b10eac FUN_142b10eac body=118 status=ok
// SIG undefined FUN_142b10eac(void)

void FUN_142b10eac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a161d00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a161c90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b10f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b10f2a FUN_142b10f2a body=19 status=ok
// SIG undefined FUN_142b10f2a(void)

undefined1 FUN_142b10f2a(undefined8 param_1,undefined8 param_2)

{
  FUN_142b10f3e(param_2);
  return 1;
}



// FUNCTION 142b10f3e FUN_142b10f3e body=212 status=ok
// SIG undefined FUN_142b10f3e(void)

void FUN_142b10f3e(undefined8 *param_1)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_1 + 2);
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_48;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar2 * 2);
  }
  local_3c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_38 = *(undefined4 *)(param_1 + 5);
  local_40 = uVar1;
  FUN_14707af8e();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
  FUN_1470823d0(&DAT_14c9a01a0,&local_50);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b11014 FUN_142b11014 body=29 status=ok
// SIG undefined FUN_142b11014(void)

undefined8 FUN_142b11014(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b11046 FUN_142b11046 body=93 status=ok
// SIG undefined FUN_142b11046(void)

void FUN_142b11046(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1620f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a162080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b110a4 FUN_142b110a4 body=93 status=ok
// SIG undefined FUN_142b110a4(void)

void FUN_142b110a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1620f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a162080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b11102 FUN_142b11102 body=126 status=ok
// SIG undefined FUN_142b11102(void)

void FUN_142b11102(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1620f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a162080;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b11171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b11180 FUN_142b11180 body=29 status=ok
// SIG undefined FUN_142b11180(void)

undefined8 FUN_142b11180(longlong param_1,undefined8 param_2)

{
  FUN_142b111f0(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 142b1119e FUN_142b1119e body=80 status=ok
// SIG undefined FUN_142b1119e(void)

undefined8 FUN_142b1119e(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_142b111f0(local_20,param_1 + 0x18);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b111f0 FUN_142b111f0 body=297 status=ok
// SIG undefined FUN_142b111f0(void)

longlong * FUN_142b111f0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *param_2;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x38));
  FUN_140115598(&local_68,lVar7 + 0x10);
  if ((LPCRITICAL_SECTION)(lVar7 + 0x38) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x38));
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)uStack_60 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_60 & 0xffffffff);
  }
  if ((uStack_60 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_1417375ca(param_1);
    if ((longlong)(int)uStack_60 == 0) {
      uVar4 = 0;
    }
    else {
      puVar6 = local_68 + (longlong)(int)uStack_60 * 4;
      puVar5 = local_68;
      do {
        uVar1 = *puVar5;
        lVar7 = *(longlong *)(puVar5 + 2) + 0x10;
        if (*(longlong *)(puVar5 + 2) == 0) {
          lVar7 = 0;
        }
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_147082d0a(param_1,iVar2);
        }
        lVar3 = *param_1;
        *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = lVar7;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = uVar1;
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar6);
      uVar4 = uStack_60 & 0xffffffff;
    }
  }
  FUN_14482b2f5(local_68,uVar4);
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b1131c FUN_142b1131c body=29 status=ok
// SIG undefined FUN_142b1131c(void)

undefined8 FUN_142b1131c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1134e FUN_142b1134e body=93 status=ok
// SIG undefined FUN_142b1134e(void)

void FUN_142b1134e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1621d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a162160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b113ac FUN_142b113ac body=93 status=ok
// SIG undefined FUN_142b113ac(void)

void FUN_142b113ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1621d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a162160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b1140a FUN_142b1140a body=126 status=ok
// SIG undefined FUN_142b1140a(void)

void FUN_142b1140a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1621d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a162160;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b11479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b11492 FUN_142b11492 body=20 status=ok
// SIG undefined FUN_142b11492(void)

undefined1 FUN_142b11492(longlong param_1)

{
  FUN_142b114a6(param_1 + 0x18);
  return 1;
}



// FUNCTION 142b114a6 FUN_142b114a6 body=372 status=ok
// SIG undefined FUN_142b114a6(void)

void FUN_142b114a6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  void **local_58;
  ulonglong *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0290) {
    FUN_144b3d300(&DAT_14c9a0290);
    if (DAT_14c9a0290 == -1) {
      local_48 = &DAT_14a162238;
      local_40 = 3;
      local_3c = 0;
      uVar3 = FUN_14001a6c0(&local_48,1);
      DAT_14c9a0288 = (ulonglong)uVar3;
      _Init_thread_footer(&DAT_14c9a0290);
    }
  }
  cVar2 = FUN_1467b17c6(param_2,DAT_14c9a0288);
  if (cVar2 != '\0') {
    local_38 = (void *)0x0;
    local_30 = *(int *)(param_3 + 1);
    lVar4 = (longlong)local_30;
    _Src = (void *)*param_3;
    if (lVar4 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar4 * 2);
    }
    local_58 = &local_38;
    local_50 = &local_28;
    FUN_141469cae(&local_48);
    FUN_1461bd46a(uVar1,&local_48);
    FUN_1447a1747(local_48,local_40);
    if (local_48 != (undefined *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1161c FUN_142b1161c body=32 status=ok
// SIG undefined FUN_142b1161c(void)

undefined8 FUN_142b1161c(undefined8 param_1,undefined8 *param_2)

{
  FUN_142b0cce2(*param_2,param_1,param_2[1]);
  return param_1;
}



// FUNCTION 142b1166c FUN_142b1166c body=12 status=ok
// SIG undefined FUN_142b1166c(void)

void FUN_142b1166c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b11675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b11678 FUN_142b11678 body=68 status=ok
// SIG undefined FUN_142b11678(void)

undefined8 * FUN_142b11678(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a162240;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b116bc FUN_142b116bc body=106 status=ok
// SIG undefined FUN_142b116bc(void)

void FUN_142b116bc(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a162260;
  puVar2 = (undefined8 *)param_1[0x16];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b11726 FUN_142b11726 body=2096 status=ok
// SIG undefined FUN_142b11726(void)

undefined8 FUN_142b11726(longlong param_1,void *param_2,size_t param_3,longlong param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  DWORD DVar8;
  char cVar9;
  DWORD dwTlsIndex;
  DWORD DVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  LPVOID lpTlsValue;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  size_t _Size;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  size_t sVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  uint local_15c;
  ulonglong local_158;
  size_t local_150;
  void *local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong *local_118;
  undefined **local_110;
  undefined8 *local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  int local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *pvStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_178 = param_1;
  if (*(char *)(param_1 + 0x61) == '\0') {
    local_e0 = 0;
    uStack_d8 = 0;
    local_110 = (undefined **)0xffffffffffffffff;
    local_108 = (undefined8 *)0x0;
    uStack_100 = 0;
    local_f8 = ZEXT816(0);
    local_e8 = 0;
    local_d0 = 0;
    auVar6._14_2_ = 0;
    auVar6._0_14_ = local_c8._2_14_;
    local_c8 = auVar6 << 0x10;
    pcVar2 = *(code **)(param_1 + 0x70);
    plVar13 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_1 + 0x80);
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar2)(&local_78,uVar12);
    (**(code **)(*local_78 + 0x1a0))(local_78,*(undefined8 *)(param_1 + 0x18));
    FUN_14707c7bc(&local_110,local_78,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x7c));
    bVar23 = *(undefined8 **)(param_1 + 0x20) == local_108;
    bVar24 = *(ulonglong *)(param_1 + 0x28) == uStack_100;
    bVar3 = local_e8 == *(int *)(param_1 + 0x40);
    bVar7 = local_f8 == *(undefined1 (*) [16])(param_1 + 0x30);
    bVar25 = local_d0._4_4_ == *(int *)(param_1 + 0x5c);
    if ((bVar24 && bVar23) && ((bVar3 && bVar7) && bVar25)) {
      *(undefined1 *)(local_178 + 0x61) = 1;
    }
    if (local_78 != (longlong *)0x0) {
      FUN_140aa547e(local_70);
    }
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    if ((bVar24 && bVar23) && ((bVar3 && bVar7) && bVar25)) goto LAB_142b1176e;
  }
  else {
LAB_142b1176e:
    lVar22 = local_178;
    if ((longlong)(param_4 + param_3) <= *(longlong *)(local_178 + 0x28)) {
      local_158 = (ulonglong)*(uint *)(local_178 + 0x58);
      lVar19 = (longlong)(int)*(uint *)(local_178 + 0x58);
      uVar11 = param_4 / lVar19;
      param_4 = param_4 % (longlong)local_158;
      local_108 = (undefined8 *)0x0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = CONCAT22(local_e8._2_2_,3);
      local_e0 = -1;
      uStack_d8 = 0;
      local_110 = &PTR_FUN_14a162360;
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      pvStack_a0 = (void *)0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      FUN_142b11f58(&local_118);
      uVar16 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0xb8) +
                (longlong)*(int *)(lVar22 + 0x5c) * 8);
      local_168 = lVar19;
      local_120 = uVar16;
      cVar9 = FUN_142773128(uVar16,&local_128,lVar19,0);
      if (cVar9 == '\0') {
        FUN_1400021e4(&local_120,&local_78);
        plVar13 = local_78;
        if ((int)local_70 == 0) {
          plVar13 = (longlong *)&DAT_149dfb77a;
        }
        FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0x1064,
                      L"Failed to get compressed size for compression method: %s. Check plugin is loaded."
                      ,plVar13);
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar20 = (longlong)((double)(longlong)local_128 * 1.100000023841858);
      if (uVar16 == DAT_14c892f54) {
        uVar20 = local_128;
      }
      local_128 = uVar20 + 0xf & 0xfffffffffffffff0;
      local_140 = *local_118;
      FUN_141737692(local_118,local_168,local_128 * 2);
      lVar22 = local_178;
      local_78 = (longlong *)local_118[3];
      local_70 = (longlong)local_78 + local_128;
      pcVar2 = *(code **)(local_178 + 0x70);
      plVar13 = (longlong *)(local_178 + 0x90);
      if (*(longlong **)(local_178 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(local_178 + 0x80);
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      (*pcVar2)(&local_138,uVar12);
      if (0 < (longlong)param_3) {
        uVar18 = (int)local_158 * (int)uVar11;
        bVar25 = false;
        do {
          lVar14 = (longlong)(int)uVar11 * 0x10;
          uVar16 = *(longlong *)(lVar22 + 0x28) - (ulonglong)uVar18;
          lVar19 = *(longlong *)(*(longlong *)(lVar22 + 0x48) + lVar14);
          if ((longlong)(ulonglong)*(uint *)(lVar22 + 0x58) <= (longlong)uVar16) {
            uVar16 = (ulonglong)*(uint *)(lVar22 + 0x58);
          }
          sVar21 = uVar16 - param_4;
          _Size = param_3;
          if ((longlong)sVar21 < (longlong)param_3) {
            _Size = sVar21;
          }
          local_170 = uVar11;
          if (((((local_140 < local_168) || (bVar25)) ||
               (local_118[4] != *(longlong *)(lVar22 + 0x18))) ||
              ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0xa0) != (int)local_118[7] ||
                *(undefined1 (*) [16])(*(longlong *)(lVar22 + 0x10) + 0x90) !=
                *(undefined1 (*) [16])(local_118 + 5) ||
               ((int)uVar11 != *(int *)((longlong)local_118 + 0x3c))))) ||
             ((local_168 <= (longlong)param_3 && (param_4 == 0)))) {
            if (*(int *)(*(longlong *)(lVar22 + 0x10) + 0x7c) < 5) {
              lVar15 = 0;
            }
            else {
              lVar15 = *(longlong *)(lVar22 + 0x18);
            }
            lVar14 = *(longlong *)(*(longlong *)(lVar22 + 0x48) + 8 + lVar14) - lVar19;
            local_15c = uVar18;
            local_150 = _Size;
            local_148 = param_2;
            (**(code **)(*local_138 + 0x1a0))(local_138,lVar15 + lVar19);
            plVar13 = (&local_78)[(uint)local_170 & 1];
            (**(code **)(*local_138 + 0x170))(local_138,plVar13,lVar14 + 0xfU & 0xfffffffffffffff0);
            if (bVar25) {
              FUN_140187fa0(&local_110,1,0);
            }
            param_2 = local_148;
            _Size = local_150;
            uVar18 = local_15c;
            lVar22 = local_178;
            local_88 = *(undefined1 (*) [16])(*(longlong *)(local_178 + 0x10) + 0xa8);
            uStack_ac = (undefined4)local_120;
            uStack_a8 = (undefined4)(local_120 >> 0x20);
            uStack_b0 = (undefined4)lVar14;
            iVar17 = (int)local_170;
            if (((longlong)param_3 < local_168) || (param_4 != 0)) {
              local_c8._0_8_ = local_118[1];
              pvStack_a0 = local_148;
              local_98._8_8_ = local_150;
              local_98._0_8_ = param_4;
              *(int *)((longlong)local_118 + 0x3c) = iVar17;
              lVar19 = *(longlong *)(local_178 + 0x10);
              *(undefined4 *)(local_118 + 7) = *(undefined4 *)(lVar19 + 0xa0);
              lVar14 = *(longlong *)(lVar19 + 0x98);
              local_118[5] = *(longlong *)(lVar19 + 0x90);
              local_118[6] = lVar14;
              lVar19 = *(longlong *)(local_178 + 0x18);
            }
            else {
              pvStack_a0 = (void *)0x0;
              local_118[5] = 0;
              local_118[6] = 0;
              local_118[7] = -0x100000000;
              lVar19 = -1;
              local_c8._0_8_ = local_148;
            }
            local_c8._8_4_ = (int)uVar16;
            local_118[4] = lVar19;
            local_b8 = plVar13;
            if ((longlong)sVar21 < (longlong)param_3) {
              local_188 = 0;
              local_190 = 0xffffffffffffffff;
              local_198 = 0;
              FUN_1402a8900(&local_110,0,DAT_14c8442c0,3);
            }
            else {
              local_e0 = -1;
              uStack_d8 = 0;
              LOCK();
              UNLOCK();
              local_e8 = CONCAT22(local_e8._2_2_,3);
              local_f8._8_8_ = 0;
              uStack_100._0_4_ = (int)uStack_100 + 1;
              FUN_14018802a(local_f8._0_8_);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = local_f8._8_8_;
              local_f8 = auVar4 << 0x40;
              (*(code *)local_110[6])(&local_110);
              LOCK();
              uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + -1);
              UNLOCK();
            }
            bVar25 = true;
          }
          else {
            memcpy(param_2,(void *)(param_4 + local_118[1]),_Size);
            iVar17 = (int)local_170;
          }
          param_2 = (void *)((longlong)param_2 + _Size);
          uVar11 = (ulonglong)(iVar17 + 1);
          uVar18 = uVar18 + (int)local_158;
          param_4 = 0;
          sVar21 = param_3 - _Size;
          bVar3 = (longlong)_Size <= (longlong)param_3;
          param_3 = sVar21;
        } while (sVar21 != 0 && bVar3);
        if (bVar25) {
          FUN_140187fa0(&local_110,1,0);
        }
      }
      if (local_138 != (longlong *)0x0) {
        FUN_140aa547e(local_130);
      }
      dwTlsIndex = DAT_14c75f614;
      if (DAT_14c75f614 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar10 = 0xffffffff;
        LOCK();
        bVar25 = DAT_14c75f614 != 0xffffffff;
        DVar8 = dwTlsIndex;
        if (bVar25) {
          DVar10 = DAT_14c75f614;
          DVar8 = DAT_14c75f614;
        }
        DAT_14c75f614 = DVar8;
        UNLOCK();
        if (bVar25) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar10;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_141737740();
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      FUN_142b120c0(lpTlsValue,local_118);
      local_110 = &PTR_FUN_149e06640;
      FUN_14018802a(local_f8._0_8_);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_f8._8_8_;
      local_f8 = auVar5 << 0x40;
      local_110 = IQueuedWork::vftable;
      if (local_108 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_108 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_108)(local_108,1);
        }
      }
      uVar12 = 1;
      goto LAB_142b11d9f;
    }
  }
  uVar12 = 0;
LAB_142b11d9f:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 142b11f58 FUN_142b11f58 body=201 status=ok
// SIG undefined FUN_142b11f58(void)

undefined8 * FUN_142b11f58(undefined8 *param_1)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  undefined8 *puVar3;
  bool bVar4;
  
  dwTlsIndex = DAT_14c75f614;
  if (DAT_14c75f614 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar4 = DAT_14c75f614 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar4) {
      DVar2 = DAT_14c75f614;
      DVar1 = DAT_14c75f614;
    }
    DAT_14c75f614 = DVar1;
    UNLOCK();
    if (bVar4) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_141737740();
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (*(char *)((longlong)lpTlsValue + 0x10) == '\0') {
    *(undefined1 *)((longlong)lpTlsValue + 0x10) = 1;
    puVar3 = (undefined8 *)((longlong)lpTlsValue + 0x18);
  }
  else {
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0xffffffffffffffff;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0xffffffff00000000;
    puVar3[8] = *(undefined8 *)((longlong)lpTlsValue + 0x60);
    *(undefined8 **)((longlong)lpTlsValue + 0x60) = puVar3;
  }
  *param_1 = puVar3;
  return param_1;
}



// FUNCTION 142b12022 FUN_142b12022 body=156 status=ok
// SIG undefined FUN_142b12022(void)

void FUN_142b12022(longlong *param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined4)param_1[8];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_20 = (undefined4)param_1[9];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x4c);
  FUN_142b08556(param_1[2],(longlong)(int)param_1[3] + 0xfU & 0xfffffffffffffff0);
  local_48 = (longlong)(int)param_1[3];
  local_38 = 0;
  local_40 = 0;
  FUN_140aa9920(*(undefined8 *)((longlong)param_1 + 0x1c),*param_1,(longlong)(int)param_1[1],
                param_1[2]);
  if ((void *)param_1[5] != (void *)0x0) {
    memcpy((void *)param_1[5],(void *)(*param_1 + param_1[6]),param_1[7]);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b120c0 FUN_142b120c0 body=79 status=ok
// SIG undefined FUN_142b120c0(void)

void FUN_142b120c0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x60) == 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x40);
    if (param_2 != 0) {
      if (*(longlong *)(param_2 + 0x18) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142b12130 FUN_142b12130 body=106 status=ok
// SIG undefined FUN_142b12130(void)

void FUN_142b12130(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a162450;
  puVar2 = (undefined8 *)param_1[0x18];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b1219a FUN_142b1219a body=796 status=ok
// SIG undefined FUN_142b1219a(void)

undefined8 FUN_142b1219a(longlong param_1,void *param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  size_t _Size;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong lStack_b0;
  longlong *local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x61) == '\0') {
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = (longlong *)0xffffffffffffffff;
    lStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    pcVar1 = *(code **)(param_1 + 0x70);
    plVar7 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar1)(&local_b8,uVar6);
    (**(code **)(*local_b8 + 0x1a0))(local_b8,*(undefined8 *)(param_1 + 0x18));
    FUN_14707c7bc(&local_a8,local_b8,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x7c));
    bVar9 = *(longlong *)(param_1 + 0x20) == lStack_a0;
    bVar10 = *(longlong *)(param_1 + 0x28) == local_98;
    auVar3._8_8_ = uStack_88;
    auVar3._0_8_ = local_90;
    bVar4 = local_80 == *(int *)(param_1 + 0x40);
    bVar5 = auVar3 == *(undefined1 (*) [16])(param_1 + 0x30);
    bVar2 = local_68._4_4_ == *(int *)(param_1 + 0x5c);
    if ((bVar10 && bVar9) && ((bVar4 && bVar5) && bVar2)) {
      *(undefined1 *)(param_1 + 0x61) = 1;
    }
    if (local_b8 != (longlong *)0x0) {
      FUN_140aa547e(lStack_b0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if ((bVar10 && bVar9) && ((bVar4 && bVar5) && bVar2)) goto LAB_142b121d5;
  }
  else {
LAB_142b121d5:
    if ((longlong)(param_4 + param_3) <= *(longlong *)(param_1 + 0x20)) {
      local_b8 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa8);
      lStack_b0 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0);
      pcVar1 = *(code **)(param_1 + 0x70);
      plVar7 = (longlong *)(param_1 + 0x90);
      if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_1 + 0x80);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar1)(&local_c8,uVar6);
      if ((param_4 + 0xf & 0xfffffffffffffff0) == param_4) {
        (**(code **)(*local_c8 + 0x1a0))(local_c8,param_4 + *(longlong *)(param_1 + 0xb0));
      }
      else {
        uVar8 = (ulonglong)((uint)param_4 & 0xf);
        _Size = 0x10 - uVar8;
        if ((longlong)param_3 <= (longlong)_Size) {
          _Size = param_3;
        }
        (**(code **)(*local_c8 + 0x1a0))
                  (local_c8,(param_4 & 0xfffffffffffffff0) + *(longlong *)(param_1 + 0xb0));
        (**(code **)(*local_c8 + 0x170))(local_c8,local_58,0x10);
        local_a8 = local_b8;
        lStack_a0 = lStack_b0;
        FUN_142b08556(local_58,0x10);
        memcpy(param_2,local_58 + uVar8,_Size);
        param_2 = (void *)((longlong)param_2 + _Size);
        param_3 = param_3 - _Size;
      }
      uVar8 = param_3 & 0xfffffffffffffff0;
      (**(code **)(*local_c8 + 0x170))(local_c8,param_2,uVar8);
      local_a8 = local_b8;
      lStack_a0 = lStack_b0;
      FUN_142b08556(param_2,uVar8);
      if ((param_3 & 0xf) != 0) {
        (**(code **)(*local_c8 + 0x170))(local_c8,local_58,0x10);
        local_a8 = local_b8;
        lStack_a0 = lStack_b0;
        FUN_142b08556(local_58,0x10);
        memcpy((void *)((longlong)param_2 + uVar8),local_58,param_3 & 0xf);
      }
      if (local_c8 != (longlong *)0x0) {
        FUN_140aa547e(local_c0);
      }
      uVar6 = 1;
      goto LAB_142b1236e;
    }
  }
  uVar6 = 0;
LAB_142b1236e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 142b124d7 FUN_142b124d7 body=962 status=ok
// SIG undefined FUN_142b124d7(void)

void FUN_142b124d7(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_388 [36];
  int local_364;
  undefined8 local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    local_360 = param_4;
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar20 = &local_358;
    do {
      puVar8 = (undefined8 *)*plVar20;
      puVar6 = (undefined8 *)plVar20[1];
      iVar15 = (int)plVar20[2];
      iVar11 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar8) >> 4);
      puVar14 = puVar8;
      if (iVar15 != 0) {
LAB_142b12588:
        if (8 < (int)(iVar11 + 1U)) {
          uVar9 = (ulonglong)(iVar11 + 1U >> 1);
          uVar3 = puVar14[uVar9 * 2];
          uVar4 = (puVar14 + uVar9 * 2)[1];
          uVar5 = puVar14[1];
          puVar14[uVar9 * 2] = *puVar14;
          (puVar14 + uVar9 * 2)[1] = uVar5;
          *puVar14 = uVar3;
          puVar14[1] = uVar4;
          puVar10 = puVar6 + 2;
          puVar8 = puVar14;
LAB_142b125c5:
          do {
            puVar7 = puVar8;
            puVar8 = puVar7 + 2;
            if (puVar6 < puVar8) break;
            puVar16 = &DAT_149dfb77a;
            if (*(int *)(puVar14 + 1) != 0) {
              puVar16 = (undefined2 *)*puVar14;
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar7 + 3) != 0) {
              puVar18 = (undefined2 *)puVar7[2];
            }
            lVar12 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar12);
              uVar19 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar16 + lVar12);
              uVar13 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142b12602;
                }
                iVar11 = uVar19 - uVar13;
                goto LAB_142b1262c;
              }
              if (uVar1 == 0) break;
LAB_142b12602:
              lVar12 = lVar12 + 2;
            }
            iVar11 = 0;
LAB_142b1262c:
          } while (-1 < iVar11);
LAB_142b12631:
          puVar17 = puVar10;
          puVar10 = puVar17 + -2;
          if (puVar14 < puVar10) {
            puVar16 = &DAT_149dfb77a;
            if (*(int *)(puVar17 + -1) != 0) {
              puVar16 = (undefined2 *)puVar17[-2];
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar14 + 1) != 0) {
              puVar18 = (undefined2 *)*puVar14;
            }
            lVar12 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar12);
              uVar2 = *(ushort *)((longlong)puVar16 + lVar12);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_142b12698;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar11 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_142b1269a;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_142b1269a;
                }
              }
              lVar12 = lVar12 + 2;
            } while( true );
          }
          goto LAB_142b1269e;
        }
        for (; puVar8 = puVar14, puVar10 = puVar14, puVar14 < puVar6; puVar6 = puVar6 + -2) {
joined_r0x000142b1278e:
          puVar7 = puVar10 + 2;
          if (puVar7 <= puVar6) {
            puVar16 = &DAT_149dfb77a;
            if (*(int *)(puVar8 + 1) != 0) {
              puVar16 = (undefined2 *)*puVar8;
            }
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar10 + 3) != 0) {
              puVar18 = (undefined2 *)puVar10[2];
            }
            lVar12 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar12);
              uVar19 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar16 + lVar12);
              uVar13 = (uint)uVar2;
              puVar10 = puVar7;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x000142b1278e;
LAB_142b127d0:
              lVar12 = lVar12 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142b127d0;
            }
            if ((int)(uVar19 - uVar13) < 0) {
              puVar8 = puVar7;
            }
            goto joined_r0x000142b1278e;
          }
          local_58 = *puVar8;
          uStack_50 = puVar8[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          uVar3 = puVar6[1];
          *puVar8 = *puVar6;
          puVar8[1] = uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar6 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar6 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
        }
        goto LAB_142b12834;
      }
LAB_142b1287c:
      FUN_1470836c1(puVar8);
LAB_142b12834:
      plVar20 = plVar20 + -3;
    } while (&local_358 <= plVar20);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142b12698:
  iVar11 = 0;
LAB_142b1269a:
  if (iVar11 < 0) goto LAB_142b1269e;
  goto LAB_142b12631;
LAB_142b1269e:
  if (puVar8 <= puVar10) {
    uVar3 = *puVar8;
    uVar4 = puVar7[3];
    uVar5 = puVar17[-1];
    *puVar8 = *puVar10;
    puVar7[3] = uVar5;
    *puVar10 = uVar3;
    puVar17[-1] = uVar4;
    goto LAB_142b125c5;
  }
  local_58 = *puVar14;
  uStack_50 = puVar14[1];
  uVar4 = local_58;
  uVar5 = uStack_50;
  uVar3 = puVar17[-1];
  *puVar14 = *puVar10;
  puVar14[1] = uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar17 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar17 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar17 + -4) = uStack_50._4_4_;
  iVar15 = iVar15 + -1;
  puVar17 = puVar17 + -4;
  local_364 = iVar15;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)puVar17 - (longlong)puVar14 < (longlong)puVar6 - (longlong)puVar8) {
    if (puVar8 < puVar6) {
      *plVar20 = (longlong)puVar8;
      plVar20[1] = (longlong)puVar6;
      *(int *)(plVar20 + 2) = iVar15;
      plVar20 = plVar20 + 3;
    }
    puVar6 = puVar17;
    puVar8 = puVar14;
    if (puVar10 <= puVar14 + 2) goto LAB_142b12834;
  }
  else {
    if (puVar14 + 2 < puVar10) {
      *plVar20 = (longlong)puVar14;
      plVar20[1] = (longlong)puVar17;
      *(int *)(plVar20 + 2) = iVar15;
      plVar20 = plVar20 + 3;
    }
    if (puVar6 <= puVar8) goto LAB_142b12834;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar8) >> 4);
  puVar14 = puVar8;
  if (iVar15 == 0) goto LAB_142b1287c;
  goto LAB_142b12588;
}



// FUNCTION 142b1289a FUN_142b1289a body=173 status=ok
// SIG undefined FUN_142b1289a(void)

void FUN_142b1289a(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_142b12931;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_142b12931:
  FUN_147083a2a(param_1,0);
  return;
}



// FUNCTION 142b12948 FUN_142b12948 body=133 status=ok
// SIG undefined FUN_142b12948(void)

longlong FUN_142b12948(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[2];
  FUN_14021219d(param_1[1],*param_1);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined4 *)(lVar2 + 0x38) = 0;
  if (*(int *)(lVar2 + 0x4c) < 0) {
    *(undefined4 *)(lVar2 + 0x48) = 0;
    FUN_1407faa40(lVar2 + 0x40,0);
  }
  else {
    *(undefined4 *)(lVar2 + 0x48) = 0;
  }
  *(undefined2 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  FUN_14707c7bc(*param_1 + 0x10,param_1[1],*(undefined4 *)(lVar1 + 0x7c));
  return *param_1;
}



// FUNCTION 142b129f4 FUN_142b129f4 body=12 status=ok
// SIG undefined FUN_142b129f4(void)

void FUN_142b129f4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b129fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b12a00 FUN_142b12a00 body=29 status=ok
// SIG undefined FUN_142b12a00(void)

undefined8 FUN_142b12a00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b12a1e FUN_142b12a1e body=29 status=ok
// SIG undefined FUN_142b12a1e(void)

undefined8 FUN_142b12a1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b12a50 FUN_142b12a50 body=93 status=ok
// SIG undefined FUN_142b12a50(void)

void FUN_142b12a50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1625a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a162530;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b12aae FUN_142b12aae body=93 status=ok
// SIG undefined FUN_142b12aae(void)

void FUN_142b12aae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1625a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a162530;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b12b0c FUN_142b12b0c body=126 status=ok
// SIG undefined FUN_142b12b0c(void)

void FUN_142b12b0c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1625a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a162530;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b12b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b12b9b FUN_142b12b9b body=2132 status=ok
// SIG undefined FUN_142b12b9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b12b9b(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14153156c(&DAT_14c99fdb8,L"s.IoDispatcherCullCancelledReadRequests",&DAT_14c75f5d0,
                L"Process cancelled file read requests before starting I/O.This can prevent the I/O dispatcher thread to stall due to the request queue getting too big."
               );
  atexit(FUN_142b05b85);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fdc8,L"s.IoDispatcherBufferSizeKB",&DAT_14c75f5d4,
                L"IoDispatcher read buffer size (in kilobytes).");
  atexit(FUN_142b05bca);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fdd8,L"s.IoDispatcherBufferAlignment",&DAT_14c75f5d8,
                L"IoDispatcher read buffer alignment.");
  atexit(FUN_142b05c0f);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fde8,L"s.IoDispatcherBufferMemoryMB",&DAT_14c75f5dc,
                L"IoDispatcher buffer memory size (in megabytes).");
  atexit(FUN_142b05c54);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fdf8,L"s.IoDispatcherDecompressionWorkerCount",&DAT_14c75f5e0,
                L"IoDispatcher decompression worker count.");
  atexit(FUN_142b05c99);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe10,L"s.IoDispatcherCacheSizeMB",&DAT_14c99fe08,
                L"IoDispatcher cache memory size (in megabytes).");
  atexit(FUN_142b05cde);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe20,L"s.IoDispatcherSortRequestsByOffset",&DAT_14c75f5e4,
                L"If > 0, io dispatcher sorts the outstanding request queue by offset rather than sequence."
               );
  atexit(FUN_142b05d23);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe30,L"s.IoDispatcherMaintainSortingOnPriorityChange",&DAT_14c75f5e8,
                L"If s.IoDispatcherSortRequestsByOffset > 0 and this > 0, io dispatcher remembers the last file handle/offset read from even when switching priority levels."
               );
  atexit(FUN_142b05d68);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe48,L"s.IoDispatcherMaxForwardSeekKB",&DAT_14c99fe40,
                L"If s.IoDispatcherSortRequestsByOffset is enabled and this is > 0, if the next sequential read is further than this offset from the last one, read the oldest request instead"
               );
  atexit(FUN_142b05dad);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe60,L"s.IoDispatcherRequestLatencyCircuitBreakerMS",&DAT_14c99fe58,
                L"If s.IoDispatcherSortRequestsByOffset is enabled and this is >0, if the oldest request has been in the queue for this long, read it instead of the most optimal read"
               );
  atexit(FUN_142b05df2);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe70,L"s.IoDispatcherTocsEnablePerfectHashing",&DAT_14c75f5ec,
                L"Enable perfect hashmap lookups for iostore tocs");
  atexit(FUN_142b05e37);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe80,L"s.IoDispatcherCanDecompressOnStarvation",&DAT_14c75f5f0,
                L"IoDispatcher thread will help with decompression tasks when all worker threads are IO starved to avoid deadlocks on low core count"
               );
  atexit(FUN_142b05e7c);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fe98,L"s.IoDispatcherForceSynchronousScatter",&DAT_14c99fe90,
                L"Force scatter jobs to be synchronous on the IODispatcher thread.\nThis can avoid deadlocks in cases where background tasks end up waiting on I/O and we don\'t have enough background task threads to fulfill decompression requests."
               );
  atexit(FUN_142b05ec1);
  local_50 = 0;
  local_58 = 0;
  FUN_1412c7f16(&DAT_14c99fef8,L"TaskGraph.TaskPriorities.IoDispatcherAsyncTasks",
                L"Task and thread priority for IoDispatcher decompression.",0x800);
  atexit(FUN_142b07f9a);
  DAT_14c99ff38 = (undefined8 *)0x0;
  DAT_14c99ff48 = 0;
  _DAT_14c99ff50 = 0;
  _DAT_14c99ff58 = DAT_14c75f610 << 0x1e;
  DAT_14c99ff5c = 0xc0000000;
  _DAT_14c99ff40 = 1;
  DAT_14c75f610 = DAT_14c75f610 + 1;
  FUN_14629f588(0);
  puVar1 = DAT_14c99ff38;
  *DAT_14c99ff38 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  atexit((_func_5014 *)&LAB_142b08509);
  FUN_140056680(&DAT_14c99ff60,L"*.pak");
  atexit((_func_5014 *)&LAB_142b0850e);
  DAT_14c99ff98 = 0;
  DAT_14c99ffa0 = 0;
  DAT_14c99ff78 = 0;
  _DAT_14c99ff80 = 0;
  _DAT_14c99ffa4 = 0xffffffff00000080;
  DAT_14c99ffac = 0;
  DAT_14c99ffb8 = 0;
  DAT_14c99ffc0 = 0;
  atexit(FUN_142b0851f);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c99ffc8,4000);
  atexit((_func_5014 *)&LAB_142b08548);
  local_58 = 0;
  FUN_141471170(&DAT_14c99fff0,L"pakcache.Enable",&DAT_14c75f5f4,
                L"If > 0, then enable the pak cache.");
  atexit(FUN_142b08621);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0008,L"pakcache.CachePerPakFile",&DAT_14c9a0000,
                L"if > 0, then each pak file will have it\'s own cache");
  atexit(FUN_142b08666);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0020,L"pakcache.UseNewTrim",&DAT_14c9a0018,
                L"if > 0, then we\'ll use a round robin per pak file trim");
  atexit(FUN_142b086ab);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0030,L"pakcache.MaxBlockMemory",&DAT_14c75f5f8,
                L"A soft memory budget in MB for the max memory used for precaching, that we\'ll try and adhere to "
               );
  atexit(FUN_142b086f0);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0040,L"pakcache.MaxRequestsToLowerLevel",&DAT_14c75f5fc,
                L"Controls the maximum number of IO requests submitted to the OS filesystem at one time. Limited by PAK_CACHE_MAX_REQUESTS."
               );
  atexit(FUN_142b08735);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0050,L"pakcache.MaxRequestSizeToLowerLevellKB",&DAT_14c75f600,
                L"Controls the maximum size (in KB) of IO requests submitted to the OS filesystem.")
  ;
  atexit(FUN_142b0877a);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0060,L"pakcache.NumUnreferencedBlocksToCache",&DAT_14c75f604,
                L"Controls the maximum number of unreferenced blocks to keep. This is a classic disk cache and the maxmimum wasted memory is pakcache.MaxRequestSizeToLowerLevellKB * pakcache.NumUnreferencedBlocksToCache."
               );
  atexit(FUN_142b087bf);
  local_58 = 0;
  FUN_1415c789c(&DAT_14c9a0078,L"pakcache.TimeToTrim",&DAT_14c9a0070,
                L"Controls how long to hold onto a cached but unreferenced block for.");
  atexit(FUN_142b08804);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0090,L"pakcache.EnableNoCaching",&DAT_14c9a0088,
                L"if > 0, then we\'ll allow a read requests pak cache memory to be ditched early");
  atexit(FUN_142b08849);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_149e001f0;
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
  *local_40 = &PTR_FUN_149e00260;
  local_40[3] = FUN_142b0888e;
  local_58 = 0;
  FUN_1415c7246(&DAT_14c9a00a0,L"pak.WaitPrecache",L"Debug command to wait on the pak precache.",
                &local_40);
  if (local_38 == 0) {
LAB_142b131d6:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_142b131d6;
  }
  atexit(FUN_142b08903);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_149e001f0;
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
  *local_40 = &PTR_FUN_149e00260;
  local_40[3] = FUN_142b08948;
  local_58 = 0;
  FUN_1415c7246(&DAT_14c9a00b0,L"pak.DumpBlocks",L"Debug command to spew the outstanding blocks.",
                &local_40);
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_142b132c2;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142b132c2:
  atexit(FUN_142b0899c);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9a00c0,4000);
  atexit((_func_5014 *)&LAB_142b089e1);
  local_50 = 0;
  local_58 = 0;
  FUN_1412c7f16(&DAT_14c9a00e8,L"TaskGraph.TaskPriorities.AsyncIOCPUWork",
                L"Task and thread priority for decompression, decryption and signature checking of async IO from a pak file."
                ,0x800);
  atexit(FUN_142b089ef);
  local_58 = 0;
  FUN_141471170(&DAT_14c9a0128,L"mmio.enable",&DAT_14c75f608,
                L"If > 0, then enable memory mapped IO on platforms that support it.");
  atexit(FUN_142b09147);
  local_58 = 0;
  FUN_1415c789c(&DAT_14c9a01f0,L"pak.ReaderReleaseDelay",&DAT_14c75f60c,
                L"If > 0, then synchronous pak readers older than this will be deleted.");
  atexit(FUN_142b0bfe0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b133f0 FUN_142b133f0 body=1594 status=ok
// SIG undefined FUN_142b133f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b133f0(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  LARGE_INTEGER LVar3;
  void *_Src;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_d8 [36];
  uint local_b4;
  longlong local_b0;
  undefined8 *local_a8;
  void *local_a0;
  int local_98;
  LARGE_INTEGER local_90;
  int local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < *(int *)(param_1 + 0x128)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    uVar14 = *(uint *)(param_1 + 0xf8);
    if ((longlong)(int)uVar14 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar4 + uVar14;
      if ((uint)(*(int *)(param_1 + 0x144) - iVar4) < uVar14) {
        FUN_147086316(param_1 + 0x138,iVar4);
      }
      memcpy((void *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 0x138)),
             *(void **)(param_1 + 0xf0),(longlong)(int)uVar14 << 3);
      iVar4 = *(int *)(param_1 + 0xf8);
    }
    LOCK();
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) - iVar4;
    UNLOCK();
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_14708639c(param_1 + 0xf0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  }
  if (0 < *(int *)(param_1 + 0x140)) {
    local_a8 = (undefined8 *)(param_1 + 0x30);
    uVar14 = 0;
    do {
      lVar8 = (longlong)(int)uVar14;
      puVar2 = *(uint **)(*(longlong *)(param_1 + 0x138) + lVar8 * 8);
      if (puVar2[9] == 0) {
        uVar5 = *puVar2;
        lVar11 = 0;
        do {
          if (*(uint *)(param_1 + 0x3c + lVar11) == uVar5) {
            piVar1 = (int *)(param_1 + 0x38 + lVar11);
            *piVar1 = *piVar1 + -1;
          }
          lVar11 = lVar11 + 0x18;
        } while (lVar11 != 0xc0);
        iVar4 = *(int *)(param_1 + 0x140);
        if (~uVar14 + iVar4 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x138) + lVar8 * 8),
                  (void *)(*(longlong *)(param_1 + 0x138) + lVar8 * 8 + 8),
                  (longlong)(int)(~uVar14 + iVar4) << 3);
          iVar4 = *(int *)(param_1 + 0x140);
        }
        *(int *)(param_1 + 0x140) = iVar4 + -1;
        FUN_1470863cc();
        uVar5 = FUN_14493c560();
        if (uVar5 == 0) {
          uVar6 = 0;
          uVar10 = 0;
          lVar8 = 0;
        }
        else {
          uVar10 = (ulonglong)(uVar5 >> 0xe);
          uVar6 = uVar5 & 0x3fff;
          lVar8 = (ulonglong)(uVar6 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar10 * 8);
        }
        uVar14 = uVar14 - 1;
        *(uint **)(lVar8 + 8) = puVar2;
        do {
          local_90 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 0x180))->QuadPart;
          local_a0 = (void *)((local_90.QuadPart & 0xfffffffffc000000U) + 0x4000000);
          if ((ulonglong)local_a0 >> 0x1a < (ulonglong)local_90.QuadPart >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          local_a0 = (void *)((ulonglong)local_a0 & 0xfffffffffc000000 | (ulonglong)uVar5);
          if (uVar5 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(longlong *)(&DAT_14c833b00 + uVar10 * 8) + (ulonglong)(uVar6 * 0x18);
          }
          *(DWORD *)(lVar8 + 0x10) = local_90.s.LowPart & 0x3ffffff;
          LOCK();
          bVar15 = (void *)local_90.QuadPart == *(void **)(param_1 + 0x180);
          if (bVar15) {
            *(void **)(param_1 + 0x180) = local_a0;
          }
          UNLOCK();
        } while (!bVar15);
      }
      else if (*(longlong *)(puVar2 + 6) == 0) {
        uVar10 = (ulonglong)*puVar2;
        lVar8 = FUN_147085e26(param_1);
        if (lVar8 == 0) {
          lVar8 = 8;
          puVar12 = (undefined8 *)0x0;
          puVar9 = local_a8;
          do {
            if ((*(int *)(puVar9 + 1) == 0) &&
               ((puVar12 == (undefined8 *)0x0 ||
                ((double)puVar9[2] <= (double)puVar12[2] && (double)puVar12[2] != (double)puVar9[2])
                ))) {
              puVar12 = puVar9;
            }
            puVar9 = puVar9 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          if (puVar12 == (undefined8 *)0x0) goto LAB_142b1351d;
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          QueryPerformanceCounter(&local_90);
          puVar12[2] = (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0;
          *(uint *)((longlong)puVar12 + 0xc) = *puVar2;
          *(undefined8 **)(puVar2 + 6) = puVar12;
          if ((*(longlong *)(param_1 + 8) == 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x48) < 1)
             ) {
            memset((void *)*puVar12,(int)CONCAT71((int7)(uVar10 >> 8),0xcd),*(size_t *)(puVar2 + 4))
            ;
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a0))
                      (*(longlong **)(param_1 + 0x28),*(undefined8 *)(puVar2 + 2));
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x170))
                      (*(longlong **)(param_1 + 0x28),**(undefined8 **)(puVar2 + 6),
                       *(undefined8 *)(puVar2 + 4));
            iVar7 = (*(code *)PTR_FUN_14c75b148)(**(undefined8 **)(puVar2 + 6),puVar2[4],0);
            lVar8 = *(longlong *)(param_1 + 8);
            iVar4 = _DAT_00000048;
            if (((lVar8 == 0) || (iVar4 = *(int *)(lVar8 + 0x48), iVar4 < 1)) ||
               (iVar7 != *(int *)(*(longlong *)(lVar8 + 0x40) + (longlong)(int)*puVar2 * 4))) {
              FUN_140f0be04(*(undefined8 *)(lVar8 + 0x40),(longlong)iVar4 << 2,&local_90);
              uVar5 = *puVar2;
              local_b0 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40);
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                        (*(longlong **)(param_1 + 0x28),&local_a0);
              _Src = local_a0;
              local_90.QuadPart = 0;
              lVar8 = (longlong)local_98;
              local_88 = local_98;
              if (lVar8 == 0) {
                local_84 = 0;
              }
              else {
                local_b4 = uVar5;
                FUN_1446dd670(&local_90,lVar8,0);
                uVar5 = local_b4;
                memcpy((void *)local_90,_Src,lVar8 * 2);
              }
              local_7c = *(undefined4 *)(local_b0 + (longlong)(int)uVar5 * 4);
              local_80 = uVar5;
              local_78 = iVar7;
              if (local_a0 != (void *)0x0) {
                FUN_1400020a8(local_a0);
              }
              FUN_14707a994(&local_90);
              if ((void *)local_90.QuadPart != (void *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
        else {
          *(longlong *)(puVar2 + 6) = lVar8;
        }
        LOCK();
        puVar2[9] = puVar2[9] - 1;
        UNLOCK();
        LOCK();
        puVar2[8] = puVar2[8] + 1;
        UNLOCK();
        if (*(longlong **)(puVar2 + 10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(puVar2 + 10) + 0x10))();
        }
      }
LAB_142b1351d:
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < *(int *)(param_1 + 0x140));
  }
  if ((*(ulonglong *)(param_1 + 0x1c0) & 0x3ffffff) != 0) {
    LVar3 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(param_1 + 0x1c0))->s;
    uVar14 = LVar3.s.LowPart;
    while (local_90 = LVar3, (LVar3.QuadPart & 0x3ffffffU) != 0) {
      local_a0 = (void *)((LVar3.QuadPart & 0xfffffffffc000000U) + 0x4000000);
      if ((ulonglong)local_a0 >> 0x1a < (ulonglong)LVar3.QuadPart >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      uVar10 = (ulonglong)((uVar14 & 0x3ffffff) >> 0xe);
      uVar13 = (ulonglong)(LVar3.s.LowPart & 0x3fff);
      lVar8 = *(longlong *)(&DAT_14c833b00 + uVar10 * 8);
      local_a0 = (void *)((ulonglong)local_a0 & 0xfffffffffc000000 |
                         (ulonglong)*(uint *)(lVar8 + 0x10 + uVar13 * 0x18));
      LOCK();
      bVar15 = (void *)local_90.QuadPart == *(void **)(param_1 + 0x1c0);
      if (bVar15) {
        *(void **)(param_1 + 0x1c0) = local_a0;
      }
      UNLOCK();
      if (bVar15) {
        *(undefined4 *)(lVar8 + uVar13 * 0x18 + 0x10) = 0;
        lVar8 = *(longlong *)
                 (*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 8 +
                 (ulonglong)(uVar14 & 0x3fff) * 0x18);
        FUN_1447d080c(uVar14 & 0x3ffffff);
        if (lVar8 == 0) break;
        FUN_14018802a(lVar8);
      }
      LVar3 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(param_1 + 0x1c0))->s;
      uVar14 = LVar3.s.LowPart;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b13a2c FUN_142b13a2c body=1244 status=ok
// SIG undefined FUN_142b13a2c(void)

void FUN_142b13a2c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x20) == 0) {
    local_98 = (longlong *)0x0;
  }
  else {
    local_98 = (longlong *)FUN_1405d8a54(0);
  }
  local_58 = 0;
  uStack_50 = 0;
  uVar18 = *(ulonglong *)(param_1 + 0xb0);
  uVar14 = uVar18 + 0xffff;
  if (-1 < (longlong)uVar18) {
    uVar14 = uVar18;
  }
  lVar4 = param_3 + uVar18 + -1;
  lVar12 = param_3 + uVar18 + 0xfffe;
  if (-1 < lVar4) {
    lVar12 = lVar4;
  }
  lVar12 = lVar12 >> 0x10;
  local_60 = lVar12 - ((longlong)uVar14 >> 0x10);
  local_a0 = local_60 + 1;
  if ((int)local_a0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_a0 & 0xffffffff);
  }
  local_a8 = param_1;
  local_78 = param_3;
  if ((int)local_a0 != 0) {
    FUN_147086468(&local_58,local_a0);
  }
  uVar14 = (ulonglong)(int)(uVar14 >> 0x10);
  if ((longlong)uVar14 <= lVar12) {
    lVar4 = local_a8 + 0xc0;
    uVar15 = lVar12 + 1;
    lVar17 = 0;
    uVar13 = 0;
    lVar12 = local_78;
    local_88 = lVar4;
    local_80 = uVar15;
    do {
      uVar8 = uVar18 + 0xffff;
      if (-1 < (longlong)uVar18) {
        uVar8 = uVar18;
      }
      uVar8 = uVar8 >> 0x10;
      uVar2 = uVar18;
      if (lVar12 < 1) {
        uVar8 = uVar14;
        uVar2 = uVar13;
      }
      lVar11 = uVar8 * 0x10000 + 0x10000;
      lVar10 = lVar11 - uVar2;
      if ((longlong)(uVar2 + lVar12) <= lVar11) {
        lVar10 = lVar12;
      }
      if ((int)uVar14 == *(int *)(local_a8 + 0xcc)) {
        uVar6 = 0;
        local_90 = lVar4;
      }
      else {
        lVar4 = 0x10000;
        if ((uVar14 == *(longlong *)(local_a8 + 0x90) - 1U) &&
           (lVar4 = *(longlong *)(local_a8 + 0xa0) % 0x10000, lVar4 == 0)) {
          lVar4 = 0x10000;
        }
        local_b8 = local_98;
        uVar6 = FUN_147085f18(*(undefined8 *)(local_a8 + 0xb8),uVar14 & 0xffffffff,uVar8 * 0x10000,
                              lVar4);
        local_90 = 0;
        uVar15 = local_80;
        lVar4 = local_88;
      }
      uVar3 = uStack_50;
      lVar11 = (longlong)(int)uStack_50;
      uVar7 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
      uVar13 = uVar2;
      if (uStack_50._4_4_ < uVar7) {
        local_70 = uVar6;
        local_68 = uVar2;
        FUN_1470864d8(&local_58,uVar3 & 0xffffffff);
        uVar6 = local_70;
        uVar15 = local_80;
        lVar4 = local_88;
        uVar13 = local_68;
      }
      *(undefined8 *)(local_58 + lVar11 * 0x28) = uVar6;
      *(ulonglong *)(local_58 + 8 + lVar11 * 0x28) = local_90;
      *(ulonglong *)(local_58 + 0x10 + lVar11 * 0x28) = uVar13 + uVar8 * -0x10000;
      *(longlong *)(local_58 + 0x18 + lVar11 * 0x28) = lVar17;
      *(longlong *)(local_58 + 0x20 + lVar11 * 0x28) = lVar10;
      uVar18 = uVar18 + lVar10;
      lVar17 = lVar17 + lVar10;
      lVar12 = lVar12 - lVar10;
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
  }
  if (*(longlong *)(*(longlong *)(local_a8 + 0xb8) + 0x20) == 0) {
    FUN_142b133f0();
  }
  local_90 = local_60 & 0xffffffff;
  uVar14 = (ulonglong)((uint)local_a0 & 0x7fffffff);
  uVar18 = local_a0 & 0xffffffff;
  do {
    while ((int)local_a0 == 0) {
LAB_142b13c42:
      if (local_98 == (longlong *)0x0) {
        FUN_142b133f0(*(undefined8 *)(local_a8 + 0xb8));
        if ((int)uVar18 < 1) {
LAB_142b13c8e:
          lVar12 = local_a8;
          *(longlong *)(local_a8 + 0xb0) = *(longlong *)(local_a8 + 0xb0) + local_78;
          if ((int)local_a0 < (int)uStack_50) {
            lVar4 = uVar14 * 0x28;
            do {
              if (*(longlong *)(local_58 + lVar4) != 0) {
                lVar17 = *(longlong *)(lVar12 + 0xb8);
                LOCK();
                piVar5 = (int *)(*(longlong *)(local_58 + lVar4) + 0x24);
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if ((*piVar5 == 0) &&
                   (plVar1 = *(longlong **)(lVar17 + 0x130), plVar1 != (longlong *)0x0)) {
                  (**(code **)(*plVar1 + 0x10))();
                }
              }
              uVar14 = uVar14 + 1;
              lVar4 = lVar4 + 0x28;
            } while ((longlong)uVar14 < (longlong)(int)uStack_50);
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
      else {
        (**(code **)(*local_98 + 0x20))(local_98,0xffffffff,0);
        if ((int)uVar18 < 1) goto LAB_142b13ec8;
      }
    }
    lVar12 = 0;
    uVar15 = 0;
    iVar16 = 0;
    do {
      lVar4 = local_58;
      if ((*(longlong *)(local_58 + lVar12) == 0) ||
         (*(int *)(*(longlong *)(local_58 + lVar12) + 0x20) == 0)) {
        plVar1 = *(longlong **)(local_58 + 8 + lVar12);
        if (plVar1 != (longlong *)0x0) {
          plVar9 = (longlong *)(local_58 + uVar15 * 0x28 + 8);
          memcpy((void *)(*(longlong *)(local_58 + 0x18 + lVar12) + param_2),
                 (void *)(*plVar1 + *(longlong *)(local_58 + 0x10 + lVar12)),
                 *(size_t *)(local_58 + 0x20 + lVar12));
          goto LAB_142b13c17;
        }
      }
      else {
        plVar9 = (longlong *)(local_58 + lVar12);
        memcpy((void *)(*(longlong *)(local_58 + 0x18 + lVar12) + param_2),
               (void *)(**(longlong **)(*(longlong *)(local_58 + lVar12) + 0x18) +
                       *(longlong *)(local_58 + 0x10 + lVar12)),
               *(size_t *)(local_58 + 0x20 + lVar12));
        lVar17 = local_a8;
        piVar5 = *(int **)(lVar4 + lVar12);
        if ((local_90 == uVar15) && (*piVar5 != *(int *)(local_a8 + 0xcc))) {
          *(int *)(local_a8 + 0xcc) = *piVar5;
          memcpy(*(void **)(local_a8 + 0xc0),(void *)**(undefined8 **)(*plVar9 + 0x18),0x10000);
          piVar5 = (int *)*plVar9;
        }
        lVar4 = *(longlong *)(lVar17 + 0xb8);
        LOCK();
        piVar5 = piVar5 + 9;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if ((*piVar5 == 0) && (plVar1 = *(longlong **)(lVar4 + 0x130), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x10))();
        }
LAB_142b13c17:
        *plVar9 = 0;
        uVar18 = (ulonglong)((int)uVar18 - 1);
        iVar16 = iVar16 + 1;
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0x28;
    } while (uVar14 != uVar15);
    if (iVar16 == 0) goto LAB_142b13c42;
  } while (0 < (int)uVar18);
  if (local_98 != (longlong *)0x0) {
LAB_142b13ec8:
    FUN_147085ea6(*(undefined8 *)(local_a8 + 0xb8),local_98);
  }
  goto LAB_142b13c8e;
}



// FUNCTION 142b13f0a FUN_142b13f0a body=102 status=ok
// SIG undefined FUN_142b13f0a(void)

void FUN_142b13f0a(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149e46efa;
  local_14 = 7;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629f9d0(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b13f74 FUN_142b13f74 body=49 status=ok
// SIG undefined FUN_142b13f74(void)

void FUN_142b13f74(void)

{
  FUN_144760e21(DAT_14c9a02a0,DAT_14c9a02a8);
  if (DAT_14c9a02a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b13fb6 FUN_142b13fb6 body=69 status=ok
// SIG undefined FUN_142b13fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b13fb6(void)

{
  _DAT_14c9a02d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b13ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a02d8,1);
  return;
}



// FUNCTION 142b13ffb FUN_142b13ffb body=69 status=ok
// SIG undefined FUN_142b13ffb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b13ffb(void)

{
  _DAT_14c9a02e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b1403d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a02f0,1);
  return;
}



// FUNCTION 142b14073 FUN_142b14073 body=61 status=ok
// SIG undefined FUN_142b14073(void)

void FUN_142b14073(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = FUN_146efe1bf;
  puVar1[1] = FUN_142b14073;
  FUN_146efe1f2(puVar1 + 2,param_1);
  return;
}



// FUNCTION 142b140b0 FUN_142b140b0 body=269 status=ok
// SIG undefined FUN_142b140b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b140b0(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x800000014a162998;
  local_14 = 0x16;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629fb36(&local_28);
  DAT_14c9a02a0 = 0;
  _DAT_14c9a02a8 = 0;
  _DAT_14c9a02b0 = 2;
  atexit(FUN_142b13f74);
  FUN_140056680(&local_28,L"demo");
  local_38 = 0;
  FUN_140f510cc(&DAT_14c9a02d0,L"demo.ReplayStreamerAutoDemoPrefix",&local_28,
                L"Prefix to use when generating automatic demo names.");
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_142b13fb6);
  local_28 = local_28 & 0xffffffff00000000;
  local_38 = 0;
  FUN_14078dbce(&DAT_14c9a02e8,L"demo.ReplayStreamerAutoDemoUseDateTimePostfix",&local_28,
                L"When enabled, uses the current time as a postfix for automatic demo names instead of indices"
               );
  atexit(FUN_142b13ffb);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b141c0 FUN_142b141c0 body=102 status=ok
// SIG undefined FUN_142b141c0(void)

void FUN_142b141c0(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a162ff0;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629fc56(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b14228 FUN_142b14228 body=304 status=ok
// SIG undefined FUN_142b14228(void)

longlong FUN_142b14228(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_2 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    lVar1 = *param_2;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    lVar1 = FUN_1402c9134(&DAT_14c874628,lVar1,local_14,0);
    if (lVar1 != 0) goto LAB_142b142a6;
  }
  lVar1 = 0;
LAB_142b142a6:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b14359 FUN_142b14359 body=102 status=ok
// SIG undefined FUN_142b14359(void)

void FUN_142b14359(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a1630d0;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629fd76(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b143c0 FUN_142b143c0 body=55 status=ok
// SIG undefined FUN_142b143c0(void)

void FUN_142b143c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0478 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0478 = FUN_14171c317(FUN_1462a0440,uVar1,L"ENexusBitSetOperator");
  }
  return;
}



// FUNCTION 142b14400 FUN_142b14400 body=47 status=ok
// SIG undefined FUN_142b14400(void)

undefined8 FUN_142b14400(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142b14420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142b145b4 FUN_142b145b4 body=96 status=ok
// SIG undefined FUN_142b145b4(void)

void FUN_142b145b4(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
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



// FUNCTION 142b146c8 FUN_142b146c8 body=49 status=ok
// SIG undefined FUN_142b146c8(void)

void FUN_142b146c8(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142b146f9 FUN_142b146f9 body=1135 status=ok
// SIG undefined FUN_142b146f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b146f9(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxNexus",0,0,&PTR_FUN_14a163260);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxNexus",0,0,&PTR_FUN_14a163310);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 6;
  FUN_14282b410(L"/Script/GbxNexus",0,0,&PTR_FUN_14a163a90);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxNexus",0,0,&PTR_FUN_14a163f10);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14a164140;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxNexus",0,0,&PTR_FUN_14a164160);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a164630,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a165650,1,&PTR_FUN_14a165620);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  _DAT_14c9a0588 = (ulonglong)uVar1;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a165800,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a1658c0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a165b40,1,&PTR_FUN_14a165af0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a165db0,3,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a1662f0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a1667f0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a166ce0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a166ef0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a167dd0,3,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a1681f0,1,0);
  local_60 = "nexus";
  local_58 = 5;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  _DAT_14c9a0718 = (ulonglong)uVar1;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a168ac0,1,&PTR_FUN_14a168a90);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxNexus",0,0,&PTR_FUN_14a169290);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a169680,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a16a240,3,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a16a7f0,1,&PTR_FUN_14a16a7c0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a16ac30,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a16b350,1,&PTR_FUN_14a16b320);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a16bb60,1,&PTR_FUN_14a16bb10);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a16c090,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a16d1c0,1,&PTR_FUN_14a16d170);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b14b6c FUN_142b14b6c body=69 status=ok
// SIG undefined FUN_142b14b6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b14b6c(void)

{
  _DAT_14c9a0a80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b14bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0a88,1);
  return;
}



// FUNCTION 142b14bb1 FUN_142b14bb1 body=69 status=ok
// SIG undefined FUN_142b14bb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b14bb1(void)

{
  _DAT_14c9a0a98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b14bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0aa0,1);
  return;
}



// FUNCTION 142b14bf6 FUN_142b14bf6 body=3527 status=ok
// SIG undefined FUN_142b14bf6(void)

void FUN_142b14bf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  wchar_t ***pppwVar6;
  char *pcVar7;
  ulonglong uVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  size_t sVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  wchar_t ****ppppwVar22;
  byte *pbVar23;
  longlong lVar24;
  int iVar25;
  wchar_t *_Str;
  bool bVar26;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  longlong local_178;
  undefined4 local_16c;
  longlong *local_168;
  longlong local_160;
  byte *local_158;
  longlong *plStack_150;
  wchar_t ***local_148;
  int local_140;
  undefined8 *local_138;
  ulonglong uStack_130;
  wchar_t ***local_128;
  wchar_t *local_120;
  undefined2 local_118;
  undefined1 local_116;
  undefined8 local_110;
  wchar_t *local_108;
  undefined4 local_100;
  byte *local_f8;
  longlong *local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  undefined1 *local_a0;
  wchar_t ***local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14612e854();
  local_178 = param_1;
  if (1 < *(int *)(param_1 + 0x50)) {
    plVar15 = (longlong *)(param_1 + 0x60);
    plVar13 = (longlong *)FUN_14001cc68(0x248);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14a176210;
    memset(plVar13 + 2,0,0x238);
    plVar13[0xb] = (longlong)&DAT_14a171d50;
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    plVar13[0xf] = (longlong)&DAT_14a171d50;
    plVar13[0x10] = 0;
    plVar13[0x11] = 0;
    plVar13[0x12] = 0;
    plVar13[0x13] = (longlong)&DAT_14a171d50;
    plVar13[0x14] = 0;
    plVar13[0x15] = 0;
    plVar13[0x16] = 0;
    plVar13[0x17] = (longlong)&DAT_14a171d50;
    plVar13[0x18] = 0;
    plVar13[0x19] = 0;
    plVar13[0x1a] = 0;
    plVar13[0x1b] = (longlong)&DAT_14a171d50;
    plVar13[0x1c] = 0;
    plVar13[0x1d] = 0;
    *(undefined8 *)((longlong)plVar13 + 0xe9) = 0;
    *(undefined8 *)((longlong)plVar13 + 0xf1) = 0;
    plVar13[0x21] = 0;
    plVar13[0x22] = 0;
    *(undefined8 *)((longlong)plVar13 + 0x134) = 0xffffffff00000080;
    plVar13[0x2b] = 0;
    plVar13[0x2c] = 0;
    *(undefined8 *)((longlong)plVar13 + 0x184) = 0xffffffff00000080;
    plVar13[0x35] = 0;
    plVar13[0x36] = 0;
    *(undefined8 *)((longlong)plVar13 + 0x1d4) = 0xffffffff00000080;
    plVar13[0x3f] = 0;
    plVar13[0x40] = 0;
    *(undefined8 *)((longlong)plVar13 + 0x224) = 0xffffffff00000080;
    iVar25 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar25 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar25 + 1U) {
      FUN_14612e95c(plVar15,iVar25);
    }
    lVar24 = *plVar15;
    lVar19 = (longlong)iVar25 * 0x10;
    *(longlong **)(lVar24 + lVar19) = plVar13 + 2;
    *(longlong **)(lVar24 + 8 + lVar19) = plVar13;
    if (plVar13 == (longlong *)0x0) {
      bVar26 = true;
      plVar20 = (longlong *)0x0;
      lVar21 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      lVar21 = *(longlong *)(lVar24 + lVar19);
      plVar20 = (longlong *)((longlong *)(lVar24 + lVar19))[1];
      bVar26 = plVar20 == (longlong *)0x0;
      if (!bVar26) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    FUN_14020fad6(lVar21,0);
    FUN_14020fad6(lVar21 + 0x10,0);
    FUN_14020fad6(lVar21 + 0x20,0);
    lVar24 = local_178;
    iVar25 = *(int *)(local_178 + 0x50) + -1;
    if (*(int *)(local_178 + 0x50) == 0) {
      iVar25 = 0;
    }
    FUN_1402980a2(lVar21 + 0x30,*(undefined8 *)(local_178 + 0x48),iVar25);
    *(undefined2 *)(lVar21 + 0x40) = 1;
    if (*(char *)(lVar24 + 0x41) == '\x01') {
      plVar13 = (longlong *)FUN_14001cc68(0x248);
      plVar13[1] = (longlong)&DAT_100000001;
      *plVar13 = (longlong)&PTR_FUN_14a176210;
      memset(plVar13 + 2,0,0x238);
      plVar13[0xb] = (longlong)&DAT_14a171d50;
      plVar13[0xc] = 0;
      plVar13[0xd] = 0;
      plVar13[0xe] = 0;
      plVar13[0xf] = (longlong)&DAT_14a171d50;
      plVar13[0x10] = 0;
      plVar13[0x11] = 0;
      plVar13[0x12] = 0;
      plVar13[0x13] = (longlong)&DAT_14a171d50;
      plVar13[0x14] = 0;
      plVar13[0x15] = 0;
      plVar13[0x16] = 0;
      plVar13[0x17] = (longlong)&DAT_14a171d50;
      plVar13[0x18] = 0;
      plVar13[0x19] = 0;
      plVar13[0x1a] = 0;
      plVar13[0x1b] = (longlong)&DAT_14a171d50;
      plVar13[0x1c] = 0;
      plVar13[0x1d] = 0;
      *(undefined8 *)((longlong)plVar13 + 0xe9) = 0;
      *(undefined8 *)((longlong)plVar13 + 0xf1) = 0;
      plVar13[0x21] = 0;
      plVar13[0x22] = 0;
      *(undefined8 *)((longlong)plVar13 + 0x134) = 0xffffffff00000080;
      plVar13[0x2b] = 0;
      plVar13[0x2c] = 0;
      *(undefined8 *)((longlong)plVar13 + 0x184) = 0xffffffff00000080;
      plVar13[0x35] = 0;
      plVar13[0x36] = 0;
      *(undefined8 *)((longlong)plVar13 + 0x1d4) = 0xffffffff00000080;
      plVar13[0x3f] = 0;
      plVar13[0x40] = 0;
      *(undefined8 *)((longlong)plVar13 + 0x224) = 0xffffffff00000080;
      iVar25 = *(int *)(local_178 + 0x68);
      *(uint *)(local_178 + 0x68) = iVar25 + 1U;
      if (*(uint *)(local_178 + 0x6c) < iVar25 + 1U) {
        FUN_14612e95c(plVar15,iVar25);
      }
      lVar24 = *plVar15;
      lVar19 = (longlong)iVar25 * 0x10;
      *(longlong **)(lVar24 + lVar19) = plVar13 + 2;
      *(longlong **)(lVar24 + 8 + lVar19) = plVar13;
      if (plVar13 == (longlong *)0x0) {
        FUN_14708f2b0(0x10,lVar21);
        DAT_00000051 = 1;
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        lVar4 = *(longlong *)(lVar24 + lVar19);
        plVar15 = (longlong *)((longlong *)(lVar24 + lVar19))[1];
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        FUN_14708f2b0(lVar4,lVar21);
        *(undefined1 *)(lVar4 + 0x41) = 1;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar15 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
      }
    }
    param_1 = local_178;
    if (!bVar26) {
      LOCK();
      plVar15 = plVar20 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
  }
  FUN_141737b36(param_1,0);
  local_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  FUN_1412fac7e(&local_138,0,0,0);
  if ((longlong)(int)uStack_130 != 0) {
    local_160 = param_1 + 0x10;
    local_168 = (longlong *)(param_1 + 0x60);
    lVar24 = (longlong)(int)uStack_130 << 4;
    puVar14 = local_138;
    do {
      uVar12 = *(undefined4 *)(param_1 + 0x68);
      FUN_140056680(&local_88,&DAT_149dfb77a);
      FUN_141509698(&local_148,puVar14,&local_88);
      if ((wchar_t ****)local_88 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      if (*(char *)(param_1 + 0x41) == '\x01') {
        local_16c = uVar12;
        plVar15 = (longlong *)FUN_14001cc68(0x248);
        plVar15[1] = (longlong)&DAT_100000001;
        *plVar15 = (longlong)&PTR_FUN_14a176210;
        memset(plVar15 + 2,0,0x238);
        plVar15[0xb] = (longlong)&DAT_14a171d50;
        plVar15[0xc] = 0;
        plVar15[0xd] = 0;
        plVar15[0xe] = 0;
        plVar15[0xf] = (longlong)&DAT_14a171d50;
        plVar15[0x10] = 0;
        plVar15[0x11] = 0;
        plVar15[0x12] = 0;
        plVar15[0x13] = (longlong)&DAT_14a171d50;
        plVar15[0x14] = 0;
        plVar15[0x15] = 0;
        plVar15[0x16] = 0;
        plVar15[0x17] = (longlong)&DAT_14a171d50;
        plVar15[0x18] = 0;
        plVar15[0x19] = 0;
        plVar15[0x1a] = 0;
        plVar15[0x1b] = (longlong)&DAT_14a171d50;
        plVar15[0x1c] = 0;
        plVar15[0x1d] = 0;
        *(undefined8 *)((longlong)plVar15 + 0xe9) = 0;
        *(undefined8 *)((longlong)plVar15 + 0xf1) = 0;
        plVar15[0x21] = 0;
        plVar15[0x22] = 0;
        *(undefined8 *)((longlong)plVar15 + 0x134) = 0xffffffff00000080;
        plVar15[0x2b] = 0;
        plVar15[0x2c] = 0;
        *(undefined8 *)((longlong)plVar15 + 0x184) = 0xffffffff00000080;
        plVar15[0x35] = 0;
        plVar15[0x36] = 0;
        *(undefined8 *)((longlong)plVar15 + 0x1d4) = 0xffffffff00000080;
        plVar15[0x3f] = 0;
        plVar15[0x40] = 0;
        *(undefined8 *)((longlong)plVar15 + 0x224) = 0xffffffff00000080;
        iVar25 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar25 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar25 + 1U) {
          FUN_14612e95c(local_168,iVar25);
        }
        lVar19 = *local_168;
        lVar21 = (longlong)iVar25 * 0x10;
        *(longlong **)(lVar19 + lVar21) = plVar15 + 2;
        *(longlong **)(lVar19 + 8 + lVar21) = plVar15;
        if (plVar15 == (longlong *)0x0) {
          bVar26 = true;
          plVar13 = (longlong *)0x0;
          puVar17 = (undefined8 *)&DAT_00000010;
        }
        else {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          puVar17 = *(undefined8 **)(lVar19 + lVar21);
          plVar13 = (longlong *)((undefined8 *)(lVar19 + lVar21))[1];
          bVar26 = plVar13 == (longlong *)0x0;
          if (!bVar26) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          LOCK();
          plVar20 = plVar15 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
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
        *(undefined1 *)((longlong)puVar17 + 0x41) = 1;
        if (puVar14 != puVar17) {
          iVar25 = *(int *)(puVar14 + 1);
          pvVar5 = (void *)*puVar14;
          *(int *)(puVar17 + 1) = iVar25;
          if (iVar25 == 0 && *(int *)((longlong)puVar17 + 0xc) == 0) {
            *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar17,iVar25);
            if (iVar25 != 0) {
              memcpy((void *)*puVar17,pvVar5,(longlong)iVar25 * 2);
            }
          }
        }
        iVar25 = local_140;
        pppwVar6 = local_148;
        ppppwVar22 = (wchar_t ****)(puVar17 + 2);
        if (ppppwVar22 != &local_148) {
          lVar19 = (longlong)local_140;
          *(int *)(puVar17 + 3) = local_140;
          if (local_140 == 0 && *(int *)((longlong)puVar17 + 0x1c) == 0) {
            *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
          }
          else {
            FUN_1446dd670(ppppwVar22,local_140);
            if (iVar25 != 0) {
              memcpy(*ppppwVar22,pppwVar6,lVar19 * 2);
            }
          }
        }
        FUN_14020fad6(puVar17 + 4,L"_NCS");
        param_1 = local_178;
        _Str = L"";
        if (*(int *)(puVar17 + 5) != 0) {
          _Str = (wchar_t *)puVar17[4];
        }
        if (*(int *)(puVar17 + 3) == 0) {
          local_88 = (wchar_t ***)&DAT_149dfb77a;
LAB_142b153f7:
          sVar16 = wcslen((wchar_t *)local_88);
          uVar12 = (int)sVar16;
        }
        else {
          local_88 = *ppppwVar22;
          if ((wchar_t ****)local_88 != (wchar_t ****)0x0) goto LAB_142b153f7;
          uVar12 = 0;
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar12);
        local_78 = _Str;
        if (_Str == (wchar_t *)0x0) {
          uVar12 = 0;
        }
        else {
          sVar16 = wcslen(_Str);
          uVar12 = (int)sVar16;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar12);
        FUN_140bee87a(&local_d8,&local_88,2);
        uVar12 = local_16c;
        if ((undefined2 **)(puVar17 + 6) == &local_d8) {
          if (local_d8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (puVar17[6] != 0) {
            FUN_1400020a8();
          }
          puVar17[6] = local_d8;
          local_d8 = (undefined2 *)0x0;
          *(int *)(puVar17 + 7) = local_d0;
          *(undefined4 *)((longlong)puVar17 + 0x3c) = local_cc;
        }
        if (!bVar26) {
          LOCK();
          plVar15 = plVar13 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        FUN_141737b36(param_1,uVar12);
      }
      if (*(char *)(param_1 + 0x40) == '\x01') {
        local_158 = (byte *)0x0;
        plStack_150 = (longlong *)0x0;
        local_88 = local_148;
        if (local_140 == 0) {
          local_88 = (wchar_t ***)&DAT_149dfb77a;
        }
        if ((wchar_t ****)local_88 == (wchar_t ****)0x0) {
          uVar10 = 0;
        }
        else {
          sVar16 = wcslen((wchar_t *)local_88);
          uVar10 = (int)sVar16;
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        local_78 = L"nexus.yml";
        uStack_70 = CONCAT44(uStack_70._4_4_,9);
        FUN_140bee87a(&local_d8,&local_88,2);
        plVar15 = (longlong *)FUN_14054d1d4();
        puVar18 = &DAT_149dfb77a;
        if (local_d0 != 0) {
          puVar18 = local_d8;
        }
        cVar9 = (**(code **)(*plVar15 + 0x48))(plVar15,puVar18);
        if (cVar9 == '\0') {
          pbVar23 = (byte *)0x0;
          bVar26 = false;
        }
        else {
          local_e8 = (char *)0x0;
          uStack_e0 = 0;
          puVar18 = &DAT_149dfb77a;
          if (local_d0 != 0) {
            puVar18 = local_d8;
          }
          pbVar23 = (byte *)0x0;
          cVar9 = FUN_14158b496(&local_e8,puVar18,0);
          uVar8 = uStack_e0;
          if (cVar9 == '\0') {
            bVar26 = false;
          }
          else {
            lVar19 = (longlong)(int)uStack_e0;
            uVar11 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar11);
            if (uStack_e0._4_4_ < uVar11) {
              FUN_1447403be(&local_e8,uVar8 & 0xffffffff);
            }
            pcVar7 = local_e8;
            local_e8[lVar19] = '\0';
            local_88 = (wchar_t ***)0x0;
            uStack_80 = 0;
            local_78 = (wchar_t *)0x0;
            uStack_70 = 0;
            sVar16 = strlen(local_e8);
            FUN_140cd1a74(&local_88,pcVar7,sVar16);
            local_108 = L"UnspecifiedFile";
            local_100 = 0xf;
            local_118 = 0;
            local_116 = 0;
            local_110 = 0;
            local_128 = (wchar_t ***)&local_88;
            if (0xf < uStack_70) {
              local_128 = local_88;
            }
            local_120 = local_78;
            FUN_141183efe(&local_f8,&local_128,&local_118,&local_108);
            plVar15 = plStack_150;
            if (local_f0 == (longlong *)0x0) {
              local_158 = local_f8;
              plStack_150 = local_f0;
            }
            else {
              LOCK();
              *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
              UNLOCK();
              local_158 = local_f8;
              plStack_150 = local_f0;
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar15 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
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
              plVar15 = local_f0;
              if (local_f0 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_f0 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*local_f0)(local_f0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar15 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
            }
            pbVar23 = local_158;
            if (local_158 == (byte *)0x0) {
              bVar26 = false;
            }
            else {
              bVar26 = (~*local_158 & 3) == 0;
            }
            FUN_1401d9a90(&local_88);
          }
          if (local_e8 != (char *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (bVar26) {
          FUN_14708d3f0(param_1,&local_158,puVar14,&local_148);
          FUN_14708e2fe(param_1,&local_158,uVar12);
          FUN_141737b36(param_1,uVar12);
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0xb0) + 0x10))();
          puVar17 = (undefined8 *)FUN_14708eb4e(local_160);
          if (puVar17 != &DAT_14c9a1308) {
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
              UNLOCK();
            }
            plVar15 = (longlong *)puVar17[1];
            *puVar17 = pbVar23;
            puVar17[1] = plStack_150;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar15 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
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
          }
          puVar3 = puVar17 + 2;
          if (puVar14 != puVar3) {
            iVar25 = *(int *)(puVar14 + 1);
            pvVar5 = (void *)*puVar14;
            *(int *)(puVar17 + 3) = iVar25;
            if (iVar25 == 0 && *(int *)((longlong)puVar17 + 0x1c) == 0) {
              *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
            }
            else {
              FUN_1446dd670(puVar3,iVar25);
              if (iVar25 != 0) {
                memcpy((void *)*puVar3,pvVar5,(longlong)iVar25 * 2);
              }
            }
          }
          iVar25 = local_140;
          pppwVar6 = local_148;
          param_1 = local_178;
          ppppwVar22 = (wchar_t ****)(puVar17 + 4);
          if (ppppwVar22 != &local_148) {
            lVar19 = (longlong)local_140;
            *(int *)(puVar17 + 5) = local_140;
            if (local_140 == 0 && *(int *)((longlong)puVar17 + 0x2c) == 0) {
              *(undefined4 *)((longlong)puVar17 + 0x2c) = 0;
            }
            else {
              FUN_1446dd670(ppppwVar22,local_140);
              if (iVar25 != 0) {
                memcpy(*ppppwVar22,pppwVar6,lVar19 * 2);
              }
            }
          }
        }
        plVar15 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          plVar13 = plStack_150 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plStack_150)(plStack_150);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      puVar14 = puVar14 + 2;
      lVar24 = lVar24 + -0x10;
    } while (lVar24 != 0);
  }
  lVar24 = *(longlong *)(param_1 + 8);
  puVar14 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  if (puVar14 != (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(lVar24 + 0x10);
    *(undefined8 **)(lVar24 + 0x10) = puVar14;
    *puVar17 = puVar14;
    lVar24 = *(longlong *)(param_1 + 8);
  }
  (**(code **)(**(longlong **)(lVar24 + 0xb0) + 0x10))();
  local_b8 = 0;
  local_a8 = &PTR_LAB_149e16f80;
  local_a0 = &LAB_142b1d66c;
  local_c8 = FUN_140d11fbe;
  local_188 = 0xff;
  FUN_14014aede(&local_88);
  FUN_14009fd82(DAT_14c82b500,&local_88,0xff);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar24 = *(longlong *)(param_1 + 0x10);
    lVar19 = (longlong)*(int *)(param_1 + 0x18) * 0x30;
    do {
      FUN_14708eb8e(param_1,lVar24);
      lVar24 = lVar24 + 0x30;
      lVar19 = lVar19 + -0x30;
    } while (lVar19 != 0);
  }
  FUN_1457b7504(*(longlong *)(param_1 + 0x20) + 0x10,param_1 + 0x60);
  FUN_1459afa46(*(undefined8 *)(param_1 + 0x20),param_1 + 0x70);
  if ((wchar_t ****)local_88 != (wchar_t ****)0x0) {
    LOCK();
    ppppwVar22 = (wchar_t ****)(local_88 + 1);
    *(int *)ppppwVar22 = *(int *)ppppwVar22 + -1;
    UNLOCK();
    if (*(int *)ppppwVar22 == 0) {
      (*(code *)**local_88)(local_88,1);
    }
  }
  FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
  if (local_138 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b159be FUN_142b159be body=21 status=ok
// SIG undefined FUN_142b159be(void)

undefined8 FUN_142b159be(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == (undefined1 *)0x0) {
    return 0;
  }
  uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff6b;
  return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x02');
}



// FUNCTION 142b159d3 FUN_142b159d3 body=69 status=ok
// SIG undefined FUN_142b159d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b159d3(void)

{
  _DAT_14c9a0df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b15a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a0e00,1);
  return;
}



// FUNCTION 142b15a3a FUN_142b15a3a body=41 status=ok
// SIG undefined FUN_142b15a3a(void)

void FUN_142b15a3a(void)

{
  DAT_14c9a0e80 = 0;
  if (DAT_14c9a0e78 != 0) {
    FUN_1400020a8();
  }
  FUN_1457b50ba();
  return;
}



// FUNCTION 142b15a64 FUN_142b15a64 body=848 status=ok
// SIG undefined FUN_142b15a64(void)

undefined8 *
FUN_142b15a64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  lVar2 = param_3[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = *param_4;
  param_1[4] = &DAT_14a171d50;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = *(undefined8 *)(param_4 + 4);
  FUN_1406022fe(param_1 + 6,param_4 + 6);
  param_1[8] = &DAT_14a171d50;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = *(undefined8 *)(param_4 + 0xc);
  FUN_1406022fe(param_1 + 10,param_4 + 0xe);
  param_1[0xc] = &DAT_14a171d50;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = *(undefined8 *)(param_4 + 0x14);
  FUN_1406022fe(param_1 + 0xe,param_4 + 0x16);
  param_1[0x10] = &DAT_14a171d50;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = *(undefined8 *)(param_4 + 0x1c);
  FUN_1406022fe(param_1 + 0x12,param_4 + 0x1e);
  param_1[0x14] = &DAT_14a171d50;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = *(undefined8 *)(param_4 + 0x24);
  FUN_1406022fe(param_1 + 0x16,param_4 + 0x26);
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_5 + 1);
  pvVar3 = (void *)*param_5;
  *(int *)(param_1 + 0x19) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy((void *)param_1[0x18],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_5 + 3);
  pvVar3 = (void *)param_5[2];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x1c] = 0;
  iVar1 = *(int *)(param_5 + 5);
  pvVar3 = (void *)param_5[4];
  *(int *)(param_1 + 0x1d) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1c,iVar1,0);
    memcpy((void *)param_1[0x1c],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x1e] = 0;
  iVar1 = *(int *)(param_5 + 7);
  pvVar3 = (void *)param_5[6];
  *(int *)(param_1 + 0x1f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar1,0);
    memcpy((void *)param_1[0x1e],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x20] = 0;
  iVar1 = *(int *)(param_5 + 9);
  pvVar3 = (void *)param_5[8];
  *(int *)(param_1 + 0x21) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy((void *)param_1[0x20],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x24] = param_5[0xc];
  uVar4 = param_5[0xb];
  param_1[0x22] = param_5[10];
  param_1[0x23] = uVar4;
  param_1[0x25] = *param_6;
  lVar2 = param_6[1];
  param_1[0x26] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  return param_1;
}



// FUNCTION 142b15db4 FUN_142b15db4 body=27 status=ok
// SIG undefined FUN_142b15db4(void)

void FUN_142b15db4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*(char *)(param_2 + 1) == '\0') {
    *param_1 = *param_2;
  }
  return;
}



// FUNCTION 142b15de0 FUN_142b15de0 body=683 status=ok
// SIG undefined FUN_142b15de0(void)

undefined8 * FUN_142b15de0(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return &DAT_14c9a0ff8;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*plVar1 == 0) {
    return &DAT_14c9a0ff8;
  }
  lVar2 = *(longlong *)(param_2 + 4);
  uVar9 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar11 = (uint)lVar2 & 0xffff;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar11) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar11 >> 4);
LAB_142b15e3f:
  if (*(longlong *)(param_1 + 8) == 0) {
    return &DAT_14c9a0ff8;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return &DAT_14c9a0ff8;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  bVar12 = true;
  if (*(int *)(lVar4 + 0x28) != *(int *)(lVar4 + 0x54)) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    uVar11 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar10 = (uint)lVar5 & 0xffff;
    lVar7 = lVar4 + 0x58;
    if (*(longlong *)(lVar4 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0x68) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar10) +
                             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(lVar4 + 0x20) + (longlong)iVar6 * 0x60;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar6 * 0x60) == lVar5) {
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x10) == *(int *)(lVar7 + 0x3c)) goto LAB_142b15f7e;
            lVar5 = lVar7 + 0x40;
            if (*(longlong *)(lVar7 + 0x48) != 0) {
              lVar5 = *(longlong *)(lVar7 + 0x48);
            }
            iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar9) * 4);
            if (iVar6 == -1) goto LAB_142b15f7e;
            goto LAB_142b15f47;
          }
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x58);
      } while (iVar6 != -1);
    }
  }
  goto LAB_142b15e69;
  while (iVar6 = *(int *)(lVar5 + 0x18), iVar6 != -1) {
LAB_142b15f47:
    lVar5 = *(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20) == lVar2)
    goto LAB_142b15f58;
  }
LAB_142b15f7e:
  lVar5 = 0;
LAB_142b15f58:
  bVar12 = lVar5 == 0;
LAB_142b15e69:
  if ((param_3 & bVar12) != 1) {
    if (bVar12 != false) {
      return &DAT_14c9a0ff8;
    }
    if (param_1 == 0) {
      return &DAT_14c9a0ff8;
    }
    if (*(int *)(lVar4 + 0x28) == *(int *)(lVar4 + 0x54)) {
      return &DAT_14c9a0ff8;
    }
    lVar5 = *(longlong *)(*plVar1 + 0x20);
    uVar11 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar10 = (uint)lVar5 & 0xffff;
    lVar7 = lVar4 + 0x58;
    if (*(longlong *)(lVar4 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0x68) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar10) +
                             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar6 == -1) {
      return &DAT_14c9a0ff8;
    }
    puVar8 = (undefined8 *)0x0;
    goto LAB_142b15ff6;
  }
  param_1 = *(longlong *)(param_1 + 0x28);
  param_3 = 1;
  if (param_1 == 0) {
    return &DAT_14c9a0ff8;
  }
  goto LAB_142b15e3f;
  while (iVar6 = *(int *)(lVar7 + 0x58), iVar6 != -1) {
LAB_142b15ff6:
    lVar7 = *(longlong *)(lVar4 + 0x20) + (longlong)iVar6 * 0x60;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar6 * 0x60) == lVar5) {
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x10) == *(int *)(lVar7 + 0x3c)) goto LAB_142b16087;
        lVar4 = lVar7 + 0x40;
        if (*(longlong *)(lVar7 + 0x48) != 0) {
          lVar4 = *(longlong *)(lVar7 + 0x48);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar9) * 4);
        if (iVar6 == -1) goto LAB_142b16087;
        goto LAB_142b16049;
      }
      puVar8 = (undefined8 *)0x0;
      break;
    }
  }
  goto LAB_142b16065;
  while (iVar6 = *(int *)(lVar4 + 0x18), iVar6 != -1) {
LAB_142b16049:
    lVar4 = *(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20) == lVar2)
    goto LAB_142b1605a;
  }
LAB_142b16087:
  lVar4 = 0;
LAB_142b1605a:
  puVar8 = (undefined8 *)(lVar4 + 8);
  if (lVar4 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
LAB_142b16065:
  puVar3 = &DAT_14c9a0ff8;
  if (puVar8 != (undefined8 *)0x0) {
    puVar3 = puVar8;
  }
  return puVar3;
}



// FUNCTION 142b160e2 FUN_142b160e2 body=25 status=ok
// SIG undefined FUN_142b160e2(void)

void FUN_142b160e2(longlong *param_1,longlong *param_2)

{
  if (*param_1 != *param_2) {
    *param_1 = 0;
    *param_1 = *param_2;
  }
  return;
}



// FUNCTION 142b160fc FUN_142b160fc body=26 status=ok
// SIG undefined FUN_142b160fc(void)

void FUN_142b160fc(longlong *param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)*param_1;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 142b16116 FUN_142b16116 body=17 status=ok
// SIG undefined FUN_142b16116(void)

void FUN_142b16116(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  return;
}



// FUNCTION 142b16128 FUN_142b16128 body=44 status=ok
// SIG undefined FUN_142b16128(void)

void FUN_142b16128(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != 0) && ((int)param_1[1] != -1)) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  return;
}



// FUNCTION 142b16154 FUN_142b16154 body=21 status=ok
// SIG undefined FUN_142b16154(void)

undefined4 FUN_142b16154(longlong *param_1,longlong *param_2)

{
  if (*param_2 == *param_1) {
    return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 142b16169 FUN_142b16169 body=69 status=ok
// SIG undefined FUN_142b16169(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b16169(void)

{
  _DAT_14c9a1060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b161ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1068,1);
  return;
}



// FUNCTION 142b161ae FUN_142b161ae body=69 status=ok
// SIG undefined FUN_142b161ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b161ae(void)

{
  _DAT_14c9a1078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b161f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1080,1);
  return;
}



// FUNCTION 142b161f3 FUN_142b161f3 body=37 status=ok
// SIG undefined FUN_142b161f3(void)

void FUN_142b161f3(void)

{
  if (DAT_14c9a10e0 == '\x01') {
    FUN_141675470(&DAT_14c9a1098);
    DAT_14c9a10e0 = '\0';
  }
  return;
}



// FUNCTION 142b16229 FUN_142b16229 body=54 status=ok
// SIG undefined FUN_142b16229(void)

void FUN_142b16229(void)

{
  FUN_14474dad8(DAT_14c9a1270,DAT_14c9a1280);
  if (DAT_14c9a1270 == 0) {
    return;
  }
  FUN_14005b77c(DAT_14c9a1278);
  return;
}



// FUNCTION 142b16260 FUN_142b16260 body=25 status=ok
// SIG undefined FUN_142b16260(void)

undefined8 * FUN_142b16260(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  
  pbVar1 = (byte *)*param_1;
  puVar2 = &DAT_14c9a1270;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar2 = *(undefined8 **)(pbVar1 + 8);
  }
  return puVar2;
}



// FUNCTION 142b16279 FUN_142b16279 body=783 status=ok
// SIG undefined FUN_142b16279(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b16279(void)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
  DAT_14c9a12d8 = 0;
  if (DAT_14c9a12d0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a12b8 == 0) {
    uVar12 = 0;
    uVar15 = 1;
    iVar6 = 0;
    iVar13 = 0;
  }
  else {
    puVar10 = &DAT_14c9a12a0;
    if (DAT_14c9a12b0 != (uint *)0x0) {
      puVar10 = DAT_14c9a12b0;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar6 = DAT_14c9a12b8 + 0x1e;
      if (-1 < DAT_14c9a12b8 + -1) {
        iVar6 = DAT_14c9a12b8 + -1;
      }
      uVar12 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar12) goto LAB_142b164c6;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar3 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (DAT_14c9a12b8 <= iVar6) {
      iVar6 = DAT_14c9a12b8;
    }
  }
  if (iVar6 < DAT_14c9a12b8) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = DAT_14c9a1288;
      plVar4 = *(longlong **)(DAT_14c9a1288 + 0x30 + (longlong)iVar6 * 0x40);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          if (*(code **)*plVar4 == FUN_1456d1724) {
            FUN_14474dbbc(plVar4 + 2);
          }
          else {
            (**(code **)*plVar4)(plVar4);
          }
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            pcVar5 = *(code **)(*plVar4 + 0x10);
            if (pcVar5 == FUN_1456beaa2) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
              _DAT_14c9a10a4 = _DAT_14c9a10a4 + -1;
              *plVar4 = (longlong)DAT_14c9a1098;
              DAT_14c9a1098 = plVar4;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
            }
            else if (pcVar5 == FUN_1448c525e) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
            else {
              (*pcVar5)(plVar4);
            }
          }
        }
      }
      if (*(longlong *)(lVar14 + (longlong)iVar6 * 0x40 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = DAT_14c9a12b0;
      if (DAT_14c9a12b0 == (uint *)0x0) {
        puVar10 = &DAT_14c9a12a0;
      }
      iVar6 = (int)uVar12;
      lVar14 = (longlong)iVar6;
      uVar7 = puVar10[lVar14] & uVar16;
      if (uVar7 == 0) {
        iVar8 = DAT_14c9a12b8 + 0x1e;
        if (-1 < DAT_14c9a12b8 + -1) {
          iVar8 = DAT_14c9a12b8 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar7 = puVar10[lVar14 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar14 == lVar11) goto LAB_142b164c6;
        }
        uVar12 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < DAT_14c9a12b8);
  }
LAB_142b164c6:
  DAT_14c9a1298 = 0;
  if (DAT_14c9a129c != 0) {
    FUN_1447b3e64(&DAT_14c9a1288,0);
  }
  _DAT_14c9a12c0 = 0xffffffff;
  DAT_14c9a12b8 = 0;
  if (0x80 < DAT_14c9a12bc) {
    DAT_14c9a12bc = 0x80;
    FUN_1446efbd8(&DAT_14c9a12a0,0);
  }
  if (DAT_14c9a12b0 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1288 == 0) {
    return;
  }
  FUN_14005b77c(DAT_14c9a1290);
  return;
}



// FUNCTION 142b16588 FUN_142b16588 body=59 status=ok
// SIG undefined FUN_142b16588(void)

void FUN_142b16588(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9a1310;
  if (DAT_14c9a1310 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9a1310 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b165b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b165c3 FUN_142b165c3 body=69 status=ok
// SIG undefined FUN_142b165c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b165c3(void)

{
  _DAT_14c9a10e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b16605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a10f0,1);
  return;
}



// FUNCTION 142b16622 FUN_142b16622 body=20079 status=ok
// SIG undefined FUN_142b16622(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142b16622(longlong *param_1,longlong *param_2,uint **param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined2 *puVar20;
  uint *puVar21;
  int iVar22;
  uint **ppuVar23;
  uint **ppuVar24;
  uint **ppuVar25;
  uint **ppuVar26;
  undefined **ppuVar27;
  ulonglong uVar28;
  ushort uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  int iVar33;
  longlong lVar34;
  void *_Dst;
  longlong *plVar35;
  uint uVar36;
  undefined4 *puVar37;
  undefined2 *puVar38;
  ulonglong uVar39;
  ushort uVar40;
  byte bVar41;
  int iVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auStack_5d8 [32];
  undefined8 local_5b8;
  uint **local_5b0;
  uint **local_5a8;
  ulonglong local_5a0;
  uint *local_598;
  uint *local_590;
  uint **local_588;
  ulonglong local_580;
  longlong *local_578;
  ulonglong local_570;
  longlong *local_568;
  ulonglong local_560;
  uint *local_558;
  undefined4 local_550;
  float local_54c;
  int local_548;
  undefined1 local_544 [12];
  ulonglong *local_538;
  undefined8 *local_530;
  undefined8 **local_528;
  undefined8 ***local_520;
  undefined8 **local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e0;
  uint uStack_4dc;
  uint uStack_4d8;
  uint uStack_4d4;
  undefined **local_4d0;
  int local_4c8;
  longlong local_4b8;
  byte local_4a8;
  longlong *local_478;
  longlong local_458;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  ulonglong local_428;
  undefined8 uStack_420;
  undefined8 local_408;
  undefined1 local_400;
  uint *local_3f8;
  undefined8 uStack_3f0;
  uint **local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3ac;
  undefined4 local_3a4;
  longlong local_398;
  undefined4 local_390;
  undefined8 *local_388;
  undefined2 **local_380;
  undefined4 *local_378;
  longlong local_370;
  undefined4 *puStack_368;
  undefined4 *local_360;
  undefined8 *puStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  longlong local_310;
  undefined4 local_308;
  undefined4 local_300 [2];
  undefined8 local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined4 local_2ac;
  longlong local_2a0;
  undefined4 local_298;
  byte local_290;
  undefined8 local_288;
  longlong *plStack_280;
  undefined4 local_278 [2];
  longlong local_270;
  ulonglong uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  longlong local_220;
  undefined4 local_218;
  byte local_210;
  undefined4 local_208 [2];
  longlong local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  longlong local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined2 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined1 local_f8;
  ulonglong local_e8 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  byte local_78;
  undefined8 local_70;
  longlong *plStack_68;
  ulonglong local_60;
  
  lVar31 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  local_5b0 = param_3;
  local_578 = param_1;
  local_568 = param_2;
  if ((DAT_14c9a1ab0 != 0) && (*(byte *)((longlong)param_3 + 2) == 1)) {
    puVar15 = (uint *)(DAT_14c9a1ab0 + 0x80);
    uVar36 = *(uint *)(DAT_14c9a1ab0 + 0x98);
    ppuVar23 = (uint **)(ulonglong)uVar36;
    if (uVar36 == 0) {
      uVar43 = 1;
      uVar45 = 0;
      iVar33 = 0;
      uVar10 = 0;
    }
    else {
      puVar14 = *(uint **)(DAT_14c9a1ab0 + 0x90);
      if (*(uint **)(DAT_14c9a1ab0 + 0x90) == (uint *)0x0) {
        puVar14 = puVar15;
      }
      uVar10 = *puVar14;
      if (uVar10 == 0) {
        iVar33 = uVar36 + 0x1e;
        if (-1 < (int)(uVar36 - 1)) {
          iVar33 = uVar36 - 1;
        }
        uVar45 = 0;
        uVar44 = (ulonglong)(uint)(iVar33 >> 5);
        if (iVar33 >> 5 < 1) {
          uVar44 = uVar45;
        }
        iVar33 = 0;
        do {
          if (uVar44 == uVar45) goto LAB_142b16719;
          iVar33 = iVar33 + 0x20;
          uVar10 = puVar14[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar45 = 0;
        iVar33 = 0;
      }
      uVar43 = (ulonglong)(-uVar10 & uVar10);
      uVar44 = uVar43 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar44 != 0) {
        for (; uVar44 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      uVar10 = (iVar33 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if ((int)uVar36 <= (int)uVar10) {
        uVar10 = uVar36;
      }
    }
    if (uVar10 != uVar36) {
      local_588 = param_3 + 7;
      uVar36 = 0xffffffff;
      local_5a8 = ppuVar23;
      local_590 = puVar15;
      do {
        lVar34 = *(longlong *)(*(longlong *)(lVar31 + 0x70) + 8 + (longlong)(int)uVar10 * 0x18);
        if (lVar34 != 0) {
          *(undefined1 *)(lVar34 + 0xa3) = 0;
          if (((*(int *)(local_5b0 + 2) < 0) || (*(int *)(local_5b0 + 2) <= *(int *)(lVar34 + 0x98))
              ) && ((*(int *)((longlong)local_5b0 + 0x14) < 0 ||
                    (*(int *)(lVar34 + 0x98) <= *(int *)((longlong)local_5b0 + 0x14))))) {
            if (*(int *)(local_5b0 + 4) != 0) {
              local_e8[0] = *(ulonglong *)(lVar34 + 0x90);
              if (local_e8[0] == 0) {
                FUN_140056680(&local_4d0);
              }
              else {
                FUN_1400021e4(local_e8);
              }
              if ((longlong)*(int *)(local_5b0 + 4) != 0) {
                local_598 = local_5b0[3];
                puVar15 = local_598 + (longlong)*(int *)(local_5b0 + 4) * 4;
LAB_142b1ae40:
                FUN_1400b22c2(&local_188,L".Preview");
                iVar13 = (int)uStack_180 + -1;
                if ((int)uStack_180 == 0) {
                  iVar13 = 0;
                }
                puVar20 = &DAT_149dfb77a;
                if ((int)uStack_180 != 0) {
                  puVar20 = local_188;
                }
                cVar8 = FUN_144a38768(local_598,puVar20,iVar13,1);
                if (local_188 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar10 = local_598[2];
                if (cVar8 == '\0') {
                  puVar20 = &DAT_149dfb77a;
                  if (uVar10 != 0) {
                    puVar20 = *(undefined2 **)local_598;
                  }
                  ppuVar27 = (undefined **)&DAT_149dfb77a;
                  if (local_4c8 != 0) {
                    ppuVar27 = local_4d0;
                  }
                  lVar16 = 0;
                  do {
                    uVar29 = *(ushort *)((longlong)ppuVar27 + lVar16);
                    uVar44 = (ulonglong)uVar29;
                    uVar40 = *(ushort *)((longlong)puVar20 + lVar16);
                    if (uVar29 == uVar40) {
                      if (uVar29 == 0) goto LAB_142b1aff0;
                    }
                    else {
                      if (0x7f < (uVar40 | uVar29)) goto LAB_142b1afc8;
                      uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar44];
                      uVar28 = (ulonglong)uVar40;
                      uVar40 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
                      if ((&DAT_149e05da0)[uVar44] != (&DAT_149e05da0)[uVar28]) goto LAB_142b1afc8;
                    }
                    lVar16 = lVar16 + 2;
                  } while( true );
                }
                uVar30 = uVar10 - 1;
                if (uVar10 == 0) {
                  uVar30 = 0;
                }
                uVar44 = (ulonglong)uVar30;
                if (0 < (int)uVar30) {
                  puVar20 = &DAT_149dfb77a;
                  if (uVar10 != 0) {
                    puVar20 = *(undefined2 **)local_598;
                  }
                  ppuVar27 = (undefined **)&DAT_149dfb77a;
                  if (local_4c8 != 0) {
                    ppuVar27 = local_4d0;
                  }
                  lVar16 = 0;
                  do {
                    uVar29 = *(ushort *)((longlong)ppuVar27 + lVar16);
                    uVar28 = (ulonglong)uVar29;
                    uVar40 = *(ushort *)((longlong)puVar20 + lVar16);
                    if (uVar29 == uVar40) {
                      bVar7 = false;
                      if ((uVar29 == 0) || (uVar44 == 1)) goto LAB_142b1aff7;
                    }
                    else {
                      if (0x7f < (uVar40 | uVar29)) goto LAB_142b1afe8;
                      uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
                      uVar32 = (ulonglong)uVar40;
                      uVar40 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
                      if ((&DAT_149e05da0)[uVar28] != (&DAT_149e05da0)[uVar32]) goto LAB_142b1afe8;
                      if (uVar44 == 1) goto LAB_142b1aff0;
                    }
                    uVar44 = uVar44 - 1;
                    lVar16 = lVar16 + 2;
                  } while( true );
                }
                goto LAB_142b1afcf;
              }
LAB_142b1aff4:
              bVar7 = true;
LAB_142b1aff7:
              if (local_4d0 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              puVar15 = local_590;
              ppuVar23 = local_5a8;
              if (bVar7) goto LAB_142b1b16b;
            }
            if ((longlong)*(int *)(local_5b0 + 6) != 0) {
              puVar14 = local_5b0[5];
              puVar21 = puVar14 + (longlong)*(int *)(local_5b0 + 6) * 4;
LAB_142b1b03e:
              uVar10 = puVar14[2];
              uVar30 = uVar10 - 1;
              if (uVar10 == 0) {
                uVar30 = 0;
              }
              puVar20 = &DAT_149dfb77a;
              if (uVar10 != 0) {
                puVar20 = *(undefined2 **)puVar14;
              }
              if (0 < (int)uVar30) {
                puVar38 = &DAT_149dfb77a;
                if (*(int *)(lVar34 + 0x20) != 0) {
                  puVar38 = *(undefined2 **)(lVar34 + 0x18);
                }
                uVar44 = (ulonglong)uVar30;
                lVar16 = 0;
                do {
                  uVar29 = *(ushort *)((longlong)puVar38 + lVar16);
                  uVar40 = *(ushort *)((longlong)puVar20 + lVar16);
                  if (uVar29 == uVar40) {
                    if (uVar29 == 0) goto LAB_142b1b0ed;
                  }
                  else {
                    puVar15 = local_590;
                    if (0x7f < (uVar40 | uVar29)) {
                      iVar13 = (uint)uVar29 - (uint)uVar40;
                      goto LAB_142b1b0c7;
                    }
                    if ((&DAT_149e05da0)[uVar29] != (&DAT_149e05da0)[(uint)uVar40])
                    goto code_r0x000142b1b0c4;
                  }
                  uVar44 = uVar44 - 1;
                  if (uVar44 == 0) goto LAB_142b1b0ed;
                  lVar16 = lVar16 + 2;
                } while( true );
              }
              goto LAB_142b1b0cc;
            }
LAB_142b1b0ed:
            if ((local_5b0[8] != (uint *)0x0) && ((longlong)*(int *)(local_5b0 + 10) != 0)) {
              lVar16 = 0;
              do {
                if (*(longlong *)((longlong)local_5b0[9] + lVar16) != 0) {
                  cVar8 = FUN_140d1d704(lVar34 + 0xa8,local_588,*(byte *)(local_5b0 + 0xb));
                  ppuVar23 = local_5a8;
                  if (cVar8 == '\0') goto LAB_142b1b16b;
                  break;
                }
                lVar16 = lVar16 + 8;
              } while ((longlong)*(int *)(local_5b0 + 10) * 8 != lVar16);
            }
            uVar9 = 1;
            if (*(byte *)((longlong)local_5b0 + 5) == 1) {
              uVar9 = *(undefined1 *)(lVar34 + 0xa2);
            }
            *(undefined1 *)(lVar34 + 0xa3) = uVar9;
            ppuVar23 = local_5a8;
          }
        }
LAB_142b1b16b:
        uVar36 = uVar36 & ~(uint)uVar43;
        puVar14 = *(uint **)(lVar31 + 0x90);
        if (*(uint **)(lVar31 + 0x90) == (uint *)0x0) {
          puVar14 = puVar15;
        }
        uVar30 = *(uint *)(lVar31 + 0x98);
        iVar13 = (int)uVar45;
        lVar34 = (longlong)iVar13;
        uVar10 = puVar14[lVar34] & uVar36;
        if (uVar10 == 0) {
          iVar22 = uVar30 + 0x1e;
          if (-1 < (int)(uVar30 - 1)) {
            iVar22 = uVar30 - 1;
          }
          iVar22 = iVar22 >> 5;
          iVar33 = iVar33 + 0x20;
          iVar42 = iVar22;
          if (iVar22 < iVar13) {
            iVar42 = iVar13;
          }
          if (iVar13 < iVar22) {
            lVar16 = 0;
            do {
              uVar10 = puVar14[lVar34 + lVar16 + 1];
              if (uVar10 != 0) {
                uVar45 = (ulonglong)(iVar13 + (int)lVar16 + 1);
                uVar36 = 0xffffffff;
                goto LAB_142b1b1e7;
              }
              iVar33 = iVar33 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar42 - lVar34 != lVar16);
            uVar36 = 0xffffffff;
            iVar13 = iVar42;
          }
          uVar45 = (ulonglong)(iVar13 + 1);
          puVar15 = local_590;
          ppuVar23 = local_5a8;
          uVar10 = uVar30;
        }
        else {
LAB_142b1b1e7:
          uVar43 = (ulonglong)(-uVar10 & uVar10);
          uVar44 = uVar43 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar44 != 0) {
            for (; uVar44 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar10 = (iVar33 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar30 <= (int)uVar10) {
            uVar10 = uVar30;
          }
        }
      } while (uVar10 != (uint)ppuVar23);
    }
  }
LAB_142b16719:
  uVar45 = 0;
  local_e8[0] = local_e8[0] & 0xffffffff00000000;
  local_a8 = 0;
  local_a0 = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  plStack_68 = (longlong *)0x0;
  FUN_14709432e(local_e8,&DAT_149e02088);
  local_380 = &local_188;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0xf;
  local_160 = 0;
  local_128 = 0;
  local_120 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  uVar36 = 0x1000fff;
  if (DAT_14c9a1130 == '\0') {
    uVar36 = 0;
  }
  local_188 = (undefined2 *)(ulonglong)uVar36;
  FUN_147093874(local_380,0);
  local_208[0] = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1b4 = 0xffffffff00000080;
  local_1ac = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  FUN_147093c7a(local_208,0xffff);
  local_278[0] = 0;
  local_240 = 0;
  local_238 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_234 = 0xffffffff00000080;
  local_22c = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  FUN_1470941b4(local_278,&DAT_14c9485f0);
  local_378 = local_300;
  local_300[0] = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2f8 = 0;
  lStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  local_2b4 = 0xffffffff00000080;
  local_2ac = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  plStack_280 = (longlong *)0x0;
  local_388 = &local_4f8;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_528 = &local_388;
  local_330 = 0;
  local_328 = 0;
  local_370 = 0;
  puStack_358 = (undefined8 *)0x0;
  local_350 = 0;
  uStack_348 = 0;
  local_324 = 0xffffffff00000080;
  local_31c = 0;
  local_310 = 0;
  local_308 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_538 = &local_510;
  local_510 = 0;
  local_530 = &local_3d8;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3ac = 0xffffffff00000080;
  local_3a4 = 0;
  local_398 = 0;
  local_390 = 0;
  local_520 = &local_518;
  local_558 = (uint *)(local_578 + 2);
  uVar36 = *(uint *)(local_578 + 5);
  uVar44 = 1;
  iVar33 = 0;
  uVar10 = 0;
  ppuVar23 = local_5b0;
  local_518 = local_528;
  puStack_368 = local_208;
  local_360 = local_278;
  if (uVar36 != 0) {
    puVar15 = (uint *)local_578[4];
    if ((uint *)local_578[4] == (uint *)0x0) {
      puVar15 = local_558;
    }
    uVar10 = *puVar15;
    if (uVar10 == 0) {
      iVar33 = uVar36 + 0x1e;
      if (-1 < (int)(uVar36 - 1)) {
        iVar33 = uVar36 - 1;
      }
      uVar45 = 0;
      uVar44 = (ulonglong)(uint)(iVar33 >> 5);
      if (iVar33 >> 5 < 1) {
        uVar44 = uVar45;
      }
      iVar33 = 0;
      do {
        if (uVar44 == uVar45) goto LAB_142b169d9;
        iVar33 = iVar33 + 0x20;
        uVar10 = puVar15[uVar45 + 1];
        uVar45 = uVar45 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar45 = 0;
      iVar33 = 0;
    }
    uVar44 = (ulonglong)(-uVar10 & uVar10);
    uVar43 = uVar44 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar43 != 0) {
      for (; uVar43 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar10 = (iVar33 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
    if ((int)uVar36 <= (int)uVar10) {
      uVar10 = uVar36;
    }
  }
  if (uVar10 != uVar36) {
    local_588 = (uint **)CONCAT44(local_588._4_4_,0xffffffff);
    plVar35 = local_578;
    local_560 = (ulonglong)uVar36;
    do {
      lVar31 = *plVar35;
      local_5a8 = (uint **)(lVar31 + (longlong)(int)uVar10 * 0x20);
      FUN_14709b940(&local_3d8);
      local_3f8 = (uint *)0x0;
      uStack_3f0 = 0;
      local_428 = 0;
      uStack_420 = 0;
      puVar15 = *(uint **)(lVar31 + (longlong)(int)uVar10 * 0x20);
      while (uVar28 = uStack_420, uVar43 = uStack_500, *(longlong *)(puVar15 + 0x30) != 0) {
        lVar34 = (longlong)(int)uStack_420;
        lVar31 = *(longlong *)(*(longlong *)(puVar15 + 0x30) + lVar34 * 8);
        if (lVar31 == 0) break;
        uVar36 = (int)uStack_420 + 1;
        uStack_420 = CONCAT44(uStack_420._4_4_,uVar36);
        if (uStack_420._4_4_ < uVar36) {
          FUN_140ca86cc(&local_428,uVar28 & 0xffffffff);
        }
        *(longlong *)(local_428 + lVar34 * 8) = lVar31;
        puVar15 = *local_5a8;
      }
      local_570 = CONCAT44(local_570._4_4_,iVar33);
      lVar31 = (longlong)(int)uStack_500;
      uVar36 = (int)uStack_500 + 1;
      uStack_500 = CONCAT44(uStack_500._4_4_,uVar36);
      local_580 = uVar44;
      if (uStack_500._4_4_ < uVar36) {
        FUN_142b1dee8(&local_508,uVar43 & 0xffffffff);
      }
      uVar43 = local_508;
      lVar31 = lVar31 * 0x178;
      uVar44 = local_508 + lVar31;
      FUN_142b1de1f(uVar44);
      puVar6 = (undefined8 *)(uVar43 + lVar31);
      puStack_358 = puVar6 + 0x1f;
      *puVar6 = *local_5a8;
      local_370 = uVar43 + lVar31 + 0x88;
      lVar31 = *(longlong *)(*local_5a8 + 0x4c);
      local_510 = uVar44;
      while (lVar34 = lVar31, lVar34 != 0) {
        lVar31 = *(longlong *)(lVar34 + 0x28);
        if (((*(byte **)(lVar34 + 0x18) != (byte *)0x0) &&
            (bVar41 = **(byte **)(lVar34 + 0x18), (bVar41 & 0x68) == 0 && (bVar41 & 3) != 0)) &&
           (lVar16 = FUN_142b1b492(&local_538,*(undefined8 *)(lVar34 + 8)), lVar16 != 0)) {
          uVar17 = FUN_14709345c(&local_388,lVar34 + 0x18,*(byte *)((longlong)local_5b0 + 4));
          *(undefined8 *)(lVar16 + 0x178) = uVar17;
        }
      }
      local_5a0 = uVar45;
      if ((longlong)*(int *)(local_5a8 + 2) != 0) {
        puVar15 = local_5a8[1];
        local_598 = puVar15 + (longlong)*(int *)(local_5a8 + 2) * 2;
        do {
          lVar31 = *(longlong *)puVar15;
          lVar34 = *(longlong *)(lVar31 + 0x58);
          while (lVar16 = lVar34, lVar16 != 0) {
            lVar34 = *(longlong *)(lVar16 + 0x28);
            if (((*(byte **)(lVar16 + 0x18) != (byte *)0x0) &&
                (bVar41 = **(byte **)(lVar16 + 0x18), (bVar41 & 0x68) == 0 && (bVar41 & 3) != 0)) &&
               (lVar18 = FUN_142b1b492(&local_538,*(undefined8 *)(lVar16 + 8)), lVar18 != 0)) {
              lVar18 = FUN_142b1ba62(lVar18,lVar31,&local_388);
              uVar17 = FUN_14709345c(&local_388,lVar16 + 0x18,*(byte *)((longlong)local_5b0 + 4));
              *(undefined8 *)(lVar18 + 0x28) = uVar17;
            }
          }
          lVar34 = *(longlong *)(lVar31 + 0x60);
          if ((lVar34 != 0) &&
             (lVar16 = FUN_142b1b492(&local_538,*(undefined8 *)(lVar34 + 8)), lVar16 != 0)) {
            lVar16 = FUN_142b1ba62(lVar16,lVar31,&local_388);
            uVar11 = 0xffffffff;
            if ((local_360 != (undefined4 *)0x0) &&
               (uVar11 = FUN_1470941b4(local_360,lVar34 + 0x18), puStack_358 != (undefined8 *)0x0))
            {
              FUN_14709757e(puStack_358,uVar11);
            }
            *(undefined4 *)(lVar16 + 0x38) = uVar11;
          }
          if (((int)uStack_420 != 0) &&
             (cVar8 = (**(code **)(*(longlong *)*local_5a8 + 0x358))(*local_5a8,lVar31,&local_3f8),
             cVar8 != '\0')) {
            FUN_1470921b8(&local_3f8);
            if ((longlong)(int)uStack_3f0 != 0) {
              local_590 = local_3f8 + (longlong)(int)uStack_3f0 * 2;
              puVar14 = local_3f8;
              do {
                lVar34 = *(longlong *)puVar14;
                FUN_1400f0e12(lVar34,local_544,1);
                FUN_1448075d0(&local_4d0,local_544);
                lVar16 = *(longlong *)(lVar34 + 0x58);
                while (lVar18 = lVar16, lVar18 != 0) {
                  lVar16 = *(longlong *)(lVar18 + 0x28);
                  if (((*(byte **)(lVar18 + 0x18) != (byte *)0x0) &&
                      (bVar41 = **(byte **)(lVar18 + 0x18),
                      (bVar41 & 0x68) == 0 && (bVar41 & 3) != 0)) &&
                     (lVar19 = FUN_142b1b492(&local_538,*(undefined8 *)(lVar18 + 8)), lVar19 != 0))
                  {
                    uVar17 = FUN_142b1ba62(lVar19,lVar31,&local_388);
                    lVar19 = FUN_142b1bb14(uVar17,&local_4d0,&local_388);
                    uVar17 = FUN_14709345c(&local_388,lVar18 + 0x18,
                                           *(byte *)((longlong)local_5b0 + 4));
                    *(undefined8 *)(lVar19 + 0x28) = uVar17;
                    uVar11 = FUN_142b1bbba(local_510,*(undefined1 *)(lVar34 + 0x2a));
                    *(undefined4 *)(lVar19 + 0x34) = uVar11;
                  }
                }
                lVar16 = *(longlong *)(lVar34 + 0x60);
                if ((lVar16 != 0) &&
                   (lVar18 = FUN_142b1b492(&local_538,*(undefined8 *)(lVar16 + 8)), lVar18 != 0)) {
                  uVar17 = FUN_142b1ba62(lVar18,lVar31,&local_388);
                  lVar18 = FUN_142b1bb14(uVar17,&local_4d0,&local_388);
                  uVar11 = 0xffffffff;
                  if (local_360 != (undefined4 *)0x0) {
                    uVar11 = FUN_1470941b4(local_360,lVar16 + 0x18);
                    if (puStack_358 != (undefined8 *)0x0) {
                      FUN_14709757e(puStack_358,uVar11);
                    }
                  }
                  *(undefined4 *)(lVar18 + 0x38) = uVar11;
                  uVar11 = FUN_142b1bbba(local_510,*(undefined1 *)(lVar34 + 0x2a));
                  *(undefined4 *)(lVar18 + 0x34) = uVar11;
                }
                if (local_4b8 != 0) {
                  FUN_1400020a8();
                }
                puVar14 = puVar14 + 2;
              } while (puVar14 != local_590);
            }
          }
          puVar15 = puVar15 + 2;
        } while (puVar15 != local_598);
      }
      uVar45 = local_5a0;
      if (*(int *)(local_510 + 0x170) == 0) {
        iVar33 = (int)uStack_500;
        uVar36 = (int)uStack_500 - 1;
        if ((int)uStack_500 < 1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4();
        }
        _Dst = (void *)((ulonglong)uVar36 * 0x178 + local_508);
        FUN_142b1da3d(_Dst,1);
        if ((int)uStack_500 - iVar33 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x178),(longlong)((int)uStack_500 - iVar33) * 0x178
                 );
          uVar36 = (int)uStack_500 - 1;
        }
        uStack_500 = CONCAT44(uStack_500._4_4_,uVar36);
        FUN_142b1e056(&local_508);
        uVar36 = (uint)local_580;
        iVar33 = (int)local_570;
      }
      else {
        uVar11 = FUN_14709432e(local_e8,*(undefined8 *)(*local_5a8 + 0x2e));
        *(undefined4 *)(local_510 + 8) = uVar11;
        iVar33 = *(int *)(local_510 + 0x18);
        uVar9 = 1;
        if ((longlong)iVar33 == 0) {
LAB_142b171cd:
          uVar36 = (uint)local_580;
        }
        else {
          lVar31 = *(longlong *)(local_510 + 0x10);
          lVar34 = 0;
          do {
            uVar45 = local_510;
            plVar35 = (longlong *)(local_510 + 0x70);
            uVar11 = FUN_14709432e(local_e8,*(undefined8 *)
                                             (local_428 + (longlong)*(char *)(lVar31 + lVar34) * 8))
            ;
            iVar13 = *(int *)(uVar45 + 0x78);
            *(uint *)(uVar45 + 0x78) = iVar13 + 1U;
            if (*(uint *)(uVar45 + 0x7c) < iVar13 + 1U) {
              FUN_1447808da(plVar35,iVar13);
            }
            *(undefined4 *)(*plVar35 + (longlong)iVar13 * 4) = uVar11;
            lVar34 = lVar34 + 1;
          } while (iVar33 != lVar34);
          if (2 < *(uint *)(local_510 + 0x18)) {
            uVar45 = (ulonglong)(*(uint *)(local_510 + 0x18) - 1) * 2 + 1;
            lVar31 = 0x3f;
            if (uVar45 != 0) {
              for (; uVar45 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            uVar9 = (undefined1)lVar31;
            goto LAB_142b171cd;
          }
          uVar36 = (uint)local_580;
          uVar9 = 1;
        }
        *(undefined1 *)(local_510 + 0x80) = uVar9;
        local_510 = 0;
        puStack_358 = (undefined8 *)0x0;
        local_370 = 0;
        uVar45 = local_5a0;
        iVar33 = (int)local_570;
      }
      plVar35 = local_578;
      ppuVar23 = local_5b0;
      if (local_428 != 0) {
        FUN_1400020a8();
      }
      if (local_3f8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      uVar36 = (uint)local_588 & ~uVar36;
      puVar15 = (uint *)plVar35[4];
      if ((uint *)plVar35[4] == (uint *)0x0) {
        puVar15 = local_558;
      }
      uVar30 = *(uint *)(plVar35 + 5);
      iVar13 = (int)uVar45;
      lVar31 = (longlong)iVar13;
      uVar10 = puVar15[lVar31] & uVar36;
      if (uVar10 == 0) {
        iVar22 = uVar30 + 0x1e;
        if (-1 < (int)(uVar30 - 1)) {
          iVar22 = uVar30 - 1;
        }
        iVar22 = iVar22 >> 5;
        iVar33 = iVar33 + 0x20;
        iVar42 = iVar22;
        if (iVar22 < iVar13) {
          iVar42 = iVar13;
        }
        if (iVar13 < iVar22) {
          lVar34 = 0;
          do {
            uVar10 = puVar15[lVar31 + lVar34 + 1];
            if (uVar10 != 0) {
              uVar45 = (ulonglong)(iVar13 + (int)lVar34 + 1);
              local_588 = (uint **)CONCAT44(local_588._4_4_,0xffffffff);
              goto LAB_142b172d3;
            }
            iVar33 = iVar33 + 0x20;
            lVar34 = lVar34 + 1;
          } while (iVar42 - lVar31 != lVar34);
          local_588 = (uint **)CONCAT44(local_588._4_4_,0xffffffff);
          iVar13 = iVar42;
        }
        else {
          local_588 = (uint **)CONCAT44(local_588._4_4_,uVar36);
        }
        uVar45 = (ulonglong)(iVar13 + 1);
        plVar35 = local_578;
        ppuVar23 = local_5b0;
        uVar44 = local_580;
        uVar10 = uVar30;
      }
      else {
        local_588 = (uint **)CONCAT44(local_588._4_4_,uVar36);
LAB_142b172d3:
        uVar44 = (ulonglong)(-uVar10 & uVar10);
        uVar43 = uVar44 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        uVar10 = (iVar33 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if ((int)uVar30 <= (int)uVar10) {
          uVar10 = uVar30;
        }
      }
    } while (uVar10 != (uint)local_560);
  }
LAB_142b169d9:
  FUN_1470944e2(ppuVar23);
  iVar33 = 0;
  if ((int)uStack_500 != 0) {
    local_580 = CONCAT44(local_580._4_4_,(int)uStack_500);
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    local_4e0 = 0x53434e01;
    uStack_4dc = (uint)*(byte *)ppuVar23;
    local_3e8 = (uint **)0x0;
    local_3e0 = 0x8000000000;
    FUN_147092cd4(local_e8,&local_3f8);
    FUN_147092a64(&local_188,&local_3f8);
    FUN_147092cd4(local_300,&local_3f8);
    FUN_147092dae(local_208,&local_3f8);
    FUN_147092fde(local_278,&local_3f8);
    local_408 = 0x7a70666564636261;
    local_400 = 0;
    _DAT_14c9a1138 = 0;
    if ((longlong)(int)uStack_500 != 0) {
      local_570 = (longlong)(int)uStack_500 * 0x178 + local_508;
      uVar45 = local_508;
      do {
        uVar44 = local_3e0;
        uVar36 = (uint)local_78;
        local_510 = uVar45;
        if (local_78 != 0) {
          if ((int)local_3e0 == 0) {
            iVar33 = -1;
          }
          else {
            iVar33 = (int)local_3e0 + 0x1e;
            if (-1 < (int)local_3e0 + -1) {
              iVar33 = (int)local_3e0 + -1;
            }
            iVar33 = iVar33 >> 5;
          }
          iVar13 = (int)local_3e0 + uVar36;
          iVar42 = (int)local_3e0 + uVar36 + -1;
          iVar22 = (int)local_3e0 + uVar36 + 0x1e;
          if (-1 < iVar42) {
            iVar22 = iVar42;
          }
          if (iVar22 >> 5 == iVar33) {
            local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
          }
          else {
            if (local_3e0._4_4_ < iVar13) {
              if (iVar13 + 0x1fU < 0xa0) {
                iVar13 = 0x80;
                iVar33 = (int)local_3e0;
              }
              else {
                uVar10 = iVar13 + 0x1fU >> 5;
                if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                  uVar30 = 4;
                  if (4 < uVar10) {
                    uVar30 = uVar10;
                  }
                }
                else {
                  uVar30 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
                }
                uVar43 = (ulonglong)(uVar30 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar12 = (uint)(uVar43 + 0xf);
                    if (uVar30 < 0x1ffd) {
                      uVar43 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 >> 4]];
                    }
                    else {
                      uVar28 = uVar43 + 0xf & 0xfffffffffffffff0;
                      if (uVar28 < 0x7ff1) {
                        bVar41 = (&DAT_14c841e00)[uVar12 >> 4];
                        uVar32 = 0x32;
                        if (0x32 < bVar41) {
                          uVar32 = (ulonglong)bVar41;
                        }
                        uVar39 = 0x32 - (ulonglong)bVar41;
                        do {
                          uVar43 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar39 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar39 & 0xffffffff] & 0xf) == 0)
                          goto LAB_142b1a56a;
                          lVar31 = uVar32 + 1 + uVar39;
                          uVar39 = uVar39 - 1;
                        } while (lVar31 != 0x33);
                      }
                      uVar43 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar43 = 0x10;
                      }
                      uVar43 = -uVar43 & (uVar28 + uVar43) - 1;
                    }
                  }
                  else {
                    uVar43 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar43,0);
                  }
                }
LAB_142b1a56a:
                iVar22 = (int)(uVar43 >> 2);
                iVar13 = iVar22 << 5;
                iVar33 = (int)local_3e0;
                if (iVar22 < (int)uVar10) {
                  iVar13 = -0x20;
                }
              }
              local_3e0 = CONCAT44(iVar13,(int)local_3e0);
              FUN_1446efbd8(&local_3f8,iVar33);
              iVar13 = (int)local_3e0 + uVar36;
            }
            iVar33 = iVar13 + 0x1f;
            if (-1 < iVar13) {
              iVar33 = iVar13;
            }
            local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
            if (iVar13 % 0x20 != 0) {
              ppuVar23 = local_3e8;
              if (local_3e8 == (uint **)0x0) {
                ppuVar23 = &local_3f8;
              }
              bVar41 = -(char)(iVar13 % 0x20);
              *(uint *)((longlong)ppuVar23 + (longlong)(iVar33 >> 5) * 4) =
                   (uint)(*(int *)((longlong)ppuVar23 + (longlong)(iVar33 >> 5) * 4) <<
                         (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
            }
          }
        }
        ppuVar23 = local_3e8;
        if (local_3e8 == (uint **)0x0) {
          ppuVar23 = &local_3f8;
        }
        local_5b8 = CONCAT44(local_5b8._4_4_,uVar36);
        FUN_14493566c(ppuVar23,uVar44 & 0xffffffff,uVar45 + 8,0);
        local_5a0 = uVar45;
        if ((longlong)*(int *)(uVar45 + 0x78) != 0) {
          puVar37 = *(undefined4 **)(uVar45 + 0x70);
          puVar4 = puVar37 + *(int *)(uVar45 + 0x78);
          do {
            uVar45 = local_3e0;
            local_4d0 = (undefined **)CONCAT44(local_4d0._4_4_,*puVar37);
            uVar36 = (uint)local_78;
            if (local_78 != 0) {
              if ((int)local_3e0 == 0) {
                iVar33 = -1;
              }
              else {
                iVar33 = (int)local_3e0 + 0x1e;
                if (-1 < (int)local_3e0 + -1) {
                  iVar33 = (int)local_3e0 + -1;
                }
                iVar33 = iVar33 >> 5;
              }
              iVar13 = (int)local_3e0 + uVar36;
              iVar42 = (int)local_3e0 + uVar36 + -1;
              iVar22 = (int)local_3e0 + uVar36 + 0x1e;
              if (-1 < iVar42) {
                iVar22 = iVar42;
              }
              if (iVar22 >> 5 == iVar33) {
                local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
              }
              else {
                if (local_3e0._4_4_ < iVar13) {
                  if (iVar13 + 0x1fU < 0xa0) {
                    iVar13 = 0x80;
                    iVar33 = (int)local_3e0;
                  }
                  else {
                    uVar10 = iVar13 + 0x1fU >> 5;
                    if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                      uVar30 = 4;
                      if (4 < uVar10) {
                        uVar30 = uVar10;
                      }
                    }
                    else {
                      uVar30 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
                    }
                    uVar44 = (ulonglong)(uVar30 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar12 = (uint)(uVar44 + 0xf);
                        if (uVar30 < 0x1ffd) {
                          uVar44 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar12 >> 4]];
                        }
                        else {
                          uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                          if (uVar43 < 0x7ff1) {
                            bVar41 = (&DAT_14c841e00)[uVar12 >> 4];
                            uVar28 = 0x32;
                            if (0x32 < bVar41) {
                              uVar28 = (ulonglong)bVar41;
                            }
                            uVar32 = 0x32 - (ulonglong)bVar41;
                            do {
                              uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                              goto LAB_142b17665;
                              lVar31 = uVar28 + 1 + uVar32;
                              uVar32 = uVar32 - 1;
                            } while (lVar31 != 0x33);
                          }
                          uVar44 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar44 = 0x10;
                          }
                          uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                        }
                      }
                      else {
                        uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                      }
                    }
LAB_142b17665:
                    iVar22 = (int)(uVar44 >> 2);
                    iVar13 = iVar22 << 5;
                    iVar33 = (int)local_3e0;
                    if (iVar22 < (int)uVar10) {
                      iVar13 = -0x20;
                    }
                  }
                  local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                  FUN_1446efbd8(&local_3f8,iVar33);
                  iVar13 = (int)local_3e0 + uVar36;
                }
                iVar33 = iVar13 + 0x1f;
                if (-1 < iVar13) {
                  iVar33 = iVar13;
                }
                local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                if (iVar13 % 0x20 != 0) {
                  ppuVar23 = local_3e8;
                  if (local_3e8 == (uint **)0x0) {
                    ppuVar23 = &local_3f8;
                  }
                  bVar41 = -(char)(iVar13 % 0x20);
                  *(uint *)((longlong)ppuVar23 + (longlong)(iVar33 >> 5) * 4) =
                       (uint)(*(int *)((longlong)ppuVar23 + (longlong)(iVar33 >> 5) * 4) <<
                             (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                }
              }
            }
            ppuVar23 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar23 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,uVar36);
            FUN_14493566c(ppuVar23,uVar45 & 0xffffffff,&local_4d0,0);
            puVar37 = puVar37 + 1;
          } while (puVar37 != puVar4);
        }
        local_4d0 = (undefined **)((ulonglong)local_4d0 & 0xffffffff00000000);
        ppuVar23 = (uint **)0x0;
        uVar45 = local_3e0 & 0xffffffff;
        uVar36 = (uint)local_78;
        if (local_78 != 0) {
          if ((int)local_3e0 == 0) {
            iVar33 = -1;
          }
          else {
            iVar33 = (int)local_3e0 + 0x1e;
            if (-1 < (int)local_3e0 + -1) {
              iVar33 = (int)local_3e0 + -1;
            }
            iVar33 = iVar33 >> 5;
          }
          iVar42 = (int)local_3e0 + (uint)local_78;
          iVar22 = (int)local_3e0 + (uint)local_78 + -1;
          iVar13 = (int)local_3e0 + (uint)local_78 + 0x1e;
          if (-1 < iVar22) {
            iVar13 = iVar22;
          }
          if (iVar13 >> 5 == iVar33) {
            local_3e0 = CONCAT44(local_3e0._4_4_,iVar42);
          }
          else {
            if (local_3e0._4_4_ < iVar42) {
              uVar44 = uVar45;
              if (iVar42 + 0x1fU < 0xa0) {
                iVar33 = 0x80;
              }
              else {
                uVar10 = iVar42 + 0x1fU >> 5;
                if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                  uVar30 = 4;
                  if (4 < uVar10) {
                    uVar30 = uVar10;
                  }
                }
                else {
                  uVar30 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
                }
                uVar43 = (ulonglong)(uVar30 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar12 = (uint)(uVar43 + 0xf);
                    if (uVar30 < 0x1ffd) {
                      uVar43 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 >> 4]];
                    }
                    else {
                      uVar28 = uVar43 + 0xf & 0xfffffffffffffff0;
                      if (uVar28 < 0x7ff1) {
                        bVar41 = (&DAT_14c841e00)[uVar12 >> 4];
                        uVar32 = 0x32;
                        if (0x32 < bVar41) {
                          uVar32 = (ulonglong)bVar41;
                        }
                        uVar39 = 0x32 - (ulonglong)bVar41;
                        do {
                          uVar43 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar39 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar39 & 0xffffffff] & 0xf) == 0)
                          goto LAB_142b1a60e;
                          lVar31 = uVar32 + 1 + uVar39;
                          uVar39 = uVar39 - 1;
                        } while (lVar31 != 0x33);
                      }
                      uVar43 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar43 = 0x10;
                      }
                      uVar43 = -uVar43 & (uVar28 + uVar43) - 1;
                    }
                  }
                  else {
                    uVar43 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar43,0);
                    uVar44 = local_3e0 & 0xffffffff;
                  }
                }
LAB_142b1a60e:
                iVar13 = (int)(uVar43 >> 2);
                iVar33 = iVar13 << 5;
                if (iVar13 < (int)uVar10) {
                  iVar33 = -0x20;
                }
              }
              local_3e0 = CONCAT44(iVar33,(int)local_3e0);
              FUN_1446efbd8(&local_3f8,uVar44);
              iVar42 = (int)local_3e0 + uVar36;
            }
            iVar33 = iVar42 + 0x1f;
            if (-1 < iVar42) {
              iVar33 = iVar42;
            }
            local_3e0 = CONCAT44(local_3e0._4_4_,iVar42);
            if (iVar42 % 0x20 != 0) {
              ppuVar25 = local_3e8;
              if (local_3e8 == (uint **)0x0) {
                ppuVar25 = &local_3f8;
              }
              bVar41 = -(char)(iVar42 % 0x20);
              *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                   (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                         (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
            }
          }
        }
        ppuVar25 = local_3e8;
        if (local_3e8 == (uint **)0x0) {
          ppuVar25 = &local_3f8;
        }
        local_5b8 = CONCAT44(local_5b8._4_4_,uVar36);
        FUN_14493566c(ppuVar25,uVar45,&local_4d0,0);
        ppuVar25 = local_5b0;
        *(byte *)(local_510 + 0x161) = local_210;
        uVar36 = *(uint *)(local_510 + 0x108);
        bVar41 = 1;
        if (2 < uVar36) {
          uVar45 = (ulonglong)(uVar36 - 1) * 2 + 1;
          lVar31 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          bVar41 = (byte)lVar31;
        }
        *(byte *)(local_510 + 0x160) = bVar41;
        lVar31 = (((ulonglong)(uint)local_210 - (ulonglong)bVar41) * *(longlong *)(local_510 + 0xf8)
                 - (longlong)(int)(uVar36 * local_210)) + -0x20;
        if (lVar31 < 1) {
          puStack_358 = (undefined8 *)0x0;
        }
        else {
          puStack_358 = (undefined8 *)(local_510 + 0xf8);
          _DAT_14c9a1138 = _DAT_14c9a1138 + lVar31;
        }
        *(byte *)(local_510 + 0xf1) = local_290;
        uVar36 = *(uint *)(local_510 + 0x98);
        bVar41 = 1;
        if (2 < uVar36) {
          uVar45 = (ulonglong)(uVar36 - 1) * 2 + 1;
          lVar31 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          bVar41 = (byte)lVar31;
        }
        *(byte *)(local_510 + 0xf0) = bVar41;
        lVar31 = (((ulonglong)(uint)local_290 - (ulonglong)bVar41) * *(longlong *)(local_510 + 0x88)
                 - (longlong)(int)(uVar36 * local_290)) + -0x20;
        if (lVar31 < 1) {
          local_370 = 0;
        }
        else {
          local_370 = local_510 + 0x88;
          _DAT_14c9a1138 = _DAT_14c9a1138 + lVar31;
        }
        FUN_147093308(puStack_358,&local_3f8);
        FUN_147093308(local_370,&local_3f8);
        if ((longlong)*(int *)(local_5a0 + 0x170) != 0) {
          ppuVar26 = *(uint ***)(local_5a0 + 0x168);
          local_588 = ppuVar26 + (longlong)*(int *)(local_5a0 + 0x170) * 0x38;
          do {
            FUN_147092179(&local_3f8,8);
            puVar15 = (uint *)(local_3e0 & 0xffffffff);
            iVar33 = (int)local_3e0 +
                     (*(int *)(ppuVar26 + 0x25) + *(int *)(ppuVar26 + 0x27) +
                      *(int *)(ppuVar26 + 0x29) + 1) * (uint)local_210;
            if (local_3e0._4_4_ < iVar33 + 0x90) {
              uVar36 = iVar33 + 0xaf;
              if (uVar36 < 0xa0) {
                iVar33 = 0x80;
              }
              else {
                uVar36 = uVar36 >> 5;
                if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                  uVar10 = 4;
                  if (4 < uVar36) {
                    uVar10 = uVar36;
                  }
                }
                else {
                  uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                }
                uVar45 = (ulonglong)(uVar10 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar30 = (uint)(uVar45 + 0xf);
                    if (uVar10 < 0x1ffd) {
                      uVar45 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                    }
                    else {
                      uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                      if (uVar44 < 0x7ff1) {
                        bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                        uVar43 = 0x32;
                        if (0x32 < bVar41) {
                          uVar43 = (ulonglong)bVar41;
                        }
                        uVar28 = 0x32 - (ulonglong)bVar41;
                        do {
                          uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                          ppuVar25 = local_5b0;
                          if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                          goto LAB_142b18f45;
                          lVar31 = uVar43 + 1 + uVar28;
                          uVar28 = uVar28 - 1;
                        } while (lVar31 != 0x33);
                      }
                      uVar45 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar45 = 0x10;
                      }
                      uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                    }
                  }
                  else {
                    uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                    puVar15 = (uint *)(local_3e0 & 0xffffffff);
                  }
                }
LAB_142b18f45:
                iVar13 = (int)(uVar45 >> 2);
                iVar33 = iVar13 << 5;
                if (iVar13 < (int)uVar36) {
                  iVar33 = -0x20;
                }
              }
              local_3e0 = CONCAT44(iVar33,(int)local_3e0);
              FUN_1446efbd8(&local_3f8,puVar15);
              puVar15 = (uint *)(local_3e0 & 0xffffffff);
            }
            local_428 = local_428 & 0xffffffff00000000;
            iVar33 = (int)puVar15;
            if (iVar33 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = iVar33 + 0x1e;
              if (-1 < iVar33 + -1) {
                iVar13 = iVar33 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar42 = iVar33 + 0x20;
            iVar22 = iVar33 + 0x3e;
            if (-1 < iVar33 + 0x1f) {
              iVar22 = iVar33 + 0x1f;
            }
            local_590 = puVar15;
            if (iVar22 >> 5 != iVar13) {
              if (local_3e0._4_4_ < iVar42) {
                if (iVar33 + 0x3fU < 0xa0) {
                  iVar33 = 0x80;
                }
                else {
                  uVar36 = iVar33 + 0x3fU >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar45 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar45 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar45 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar41) {
                            uVar43 = (ulonglong)bVar41;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            ppuVar25 = local_5b0;
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b19007;
                            lVar31 = uVar43 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar45 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar45 = 0x10;
                        }
                        uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                      }
                    }
                    else {
                      uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                      puVar15 = (uint *)(local_3e0 & 0xffffffff);
                    }
                  }
LAB_142b19007:
                  iVar13 = (int)(uVar45 >> 2);
                  iVar33 = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    iVar33 = -0x20;
                  }
                }
                local_3e0 = CONCAT44(iVar33,(int)local_3e0);
                FUN_1446efbd8(&local_3f8,puVar15);
                iVar42 = (int)local_3e0 + 0x20;
              }
              iVar33 = iVar42 + 0x1f;
              if (-1 < iVar42) {
                iVar33 = iVar42;
              }
              local_3e0._0_4_ = iVar42;
              iVar42 = (int)local_3e0;
              if (iVar42 % 0x20 != 0) {
                ppuVar24 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar24 = &local_3f8;
                }
                bVar41 = -(char)(iVar42 % 0x20);
                *(uint *)((longlong)ppuVar24 + (longlong)(iVar33 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar24 + (longlong)(iVar33 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                iVar42 = (int)local_3e0;
              }
            }
            local_3e0._0_4_ = iVar42;
            ppuVar24 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar24 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,0x20);
            FUN_14493566c(ppuVar24,(ulonglong)local_590 & 0xffffffff,&local_428,0);
            iVar33 = (int)local_3e0;
            if ((int)local_3e0 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar13 = (int)local_3e0 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar22 = (int)local_3e0 + 8;
            iVar42 = (int)local_3e0 + 0x26;
            if (-1 < (int)local_3e0 + 7) {
              iVar42 = (int)local_3e0 + 7;
            }
            if (iVar42 >> 5 != iVar13) {
              if (local_3e0._4_4_ < iVar22) {
                uVar36 = (int)local_3e0 + 0x27;
                if (uVar36 < 0xa0) {
                  local_3e0._4_4_ = 0x80;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar45 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar45 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar45 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar41) {
                            uVar43 = (ulonglong)bVar41;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            ppuVar25 = local_5b0;
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b190a6;
                            lVar31 = uVar43 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar45 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar45 = 0x10;
                        }
                        uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                      }
                    }
                    else {
                      uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                    }
                  }
LAB_142b190a6:
                  iVar13 = (int)(uVar45 >> 2);
                  local_3e0._4_4_ = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    local_3e0._4_4_ = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                FUN_1446efbd8(&local_3f8,(int)local_3e0);
                iVar22 = (int)local_3e0 + 8;
              }
              iVar13 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar13 = iVar22;
              }
              local_3e0._0_4_ = iVar22;
              iVar22 = (int)local_3e0;
              if (iVar22 % 0x20 != 0) {
                ppuVar24 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar24 = &local_3f8;
                }
                bVar41 = -(char)(iVar22 % 0x20);
                *(uint *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                iVar22 = (int)local_3e0;
              }
            }
            local_3e0._0_4_ = iVar22;
            ppuVar24 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar24 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,8);
            FUN_14493566c(ppuVar24,iVar33,&local_408,0);
            FUN_147093f78(&local_388,*(undefined4 *)(ppuVar26 + 0x23),&local_3f8);
            iVar33 = (int)local_3e0;
            if ((int)local_3e0 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar13 = (int)local_3e0 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar22 = (int)local_3e0 + 8;
            iVar42 = (int)local_3e0 + 0x26;
            if (-1 < (int)local_3e0 + 7) {
              iVar42 = (int)local_3e0 + 7;
            }
            if (iVar42 >> 5 != iVar13) {
              if (local_3e0._4_4_ < iVar22) {
                uVar36 = (int)local_3e0 + 0x27;
                if (uVar36 < 0xa0) {
                  local_3e0._4_4_ = 0x80;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar45 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar45 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar45 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar41) {
                            uVar43 = (ulonglong)bVar41;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            ppuVar25 = local_5b0;
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b19145;
                            lVar31 = uVar43 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar45 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar45 = 0x10;
                        }
                        uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                      }
                    }
                    else {
                      uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                    }
                  }
LAB_142b19145:
                  iVar13 = (int)(uVar45 >> 2);
                  local_3e0._4_4_ = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    local_3e0._4_4_ = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                FUN_1446efbd8(&local_3f8,(int)local_3e0);
                iVar22 = (int)local_3e0 + 8;
              }
              iVar13 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar13 = iVar22;
              }
              local_3e0._0_4_ = iVar22;
              iVar22 = (int)local_3e0;
              if (iVar22 % 0x20 != 0) {
                ppuVar24 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar24 = &local_3f8;
                }
                bVar41 = -(char)(iVar22 % 0x20);
                *(uint *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                iVar22 = (int)local_3e0;
              }
            }
            local_3e0._0_4_ = iVar22;
            ppuVar24 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar24 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,8);
            FUN_14493566c(ppuVar24,iVar33,(longlong)&local_408 + 1,0);
            iVar33 = (int)local_3e0;
            local_548 = *(int *)((longlong)ppuVar25 + 0xc) + *(int *)(ppuVar26 + 0xd);
            if ((int)local_3e0 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar13 = (int)local_3e0 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar22 = (int)local_3e0 + 0x20;
            iVar42 = (int)local_3e0 + 0x3e;
            if (-1 < (int)local_3e0 + 0x1f) {
              iVar42 = (int)local_3e0 + 0x1f;
            }
            if (iVar42 >> 5 != iVar13) {
              if (local_3e0._4_4_ < iVar22) {
                uVar36 = (int)local_3e0 + 0x3f;
                if (uVar36 < 0xa0) {
                  local_3e0._4_4_ = 0x80;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar45 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar45 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar45 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar41) {
                            uVar43 = (ulonglong)bVar41;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            ppuVar25 = local_5b0;
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b191e4;
                            lVar31 = uVar43 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar45 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar45 = 0x10;
                        }
                        uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                      }
                    }
                    else {
                      uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                    }
                  }
LAB_142b191e4:
                  iVar13 = (int)(uVar45 >> 2);
                  local_3e0._4_4_ = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    local_3e0._4_4_ = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                FUN_1446efbd8(&local_3f8,(int)local_3e0);
                iVar22 = (int)local_3e0 + 0x20;
              }
              iVar13 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar13 = iVar22;
              }
              local_3e0._0_4_ = iVar22;
              iVar22 = (int)local_3e0;
              if (iVar22 % 0x20 != 0) {
                ppuVar24 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar24 = &local_3f8;
                }
                bVar41 = -(char)(iVar22 % 0x20);
                *(uint *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                iVar22 = (int)local_3e0;
              }
            }
            local_3e0._0_4_ = iVar22;
            ppuVar24 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar24 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,0x20);
            FUN_14493566c(ppuVar24,iVar33,&local_548,0);
            iVar33 = (int)local_3e0;
            if ((int)local_3e0 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar13 = (int)local_3e0 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar22 = (int)local_3e0 + 8;
            iVar42 = (int)local_3e0 + 0x26;
            if (-1 < (int)local_3e0 + 7) {
              iVar42 = (int)local_3e0 + 7;
            }
            if (iVar42 >> 5 != iVar13) {
              if (local_3e0._4_4_ < iVar22) {
                uVar36 = (int)local_3e0 + 0x27;
                if (uVar36 < 0xa0) {
                  local_3e0._4_4_ = 0x80;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar45 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar45 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar45 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar41) {
                            uVar43 = (ulonglong)bVar41;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            ppuVar25 = local_5b0;
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b19283;
                            lVar31 = uVar43 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar45 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar45 = 0x10;
                        }
                        uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                      }
                    }
                    else {
                      uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                    }
                  }
LAB_142b19283:
                  iVar13 = (int)(uVar45 >> 2);
                  local_3e0._4_4_ = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    local_3e0._4_4_ = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                FUN_1446efbd8(&local_3f8,(int)local_3e0);
                iVar22 = (int)local_3e0 + 8;
              }
              iVar13 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar13 = iVar22;
              }
              local_3e0._0_4_ = iVar22;
              iVar22 = (int)local_3e0;
              if (iVar22 % 0x20 != 0) {
                ppuVar24 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar24 = &local_3f8;
                }
                bVar41 = -(char)(iVar22 % 0x20);
                *(uint *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar24 + (longlong)(iVar13 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                iVar22 = (int)local_3e0;
              }
            }
            local_3e0._0_4_ = iVar22;
            ppuVar24 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar24 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,8);
            FUN_14493566c(ppuVar24,iVar33,(longlong)&local_408 + 2,0);
            iVar33 = (int)local_3e0;
            local_54c = *(float *)((longlong)ppuVar26 + 0x6c) + *(float *)(ppuVar25 + 1);
            if ((int)local_3e0 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar13 = (int)local_3e0 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar22 = (int)local_3e0 + 0x20;
            iVar42 = (int)local_3e0 + 0x3e;
            if (-1 < (int)local_3e0 + 0x1f) {
              iVar42 = (int)local_3e0 + 0x1f;
            }
            if (iVar42 >> 5 != iVar13) {
              if (local_3e0._4_4_ < iVar22) {
                uVar36 = (int)local_3e0 + 0x3f;
                if (uVar36 < 0xa0) {
                  local_3e0._4_4_ = 0x80;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar45 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar45 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar45 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar41) {
                            uVar43 = (ulonglong)bVar41;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b19322;
                            lVar31 = uVar43 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar45 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar45 = 0x10;
                        }
                        uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                      }
                    }
                    else {
                      uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                    }
                  }
LAB_142b19322:
                  iVar13 = (int)(uVar45 >> 2);
                  local_3e0._4_4_ = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    local_3e0._4_4_ = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                FUN_1446efbd8(&local_3f8,(int)local_3e0);
                iVar22 = (int)local_3e0 + 0x20;
              }
              iVar13 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar13 = iVar22;
              }
              local_3e0._0_4_ = iVar22;
              iVar22 = (int)local_3e0;
              if (iVar22 % 0x20 != 0) {
                ppuVar25 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar25 = &local_3f8;
                }
                bVar41 = -(char)(iVar22 % 0x20);
                *(uint *)((longlong)ppuVar25 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar13 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                iVar22 = (int)local_3e0;
              }
            }
            local_3e0._0_4_ = iVar22;
            ppuVar25 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar25 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,0x20);
            FUN_14493566c(ppuVar25,iVar33,&local_54c,0);
            iVar33 = (int)local_3e0;
            if ((int)local_3e0 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar13 = (int)local_3e0 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar22 = (int)local_3e0 + 8;
            iVar42 = (int)local_3e0 + 0x26;
            if (-1 < (int)local_3e0 + 7) {
              iVar42 = (int)local_3e0 + 7;
            }
            if (iVar42 >> 5 == iVar13) {
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar22);
            }
            else {
              if (local_3e0._4_4_ < iVar22) {
                uVar36 = (int)local_3e0 + 0x27;
                if (uVar36 < 0xa0) {
                  local_3e0._4_4_ = 0x80;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar45 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar45 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar45 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar45 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar41) {
                            uVar43 = (ulonglong)bVar41;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b193c1;
                            lVar31 = uVar43 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar45 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar45 = 0x10;
                        }
                        uVar45 = -uVar45 & (uVar44 + uVar45) - 1;
                      }
                    }
                    else {
                      uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                    }
                  }
LAB_142b193c1:
                  iVar13 = (int)(uVar45 >> 2);
                  local_3e0._4_4_ = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    local_3e0._4_4_ = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                FUN_1446efbd8(&local_3f8,(int)local_3e0);
                iVar22 = (int)local_3e0 + 8;
              }
              iVar13 = iVar22 + 0x1f;
              if (-1 < iVar22) {
                iVar13 = iVar22;
              }
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar22);
              if (iVar22 % 0x20 != 0) {
                ppuVar25 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar25 = &local_3f8;
                }
                bVar41 = -(char)(iVar22 % 0x20);
                *(uint *)((longlong)ppuVar25 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar13 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
              }
            }
            ppuVar25 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar25 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,8);
            FUN_14493566c(ppuVar25,iVar33,(longlong)&local_408 + 3,0);
            iVar33 = *(int *)(ppuVar26 + 0x25);
            if ((longlong)iVar33 != 0) {
              ppuVar23 = (uint **)ppuVar26[0x24];
              lVar31 = 0;
              do {
                FUN_147093f78(&local_388,*(undefined4 *)((longlong)ppuVar23 + lVar31),&local_3f8);
                lVar31 = lVar31 + 4;
              } while ((longlong)iVar33 * 4 != lVar31);
            }
            uVar45 = local_3e0;
            if ((int)local_3e0 == 0) {
              iVar33 = -1;
            }
            else {
              iVar33 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar33 = (int)local_3e0 + -1;
              }
              iVar33 = iVar33 >> 5;
            }
            iVar13 = (int)local_3e0 + 8;
            iVar22 = (int)local_3e0 + 0x26;
            if (-1 < (int)local_3e0 + 7) {
              iVar22 = (int)local_3e0 + 7;
            }
            if (iVar22 >> 5 == iVar33) {
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
            }
            else {
              if (local_3e0._4_4_ < iVar13) {
                uVar36 = (int)local_3e0 + 0x27;
                if (uVar36 < 0xa0) {
                  iVar13 = 0x80;
                  iVar33 = (int)local_3e0;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar44 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar44 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar44 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                        if (uVar43 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar28 = 0x32;
                          if (0x32 < bVar41) {
                            uVar28 = (ulonglong)bVar41;
                          }
                          uVar32 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b19460;
                            lVar31 = uVar28 + 1 + uVar32;
                            uVar32 = uVar32 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar44 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar44 = 0x10;
                        }
                        uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                      }
                    }
                    else {
                      uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                    }
                  }
LAB_142b19460:
                  iVar22 = (int)(uVar44 >> 2);
                  iVar13 = iVar22 << 5;
                  iVar33 = (int)local_3e0;
                  if (iVar22 < (int)uVar36) {
                    iVar13 = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                FUN_1446efbd8(&local_3f8,iVar33);
                iVar13 = (int)local_3e0 + 8;
              }
              iVar33 = iVar13 + 0x1f;
              if (-1 < iVar13) {
                iVar33 = iVar13;
              }
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
              if (iVar13 % 0x20 != 0) {
                ppuVar25 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar25 = &local_3f8;
                }
                bVar41 = -(char)(iVar13 % 0x20);
                *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
              }
            }
            ppuVar25 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar25 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,8);
            FUN_14493566c(ppuVar25,uVar45 & 0xffffffff,(longlong)&local_408 + 4,0);
            iVar33 = *(int *)(ppuVar26 + 0x27);
            if ((longlong)iVar33 != 0) {
              ppuVar23 = (uint **)ppuVar26[0x26];
              lVar31 = 0;
              do {
                FUN_147093f78(&local_388,*(undefined4 *)((longlong)ppuVar23 + lVar31),&local_3f8);
                lVar31 = lVar31 + 4;
              } while ((longlong)iVar33 * 4 != lVar31);
            }
            uVar45 = local_3e0;
            if ((int)local_3e0 == 0) {
              iVar33 = -1;
            }
            else {
              iVar33 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar33 = (int)local_3e0 + -1;
              }
              iVar33 = iVar33 >> 5;
            }
            iVar13 = (int)local_3e0 + 8;
            iVar22 = (int)local_3e0 + 0x26;
            if (-1 < (int)local_3e0 + 7) {
              iVar22 = (int)local_3e0 + 7;
            }
            if (iVar22 >> 5 == iVar33) {
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
            }
            else {
              if (local_3e0._4_4_ < iVar13) {
                uVar36 = (int)local_3e0 + 0x27;
                if (uVar36 < 0xa0) {
                  iVar13 = 0x80;
                  iVar33 = (int)local_3e0;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar44 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar44 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar44 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                        if (uVar43 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar28 = 0x32;
                          if (0x32 < bVar41) {
                            uVar28 = (ulonglong)bVar41;
                          }
                          uVar32 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b194ff;
                            lVar31 = uVar28 + 1 + uVar32;
                            uVar32 = uVar32 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar44 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar44 = 0x10;
                        }
                        uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                      }
                    }
                    else {
                      uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                    }
                  }
LAB_142b194ff:
                  iVar22 = (int)(uVar44 >> 2);
                  iVar13 = iVar22 << 5;
                  iVar33 = (int)local_3e0;
                  if (iVar22 < (int)uVar36) {
                    iVar13 = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                FUN_1446efbd8(&local_3f8,iVar33);
                iVar13 = (int)local_3e0 + 8;
              }
              iVar33 = iVar13 + 0x1f;
              if (-1 < iVar13) {
                iVar33 = iVar13;
              }
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
              if (iVar13 % 0x20 != 0) {
                ppuVar25 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar25 = &local_3f8;
                }
                bVar41 = -(char)(iVar13 % 0x20);
                *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
              }
            }
            ppuVar25 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar25 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,8);
            FUN_14493566c(ppuVar25,uVar45 & 0xffffffff,(longlong)&local_408 + 5,0);
            iVar33 = *(int *)(ppuVar26 + 0x29);
            if ((longlong)iVar33 != 0) {
              ppuVar23 = (uint **)ppuVar26[0x28];
              lVar31 = 0;
              do {
                FUN_147093f78(&local_388,*(undefined4 *)((longlong)ppuVar23 + lVar31),&local_3f8);
                lVar31 = lVar31 + 4;
              } while ((longlong)iVar33 * 4 != lVar31);
            }
            uVar45 = local_3e0;
            if (ppuVar26[0x2f] != (uint *)0x0) {
              if ((int)local_3e0 == 0) {
                iVar33 = -1;
              }
              else {
                iVar33 = (int)local_3e0 + 0x1e;
                if (-1 < (int)local_3e0 + -1) {
                  iVar33 = (int)local_3e0 + -1;
                }
                iVar33 = iVar33 >> 5;
              }
              iVar13 = (int)local_3e0 + 8;
              iVar22 = (int)local_3e0 + 0x26;
              if (-1 < (int)local_3e0 + 7) {
                iVar22 = (int)local_3e0 + 7;
              }
              if (iVar22 >> 5 == iVar33) {
                local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
              }
              else {
                if (local_3e0._4_4_ < iVar13) {
                  uVar36 = (int)local_3e0 + 0x27;
                  if (uVar36 < 0xa0) {
                    iVar13 = 0x80;
                    iVar33 = (int)local_3e0;
                  }
                  else {
                    uVar36 = uVar36 >> 5;
                    if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                      uVar10 = 4;
                      if (4 < uVar36) {
                        uVar10 = uVar36;
                      }
                    }
                    else {
                      uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                    }
                    uVar44 = (ulonglong)(uVar10 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar30 = (uint)(uVar44 + 0xf);
                        if (uVar10 < 0x1ffd) {
                          uVar44 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                        }
                        else {
                          uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                          if (uVar43 < 0x7ff1) {
                            bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                            uVar28 = 0x32;
                            if (0x32 < bVar41) {
                              uVar28 = (ulonglong)bVar41;
                            }
                            uVar32 = 0x32 - (ulonglong)bVar41;
                            do {
                              uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                              goto LAB_142b196f1;
                              lVar31 = uVar28 + 1 + uVar32;
                              uVar32 = uVar32 - 1;
                            } while (lVar31 != 0x33);
                          }
                          uVar44 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar44 = 0x10;
                          }
                          uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                        }
                      }
                      else {
                        uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                      }
                    }
LAB_142b196f1:
                    iVar22 = (int)(uVar44 >> 2);
                    iVar13 = iVar22 << 5;
                    iVar33 = (int)local_3e0;
                    if (iVar22 < (int)uVar36) {
                      iVar13 = -0x20;
                    }
                  }
                  ppuVar23 = (uint **)(ulonglong)uVar36;
                  local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                  FUN_1446efbd8(&local_3f8,iVar33);
                  iVar13 = (int)local_3e0 + 8;
                }
                iVar33 = iVar13 + 0x1f;
                if (-1 < iVar13) {
                  iVar33 = iVar13;
                }
                local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                if (iVar13 % 0x20 != 0) {
                  ppuVar25 = local_3e8;
                  if (local_3e8 == (uint **)0x0) {
                    ppuVar25 = &local_3f8;
                  }
                  bVar41 = -(char)(iVar13 % 0x20);
                  *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                       (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                             (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                }
              }
              ppuVar25 = local_3e8;
              if (local_3e8 == (uint **)0x0) {
                ppuVar25 = &local_3f8;
              }
              local_5b8 = CONCAT44(local_5b8._4_4_,8);
              FUN_14493566c(ppuVar25,uVar45 & 0xffffffff,(longlong)&local_408 + 6,0);
              FUN_147093d6a(&local_388,ppuVar26[0x2f],&local_3f8);
            }
            uVar45 = local_3e0;
            if ((int)local_3e0 == 0) {
              iVar33 = -1;
            }
            else {
              iVar33 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar33 = (int)local_3e0 + -1;
              }
              iVar33 = iVar33 >> 5;
            }
            iVar13 = (int)local_3e0 + 8;
            iVar22 = (int)local_3e0 + 0x26;
            if (-1 < (int)local_3e0 + 7) {
              iVar22 = (int)local_3e0 + 7;
            }
            if (iVar22 >> 5 == iVar33) {
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
            }
            else {
              if (local_3e0._4_4_ < iVar13) {
                uVar36 = (int)local_3e0 + 0x27;
                if (uVar36 < 0xa0) {
                  iVar13 = 0x80;
                  iVar33 = (int)local_3e0;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar44 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar44 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar44 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                        if (uVar43 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar28 = 0x32;
                          if (0x32 < bVar41) {
                            uVar28 = (ulonglong)bVar41;
                          }
                          uVar32 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b1959e;
                            lVar31 = uVar28 + 1 + uVar32;
                            uVar32 = uVar32 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar44 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar44 = 0x10;
                        }
                        uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                      }
                    }
                    else {
                      uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                    }
                  }
LAB_142b1959e:
                  iVar22 = (int)(uVar44 >> 2);
                  iVar13 = iVar22 << 5;
                  iVar33 = (int)local_3e0;
                  if (iVar22 < (int)uVar36) {
                    iVar13 = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                FUN_1446efbd8(&local_3f8,iVar33);
                iVar13 = (int)local_3e0 + 8;
              }
              iVar33 = iVar13 + 0x1f;
              if (-1 < iVar13) {
                iVar33 = iVar13;
              }
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
              if (iVar13 % 0x20 != 0) {
                ppuVar25 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar25 = &local_3f8;
                }
                bVar41 = -(char)(iVar13 % 0x20);
                *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
              }
            }
            ppuVar25 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar25 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,8);
            FUN_14493566c(ppuVar25,uVar45 & 0xffffffff,(longlong)&local_408 + 7,0);
            if ((longlong)*(int *)(ppuVar26 + 0x35) != 0) {
              puVar15 = ppuVar26[0x34];
              puVar14 = puVar15 + (longlong)*(int *)(ppuVar26 + 0x35) * 0x14;
              local_5a8 = ppuVar26;
              local_598 = puVar14;
              do {
                uVar45 = local_3e0;
                if (*(longlong *)(puVar15 + 10) == 0) {
                  if ((int)puVar15[0xe] < 0) {
                    local_550 = 1;
                  }
                  else {
                    local_550 = 3;
                  }
                }
                else {
                  local_550 = 2;
                }
                if ((int)local_3e0 == 0) {
                  iVar33 = -1;
                }
                else {
                  iVar33 = (int)local_3e0 + 0x1e;
                  if (-1 < (int)local_3e0 + -1) {
                    iVar33 = (int)local_3e0 + -1;
                  }
                  iVar33 = iVar33 >> 5;
                }
                iVar13 = (int)local_3e0 + 2;
                iVar22 = (int)local_3e0 + 0x20;
                if (-1 < (int)local_3e0 + 1) {
                  iVar22 = (int)local_3e0 + 1;
                }
                if (iVar22 >> 5 == iVar33) {
                  local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                }
                else {
                  if (local_3e0._4_4_ < iVar13) {
                    uVar36 = (int)local_3e0 + 0x21;
                    if (uVar36 < 0xa0) {
                      iVar13 = 0x80;
                      iVar33 = (int)local_3e0;
                    }
                    else {
                      uVar36 = uVar36 >> 5;
                      if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                        uVar10 = 4;
                        if (4 < uVar36) {
                          uVar10 = uVar36;
                        }
                      }
                      else {
                        uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                      }
                      uVar44 = (ulonglong)(uVar10 * 4);
                      if (DAT_14c872d28 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                          uVar30 = (uint)(uVar44 + 0xf);
                          if (uVar10 < 0x1ffd) {
                            uVar44 = (ulonglong)
                                     (ushort)(&DAT_14c841d90)
                                             [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                          }
                          else {
                            uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                            if (uVar43 < 0x7ff1) {
                              bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                              uVar28 = 0x32;
                              if (0x32 < bVar41) {
                                uVar28 = (ulonglong)bVar41;
                              }
                              uVar32 = 0x32 - (ulonglong)bVar41;
                              do {
                                uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                                if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                                goto LAB_142b187eb;
                                lVar31 = uVar28 + 1 + uVar32;
                                uVar32 = uVar32 - 1;
                              } while (lVar31 != 0x33);
                            }
                            uVar44 = (ulonglong)DAT_14c841df8;
                            if (DAT_14c841df8 < 0x11) {
                              uVar44 = 0x10;
                            }
                            uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                          }
                        }
                        else {
                          uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                        }
                      }
LAB_142b187eb:
                      iVar22 = (int)(uVar44 >> 2);
                      iVar13 = iVar22 << 5;
                      iVar33 = (int)local_3e0;
                      if (iVar22 < (int)uVar36) {
                        iVar13 = -0x20;
                      }
                    }
                    ppuVar23 = (uint **)(ulonglong)uVar36;
                    local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                    FUN_1446efbd8(&local_3f8,iVar33);
                    iVar13 = (int)local_3e0 + 2;
                  }
                  iVar33 = iVar13 + 0x1f;
                  if (-1 < iVar13) {
                    iVar33 = iVar13;
                  }
                  local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                  if (iVar13 % 0x20 != 0) {
                    ppuVar25 = local_3e8;
                    if (local_3e8 == (uint **)0x0) {
                      ppuVar25 = &local_3f8;
                    }
                    bVar41 = -(char)(iVar13 % 0x20);
                    *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                         (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                               (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                  }
                }
                ppuVar25 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar25 = &local_3f8;
                }
                local_5b8 = CONCAT44(local_5b8._4_4_,2);
                FUN_14493566c(ppuVar25,uVar45 & 0xffffffff,&local_550,0);
                FUN_147093f78(&local_388,puVar15[0xc],&local_3f8);
                if (*(longlong *)(puVar15 + 10) == 0) {
                  if (-1 < (int)puVar15[0xe]) {
                    FUN_147093f78(&local_388,puVar15[0xe],&local_3f8);
                  }
                }
                else {
                  FUN_147093d6a(&local_388,*(longlong *)(puVar15 + 10),&local_3f8);
                }
                if (*(int *)(local_510 + 0x78) != 0) {
                  ppuVar23 = (uint **)0x0;
                  if ((longlong)(int)puVar15[0x12] != 0) {
                    ppuVar25 = *(uint ***)(puVar15 + 0x10);
                    ppuVar23 = ppuVar25 + (longlong)(int)puVar15[0x12] * 8;
                    do {
                      uVar45 = local_3e0;
                      if (ppuVar25[5] == (uint *)0x0) {
                        if ((int)*(uint *)(ppuVar25 + 7) < 0) {
                          local_550 = 1;
                        }
                        else {
                          local_550 = 3;
                        }
                      }
                      else {
                        local_550 = 2;
                      }
                      if ((int)local_3e0 == 0) {
                        iVar33 = -1;
                      }
                      else {
                        iVar33 = (int)local_3e0 + 0x1e;
                        if (-1 < (int)local_3e0 + -1) {
                          iVar33 = (int)local_3e0 + -1;
                        }
                        iVar33 = iVar33 >> 5;
                      }
                      iVar13 = (int)local_3e0 + 2;
                      iVar22 = (int)local_3e0 + 0x20;
                      if (-1 < (int)local_3e0 + 1) {
                        iVar22 = (int)local_3e0 + 1;
                      }
                      if (iVar22 >> 5 == iVar33) {
                        local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                      }
                      else {
                        if (local_3e0._4_4_ < iVar13) {
                          if ((int)local_3e0 + 0x21U < 0xa0) {
                            iVar13 = 0x80;
                            iVar33 = (int)local_3e0;
                          }
                          else {
                            uVar36 = (int)local_3e0 + 0x21U >> 5;
                            if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                              uVar10 = 4;
                              if (4 < uVar36) {
                                uVar10 = uVar36;
                              }
                            }
                            else {
                              uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                            }
                            uVar44 = (ulonglong)(uVar10 * 4);
                            if (DAT_14c872d28 != (longlong *)0x0) {
                              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                uVar30 = (uint)(uVar44 + 0xf);
                                if (uVar10 < 0x1ffd) {
                                  uVar44 = (ulonglong)
                                           (ushort)(&DAT_14c841d90)
                                                   [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                                }
                                else {
                                  uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                                  if (uVar43 < 0x7ff1) {
                                    bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                                    uVar28 = 0x32;
                                    if (0x32 < bVar41) {
                                      uVar28 = (ulonglong)bVar41;
                                    }
                                    uVar32 = 0x32 - (ulonglong)bVar41;
                                    do {
                                      uVar44 = (ulonglong)
                                               (ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                                      if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                                      goto LAB_142b18446;
                                      lVar31 = uVar28 + 1 + uVar32;
                                      uVar32 = uVar32 - 1;
                                    } while (lVar31 != 0x33);
                                  }
                                  uVar44 = (ulonglong)DAT_14c841df8;
                                  if (DAT_14c841df8 < 0x11) {
                                    uVar44 = 0x10;
                                  }
                                  uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                                }
                              }
                              else {
                                uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                   (DAT_14c872d28,uVar44,0);
                              }
                            }
LAB_142b18446:
                            iVar22 = (int)(uVar44 >> 2);
                            iVar13 = iVar22 << 5;
                            iVar33 = (int)local_3e0;
                            if (iVar22 < (int)uVar36) {
                              iVar13 = -0x20;
                            }
                          }
                          local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                          FUN_1446efbd8(&local_3f8,iVar33);
                          iVar13 = (int)local_3e0 + 2;
                        }
                        iVar33 = iVar13 + 0x1f;
                        if (-1 < iVar13) {
                          iVar33 = iVar13;
                        }
                        local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                        if (iVar13 % 0x20 != 0) {
                          ppuVar26 = local_3e8;
                          if (local_3e8 == (uint **)0x0) {
                            ppuVar26 = &local_3f8;
                          }
                          bVar41 = -(char)(iVar13 % 0x20);
                          *(uint *)((longlong)ppuVar26 + (longlong)(iVar33 >> 5) * 4) =
                               (uint)(*(int *)((longlong)ppuVar26 + (longlong)(iVar33 >> 5) * 4) <<
                                     (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                        }
                      }
                      ppuVar26 = local_3e8;
                      if (local_3e8 == (uint **)0x0) {
                        ppuVar26 = &local_3f8;
                      }
                      local_5b8 = CONCAT44(local_5b8._4_4_,2);
                      FUN_14493566c(ppuVar26,uVar45 & 0xffffffff,&local_550,0);
                      FUN_147093f78(&local_388,*(uint *)(ppuVar25 + 6),&local_3f8);
                      uVar45 = local_3e0;
                      uVar36 = (uint)*(byte *)(local_510 + 0x80);
                      if (*(byte *)(local_510 + 0x80) != 0) {
                        if ((int)local_3e0 == 0) {
                          iVar33 = -1;
                        }
                        else {
                          iVar33 = (int)local_3e0 + 0x1e;
                          if (-1 < (int)local_3e0 + -1) {
                            iVar33 = (int)local_3e0 + -1;
                          }
                          iVar33 = iVar33 >> 5;
                        }
                        iVar13 = (int)local_3e0 + uVar36;
                        iVar42 = (int)local_3e0 + uVar36 + -1;
                        iVar22 = (int)local_3e0 + uVar36 + 0x1e;
                        if (-1 < iVar42) {
                          iVar22 = iVar42;
                        }
                        if (iVar22 >> 5 == iVar33) {
                          local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                        }
                        else {
                          if (local_3e0._4_4_ < iVar13) {
                            if (iVar13 + 0x1fU < 0xa0) {
                              iVar13 = 0x80;
                              iVar33 = (int)local_3e0;
                            }
                            else {
                              uVar10 = iVar13 + 0x1fU >> 5;
                              if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                                uVar30 = 4;
                                if (4 < uVar10) {
                                  uVar30 = uVar10;
                                }
                              }
                              else {
                                uVar30 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
                              }
                              uVar44 = (ulonglong)(uVar30 * 4);
                              if (DAT_14c872d28 != (longlong *)0x0) {
                                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                  uVar12 = (uint)(uVar44 + 0xf);
                                  if (uVar30 < 0x1ffd) {
                                    uVar44 = (ulonglong)
                                             (ushort)(&DAT_14c841d90)
                                                     [0x32 - (byte)(&DAT_14c841e00)[uVar12 >> 4]];
                                  }
                                  else {
                                    uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                                    if (uVar43 < 0x7ff1) {
                                      bVar41 = (&DAT_14c841e00)[uVar12 >> 4];
                                      uVar28 = 0x32;
                                      if (0x32 < bVar41) {
                                        uVar28 = (ulonglong)bVar41;
                                      }
                                      uVar32 = 0x32 - (ulonglong)bVar41;
                                      do {
                                        uVar44 = (ulonglong)
                                                 (ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                                        if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                                        goto LAB_142b184eb;
                                        lVar31 = uVar28 + 1 + uVar32;
                                        uVar32 = uVar32 - 1;
                                      } while (lVar31 != 0x33);
                                    }
                                    uVar44 = (ulonglong)DAT_14c841df8;
                                    if (DAT_14c841df8 < 0x11) {
                                      uVar44 = 0x10;
                                    }
                                    uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                                  }
                                }
                                else {
                                  uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                     (DAT_14c872d28,uVar44,0);
                                }
                              }
LAB_142b184eb:
                              iVar22 = (int)(uVar44 >> 2);
                              iVar13 = iVar22 << 5;
                              iVar33 = (int)local_3e0;
                              if (iVar22 < (int)uVar10) {
                                iVar13 = -0x20;
                              }
                            }
                            local_3e0 = CONCAT44(iVar13,(int)local_3e0);
                            FUN_1446efbd8(&local_3f8,iVar33);
                            iVar13 = (int)local_3e0 + uVar36;
                          }
                          iVar33 = iVar13 + 0x1f;
                          if (-1 < iVar13) {
                            iVar33 = iVar13;
                          }
                          local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                          if (iVar13 % 0x20 != 0) {
                            ppuVar26 = local_3e8;
                            if (local_3e8 == (uint **)0x0) {
                              ppuVar26 = &local_3f8;
                            }
                            bVar41 = -(char)(iVar13 % 0x20);
                            *(uint *)((longlong)ppuVar26 + (longlong)(iVar33 >> 5) * 4) =
                                 (uint)(*(int *)((longlong)ppuVar26 + (longlong)(iVar33 >> 5) * 4)
                                       << (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                          }
                        }
                      }
                      ppuVar26 = local_3e8;
                      if (local_3e8 == (uint **)0x0) {
                        ppuVar26 = &local_3f8;
                      }
                      local_5b8 = CONCAT44(local_5b8._4_4_,uVar36);
                      FUN_14493566c(ppuVar26,uVar45 & 0xffffffff,(uint *)((longlong)ppuVar25 + 0x34)
                                    ,0);
                      if (ppuVar25[5] == (uint *)0x0) {
                        if (-1 < (int)*(uint *)(ppuVar25 + 7)) {
                          FUN_147093f78(&local_388,*(uint *)(ppuVar25 + 7),&local_3f8);
                        }
                      }
                      else {
                        FUN_147093d6a(&local_388,ppuVar25[5],&local_3f8);
                      }
                      ppuVar25 = ppuVar25 + 8;
                    } while (ppuVar25 != ppuVar23);
                  }
                  uVar45 = local_3e0;
                  puVar14 = local_598;
                  ppuVar26 = local_5a8;
                  local_550 = 0;
                  if ((int)local_3e0 == 0) {
                    iVar33 = -1;
                  }
                  else {
                    iVar33 = (int)local_3e0 + 0x1e;
                    if (-1 < (int)local_3e0 + -1) {
                      iVar33 = (int)local_3e0 + -1;
                    }
                    iVar33 = iVar33 >> 5;
                  }
                  iVar13 = (int)local_3e0 + 2;
                  iVar22 = (int)local_3e0 + 0x20;
                  if (-1 < (int)local_3e0 + 1) {
                    iVar22 = (int)local_3e0 + 1;
                  }
                  if (iVar22 >> 5 == iVar33) {
                    local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                  }
                  else {
                    if (local_3e0._4_4_ < iVar13) {
                      uVar36 = (int)local_3e0 + 0x21;
                      if (uVar36 < 0xa0) {
                        uVar44 = local_3e0 & 0xffffffff;
                        iVar33 = 0x80;
                      }
                      else {
                        uVar36 = uVar36 >> 5;
                        if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                          uVar10 = 4;
                          if (4 < uVar36) {
                            uVar10 = uVar36;
                          }
                        }
                        else {
                          uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                        }
                        uVar43 = (ulonglong)(uVar10 * 4);
                        if (DAT_14c872d28 == (longlong *)0x0) {
LAB_142b18888:
                          uVar44 = local_3e0 & 0xffffffff;
                        }
                        else {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar30 = (uint)(uVar43 + 0xf);
                            if (uVar10 < 0x1ffd) {
                              uVar43 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                            }
                            else {
                              uVar44 = uVar43 + 0xf & 0xfffffffffffffff0;
                              if (uVar44 < 0x7ff1) {
                                bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                                uVar28 = 0x32;
                                if (0x32 < bVar41) {
                                  uVar28 = (ulonglong)bVar41;
                                }
                                uVar32 = 0x32 - (ulonglong)bVar41;
                                do {
                                  uVar43 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) {
                                    uVar44 = local_3e0 & 0xffffffff;
                                    goto LAB_142b1888a;
                                  }
                                  lVar31 = uVar28 + 1 + uVar32;
                                  uVar32 = uVar32 - 1;
                                } while (lVar31 != 0x33);
                              }
                              uVar43 = (ulonglong)DAT_14c841df8;
                              if (DAT_14c841df8 < 0x11) {
                                uVar43 = 0x10;
                              }
                              uVar43 = -uVar43 & (uVar44 + uVar43) - 1;
                            }
                            goto LAB_142b18888;
                          }
                          uVar43 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar43,0);
                          uVar44 = local_3e0 & 0xffffffff;
                        }
LAB_142b1888a:
                        iVar13 = (int)(uVar43 >> 2);
                        iVar33 = iVar13 << 5;
                        if (iVar13 < (int)uVar36) {
                          iVar33 = -0x20;
                        }
                      }
                      ppuVar23 = (uint **)(ulonglong)uVar36;
                      local_3e0 = CONCAT44(iVar33,(int)local_3e0);
                      FUN_1446efbd8(&local_3f8,uVar44);
                      iVar13 = (int)local_3e0 + 2;
                    }
                    iVar33 = iVar13 + 0x1f;
                    if (-1 < iVar13) {
                      iVar33 = iVar13;
                    }
                    local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
                    if (iVar13 % 0x20 != 0) {
                      ppuVar25 = local_3e8;
                      if (local_3e8 == (uint **)0x0) {
                        ppuVar25 = &local_3f8;
                      }
                      bVar41 = -(char)(iVar13 % 0x20);
                      *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                           (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                                 (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                    }
                  }
                  ppuVar25 = local_3e8;
                  if (local_3e8 == (uint **)0x0) {
                    ppuVar25 = &local_3f8;
                  }
                  local_5b8 = CONCAT44(local_5b8._4_4_,2);
                  FUN_14493566c(ppuVar25,uVar45 & 0xffffffff,&local_550,0);
                }
                puVar15 = puVar15 + 0x14;
              } while (puVar15 != puVar14);
            }
            uVar45 = local_3e0;
            ppuVar25 = local_5b0;
            local_550 = 0;
            if ((int)local_3e0 == 0) {
              iVar33 = -1;
            }
            else {
              iVar33 = (int)local_3e0 + 0x1e;
              if (-1 < (int)local_3e0 + -1) {
                iVar33 = (int)local_3e0 + -1;
              }
              iVar33 = iVar33 >> 5;
            }
            iVar13 = (int)local_3e0 + 2;
            iVar22 = (int)local_3e0 + 0x20;
            if (-1 < (int)local_3e0 + 1) {
              iVar22 = (int)local_3e0 + 1;
            }
            if (iVar22 >> 5 == iVar33) {
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
            }
            else {
              if (local_3e0._4_4_ < iVar13) {
                uVar36 = (int)local_3e0 + 0x21;
                if (uVar36 < 0xa0) {
                  uVar44 = local_3e0 & 0xffffffff;
                  iVar33 = 0x80;
                }
                else {
                  uVar36 = uVar36 >> 5;
                  if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                    uVar10 = 4;
                    if (4 < uVar36) {
                      uVar10 = uVar36;
                    }
                  }
                  else {
                    uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
                  }
                  uVar43 = (ulonglong)(uVar10 * 4);
                  if (DAT_14c872d28 == (longlong *)0x0) {
LAB_142b1963b:
                    uVar44 = local_3e0 & 0xffffffff;
                  }
                  else {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar30 = (uint)(uVar43 + 0xf);
                      if (uVar10 < 0x1ffd) {
                        uVar43 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                      }
                      else {
                        uVar44 = uVar43 + 0xf & 0xfffffffffffffff0;
                        if (uVar44 < 0x7ff1) {
                          bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                          uVar28 = 0x32;
                          if (0x32 < bVar41) {
                            uVar28 = (ulonglong)bVar41;
                          }
                          uVar32 = 0x32 - (ulonglong)bVar41;
                          do {
                            uVar43 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) {
                              uVar44 = local_3e0 & 0xffffffff;
                              goto LAB_142b1963d;
                            }
                            lVar31 = uVar28 + 1 + uVar32;
                            uVar32 = uVar32 - 1;
                          } while (lVar31 != 0x33);
                        }
                        uVar43 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar43 = 0x10;
                        }
                        uVar43 = -uVar43 & (uVar44 + uVar43) - 1;
                      }
                      goto LAB_142b1963b;
                    }
                    uVar43 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar43,0);
                    uVar44 = local_3e0 & 0xffffffff;
                  }
LAB_142b1963d:
                  iVar13 = (int)(uVar43 >> 2);
                  iVar33 = iVar13 << 5;
                  if (iVar13 < (int)uVar36) {
                    iVar33 = -0x20;
                  }
                }
                ppuVar23 = (uint **)(ulonglong)uVar36;
                local_3e0 = CONCAT44(iVar33,(int)local_3e0);
                FUN_1446efbd8(&local_3f8,uVar44);
                iVar13 = (int)local_3e0 + 2;
              }
              iVar33 = iVar13 + 0x1f;
              if (-1 < iVar13) {
                iVar33 = iVar13;
              }
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar13);
              if (iVar13 % 0x20 != 0) {
                ppuVar24 = local_3e8;
                if (local_3e8 == (uint **)0x0) {
                  ppuVar24 = &local_3f8;
                }
                bVar41 = -(char)(iVar13 % 0x20);
                *(uint *)((longlong)ppuVar24 + (longlong)(iVar33 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppuVar24 + (longlong)(iVar33 >> 5) * 4) <<
                           (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
              }
            }
            ppuVar24 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar24 = &local_3f8;
            }
            local_5b8 = CONCAT44(local_5b8._4_4_,2);
            FUN_14493566c(ppuVar24,uVar45 & 0xffffffff,&local_550,0);
            FUN_147092179(&local_3f8,8);
            ppuVar24 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar24 = &local_3f8;
            }
            *(uint *)((longlong)ppuVar24 + ((ulonglong)local_590 >> 3 & 0x1fffffff)) =
                 (uint)((int)local_3e0 - (int)local_590) >> 3;
            ppuVar26 = ppuVar26 + 0x38;
          } while (ppuVar26 != local_588);
        }
        FUN_147092179(&local_3f8,8);
        uVar44 = local_3e0;
        uVar45 = local_5a0;
        local_428 = local_428 & 0xffffffff00000000;
        if ((int)local_3e0 == 0) {
          iVar33 = -1;
        }
        else {
          iVar33 = (int)local_3e0 + 0x1e;
          if (-1 < (int)local_3e0 + -1) {
            iVar33 = (int)local_3e0 + -1;
          }
          iVar33 = iVar33 >> 5;
        }
        iVar13 = (int)local_3e0 + 0x20;
        iVar22 = (int)local_3e0 + 0x3e;
        if (-1 < (int)local_3e0 + 0x1f) {
          iVar22 = (int)local_3e0 + 0x1f;
        }
        if (iVar22 >> 5 != iVar33) {
          if (local_3e0._4_4_ < iVar13) {
            uVar36 = (int)local_3e0 + 0x3f;
            if (uVar36 < 0xa0) {
              uVar43 = local_3e0 & 0xffffffff;
              iVar33 = 0x80;
            }
            else {
              uVar36 = uVar36 >> 5;
              if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                uVar10 = 4;
                if (4 < uVar36) {
                  uVar10 = uVar36;
                }
              }
              else {
                uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
              }
              uVar28 = (ulonglong)(uVar10 * 4);
              if (DAT_14c872d28 == (longlong *)0x0) {
LAB_142b1a429:
                uVar43 = local_3e0 & 0xffffffff;
              }
              else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar30 = (uint)(uVar28 + 0xf);
                if (uVar10 < 0x1ffd) {
                  uVar28 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                  goto LAB_142b1a429;
                }
                uVar43 = uVar28 + 0xf & 0xfffffffffffffff0;
                if (uVar43 < 0x7ff1) {
                  bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                  uVar32 = 0x32;
                  if (0x32 < bVar41) {
                    uVar32 = (ulonglong)bVar41;
                  }
                  uVar39 = 0x32 - (ulonglong)bVar41;
                  do {
                    uVar28 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar39 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar39 & 0xffffffff] & 0xf) == 0) goto LAB_142b1a740;
                    lVar31 = uVar32 + 1 + uVar39;
                    uVar39 = uVar39 - 1;
                  } while (lVar31 != 0x33);
                }
                uVar28 = (ulonglong)DAT_14c841df8;
                if (DAT_14c841df8 < 0x11) {
                  uVar28 = 0x10;
                }
                uVar28 = -uVar28 & (uVar43 + uVar28) - 1;
LAB_142b1a740:
                uVar43 = local_3e0 & 0xffffffff;
              }
              else {
                uVar28 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar28,0);
                uVar43 = local_3e0 & 0xffffffff;
              }
              iVar13 = (int)(uVar28 >> 2);
              iVar33 = iVar13 << 5;
              if (iVar13 < (int)uVar36) {
                iVar33 = -0x20;
              }
            }
            ppuVar23 = (uint **)(ulonglong)uVar36;
            local_3e0 = CONCAT44(iVar33,(int)local_3e0);
            FUN_1446efbd8(&local_3f8,uVar43);
            iVar13 = (int)local_3e0 + 0x20;
          }
          iVar33 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar33 = iVar13;
          }
          local_3e0._0_4_ = iVar13;
          iVar13 = (int)local_3e0;
          if (iVar13 % 0x20 != 0) {
            ppuVar25 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar25 = &local_3f8;
            }
            bVar41 = -(char)(iVar13 % 0x20);
            *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
                 (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) <<
                       (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
            iVar13 = (int)local_3e0;
          }
        }
        local_3e0._0_4_ = iVar13;
        ppuVar25 = local_3e8;
        if (local_3e8 == (uint **)0x0) {
          ppuVar25 = &local_3f8;
        }
        local_5b8 = CONCAT44(local_5b8._4_4_,0x20);
        FUN_14493566c(ppuVar25,uVar44 & 0xffffffff,&local_428,0);
        iVar33 = (int)local_3e0;
        if ((int)local_3e0 == 0) {
          iVar13 = -1;
        }
        else {
          iVar13 = (int)local_3e0 + 0x1e;
          if (-1 < (int)local_3e0 + -1) {
            iVar13 = (int)local_3e0 + -1;
          }
          iVar13 = iVar13 >> 5;
        }
        iVar22 = (int)local_3e0 + 8;
        iVar42 = (int)local_3e0 + 0x26;
        if (-1 < (int)local_3e0 + 7) {
          iVar42 = (int)local_3e0 + 7;
        }
        if (iVar42 >> 5 == iVar13) {
          local_3e0 = CONCAT44(local_3e0._4_4_,iVar22);
        }
        else {
          if (local_3e0._4_4_ < iVar22) {
            uVar36 = (int)local_3e0 + 0x27;
            if (uVar36 < 0xa0) {
              local_3e0._4_4_ = 0x80;
            }
            else {
              uVar36 = uVar36 >> 5;
              if (local_3e0._4_4_ + 0x1fU < 0xa0) {
                uVar10 = 4;
                if (4 < uVar36) {
                  uVar10 = uVar36;
                }
              }
              else {
                uVar10 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
              }
              uVar44 = (ulonglong)(uVar10 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar30 = (uint)(uVar44 + 0xf);
                  if (uVar10 < 0x1ffd) {
                    uVar44 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar30 >> 4]];
                  }
                  else {
                    uVar43 = uVar44 + 0xf & 0xfffffffffffffff0;
                    uVar45 = local_5a0;
                    if (uVar43 < 0x7ff1) {
                      bVar41 = (&DAT_14c841e00)[uVar30 >> 4];
                      uVar28 = 0x32;
                      if (0x32 < bVar41) {
                        uVar28 = (ulonglong)bVar41;
                      }
                      uVar32 = 0x32 - (ulonglong)bVar41;
                      do {
                        uVar44 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) goto LAB_142b1a4ca;
                        lVar31 = uVar28 + 1 + uVar32;
                        uVar32 = uVar32 - 1;
                      } while (lVar31 != 0x33);
                    }
                    uVar44 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar44 = 0x10;
                    }
                    uVar44 = -uVar44 & (uVar43 + uVar44) - 1;
                  }
                }
                else {
                  uVar44 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar44,0);
                }
              }
LAB_142b1a4ca:
              iVar13 = (int)(uVar44 >> 2);
              local_3e0._4_4_ = iVar13 << 5;
              if (iVar13 < (int)uVar36) {
                local_3e0._4_4_ = -0x20;
              }
            }
            ppuVar23 = (uint **)(ulonglong)uVar36;
            FUN_1446efbd8(&local_3f8,(int)local_3e0);
            iVar22 = (int)local_3e0 + 8;
          }
          iVar13 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar13 = iVar22;
          }
          local_3e0 = CONCAT44(local_3e0._4_4_,iVar22);
          if (iVar22 % 0x20 != 0) {
            ppuVar25 = local_3e8;
            if (local_3e8 == (uint **)0x0) {
              ppuVar25 = &local_3f8;
            }
            bVar41 = -(char)(iVar22 % 0x20);
            *(uint *)((longlong)ppuVar25 + (longlong)(iVar13 >> 5) * 4) =
                 (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar13 >> 5) * 4) <<
                       (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
          }
        }
        ppuVar25 = local_3e8;
        if (local_3e8 == (uint **)0x0) {
          ppuVar25 = &local_3f8;
        }
        local_5b8 = CONCAT44(local_5b8._4_4_,8);
        FUN_14493566c(ppuVar25,iVar33,(longlong)&local_408 + 7,0);
        local_510 = 0;
        puStack_358 = (undefined8 *)0x0;
        local_370 = 0;
        uVar45 = uVar45 + 0x178;
      } while (uVar45 != local_570);
    }
    local_548 = 0;
    uVar45 = local_3e0 & 0xffffffff;
    uVar36 = (uint)local_78;
    if (local_78 != 0) {
      if ((int)local_3e0 == 0) {
        iVar33 = -1;
      }
      else {
        iVar33 = (int)local_3e0 + 0x1e;
        if (-1 < (int)local_3e0 + -1) {
          iVar33 = (int)local_3e0 + -1;
        }
        iVar33 = iVar33 >> 5;
      }
      iVar42 = (int)local_3e0 + (uint)local_78;
      iVar22 = (int)local_3e0 + (uint)local_78 + -1;
      iVar13 = (int)local_3e0 + (uint)local_78 + 0x1e;
      if (-1 < iVar22) {
        iVar13 = iVar22;
      }
      if (iVar13 >> 5 == iVar33) {
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar42);
      }
      else {
        if (local_3e0._4_4_ < iVar42) {
          uVar44 = uVar45;
          if (iVar42 + 0x1fU < 0xa0) {
            iVar33 = 0x80;
          }
          else {
            uVar10 = iVar42 + 0x1fU >> 5;
            if (local_3e0._4_4_ + 0x1fU < 0xa0) {
              uVar30 = 4;
              if (4 < uVar10) {
                uVar30 = uVar10;
              }
            }
            else {
              uVar30 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
            }
            uVar43 = (ulonglong)(uVar30 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar12 = (uint)(uVar43 + 0xf);
                if (uVar30 < 0x1ffd) {
                  uVar43 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 >> 4]];
                }
                else {
                  uVar28 = uVar43 + 0xf & 0xfffffffffffffff0;
                  if (uVar28 < 0x7ff1) {
                    bVar41 = (&DAT_14c841e00)[uVar12 >> 4];
                    uVar32 = 0x32;
                    if (0x32 < bVar41) {
                      uVar32 = (ulonglong)bVar41;
                    }
                    uVar39 = 0x32 - (ulonglong)bVar41;
                    do {
                      uVar43 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar39 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar39 & 0xffffffff] & 0xf) == 0) goto LAB_142b1b354;
                      lVar31 = uVar32 + 1 + uVar39;
                      uVar39 = uVar39 - 1;
                    } while (lVar31 != 0x33);
                  }
                  uVar43 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar43 = (ulonglong)DAT_14c841df8;
                  }
                  uVar43 = -uVar43 & (uVar28 + uVar43) - 1;
                }
              }
              else {
                uVar43 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar43,0);
                uVar44 = local_3e0 & 0xffffffff;
              }
            }
LAB_142b1b354:
            iVar13 = (int)(uVar43 >> 2);
            iVar33 = -0x20;
            if ((int)uVar10 <= iVar13) {
              iVar33 = iVar13 << 5;
            }
          }
          ppuVar23 = &local_3f8;
          local_3e0 = CONCAT44(iVar33,(int)local_3e0);
          FUN_1446efbd8(ppuVar23,uVar44);
          iVar42 = (int)local_3e0 + uVar36;
        }
        iVar33 = iVar42 + 0x1f;
        if (-1 < iVar42) {
          iVar33 = iVar42;
        }
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar42);
        if (iVar42 % 0x20 != 0) {
          ppuVar25 = local_3e8;
          if (local_3e8 == (uint **)0x0) {
            ppuVar25 = &local_3f8;
          }
          bVar41 = -(char)(iVar42 % 0x20);
          *(uint *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) =
               (uint)(*(int *)((longlong)ppuVar25 + (longlong)(iVar33 >> 5) * 4) << (bVar41 & 0x1f))
               >> (bVar41 & 0x1f);
        }
      }
    }
    ppuVar25 = local_3e8;
    if (local_3e8 == (uint **)0x0) {
      ppuVar25 = &local_3f8;
    }
    local_5b8 = CONCAT44(local_5b8._4_4_,uVar36);
    FUN_14493566c(ppuVar25,uVar45,&local_548,0);
    FUN_147092179(&local_3f8,0x20);
    plVar35 = local_568;
    iVar33 = (int)local_3e0 + 7;
    if (-1 < (int)local_3e0) {
      iVar33 = (int)local_3e0;
    }
    uStack_4d8 = iVar33 >> 3;
    uVar36 = uStack_4dc & 0xff;
    uStack_4d4 = uStack_4d8;
    if ((char)uStack_4dc == '\0') {
      FUN_140393c76(local_568,uStack_4d8 + 0x10,1);
      puVar6 = (undefined8 *)*plVar35;
      *puVar6 = CONCAT44(uStack_4dc,local_4e0);
      puVar6[1] = CONCAT44(uStack_4d4,uStack_4d8);
      ppuVar23 = &local_3f8;
      if (local_3e8 != (uint **)0x0) {
        ppuVar23 = local_3e8;
      }
      memcpy((void *)(*plVar35 + 0x10),ppuVar23,(ulonglong)uStack_4d8);
      iVar33 = (int)local_580;
    }
    else {
      bVar41 = *(byte *)((longlong)local_5b0 + 1);
      ppuVar25 = &local_3f8;
      if (local_3e8 != (uint **)0x0) {
        ppuVar25 = local_3e8;
      }
      FUN_1467fe818(&local_4d0,ppuVar25,uStack_4d8);
      local_5b8 = 0;
      FUN_1467a8b50(&local_428,&local_4d0,uVar36,
                    CONCAT71((int7)((ulonglong)ppuVar23 >> 8),bVar41) & 0xffffffff);
      ppuVar27 = local_4d0;
      if (local_4d0 != (undefined **)0x0) {
        LOCK();
        ppuVar1 = local_4d0 + 3;
        puVar5 = *ppuVar1;
        *ppuVar1 = *ppuVar1 + -1;
        UNLOCK();
        if (((uint)puVar5 & 0x3fffffff) == 1) {
          (**(code **)(*local_4d0 + 0x10))(local_4d0);
          ppuVar27[1] = (undefined *)0x0;
          ppuVar27[2] = (undefined *)0x0;
          LOCK();
          ppuVar1 = ppuVar27 + 3;
          puVar5 = *ppuVar1;
          *ppuVar1 = *ppuVar1 + -0x40000000;
          UNLOCK();
          if (((ulonglong)puVar5 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*ppuVar27)(ppuVar27);
          }
        }
      }
      uStack_4d4 = FUN_1467fdf84(&local_428);
      memset(&local_4d0,0,0x90);
      FUN_144869430(&local_4d0);
      local_440 = 0;
      local_4d0 = &PTR_FUN_149e1e590;
      local_438 = local_568;
      local_430 = 0;
      local_4a8 = local_4a8 | 4;
      FUN_1449c2eca(&local_4d0,0);
      (*(code *)local_4d0[0x2e])(&local_4d0,&local_4e0,0x10);
      FUN_1467a9214(&local_4d0,&local_428);
      local_4d0 = &PTR__purecall_149e35f70;
      iVar33 = (int)local_580;
      if (local_478 != (longlong *)0x0) {
        if (*local_478 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_478);
      }
      if (local_458 != 0) {
        if (*(longlong *)(local_458 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_458);
      }
      FUN_1458cf622(&local_428);
    }
    if (local_3e8 != (uint **)0x0) {
      FUN_1400020a8();
    }
  }
  local_390 = 0;
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  FUN_147099490(&local_3d8);
  FUN_142b1da3d(local_508,uStack_500 & 0xffffffff);
  if (local_508 != 0) {
    FUN_1400020a8();
  }
  local_308 = 0;
  if (local_310 != 0) {
    FUN_1400020a8();
  }
  FUN_142b1be38(&local_350);
  FUN_1470942a8(&local_4f8);
  plVar35 = plStack_280;
  if (plStack_280 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_280 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_280)(plStack_280);
      LOCK();
      piVar3 = (int *)((longlong)plVar35 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar35 + 8))(plVar35);
      }
    }
  }
  local_298 = 0;
  if (local_2a0 != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(&uStack_2e0);
  if (lStack_2f0 != 0) {
    FUN_1400020a8();
  }
  local_218 = 0;
  if (local_220 != 0) {
    FUN_1400020a8();
  }
  FUN_140c64cae(&local_260);
  FUN_1456d172d(local_270,uStack_268 & 0xffffffff);
  if (local_270 != 0) {
    FUN_1400020a8();
  }
  local_198 = 0;
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  FUN_140bf8cc0(&local_1e0);
  if (local_1f0 != 0) {
    FUN_1400020a8();
  }
  if (local_200 != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(&local_148);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  FUN_1401d9a90(&uStack_180);
  plVar35 = plStack_68;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar35 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar35 + 8))(plVar35);
      }
    }
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(local_e8 + 4);
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_5d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar33 != 0;
LAB_142b1afc8:
  if (uVar29 == uVar40) goto LAB_142b1aff0;
  goto LAB_142b1afcf;
LAB_142b1afe8:
  if (uVar29 == uVar40) {
LAB_142b1aff0:
    bVar7 = false;
    goto LAB_142b1aff7;
  }
LAB_142b1afcf:
  local_598 = local_598 + 4;
  if (local_598 == puVar15) goto LAB_142b1aff4;
  goto LAB_142b1ae40;
code_r0x000142b1b0c4:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar29] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar40];
LAB_142b1b0c7:
  if (iVar13 == 0) goto LAB_142b1b0ed;
LAB_142b1b0cc:
  puVar14 = puVar14 + 4;
  ppuVar23 = local_5a8;
  if (puVar14 == puVar21) goto LAB_142b1b16b;
  goto LAB_142b1b03e;
}



// FUNCTION 142b1b492 FUN_142b1b492 body=1486 status=ok
// SIG undefined FUN_142b1b492(void)

longlong FUN_142b1b492(undefined8 *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined1 local_8c [4];
  ulonglong *local_88;
  uint *puStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = *(longlong *)*param_1;
  local_98 = param_2;
  if ((param_2 != 0 && lVar7 != 0) && (*(char *)(param_2 + 0xa3) == '\x01')) {
    plVar3 = (longlong *)param_1[1];
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      plVar6 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar3[8];
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)plVar3[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar8 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar8 * 0x18);
          if (*puVar1 == param_2) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              uVar5 = (uint)puVar1[1];
              if ((int)uVar5 < 0) goto LAB_142b1ba05;
              goto LAB_142b1b9eb;
            }
            break;
          }
          iVar8 = (int)puVar1[2];
        } while (iVar8 != -1);
      }
    }
    puVar13 = *(uint **)(lVar7 + 0x168);
    lVar9 = (longlong)*(int *)(lVar7 + 0x170);
    local_a0 = lVar9 * 0x1c0;
    local_a8 = puVar13;
    if (lVar9 != 0) {
      puVar14 = puVar13;
      do {
        if (puVar14[0x1a] == *(uint *)(param_2 + 0x98)) {
          if (((((float)puVar14[0x1b] == *(float *)(param_2 + 0x9c)) &&
               (!NAN((float)puVar14[0x1b]) && !NAN(*(float *)(param_2 + 0x9c)))) &&
              (*(longlong *)(puVar14 + 0x18) == *(longlong *)(param_2 + 0x90))) &&
             (*(longlong *)(puVar14 + 0x20) == *(longlong *)(param_2 + 0xb0))) {
            uVar5 = puVar14[0x24];
            uVar2 = *(uint *)(param_2 + 0xc0);
            uVar10 = uVar2;
            if ((int)uVar5 < (int)uVar2) {
              uVar10 = uVar5;
            }
            if (0 < (int)uVar10) {
              uVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(puVar14 + 0x22) + uVar12 * 8) !=
                    *(longlong *)(*(longlong *)(param_2 + 0xb8) + uVar12 * 8)) goto LAB_142b1b817;
                uVar12 = uVar12 + 1;
              } while (uVar10 != uVar12);
            }
            if ((int)uVar2 < (int)uVar5) {
              lVar11 = 0;
              do {
                if (*(longlong *)
                     ((longlong)(int)uVar2 * 8 + *(longlong *)(puVar14 + 0x22) + lVar11 * 8) != 0)
                goto LAB_142b1b817;
                lVar11 = lVar11 + 1;
              } while (uVar5 - uVar2 != (int)lVar11);
            }
            else if ((int)uVar5 < (int)uVar2) {
              lVar11 = 0;
              do {
                if (*(longlong *)
                     ((longlong)(int)uVar5 * 8 + *(longlong *)(param_2 + 0xb8) + lVar11 * 8) != 0)
                goto LAB_142b1b817;
                lVar11 = lVar11 + 1;
              } while (uVar2 - uVar5 != (int)lVar11);
            }
            if (*(longlong *)(puVar14 + 0x30) == *(longlong *)(param_2 + 0xf0)) {
              uVar5 = puVar14[0x34];
              uVar2 = *(uint *)(param_2 + 0x100);
              uVar10 = uVar2;
              if ((int)uVar5 < (int)uVar2) {
                uVar10 = uVar5;
              }
              if (0 < (int)uVar10) {
                uVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(puVar14 + 0x32) + uVar12 * 8) !=
                      *(longlong *)(*(longlong *)(param_2 + 0xf8) + uVar12 * 8)) goto LAB_142b1b817;
                  uVar12 = uVar12 + 1;
                } while (uVar10 != uVar12);
              }
              if ((int)uVar2 < (int)uVar5) {
                lVar11 = 0;
                do {
                  if (*(longlong *)
                       ((longlong)(int)uVar2 * 8 + *(longlong *)(puVar14 + 0x32) + lVar11 * 8) != 0)
                  goto LAB_142b1b817;
                  lVar11 = lVar11 + 1;
                } while (uVar5 - uVar2 != (int)lVar11);
              }
              else if ((int)uVar5 < (int)uVar2) {
                lVar11 = 0;
                do {
                  if (*(longlong *)
                       ((longlong)(int)uVar5 * 8 + *(longlong *)(param_2 + 0xf8) + lVar11 * 8) != 0)
                  goto LAB_142b1b817;
                  lVar11 = lVar11 + 1;
                } while (uVar2 - uVar5 != (int)lVar11);
              }
              if (*(longlong *)(puVar14 + 0x40) == *(longlong *)(param_2 + 0x130)) {
                uVar5 = puVar14[0x44];
                uVar2 = *(uint *)(param_2 + 0x140);
                uVar10 = uVar2;
                if ((int)uVar5 < (int)uVar2) {
                  uVar10 = uVar5;
                }
                if (0 < (int)uVar10) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(puVar14 + 0x42) + uVar12 * 8) !=
                        *(longlong *)(*(longlong *)(param_2 + 0x138) + uVar12 * 8))
                    goto LAB_142b1b817;
                    uVar12 = uVar12 + 1;
                  } while (uVar10 != uVar12);
                }
                if ((int)uVar2 < (int)uVar5) {
                  lVar11 = 0;
                  while (*(longlong *)
                          ((longlong)(int)uVar2 * 8 + *(longlong *)(puVar14 + 0x42) + lVar11 * 8) ==
                         0) {
                    lVar11 = lVar11 + 1;
                    if (uVar5 - uVar2 == (int)lVar11) goto LAB_142b1ba41;
                  }
                }
                else {
                  if ((int)uVar2 <= (int)uVar5) {
LAB_142b1ba41:
                    local_88 = &local_98;
                    puStack_80 = puVar14;
                    FUN_1470987c8(plVar3,local_8c);
                    uVar5 = *puVar14;
                    goto LAB_142b1b9e1;
                  }
                  lVar11 = 0;
                  while (*(longlong *)
                          ((longlong)(int)uVar5 * 8 + *(longlong *)(param_2 + 0x138) + lVar11 * 8)
                         == 0) {
                    lVar11 = lVar11 + 1;
                    if (uVar2 - uVar5 == (int)lVar11) goto LAB_142b1ba41;
                  }
                }
              }
            }
          }
        }
LAB_142b1b817:
        puVar14 = puVar14 + 0x70;
      } while (puVar14 != puVar13 + lVar9 * 0x70);
    }
    uVar5 = *(int *)(lVar7 + 0x170) + 1;
    *(uint *)(lVar7 + 0x170) = uVar5;
    if (*(uint *)(lVar7 + 0x174) < uVar5) {
      FUN_142b1c0de((undefined8 *)(lVar7 + 0x168));
      puVar13 = *(uint **)(lVar7 + 0x168);
    }
    lVar7 = local_a0;
    puVar14 = (uint *)(local_a0 + (longlong)puVar13);
    FUN_142b1bfe7(puVar14);
    *(int *)(lVar7 + (longlong)puVar13) = *(int *)(*(longlong *)*param_1 + 0x170) + -1;
    FUN_141293510((int *)(lVar7 + (longlong)puVar13) + 2,param_2 + 0x38);
    FUN_1470986f2((longlong)puVar13 + lVar7 + 0x70,param_2 + 0xa0);
    iVar8 = *(int *)((longlong)puVar13 + lVar7 + 0x1b8);
    *(uint *)((longlong)puVar13 + lVar7 + 0x1b8) = iVar8 + 1U;
    if (*(uint *)((longlong)puVar13 + lVar7 + 0x1bc) < iVar8 + 1U) {
      FUN_147098cc2((longlong)puVar13 + lVar7 + 0x1b0,iVar8);
    }
    *(ulonglong *)(*(longlong *)(puVar14 + 0x6c) + (longlong)iVar8 * 8) = param_2;
    lVar7 = param_1[2];
    FUN_1446dcdd4(&local_88,puVar14 + 0x18);
    lVar9 = *(longlong *)(lVar7 + 0x28);
    uVar5 = 0xffffffff;
    if (lVar9 != 0) {
      uVar5 = FUN_1470941b4(lVar9,&local_88);
      lVar7 = *(longlong *)(lVar7 + 0x30);
      if (lVar7 != 0) {
        FUN_14709757e(lVar7,uVar5);
      }
    }
    puVar14[0x46] = uVar5;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined8 *)param_1[3];
    local_88 = (ulonglong *)0x0;
    puStack_80 = (uint *)0x0;
    FUN_1449f3ff4(puVar14 + 0x1e,&local_88);
    FUN_147098d48(*puVar4,puVar14 + 0x48,&local_88);
    if (local_88 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined8 *)param_1[3];
    local_88 = (ulonglong *)0x0;
    puStack_80 = (uint *)0x0;
    FUN_1449f3ff4(puVar14 + 0x2e,&local_88);
    FUN_147098d48(*puVar4,puVar14 + 0x4c,&local_88);
    if (local_88 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined8 *)param_1[3];
    local_88 = (ulonglong *)0x0;
    puStack_80 = (uint *)0x0;
    FUN_1449f3ff4(puVar14 + 0x3e,&local_88);
    FUN_147098d48(*puVar4,puVar14 + 0x50,&local_88);
    if (local_88 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = *puVar14;
LAB_142b1b9e1:
    if (-1 < (int)uVar5) {
      lVar7 = *(longlong *)*param_1;
LAB_142b1b9eb:
      if ((int)uVar5 < *(int *)(lVar7 + 0x170)) {
        lVar7 = (ulonglong)uVar5 * 0x1c0 + *(longlong *)(lVar7 + 0x168);
        goto LAB_142b1ba07;
      }
    }
  }
LAB_142b1ba05:
  lVar7 = 0;
LAB_142b1ba07:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 142b1ba62 FUN_142b1ba62 body=178 status=ok
// SIG undefined FUN_142b1ba62(void)

int * FUN_142b1ba62(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x1a0);
  iVar2 = *(int *)(param_1 + 0x1a8);
  lVar5 = (longlong)iVar2;
  if (0 < lVar5) {
    piVar4 = (int *)*plVar1;
    lVar3 = lVar5;
    do {
      if (*piVar4 == *param_2) {
        return piVar4;
      }
      piVar4 = piVar4 + 0x14;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 0x1a8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1ac) < iVar2 + 1U) {
    FUN_142b1c20c(plVar1,iVar2);
  }
  piVar4 = (int *)(lVar5 * 0x50 + *plVar1);
  FUN_142b1c1e6(piVar4);
  FUN_1447715ec(piVar4,param_2);
  iVar2 = -1;
  if (*(longlong *)(param_3 + 0x28) != 0) {
    iVar2 = FUN_1470941b4(*(longlong *)(param_3 + 0x28),param_2);
    if (*(longlong *)(param_3 + 0x30) != 0) {
      FUN_14709757e(*(longlong *)(param_3 + 0x30),iVar2);
    }
  }
  piVar4[0xc] = iVar2;
  return piVar4;
}



// FUNCTION 142b1bb14 FUN_142b1bb14 body=165 status=ok
// SIG undefined FUN_142b1bb14(void)

int * FUN_142b1bb14(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x48);
  lVar5 = (longlong)iVar2;
  if (0 < lVar5) {
    piVar4 = (int *)*plVar1;
    lVar3 = lVar5;
    do {
      if (*piVar4 == *param_2) {
        return piVar4;
      }
      piVar4 = piVar4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 0x48) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
    FUN_142b1c336(plVar1,iVar2);
  }
  piVar4 = (int *)(lVar5 * 0x40 + *plVar1);
  FUN_142b1c315(piVar4);
  FUN_1447715ec(piVar4,param_2);
  iVar2 = -1;
  if (*(longlong *)(param_3 + 0x28) != 0) {
    iVar2 = FUN_1470941b4(*(longlong *)(param_3 + 0x28),param_2);
    if (*(longlong *)(param_3 + 0x30) != 0) {
      FUN_14709757e(*(longlong *)(param_3 + 0x30),iVar2);
    }
  }
  piVar4[0xc] = iVar2;
  return piVar4;
}



// FUNCTION 142b1bbba FUN_142b1bbba body=234 status=ok
// SIG undefined FUN_142b1bbba(void)

int FUN_142b1bbba(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_31;
  char *local_30;
  undefined4 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = param_2;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & (int)param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x10;
        if (*(char *)(lVar3 + (longlong)iVar2 * 0x10) == param_2) {
          if ((lVar1 != 0) && ((int *)(lVar1 + 4) != (int *)0x0)) {
            iVar2 = *(int *)(lVar1 + 4);
            goto LAB_142b1bc87;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  local_38 = *(undefined4 *)(param_1 + 0x18);
  local_28 = &local_38;
  local_30 = &local_31;
  FUN_147098ff0((longlong *)(param_1 + 0x20),local_1c);
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
    FUN_140cd36ae(param_1 + 0x10,iVar2);
  }
  *(char *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2) = local_31;
  iVar2 = *(int *)(param_1 + 0x18) + -1;
LAB_142b1bc87:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 142b1bca5 FUN_142b1bca5 body=69 status=ok
// SIG undefined FUN_142b1bca5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b1bca5(void)

{
  _DAT_14c9a1140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b1bce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1148,1);
  return;
}



// FUNCTION 142b1bd8f FUN_142b1bd8f body=169 status=ok
// SIG undefined FUN_142b1bd8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b1bd8f(void)

{
  _DAT_14c9a1258 = 0;
  if (DAT_14c9a1250 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c9a1218 = 0;
  if (DAT_14c9a121c != 0) {
    FUN_14472eb64(&DAT_14c9a1210,0);
  }
  _DAT_14c9a1240 = 0xffffffff;
  _DAT_14c9a1238 = 0;
  if (0x80 < DAT_14c9a123c) {
    DAT_14c9a123c = 0x80;
    FUN_1446efbd8(&DAT_14c9a1220,0);
  }
  if (DAT_14c9a1230 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1210 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b1be38 FUN_142b1be38 body=413 status=ok
// SIG undefined FUN_142b1be38(void)

void FUN_142b1be38(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x38);
      FUN_1401d9a90(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b1bfe7 FUN_142b1bfe7 body=246 status=ok
// SIG undefined FUN_142b1bfe7(void)

void FUN_142b1bfe7(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0x3f80000000000001;
  param_1[0x1c] = 0;
  *(undefined2 **)(param_1 + 0x1e) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined2 **)(param_1 + 0x26) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined2 **)(param_1 + 0x2e) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined2 **)(param_1 + 0x36) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined2 **)(param_1 + 0x3e) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x62] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  return;
}



// FUNCTION 142b1c0de FUN_142b1c0de body=264 status=ok
// SIG undefined FUN_142b1c0de(void)

void FUN_142b1c0de(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x1c0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 6;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x1c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142b1c1e6 FUN_142b1c1e6 body=37 status=ok
// SIG undefined FUN_142b1c1e6(void)

void FUN_142b1c1e6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 142b1c20c FUN_142b1c20c body=265 status=ok
// SIG undefined FUN_142b1c20c(void)

void FUN_142b1c20c(longlong param_1,int param_2)

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



// FUNCTION 142b1c315 FUN_142b1c315 body=33 status=ok
// SIG undefined FUN_142b1c315(void)

void FUN_142b1c315(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return;
}



// FUNCTION 142b1c336 FUN_142b1c336 body=248 status=ok
// SIG undefined FUN_142b1c336(void)

void FUN_142b1c336(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142b1c432 FUN_142b1c432 body=103 status=ok
// SIG undefined FUN_142b1c432(void)

void FUN_142b1c432(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c9a1ab0;
  if (DAT_14c9a1ab0 == 0) {
    return;
  }
  *(int *)(DAT_14c9a1ab0 + 0x5c) = *(int *)(DAT_14c9a1ab0 + 0x5c) + 1;
  *(undefined4 *)(lVar1 + 0x578) = 1;
  FUN_145a229f0(lVar1 + 0x598,1,*(int *)(lVar1 + 0x58) < 3);
  *(undefined4 *)(lVar1 + 0x578) = 2;
  FUN_145a229f0(lVar1 + 0x598,2,*(int *)(lVar1 + 0x58) < 3);
  return;
}



// FUNCTION 142b1c49a FUN_142b1c49a body=282 status=ok
// SIG undefined FUN_142b1c49a(void)

undefined8 * FUN_142b1c49a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b1bd68);
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



// FUNCTION 142b1c5b4 FUN_142b1c5b4 body=175 status=ok
// SIG undefined FUN_142b1c5b4(void)

void FUN_142b1c5b4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xe50);
  *(int *)(lVar3 + 0xe50) = iVar2 + 1;
  local_30 = param_1;
  (**(code **)param_1[0x15])(param_1 + 0x15,&local_30);
  *(int *)(lVar3 + 0xe50) = iVar2;
  FUN_140f6e78c(param_1 + 0x15);
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1c664 FUN_142b1c664 body=58 status=ok
// SIG undefined FUN_142b1c664(void)

undefined8 FUN_142b1c664(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = *param_1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(lVar2 + 0x20);
    *(undefined8 **)(lVar2 + 0x20) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 142b1c6b4 FUN_142b1c6b4 body=29 status=ok
// SIG undefined FUN_142b1c6b4(void)

undefined8 FUN_142b1c6b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1c6d2 FUN_142b1c6d2 body=282 status=ok
// SIG undefined FUN_142b1c6d2(void)

undefined8 * FUN_142b1c6d2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b1bd68);
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



// FUNCTION 142b1c7ec FUN_142b1c7ec body=175 status=ok
// SIG undefined FUN_142b1c7ec(void)

void FUN_142b1c7ec(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xe50);
  *(int *)(lVar3 + 0xe50) = iVar2 + 1;
  local_30 = param_1;
  (**(code **)param_1[0x15])(param_1 + 0x15,&local_30);
  *(int *)(lVar3 + 0xe50) = iVar2;
  FUN_147099bba(param_1 + 0x15);
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1c89c FUN_142b1c89c body=282 status=ok
// SIG undefined FUN_142b1c89c(void)

undefined8 * FUN_142b1c89c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b1bd68);
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



// FUNCTION 142b1c9b6 FUN_142b1c9b6 body=211 status=ok
// SIG undefined FUN_142b1c9b6(void)

void FUN_142b1c9b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar4 + 0xe50);
  *(int *)(lVar4 + 0xe50) = iVar3 + 1;
  local_28 = param_1;
  (**(code **)param_1[0x15])(param_1 + 0x15,&local_28);
  *(int *)(lVar4 + 0xe50) = iVar3;
  param_1[0x15] = &PTR_FUN_14a174458;
  plVar5 = (longlong *)param_1[0x18];
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
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_28 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1ca8a FUN_142b1ca8a body=282 status=ok
// SIG undefined FUN_142b1ca8a(void)

undefined8 * FUN_142b1ca8a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b1bd68);
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



// FUNCTION 142b1cba4 FUN_142b1cba4 body=154 status=ok
// SIG undefined FUN_142b1cba4(void)

void FUN_142b1cba4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xe50);
  *(int *)(lVar3 + 0xe50) = iVar2 + 1;
  local_28 = param_1;
  (**(code **)param_1[0x15])(param_1 + 0x15,&local_28);
  *(int *)(lVar3 + 0xe50) = iVar2;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1cc40 FUN_142b1cc40 body=282 status=ok
// SIG undefined FUN_142b1cc40(void)

undefined8 * FUN_142b1cc40(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b1bd68);
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



// FUNCTION 142b1cd5a FUN_142b1cd5a body=175 status=ok
// SIG undefined FUN_142b1cd5a(void)

void FUN_142b1cd5a(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xe50);
  *(int *)(lVar3 + 0xe50) = iVar2 + 1;
  local_30 = param_1;
  (**(code **)param_1[0x15])(param_1 + 0x15,&local_30);
  *(int *)(lVar3 + 0xe50) = iVar2;
  FUN_14600905c(param_1 + 0x15);
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1ce0a FUN_142b1ce0a body=282 status=ok
// SIG undefined FUN_142b1ce0a(void)

undefined8 * FUN_142b1ce0a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b1bd68);
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



// FUNCTION 142b1cf24 FUN_142b1cf24 body=175 status=ok
// SIG undefined FUN_142b1cf24(void)

void FUN_142b1cf24(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xe50);
  *(int *)(lVar3 + 0xe50) = iVar2 + 1;
  local_30 = param_1;
  (**(code **)param_1[0x15])(param_1 + 0x15,&local_30);
  *(int *)(lVar3 + 0xe50) = iVar2;
  FUN_1462a2fa6(param_1 + 0x15);
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1cfd4 FUN_142b1cfd4 body=40 status=ok
// SIG undefined FUN_142b1cfd4(void)

void FUN_142b1cfd4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 142b1cffc FUN_142b1cffc body=689 status=ok
// SIG undefined FUN_142b1cffc(void)

void FUN_142b1cffc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar13 = *param_1;
  if ((*(char *)(lVar13 + 0x299) == '\0') && ((DAT_14c872bd8 & 1) == 0)) {
    piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xe50);
    iVar4 = *piVar2;
    *piVar2 = iVar4 + 1;
    uVar5 = *(uint *)(param_1 + 1);
    plVar6 = *(longlong **)(*(longlong *)(lVar13 + 200) + (longlong)(int)uVar5 * 8);
    if ((plVar6 != (longlong *)0x0) && ((longlong)(int)param_1[3] != 0)) {
      uVar12 = (ulonglong)uVar5;
      plVar10 = (longlong *)param_1[2];
      plVar9 = plVar10 + (longlong)(int)param_1[3] * 2;
      lVar13 = uVar12 * 0x30;
      do {
        lVar14 = *plVar10;
        if ((((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 0x170), lVar7 != 0)) &&
            (-1 < (int)uVar5)) && ((int)uVar5 < *(int *)(lVar14 + 0x160))) {
          lVar17 = lVar14 + 0x148;
          if (*(longlong *)(lVar14 + 0x158) != 0) {
            lVar17 = *(longlong *)(lVar14 + 0x158);
          }
          if ((*(uint *)(lVar17 + (ulonglong)(uVar5 >> 5) * 4) & 1 << ((byte)uVar5 & 0x1f)) != 0) {
            if (plVar6[0x1a] != lVar7) {
              plVar6[0x1a] = lVar7;
            }
            lVar14 = *(longlong *)(lVar14 + 0x138);
            lVar17 = (longlong)*(int *)(lVar14 + 0x18 + lVar13);
            if (lVar17 != 0) {
              lVar16 = *(longlong *)(lVar14 + 0x10 + lVar13);
              lVar17 = lVar17 << 4;
              do {
                *(int *)(lVar7 + 0x180) = *(int *)(lVar7 + 0x180) + 1;
                piVar3 = (int *)(*(longlong *)(lVar7 + 0x188) + uVar12 * 4);
                *piVar3 = *piVar3 + 1;
                FUN_14022002e(plVar6,plVar6 + 0x1b,lVar16);
                lVar16 = lVar16 + 0x10;
                lVar17 = lVar17 + -0x10;
              } while (lVar17 != 0);
            }
            plVar11 = (longlong *)(lVar14 + lVar13);
            if ((longlong)(int)plVar11[1] != 0) {
              puVar15 = (undefined8 *)(*plVar11 + 0x28);
              lVar14 = (longlong)(int)plVar11[1] << 6;
              do {
                *(int *)(lVar7 + 0x180) = *(int *)(lVar7 + 0x180) + 1;
                piVar3 = (int *)(*(longlong *)(lVar7 + 0x188) + uVar12 * 4);
                *piVar3 = *piVar3 + 1;
                if (*(int *)(puVar15 + 2) == -1) {
                  (**(code **)(*plVar6 + 0x330))(plVar6,puVar15,puVar15 + -5);
                }
                else {
                  (**(code **)(*plVar6 + 0x338))(plVar6,puVar15);
                }
                *puVar15 = 0;
                plVar8 = (longlong *)puVar15[1];
                if (plVar8 != (longlong *)0x0) {
                  puVar15[1] = 0;
                  LOCK();
                  plVar1 = plVar8 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar8)(plVar8);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar8 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
                puVar15 = puVar15 + 8;
                lVar14 = lVar14 + -0x40;
              } while (lVar14 != 0);
            }
            if ((longlong)(int)plVar11[5] != 0) {
              lVar14 = plVar11[4] + 0x28;
              lVar17 = (longlong)(int)plVar11[5] * 0x58;
              do {
                *(int *)(lVar7 + 0x180) = *(int *)(lVar7 + 0x180) + 1;
                piVar3 = (int *)(*(longlong *)(lVar7 + 0x188) + uVar12 * 4);
                *piVar3 = *piVar3 + 1;
                if (*(int *)(lVar14 + 0x28) == -1) {
                  (**(code **)(*plVar6 + 0x340))(plVar6,lVar14 + -0x28,lVar14);
                }
                else {
                  (**(code **)(*plVar6 + 0x348))(plVar6,lVar14 + -0x28,lVar14);
                }
                lVar14 = lVar14 + 0x58;
                lVar17 = lVar17 + -0x58;
              } while (lVar17 != 0);
            }
          }
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar9);
    }
    *piVar2 = iVar4;
  }
  return;
}



// FUNCTION 142b1d2b8 FUN_142b1d2b8 body=29 status=ok
// SIG undefined FUN_142b1d2b8(void)

void FUN_142b1d2b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b1d2d6 FUN_142b1d2d6 body=69 status=ok
// SIG undefined FUN_142b1d2d6(void)

undefined8 * FUN_142b1d2d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a176170;
  FUN_141183afa(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1d31c FUN_142b1d31c body=135 status=ok
// SIG undefined FUN_142b1d31c(void)

void FUN_142b1d31c(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  
  if ((*(char *)(*param_1 + 0x299) == '\0') && ((DAT_14c872bd8 & 1) == 0)) {
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xe50);
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
    cVar5 = (**(code **)(*(longlong *)param_1[1] + 0x3d8))((longlong *)param_1[1],0);
    if (cVar5 != '\0') {
      iVar4 = (int)param_1[2];
      lVar7 = *(longlong *)(param_1[3] + 0x10);
      if (lVar7 == 0) {
        lVar7 = param_1[3];
      }
      iVar6 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar6 = iVar4;
      }
      puVar2 = (uint *)(lVar7 + (longlong)(iVar6 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
    }
    *piVar1 = iVar3;
  }
  return;
}



// FUNCTION 142b1d3ae FUN_142b1d3ae body=29 status=ok
// SIG undefined FUN_142b1d3ae(void)

void FUN_142b1d3ae(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b1d3cc FUN_142b1d3cc body=83 status=ok
// SIG undefined FUN_142b1d3cc(void)

undefined8 * FUN_142b1d3cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a176190;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 142b1d420 FUN_142b1d420 body=131 status=ok
// SIG undefined FUN_142b1d420(void)

void FUN_142b1d420(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*(char *)(*param_1 + 0x299) == '\0') && ((DAT_14c872bd8 & 1) == 0)) {
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xe50);
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      uVar3 = *(uint *)(param_1 + 2);
      lVar5 = *(longlong *)(param_1[3] + 0x10);
      if (lVar5 == 0) {
        lVar5 = param_1[3];
      }
      uVar4 = uVar3 + 0x1f;
      if (-1 < (int)uVar3) {
        uVar4 = uVar3;
      }
      if ((*(uint *)(lVar5 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
        (**(code **)(*(longlong *)param_1[1] + 0x3d0))();
      }
    }
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 142b1d4ae FUN_142b1d4ae body=29 status=ok
// SIG undefined FUN_142b1d4ae(void)

void FUN_142b1d4ae(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}


