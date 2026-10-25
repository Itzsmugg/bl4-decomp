// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407fc6b4 FUN_1407fc6b4 body=509 status=ok
// SIG undefined FUN_1407fc6b4(void)

void FUN_1407fc6b4(longlong param_1,longlong param_2,longlong param_3,int param_4,byte *param_5)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *_Src;
  undefined8 *puVar7;
  undefined1 auStack_448 [32];
  undefined1 local_428 [192];
  longlong *local_368;
  longlong *local_360;
  undefined1 local_358 [792];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if ((*(int *)(param_2 + 0x998) != 0) && ((param_5[1] & 2) != 0)) {
    puVar7 = (undefined8 *)((longlong)param_4 * 0x10 + *(longlong *)(param_3 + 0x90));
    if (puVar7 != (undefined8 *)0x0) {
      lVar2 = *(longlong *)(param_2 + 0x9c8);
      lVar3 = FUN_1407fc8fc(*puVar7);
      if (lVar3 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)FUN_14005b71c(lVar3);
      }
      lVar3 = FUN_1407fc8fc(puVar7[1]);
      if (lVar3 != 0) {
        local_360 = (longlong *)FUN_14005b71c(lVar3);
        local_368 = plVar4;
        if ((((plVar4 != (longlong *)0x0) && (local_360 != (longlong *)0x0)) &&
            ((*param_5 & 0x80) != 0)) &&
           (_Src = (void *)((longlong)param_4 * 0x310 + *(longlong *)(param_3 + 0x70)),
           _Src != (void *)0x0)) {
          memcpy(local_428,_Src,0xc0);
          uVar5 = FUN_14005b71c(*puVar7);
          uVar6 = FUN_14005b71c(puVar7[1]);
          *(undefined8 *)(param_1 + 0x50) = uVar5;
          *(undefined8 *)(param_1 + 0x58) = uVar6;
          FUN_140baaacb(param_1 + 0x50,&local_368,local_428);
          FUN_1408c9ee8(local_358);
          memcpy(local_358,local_428,0xc0);
          uVar5 = FUN_1408c9c86(lVar2 + 0x8f0,&local_368,local_358);
          *(undefined8 *)(param_1 + 0x48) = uVar5;
          FUN_1407fc8b2(*plVar4,plVar4 + 1,uVar5);
          plVar4 = local_360;
          FUN_1407fc8b2(*local_360,local_360 + 1,*(undefined8 *)(param_1 + 0x48));
          if ((local_368 != (longlong *)0x0) && (1 < *(byte *)((longlong)local_368 + 0xc))) {
            pbVar1 = (byte *)(*(longlong *)(*local_368 + 0x2c0) + 10 +
                             (longlong)(int)local_368[1] * 0x10);
            *pbVar1 = *pbVar1 | 1;
          }
          if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
            pbVar1 = (byte *)(*(longlong *)(*plVar4 + 0x2c0) + 10 + (longlong)(int)plVar4[1] * 0x10)
            ;
            *pbVar1 = *pbVar1 | 1;
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fc8b2 FUN_1407fc8b2 body=74 status=ok
// SIG undefined FUN_1407fc8b2(void)

void FUN_1407fc8b2(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  lVar3 = (longlong)*param_2 * 0x10;
  lVar4 = *(longlong *)(lVar2 + lVar3);
  iVar1 = *(int *)(lVar2 + 8 + lVar3);
  *(uint *)(lVar2 + 8 + lVar3) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xc + lVar3) < iVar1 + 1U) {
    FUN_1407fc9b6((longlong *)(lVar2 + lVar3),iVar1);
    lVar4 = *(longlong *)(lVar2 + lVar3);
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = param_3;
  return;
}



// FUNCTION 1407fc8fc FUN_1407fc8fc body=84 status=ok
// SIG undefined FUN_1407fc8fc(void)

longlong FUN_1407fc8fc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  do {
    lVar2 = param_1;
    plVar1 = (longlong *)FUN_14005b71c(lVar2);
    param_1 = FUN_1407fc950(lVar2);
    if (param_1 == 0) {
      return lVar2;
    }
    if (plVar1 == (longlong *)0x0) {
      return lVar2;
    }
    if (*(byte *)((longlong)plVar1 + 0xc) < 2) {
      return lVar2;
    }
  } while (*(char *)(*(longlong *)(*plVar1 + 0x2c0) + 0xd + (longlong)(int)plVar1[1] * 0x10) ==
           '\x01');
  return lVar2;
}



// FUNCTION 1407fc950 FUN_1407fc950 body=102 status=ok
// SIG undefined FUN_1407fc950(void)

undefined8 FUN_1407fc950(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (1 < *(int *)(lVar3 + 0x1c) - 0xbU) {
    if (*(int *)(lVar3 + 0x1c) != 2) {
      return 0;
    }
    iVar1 = FUN_144b072ca(lVar3 + 0x5d0,(int)param_1[1]);
    if (iVar1 != -1) {
      uVar2 = FUN_142a1e8ec(lVar3,iVar1);
      return uVar2;
    }
    lVar3 = *param_1;
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x1c) == 0xc)) {
    return *(undefined8 *)(lVar3 + 0x120);
  }
  return 0;
}



// FUNCTION 1407fc9b6 FUN_1407fc9b6 body=353 status=ok
// SIG undefined FUN_1407fc9b6(void)

void FUN_1407fc9b6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407fca3b;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1407fca3b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407fcb18 FUN_1407fcb18 body=498 status=ok
// SIG undefined FUN_1407fcb18(void)

void FUN_1407fcb18(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138 [192];
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(byte *)(param_1 + 0x51a) & 2) != 0) {
    plVar1 = param_1 + 0x50b;
    *(byte *)(param_1 + 0x51a) = *(byte *)(param_1 + 0x51a) & 0xfd;
    (**(code **)(*param_1 + 0x578))();
    local_48 = (undefined1 *)0x0;
    local_40 = 0x400000000;
    (**(code **)(param_1[0x4bf] + 0xd8))(param_1 + 0x4bf,local_68,0);
    puVar6 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar6 = local_68;
    }
    lVar4 = (longlong)(int)local_40;
    if (lVar4 != 0) {
      lVar7 = 0;
      bVar5 = 0;
      do {
        lVar2 = *(longlong *)(puVar6 + lVar7);
        if (*(char *)(lVar2 + 8) == '\x01') {
          bVar5 = bVar5 | (*(byte *)(lVar2 + 0x78) & 2) >> 1;
        }
        FUN_140f06f08(lVar2,1);
        lVar7 = lVar7 + 8;
      } while (lVar4 * 8 != lVar7);
      if (bVar5 != 0) {
        FUN_14574a6bc(param_1);
      }
    }
    FUN_145749f78(param_1);
    FUN_145749ee2(plVar1,0);
    FUN_140f8387c(plVar1,0);
    local_78 = (undefined1 *)0x0;
    local_70 = 0x1800000000;
    FUN_1407fcdae(param_1,local_138,0);
    puVar6 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar6 = local_138;
    }
    lVar4 = (longlong)(int)local_70;
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        FUN_140357fa8(*(undefined8 *)(puVar6 + lVar7),2,2);
        lVar7 = lVar7 + 8;
      } while (lVar4 * 8 != lVar7);
    }
    FUN_140f838ea(plVar1);
    uVar3 = FUN_14479d2ce(param_1 + 0x4eb);
    (**(code **)(*param_1 + 0x440))(param_1,uVar3);
    uVar3 = FUN_14479d2ce(param_1 + 0x4ec);
    FUN_140eeb8c0(param_1,uVar3);
    FUN_145749f18(param_1);
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407fcd18 FUN_1407fcd18 body=149 status=ok
// SIG undefined FUN_1407fcd18(void)

void FUN_1407fcd18(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_3 != '\x01') && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
      FUN_1488ca64c(param_2,iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x10);
  }
  if ((param_3 != '\x02') && (*(longlong *)(param_1 + 0x18) != 0)) {
    iVar1 = *(int *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
      FUN_1488ca64c(param_2,iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1407fcdae FUN_1407fcdae body=145 status=ok
// SIG undefined FUN_1407fcdae(void)

void FUN_1407fcdae(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_147a6e4da(param_2,0);
  }
  local_28 = FUN_14081cebe();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1407fce40(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fce40 FUN_1407fce40 body=719 status=ok
// SIG undefined FUN_1407fce40(void)

void FUN_1407fce40(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_1407fcfc9:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_1407fceab:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147a6e85a(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147a6e5d6(param_1,&local_40,param_4);
      }
      goto LAB_1407fcee9;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1407fcfc9;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1407fceab;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1407fd110(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147a6e9ac(param_1,&local_50,param_4);
  }
LAB_1407fcee9:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407fd110 FUN_1407fd110 body=925 status=ok
// SIG undefined FUN_1407fd110(void)

void FUN_1407fd110(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar12 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_58 = param_2;
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = puVar12;
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar10 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar10 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar13) goto LAB_1407fd33e;
        iVar9 = iVar9 + 0x20;
        uVar15 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar10 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar15 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar11 != 0) {
        lVar14 = *local_58;
        if ((lVar14 != 0 & DAT_14c950c29) == 1) {
          local_68 = puVar12;
          local_60 = param_3;
          FUN_1456cec3c(lVar14);
          puVar12 = local_68;
          param_3 = local_60;
LAB_1407fd21b:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_68 = puVar12;
            local_60 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar12 = local_68;
            param_3 = local_60;
            if (DAT_14cad00c8 == 0) goto LAB_1407fd428;
          }
          if (*(int *)(lVar14 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1407fd428;
          if (*(longlong *)
               (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar14 = 0;
          }
        }
        else {
          if (lVar14 != 0) goto LAB_1407fd21b;
LAB_1407fd428:
          lVar14 = 0;
        }
        if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
          iVar4 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar4 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar4 + 1U) {
            local_68 = puVar12;
            local_60 = param_3;
            FUN_147a6ecb2(param_3,iVar4);
            puVar12 = local_68;
            param_3 = local_60;
          }
          lVar14 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar14 = param_3;
          }
          *(longlong *)(lVar14 + (longlong)iVar4 * 8) = lVar11;
        }
      }
      uVar15 = uVar15 & ~(uint)uVar10;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar12;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar8 = puVar5[lVar11] & uVar15;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar14 = 0;
          do {
            uVar8 = puVar5[lVar11 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar14 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1407fd312;
            }
            iVar9 = iVar9 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar11 != lVar14);
          uVar15 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1407fd312:
        uVar10 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar10 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_1407fd33e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407fd4ae FUN_1407fd4ae body=873 status=ok
// SIG undefined FUN_1407fd4ae(void)

undefined8 FUN_1407fd4ae(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 *puVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  double *pdVar20;
  uint uVar21;
  undefined4 *puVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar14 = FUN_1447210f0();
  if (((lVar14 == 0) || (lVar15 = FUN_144a86a6e(lVar14), lVar15 == 0)) ||
     (cVar12 = FUN_14133c9d8(lVar15), cVar12 == '\0')) {
    uVar19 = 0;
    goto LAB_1407fd74f;
  }
  local_98 = (undefined4 *)0x0;
  uStack_90 = 1;
  FUN_1406d2ac8(&local_98,0);
  puVar11 = local_98;
  puVar22 = local_98;
  FUN_1406d2a2a();
  uVar27 = SUB84(puVar22,0);
  *(undefined1 *)((longlong)puVar11 + 0x31) = 1;
  lVar23 = *(longlong *)(param_1 + 0x1c8);
  if (lVar23 == 0) {
    puVar16 = &DAT_14c8464e0;
    uVar26 = (undefined4)DAT_14c8464f0;
    uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar26 = (undefined4)*(undefined8 *)(lVar23 + 0x270);
    uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x270) >> 0x20);
    puVar16 = (undefined8 *)(lVar23 + 0x260);
  }
  uVar30 = *(undefined4 *)((longlong)puVar16 + 4);
  uVar4 = *(undefined4 *)(puVar16 + 1);
  uVar5 = *(undefined4 *)((longlong)puVar16 + 0xc);
  *puVar11 = *(undefined4 *)puVar16;
  puVar11[1] = uVar30;
  puVar11[2] = uVar4;
  puVar11[3] = uVar5;
  *(ulonglong *)(puVar11 + 4) = CONCAT44(uVar29,uVar26);
  lVar23 = *(longlong *)(param_1 + 0x1c8);
  if (lVar23 == 0) {
    local_78 = DAT_14c846508;
    uVar27 = (undefined4)DAT_14c8464f8;
    uVar26 = DAT_14c8464f8._4_4_;
    uVar29 = (undefined4)DAT_14c846500;
    uVar30 = DAT_14c846500._4_4_;
  }
  else {
    dVar6 = *(double *)(lVar23 + 0x240);
    dVar7 = *(double *)(lVar23 + 0x248);
    dVar8 = *(double *)(lVar23 + 0x250);
    dVar9 = *(double *)(lVar23 + 600);
    pdVar20 = *(double **)(lVar23 + 0x228);
    local_d8 = dVar6;
    uStack_d0 = dVar7;
    local_c8 = dVar8;
    uStack_c0 = dVar9;
    if (pdVar20 == (double *)0x0) {
      uVar27 = 0x40;
      pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar20 = DAT_14c8463d0;
      pdVar20[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar20[2] = DAT_14c8463e0;
      pdVar20[3] = dVar10;
      dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar20[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar20[5] = dVar10;
      puVar16 = DAT_14c846508;
      pdVar20[6] = (double)DAT_14c846508;
      *(double **)(lVar23 + 0x228) = pdVar20;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar7 != pdVar20[1]);
    auVar2._0_8_ = -(ulonglong)(dVar6 != *pdVar20);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar20[1]) >> 0x20);
    iVar13 = movmskpd((int)puVar16,auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar9 != pdVar20[3]);
    auVar3._0_8_ = -(ulonglong)(dVar8 != pdVar20[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar20[3]) >> 0x20);
    uVar21 = movmskpd(uVar27,auVar3);
    if ((uVar21 & 0x3fffffff) != 0 || iVar13 != 0) {
      *(undefined4 *)(pdVar20 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)pdVar20 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(pdVar20 + 3) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)pdVar20 + 0x1c) = uStack_c0._4_4_;
      *(undefined4 *)pdVar20 = (undefined4)local_d8;
      *(undefined4 *)((longlong)pdVar20 + 4) = local_d8._4_4_;
      *(undefined4 *)(pdVar20 + 1) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)pdVar20 + 0xc) = uStack_d0._4_4_;
      FUN_1448052ee(&local_d8,&local_88);
      pdVar20[6] = (double)local_78;
      pdVar20[4] = local_88;
      pdVar20[5] = uStack_80;
    }
    local_78 = (undefined8 *)pdVar20[6];
    uVar27 = *(undefined4 *)(pdVar20 + 4);
    uVar26 = *(undefined4 *)((longlong)pdVar20 + 0x24);
    uVar29 = *(undefined4 *)(pdVar20 + 5);
    uVar30 = *(undefined4 *)((longlong)pdVar20 + 0x2c);
  }
  local_88 = (double)CONCAT44(uVar26,uVar27);
  uStack_80 = (double)CONCAT44(uVar30,uVar29);
  *(undefined8 **)(puVar11 + 0x12) = local_78;
  *(double *)(puVar11 + 0xe) = local_88;
  *(double *)(puVar11 + 0x10) = uStack_80;
  *(undefined1 *)(puVar11 + 7) = 0;
  puVar11[6] = 0x43fa0000;
  *(undefined1 *)(puVar11 + 0xc) = 0;
  local_88 = 0.0;
  uStack_80 = 0.0;
  FUN_14574a212(lVar15,&local_98,&local_88);
  dVar6 = local_88;
  lVar15 = (longlong)(int)uStack_80;
  if (lVar15 == 0) {
LAB_1407fd7d9:
    uVar19 = *(undefined8 *)(lVar14 + 0x30);
  }
  else {
    lVar23 = 0;
    plVar24 = (longlong *)0x0;
    fVar31 = 3.4e+38;
    do {
      plVar1 = *(longlong **)((longlong)dVar6 + lVar23);
      plVar25 = plVar24;
      fVar28 = fVar31;
      if ((plVar1 != (longlong *)0x0) &&
         (plVar17 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1), plVar17 != (longlong *)0x0)) {
        lVar18 = FUN_140c71830();
        if (((*(int *)(lVar18 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
            ((*(longlong *)
               (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8) ==
              lVar18 + 0x30 && (cVar12 = (**(code **)(*plVar17 + 0x2e0))(plVar17), cVar12 == '\0')))
            ) && (*(char *)((longlong)plVar17 + 0x59) == '\0')) {
          (**(code **)(*plVar1 + 0x58))(plVar1,&local_d8);
          fVar28 = (float)((uStack_c0 - local_d8) * 0.5);
          plVar25 = plVar17;
          if (fVar31 <= fVar28) {
            plVar25 = plVar24;
            fVar28 = fVar31;
          }
        }
      }
      lVar23 = lVar23 + 8;
      plVar24 = plVar25;
      fVar31 = fVar28;
    } while (lVar15 * 8 != lVar23);
    if (plVar25 == (longlong *)0x0) goto LAB_1407fd7d9;
    uVar19 = (**(code **)(*plVar25 + 0x2c8))(plVar25);
  }
  if (local_88 != 0.0) {
    FUN_1400020a8();
  }
  FUN_1406d33ae(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_1407fd74f:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fd818 FUN_1407fd818 body=281 status=ok
// SIG undefined FUN_1407fd818(void)

undefined4
FUN_1407fd818(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    if (param_5 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_5 = 0x3f80000000000000;
      uVar2 = 0;
      memset(param_5 + 1,0,0x9c);
      *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
      param_5[0x15] = 0;
      param_5[0x16] = 0;
      param_5[0x17] = 0;
      param_5[0x18] = 0;
      param_5[0x19] = 0;
      *(undefined4 *)(param_5 + 0x1a) = 0xffffffff;
      *(undefined8 *)((longlong)param_5 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_5 + 0xdc) = 0;
      *(undefined8 *)((longlong)param_5 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_5 + 0xec) = 0;
      param_5[0x1e] = 0;
      param_5[0x1f] = 0;
    }
  }
  else {
    local_20 = param_2[2] - *(double *)(lVar1 + 0x270);
    local_28 = param_2[1] - *(double *)(lVar1 + 0x268);
    local_30 = *param_2 - *(double *)(lVar1 + 0x260);
    local_38 = param_6;
    local_48 = param_5;
    local_40 = 0;
    uVar2 = FUN_1407fd932();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fd932 FUN_1407fd932 body=1405 status=ok
// SIG undefined FUN_1407fd932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407fd932(longlong *param_1,double *param_2,undefined1 (*param_3) [16],
                       ulonglong param_4,void *param_5,undefined4 param_6,undefined1 param_7)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_128 [32];
  void *local_108;
  undefined4 local_100;
  undefined1 local_f8;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar3 = (double)DAT_1499387d0;
  dVar4 = DAT_1499387d0._8_8_;
  if (param_1[0x24] == 0) {
    if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) &&
       (((!NAN(param_2[1]) && (param_2[2] == 0.0)) && (!NAN(param_2[2]))))) {
      dVar13 = *(double *)*param_3 - (double)param_1[0x36];
      dVar9 = *(double *)(*param_3 + 8) - (double)param_1[0x37];
      dVar12 = *(double *)param_3[1] - (double)param_1[0x38];
      auVar22._8_8_ = dVar9;
      auVar22._0_8_ = dVar13;
      auVar21 = divpd(auVar22,_DAT_1499387d0);
      auVar15._0_8_ = dVar12 / 360.0;
      auVar15._8_8_ = 0;
      auVar25 = roundpd(auVar21,auVar21,3);
      auVar21 = roundpd(auVar15,auVar15,3);
      auVar28._0_8_ = dVar12 - auVar21._0_8_ * dVar3;
      auVar28._8_8_ = 0.0 - auVar21._8_8_ * dVar4;
      dVar13 = dVar13 - auVar25._0_8_ * dVar3;
      dVar9 = dVar9 - auVar25._8_8_ * dVar4;
      auVar27._0_8_ = dVar13 + dVar3;
      auVar27._8_8_ = dVar9 + dVar4;
      auVar26._0_8_ = dVar3 + auVar28._0_8_;
      auVar26._8_8_ = dVar4 + auVar28._8_8_;
      auVar16._8_8_ = -(ulonglong)(0.0 <= dVar9);
      auVar16._0_8_ = -(ulonglong)(0.0 <= dVar13);
      auVar21._8_8_ = dVar9;
      auVar21._0_8_ = dVar13;
      auVar25 = blendvpd(auVar27,auVar21,auVar16);
      auVar17._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
      auVar17._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
      auVar21 = blendvpd(auVar26,auVar28,auVar17);
      auVar29._0_8_ = auVar25._0_8_ + -360.0;
      auVar29._8_8_ = auVar25._8_8_ + -360.0;
      auVar18._8_8_ = -(ulonglong)(180.0 < auVar25._8_8_);
      auVar18._0_8_ = -(ulonglong)(180.0 < auVar25._0_8_);
      auVar25 = blendvpd(auVar25,auVar29,auVar18);
      auVar19._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
      auVar19._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
      auVar2._8_8_ = auVar21._8_8_ + -360.0;
      auVar2._0_8_ = auVar21._0_8_ + -360.0;
      auVar21 = blendvpd(auVar21,auVar2,auVar19);
      auVar23._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._8_8_));
      auVar23._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._0_8_));
      iVar6 = movmskpd((int)local_c0,auVar23);
      auVar20._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar21._8_8_));
      auVar20._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar21._0_8_));
      uVar5 = movmskpd((int)param_1,auVar20);
      if ((uVar5 & 0x3fffffff) == 0 && iVar6 == 0) {
        uVar8 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        if (param_5 != (void *)0x0) {
          memset(param_5,0,0x100);
          *(undefined4 *)((longlong)param_5 + 0xd0) = 0xffffffff;
          *(undefined4 *)((longlong)param_5 + 4) = 0x3f800000;
          *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
        }
        goto LAB_1407fdb7a;
      }
    }
    pdVar1 = (double *)param_1[0x46];
    if (pdVar1 == (double *)0x0) {
LAB_1407fda19:
      auVar21 = divpd(*param_3,_DAT_1499387d0);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(double *)param_3[1];
      auVar25 = divpd(auVar24,_DAT_1499387d0);
      auVar21 = roundpd(auVar21,auVar21,3);
      auVar25 = roundpd(auVar25,auVar25,3);
      dVar12 = (*(double *)*param_3 - auVar21._0_8_ * dVar3) * 0.008726646259971648;
      dVar13 = (*(double *)(*param_3 + 8) - auVar21._8_8_ * dVar4) * 0.008726646259971648;
      dVar3 = (*(double *)param_3[1] - auVar25._0_8_ * dVar3) * 0.008726646259971648;
      dVar4 = (0.0 - auVar25._8_8_ * dVar4) * 0.008726646259971648;
      dVar9 = sin(dVar12);
      dVar10 = sin(dVar13);
      dVar11 = sin(dVar3);
      sin(dVar4);
      dVar12 = cos(dVar12);
      dVar13 = cos(dVar13);
      dVar14 = cos(dVar3);
      cos(dVar4);
      dVar3 = dVar10 * dVar9 * dVar11 + dVar13 * dVar12 * dVar14;
      local_e8 = dVar9 * dVar10 * dVar14 - dVar12 * dVar13 * dVar11;
      dStack_e0 = -(dVar9 * dVar13 * dVar14) - dVar12 * dVar10 * dVar11;
      local_d8._8_4_ = SUB84(dVar3,0);
      local_d8._0_8_ = -(dVar13 * dVar9 * dVar11) + dVar10 * dVar12 * dVar14;
      local_d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      if (((pdVar1[4] != *(double *)*param_3) || (NAN(pdVar1[4]) || NAN(*(double *)*param_3))) ||
         ((pdVar1[5] != *(double *)(*param_3 + 8) ||
          (((NAN(pdVar1[5]) || NAN(*(double *)(*param_3 + 8)) ||
            (pdVar1[6] != *(double *)param_3[1])) || (NAN(pdVar1[6]) || NAN(*(double *)param_3[1])))
          )))) goto LAB_1407fda19;
      local_e8 = *pdVar1;
      dStack_e0 = pdVar1[1];
      local_d8 = *(undefined1 (*) [16])(pdVar1 + 2);
    }
    lVar7 = *param_1;
  }
  else {
    auVar21 = divpd(*param_3,_DAT_1499387d0);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(double *)param_3[1];
    auVar25 = divpd(auVar25,_DAT_1499387d0);
    auVar21 = roundpd(auVar21,auVar21,3);
    auVar25 = roundpd(auVar25,auVar25,3);
    dVar12 = (*(double *)*param_3 - auVar21._0_8_ * dVar3) * 0.008726646259971648;
    dVar13 = (*(double *)(*param_3 + 8) - auVar21._8_8_ * dVar4) * 0.008726646259971648;
    dVar3 = (*(double *)param_3[1] - auVar25._0_8_ * dVar3) * 0.008726646259971648;
    dVar4 = (0.0 - auVar25._8_8_ * dVar4) * 0.008726646259971648;
    dVar9 = sin(dVar12);
    dVar10 = sin(dVar13);
    dVar11 = sin(dVar3);
    sin(dVar4);
    dVar12 = cos(dVar12);
    dVar13 = cos(dVar13);
    dVar14 = cos(dVar3);
    cos(dVar4);
    dVar3 = dVar10 * dVar9 * dVar11 + dVar13 * dVar12 * dVar14;
    local_e8 = dVar9 * dVar10 * dVar14 - dVar12 * dVar13 * dVar11;
    dStack_e0 = -(dVar9 * dVar13 * dVar14) - dVar12 * dVar10 * dVar11;
    local_d8._8_4_ = SUB84(dVar3,0);
    local_d8._0_8_ = -(dVar13 * dVar9 * dVar11) + dVar10 * dVar12 * dVar14;
    local_d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    lVar7 = *param_1;
  }
  local_f8 = param_7;
  local_100 = param_6;
  local_108 = param_5;
  uVar5 = (**(code **)(lVar7 + 0x510))(param_1,param_2,&local_e8,param_4 & 0xffffffff);
  uVar8 = (ulonglong)uVar5;
LAB_1407fdb7a:
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fdeca FUN_1407fdeca body=69 status=ok
// SIG undefined FUN_1407fdeca(void)

undefined8 * FUN_1407fdeca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f4b720;
  FUN_1447a1747(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407fdf0f FUN_1407fdf0f body=249 status=ok
// SIG undefined FUN_1407fdf0f(void)

void FUN_1407fdf0f(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  int param_6)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  uint *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_74;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  FUN_1407fe00a();
  FUN_1448e935e(uVar1,&local_68,&DAT_14cb328f0,0);
  FUN_1407fe00a();
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uStack_60 = param_5;
  local_54 = param_6;
  local_68 = param_3;
  local_58 = param_4 - param_6;
  uVar1 = FUN_1407fe12a();
  local_98 = &local_74;
  local_70 = &DAT_100000001;
  local_74 = param_4 + 0x3fU >> 6;
  FUN_1407fe234(param_1,&local_88,uVar1,&local_68);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fe00a FUN_1407fe00a body=287 status=ok
// SIG undefined FUN_1407fe00a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1407fe00a(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb32998) {
    FUN_144b3d300(&DAT_14cb32998);
    if (DAT_14cb32998 == -1) {
      uVar1 = FUN_1407fe12a();
      FUN_14574a8ba();
      FUN_140db5666(&DAT_14cb328f0,0,&DAT_14cb32888,L"FNiagaraInitFreeIDBufferCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraInitFreeIDBuffer.usf",L"InitIDBufferCS",5,1,
                    FUN_14804e4fa,FUN_14804e4a0,&LAB_14804e49c,&LAB_14804e498,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb328f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa6e4);
      _Init_thread_footer(&DAT_14cb32998);
    }
  }
  return &DAT_14cb328f0;
}



// FUNCTION 1407fe12a FUN_1407fe12a body=265 status=ok
// SIG undefined FUN_1407fe12a(void)

undefined * FUN_1407fe12a(void)

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
              0x110) < DAT_14cb340a0) {
    FUN_144b3d300(&DAT_14cb340a0);
    if (DAT_14cb340a0 == -1) {
      FUN_14574aa04(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34020,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb800);
      _Init_thread_footer(&DAT_14cb340a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fe234 FUN_1407fe234 body=909 status=ok
// SIG undefined FUN_1407fe234(void)

void FUN_1407fe234(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  size_t _Size;
  ulonglong uVar16;
  void *_Dst;
  
  if (*param_2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar14 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar14,1);
    }
  }
  uVar10 = FUN_140029432(param_1,uVar9,0);
  param_1[0x37] = uVar9;
  puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 3;
  if ((undefined8 *)param_1[1] < puVar12) {
    FUN_140023dd8(param_1,0x20);
    puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 3;
  }
  *param_1 = (ulonglong)puVar12;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar11;
  param_1[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a37d340;
  puVar11[2] = uVar10;
  FUN_14480864a(param_1,uVar9,*param_2,param_3,param_4);
  uVar3 = param_5[2];
  uVar4 = *param_5;
  uVar5 = param_5[1];
  puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 4;
  if ((undefined8 *)param_1[1] < puVar12) {
    FUN_140023dd8(param_1,0x28);
    puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 4;
  }
  *param_1 = (ulonglong)puVar12;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar11;
  param_1[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar11 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar11 + 0x14) = uVar5;
  *(undefined4 *)(puVar11 + 3) = uVar3;
  if (*param_2 == 0) {
    lVar14 = 0;
  }
  else {
    lVar15 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar15 * 8);
    if (lVar14 == 0) {
      lVar14 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar15 = *param_2;
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar16 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar16 = uVar9;
    }
    iVar6 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar6 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar16 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar16 + 2 + lVar15);
          iVar7 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar7 + 1U) {
            FUN_1447477d8(puVar1,iVar7);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar7 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar7 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar6 * 4 != lVar15);
    }
    uVar9 = param_1[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar11 + 5;
        if ((undefined8 *)param_1[1] < puVar12) {
          FUN_140023dd8(param_1,0x30);
          puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar11 + 5;
        }
        *param_1 = (ulonglong)puVar12;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar11;
        param_1[6] = (ulonglong)(puVar11 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_1[1] < pvVar13) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar11[1] = 0;
        *puVar11 = &PTR_FUN_14a1fbc38;
        puVar11[2] = lVar14;
        puVar11[3] = _Dst;
        *(int *)(puVar11 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407fe5c2 FUN_1407fe5c2 body=1413 status=ok
// SIG undefined FUN_1407fe5c2(void)

void FUN_1407fe5c2(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                  byte param_6,undefined4 param_7,uint param_8,undefined8 param_9)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = param_4 * param_5;
  *(uint *)(param_1 + 3) = uVar7;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_48 = *(undefined8 *)((longlong)param_1 + 0x1c);
  local_40 = *(undefined8 *)((longlong)param_1 + 0x24);
  local_78 = param_9;
  local_98 = (ulonglong)uVar7;
  uStack_90 = CONCAT44(uStack_90._4_4_,param_8) | 0x4108;
  local_50 = param_3;
  if ((param_8 & 0x100000) == 0 && uVar7 == 0) {
    FUN_14570b4be(param_2,&local_80,param_8 | 0x4108,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_80;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,param_7);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = param_7;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_80;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,param_7);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = param_7;
  }
  lVar8 = local_a0;
  if (&local_a0 == param_1) {
LAB_1407fe79c:
    lVar8 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_a0 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar8;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar8 = *param_1;
  }
  else {
    lVar3 = *param_1;
    *param_1 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar3 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar3;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_1407fe79c;
    }
  }
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x28) & 0x10) == 0)) {
    local_98._0_2_ = CONCAT11(param_6,1);
    local_98._0_3_ = CONCAT12(1,(short)local_98);
  }
  else {
    local_98._0_3_ = 0x40001;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
  plVar6 = param_1 + 1;
  if (plVar6 == &local_a0) {
LAB_1407fe8dd:
    lVar8 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_a0 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar8;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar8 = *plVar6;
    *plVar6 = local_a0;
    local_a0 = 0;
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar8 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar8;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_1407fe8dd;
    }
  }
  if ((*param_1 == 0) || ((*(byte *)(*param_1 + 0x28) & 0x10) == 0)) {
    local_98._0_2_ = (ushort)param_6 << 8;
    local_98._0_3_ = CONCAT12(1,(short)local_98);
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  param_1 = param_1 + 2;
  if (param_1 != &local_a0) {
    lVar8 = *param_1;
    *param_1 = local_a0;
    local_a0 = 0;
    if (lVar8 == 0) goto LAB_1407fea6d;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar8 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar8;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar8 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_a0 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar8;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_1407fea6d:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407feb48 FUN_1407feb48 body=23 status=ok
// SIG undefined FUN_1407feb48(void)

undefined8 FUN_1407feb48(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1407feb7c FUN_1407feb7c body=107 status=ok
// SIG undefined FUN_1407feb7c(void)

void FUN_1407feb7c(longlong param_1,byte param_2,char param_3,char param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x2ec);
  if (((((bVar1 ^ param_2) & 1) == 0) && (((bVar1 & 2) == 0) != (bool)param_3)) &&
     (((bVar1 & 4) == 0) != (bool)param_4)) {
    return;
  }
  bVar1 = param_3 * '\x02' | param_2 | param_4 << 2 | bVar1 & 0xf8;
  *(byte *)(param_1 + 0x2ec) = bVar1;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FUN_1415e7100(*(longlong *)(param_1 + 0x5a8),bVar1);
  }
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1407fec00 FUN_1407fec00 body=185 status=ok
// SIG undefined FUN_1407fec00(void)

undefined8 * FUN_1407fec00(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b0be130;
  param_1[7] = DAT_14cb7e080;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  iVar1 = DAT_14c9a6310;
  _Src = DAT_14c9a6308;
  lVar3 = (longlong)DAT_14c9a6310;
  *(int *)(param_1 + 0xb) = DAT_14c9a6310;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    uVar2 = 0;
  }
  else {
    FUN_1401b309e(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,lVar3 << 3);
    uVar2 = *(undefined4 *)(param_1 + 0xb);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_1407fecba(param_1 + 0xc,uVar2,1);
  return param_1;
}



// FUNCTION 1407fecba FUN_1407fecba body=165 status=ok
// SIG undefined FUN_1407fecba(void)

void FUN_1407fecba(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1407fed60(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      *(undefined1 *)(puVar2 + 6) = 0;
      puVar2 = puVar2 + 7;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_1488708a2(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_1488708fe(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1407fed60 FUN_1407fed60 body=369 status=ok
// SIG undefined FUN_1407fed60(void)

void FUN_1407fed60(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1407fede5;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_1407fede5:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 1407feed2 FUN_1407feed2 body=115 status=ok
// SIG undefined FUN_1407feed2(void)

void FUN_1407feed2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14489624a(param_1,iVar1);
    }
    FUN_1407fef46((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146fa2938(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1407fef46 FUN_1407fef46 body=1 status=ok
// SIG undefined FUN_1407fef46(void)

void FUN_1407fef46(void)

{
  return;
}



// FUNCTION 1407fef5c FUN_1407fef5c body=80 status=ok
// SIG undefined FUN_1407fef5c(void)

void FUN_1407fef5c(longlong *param_1,char param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)((longlong)param_1 + 10);
  if (((uVar1 & 0x40) == 0) == (bool)param_2) {
    uVar2 = 0x40;
    if (param_2 == '\0') {
      if ((int)param_1[6] < param_3) {
        (**(code **)(*param_1 + 0x20))(param_1,param_3);
        *(int *)(param_1 + 6) = param_3;
        uVar1 = *(ushort *)((longlong)param_1 + 10);
      }
      uVar2 = 0;
    }
    *(ushort *)((longlong)param_1 + 10) = uVar2 | uVar1 & 0xffbf;
  }
  return;
}



// FUNCTION 1407fefac FUN_1407fefac body=82 status=ok
// SIG undefined FUN_1407fefac(void)

void FUN_1407fefac(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xa0) * 0x58;
    do {
      FUN_1407feffe(lVar1,*(undefined4 *)(param_1 + 0x30),param_2);
      lVar1 = lVar1 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1407feffe FUN_1407feffe body=256 status=ok
// SIG undefined FUN_1407feffe(void)

void FUN_1407feffe(longlong param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [12];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (param_2 <= *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x14c) = param_3;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x150);
    *puVar1 = *puVar1 | 0x7fffffff;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x154) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = param_3;
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x30);
    if ((*(byte *)(lVar3 + 8) & 3) == 0) {
      FUN_146e22618(lVar3,local_88,*(undefined8 *)(param_1 + 0x20));
    }
    else {
      FUN_1447d84d6(lVar3,local_88);
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    if ((*(byte *)(lVar3 + 8) & 3) == 0) {
      FUN_146e22618(lVar3,local_e8,*(undefined8 *)(param_1 + 0x18));
    }
    else {
      FUN_1447d84d6(lVar3,local_e8);
    }
    puVar4 = local_e8;
    puVar5 = (undefined8 *)(lVar2 + 0x170);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = local_88;
    puVar5 = (undefined8 *)(lVar2 + 0x1d0);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ff100 FUN_1407ff100 body=449 status=ok
// SIG undefined FUN_1407ff100(void)

void FUN_1407ff100(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar11 = 0;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 0x50);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar11;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar11) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar9 = puVar12[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar11 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 != iVar2) {
    uVar9 = 0xffffffff;
    iVar7 = iVar2;
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10 + (longlong)iVar3 * 0x20);
      if (*(int *)(param_1 + 0x30) <= *(int *)(lVar14 + 0x14c)) {
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x20 + 0x10);
        *(undefined4 *)(lVar14 + 0x14c) = param_2;
        puVar12 = (uint *)(*plVar8 + 0x150);
        *puVar12 = *puVar12 | 0x7fffffff;
        *(undefined4 *)(*plVar8 + 0x154) = 0xffffffff;
        iVar7 = *(int *)(param_1 + 0x68);
      }
      uVar9 = uVar9 & ~(uint)uVar13;
      puVar12 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x50);
      }
      iVar3 = (int)uVar11;
      lVar14 = (longlong)iVar3;
      uVar4 = puVar12[lVar14] & uVar9;
      if (uVar4 == 0) {
        iVar5 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar5 = iVar7 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar3 < iVar5) {
          lVar15 = 0;
          do {
            uVar4 = puVar12[lVar14 + lVar15 + 1];
            if (uVar4 != 0) {
              uVar11 = (ulonglong)(iVar3 + (int)lVar15 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1407ff248;
            }
            iVar10 = iVar10 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar6 - lVar14 != lVar15);
          uVar9 = 0xffffffff;
          lVar14 = (longlong)iVar6;
        }
        uVar11 = lVar14 + 1U & 0xffffffff;
        iVar3 = iVar7;
      }
      else {
LAB_1407ff248:
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar3 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar3) {
          iVar3 = iVar7;
        }
      }
    } while (iVar3 != iVar2);
  }
  return;
}



// FUNCTION 1407ff2c2 FUN_1407ff2c2 body=1544 status=ok
// SIG undefined FUN_1407ff2c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ff2c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_78 [42];
  byte local_4e;
  char local_4d;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pdVar9 = (double *)(param_1 + 0x10);
  local_4e = *(byte *)(param_1 + 0x348);
  (**(code **)(*param_2 + 0x178))(param_2,&local_4e,3);
  bVar5 = local_4e;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    switch(local_4e) {
    case 0:
      FUN_1407ff8cc(pdVar9);
      *(undefined1 *)(param_1 + 0x338) = 0xff;
      *(undefined1 *)(param_1 + 0x340) = 1;
      break;
    case 1:
      FUN_1407ff8cc(pdVar9);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x50) = 0;
      break;
    case 2:
      FUN_1407ff8cc(pdVar9);
      *(undefined8 *)(param_1 + 0x20) = DAT_14cb1c858;
      uVar10 = _DAT_14cb1c850;
      *pdVar9 = _DAT_14cb1c848;
      *(undefined8 *)(param_1 + 0x18) = uVar10;
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar4 = DAT_14cb1c868._4_4_;
      uVar3 = (undefined4)DAT_14cb1c868;
      uVar2 = DAT_14cb1c860._4_4_;
      *(undefined4 *)(param_1 + 0x28) = (undefined4)DAT_14cb1c860;
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      *(undefined8 *)(param_1 + 0x38) = DAT_14cb1c870;
      *(undefined1 *)(param_1 + 0x44) = 1;
      break;
    case 3:
      FUN_1407ff8cc(pdVar9);
      *pdVar9 = 0.0;
      break;
    case 4:
      FUN_1407ff8cc(pdVar9);
      *(undefined1 *)pdVar9 = 0;
      break;
    default:
      goto switchD_1407ff329_default;
    }
    *(byte *)(param_1 + 0x348) = bVar5;
  }
switchD_1407ff329_default:
  switch(local_4e) {
  case 0:
    FUN_1407ff919(param_2,pdVar9);
    break;
  case 1:
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x100);
        *(float *)pdVar9 = (float)(int)((int)local_4c - 0x80) * 2.8346457;
      }
    }
    else {
      dVar12 = (double)FUN_144719204(SUB84((double)*(float *)pdVar9,0));
      fVar11 = (float)((int)((float)(double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                                            (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0)
                                            ) * 0.35277778) + 0x80);
      local_4c = 0.0;
      if (0 < (int)fVar11) {
        local_4c = fVar11;
      }
      if (0xfe < (int)local_4c) {
        local_4c = 3.57331e-43;
      }
      (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x100);
    }
    local_4c = (float)CONCAT31(local_4c._1_3_,*(undefined1 *)(param_1 + 0x30));
    (**(code **)(*param_2 + 0x178))(param_2,&local_4c,1);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
LAB_1407ff789:
        FUN_1402301a5((undefined8 *)(param_1 + 0x18),param_2);
      }
    }
    else {
      if (local_4c._0_1_ == '\x01') {
        if (*(char *)(param_1 + 0x30) == '\0') {
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined1 *)(param_1 + 0x30) = 1;
        }
        goto LAB_1407ff789;
      }
      if (*(char *)(param_1 + 0x30) != '\0') {
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
    }
    puVar1 = (undefined8 *)(param_1 + 0x38);
    local_4d = *(char *)(param_1 + 0x50);
    (**(code **)(*param_2 + 0x178))(param_2,&local_4d,1);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x50) & 1) == 0) break;
    }
    else {
      if (local_4d != '\x01') {
        if (*(char *)(param_1 + 0x50) != '\0') {
          *(undefined1 *)(param_1 + 0x50) = 0;
        }
        break;
      }
      if (*(char *)(param_1 + 0x50) == '\0') {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
    }
    (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
    uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    if ((uVar7 < 0x17) || (iVar6 = (**(code **)(*param_2 + 0x48))(param_2), iVar6 == 0x1a)) {
      local_44 = (float)*(double *)(param_1 + 0x48);
      local_48 = (float)*(double *)(param_1 + 0x40);
      local_4c = (float)*(double *)(param_1 + 0x38);
      FUN_147e44d46(&local_4c,param_2);
      *(double *)(param_1 + 0x38) = (double)local_4c;
      *(double *)(param_1 + 0x40) = (double)local_48;
      *(double *)(param_1 + 0x48) = (double)local_44;
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      FUN_14016634f(1,puVar1,param_2);
    }
    else {
      FUN_1400ed28e(1,puVar1,param_2);
    }
    break;
  case 2:
    FUN_1402301a5(param_1 + 0x28,param_2);
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x400);
        *(double *)(param_1 + 0x18) = (double)(int)((int)local_4c - 0x200);
      }
    }
    else {
      dVar12 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 0x18));
      fVar11 = (float)(double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                              (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
      iVar6 = (int)ROUND(fVar11 + fVar11 + 0.5) >> 1;
      local_4c = 1.43353e-42;
      if (iVar6 < -0x1ff) {
        local_4c = 0.0;
      }
      fVar11 = (float)(iVar6 + 0x200);
      if ((uint)fVar11 < 0x400) {
        local_4c = fVar11;
      }
      (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x400);
    }
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x400);
        *pdVar9 = (double)(int)((int)local_4c - 0x200);
      }
    }
    else {
      dVar12 = (double)FUN_144719204(SUB84(*pdVar9,0));
      fVar11 = (float)(double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                              (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
      iVar6 = (int)ROUND(fVar11 + fVar11 + 0.5) >> 1;
      local_4c = 1.43353e-42;
      if (iVar6 < -0x1ff) {
        local_4c = 0.0;
      }
      fVar11 = (float)(iVar6 + 0x200);
      if ((uint)fVar11 < 0x400) {
        local_4c = fVar11;
      }
      (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x400);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x2000);
        *(float *)(param_1 + 0x40) = (float)(int)((int)local_4c - 0x1000) * 2.4420025;
      }
    }
    else {
      fVar11 = (float)((int)(*(float *)(param_1 + 0x40) * 0.4095) + 0x1000);
      local_4c = 0.0;
      if (0 < (int)fVar11) {
        local_4c = fVar11;
      }
      if (0x1ffe < (int)local_4c) {
        local_4c = 1.1478e-41;
      }
      (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x2000);
    }
    pdVar9 = (double *)(param_1 + 0x44);
    lVar8 = *param_2;
    uVar10 = 1;
    goto LAB_1407ff36b;
  case 3:
    (**(code **)(*param_2 + 0x120))(param_2,pdVar9);
    break;
  case 4:
    lVar8 = *param_2;
    uVar10 = 3;
LAB_1407ff36b:
    (**(code **)(lVar8 + 0x178))(param_2,pdVar9,uVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ff8cc FUN_1407ff8cc body=77 status=ok
// SIG undefined FUN_1407ff8cc(void)

void FUN_1407ff8cc(longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 0x338)) {
  case 0:
    *(undefined1 *)(param_1 + 0x338) = 0xff;
    FUN_1449493b2();
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x338) = 0xff;
    if (*(char *)(param_1 + 0x40) == '\x01') {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    if (*(char *)(param_1 + 0x20) == '\x01') {
      *(undefined1 *)(param_1 + 0x20) = 0;
      return;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    *(undefined1 *)(param_1 + 0x338) = 0xff;
  }
  return;
}



// FUNCTION 1407ff919 FUN_1407ff919 body=3476 status=ok
// SIG undefined FUN_1407ff919(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1407ff919(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 auStack_118 [47];
  byte local_e9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e9 = *(byte *)(param_2 + 0x65);
  (**(code **)(*param_1 + 0x178))(param_1,&local_e9,2);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    switch(local_e9) {
    case 0:
      FUN_1449493b2(param_2);
      *(undefined1 *)(param_2 + 0x65) = 0;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined8 *)((longlong)param_2 + 0xc) = 0;
      *(undefined8 *)((longlong)param_2 + 0x14) = 0;
      break;
    case 1:
      FUN_1449493b2(param_2);
      memset(param_2,0,0x260);
      *(undefined4 *)((longlong)param_2 + 0x1ec) = 4;
      *(undefined1 *)(param_2 + 0x65) = 1;
      break;
    case 2:
      FUN_1449493b2(param_2);
      memset(param_2,0,0x120);
      param_2[4] = DAT_14cb1d018;
      lVar12 = _DAT_14cb1d010;
      param_2[2] = _DAT_14cb1d008;
      param_2[3] = lVar12;
      param_2[7] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[5] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[6] = lVar12;
      lVar12 = _DAT_14cb1d010;
      param_2[8] = _DAT_14cb1d008;
      param_2[9] = lVar12;
      param_2[10] = DAT_14cb1d018;
      param_2[0xd] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[0xb] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[0xc] = lVar12;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
      param_2[0x13] = DAT_14cb1d018;
      lVar12 = _DAT_14cb1d010;
      param_2[0x11] = _DAT_14cb1d008;
      param_2[0x12] = lVar12;
      param_2[0x16] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[0x14] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[0x15] = lVar12;
      param_2[0x19] = DAT_14cb1d018;
      lVar12 = _DAT_14cb1d010;
      param_2[0x17] = _DAT_14cb1d008;
      param_2[0x18] = lVar12;
      param_2[0x1c] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[0x1a] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[0x1b] = lVar12;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      *(undefined4 *)(param_2 + 0x1f) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x20) = 0x3f800000;
      param_2[0x21] = -1;
      *(undefined4 *)(param_2 + 0x22) = 0xffffffff;
      *(undefined1 *)((longlong)param_2 + 0x11c) = 0;
      *(undefined8 *)((longlong)param_2 + 0x114) = 0;
      *(undefined1 *)(param_2 + 0x65) = 2;
      break;
    case 3:
      FUN_1449493b2(param_2);
      param_2[2] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      *param_2 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[1] = lVar12;
      param_2[5] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[3] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[4] = lVar12;
      param_2[8] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[6] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[7] = lVar12;
      param_2[0xb] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[9] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[10] = lVar12;
      lVar12 = DAT_14c8463c0;
      param_2[0xc] = DAT_14c8463b8;
      param_2[0xd] = lVar12;
      param_2[0xe] = DAT_14c8463c8;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[0xf] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[0x10] = lVar12;
      param_2[0x11] = DAT_14cb1d030;
      memset(param_2 + 0x17,0,0x270);
      param_2[0x14] = DAT_14cb1d030;
      lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      param_2[0x12] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      param_2[0x13] = lVar12;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      *(undefined4 *)(param_2 + 0x17) = 0xffffffff;
      param_2[0x18] = -1;
      *(undefined4 *)(param_2 + 0x19) = 0xffffffff;
      *(undefined1 *)((longlong)param_2 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
      param_2[0x1d] = DAT_14c8464f0;
      lVar12 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      param_2[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      param_2[0x1c] = lVar12;
      param_2[0x1e] = -0x407fffffffffffff;
      *(undefined1 *)((longlong)param_2 + 0xf9) = 0;
      *(undefined1 *)(param_2 + 0x26) = 0;
      *(undefined1 *)(param_2 + 0x2a) = 0;
      *(undefined1 *)(param_2 + 0x61) = 0;
      *(undefined1 *)(param_2 + 0x65) = 3;
    }
  }
  uVar10 = DAT_14cb1d030;
  uVar9 = DAT_14cb1d028._4_4_;
  uVar8 = (undefined4)DAT_14cb1d028;
  uVar7 = DAT_14cb1d020._4_4_;
  switch(local_e9) {
  case 0:
    FUN_140800a39(param_1,param_2);
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar4 = (ulonglong *)param_1[1];
        puVar1 = (undefined2 *)*puVar4 + 1;
        if ((undefined2 *)puVar4[1] < puVar1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_88,2);
          }
          else {
            thunk_FUN_1457251a8(param_1,&local_88);
          }
        }
        else {
          local_88 = CONCAT62(local_88._2_6_,*(undefined2 *)*puVar4);
          *puVar4 = (ulonglong)puVar1;
        }
        *(float *)(param_2 + 3) = (float)(ushort)local_88 * 1.5258789e-05 * 10.0 + 0.0;
      }
    }
    else {
      fVar15 = (*(float *)(param_2 + 3) / 10.0) * 65536.0;
      local_88 = CONCAT62(local_88._2_6_,(short)((uint)(int)ROUND(fVar15 + fVar15 + 0.5) >> 1));
      puVar4 = (ulonglong *)param_1[1];
      if (puVar4[1] < *puVar4 + 2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_88,2);
        }
        else {
          thunk_FUN_1457251a8(param_1,&local_88);
        }
      }
      else {
        *puVar4 = *puVar4 + 2;
      }
    }
    break;
  case 1:
    FUN_147e6c202(param_1,param_2);
    FUN_140800718(param_1,param_2 + 0x3e);
    FUN_147e69b67(param_1,param_2 + 0x49);
    break;
  case 2:
    puVar6 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x20,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x20) = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar6 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)((longlong)param_2 + 0x104),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0x104) = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_140801ee6(param_1,param_2 + 0x21);
    puVar6 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x23,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x23) = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar6 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)((longlong)param_2 + 0x114),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0x114) = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_140801f8e(param_1,param_2 + 2);
    FUN_140801f8e(param_1,param_2 + 0x11);
    piVar3 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar3 + 1) {
      local_88 = CONCAT44(local_88._4_4_,(uint)*(byte *)((longlong)param_2 + 0x11c));
      (**(code **)(*param_1 + 0x170))(param_1,&local_88,4);
      if (1 < (uint)local_88) {
        FUN_14572541c(param_1);
      }
      *(bool *)((longlong)param_2 + 0x11c) = (uint)local_88 != 0;
    }
    else {
      *(bool *)((longlong)param_2 + 0x11c) = *piVar3 != 0;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      if ((*(byte *)(param_1 + 5) & 1) == 0) break;
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      local_88 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      FUN_14075f7c0(param_1,&local_88);
      FUN_1447a97f4(&local_b8,&local_88);
      lVar12 = FUN_140a6b12c(&local_b8);
      *param_2 = lVar12;
      local_d8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      FUN_14075f7c0(param_1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb1d0d8) && (FUN_144b3d300(&DAT_14cb1d0d8), DAT_14cb1d0d8 == -1))
      {
        _DAT_14cb1d090 = 0;
        _DAT_14cb1d098 = 0;
        _DAT_14cb1d070 = 0;
        uRam000000014cb1d078 = 0;
        _DAT_14cb1d09c = 0xffffffff00000080;
        _DAT_14cb1d0a4 = 0;
        DAT_14cb1d0b0 = 0;
        _DAT_14cb1d0b8 = 0;
        DAT_14cb1d0c0 = 0;
        _DAT_14cb1d0c8 = 0;
        _DAT_14cb1d0d0 = 0;
        atexit(FUN_14382f0a9);
        _Init_thread_footer(&DAT_14cb1d0d8);
      }
      if ((DAT_14cb1d1f0 == 0) ||
         (plVar13 = (longlong *)FUN_144837462(DAT_14cb1d1f0,&local_e8), plVar13 == (longlong *)0x0))
      {
        lVar12 = 0;
      }
      else {
        lVar12 = (**(code **)(*plVar13 + 0x28))(plVar13,0,&DAT_14cb1d070);
      }
      param_2[1] = lVar12;
      lVar12 = local_d0;
    }
    else {
      if (*param_2 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_78 = (ulonglong)local_78._4_4_ << 0x20;
        uStack_70 = 0;
        uStack_68 = 0;
      }
      else {
        puVar6 = *(undefined4 **)(*param_2 + 8);
        puVar14 = &DAT_14c9485f0;
        if (puVar6 != (undefined4 *)0x0) {
          puVar14 = puVar6;
        }
        FUN_1447a97f4(&local_88,puVar14);
      }
      FUN_14075f7c0(param_1,&local_88);
      if (param_2[1] == 0) {
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = local_a8 & 0xffffffff00000000;
        local_a0 = 0;
        uStack_98 = 0;
      }
      else {
        puVar6 = *(undefined4 **)(param_2[1] + 8);
        puVar14 = &DAT_14c9485f0;
        if (puVar6 != (undefined4 *)0x0) {
          puVar14 = puVar6;
        }
        FUN_1447a97f4(&local_b8,puVar14);
      }
      FUN_14075f7c0(param_1,&local_b8);
      lVar12 = local_a0;
    }
    if (lVar12 != 0) {
      FUN_1400020a8();
    }
    if (uStack_70 != 0) {
      FUN_1400020a8();
    }
    break;
  case 3:
    local_78 = DAT_14cb1d030;
    local_88 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
    uStack_80 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
    uStack_60 = DAT_14cb1d030;
    uStack_70 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
    uStack_68 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
    if (((*(byte *)(param_1 + 5) & 4) != 0) && ((char)param_2[0x56] == '\x01')) {
      local_88 = param_2[0x2b];
      uStack_80 = param_2[0x2c];
      local_78 = param_2[0x2d];
      uStack_70 = param_2[0x2e];
      uStack_68 = param_2[0x2f];
      uStack_60 = param_2[0x30];
      local_a8 = DAT_14cb1d030;
      local_b8 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      uStack_b0 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      local_a0 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
      uStack_98 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
      *(undefined4 *)(param_2 + 0x2b) = (undefined4)DAT_14cb1d020;
      *(undefined4 *)((longlong)param_2 + 0x15c) = uVar7;
      *(undefined4 *)(param_2 + 0x2c) = uVar8;
      *(undefined4 *)((longlong)param_2 + 0x164) = uVar9;
      param_2[0x2d] = uVar10;
      param_2[0x2e] = local_a0;
      param_2[0x2f] = uStack_98;
      param_2[0x30] = uVar10;
      local_90 = local_a8;
    }
    FUN_140800f18(param_2,param_1);
    plVar13 = param_2 + 0x2b;
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      local_b8 = CONCAT71(local_b8._1_7_,(char)param_2[0x56]);
      (**(code **)(*param_1 + 0x178))(param_1,&local_b8,1);
      if ((char)local_b8 == '\x01') {
LAB_1407ffff6:
        FUN_140800f18(plVar13,param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x178))(param_1,&local_b8,1);
      if ((char)local_b8 != '\0') {
        if ((char)param_2[0x56] == '\0') {
          param_2[0x2d] = DAT_14cb1d030;
          lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
          *plVar13 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
          param_2[0x2c] = lVar12;
          param_2[0x30] = DAT_14cb1d030;
          lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
          param_2[0x2e] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
          param_2[0x2f] = lVar12;
          param_2[0x33] = DAT_14cb1d030;
          lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
          param_2[0x31] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
          param_2[0x32] = lVar12;
          param_2[0x36] = DAT_14cb1d030;
          lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
          param_2[0x34] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
          param_2[0x35] = lVar12;
          lVar12 = DAT_14c8463c0;
          param_2[0x37] = DAT_14c8463b8;
          param_2[0x38] = lVar12;
          param_2[0x39] = DAT_14c8463c8;
          lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
          param_2[0x3a] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
          param_2[0x3b] = lVar12;
          param_2[0x3c] = DAT_14cb1d030;
          memset(param_2 + 0x42,0,0xa0);
          param_2[0x3f] = DAT_14cb1d030;
          lVar12 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
          param_2[0x3d] = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
          param_2[0x3e] = lVar12;
          param_2[0x40] = 0;
          param_2[0x41] = 0;
          *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
          param_2[0x43] = -1;
          *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
          *(undefined1 *)((longlong)param_2 + 0x22c) = 0;
          *(undefined8 *)((longlong)param_2 + 0x224) = 0;
          param_2[0x48] = DAT_14c8464f0;
          uVar9 = DAT_14c8464e8._4_4_;
          uVar8 = (undefined4)DAT_14c8464e8;
          uVar7 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(param_2 + 0x46) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)param_2 + 0x234) = uVar7;
          *(undefined4 *)(param_2 + 0x47) = uVar8;
          *(undefined4 *)((longlong)param_2 + 0x23c) = uVar9;
          param_2[0x49] = -0x407fffffffffffff;
          *(undefined1 *)(param_2 + 0x56) = 1;
        }
        goto LAB_1407ffff6;
      }
      if ((char)param_2[0x56] != '\0') {
        if ((char)param_2[0x55] == '\x01') {
          *(undefined1 *)(param_2 + 0x55) = 0;
        }
        plVar5 = (longlong *)param_2[0x41];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        *(undefined1 *)(param_2 + 0x56) = 0;
      }
    }
    FUN_140800718(param_1,param_2 + 0x57);
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      local_b8 = CONCAT71(local_b8._1_7_,(char)param_2[100]);
      (**(code **)(*param_1 + 0x178))(param_1,&local_b8,1);
      if ((char)local_b8 == '\x01') {
LAB_1407ffda4:
        FUN_1408006ae(param_1,param_2 + 0x62);
      }
    }
    else {
      (**(code **)(*param_1 + 0x178))(param_1,&local_b8,1);
      if ((char)local_b8 != '\0') {
        if ((char)param_2[100] == '\0') {
          param_2[0x62] = 0;
          *(undefined4 *)(param_2 + 99) = 0;
          *(undefined1 *)(param_2 + 100) = 1;
        }
        goto LAB_1407ffda4;
      }
      if ((char)param_2[100] != '\0') {
        *(undefined1 *)(param_2 + 100) = 0;
      }
    }
    bVar11 = *(byte *)(param_1 + 5);
    if (((bVar11 & 4) != 0) && ((char)param_2[0x56] == '\x01')) {
      param_2[0x2f] = uStack_68;
      param_2[0x30] = uStack_60;
      param_2[0x2d] = local_78;
      param_2[0x2e] = uStack_70;
      *(uint *)plVar13 = (uint)local_88;
      *(undefined4 *)((longlong)param_2 + 0x15c) = local_88._4_4_;
      *(undefined4 *)(param_2 + 0x2c) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_2 + 0x164) = uStack_80._4_4_;
      bVar11 = *(byte *)(param_1 + 5);
    }
    if ((bVar11 & 1) != 0) {
      if (*(char *)((longlong)param_2 + 0xf9) == '\x01') {
        FUN_140801b3e(param_2,*(undefined4 *)((longlong)param_2 + 0xcc));
      }
      if ((char)param_2[0x56] == '\x01') {
        *(int *)(param_2 + 0x2f) = (int)param_2[10];
        *(undefined4 *)((longlong)param_2 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x54);
        *(int *)(param_2 + 0x30) = (int)param_2[0xb];
        *(undefined4 *)((longlong)param_2 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x5c);
        param_2[0x2d] = param_2[8];
        param_2[0x2e] = param_2[9];
        *(int *)plVar13 = (int)param_2[6];
        *(undefined4 *)((longlong)param_2 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x34);
        *(int *)(param_2 + 0x2c) = (int)param_2[7];
        *(undefined4 *)((longlong)param_2 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x3c);
        FUN_140801b3e(plVar13,*(undefined4 *)((longlong)param_2 + 0x224));
      }
    }
  }
  (**(code **)(*param_1 + 0x178))(param_1,param_2 + 0x66,1);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408006ae FUN_1408006ae body=106 status=ok
// SIG undefined FUN_1408006ae(void)

longlong * FUN_1408006ae(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0x138))();
  puVar2 = (undefined4 *)(param_2 + 8);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140800718 FUN_140800718 body=579 status=ok
// SIG undefined FUN_140800718(void)

void FUN_140800718(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_48 [35];
  char local_25;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_25 = *(char *)(param_2 + 10);
    (**(code **)(*param_1 + 0x178))(param_1,&local_25,1);
    if (local_25 != '\x01') goto LAB_1408008e5;
  }
  else {
    (**(code **)(*param_1 + 0x178))(param_1,&local_25,1);
    if (local_25 == '\0') {
      if (*(char *)(param_2 + 10) != '\0') {
        plVar3 = (longlong *)param_2[7];
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
        *(undefined1 *)(param_2 + 10) = 0;
      }
      goto LAB_1408008e5;
    }
    if (*(char *)(param_2 + 10) != '\0') {
      FUN_14080095c(param_1,param_2);
      FUN_14382f1f0(param_1,param_2 + 9);
      FUN_14382f1f0(param_1,(longlong)param_2 + 0x4c);
      goto LAB_1408008e5;
    }
    param_2[2] = DAT_14cb1d030;
    uVar4 = DAT_14cb1d028;
    *param_2 = DAT_14cb1d020;
    param_2[1] = uVar4;
    uVar4 = DAT_14cb1c868;
    param_2[3] = DAT_14cb1c860;
    param_2[4] = uVar4;
    param_2[5] = DAT_14cb1c870;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 8) = 0xffffffff;
    param_2[9] = 0;
    *(undefined1 *)(param_2 + 10) = 1;
  }
  FUN_14080095c(param_1,param_2);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0x180))(param_1,&local_24,0x2000);
      *(float *)(param_2 + 9) = (float)(local_24 + -0x1000) * 2.4420025;
    }
  }
  else {
    iVar5 = (int)(*(float *)(param_2 + 9) * 0.4095) + 0x1000;
    local_24 = 0;
    if (0 < iVar5) {
      local_24 = iVar5;
    }
    if (0x1ffe < local_24) {
      local_24 = 0x1fff;
    }
    (**(code **)(*param_1 + 0x180))(param_1,&local_24,0x2000);
  }
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0x180))(param_1,&local_24,0x2000);
      *(float *)((longlong)param_2 + 0x4c) = (float)(local_24 + -0x1000) * 2.4420025;
    }
  }
  else {
    iVar5 = (int)(*(float *)((longlong)param_2 + 0x4c) * 0.4095) + 0x1000;
    local_24 = 0;
    if (0 < iVar5) {
      local_24 = iVar5;
    }
    if (0x1ffe < local_24) {
      local_24 = 0x1fff;
    }
    (**(code **)(*param_1 + 0x180))(param_1,&local_24,0x2000);
  }
LAB_1408008e5:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14080095c FUN_14080095c body=220 status=ok
// SIG undefined FUN_14080095c(void)

longlong * FUN_14080095c(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [38];
  char local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_1408009fa;
    local_22 = '\0';
    (**(code **)(*param_1 + 0x178))(param_1,&local_22,1);
    FUN_1402301a5(param_2,param_1);
    if (local_22 != '\x01') {
      *(undefined8 *)(param_2 + 0x28) = DAT_14cb1c870;
      uVar3 = DAT_14cb1c868._4_4_;
      uVar2 = (undefined4)DAT_14cb1c868;
      uVar1 = DAT_14cb1c860._4_4_;
      *(undefined4 *)(param_2 + 0x18) = (undefined4)DAT_14cb1c860;
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      goto LAB_1408009fa;
    }
  }
  else {
    local_21 = *(longlong *)(param_2 + 0x30) != 0;
    (**(code **)(*param_1 + 0x178))(param_1,&local_21,1);
    FUN_1402301a5(param_2,param_1);
    if (local_21 != '\x01') goto LAB_1408009fa;
  }
  FUN_140802315(param_1,param_2 + 0x30);
  FUN_1402301a5(param_2 + 0x18,param_1);
LAB_1408009fa:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140800a39 FUN_140800a39 body=1246 status=ok
// SIG undefined FUN_140800a39(void)

void FUN_140800a39(longlong *param_1,double *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_98 [36];
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    dVar8 = *param_2;
    dVar7 = param_2[1];
    dVar9 = 0.0;
    if ((((dVar8 != 0.0) || (NAN(dVar8))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
      dVar9 = atan2(dVar7,dVar8);
      dVar9 = dVar9 * 57.29577951308232;
      dVar8 = *param_2;
      dVar7 = param_2[1];
    }
    dVar10 = SQRT(dVar8 * dVar8 + dVar7 * dVar7);
    dVar7 = param_2[2];
    dVar8 = 0.0;
    if (((dVar7 != 0.0) || (NAN(dVar7))) || ((dVar10 != 0.0 || (NAN(dVar10))))) {
      dVar8 = atan2(dVar7,dVar10);
      dVar8 = dVar8 * 57.29577951308232;
    }
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        lVar4 = *param_1;
        goto LAB_140800c3c;
      }
    }
    else {
      dVar7 = (double)FUN_144719204(dVar9);
      fVar6 = (float)(double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      iVar5 = (int)ROUND(fVar6 + fVar6 + 0.5) >> 1;
      local_74 = 0x3ff;
      if (iVar5 < -0x1ff) {
        local_74 = 0;
      }
      uVar3 = iVar5 + 0x200;
      if (uVar3 < 0x400) {
        local_74 = uVar3;
      }
      lVar4 = *param_1;
LAB_140800c3c:
      (**(code **)(lVar4 + 0x180))(param_1,&local_74,0x400);
    }
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        lVar4 = *param_1;
        goto LAB_140800cd5;
      }
    }
    else {
      dVar7 = (double)FUN_144719204(dVar8);
      fVar6 = (float)(double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      iVar5 = (int)ROUND(fVar6 + fVar6 + 0.5) >> 1;
      local_74 = 0x3ff;
      if (iVar5 < -0x1ff) {
        local_74 = 0;
      }
      uVar3 = iVar5 + 0x200;
      if (uVar3 < 0x400) {
        local_74 = uVar3;
      }
      lVar4 = *param_1;
LAB_140800cd5:
      (**(code **)(lVar4 + 0x180))(param_1,&local_74,0x400);
    }
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_140800ee2;
      lVar4 = *param_1;
    }
    else {
      dVar7 = (double)FUN_144719204(0,0x4076800000000000);
      fVar6 = (float)(double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      iVar5 = (int)ROUND(fVar6 + fVar6 + 0.5) >> 1;
      local_74 = 0x3ff;
      if (iVar5 < -0x1ff) {
        local_74 = 0;
      }
      uVar3 = iVar5 + 0x200;
      if (uVar3 < 0x400) {
        local_74 = uVar3;
      }
      lVar4 = *param_1;
    }
    (**(code **)(lVar4 + 0x180))(param_1,&local_74,0x400);
    goto LAB_140800ee2;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_140800ee2;
  (**(code **)(*param_1 + 0x180))(param_1,&local_74,0x400);
  iVar5 = local_74 - 0x200;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_140800b2f;
    (**(code **)(*param_1 + 0x180))(param_1,&local_74,0x400);
    dVar7 = (double)(int)(local_74 - 0x200);
  }
  else {
    dVar7 = (double)FUN_144719204();
    uVar1 = (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0);
    unaff_XMM6_Da = (undefined4)uVar1;
    unaff_XMM6_Db = (undefined4)(uVar1 >> 0x20);
    fVar6 = (float)(double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 | uVar1);
    iVar2 = (int)ROUND(fVar6 + fVar6 + 0.5) >> 1;
    local_74 = 0x3ff;
    if (iVar2 < -0x1ff) {
      local_74 = 0;
    }
    uVar3 = iVar2 + 0x200;
    if (uVar3 < 0x400) {
      local_74 = uVar3;
    }
    (**(code **)(*param_1 + 0x180))(param_1,&local_74,0x400);
LAB_140800b2f:
    dVar7 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  }
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      lVar4 = *param_1;
      goto LAB_140800e48;
    }
  }
  else {
    dVar8 = (double)FUN_144719204();
    fVar6 = (float)(double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                           (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
    iVar2 = (int)ROUND(fVar6 + fVar6 + 0.5) >> 1;
    local_74 = 0x3ff;
    if (iVar2 < -0x1ff) {
      local_74 = 0;
    }
    uVar3 = iVar2 + 0x200;
    if (uVar3 < 0x400) {
      local_74 = uVar3;
    }
    lVar4 = *param_1;
LAB_140800e48:
    (**(code **)(lVar4 + 0x180))(param_1,&local_74,0x400);
  }
  dVar7 = (double)FUN_144719204(dVar7,0x4076800000000000);
  dVar8 = (double)FUN_144719204((double)iVar5,0x4076800000000000);
  dVar9 = sin(dVar7 * 0.017453292519943295);
  dVar7 = cos(dVar7 * 0.017453292519943295);
  dVar10 = sin(dVar8 * 0.017453292519943295);
  dVar8 = cos(dVar8 * 0.017453292519943295);
  *param_2 = dVar8 * dVar7;
  param_2[1] = dVar10 * dVar7;
  param_2[2] = dVar9;
LAB_140800ee2:
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140800f18 FUN_140800f18 body=3103 status=ok
// SIG undefined FUN_140800f18(void)

void FUN_140800f18(double *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double *pdVar13;
  longlong lVar14;
  double *pdVar15;
  uint uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_228 [32];
  byte local_208 [8];
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  char local_1dd [5];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  uint local_1a8;
  char local_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined5 uStack_1a1;
  undefined3 uStack_19c;
  undefined5 uStack_199;
  undefined3 uStack_194;
  double dStack_191;
  undefined8 local_188;
  undefined1 local_180;
  double local_178 [4];
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  
  dVar5 = DAT_14cb1d030;
  dVar4 = DAT_14cb1d028;
  dVar19 = DAT_14cb1d020;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_178[0] = DAT_14cb1d020;
    local_178[1] = DAT_14cb1d028;
    local_178[2] = DAT_14cb1d030;
    local_178[3] = DAT_14cb1d020;
    dStack_158 = DAT_14cb1d028;
    local_150 = DAT_14cb1d030;
    local_148 = DAT_14cb1d020;
    dStack_140 = DAT_14cb1d028;
    local_138 = DAT_14cb1d030;
    local_120 = DAT_14cb1d030;
    local_130 = DAT_14cb1d020;
    dStack_128 = DAT_14cb1d028;
    local_108 = DAT_14c8463c8;
    local_118 = DAT_14c8463b8;
    dStack_110 = DAT_14c8463c0;
    local_f0 = DAT_14cb1d030;
    local_100 = DAT_14cb1d020;
    dStack_f8 = DAT_14cb1d028;
    uStack_1a2 = 0;
    local_1a4 = '\0';
    uStack_1a3 = 0;
    uStack_d8 = DAT_14cb1d030;
    dStack_e8 = DAT_14cb1d020;
    uStack_e0 = DAT_14cb1d028;
    local_180 = 0;
    local_188 = 0;
    dStack_191 = DAT_14c8464f0;
    uStack_1a1 = SUB85(DAT_14c8464e0,0);
    uStack_19c = (undefined3)((ulonglong)DAT_14c8464e0 >> 0x28);
    uStack_199 = SUB85(DAT_14c8464e8,0);
    uStack_194 = (undefined3)((ulonglong)DAT_14c8464e8 >> 0x28);
    local_208[0] = 0;
    local_1a8 = local_1a8 & 0xffffff00;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0.0;
    dStack_1c0 = 0.0;
    local_1d8 = 0.0;
    dStack_1d0 = 0.0;
    pdVar13 = local_178;
    pdVar15 = param_1;
    for (lVar14 = 0xf; lVar14 != 0; lVar14 = lVar14 + -1) {
      *pdVar15 = *pdVar13;
      pdVar13 = pdVar13 + 1;
      pdVar15 = pdVar15 + 1;
    }
    uStack_e0._0_4_ = SUB84(dVar4,0);
    uStack_e0._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
    uStack_d8._0_4_ = SUB84(dVar5,0);
    uStack_d8._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
    *(undefined4 *)(param_1 + 0x13) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_e0._4_4_;
    *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_d8;
    *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_d8._4_4_;
    param_1[0x11] = dVar5;
    param_1[0x12] = dVar19;
    param_1[0xf] = dVar19;
    param_1[0x10] = dVar4;
    param_1[0x15] = 0.0;
    plVar3 = (longlong *)param_1[0x16];
    uStack_e0 = dVar4;
    uStack_d8 = dVar5;
    if (plVar3 != (longlong *)0x0) {
      param_1[0x16] = 0.0;
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
    *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
    param_1[0x18] = -NAN;
    *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0xcc) = local_188;
    *(undefined1 *)((longlong)param_1 + 0xd4) = local_180;
    *(ulonglong *)((longlong)param_1 + 0xd5) =
         CONCAT53(uStack_1a1,CONCAT12(uStack_1a2,CONCAT11(uStack_1a3,local_1a4)));
    *(ulonglong *)((longlong)param_1 + 0xdd) = CONCAT53(uStack_199,uStack_19c);
    param_1[0x1c] = (double)CONCAT35(uStack_194,uStack_199);
    param_1[0x1d] = dStack_191;
    param_1[0x1e] = -0.007812500000000002;
    *(undefined2 *)(param_1 + 0x1f) = 0;
    *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
    param_1[0x20] = local_1d8;
    param_1[0x21] = dStack_1d0;
    param_1[0x22] = local_1c8;
    param_1[0x23] = dStack_1c0;
    *(undefined4 *)(param_1 + 0x24) = (undefined4)local_1b8;
    *(undefined4 *)((longlong)param_1 + 0x124) = local_1b8._4_4_;
    *(undefined4 *)(param_1 + 0x25) = (undefined4)uStack_1b0;
    *(undefined4 *)((longlong)param_1 + 300) = uStack_1b0._4_4_;
    *(uint *)(param_1 + 0x26) = local_1a8;
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    if ((local_208[0] & 1) == 0) {
      pdVar13 = param_1 + 0x2a;
      if (*(char *)pdVar13 != '\x01') goto LAB_1408011a0;
    }
    else {
      param_1[0x29] = local_1e8;
      param_1[0x27] = local_1f8;
      param_1[0x28] = dStack_1f0;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      pdVar13 = (double *)local_208;
    }
    *(undefined1 *)pdVar13 = 0;
  }
LAB_1408011a0:
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 0x1a,3);
  (**(code **)(*param_2 + 0x178))(param_2,(longlong)param_1 + 0xf9,1);
  if (*(char *)((longlong)param_1 + 0xf9) == '\0') {
    FUN_1402301a5(param_1 + 3,param_2);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      param_1[2] = param_1[5];
      *param_1 = param_1[3];
      param_1[1] = param_1[4];
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_228);
    }
    goto LAB_14080156a;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    dVar19 = *param_1;
    local_1dd[0] = false;
    if ((-DAT_14cb1d020 < dVar19) && (local_1dd[0] = false, dVar19 < DAT_14cb1d020)) {
      local_1dd[0] = false;
      if ((-DAT_14cb1d028 < param_1[1]) && (param_1[1] < DAT_14cb1d028)) {
        local_1dd[0] = false;
        if ((-DAT_14cb1d030 < param_1[2]) && (param_1[2] < DAT_14cb1d030)) {
          iVar10 = _finite(dVar19);
          if ((iVar10 == 0) || (iVar10 = _finite(param_1[1]), iVar10 == 0)) goto LAB_1408012d8;
          iVar10 = _finite(param_1[2]);
          local_1dd[0] = iVar10 != 0;
        }
      }
    }
  }
  else {
LAB_1408012d8:
    local_1dd[0] = false;
  }
  (**(code **)(*param_2 + 0x178))(param_2,local_1dd,1);
  if (local_1dd[0] == '\x01') {
    FUN_1402301a5(param_1,param_2);
  }
  FUN_1402301a5(param_1 + 9,param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_1a4 = 1e-08 < ABS(param_1[0xe] + -1.0);
  }
  else {
    local_1a4 = false;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_1a4,1);
  if (local_1a4 == '\x01') {
    FUN_140800a39(param_2,param_1 + 0xc);
  }
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 0x1e,2);
  (**(code **)(*param_2 + 0x178))(param_2,(longlong)param_1 + 0xfa,1);
  bVar9 = *(byte *)((longlong)param_1 + 0xfa);
  if (bVar9 == 1) {
    FUN_140800a39(param_2,param_1 + 0x1b);
    bVar9 = *(byte *)((longlong)param_1 + 0xfa);
  }
  if (((bVar9 & 1) == 0) && (local_1dd[0] != '\0')) {
    dVar4 = param_1[10] - param_1[1];
    dVar5 = param_1[9] - *param_1;
    dVar19 = dVar5 * dVar5 + dVar4 * dVar4;
    if ((dVar19 != 1.0) || (NAN(dVar19))) {
      if (dVar19 < 9.99999993922529e-09) {
        uVar26 = SUB84(DAT_14c8464f0,0);
        dVar4 = DAT_14c8464e8;
        dVar5 = DAT_14c8464e0;
        dVar19 = (double)((ulonglong)DAT_14c8464f0 & 0xffffffff00000000);
      }
      else {
        uVar26 = 0;
        dVar4 = dVar4 * (1.0 / SQRT(dVar19));
        dVar5 = dVar5 * (1.0 / SQRT(dVar19));
        dVar19 = 0.0;
      }
    }
    else {
      dVar20 = param_1[0xb] - param_1[2];
      uVar26 = 0;
      dVar19 = 0.0;
      if ((dVar20 == 0.0) && (dVar19 = 0.0, !NAN(dVar20))) {
        uVar26 = SUB84(dVar20,0);
        dVar19 = dVar20;
      }
    }
    uVar27 = (undefined4)((ulonglong)dVar19 >> 0x20);
    bVar9 = *(byte *)(param_2 + 5);
    if ((bVar9 & 4) == 0) {
      if ((bVar9 & 1) == 0) {
        dVar19 = 0.0;
      }
      else {
        (**(code **)(*param_2 + 0x180))(param_2,local_178,0x400);
        dVar19 = (double)(local_178[0]._0_4_ + -0x200) * 0.017453292519943295;
        bVar9 = *(byte *)(param_2 + 5);
      }
      if ((bVar9 & 4) == 0) {
        if ((bVar9 & 1) == 0) goto LAB_1408014ab;
        (**(code **)(*param_2 + 0x180))(param_2,local_178,0x2000);
        local_200 = (double)((float)(local_178[0]._0_4_ + -0x1000) * 2.4420025);
      }
      else {
        local_178[0] = (double)CONCAT44(local_178[0]._4_4_,0x1000);
        (**(code **)(*param_2 + 0x180))(param_2,local_178,0x2000);
LAB_1408014ab:
        local_200 = 0.0;
      }
      dVar20 = sin(dVar19);
      dVar21 = cos(dVar19);
      dVar8 = dVar20 * DAT_14c8463b8;
      dVar24 = dVar20 * DAT_14c8463c0;
      dVar19 = 1.0 - dVar21;
      dVar22 = DAT_14c8463b8 * DAT_14c8463c8 * dVar19;
      dVar18 = DAT_14c8463c0 * DAT_14c8463c8 * dVar19;
      dVar6 = DAT_14c8463c0 * DAT_14c8463c0;
      dVar20 = dVar20 * DAT_14c8463c8;
      dVar7 = DAT_14c8463c8 * DAT_14c8463c8;
      dVar23 = DAT_14c8463b8 * DAT_14c8463c0 * dVar19;
      param_1[0xf] = ((dVar22 + dVar24) * (double)CONCAT44(uVar27,uVar26) +
                     (dVar19 * DAT_14c8463b8 * DAT_14c8463b8 + dVar21) * dVar5 +
                     (dVar23 - dVar20) * dVar4) * local_200 + *param_1;
      param_1[0x10] =
           ((dVar18 - dVar8) * (double)CONCAT44(uVar27,uVar26) +
           (dVar23 + dVar20) * dVar5 + (dVar6 * dVar19 + dVar21) * dVar4) * local_200 + param_1[1];
      param_1[0x11] =
           ((dVar7 * dVar19 + dVar21) * (double)CONCAT44(uVar27,uVar26) +
           (dVar22 - dVar24) * dVar5 + (dVar18 + dVar8) * dVar4) * local_200 + param_1[2];
      dVar19 = DAT_14cb1c868;
      param_1[0x12] = DAT_14cb1c860;
      param_1[0x13] = dVar19;
      param_1[0x14] = DAT_14cb1c870;
      param_1[0x15] = 0.0;
      plVar3 = (longlong *)param_1[0x16];
      if (plVar3 != (longlong *)0x0) {
        param_1[0x16] = 0.0;
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)();
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
    }
    else {
      dVar20 = param_1[0x10] - param_1[1];
      dVar19 = param_1[0xf] - *param_1;
      fVar25 = (float)SQRT(dVar19 * dVar19 + dVar20 * dVar20);
      dVar6 = DAT_14c8464f0;
      dVar7 = DAT_14c8464e8;
      dVar18 = DAT_14c8464e0;
      if (1e-08 < fVar25) {
        dVar18 = (double)(1.0 / fVar25);
        dVar6 = dVar18 * 0.0;
        dVar7 = dVar20 * dVar18;
        dVar18 = dVar19 * dVar18;
      }
      dVar20 = (double)CONCAT44(uVar27,uVar26) * dVar6 + dVar5 * dVar18 + dVar4 * dVar7;
      dVar19 = dVar20;
      if (1.0 <= dVar20) {
        dVar19 = 1.0;
      }
      dVar19 = acos((double)(-(ulonglong)(dVar20 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar20 < -1.0) & (ulonglong)dVar19));
      if ((*(byte *)(param_2 + 5) & 4) == 0) {
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          lVar14 = *param_2;
          goto LAB_1408017b3;
        }
      }
      else {
        fVar17 = (float)dVar19 * 57.295776;
        if ((dVar5 * dVar7 - dVar18 * dVar4) * DAT_14c8463c8 +
            (dVar4 * dVar6 - dVar7 * (double)CONCAT44(uVar27,uVar26)) * DAT_14c8463b8 +
            ((double)CONCAT44(uVar27,uVar26) * dVar18 - dVar6 * dVar5) * DAT_14c8463c0 < 0.0) {
          fVar17 = -fVar17;
        }
        dVar19 = (double)FUN_144719204((double)fVar17,0x4076800000000000);
        fVar17 = (float)(double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar19 |
                                (ulonglong)(dVar19 + 360.0) & -(ulonglong)(dVar19 < 0.0));
        iVar10 = (int)ROUND(fVar17 + fVar17 + 0.5) >> 1;
        uVar16 = 0x3ff;
        if (iVar10 < -0x1ff) {
          uVar16 = 0;
        }
        uVar12 = iVar10 + 0x200;
        if (uVar12 < 0x400) {
          uVar16 = uVar12;
        }
        local_178[0] = (double)CONCAT44(local_178[0]._4_4_,uVar16);
        lVar14 = *param_2;
LAB_1408017b3:
        (**(code **)(lVar14 + 0x180))(param_2,local_178,0x400);
      }
      if ((*(byte *)(param_2 + 5) & 4) == 0) {
        if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_1408014bf;
        lVar14 = *param_2;
      }
      else {
        iVar11 = (int)(fVar25 * 0.4095) + 0x1000;
        iVar10 = 0;
        if (0 < iVar11) {
          iVar10 = iVar11;
        }
        if (0x1ffe < iVar10) {
          iVar10 = 0x1fff;
        }
        local_178[0] = (double)CONCAT44(local_178[0]._4_4_,iVar10);
        lVar14 = *param_2;
      }
      (**(code **)(lVar14 + 0x180))(param_2,local_178,0x2000);
    }
  }
  else {
    FUN_14080095c(param_2,param_1 + 0xf);
  }
LAB_1408014bf:
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      (**(code **)(*param_2 + 0x180))(param_2,local_178,0x2000);
      *(float *)((longlong)param_1 + 0xcc) = (float)(local_178[0]._0_4_ + -0x1000) * 2.4420025;
    }
  }
  else {
    iVar11 = (int)(*(float *)((longlong)param_1 + 0xcc) * 0.4095) + 0x1000;
    iVar10 = 0;
    if (0 < iVar11) {
      iVar10 = iVar11;
    }
    if (0x1ffe < iVar10) {
      iVar10 = 0x1fff;
    }
    local_178[0] = (double)CONCAT44(local_178[0]._4_4_,iVar10);
    (**(code **)(*param_2 + 0x180))(param_2,local_178,0x2000);
  }
  (**(code **)(*param_2 + 0x178))(param_2,(longlong)param_1 + 0xd4,1);
LAB_14080156a:
  if ((local_d0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140801b3e FUN_140801b3e body=935 status=ok
// SIG undefined FUN_140801b3e(void)

void FUN_140801b3e(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar4 = *(int *)(param_1 + 0x1e);
  puVar1 = param_1 + 0xf;
  *(undefined4 *)((longlong)param_1 + 0xcc) = param_2;
  if (*(char *)((longlong)param_1 + 0xfa) == '\x01') {
    local_f8 = param_1[2];
    local_108 = *param_1;
    uStack_100 = param_1[1];
    local_f0 = DAT_14cb1c860;
    uStack_e8 = DAT_14cb1c868;
    local_e0 = DAT_14cb1c870;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    local_c8 = 0xffffffff;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_ac = 0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_118 = param_1 + 0xc;
    FUN_140437443(&local_90,iVar4,&local_108,puVar1);
    plVar7 = plStack_d0;
    *(undefined4 *)(param_1 + 4) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_6c;
    *(undefined4 *)(param_1 + 5) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_64;
    *(undefined4 *)(param_1 + 2) = local_80;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_7c;
    *(undefined4 *)(param_1 + 3) = uStack_78;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_74;
    *(undefined4 *)param_1 = local_90;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_8c;
    *(undefined4 *)(param_1 + 1) = uStack_88;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_84;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    local_f8 = param_1[0xb];
    local_108 = param_1[9];
    uStack_100 = param_1[10];
    local_f0 = DAT_14cb1c860;
    uStack_e8 = DAT_14cb1c868;
    local_e0 = DAT_14cb1c870;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    local_c8 = 0xffffffff;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_ac = 0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_118 = param_1 + 0xc;
    FUN_140437443(&local_90,iVar4 != 1,&local_108,puVar1);
    plVar7 = plStack_d0;
    *(undefined4 *)(param_1 + 10) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x54) = uStack_6c;
    *(undefined4 *)(param_1 + 0xb) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_64;
    *(undefined4 *)(param_1 + 8) = local_80;
    *(undefined4 *)((longlong)param_1 + 0x44) = uStack_7c;
    *(undefined4 *)(param_1 + 9) = uStack_78;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_74;
    *(undefined4 *)(param_1 + 6) = local_90;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_8c;
    *(undefined4 *)(param_1 + 7) = uStack_88;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_84;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    local_f8 = param_1[2];
    local_108 = *param_1;
    uStack_100 = param_1[1];
    local_f0 = DAT_14cb1c860;
    uStack_e8 = DAT_14cb1c868;
    local_e0 = DAT_14cb1c870;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    local_c8 = 0xffffffff;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_ac = 0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    FUN_140437364(&local_90,iVar4,&local_108,puVar1);
    *(undefined4 *)(param_1 + 4) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_6c;
    *(undefined4 *)(param_1 + 5) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_64;
    *(undefined4 *)(param_1 + 2) = local_80;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_7c;
    *(undefined4 *)(param_1 + 3) = uStack_78;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_74;
    *param_1 = CONCAT44(uStack_8c,local_90);
    param_1[1] = CONCAT44(uStack_84,uStack_88);
    local_f8 = param_1[0xb];
    local_108 = param_1[9];
    uStack_100 = param_1[10];
    local_f0 = DAT_14cb1c860;
    uStack_e8 = DAT_14cb1c868;
    local_e0 = DAT_14cb1c870;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    local_c8 = 0xffffffff;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_ac = 0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    FUN_140437364(&local_90,iVar4 != 1,&local_108,puVar1);
    param_1[10] = CONCAT44(uStack_6c,local_70);
    param_1[0xb] = CONCAT44(uStack_64,uStack_68);
    param_1[8] = CONCAT44(uStack_7c,local_80);
    param_1[9] = CONCAT44(uStack_74,uStack_78);
    param_1[6] = CONCAT44(uStack_8c,local_90);
    param_1[7] = CONCAT44(uStack_84,uStack_88);
  }
  local_f8 = param_1[8];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  param_1[6] = param_1[9];
  param_1[7] = param_1[10];
  param_1[8] = param_1[0xb];
  local_108._0_4_ = (undefined4)uVar5;
  local_108._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_100._0_4_ = (undefined4)uVar6;
  uStack_100._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)(param_1 + 9) = (undefined4)local_108;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_108._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_100._4_4_;
  param_1[0xb] = local_f8;
  local_108 = uVar5;
  uStack_100 = uVar6;
  FUN_1403026fa(param_1 + 0x20,param_1);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140801ee6 FUN_140801ee6 body=168 status=ok
// SIG undefined FUN_140801ee6(void)

longlong * FUN_140801ee6(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140801f8e FUN_140801f8e body=902 status=ok
// SIG undefined FUN_140801f8e(void)

longlong * FUN_140801f8e(longlong *param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402301a5(param_2 + 3,param_1);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
      param_2[1] = (double)(int)(local_34 - 0x200);
    }
  }
  else {
    dVar4 = (double)FUN_144719204(param_2[1]);
    fVar3 = (float)(double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                           (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    iVar1 = (int)ROUND(fVar3 + fVar3 + 0.5) >> 1;
    local_34 = 0x3ff;
    if (iVar1 < -0x1ff) {
      local_34 = 0;
    }
    uVar2 = iVar1 + 0x200;
    if (uVar2 < 0x400) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
  }
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
      *param_2 = (double)(int)(local_34 - 0x200);
    }
  }
  else {
    dVar4 = (double)FUN_144719204(*param_2);
    fVar3 = (float)(double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                           (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    iVar1 = (int)ROUND(fVar3 + fVar3 + 0.5) >> 1;
    local_34 = 0x3ff;
    if (iVar1 < -0x1ff) {
      local_34 = 0;
    }
    uVar2 = iVar1 + 0x200;
    if (uVar2 < 0x400) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
  }
  param_2[2] = 0.0;
  FUN_1402301a5(param_2 + 9,param_1);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
      param_2[7] = (double)(int)(local_34 - 0x200);
    }
  }
  else {
    dVar4 = (double)FUN_144719204(param_2[7]);
    fVar3 = (float)(double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                           (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    iVar1 = (int)ROUND(fVar3 + fVar3 + 0.5) >> 1;
    local_34 = 0x3ff;
    if (iVar1 < -0x1ff) {
      local_34 = 0;
    }
    uVar2 = iVar1 + 0x200;
    if (uVar2 < 0x400) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
  }
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
      param_2[6] = (double)(int)(local_34 - 0x200);
    }
  }
  else {
    dVar4 = (double)FUN_144719204(param_2[6]);
    fVar3 = (float)(double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                           (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    iVar1 = (int)ROUND(fVar3 + fVar3 + 0.5) >> 1;
    local_34 = 0x3ff;
    if (iVar1 < -0x1ff) {
      local_34 = 0;
    }
    uVar2 = iVar1 + 0x200;
    if (uVar2 < 0x400) {
      local_34 = uVar2;
    }
    (**(code **)(*param_1 + 0x180))(param_1,&local_34,0x400);
  }
  param_2[8] = 0.0;
  FUN_140802315(param_1,param_2 + 0xc);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140802315 FUN_140802315 body=685 status=ok
// SIG undefined FUN_140802315(void)

longlong * FUN_140802315(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  if ((*param_2 != 0 & *(byte *)(param_1 + 5) >> 2) == 1) {
    FUN_147e3ea78(*param_2,&local_50,(int)param_2[2]);
    local_40 = local_50;
  }
  (**(code **)(*param_1 + 0x120))(param_1,&local_40);
  if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_1408023fe;
  bVar4 = true;
  if (((((local_40._4_4_ == 0) || ((int)(uint)local_40 < 0)) ||
       (DAT_14c9647dc <= (int)(uint)local_40)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)(((uint)local_40 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_40 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != local_40._4_4_)))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) {
    bVar9 = true;
LAB_1408023cd:
    lVar8 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar8 = *(longlong *)(*plVar7 + 0xb0);
    if (lVar8 == 0) {
      lVar8 = FUN_1448abda6();
    }
    FUN_141246736(&local_50,lVar8);
    if (local_48 == (longlong *)0x0) {
LAB_1408025b9:
      bVar9 = false;
      goto LAB_1408023cd;
    }
    iVar6 = (int)local_48[1];
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_48[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(local_48 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar7 = local_48;
    } while (!bVar9);
    LOCK();
    piVar2 = (int *)((longlong)local_48 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    lVar8 = local_50;
    local_48 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) goto LAB_1408025b9;
    local_50 = 0;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    bVar9 = false;
    bVar4 = false;
  }
  *param_2 = lVar8;
  plVar3 = (longlong *)param_2[1];
  if (plVar7 == plVar3) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
        plVar3 = plVar7;
joined_r0x000140802461:
        if (iVar6 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  else {
    param_2[1] = (longlong)plVar7;
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
        iVar6 = *piVar2;
        UNLOCK();
        goto joined_r0x000140802461;
      }
    }
  }
  if (!bVar4) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((!bVar9) && (local_48 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_48 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (*param_2 != 0) {
    iVar6 = FUN_147e3eb00(*param_2,&local_40);
    *(int *)(param_2 + 2) = iVar6;
    if (iVar6 == -1) {
      *param_2 = 0;
      plVar7 = (longlong *)param_2[1];
      if (plVar7 != (longlong *)0x0) {
        param_2[1] = 0;
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
LAB_1408023fe:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408025c4 FUN_1408025c4 body=128 status=ok
// SIG undefined FUN_1408025c4(void)

bool FUN_1408025c4(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar1 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x188);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 400) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 0x30,
            *(uint *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 0x30) != param_2) {
        iVar2 = *(int *)(lVar1 + 0x28);
        if (iVar2 == -1) {
          return false;
        }
      }
      if (lVar1 == 0) {
        return false;
      }
      if (lVar1 == -8) {
        return false;
      }
      return 0 < *(int *)(lVar1 + 0x10);
    }
  }
  return false;
}



// FUNCTION 140802644 FUN_140802644 body=310 status=ok
// SIG undefined FUN_140802644(void)

void FUN_140802644(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (uint *)*param_2;
  local_68 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_70 = (ulonglong)puVar1[6];
  lVar4 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar4;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar4;
  }
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar4;
  }
  local_98 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_98 = lVar4;
  }
  local_90 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_90 = lVar4;
  }
  local_88 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_88 = lVar4;
  }
  local_80 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_80 = lVar4;
  }
  local_78 = lVar2 + (ulonglong)puVar1[8];
  if ((ulonglong)puVar1[8] == 0xffffffff) {
    local_78 = lVar4;
  }
  FUN_14080277c(param_3 + 8,local_68,lVar3,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080277c FUN_14080277c body=621 status=ok
// SIG undefined FUN_14080277c(void)

void FUN_14080277c(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  short sVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = (ulonglong)*(ushort *)(param_2 + 0xe);
  lVar2 = *param_4;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)param_4[2];
      if (*(ushort *)(param_2 + 0xe) != 0 && puVar3 != (undefined8 *)0x0) {
        uVar4 = 0;
        do {
          local_50 = (double)(float)*(double *)(param_9 + uVar4 * 8);
          local_58 = (double)(float)*(double *)(param_8 + uVar4 * 8);
          local_60 = (double)(float)*(double *)(param_7 + uVar4 * 8);
          local_68 = (double)(float)*(double *)(param_6 + uVar4 * 8);
          FUN_1475de558(*(undefined8 *)(param_3 + uVar4 * 8),*(undefined1 *)(param_5 + uVar4),
                        *puVar3,&local_68);
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 2;
        } while (uVar5 != uVar4);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      do {
        sVar1 = *(short *)(lVar2 + uVar4 * 2);
        if (sVar1 != 0) {
          local_50 = (double)(float)*(double *)(param_9 + uVar4 * 8);
          local_58 = (double)(float)*(double *)(param_8 + uVar4 * 8);
          local_60 = (double)(float)*(double *)(param_7 + uVar4 * 8);
          local_68 = (double)(float)*(double *)(param_6 + uVar4 * 8);
          FUN_1475de458(*(undefined8 *)(param_3 + uVar4 * 8),*(undefined1 *)(param_5 + uVar4),sVar1,
                        &local_68);
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else if (uVar5 != 0) {
    uVar4 = 0;
    do {
      local_50 = (double)(float)*(double *)(param_9 + uVar4 * 8);
      local_58 = (double)(float)*(double *)(param_8 + uVar4 * 8);
      local_60 = (double)(float)*(double *)(param_7 + uVar4 * 8);
      local_68 = (double)(float)*(double *)(param_6 + uVar4 * 8);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar2 + uVar4 * 2)))
                (*(undefined8 *)(param_3 + uVar4 * 8),*(undefined1 *)(param_5 + uVar4),&local_68);
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408029ea FUN_1408029ea body=101 status=ok
// SIG undefined FUN_1408029ea(void)

void FUN_1408029ea(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_3[3];
  local_10 = (float)param_3[2];
  local_14 = (float)param_3[1];
  local_18 = (float)*param_3;
  FUN_140802a50(local_c,&local_18,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140802a50 FUN_140802a50 body=355 status=ok
// SIG undefined FUN_140802a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140802a50(undefined8 param_1,undefined1 (*param_2) [16],char param_3)

{
  float fVar1;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_3 != '\0') {
    auVar2 = maxps(*param_2,_DAT_149e1a200);
    auVar2 = minps(auVar2,_DAT_149e1a210);
    fVar1 = auVar2._0_4_;
    fVar4 = auVar2._4_4_;
    fVar5 = auVar2._8_4_;
    auVar7._4_4_ = *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar4 + -0x39000000) >> 0x14) * 4);
    auVar7._0_4_ = *(undefined4 *)
                    (&DAT_149e1bee0 + (ulonglong)((int)fVar1 + 0xc7000000U >> 0x14) * 4);
    auVar7._8_4_ = *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar5 + -0x39000000) >> 0x14) * 4);
    auVar7._12_4_ = 0;
    auVar6._0_4_ = (uint)fVar1 >> 0xc;
    auVar6._4_4_ = (uint)fVar4 >> 0xc;
    auVar6._8_4_ = (uint)fVar5 >> 0xc;
    auVar6._12_4_ = (uint)auVar2._12_4_ >> 0xc;
    auVar6 = pmaddwd(auVar6 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar7);
    auVar3._4_4_ = (int)(fVar4 * 0.0 + 0.5) | auVar6._4_4_ >> 0x10;
    auVar3._12_4_ = (int)(auVar2._12_4_ * 255.0 + 0.5) | auVar6._12_4_ >> 0x10;
    auVar3._0_4_ = (int)(fVar5 * 0.0 + 0.5) | auVar6._8_4_ >> 0x10;
    auVar3._8_4_ = (int)(fVar1 * 0.0 + 0.5) | auVar6._0_4_ >> 0x10;
    packssdw(auVar3,auVar3);
  }
  FUN_140802bb4();
  return;
}



// FUNCTION 140802bb4 FUN_140802bb4 body=135 status=ok
// SIG undefined FUN_140802bb4(void)

void FUN_140802bb4(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x2d0) != param_2)) {
    *(int *)(param_1 + 0x2d0) = param_2;
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
       (plVar1 = *(longlong **)(lVar2 + 0x218), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x248))(plVar1,param_1);
    }
    FUN_1406f9ba4(&DAT_14cad1680,param_1);
    return;
  }
  return;
}



// FUNCTION 140802c3c FUN_140802c3c body=511 status=ok
// SIG undefined FUN_140802c3c(void)

void FUN_140802c3c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar7 = -1;
  bVar3 = true;
  if ((((param_1[0x18] == 0) || (DAT_14caf6068 < 1)) || ((DAT_14c7616fc & 1) == 0)) ||
     (lVar4 = FUN_14005c7aa(), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    QueryPerformanceCounter(&local_40);
    lVar7 = CONCAT71(local_40.QuadPart._1_7_,local_40.s.LowPart._0_1_);
    bVar3 = false;
  }
  puVar6 = param_1 + 0x1d;
  iVar2 = *(int *)(param_1 + 0x22);
  *(uint *)(param_1 + 0x22) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x114) < iVar2 + 1U) {
    FUN_14476a5c8(puVar6,iVar2);
  }
  puVar5 = (undefined8 *)param_1[0x21];
  if ((undefined8 *)param_1[0x21] == (undefined8 *)0x0) {
    puVar5 = puVar6;
  }
  puVar5[iVar2] = param_1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_140802e3c(param_1[0x16],param_1 + 0x16);
  puVar5 = (undefined8 *)param_1[0x21];
  if ((undefined8 *)param_1[0x21] == (undefined8 *)0x0) {
    puVar5 = puVar6;
  }
  FUN_144717c65(puVar5,*(undefined4 *)(param_1 + 0x22));
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    FUN_14473dbc4(puVar6,0);
  }
  local_40.s.LowPart._0_1_ = 1;
  FUN_1447439e4();
  if ((lVar7 != -1) && (QueryPerformanceCounter(&local_40), !bVar3)) {
    LOCK();
    *(longlong *)(lVar4 + 0x10) =
         *(longlong *)(lVar4 + 0x10) +
         (CONCAT71(local_40.QuadPart._1_7_,local_40.s.LowPart._0_1_) - lVar7);
    UNLOCK();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x21];
  }
  FUN_144717c65(puVar6,*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140802e3c FUN_140802e3c body=251 status=ok
// SIG undefined FUN_140802e3c(void)

void FUN_140802e3c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_140056f94();
  FUN_140803078(param_1 + 0x150,param_1 + 0x98,0,0xffffffff,0);
  FUN_1400d3f60(param_1 + 0x150);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80) + iVar4;
  if (-1 < iVar5) {
    plVar1 = (longlong *)(param_1 + 0x78);
    if (*(int *)(param_1 + 0x84) < iVar5) {
      FUN_140802f38(plVar1);
      iVar4 = *(int *)(param_1 + 0x70);
    }
    if (iVar4 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        iVar5 = *(int *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x80) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x84) < iVar5 + 1U) {
          FUN_140337254(plVar1,iVar5);
        }
        *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar3;
        *(int *)(lVar3 + 0x18) = iVar5;
        *(undefined1 *)(lVar3 + 8) = 4;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar4 * 8 != lVar6);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) < 0) {
      FUN_140802f38((longlong *)(param_1 + 0x68),0);
    }
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 140802f38 FUN_140802f38 body=320 status=ok
// SIG undefined FUN_140802f38(void)

void FUN_140802f38(longlong param_1,uint param_2)

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
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140802fa1;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140802fa1:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140803078 FUN_140803078 body=796 status=ok
// SIG undefined FUN_140803078(void)

void FUN_140803078(longlong param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_5 != '\0') {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
    FUN_1400d3f60(param_2);
  }
  lVar8 = *(longlong *)(param_1 + 0x80);
  if ((lVar8 != 0) || (lVar8 = *(longlong *)(param_1 + 0x78), lVar8 != 0)) {
    iVar2 = *(int *)(lVar8 + 0x120);
    iVar4 = iVar2 - param_3;
    if (iVar4 != 0 && param_3 <= iVar2) {
      iVar7 = iVar4;
      if (param_3 + param_4 < iVar2) {
        iVar7 = param_4;
      }
      lVar3 = *(longlong *)(param_2 + 0x78);
      if (param_4 == -1) {
        iVar7 = iVar4;
      }
      iVar2 = *(int *)(lVar3 + 0x120);
      lVar10 = param_2 + 0x88;
      lVar6 = *(longlong *)(param_2 + 0x98);
      if (*(longlong *)(param_2 + 0x98) == 0) {
        lVar6 = lVar10;
      }
      iVar4 = *(int *)(param_2 + 0xa0);
      if ((longlong)iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        lVar9 = 0;
        do {
          puVar5 = *(undefined8 **)(lVar6 + lVar9);
          if (puVar5 != *(undefined8 **)(param_2 + 0x78)) {
            LOCK();
            bVar11 = *(int *)(puVar5 + 1) == 0;
            if (bVar11) {
              *(int *)(puVar5 + 1) = -1;
            }
            UNLOCK();
            if (bVar11) goto LAB_14080327e;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar4 * 8 != lVar9);
        iVar4 = *(int *)(param_2 + 0xa0);
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR_FUN_14ade2d80;
      puVar5[2] = param_2;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0xffffffff00000000;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xb4) = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x114) = 0;
      puVar5[0x20] = 0;
      puVar5[0x21] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      *(undefined8 *)((longlong)puVar5 + 300) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x134) = 0;
      puVar5[0x24] = 0;
      puVar5[0x25] = 0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      *(undefined4 *)(puVar5 + 0x30) = 1;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
      *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
        FUN_140e69270(lVar10,iVar4);
      }
      if (*(longlong *)(param_2 + 0x98) != 0) {
        lVar10 = *(longlong *)(param_2 + 0x98);
      }
      *(undefined8 **)(lVar10 + (longlong)iVar4 * 8) = puVar5;
      LOCK();
      if (*(int *)(puVar5 + 1) == 0) {
        *(int *)(puVar5 + 1) = -1;
      }
      UNLOCK();
LAB_14080327e:
      *(undefined8 **)(param_2 + 0x80) = puVar5;
      *(undefined4 *)(puVar5 + 0x24) = 0;
      lVar10 = *(longlong *)(param_2 + 0x80);
      if (*(int *)(lVar10 + 0x54) < 0) {
        *(undefined4 *)(lVar10 + 0x50) = 0;
        FUN_14481578e(lVar10 + 0x48,0);
      }
      else {
        *(undefined4 *)(lVar10 + 0x50) = 0;
      }
      lVar10 = *(longlong *)(param_2 + 0x80);
      iVar4 = iVar2;
      if (param_5 != '\0') {
        iVar4 = 0;
      }
      FUN_14009337e(lVar10,iVar4 + iVar7,0);
      *(int *)(lVar10 + 0x120) = iVar4 + iVar7;
      if (param_5 == '\0') {
        FUN_1447a96a8(lVar3,lVar10,0,*(undefined4 *)(lVar3 + 0x120));
      }
      FUN_1447a96a8(lVar8,lVar10,iVar2,iVar7);
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 8);
      LOCK();
      if (*piVar1 == -1) {
        *piVar1 = 0;
      }
      UNLOCK();
      *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_2 + 0x80) = 0;
    }
  }
  return;
}



// FUNCTION 140803394 FUN_140803394 body=789 status=ok
// SIG undefined FUN_140803394(void)

void FUN_140803394(longlong *param_1,float *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  puVar2 = (undefined8 *)*param_1;
  uVar12 = (*(code *)puVar2[2])(*puVar2,*(undefined4 *)(puVar2 + 1));
  puVar2 = (undefined8 *)*param_1;
  uVar13 = (*(code *)puVar2[2])(*puVar2,*(undefined4 *)(puVar2 + 1));
  plVar10 = (longlong *)param_1[1];
  puVar2 = (undefined8 *)*plVar10;
  fVar6 = *(float *)(plVar10 + 4);
  fVar7 = *(float *)((longlong)plVar10 + 0x24);
  fVar8 = *(float *)(plVar10 + 5);
  fVar25 = *(float *)((longlong)plVar10 + 0x2c);
  uVar14 = (*(code *)puVar2[2])(*puVar2,*(undefined4 *)(puVar2 + 1));
  fVar18 = (float)((ulonglong)uVar14 >> 0x20);
  fVar16 = (float)uVar14;
  fVar15 = fVar18 * fVar6 - fVar7 * fVar16;
  fVar17 = extraout_XMM0_Dc_01 * fVar7 - fVar8 * fVar18;
  fVar19 = fVar16 * fVar8 - fVar6 * extraout_XMM0_Dc_01;
  fVar20 = extraout_XMM0_Dd_01 * fVar25 - fVar25 * extraout_XMM0_Dd_01;
  fVar15 = fVar15 + fVar15;
  fVar17 = fVar17 + fVar17;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  fVar16 = (fVar15 * fVar7 - fVar19 * fVar8) + fVar25 * fVar17 + fVar16 + *(float *)(plVar10 + 6);
  fVar18 = (fVar17 * fVar8 - fVar15 * fVar6) + fVar25 * fVar19 + fVar18 +
           *(float *)((longlong)plVar10 + 0x34);
  fVar15 = (fVar19 * fVar6 - fVar17 * fVar7) + fVar25 * fVar15 + extraout_XMM0_Dc_01 +
           *(float *)(plVar10 + 7);
  fVar17 = (fVar20 * fVar25 - fVar20 * fVar25) + fVar25 * fVar20 + extraout_XMM0_Dd_01 +
           *(float *)((longlong)plVar10 + 0x3c);
  plVar10 = (longlong *)param_1[1];
  puVar2 = (undefined8 *)*plVar10;
  fVar6 = *(float *)(plVar10 + 4);
  fVar7 = *(float *)((longlong)plVar10 + 0x24);
  fVar8 = *(float *)(plVar10 + 5);
  fVar25 = *(float *)((longlong)plVar10 + 0x2c);
  uVar14 = (*(code *)puVar2[2])(*puVar2,*(undefined4 *)(puVar2 + 1));
  fVar20 = (float)((ulonglong)uVar14 >> 0x20);
  fVar19 = (float)uVar14;
  fVar21 = fVar20 * fVar6 - fVar7 * fVar19;
  fVar22 = extraout_XMM0_Dc_02 * fVar7 - fVar8 * fVar20;
  fVar23 = fVar19 * fVar8 - fVar6 * extraout_XMM0_Dc_02;
  fVar24 = extraout_XMM0_Dd_02 * fVar25 - fVar25 * extraout_XMM0_Dd_02;
  fVar21 = fVar21 + fVar21;
  fVar22 = fVar22 + fVar22;
  fVar23 = fVar23 + fVar23;
  fVar24 = fVar24 + fVar24;
  fVar19 = (fVar21 * fVar7 - fVar23 * fVar8) + fVar25 * fVar22 + fVar19 + *(float *)(plVar10 + 6);
  fVar20 = (fVar22 * fVar8 - fVar21 * fVar6) + fVar25 * fVar23 + fVar20 +
           *(float *)((longlong)plVar10 + 0x34);
  fVar21 = (fVar23 * fVar6 - fVar22 * fVar7) + fVar25 * fVar21 + extraout_XMM0_Dc_02 +
           *(float *)(plVar10 + 7);
  fVar25 = (fVar24 * fVar25 - fVar24 * fVar25) + fVar25 * fVar24 + extraout_XMM0_Dd_02 +
           *(float *)((longlong)plVar10 + 0x3c);
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  plVar10 = (longlong *)param_1[2];
  iVar11 = (int)plVar10[1];
  uVar9 = iVar11 + 1;
  *(uint *)(plVar10 + 1) = uVar9;
  if ((extraout_XMM0_Dc_00 - fVar21) * (0.0 - fVar5) +
      ((float)uVar13 - fVar19) * (0.0 - fVar3) +
      ((float)((ulonglong)uVar13 >> 0x20) - fVar20) * (0.0 - fVar4) <
      (extraout_XMM0_Dc - fVar15) * fVar8 +
      ((float)uVar12 - fVar16) * fVar6 + ((float)((ulonglong)uVar12 >> 0x20) - fVar18) * fVar7) {
    if (*(uint *)((longlong)plVar10 + 0xc) < uVar9) {
      FUN_141728230(plVar10,iVar11);
    }
    puVar2 = (undefined8 *)(*plVar10 + (longlong)iVar11 * 0x10);
    *puVar2 = uVar12;
    *(float *)(puVar2 + 1) = extraout_XMM0_Dc;
    *(undefined4 *)((longlong)puVar2 + 0xc) = extraout_XMM0_Dd;
    plVar10 = (longlong *)param_1[3];
    iVar11 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar11 + 1U;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar11 + 1U) {
      FUN_141728230(plVar10,iVar11);
    }
  }
  else {
    if (*(uint *)((longlong)plVar10 + 0xc) < uVar9) {
      FUN_141728230(plVar10,iVar11);
    }
    puVar2 = (undefined8 *)(*plVar10 + (longlong)iVar11 * 0x10);
    *puVar2 = uVar13;
    *(float *)(puVar2 + 1) = extraout_XMM0_Dc_00;
    *(undefined4 *)((longlong)puVar2 + 0xc) = extraout_XMM0_Dd_00;
    plVar10 = (longlong *)param_1[3];
    iVar11 = (int)plVar10[1];
    *(uint *)(plVar10 + 1) = iVar11 + 1U;
    fVar16 = fVar19;
    fVar18 = fVar20;
    fVar15 = fVar21;
    fVar17 = fVar25;
    if (*(uint *)((longlong)plVar10 + 0xc) < iVar11 + 1U) {
      FUN_141728230(plVar10,iVar11);
    }
  }
  pfVar1 = (float *)(*plVar10 + (longlong)iVar11 * 0x10);
  *pfVar1 = fVar16;
  pfVar1[1] = fVar18;
  pfVar1[2] = fVar15;
  pfVar1[3] = fVar17;
  return;
}



// FUNCTION 1408036b2 FUN_1408036b2 body=191 status=ok
// SIG undefined FUN_1408036b2(void)

longlong * FUN_1408036b2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = (longlong)&PTR_FUN_14ac5cae0;
  param_1[5] = (longlong)&PTR_FUN_14ac5d4e0;
  param_1[6] = (longlong)&PTR_LAB_14ac5d520;
  param_1[0x55] = (longlong)&PTR_FUN_14ac5d570;
  param_1[0x56] = (longlong)&PTR_FUN_14ac5d5f0;
  param_1[0x57] = (longlong)&PTR_FUN_14ac5d600;
  param_1[0xc4] = (longlong)&PTR_FUN_14ac5d630;
  FUN_140803772(param_1 + 0xc5);
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  return param_1;
}



// FUNCTION 140803772 FUN_140803772 body=734 status=ok
// SIG undefined FUN_140803772(void)

undefined8 * FUN_140803772(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x44bb8000447a0000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_1[0x13] = 0;
  param_1[0x12] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  param_1[0x22] = DAT_14c8464f0;
  param_1[0x23] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0x44bb800044bb8000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_1[0x30] = 0;
  param_1[0x2f] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_1[0x37] = 0;
  param_1[0x36] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x44) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar1;
  *(undefined4 *)(param_1 + 0x45) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar3;
  param_1[0x46] = DAT_14c8464f0;
  param_1[0x47] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0x44bb800044bb8000;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_1[0x54] = 0;
  param_1[0x53] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_1[0x5b] = 0;
  param_1[0x5a] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x68) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x344) = uVar1;
  *(undefined4 *)(param_1 + 0x69) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34c) = uVar3;
  param_1[0x6a] = DAT_14c8464f0;
  param_1[0x6b] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined2 *)(param_1 + 0x6e) = 2;
  *(undefined1 *)((longlong)param_1 + 0x372) = 0;
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140803a51 FUN_140803a51 body=63 status=ok
// SIG undefined FUN_140803a51(void)

void FUN_140803a51(longlong param_1,undefined4 param_2)

{
  if (DAT_14cb01860 == 0) {
    FUN_14080400c(&DAT_14cb026a8,*(undefined8 *)(param_1 + 0x18));
  }
  FUN_140803a90(&DAT_14cb026a8,param_1,param_2);
  return;
}



// FUNCTION 140803a90 FUN_140803a90 body=1403 status=ok
// SIG undefined FUN_140803a90(void)

longlong * FUN_140803a90(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong *local_e0;
  longlong local_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_85;
  undefined1 local_83;
  ulonglong local_80;
  
  lVar8 = DAT_14cb01840;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((&DAT_14ca814b8)[(param_3 & 0xffff) * 0xf] == 1) {
    iVar14 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
      uVar13 = 0;
    }
    else if (iVar14 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar13 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar13 = 1;
    }
    iVar14 = *(int *)(lVar8 + uVar13 * 4);
    iVar11 = 0x20;
    if (0x20 < iVar14) {
      iVar11 = iVar14;
    }
    uVar13 = (ulonglong)(iVar11 - 1) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar8 & 0x1f);
    if (DAT_14cb01868 != (longlong *)0x0) {
      lVar7 = (**(code **)(*DAT_14cb01868 + 0x10))();
      plVar10 = DAT_14cb01868;
      if ((*(int *)(lVar7 + 0x2c) == iVar14) && (*(int *)(lVar7 + 0x30) == iVar14))
      goto LAB_140803f52;
      if (DAT_14cb01868 != (longlong *)0x0) {
        DAT_14cb01868 = (longlong *)0x0;
        (**(code **)(*plVar10 + 0x38))(plVar10);
      }
    }
    iVar11 = *(int *)(param_1 + 0x18);
    local_d8 = 0x100000001 << ((byte)lVar8 & 0x3f);
    local_a0 = DAT_14ca83a40;
    uStack_b0 = DAT_14ca83a30;
    uStack_ac = DAT_14ca83a34;
    uStack_a8 = DAT_14ca83a38;
    uStack_a4 = DAT_14ca83a3c;
    local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_86 = 1;
    local_b8 = 0x1000009;
    local_85 = 0x12;
    local_8c = 1;
    local_8a = (undefined2)iVar11;
    local_88 = 0x101;
    local_98 = 0;
    local_83 = 0xff;
    iVar12 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      iVar12 = iVar14;
    }
    local_94 = 1;
    if (1 < iVar12) {
      local_94 = iVar12;
    }
    plVar10 = (longlong *)(param_2 + 0x70);
    uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar13 = uVar15 + 0x120;
    local_e0 = plVar10;
    local_90 = local_94;
    if (*(ulonglong *)(param_2 + 0x78) < uVar13) {
      FUN_140023dd8(plVar10,0x128);
      uVar15 = *plVar10 + 7U & 0xfffffffffffffff8;
      uVar13 = uVar15 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar13;
    FUN_1456bbb8c(uVar15,L"SSProfilePreIntegratedTexture",&local_b8,0);
    iVar12 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar12 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar12 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar12);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar12 * 8) = uVar15;
    *(int *)(uVar15 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    if (0 < iVar11) {
      fVar17 = (float)iVar14;
      iVar14 = 0;
      do {
        plVar10 = local_e0;
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar9 = puVar16 + 0x2a;
        if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
          FUN_140023dd8(local_e0,0x160);
          puVar16 = (undefined8 *)(*plVar10 + 0xfU & 0xfffffffffffffff0);
          puVar9 = puVar16 + 0x2a;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar9;
        *puVar16 = &PTR_FUN_14aa6e650;
        FUN_147ce7232(puVar16 + 2);
        iVar12 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar12 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar12 + 1U) {
          FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar12);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar12 * 8) = puVar16;
        puVar16[10] = uVar15;
        puVar16[0xb] = 0;
        *(undefined2 *)(puVar16 + 0xc) = 2;
        *(short *)((longlong)puVar16 + 0x62) = (short)iVar14;
        puVar9 = (undefined8 *)(DAT_14ca94dc8 + 0x10);
        if (DAT_14cb01860 != 0) {
          puVar9 = (undefined8 *)(DAT_14cb01860 + 8);
        }
        plVar10 = (longlong *)*puVar9;
        puVar16[2] = plVar10;
        puVar16[3] = DAT_14c9c0d80;
        lVar8 = (**(code **)(*plVar10 + 8))();
        switch(*(undefined1 *)(lVar8 + 0x32)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
          iVar12 = *(int *)(lVar8 + 0x24);
          iVar4 = *(int *)(lVar8 + 0x28);
          break;
        default:
          iVar12 = 0;
          iVar4 = 0;
        }
        *(float *)(puVar16 + 4) = (float)iVar12;
        *(float *)((longlong)puVar16 + 0x24) = (float)iVar4;
        *(float *)(puVar16 + 5) = 1.0 / (float)iVar12;
        *(float *)((longlong)puVar16 + 0x2c) = 1.0 / (float)iVar4;
        *(float *)(puVar16 + 6) = fVar17;
        *(float *)((longlong)puVar16 + 0x34) = fVar17;
        *(float *)(puVar16 + 7) = 1.0 / fVar17;
        *(float *)((longlong)puVar16 + 0x3c) = 1.0 / fVar17;
        *(int *)(puVar16 + 8) = iVar14;
        local_c8 = 0;
        local_c0 = local_d8;
        uVar1 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)DAT_14ca85072 * 8);
        FUN_145f0d2e8();
        FUN_1448e935e(uVar1,&local_b8,&DAT_14cb018d8,0);
        FUN_145f0d2e8();
        local_f0 = &local_c8;
        local_f8 = puVar16 + 2;
        FUN_147cdc528(param_2,uVar1,&local_c9);
        iVar14 = iVar14 + 1;
      } while (iVar11 != iVar14);
    }
    puVar9 = (undefined8 *)FUN_14495f742(param_2,uVar15);
    if ((*(byte *)(uVar15 + 0x20) & 0xc) == 0) {
      if ((*(byte *)(uVar15 + 0x20) & 0x10) != 0) {
        FUN_140069376(param_2);
      }
      iVar14 = *(int *)(param_2 + 0x5a0);
      *(uint *)(param_2 + 0x5a0) = iVar14 + 1U;
      if (*(uint *)(param_2 + 0x5a4) < iVar14 + 1U) {
        FUN_1400f155a((longlong *)(param_2 + 0x598),iVar14);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x598) + (longlong)iVar14 * 8) = uVar15;
      *(undefined4 *)(uVar15 + 0x1c) = 0x70;
      *(byte *)(uVar15 + 0x20) = *(byte *)(uVar15 + 0x20) & 0xe8 | 0x15;
      *(undefined4 *)(uVar15 + 0x58) = 0x70;
    }
    plVar3 = DAT_14cb01868;
    plVar2 = (longlong *)*puVar9;
    plVar10 = DAT_14cb01868;
    if (DAT_14cb01868 != plVar2) {
      DAT_14cb01868 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))();
      }
      plVar10 = DAT_14cb01868;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
        plVar10 = DAT_14cb01868;
      }
    }
  }
  else {
    plVar10 = (longlong *)0x0;
  }
LAB_140803f52:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 14080400c FUN_14080400c body=3433 status=ok
// SIG undefined FUN_14080400c(void)

void FUN_14080400c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  short sVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_718 [32];
  wchar_t *local_6f8;
  int *local_6f0;
  float local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  DWORD local_6cc;
  undefined8 local_6c8;
  longlong local_6c0;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  undefined8 local_668;
  undefined8 uStack_660;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  undefined8 local_648;
  undefined8 uStack_640;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  undefined8 local_628;
  undefined8 uStack_620;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  float local_5f8 [4];
  float local_5e8 [4];
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  byte local_5c0;
  char local_5bf;
  float local_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float local_5ac;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  undefined8 local_588;
  undefined8 uStack_580;
  float local_578;
  undefined4 local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  float fStack_558;
  float fStack_554;
  float fStack_550;
  int local_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  float afStack_510 [2];
  undefined8 uStack_508;
  undefined8 uStack_500;
  float local_4f8;
  undefined8 local_4f4;
  undefined4 local_4ec;
  undefined2 uStack_4e8;
  undefined1 uStack_4e6;
  undefined1 uStack_4e5;
  undefined1 uStack_4e4;
  undefined1 local_4e3;
  undefined2 uStack_4e2;
  float local_4e0;
  float local_4dc;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  undefined1 local_4b8 [208];
  undefined1 local_3e8 [144];
  undefined1 local_358 [96];
  undefined1 local_2f8 [520];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_718;
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = 0x40;
  if (0x40 < uVar1) {
    uVar6 = (ulonglong)uVar1;
  }
  local_4f4 = uVar6 << 0x20 | 0x42;
  local_4f8 = 0.0;
  local_4ec._0_2_ = 1;
  uVar13 = 0;
  uStack_4e6 = 0;
  afStack_510[1] = (float)DAT_14ca8508c;
  afStack_510[0] = (float)DAT_14ca85088;
  uStack_508 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uStack_500 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
  uStack_4e5 = 0x13;
  uStack_4e4 = 0;
  local_4ec._2_2_ = 1;
  uStack_4e8 = 0x101;
  local_518 = 8;
  local_4e3 = 0xff;
  local_6f8 = L"SSProfiles";
  local_6c0 = param_1;
  FUN_14490a8c0(&DAT_14ca9a3e8,param_2,&local_518,&DAT_14cb01860);
  local_6e8 = (float)((uint)local_6e8 & 0xffffff00);
  local_6f0 = &local_54c;
  local_6d8 = 0;
  local_6e0 = (undefined8 *)CONCAT71(local_6e0._1_7_,1);
  local_6f8 = (wchar_t *)CONCAT44(local_6f8._4_4_,1);
  local_6c8 = param_2;
  lVar7 = (**(code **)(*DAT_14ca83900 + 0x430))
                    (DAT_14ca83900,param_2,*(undefined8 *)(DAT_14cb01860 + 8),0);
  memset(&local_518,0,0x420);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      memcpy(local_5e8,(void *)((longlong)(int)uVar13 * 0xa8 + *(longlong *)(local_6c0 + 0x10)),0x9c
            );
      FUN_141583733();
      if (1.0 <= local_5bc) {
        local_5bc = 1.0;
      }
      if (local_5bc <= 0.0) {
        local_5bc = 0.0;
      }
      if (1.0 <= fStack_5b8) {
        fStack_5b8 = 1.0;
      }
      if (fStack_5b8 <= 0.0) {
        fStack_5b8 = 0.0;
      }
      if (1.0 <= fStack_5b4) {
        fStack_5b4 = 1.0;
      }
      if (fStack_5b4 <= 0.0) {
        fStack_5b4 = 0.0;
      }
      if (1.0 <= fStack_5b0) {
        fStack_5b0 = 1.0;
      }
      if (fStack_5b0 <= 0.0) {
        fStack_5b0 = 0.0;
      }
      if (1.0 <= local_598) {
        local_598 = 1.0;
      }
      if (local_598 <= 0.009) {
        local_598 = 0.009;
      }
      if (1.0 <= fStack_594) {
        fStack_594 = 1.0;
      }
      if (fStack_594 <= 0.009) {
        fStack_594 = 0.009;
      }
      if (1.0 <= fStack_590) {
        fStack_590 = 1.0;
      }
      if (fStack_590 <= 0.009) {
        fStack_590 = 0.009;
      }
      if (1.0 <= fStack_58c) {
        fStack_58c = 1.0;
      }
      if (fStack_58c <= 0.009) {
        fStack_58c = 0.009;
      }
      if (1.0 <= local_5d8) {
        local_5d8 = 1.0;
      }
      if (local_5d8 <= 0.009) {
        local_5d8 = 0.009;
      }
      if (1.0 <= local_5d4) {
        local_5d4 = 1.0;
      }
      if (local_5d4 <= 0.009) {
        local_5d4 = 0.009;
      }
      if (1.0 <= local_5d0) {
        local_5d0 = 1.0;
      }
      if (local_5d0 <= 0.009) {
        local_5d0 = 0.009;
      }
      if (1.0 <= local_5cc) {
        local_5cc = 1.0;
      }
      if (local_5cc <= 0.009) {
        local_5cc = 0.009;
      }
      if (1.0 <= local_55c) {
        local_55c = 1.0;
      }
      if (local_55c <= 0.009) {
        local_55c = 0.009;
      }
      if (1.0 <= fStack_558) {
        fStack_558 = 1.0;
      }
      if (fStack_558 <= 0.009) {
        fStack_558 = 0.009;
      }
      if (1.0 <= fStack_554) {
        fStack_554 = 1.0;
      }
      if (fStack_554 <= 0.009) {
        fStack_554 = 0.009;
      }
      if (1.0 <= fStack_550) {
        fStack_550 = 1.0;
      }
      if (fStack_550 <= 0.009) {
        fStack_550 = 0.009;
      }
      if (1.0 <= local_5e8[0]) {
        local_5e8[0] = 1.0;
      }
      if (local_5e8[0] <= 0.009) {
        local_5e8[0] = 0.009;
      }
      if (1.0 <= local_5e8[1]) {
        local_5e8[1] = 1.0;
      }
      if (local_5e8[1] <= 0.009) {
        local_5e8[1] = 0.009;
      }
      if (1.0 <= local_5e8[2]) {
        local_5e8[2] = 1.0;
      }
      if (local_5e8[2] <= 0.009) {
        local_5e8[2] = 0.009;
      }
      if (1.0 <= local_5e8[3]) {
        local_5e8[3] = 1.0;
      }
      if (local_5e8[3] <= 0.009) {
        local_5e8[3] = 0.009;
      }
      local_518 = CONCAT44(fStack_5b8,local_5bc);
      afStack_510[1] = local_5c4 * 0.02;
      afStack_510[0] = fStack_5b4;
      if (local_5bf == '\x01') {
        local_5fc = local_5cc * local_5c8;
        local_600 = local_5d0 * local_5c8;
        local_604 = local_5d4 * local_5c8;
        local_608 = local_5d8 * local_5c8;
        local_618 = local_5e8[0];
        fStack_614 = local_5e8[1];
        fStack_610 = local_5e8[2];
        fStack_60c = local_5e8[3];
        FUN_143667329(&local_528,&local_618,&local_608);
        local_5f8[3] = uStack_520._4_4_ * 10.0;
        fVar16 = (float)uStack_520 * 10.0;
        fVar17 = local_528._4_4_ * 10.0;
        fVar18 = (float)local_528 * 10.0;
        fVar14 = 1.6666666;
      }
      else {
        local_5f8[3] = local_5cc * local_5c8;
        fVar16 = local_5d0 * local_5c8;
        fVar17 = local_5d4 * local_5c8;
        fVar18 = local_5d8 * local_5c8;
        fVar14 = 10.0;
      }
      lVar9 = DAT_14cb01858;
      local_5f8[3] = local_5f8[3] * fVar14;
      fVar16 = fVar16 * fVar14;
      fVar17 = fVar17 * fVar14;
      fVar18 = fVar18 * fVar14;
      local_5f8[0] = fVar18;
      local_5f8[1] = fVar17;
      local_5f8[2] = fVar16;
      iVar8 = *(int *)(lVar2 + 0xc60);
      if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
        uVar6 = 0;
      }
      else if (iVar8 == 1) {
        local_6cc = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(local_6cc != DVar5);
      }
      else {
        uVar6 = 1;
      }
      if (*(int *)(lVar9 + uVar6 * 4) < 1) {
        local_528 = CONCAT44(local_5f8[1],local_5f8[0]);
        uStack_520 = CONCAT44(local_5f8[3],local_5f8[2]);
      }
      else {
        local_538 = CONCAT44(local_5f8[1],local_5f8[0]);
        uStack_530 = CONCAT44(local_5f8[3],local_5f8[2]);
        local_548 = local_5e8[0];
        fStack_544 = local_5e8[1];
        fStack_540 = local_5e8[2];
        fStack_53c = local_5e8[3];
        FUN_14158378d(&local_528,&local_548,&local_538);
      }
      fVar14 = (float)local_528;
      if ((float)local_528 <= local_528._4_4_) {
        fVar14 = local_528._4_4_;
      }
      if (fVar14 <= (float)uStack_520) {
        fVar14 = (float)uStack_520;
      }
      iVar3 = 2 - (uint)(local_528._4_4_ == fVar14);
      iVar8 = 0;
      if (fVar14 != (float)local_528) {
        iVar8 = iVar3;
      }
      if (NAN(fVar14) || NAN((float)local_528)) {
        iVar8 = iVar3;
      }
      local_5e8[3] = *(float *)((longlong)local_5e8 + (ulonglong)(uint)(iVar8 << 2));
      local_5f8[3] = *(float *)((longlong)local_5f8 + (ulonglong)(uint)(iVar8 << 2));
      if (499.99997 <= fVar18) {
        fVar18 = 499.99997;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (499.99997 <= fVar17) {
        fVar17 = 499.99997;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (499.99997 <= fVar16) {
        fVar16 = 499.99997;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (499.99997 <= local_5f8[3]) {
        local_5f8[3] = 499.99997;
      }
      if (local_5f8[3] <= 0.0) {
        local_5f8[3] = 0.0;
      }
      uStack_508 = CONCAT44(local_5e8[1],local_5e8[0]);
      uStack_500 = CONCAT44(local_5e8[3],local_5e8[2]);
      local_4ec = local_5f8[3] * 0.002;
      local_4f8 = fVar18 * 0.002;
      local_4f4 = CONCAT44(fVar16 * 0.002,fVar17 * 0.002);
      local_4d8 = local_588;
      _uStack_4d0 = CONCAT44((float)(local_5c0 ^ 1),(int)uStack_580);
      local_4c8 = local_568 * 0.5;
      if (1.0 <= local_4c8) {
        local_4c8 = 1.0;
      }
      if (local_4c8 <= 0.0) {
        local_4c8 = 0.0;
      }
      local_4c4 = local_564 * 0.5;
      if (1.0 <= local_4c4) {
        local_4c4 = 1.0;
      }
      if (local_4c4 <= 0.0) {
        local_4c4 = 0.0;
      }
      local_4c0 = local_560;
      local_4bc = ((1.0 - local_560) * local_568 + local_560 * local_564) * 0.5;
      if (1.0 <= local_4bc) {
        local_4bc = 1.0;
      }
      if (local_4bc <= 0.0) {
        local_4bc = 0.0;
      }
      fVar14 = local_578 * 0.01;
      uStack_4e8 = SUB42(fVar14,0);
      uStack_4e6 = (undefined1)((uint)fVar14 >> 0x10);
      uStack_4e5 = (undefined1)((uint)fVar14 >> 0x18);
      uStack_4e4 = (undefined1)local_574;
      local_4e3 = (undefined1)((uint)local_574 >> 8);
      uStack_4e2 = (undefined2)((uint)local_574 >> 0x10);
      local_4e0 = (local_570 + 1.0) * 0.5;
      local_4dc = 1.0 / local_56c;
      local_5f8[0] = fVar18;
      local_5f8[1] = fVar17;
      local_5f8[2] = fVar16;
      if (local_5c0 != 0) {
        local_5ac = fVar18;
        if (fVar18 <= fVar17) {
          local_5ac = fVar17;
        }
        if (local_5ac <= fVar16) {
          local_5ac = fVar16;
        }
        if (local_5ac <= local_5f8[3]) {
          local_5ac = local_5f8[3];
        }
        local_5ac = local_5ac * 0.1;
        if (local_5ac <= 0.1) {
          local_5ac = 0.1;
        }
        local_628 = CONCAT44(fVar17,fVar18);
        uStack_620 = CONCAT44(local_5f8[3],fVar16);
        local_638 = local_5e8[0];
        fStack_634 = local_5e8[1];
        fStack_630 = local_5e8[2];
        fStack_62c = local_5e8[3];
        local_6f8._0_4_ = local_5ac;
        FUN_143667580(local_4b8,0xd,&local_638,&local_628);
        local_648 = CONCAT44(local_5f8[1],local_5f8[0]);
        uStack_640 = CONCAT44(local_5f8[3],local_5f8[2]);
        local_658 = local_5e8[0];
        fStack_654 = local_5e8[1];
        fStack_650 = local_5e8[2];
        fStack_64c = local_5e8[3];
        local_6f8._0_4_ = local_5ac;
        FUN_143667580(local_3e8,9,&local_658,&local_648);
        local_668 = CONCAT44(local_5f8[1],local_5f8[0]);
        uStack_660 = CONCAT44(local_5f8[3],local_5f8[2]);
        local_678 = local_5e8[0];
        fStack_674 = local_5e8[1];
        fStack_670 = local_5e8[2];
        fStack_66c = local_5e8[3];
        local_6f8 = (wchar_t *)CONCAT44(local_6f8._4_4_,local_5ac);
        FUN_143667580(local_358,6,&local_678,&local_668);
        local_5ac = local_5c4 * 10.0 * local_5ac;
      }
      local_688 = CONCAT44(fStack_558,local_55c);
      uStack_680 = CONCAT44(fStack_550,fStack_554);
      local_698 = CONCAT44(local_5f8[1],local_5f8[0]);
      uStack_690 = CONCAT44(local_5f8[3],local_5f8[2]);
      local_6a8 = CONCAT44(local_5e8[1],local_5e8[0]);
      uStack_6a0 = CONCAT44(local_5e8[3],local_5e8[2]);
      local_6b8 = local_598;
      fStack_6b4 = fStack_594;
      fStack_6b0 = fStack_590;
      fStack_6ac = fStack_58c;
      local_6e0 = &local_688;
      local_6e8 = local_5c4;
      local_6f0 = (int *)&local_698;
      local_6f8 = (wchar_t *)&local_6a8;
      FUN_143667d49(local_2f8,0x20,&local_6b8,local_578);
      uVar4 = 0xfffffffa;
      lVar9 = 0;
      lVar10 = 0;
      do {
        fVar14 = *(float *)((longlong)&local_518 + lVar9 * 4 + 4);
        fVar16 = afStack_510[lVar9];
        fVar17 = afStack_510[lVar9 + 1];
        if (uVar4 < 0x1c) {
          fVar17 = fVar17 * 0.33333334 * local_5ac * 0.0009765625;
        }
        uVar6 = (ulonglong)(local_54c * uVar13);
        uVar11 = (uint)(*(float *)((longlong)&local_518 + lVar9 * 4) * 65535.996);
        if (DAT_14c8737c4 == DAT_14c873614) {
          fVar18 = (float)(uVar11 & 0xffff) * 1.5259022e-05;
          if ((uint)fVar18 < 0x47800000) {
            if ((uint)fVar18 < 0x38800000) {
              sVar15 = SUB42(fVar18 + 0.5,0);
            }
            else {
              sVar15 = (short)((int)fVar18 + 0x8000fff + (uint)(((uint)fVar18 >> 0xd & 1) != 0) >>
                              0xd);
            }
          }
          else {
            sVar15 = (0x7f800000 < (uint)fVar18 | 0x3e) << 9;
          }
          *(short *)(lVar7 + uVar6 + lVar9 * 2) = sVar15;
          fVar14 = (float)((int)(fVar14 * 65535.996) & 0xffff) * 1.5259022e-05;
          if ((uint)fVar14 < 0x47800000) {
            if ((uint)fVar14 < 0x38800000) {
              sVar15 = SUB42(fVar14 + 0.5,0);
            }
            else {
              sVar15 = (short)((int)fVar14 + 0x8000fff + (uint)(((uint)fVar14 >> 0xd & 1) != 0) >>
                              0xd);
            }
          }
          else {
            sVar15 = (0x7f800000 < (uint)fVar14 | 0x3e) << 9;
          }
          *(short *)(lVar7 + uVar6 + 2 + lVar9 * 2) = sVar15;
          fVar14 = (float)((int)(fVar16 * 65535.996) & 0xffff) * 1.5259022e-05;
          if ((uint)fVar14 < 0x47800000) {
            if ((uint)fVar14 < 0x38800000) {
              sVar15 = SUB42(fVar14 + 0.5,0);
            }
            else {
              sVar15 = (short)((int)fVar14 + 0x8000fff + (uint)(((uint)fVar14 >> 0xd & 1) != 0) >>
                              0xd);
            }
          }
          else {
            sVar15 = (0x7f800000 < (uint)fVar14 | 0x3e) << 9;
          }
          *(short *)(lVar7 + uVar6 + 4 + lVar9 * 2) = sVar15;
          fVar14 = (float)((int)(fVar17 * 65535.996) & 0xffff) * 1.5259022e-05;
          if ((uint)fVar14 < 0x47800000) {
            if ((uint)fVar14 < 0x38800000) {
              sVar15 = SUB42(fVar14 + 0.5,0);
            }
            else {
              sVar15 = (short)((int)fVar14 + 0x8000fff + (uint)(((uint)fVar14 >> 0xd & 1) != 0) >>
                              0xd);
            }
          }
          else {
            sVar15 = (0x7f800000 < (uint)fVar14 | 0x3e) << 9;
          }
          lVar12 = lVar10 * 4;
        }
        else {
          lVar12 = lVar7 + uVar6;
          *(short *)(lVar12 + lVar9 * 2) = (short)uVar11;
          *(short *)(lVar12 + 2 + lVar9 * 2) = (short)(int)(fVar14 * 65535.996);
          *(short *)(lVar12 + 4 + lVar9 * 2) = (short)(int)(fVar16 * 65535.996);
          sVar15 = (short)(int)(fVar17 * 65535.996);
          lVar12 = lVar9;
        }
        *(short *)(uVar6 + lVar7 + 6 + lVar12 * 2) = sVar15;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 4;
        uVar4 = uVar4 + 1;
      } while (lVar9 != 0x108);
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar1);
  }
  local_6f0 = (int *)CONCAT71(local_6f0._1_7_,1);
  local_6f8 = (wchar_t *)((ulonglong)local_6f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))
            (DAT_14ca83900,local_6c8,*(undefined8 *)(DAT_14cb01860 + 8),0);
  if ((local_f0 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140804d76 FUN_140804d76 body=627 status=ok
// SIG undefined FUN_140804d76(void)

undefined8 * FUN_140804d76(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14ae237f0;
  plVar2 = (longlong *)param_1[0x9c];
  if (plVar2 != (longlong *)0x0) {
    if (plVar2[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  puVar3 = (undefined8 *)param_1[0xab];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_14080540e(param_1[0xa0]);
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x9b];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[0x9a];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_14080510d(param_1[0x98],*(undefined4 *)(param_1 + 0x99));
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x95) == '\x01') {
    *(undefined1 *)(param_1 + 0x95) = 0;
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_1403aed04(param_1 + 0x67);
  FUN_1408051c6(param_1 + 0x1f);
  FUN_140804fe9(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
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
  FUN_140805138(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14080517e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140804fe9 FUN_140804fe9 body=73 status=ok
// SIG undefined FUN_140804fe9(void)

void FUN_140804fe9(longlong param_1,int param_2)

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



// FUNCTION 140805032 FUN_140805032 body=9 status=ok
// SIG undefined FUN_140805032(void)

void FUN_140805032(longlong param_1)

{
  FUN_14080503c(param_1 + 0x10);
  return;
}



// FUNCTION 14080503c FUN_14080503c body=209 status=ok
// SIG undefined FUN_14080503c(void)

void FUN_14080503c(longlong *param_1)

{
  FUN_14017aeb5(param_1[0x20],(int)param_1[0x21]);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14080510d FUN_14080510d body=43 status=ok
// SIG undefined FUN_14080510d(void)

void FUN_14080510d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140805138 FUN_140805138 body=70 status=ok
// SIG undefined FUN_140805138(void)

void FUN_140805138(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14080517e FUN_14080517e body=72 status=ok
// SIG undefined FUN_14080517e(void)

void FUN_14080517e(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a6fd850;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1408051c6 FUN_1408051c6 body=523 status=ok
// SIG undefined FUN_1408051c6(void)

void FUN_1408051c6(longlong param_1)

{
  FUN_1408053d1(*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238));
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  FUN_1408053d1(*(undefined8 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8));
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
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_14017aeb5(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_14017aeb5(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_14017aeb5(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_14006c2ae(param_1);
  return;
}



// FUNCTION 1408053d1 FUN_1408053d1 body=61 status=ok
// SIG undefined FUN_1408053d1(void)

void FUN_1408053d1(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14080540e FUN_14080540e body=1200 status=ok
// SIG undefined FUN_14080540e(void)

void FUN_14080540e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14080544c;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140805451;
      goto LAB_14080549c;
    }
  }
  else {
LAB_14080544c:
    if (iVar6 != 0x10) {
LAB_14080549c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140805451;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140805451;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1408055f5;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143acaafd);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1408055f5:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140805675;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140805675:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ae26748;
        puVar16[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ae26700;
        local_68[0] = FUN_143acb42a;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"ScriptSafeDelete",&DAT_14cb43994);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_140805533;
    }
  }
LAB_140805451:
  if (param_1 != 0) {
    FUN_14183ac64(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_140805533:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408058e0 FUN_1408058e0 body=171 status=ok
// SIG undefined FUN_1408058e0(void)

undefined8 * FUN_1408058e0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a18e458;
  FUN_1401edebb(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ede73(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
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
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140805992 FUN_140805992 body=686 status=ok
// SIG undefined FUN_140805992(void)

void FUN_140805992(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar7 = (longlong *)param_1[0x3e];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x858))(plVar7,param_2);
  }
  plVar7 = (longlong *)(**(code **)(param_1[0x2f] + 0x50))(param_1 + 0x2f);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar1 = param_2 + 0xb8;
  if (DAT_14caf64b8 == 0) {
    local_b0 = &local_98;
    local_98 = FUN_141030f22;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_142b4754c;
    local_b8 = &LAB_147c45ce0;
    local_c0 = &LAB_1463f1ff4;
    local_c8 = &DAT_149e063b2;
    local_d0 = 0x4000000000;
    local_d8 = 0x10000004;
    local_e0 = 8;
    local_e8 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  cVar6 = FUN_140c792b6(lVar1,DAT_14caf64b8);
  if (cVar6 != '\0') {
    cVar6 = FUN_1417bcbcc(lVar1);
    if (cVar6 == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_14485cccc(lVar1);
    }
    (**(code **)(*param_1 + 0x5b0))(param_1,uVar8);
  }
  if ((*(byte *)((longlong)param_1 + 0x34a) & 0x40) != 0) {
    dVar2 = (double)param_1[0x48];
    dVar3 = (double)param_1[0x47];
    dVar4 = (double)param_1[0x46];
    fVar9 = (float)(**(code **)(*param_1 + 0x478))(param_1);
    dVar5 = (double)fVar9;
    cVar6 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    local_90 = DAT_14c8464e8;
    local_88 = DAT_14c8464f0;
    if (cVar6 != '\0') {
      local_90 = -dVar3 * dVar5;
      local_88 = -dVar2 * dVar5;
    }
    local_88 = local_88 + (double)param_1[0x73];
    local_90 = local_90 + (double)param_1[0x72];
    dVar2 = DAT_14c8464e0;
    if (cVar6 != '\0') {
      dVar2 = -dVar4 * dVar5;
    }
    local_98 = (code *)(dVar2 + (double)param_1[0x71]);
    (**(code **)(*param_1 + 0x8e0))(param_1,param_2,&local_98,param_1 + 0x25);
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140805c48 FUN_140805c48 body=57 status=ok
// SIG undefined FUN_140805c48(void)

void FUN_140805c48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb933d8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb933d8 = FUN_140002ddd(FUN_146570da0,uVar1,L"GbxBrainAspect_UseWeapon");
  }
  return;
}



// FUNCTION 140805c82 FUN_140805c82 body=485 status=ok
// SIG undefined FUN_140805c82(void)

void FUN_140805c82(longlong param_1,uint *param_2)

{
  uint *_Dst;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && (*(uint *)(plVar7 + 2) == param_2[1])) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar4 != 0) {
        plVar7 = (longlong *)(param_1 + 0x7a0);
        local_50 = *(undefined8 *)param_2;
        local_48 = *(undefined8 *)(param_2 + 2);
        FUN_140805e68(plVar7);
        iVar3 = *(int *)(param_1 + 0x7a8);
        if (0 < iVar3) {
          lVar4 = 0;
          bVar5 = false;
          do {
            while( true ) {
              lVar2 = *plVar7;
              _Dst = (uint *)(lVar2 + lVar4 * 0x10);
              if (((*(longlong *)(lVar2 + 8 + lVar4 * 0x10) != 0) && (_Dst[1] != 0)) &&
                 ((uVar1 = *_Dst, -1 < (int)uVar1 &&
                  (((((int)uVar1 < DAT_14c9647dc &&
                     (plVar8 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar8 != (longlong *)0x0)) && (*(uint *)(plVar8 + 2) == _Dst[1])) &&
                   (((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0 && (*plVar8 != 0)))))))) break;
              iVar6 = ~(uint)lVar4 + iVar3;
              if (iVar6 != 0) {
                if (0 < iVar6) {
                  iVar6 = 1;
                }
                memmove(_Dst,(void *)(lVar2 + (longlong)(iVar3 - iVar6) * 0x10),(longlong)iVar6 << 4
                       );
                iVar3 = *(int *)(param_1 + 0x7a8);
              }
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x7a8) = iVar3;
              bVar5 = true;
              if (iVar3 <= lVar4) goto LAB_140805e5e;
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar3);
          if (bVar5) {
LAB_140805e5e:
            FUN_1400bbcfc(plVar7);
          }
        }
      }
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140805e68 FUN_140805e68 body=126 status=ok
// SIG undefined FUN_140805e68(void)

undefined8 FUN_140805e68(longlong *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = FUN_14033515a();
  if (uVar1 == 0xffffffff) {
    uVar4 = 0;
  }
  else {
    iVar3 = (int)param_1[1];
    iVar2 = ~uVar1 + iVar3;
    if (iVar2 != 0) {
      iVar5 = 1;
      if (iVar2 < 1) {
        iVar5 = iVar2;
      }
      memmove((void *)((longlong)(int)uVar1 * 0x10 + *param_1),
              (void *)((longlong)(iVar3 - iVar5) * 0x10 + *param_1),(longlong)iVar5 << 4);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 + -1;
    uVar4 = 1;
    if (param_3 == '\x01') {
      FUN_1400bbcfc(param_1);
    }
  }
  return uVar4;
}



// FUNCTION 140805ee6 FUN_140805ee6 body=89 status=ok
// SIG undefined FUN_140805ee6(void)

ulonglong FUN_140805ee6(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    bVar1 = (**(code **)(*(longlong *)param_1[4] + 0x108))();
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  uVar3 = 0;
  if ((bVar1 == 0) && (cVar2 == '\0')) {
    uVar3 = FUN_1406bea30(&DAT_14c951368,param_1[2]);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140805f40 caseD_27 body=27 status=ok
// SIG undefined caseD_27(void)

byte switchD_143c3d4dc::caseD_27(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_1406bea30(&DAT_14c951368,*(undefined8 *)(param_1 + 0x10));
  return bVar1 ^ 1;
}



// FUNCTION 140805f5c FUN_140805f5c body=346 status=ok
// SIG undefined FUN_140805f5c(void)

undefined8 * FUN_140805f5c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a9dfea0;
  puVar2 = (undefined8 *)param_1[0x41];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140296b76(param_1 + 0x37);
  FUN_140296ab8(param_1 + 0x2f);
  FUN_140296d44(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1408060b6(param_1 + 0x11,0);
  if (param_1[0x15] != 0) {
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
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408060b6 FUN_1408060b6 body=396 status=ok
// SIG undefined FUN_1408060b6(void)

void FUN_1408060b6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
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
      puVar2 = *(undefined8 **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
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
    FUN_144727cd0(param_1,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14080624a FUN_14080624a body=57 status=ok
// SIG undefined FUN_14080624a(void)

void FUN_14080624a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21c30 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21c30 = FUN_140002ddd(FUN_1464359a0,uVar1,L"GbxBrainTask_AITree");
  }
  return;
}



// FUNCTION 140806284 FUN_140806284 body=1083 status=ok
// SIG undefined FUN_140806284(void)

void FUN_140806284(longlong *param_1,double *param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_178 [32];
  uint local_158;
  undefined1 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((param_1 != (longlong *)0x0) && (lVar11 = (**(code **)(*param_1 + 0x180))(), lVar11 != 0)) &&
     (iVar10 = FUN_14490d72a(lVar11), iVar10 != 3)) {
    dVar17 = *param_3;
    dVar1 = param_3[1];
    dVar2 = param_3[2];
    dVar15 = dVar2 * dVar2 + dVar17 * dVar17 + dVar1 * dVar1;
    if (((dVar15 != 1.0) || (dVar7 = dVar2, dVar8 = dVar1, dVar16 = dVar17, NAN(dVar15))) &&
       (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar16 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar15)) {
      dVar16 = 1.0 / SQRT(dVar15);
      dVar7 = dVar2 * dVar16;
      dVar8 = dVar1 * dVar16;
      dVar16 = dVar17 * dVar16;
    }
    local_148 = (double)(**(code **)(*param_1 + 0x180))(param_1);
    FUN_1408066c0(local_128,&DAT_14cb78ba8,&local_148);
    lVar9 = local_100;
    lVar11 = local_118;
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
    if (local_120 != local_108) {
      fVar19 = (float)SQRT(dVar15);
      plVar14 = local_120;
      do {
        lVar13 = *(longlong *)(plVar14[2] + 0x30);
        if (lVar13 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x1c8);
          if (lVar13 == 0) {
            pdVar12 = &DAT_14c8464e0;
            dVar17 = DAT_14c8464f0;
          }
          else {
            pdVar12 = (double *)(lVar13 + 0x260);
            dVar17 = *(double *)(lVar13 + 0x270);
          }
          dVar18 = dVar17 - param_2[2];
          dVar1 = *pdVar12;
          dVar2 = pdVar12[1];
          dVar3 = dVar2 - param_2[1];
          dVar15 = dVar1 - *param_2;
          fVar20 = (float)(dVar18 * dVar7 + dVar15 * dVar16 + dVar8 * dVar3);
          if (0.0 <= fVar20) {
            dVar4 = (double)fVar20;
            local_138 = param_2[2] + dVar7 * dVar4;
            dStack_140 = param_2[1] + dVar8 * dVar4;
            local_148 = *param_2 + dVar4 * dVar16;
            dVar4 = dVar1 - local_148;
            dVar6 = dVar2 - dStack_140;
            dVar5 = dVar17 - local_138;
            pdVar12 = param_2;
            if (dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4 <=
                dVar18 * dVar18 + dVar3 * dVar3 + dVar15 * dVar15) {
              pdVar12 = &local_148;
            }
            local_138 = pdVar12[2];
            local_148 = *pdVar12;
            dStack_140 = pdVar12[1];
            local_158 = (uint)((float)SQRT((local_138 - dVar17) * (local_138 - dVar17) +
                                           (local_148 - dVar1) * (local_148 - dVar1) +
                                           (dStack_140 - dVar2) * (dStack_140 - dVar2)) / fVar19) &
                        -(uint)(0.0 < fVar19);
            local_150 = 0;
            FUN_1408067b6(plVar14[2],CONCAT71((int7)((ulonglong)local_138 >> 8),1),&local_148,
                          param_4);
          }
        }
        do {
          plVar14 = (longlong *)*plVar14;
          if (plVar14 == (longlong *)0x0) break;
          if (*(longlong *)(plVar14[2] + 0x30) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = FUN_1447210f0();
          }
        } while (lVar13 != *local_110);
      } while (plVar14 != local_108);
    }
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + -1;
    UNLOCK();
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408066c0 FUN_1408066c0 body=152 status=ok
// SIG undefined FUN_1408066c0(void)

undefined8 * FUN_1408066c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *param_3;
  local_30 = *param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  local_28 = param_2;
  FUN_14080675a(param_1 + 1,&local_30,param_1);
  LOCK();
  *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  local_30 = 0;
  local_28 = param_2;
  FUN_14080675a(param_1 + 4,&local_30,param_1);
  LOCK();
  *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + -1;
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080675a FUN_14080675a body=91 status=ok
// SIG undefined FUN_14080675a(void)

longlong * FUN_14080675a(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  LOCK();
  piVar1 = (int *)(lVar3 + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  param_1[2] = param_3;
  lVar3 = *param_1;
  while( true ) {
    if (lVar3 == 0) {
      return param_1;
    }
    plVar2 = (longlong *)param_1[2];
    if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1447210f0();
    }
    if (lVar3 == *plVar2) break;
    lVar3 = *(longlong *)*param_1;
    *param_1 = lVar3;
  }
  return param_1;
}



// FUNCTION 1408067b6 FUN_1408067b6 body=3224 status=ok
// SIG undefined FUN_1408067b6(void)

undefined8
FUN_1408067b6(longlong param_1,char param_2,double *param_3,double param_4,float param_5,
             char param_6)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  undefined8 uVar14;
  double *pdVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 unaff_R14;
  longlong *plVar18;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  char local_130;
  double local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_100 [4];
  float local_f0;
  undefined4 uStack_ec;
  ushort local_d8;
  byte local_d0;
  float local_c8;
  undefined4 uStack_c4;
  double dStack_c0;
  double local_b8;
  ushort local_b0;
  byte local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = *param_3;
  dStack_140 = param_3[1];
  local_138 = param_3[2];
  local_130 = param_2;
  if ((param_4 != 0.0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_4);
  }
  local_158 = 0;
  local_150 = param_4;
  if ((*(longlong *)(param_1 + 0x7f8) == 0) || (*(int *)(param_1 + 0x7f4) == 0)) goto LAB_14080689f;
  uVar10 = *(uint *)(param_1 + 0x7f0);
  uVar14 = 0;
  if (((int)uVar10 < 0) || (DAT_14c9647dc <= (int)uVar10)) goto LAB_1408068a1;
  lVar12 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
  if (((lVar12 != 0) && (*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x7f4))) &&
     ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) {
    if (param_2 == '\x01') {
      lVar12 = 200;
    }
    else if (param_2 == '\x04') {
      lVar12 = 0x520;
    }
    else {
      if (param_2 != '\x02') goto LAB_14080689f;
      lVar12 = 0x268;
    }
    lVar12 = lVar12 + param_1;
    if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x38) != 0)) {
      lVar16 = param_1;
      cVar9 = FUN_143d1dd94(param_1,lVar12,
                            CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_6) & 0xffffffff);
      uVar26 = (undefined4)lVar16;
      if ((cVar9 != '\0') && (dVar22 = *(double *)(param_1 + 0x30), dVar22 != param_4)) {
        if (param_6 == '\0') {
          if (((param_4 != 0.0) && (dVar22 != 0.0)) && (*(char *)(lVar12 + 0x199) != '\0')) {
            lVar16 = *(longlong *)((longlong)dVar22 + 0x1c8);
            if (lVar16 == 0) {
              uVar31 = SUB84(DAT_14c8464f0,0);
              uVar32 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              uVar26 = SUB84(DAT_14c846500,0);
              uVar27 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
              uVar33 = (undefined4)DAT_14c8464e0;
              uVar34 = DAT_14c8464e0._4_4_;
              uVar35 = (undefined4)DAT_14c8464e8;
              uVar36 = DAT_14c8464e8._4_4_;
              dVar22 = DAT_14c8464f8;
            }
            else {
              uVar31 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
              uVar32 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
              uVar33 = *(undefined4 *)(lVar16 + 0x260);
              uVar34 = *(undefined4 *)(lVar16 + 0x264);
              uVar35 = *(undefined4 *)(lVar16 + 0x268);
              uVar36 = *(undefined4 *)(lVar16 + 0x26c);
              dVar25 = *(double *)(lVar16 + 0x240);
              plVar18 = *(longlong **)(lVar16 + 0x248);
              plVar7 = *(longlong **)(lVar16 + 0x250);
              dVar23 = *(double *)(lVar16 + 600);
              pdVar13 = *(double **)(lVar16 + 0x228);
              local_128 = dVar25;
              plStack_120 = plVar18;
              local_118 = plVar7;
              uStack_110 = dVar23;
              if (pdVar13 == (double *)0x0) {
                uVar26 = 0x40;
                pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
                dVar22 = DAT_14c8463d8;
                *pdVar13 = DAT_14c8463d0;
                pdVar13[1] = dVar22;
                dVar22 = DAT_14c8463e8;
                pdVar13[2] = DAT_14c8463e0;
                pdVar13[3] = dVar22;
                dVar22 = DAT_14c846500;
                pdVar13[4] = DAT_14c8464f8;
                pdVar13[5] = dVar22;
                dVar22 = DAT_14c846508;
                pdVar13[6] = DAT_14c846508;
                *(double **)(lVar16 + 0x228) = pdVar13;
              }
              auVar5._8_4_ = (int)-(ulonglong)((double)plVar18 != pdVar13[1]);
              auVar5._0_8_ = -(ulonglong)(dVar25 != *pdVar13);
              auVar5._12_4_ = (int)(-(ulonglong)((double)plVar18 != pdVar13[1]) >> 0x20);
              iVar11 = movmskpd(SUB84(dVar22,0),auVar5);
              auVar6._8_4_ = (int)-(ulonglong)(dVar23 != pdVar13[3]);
              auVar6._0_8_ = -(ulonglong)((double)plVar7 != pdVar13[2]);
              auVar6._12_4_ = (int)(-(ulonglong)(dVar23 != pdVar13[3]) >> 0x20);
              uVar10 = movmskpd(uVar26,auVar6);
              if ((uVar10 & 0x3fffffff) != 0 || iVar11 != 0) {
                *(undefined4 *)(pdVar13 + 2) = (undefined4)local_118;
                *(undefined4 *)((longlong)pdVar13 + 0x14) = local_118._4_4_;
                *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_110;
                *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_110._4_4_;
                *pdVar13 = local_128;
                pdVar13[1] = (double)plStack_120;
                FUN_1448052ee(&local_128,&local_c8);
                pdVar13[6] = local_b8;
                pdVar13[4] = (double)CONCAT44(uStack_c4,local_c8);
                pdVar13[5] = dStack_c0;
              }
              uVar26 = SUB84(pdVar13[5],0);
              uVar27 = (undefined4)((ulonglong)pdVar13[5] >> 0x20);
              dVar22 = pdVar13[4];
            }
            dVar22 = (double)FUN_144719204(dVar22,0);
            dVar23 = (double)FUN_144719204(CONCAT44(uVar27,uVar26),0);
            dVar24 = sin(dVar22 * 0.017453292519943295);
            dVar22 = cos(dVar22 * 0.017453292519943295);
            dVar25 = sin(dVar23 * 0.017453292519943295);
            dVar23 = cos(dVar23 * 0.017453292519943295);
            dVar25 = dVar25 * dVar22;
            dVar23 = dVar23 * dVar22;
            dVar22 = dVar23 * dVar23 + dVar25 * dVar25;
            if ((dVar22 != 1.0) || (NAN(dVar22))) {
              if (dVar22 < 9.99999993922529e-09) {
                dVar23 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dVar25 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                uVar26 = SUB84(DAT_14c8464f0,0);
                uVar27 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              }
              else {
                dVar25 = dVar25 * (1.0 / SQRT(dVar22));
                dVar23 = dVar23 * (1.0 / SQRT(dVar22));
                uVar26 = 0;
                uVar27 = 0;
              }
            }
            else {
              uVar4 = -(ulonglong)(dVar24 == 0.0) & (ulonglong)dVar24;
              uVar26 = (undefined4)uVar4;
              uVar27 = (undefined4)(uVar4 >> 0x20);
            }
            lVar16 = *(longlong *)((longlong)param_4 + 0x1c8);
            if (lVar16 == 0) {
              pdVar13 = (double *)&DAT_14c8464e0;
              dVar22 = DAT_14c8464f0;
            }
            else {
              pdVar13 = (double *)(lVar16 + 0x260);
              dVar22 = *(double *)(lVar16 + 0x270);
            }
            dVar28 = *pdVar13 - (double)CONCAT44(uVar34,uVar33);
            dVar24 = pdVar13[1] - (double)CONCAT44(uVar36,uVar35);
            dVar29 = dVar28 * dVar28 + dVar24 * dVar24;
            if ((dVar29 != 1.0) || (NAN(dVar29))) {
              if (dVar29 < 9.99999993922529e-09) {
                dVar28 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dVar24 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                dVar22 = DAT_14c8464f0;
              }
              else {
                dVar24 = dVar24 * (1.0 / SQRT(dVar29));
                dVar28 = dVar28 * (1.0 / SQRT(dVar29));
                dVar22 = 0.0;
              }
            }
            else {
              dVar22 = dVar22 - (double)CONCAT44(uVar32,uVar31);
              dVar22 = (double)(-(ulonglong)(dVar22 == 0.0) & (ulonglong)dVar22);
            }
            fVar21 = (float)(dVar25 * dVar24 + dVar23 * dVar28 +
                            (double)CONCAT44(uVar27,uVar26) * dVar22);
            fVar30 = fVar21;
            if (1.0 <= fVar21) {
              fVar30 = 1.0;
            }
            fVar30 = acosf((float)(-(uint)(fVar21 < -1.0) & 0xbf800000 |
                                  ~-(uint)(fVar21 < -1.0) & (uint)fVar30));
            if (*(float *)(lVar12 + 0x188) < fVar30 * 57.295776) goto LAB_14080689f;
          }
          if (param_2 == '\x01') {
            uVar14 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x28))();
            cVar9 = FUN_1408a20f6(uVar14,3,param_4,0x3f800000);
            if (cVar9 == '\0') goto LAB_14080689f;
          }
          lVar16 = *(longlong *)(param_1 + 0x30);
          if (*(char *)(lVar12 + 0x19a) == '\x01') {
            if (lVar16 != 0) {
              lVar2 = *(longlong *)(lVar16 + 0x1c8);
              if (lVar2 == 0) {
                pdVar13 = (double *)&DAT_14c8464e0;
                dVar22 = DAT_14c8464f0;
              }
              else {
                pdVar13 = (double *)(lVar2 + 0x260);
                dVar22 = *(double *)(lVar2 + 0x270);
              }
              if (*(float *)(lVar12 + 0x18c) * *(float *)(lVar12 + 0x18c) <
                  (float)((dVar22 - local_138) * (dVar22 - local_138) +
                         (*pdVar13 - local_148) * (*pdVar13 - local_148) +
                         (pdVar13[1] - dStack_140) * (pdVar13[1] - dStack_140))) goto LAB_14080689f;
              goto LAB_140806ab2;
            }
          }
          else {
LAB_140806ab2:
            if ((*(char *)(lVar12 + 0x19b) == '\x01') && (lVar16 != 0)) {
              if (param_4 != 0.0) {
                lVar16 = *(longlong *)(lVar16 + 0x1c8);
                if (lVar16 == 0) {
                  pdVar13 = (double *)&DAT_14c8464e0;
                  dVar22 = DAT_14c8464f0;
                }
                else {
                  pdVar13 = (double *)(lVar16 + 0x260);
                  dVar22 = *(double *)(lVar16 + 0x270);
                }
                lVar2 = *(longlong *)((longlong)param_4 + 0x1c8);
                if (lVar2 == 0) {
                  pdVar15 = (double *)&DAT_14c8464e0;
                  dVar25 = DAT_14c8464f0;
                }
                else {
                  pdVar15 = (double *)(lVar2 + 0x260);
                  dVar25 = *(double *)(lVar2 + 0x270);
                }
                if ((float)((dVar22 - dVar25) * (dVar22 - dVar25) +
                           (*pdVar13 - *pdVar15) * (*pdVar13 - *pdVar15) +
                           (pdVar13[1] - pdVar15[1]) * (pdVar13[1] - pdVar15[1])) <
                    *(float *)(lVar12 + 400) * *(float *)(lVar12 + 400)) goto LAB_14080689f;
                if (*(char *)(lVar12 + 0x19c) == '\x01') goto LAB_140807296;
              }
            }
            else if ((param_4 != 0.0) && ((*(char *)(lVar12 + 0x19c) != '\0' && (lVar16 != 0)))) {
              lVar16 = *(longlong *)(lVar16 + 0x1c8);
LAB_140807296:
              if (lVar16 == 0) {
                pdVar13 = (double *)&DAT_14c8464e0;
                dVar22 = DAT_14c8464f0;
              }
              else {
                pdVar13 = (double *)(lVar16 + 0x260);
                dVar22 = *(double *)(lVar16 + 0x270);
              }
              lVar16 = *(longlong *)((longlong)param_4 + 0x1c8);
              if (lVar16 == 0) {
                pdVar15 = (double *)&DAT_14c8464e0;
                dVar25 = DAT_14c8464f0;
              }
              else {
                pdVar15 = (double *)(lVar16 + 0x260);
                dVar25 = *(double *)(lVar16 + 0x270);
              }
              if (*(float *)(lVar12 + 0x194) * *(float *)(lVar12 + 0x194) <
                  (float)((dVar22 - dVar25) * (dVar22 - dVar25) +
                         (*pdVar13 - *pdVar15) * (*pdVar13 - *pdVar15) +
                         (pdVar13[1] - pdVar15[1]) * (pdVar13[1] - pdVar15[1]))) goto LAB_14080689f;
            }
          }
          local_128 = (double)((ulonglong)local_128 & 0xffffffffffffff00);
          local_100[0] = 0;
          FUN_1456bb102(&local_128);
          pfVar17 = &local_f0;
          FUN_1447c3578(lVar12 + 0x118,pfVar17,&local_128);
          if (local_d0 == 3) {
            uVar10 = 3;
            fVar30 = local_f0;
          }
          else {
            pfVar19 = &local_c8;
            FUN_1400b56fe(pfVar19,&local_f0,3);
            fVar30 = 0.0;
            if (local_a8 != 0) {
              fVar30 = local_c8;
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
            if (pcVar3 != (code *)0x0) {
              if (0x18 < local_b0) {
                pfVar19 = (float *)CONCAT44(uStack_c4,local_c8);
              }
              (*pcVar3)(pfVar19);
            }
            if (0x18 < local_b0) {
              FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
            }
            uVar10 = (uint)local_d0;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar10 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_d8) {
              pfVar17 = (float *)CONCAT44(uStack_ec,local_f0);
            }
            (*pcVar3)(pfVar17);
          }
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
          if (0x18 < local_d8) {
            FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          FUN_1448173f8(local_100);
          if ((local_128._0_1_ == '\x03') && (local_118 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_118 + 0x10))();
            }
          }
          if ((fVar30 < 1.0) && (uVar10 = rand(), fVar30 < (float)(uVar10 & 0x7fff) / 32767.0))
          goto LAB_14080689f;
          dVar22 = local_150;
          if ((((*(longlong **)(param_1 + 0x820) != (longlong *)0x0) &&
               ((((*(int *)(param_1 + 0x81c) != 0 &&
                  (uVar10 = *(uint *)(param_1 + 0x818), -1 < (int)uVar10)) &&
                 ((int)uVar10 < DAT_14c9647dc)) &&
                ((lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                 lVar16 != 0 && (*(int *)(lVar16 + 0x10) == *(int *)(param_1 + 0x81c))))))) &&
              (local_150 != 0.0)) && ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
            uVar14 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x10))();
            iVar11 = FUN_14486116a(uVar14,dVar22);
            if (iVar11 != 2) goto LAB_14080689f;
          }
        }
        if (*(char *)(lVar12 + 0x110) == '\x01') {
          lVar16 = lVar12 + 0x58;
LAB_140806a2e:
          if ((lVar16 != 0) && (*(char *)(lVar16 + 0x78) != '\x01')) {
            if (*(longlong *)(param_1 + 0x30) == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = FUN_1447210f0();
            }
            FUN_140a702f6(&local_128,uVar14);
            if (plStack_120 != (longlong *)0x0) {
              iVar11 = (int)plStack_120[1];
              do {
                if (iVar11 == 0) {
                  plVar18 = (longlong *)0x0;
                  break;
                }
                LOCK();
                iVar8 = (int)plStack_120[1];
                bVar20 = iVar11 == iVar8;
                if (bVar20) {
                  *(int *)(plStack_120 + 1) = iVar11 + 1;
                  iVar8 = iVar11;
                }
                iVar11 = iVar8;
                UNLOCK();
                plVar18 = plStack_120;
              } while (!bVar20);
              LOCK();
              piVar1 = (int *)((longlong)plStack_120 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_120 + 0x10))();
              }
              if (plVar18 != (longlong *)0x0) {
                if ((local_128 != 0.0) &&
                   (cVar9 = FUN_140a70784(local_128,lVar16,*(undefined8 *)(param_1 + 0x30),0),
                   cVar9 == '\0')) {
                  LOCK();
                  plVar7 = plVar18 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*plVar18)(plVar18);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar18 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                    }
                  }
                  goto LAB_14080689f;
                }
                LOCK();
                plVar7 = plVar18 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar18 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
            }
          }
        }
        else {
          lVar16 = *(longlong *)(param_1 + 0xc0);
          if ((lVar16 != 0) && (*(char *)(lVar16 + 0x6e0) == '\x01')) {
            lVar16 = lVar16 + 0x628;
            goto LAB_140806a2e;
          }
        }
        fVar30 = 0.0;
        if (*(char *)(lVar12 + 0x198) == '\0') {
          local_128 = (double)((ulonglong)local_128 & 0xffffffffffffff00);
          local_100[0] = 0;
          FUN_1456bb102(&local_128,*(undefined8 *)(param_1 + 0x30));
          pfVar17 = &local_f0;
          FUN_1447c3578(lVar12 + 0x150,pfVar17,&local_128);
          if (local_d0 == 3) {
            uVar10 = 3;
            fVar21 = local_f0;
          }
          else {
            pfVar19 = &local_c8;
            FUN_1400b56fe(pfVar19,&local_f0,3);
            fVar21 = 0.0;
            if (local_a8 != 0) {
              fVar21 = local_c8;
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
            if (pcVar3 != (code *)0x0) {
              if (0x18 < local_b0) {
                pfVar19 = (float *)CONCAT44(uStack_c4,local_c8);
              }
              (*pcVar3)(pfVar19);
            }
            if (0x18 < local_b0) {
              FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
            }
            uVar10 = (uint)local_d0;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar10 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_d8) {
              pfVar17 = (float *)CONCAT44(uStack_ec,local_f0);
            }
            (*pcVar3)(pfVar17);
          }
          if (0x18 < local_d8) {
            FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
          }
          FUN_1448173f8(local_100);
          if ((local_128._0_1_ == '\x03') && (local_118 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_118 + 0x10))();
            }
          }
          fVar30 = 0.0;
          if (0.0 <= fVar21 + param_5) {
            fVar30 = fVar21 + param_5;
          }
        }
        uVar14 = FUN_143d1d8ae(param_1,lVar12,&local_158,fVar30);
        goto LAB_1408068a1;
      }
    }
  }
LAB_14080689f:
  uVar14 = 0;
LAB_1408068a1:
  if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 140807450 FUN_140807450 body=2364 status=ok
// SIG undefined FUN_140807450(void)

undefined2 **
FUN_140807450(longlong param_1,undefined2 **param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar8 = (undefined8 *)(param_1 + 0x90);
  puVar9 = &DAT_149dfb77a;
  puVar10 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x98) != 0) {
    puVar10 = (undefined2 *)*puVar8;
  }
  local_88 = 1;
  local_80 = param_4;
  FUN_140807d8e(param_3,param_2,L"{ENGINE}",puVar10);
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xb8) != 0) {
    puVar9 = (undefined2 *)*puVar6;
  }
  local_88 = 1;
  FUN_140807d8e(param_2,&local_58,L"{PROJECT}",puVar9);
  if (&local_58 == param_2) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
  puVar1 = (undefined8 *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x108) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*puVar1;
  }
  local_88 = 1;
  FUN_140807d8e(param_2,&local_58,L"{RESTRICTEDPROJECT_NFL}",puVar10);
  if (&local_58 == param_2) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
  puVar2 = (undefined8 *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x118) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*puVar2;
  }
  local_88 = 1;
  FUN_140807d8e(param_2,&local_58,L"{RESTRICTEDPROJECT_NR}",puVar10);
  if (&local_58 == param_2) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
  puVar3 = (undefined8 *)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0xf8) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*puVar3;
  }
  local_88 = 1;
  FUN_140807d8e(param_2,&local_58,L"{RESTRICTEDPROJECT_LA}",puVar10);
  if (&local_58 == param_2) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
  cVar5 = FUN_140807eae(puVar6,puVar1);
  if (cVar5 == '\0') {
    cVar5 = FUN_140807eae(puVar6,puVar2);
    if (cVar5 != '\0') {
      local_58 = (undefined2 *)0x0;
      local_50 = *(int *)(param_1 + 0xb8);
      lVar7 = (longlong)local_50;
      pvVar4 = *(void **)(param_1 + 0xb0);
      puVar8 = puVar2;
      if (lVar7 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar4,lVar7 * 2);
      }
      goto LAB_140807b56;
    }
    cVar5 = FUN_140807eae(puVar6,puVar3);
    if (cVar5 == '\0') {
      cVar5 = FUN_140807eae(puVar6,puVar8);
      if (cVar5 == '\0') {
        local_88 = 1;
        FUN_140807d8e(param_2,&local_58,L"{OPT_SUBDIR}",&DAT_149dfb77a);
        puVar8 = local_80;
        if (&local_58 == param_2) {
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *param_2 = local_58;
          local_58 = (undefined2 *)0x0;
          *(int *)(param_2 + 1) = local_50;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
        }
        goto LAB_1408076fa;
      }
      local_58 = (undefined2 *)0x0;
      local_50 = *(int *)(param_1 + 0xb8);
      lVar7 = (longlong)local_50;
      pvVar4 = *(void **)(param_1 + 0xb0);
      if (lVar7 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar4,lVar7 * 2);
      }
      goto LAB_140807b56;
    }
    local_58 = (undefined2 *)0x0;
    local_50 = *(int *)(param_1 + 0xb8);
    lVar7 = (longlong)local_50;
    pvVar4 = *(void **)(param_1 + 0xb0);
    if (lVar7 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar4,lVar7 * 2);
    }
    FUN_1449b8608(&local_68,puVar3,&DAT_149e065c6);
    puVar10 = local_68;
    if ((int)local_60 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_14107002a(&local_58,puVar10);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1449b8608(&local_78,&local_58,&DAT_149e065c6);
    puVar10 = local_78;
    if (local_70 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    local_88 = 1;
    FUN_140807d8e(param_2,&local_68,L"{OPT_SUBDIR}",puVar10);
    if (&local_68 == param_2) goto LAB_140807d41;
LAB_140807bd9:
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_68;
    local_68 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = (int)local_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
    local_60 = 0;
  }
  else {
    local_58 = (undefined2 *)0x0;
    local_50 = *(int *)(param_1 + 0xb8);
    lVar7 = (longlong)local_50;
    pvVar4 = *(void **)(param_1 + 0xb0);
    puVar8 = puVar1;
    if (lVar7 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar4,lVar7 * 2);
    }
LAB_140807b56:
    FUN_1449b8608(&local_68,puVar8,&DAT_149e065c6);
    puVar10 = local_68;
    if ((int)local_60 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_14107002a(&local_58,puVar10);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1449b8608(&local_78,&local_58,&DAT_149e065c6);
    puVar10 = local_78;
    if (local_70 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    local_88 = 1;
    FUN_140807d8e(param_2,&local_68,L"{OPT_SUBDIR}",puVar10);
    if (&local_68 != param_2) goto LAB_140807bd9;
LAB_140807d41:
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar8 = local_80;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
    puVar8 = local_80;
  }
LAB_1408076fa:
  if (*(int *)(puVar8 + 1) - 2U < 0x7fffffff) {
    puVar6 = (undefined8 *)FUN_14080800c(param_1,puVar8);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar6;
    }
    local_88 = 1;
    FUN_140807d8e(param_2,&local_58,L"{EXTENGINE}",puVar10);
    if (&local_58 == param_2) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = (undefined2 *)0x0;
      *(int *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
    lVar7 = FUN_14080800c(param_1,puVar8);
    if (*(int *)(lVar7 + 0x18) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(lVar7 + 0x10);
    }
    local_88 = 1;
    FUN_140807d8e(param_2,&local_58,L"{EXTPROJECT}",puVar10);
    if (&local_58 == param_2) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = (undefined2 *)0x0;
      *(int *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
    if (*(int *)(puVar8 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar8;
    }
    local_88 = 1;
    FUN_140807d8e(param_2,&local_58,L"{PLATFORM}",puVar10);
    if (&local_58 == param_2) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = (undefined2 *)0x0;
      *(int *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
  }
  if (*(char *)(param_1 + 0x187) == '\x01') {
    if (*(int *)(param_1 + 200) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0xc0);
    }
    local_88 = 1;
    FUN_140807d8e(param_2,&local_58,L"{PLUGIN}",puVar10);
    if (&local_58 == param_2) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = (undefined2 *)0x0;
      *(int *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
    lVar7 = FUN_14080800c(param_1,puVar8);
    if (*(int *)(lVar7 + 0x28) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(lVar7 + 0x20);
    }
    local_88 = 1;
    FUN_140807d8e(param_2,&local_58,L"{EXTPLUGIN}",puVar10);
    if (&local_58 == param_2) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      *(int *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140807d8e FUN_140807d8e body=287 status=ok
// SIG undefined FUN_140807d8e(void)

undefined8 *
FUN_140807d8e(undefined8 *param_1,undefined8 *param_2,wchar_t *param_3,wchar_t *param_4,int param_5)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  void *_Src;
  wchar_t *_Str;
  
  iVar1 = *(int *)(param_1 + 1);
  if ((param_3 == (wchar_t *)0x0) || (iVar1 < 2)) {
    *param_2 = 0;
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  else {
    if (*param_3 != L'\0') {
      _Str = (wchar_t *)*param_1;
      sVar2 = wcslen(param_3);
      sVar3 = wcslen(param_4);
      *param_2 = 0;
      param_2[1] = 0;
      while( true ) {
        if (param_5 == 1) {
          pwVar4 = (wchar_t *)FUN_1448324a4();
        }
        else {
          pwVar4 = wcsstr(_Str,param_3);
        }
        if (pwVar4 == (wchar_t *)0x0) break;
        FUN_1400020e8(param_2,_Str,(ulonglong)((longlong)pwVar4 - (longlong)_Str) >> 1);
        FUN_1400020e8(param_2,param_4,sVar3 & 0xffffffff);
        _Str = pwVar4 + (int)sVar2;
      }
      sVar2 = wcslen(_Str);
      FUN_1400020e8(param_2,_Str,sVar2 & 0xffffffff);
      return param_2;
    }
    *param_2 = 0;
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
  }
  FUN_1446dd670(param_2,iVar1,0);
  memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  return param_2;
}



// FUNCTION 140807eae FUN_140807eae body=349 status=ok
// SIG undefined FUN_140807eae(void)

ulonglong FUN_140807eae(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  int iVar7;
  undefined2 *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  undefined7 uVar6;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1401aea18(&local_48,param_1);
  FUN_1401aea18(&local_58,param_2);
  cVar1 = FUN_144a38768(&local_58,&DAT_149e065c6,1,1);
  if (cVar1 != '\0') {
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    FUN_145825fe6(&local_58,iVar2 + -1);
  }
  iVar2 = local_50 + -1;
  if (local_50 == 0) {
    iVar2 = 0;
  }
  if (local_50 != 0 && local_50 + -1 != 0) {
    puVar8 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar8 = local_48;
    }
    param_2 = 0;
    lVar3 = (longlong)iVar2;
    while( true ) {
      uVar9 = *(ushort *)((longlong)puVar8 + param_2);
      uVar5 = (ulonglong)uVar9;
      uVar4 = *(ushort *)(local_58 + param_2);
      if (uVar9 != uVar4) break;
      if (uVar9 == 0) goto LAB_140807f91;
LAB_140807f5c:
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) goto LAB_140807f91;
      param_2 = param_2 + 2;
    }
    if ((uVar4 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar10 = (ulonglong)uVar4;
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_140807f5c;
    }
    if (uVar9 != uVar4) {
      uVar5 = 0;
      goto LAB_140807fab;
    }
  }
LAB_140807f91:
  iVar7 = local_40 + -1;
  if (local_40 == 0) {
    iVar7 = 0;
  }
  uVar6 = (undefined7)((ulonglong)param_2 >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (iVar7 != iVar2) {
    uVar5 = CONCAT71(uVar6,local_48[iVar2] == 0x2f);
  }
LAB_140807fab:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080800c FUN_14080800c body=2796 status=ok
// SIG undefined FUN_14080800c(void)

longlong FUN_14080800c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  ulonglong uVar22;
  size_t sVar23;
  byte bVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined2 *puVar32;
  int iVar33;
  longlong lVar34;
  wchar_t *pwVar35;
  undefined2 *puVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  int iVar40;
  longlong lVar41;
  bool bVar42;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  int local_a0;
  uint local_9c;
  uint *local_98;
  longlong local_90;
  wchar_t *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x120);
  iVar21 = *(int *)(param_2 + 1);
  uVar22 = 0;
  iVar25 = iVar21 + -1;
  if (iVar21 == 0) {
    iVar25 = 0;
  }
  if (0 < iVar25) {
    if (iVar21 == 0) {
      puVar36 = &DAT_149dfb77a;
    }
    else {
      puVar36 = (undefined2 *)*param_2;
    }
    lVar34 = 0;
    uVar22 = 0;
    do {
      uVar31 = ((uint)(0x19 < (ushort)puVar36[lVar34] - 0x61) * 0x20 + (uint)(ushort)puVar36[lVar34]
               ) - 0x20;
      uVar38 = (uint)(uVar22 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar22 ^ uVar31) & 0xff) * 4);
      uVar22 = (ulonglong)
               (uVar38 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar38 & 0xff ^ uVar31 >> 8 & 0xff) * 4));
      lVar34 = lVar34 + 1;
    } while (iVar25 != (int)lVar34);
  }
  iVar21 = FUN_140808afa(plVar1,uVar22,param_2);
  if (iVar21 != -1) {
    if (*plVar1 + (longlong)iVar21 * 0x48 != 0) {
      lVar34 = *plVar1 + (longlong)iVar21 * 0x48;
      goto LAB_1408080e6;
    }
  }
  FUN_140056680(&local_58,&DAT_149e2b888);
  if ((*(char *)(param_1 + 0x187) == '\x01') && ((longlong)*(int *)(param_1 + 0xd8) != 0)) {
    lVar34 = *(longlong *)(param_1 + 0xd0);
    lVar41 = (longlong)*(int *)(param_1 + 0xd8) << 4;
    do {
      pwVar35 = L"";
      if (*(int *)(param_2 + 1) != 0) {
        pwVar35 = (wchar_t *)*param_2;
      }
      FUN_140002266(&local_88,L"/%s/",pwVar35);
      pwVar35 = local_88;
      if ((int)local_80 == 0) {
        pwVar35 = L"";
      }
      if (pwVar35 == (wchar_t *)0x0) {
        bVar42 = false;
      }
      else {
        sVar23 = wcslen(pwVar35);
        local_b0 = 0xffffffff;
        local_b8 = (undefined2 *)((ulonglong)local_b8 & 0xffffffff00000000);
        iVar21 = FUN_1447ee042(lVar34,pwVar35,sVar23 & 0xffffffff,1);
        bVar42 = iVar21 != -1;
      }
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar42) {
        FUN_144a787a6(&local_58,lVar34);
        break;
      }
      lVar34 = lVar34 + 0x10;
      lVar41 = lVar41 + -0x10;
    } while (lVar41 != 0);
  }
  puVar32 = &DAT_149dfb77a;
  puVar36 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar36 = (undefined2 *)*param_2;
  }
  local_b8 = (undefined2 *)0x0;
  FUN_140808bbe(&local_88,param_1 + 0x90,0,puVar36);
  local_b8 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0xb8) != 0) {
    local_b8 = *(undefined2 **)(param_1 + 0xb0);
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar32 = (undefined2 *)*param_2;
  }
  FUN_140808bbe(&local_78,(undefined8 *)(param_1 + 0xb0),4,puVar32);
  pvVar5 = local_58;
  local_68 = (void *)0x0;
  local_60 = CONCAT44(local_60._4_4_,local_50);
  if ((longlong)(int)local_50 == 0) {
    local_60 = (ulonglong)local_50;
  }
  else {
    FUN_1446dd670(&local_68,local_50,0);
    memcpy(local_68,pvVar5,(longlong)(int)local_50 * 2);
  }
  if (*(int *)(param_1 + 0x154) == 0) {
    uVar31 = *(uint *)(param_1 + 0x128);
    uVar22 = (ulonglong)uVar31;
    *(uint *)(param_1 + 0x128) = uVar31 + 1;
    if (*(uint *)(param_1 + 300) == uVar31) {
      FUN_14021b4e8(plVar1,uVar31);
    }
    iVar21 = *(int *)(param_1 + 0x148);
    if (iVar21 == 0) {
      iVar25 = -1;
    }
    else {
      iVar25 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar25 = iVar21 + -1;
      }
      iVar25 = iVar25 >> 5;
    }
    lVar41 = param_1 + 0x130;
    iVar33 = iVar21 + 1;
    iVar40 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar40 = iVar21;
    }
    if (iVar40 >> 5 == iVar25) {
      *(int *)(param_1 + 0x148) = iVar33;
    }
    else {
      if (*(int *)(param_1 + 0x14c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar33 = 0x80;
          iVar25 = iVar21;
        }
        else {
          uVar38 = iVar21 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x14c) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar38) {
              uVar26 = uVar38;
            }
          }
          else {
            uVar26 = (uVar38 * 3 >> 3) + uVar38 + 0x10;
          }
          uVar39 = FUN_144a3809e(uVar26 << 2,0);
          iVar25 = (int)(uVar39 >> 2);
          iVar33 = -0x20;
          if ((int)uVar38 <= iVar25) {
            iVar33 = iVar25 << 5;
          }
          iVar25 = *(int *)(param_1 + 0x148);
        }
        *(int *)(param_1 + 0x14c) = iVar33;
        FUN_1446efbd8(lVar41,iVar25);
        iVar33 = *(int *)(param_1 + 0x148) + 1;
      }
      iVar25 = iVar33 + 0x1f;
      if (-1 < iVar33) {
        iVar25 = iVar33;
      }
      *(int *)(param_1 + 0x148) = iVar33;
      if (iVar33 % 0x20 != 0) {
        lVar34 = *(longlong *)(param_1 + 0x140);
        if (*(longlong *)(param_1 + 0x140) == 0) {
          lVar34 = lVar41;
        }
        bVar24 = -(char)(iVar33 % 0x20);
        *(uint *)(lVar34 + (longlong)(iVar25 >> 5) * 4) =
             (uint)(*(int *)(lVar34 + (longlong)(iVar25 >> 5) * 4) << (bVar24 & 0x1f)) >>
             (bVar24 & 0x1f);
      }
    }
    lVar34 = (longlong)(int)uVar31;
    if (*(longlong *)(param_1 + 0x140) != 0) {
      lVar41 = *(longlong *)(param_1 + 0x140);
    }
    bVar24 = (byte)iVar21 & 0x1f;
    puVar27 = (uint *)(lVar41 + (longlong)(iVar40 >> 5) * 4);
    *puVar27 = *puVar27 & (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24);
  }
  else {
    uVar22 = (ulonglong)*(uint *)(param_1 + 0x150);
    lVar34 = (longlong)(int)*(uint *)(param_1 + 0x150);
    iVar21 = *(int *)(*(longlong *)(param_1 + 0x120) + 4 + lVar34 * 0x48);
    *(int *)(param_1 + 0x150) = iVar21;
    iVar25 = *(int *)(param_1 + 0x154) + -1;
    *(int *)(param_1 + 0x154) = iVar25;
    if (iVar25 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar21 * 0x48) = 0xffffffff;
    }
  }
  local_98 = (uint *)(param_1 + 0x130);
  iVar21 = (int)uVar22;
  puVar27 = *(uint **)(param_1 + 0x140);
  if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
    puVar27 = local_98;
  }
  iVar25 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar25 = iVar21;
  }
  puVar27[iVar25 >> 5] = puVar27[iVar25 >> 5] | 1 << ((byte)uVar22 & 0x1f);
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + lVar34 * 0x48);
  *puVar3 = 0;
  iVar21 = *(int *)(param_2 + 1);
  pvVar5 = (void *)*param_2;
  *(int *)(puVar3 + 1) = iVar21;
  if ((longlong)iVar21 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar3,iVar21,0);
    memcpy((void *)*puVar3,pvVar5,(longlong)iVar21 * 2);
  }
  uVar39 = 0;
  puVar3[2] = 0;
  puVar3[2] = local_88;
  local_88 = (wchar_t *)0x0;
  *(int *)(puVar3 + 3) = (int)local_80;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = local_80._4_4_;
  local_80 = 0;
  puVar3[4] = 0;
  puVar3[4] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar3 + 5) = (undefined4)local_70;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = local_70._4_4_;
  local_70 = 0;
  puVar3[6] = 0;
  puVar3[6] = local_68;
  local_68 = (void *)0x0;
  *(undefined4 *)(puVar3 + 7) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = local_60._4_4_;
  local_60 = 0;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  iVar21 = *(int *)(puVar3 + 1);
  iVar25 = iVar21 + -1;
  if (iVar21 == 0) {
    iVar25 = 0;
  }
  if (0 < iVar25) {
    if (iVar21 == 0) {
      puVar36 = &DAT_149dfb77a;
    }
    else {
      puVar36 = (undefined2 *)*puVar3;
    }
    lVar34 = 0;
    uVar39 = 0;
    do {
      uVar31 = ((uint)(0x19 < (ushort)puVar36[lVar34] - 0x61) * 0x20 + (uint)(ushort)puVar36[lVar34]
               ) - 0x20;
      uVar38 = (uint)(uVar39 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar39 ^ uVar31) & 0xff) * 4);
      uVar39 = (ulonglong)
               (uVar38 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar38 & 0xff ^ uVar31 >> 8 & 0xff) * 4));
      lVar34 = lVar34 + 1;
    } while (iVar25 != (int)lVar34);
  }
  uVar38 = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x154);
  uVar31 = 1;
  local_a8 = uVar22;
  if (uVar38 == 1) {
LAB_14080844d:
    iVar21 = (int)local_a8;
    if (((int)uVar38 < 1) || ((int)uVar31 <= *(int *)(param_1 + 0x168))) {
      uVar31 = *(int *)(param_1 + 0x168) - 1U & (uint)uVar39;
      *(uint *)((longlong)puVar3 + 0x44) = uVar31;
      lVar34 = *(longlong *)(param_1 + 0x160);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        lVar34 = param_1 + 0x158;
      }
      *(undefined4 *)(puVar3 + 8) =
           *(undefined4 *)
            (lVar34 + ((longlong)*(int *)(param_1 + 0x168) - 1U & (longlong)(int)uVar31) * 4);
      lVar34 = *(longlong *)(param_1 + 0x160);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        lVar34 = param_1 + 0x158;
      }
      *(int *)(lVar34 + ((longlong)*(int *)(param_1 + 0x168) - 1U & (longlong)(int)uVar31) * 4) =
           iVar21;
    }
    else {
      *(uint *)(param_1 + 0x168) = uVar31;
      plVar2 = (longlong *)(param_1 + 0x160);
      if (*(longlong *)(param_1 + 0x160) != 0) {
        FUN_1446efa72(plVar2,0,0,4);
        uVar31 = *(uint *)(param_1 + 0x168);
      }
      lVar34 = param_1 + 0x158;
      if (uVar31 == 1) {
        if (*plVar2 != 0) {
          FUN_1446efa72(plVar2,0,0,4);
        }
LAB_14080849e:
        uVar38 = 0;
        do {
          lVar41 = *(longlong *)(param_1 + 0x160);
          if (*(longlong *)(param_1 + 0x160) == 0) {
            lVar41 = lVar34;
          }
          *(undefined4 *)
           (lVar41 + (ulonglong)(*(int *)(param_1 + 0x168) + 0x7fffffffU & uVar38) * 4) = 0xffffffff
          ;
          uVar38 = uVar38 + 1;
        } while (uVar31 != uVar38);
      }
      else {
        if (uVar31 == 0) goto LAB_140808781;
        FUN_1446efa72(plVar2,0,uVar31,4);
        if (0 < (int)uVar31) goto LAB_14080849e;
      }
      iVar25 = *(int *)(param_1 + 0x148);
      if (iVar25 == 0) {
        uVar22 = 0;
        uVar39 = 1;
        iVar40 = 0;
        iVar33 = 0;
      }
      else {
        puVar27 = *(uint **)(param_1 + 0x140);
        if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
          puVar27 = local_98;
        }
        uVar31 = *puVar27;
        if (uVar31 == 0) {
          iVar33 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar33 = iVar25 + -1;
          }
          uVar22 = 0;
          uVar39 = (ulonglong)(uint)(iVar33 >> 5);
          if (iVar33 >> 5 < 1) {
            uVar39 = uVar22;
          }
          iVar33 = 0;
          do {
            if (uVar39 == uVar22) goto LAB_140808781;
            iVar33 = iVar33 + 0x20;
            uVar31 = puVar27[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar31 == 0);
        }
        else {
          uVar22 = 0;
          iVar33 = 0;
        }
        uVar39 = (ulonglong)(-uVar31 & uVar31);
        uVar30 = uVar39 * 2 + 1;
        lVar41 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        iVar40 = (iVar33 - ((uint)lVar41 ^ 0x3f)) + 0x3e;
        if (iVar25 <= iVar40) {
          iVar40 = iVar25;
        }
      }
      if (iVar40 < iVar25) {
        uVar31 = 0xffffffff;
        do {
          local_9c = uVar31;
          local_a0 = iVar33;
          puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar40 * 0x48);
          iVar21 = *(int *)(puVar3 + 1);
          iVar25 = iVar21 + -1;
          if (iVar21 == 0) {
            iVar25 = 0;
          }
          uVar31 = 0;
          if (0 < iVar25) {
            puVar36 = &DAT_149dfb77a;
            if (iVar21 != 0) {
              puVar36 = (undefined2 *)*puVar3;
            }
            lVar41 = 0;
            uVar31 = 0;
            do {
              uVar38 = ((uint)(ushort)puVar36[lVar41] +
                       (uint)(0x19 < (ushort)puVar36[lVar41] - 0x61) * 0x20) - 0x20;
              uVar31 = uVar31 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar31 ^ uVar38) & 0xff) * 4);
              uVar31 = uVar31 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar31 & 0xff ^ uVar38 >> 8 & 0xff) * 4);
              lVar41 = lVar41 + 1;
            } while (iVar25 != (int)lVar41);
          }
          uVar30 = (longlong)(int)uVar31 & (longlong)*(int *)(param_1 + 0x168) - 1U;
          iVar21 = (int)uVar30;
          *(int *)((longlong)puVar3 + 0x44) = iVar21;
          lVar41 = *(longlong *)(param_1 + 0x160);
          if (*(longlong *)(param_1 + 0x160) == 0) {
            lVar41 = lVar34;
          }
          *(undefined4 *)(puVar3 + 8) =
               *(undefined4 *)(lVar41 + ((longlong)*(int *)(param_1 + 0x168) - 1U & uVar30) * 4);
          lVar41 = *(longlong *)(param_1 + 0x160);
          if (*(longlong *)(param_1 + 0x160) == 0) {
            lVar41 = lVar34;
          }
          *(int *)(lVar41 + ((longlong)iVar21 & (longlong)*(int *)(param_1 + 0x168) - 1U) * 4) =
               iVar40;
          uVar31 = local_9c & ~(uint)uVar39;
          puVar27 = *(uint **)(param_1 + 0x140);
          if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
            puVar27 = local_98;
          }
          iVar25 = *(int *)(param_1 + 0x148);
          iVar40 = (int)uVar22;
          lVar41 = (longlong)iVar40;
          uVar38 = puVar27[lVar41] & uVar31;
          iVar21 = (int)local_a8;
          iVar33 = local_a0;
          local_90 = lVar34;
          if (uVar38 == 0) {
            iVar28 = iVar25 + 0x1e;
            if (-1 < iVar25 + -1) {
              iVar28 = iVar25 + -1;
            }
            iVar28 = iVar28 >> 5;
            iVar29 = iVar28;
            if (iVar28 < iVar40) {
              iVar29 = iVar40;
            }
            if (iVar28 <= iVar40) break;
            lVar37 = 0;
            while( true ) {
              iVar33 = iVar33 + 0x20;
              uVar38 = puVar27[lVar41 + lVar37 + 1];
              if (uVar38 != 0) break;
              lVar37 = lVar37 + 1;
              if (iVar29 - lVar41 == lVar37) goto LAB_140808781;
            }
            uVar22 = (ulonglong)(iVar40 + (int)lVar37 + 1);
            uVar31 = 0xffffffff;
          }
          uVar39 = (ulonglong)(-uVar38 & uVar38);
          uVar30 = uVar39 * 2 + 1;
          lVar41 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar41 == 0; lVar41 = lVar41 + -1) {
            }
          }
          iVar40 = (iVar33 - ((uint)lVar41 ^ 0x3f)) + 0x3e;
        } while (iVar40 < iVar25);
      }
    }
  }
  else {
    iVar21 = FUN_140808afa(plVar1,uVar39,puVar3);
    if (iVar21 == -1) {
      if (3 < uVar38) {
        uVar22 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
        lVar34 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        uVar31 = 1 << ((byte)lVar34 & 0x1f);
      }
      goto LAB_14080844d;
    }
    puVar4 = (undefined4 *)(*plVar1 + (longlong)iVar21 * 0x48);
    plVar2 = (longlong *)(*plVar1 + (longlong)iVar21 * 0x48);
    FUN_14680d492(plVar2 + 2);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    uVar6 = *(undefined4 *)puVar3;
    uVar7 = *(undefined4 *)((longlong)puVar3 + 4);
    uVar8 = *(undefined4 *)(puVar3 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar3 + 0xc);
    uVar10 = *(undefined4 *)(puVar3 + 2);
    uVar11 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uVar12 = *(undefined4 *)(puVar3 + 3);
    uVar13 = *(undefined4 *)((longlong)puVar3 + 0x1c);
    uVar14 = *(undefined4 *)(puVar3 + 4);
    uVar15 = *(undefined4 *)((longlong)puVar3 + 0x24);
    uVar16 = *(undefined4 *)(puVar3 + 5);
    uVar17 = *(undefined4 *)((longlong)puVar3 + 0x2c);
    uVar18 = *(undefined4 *)((longlong)puVar3 + 0x34);
    uVar19 = *(undefined4 *)(puVar3 + 7);
    uVar20 = *(undefined4 *)((longlong)puVar3 + 0x3c);
    puVar4[0xc] = *(undefined4 *)(puVar3 + 6);
    puVar4[0xd] = uVar18;
    puVar4[0xe] = uVar19;
    puVar4[0xf] = uVar20;
    puVar4[8] = uVar14;
    puVar4[9] = uVar15;
    puVar4[10] = uVar16;
    puVar4[0xb] = uVar17;
    puVar4[4] = uVar10;
    puVar4[5] = uVar11;
    puVar4[6] = uVar12;
    puVar4[7] = uVar13;
    *puVar4 = uVar6;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    FUN_146813af0(plVar1,local_a8);
  }
LAB_140808781:
  lVar34 = *plVar1;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar34 = lVar34 + (longlong)iVar21 * 0x48;
LAB_1408080e6:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar34 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140808afa FUN_140808afa body=195 status=ok
// SIG undefined FUN_140808afa(void)

int FUN_140808afa(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140808b3c:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x48);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x48) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140808bb5;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140808bb5;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140808b9f;
    }
  }
  return -1;
LAB_140808bb5:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140808b9f:
  iVar1 = *(int *)(lVar4 + 0x40 + lVar10 * 0x48);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140808b3c;
}



// FUNCTION 140808bbe FUN_140808bbe body=1291 status=ok
// SIG undefined FUN_140808bbe(void)

undefined8
FUN_140808bbe(undefined8 param_1,undefined8 *param_2,byte param_3,wchar_t *param_4,wchar_t *param_5)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  size_t sVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar10 = true;
  if (param_5 != (wchar_t *)0x0) {
    pwVar2 = wcsstr(param_5,L"/Programs/");
    bVar10 = pwVar2 == (wchar_t *)0x0;
  }
  local_98 = (wchar_t *)0x0;
  uStack_90 = 0;
  local_a8 = (wchar_t *)0x0;
  uStack_a0 = 0;
  if ((bool)(param_3 < 4 | bVar10)) {
    if (param_5 == (wchar_t *)0x0 || param_3 < 4) {
      if (param_3 < 4) {
        uVar3 = FUN_140d6ac5a();
      }
      else {
        uVar3 = FUN_140d6afb0();
      }
      FUN_140056680(&local_88,uVar3);
      local_98 = local_88;
      uStack_90 = CONCAT44(uStack_7c,iStack_80);
      iVar7 = iStack_80;
    }
    else {
      FUN_14020fad6(&local_98,param_5);
      iVar7 = (int)uStack_90;
    }
    uVar5 = 0;
    uVar8 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar8 = uVar5;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
      uVar5 = *(int *)(param_2 + 1) - 1;
    }
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar9 = (ulonglong)uVar8;
    if ((int)uVar8 < 1) {
      uVar9 = 0;
    }
    iVar7 = uVar5 - (int)uVar9;
    puVar6 = puVar6 + uVar9;
  }
  else {
    local_b8 = 1;
    FUN_140807d8e(param_2,&local_88,&DAT_149e01f64,&DAT_149e065c6);
    local_b0 = 0xffffffff;
    local_b8 = 0;
    iVar7 = FUN_1447ee042(&local_88,L"/Programs/",10,1);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar8 = iVar7 + 1;
    FUN_144a63a7c(param_2,&local_88,0,uVar8);
    local_98 = local_88;
    uStack_90 = CONCAT44(uStack_7c,iStack_80);
    uVar5 = *(int *)(param_2 + 1) - 1;
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
      uVar5 = 0;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar9 = (ulonglong)uVar8;
    if ((int)uVar8 < 1) {
      uVar9 = 0;
    }
    iVar7 = uVar5 - (int)uVar9;
    puVar6 = puVar6 + uVar9;
  }
  FUN_14006620a(&local_88,puVar6,iVar7);
  iVar7 = iStack_80;
  local_a8 = local_88;
  uStack_a0._0_4_ = iStack_80;
  cVar1 = FUN_144a38768(&local_a8,&DAT_149e065c6,1,1);
  if ((cVar1 == '\0') && (cVar1 = FUN_144a38768(param_2,&DAT_149e065c6,1,1), cVar1 != '\0')) {
    FUN_1400020e8(&local_a8,&DAT_149e065c6,1);
    iVar7 = (int)uStack_a0;
  }
  if (7 < param_3) {
    FUN_140056680(param_1,&DAT_149dfb77a);
    goto LAB_140808dae;
  }
  uVar8 = iVar7 - 2;
  switch(param_3) {
  default:
    local_68 = param_4;
    if (0x7ffffffe < uVar8) {
      local_60 = 0;
      iStack_80 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iStack_80 = local_60;
      }
      local_88 = local_98;
      local_78 = L"Platforms";
      local_70 = 9;
      if (param_4 != (wchar_t *)0x0) {
        sVar4 = wcslen(param_4);
        local_60 = (int)sVar4;
      }
      goto LAB_140808da0;
    }
    local_60 = 0;
    iStack_80 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iStack_80 = local_60;
    }
    local_88 = local_98;
    local_78 = L"Platforms";
    local_70 = 9;
    if (param_4 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_4);
      local_60 = (int)sVar4;
    }
    local_58 = local_a8;
    local_50 = iVar7 + -1;
    uVar3 = 4;
    goto LAB_140808da9;
  case 1:
  case 5:
    if (0x7ffffffe < uVar8) {
      iStack_80 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iStack_80 = 0;
      }
      local_78 = L"Restricted/NotForLicensees";
      local_70 = 0x1a;
LAB_1408090bc:
      local_88 = local_98;
      uVar3 = 2;
      goto LAB_140808da9;
    }
    iStack_80 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iStack_80 = 0;
    }
    local_78 = L"Restricted/NotForLicensees";
    local_70 = 0x1a;
    break;
  case 2:
  case 6:
    if (0x7ffffffe < uVar8) {
      iStack_80 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iStack_80 = 0;
      }
      local_78 = L"Restricted/NoRedist";
      local_70 = 0x13;
      goto LAB_1408090bc;
    }
    iStack_80 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iStack_80 = 0;
    }
    local_78 = L"Restricted/NoRedist";
    local_70 = 0x13;
    break;
  case 3:
  case 7:
    if (0x7ffffffe < uVar8) {
      iStack_80 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iStack_80 = 0;
      }
      local_78 = L"Restricted/LimitedAccess";
      local_70 = 0x18;
      goto LAB_1408090bc;
    }
    iStack_80 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iStack_80 = 0;
    }
    local_78 = L"Restricted/LimitedAccess";
    local_70 = 0x18;
  }
  local_88 = local_98;
  local_68 = local_a8;
  local_60 = iVar7 + -1;
LAB_140808da0:
  uVar3 = 3;
LAB_140808da9:
  FUN_140bee87a(param_1,&local_88,uVar3);
LAB_140808dae:
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408090ca FUN_1408090ca body=278 status=ok
// SIG undefined FUN_1408090ca(void)

undefined8 FUN_1408090ca(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1408091d9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1408091d9;
    }
    FUN_1400841de(param_1 + 0x18,&local_38);
  }
  else {
LAB_1408091d9:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14080918d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_14080918d;
    }
  }
  uVar6 = 0;
LAB_14080918d:
  if (local_38 != 0) {
    FUN_140113f3a(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408091e4 FUN_1408091e4 body=182 status=ok
// SIG undefined FUN_1408091e4(void)

void FUN_1408091e4(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    FUN_14080929a(param_1 + 0x588,CONCAT44(iVar2,uVar1));
  }
  FUN_144a38812(param_1);
  return;
}



// FUNCTION 14080929a FUN_14080929a body=240 status=ok
// SIG undefined FUN_14080929a(void)

void FUN_14080929a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar4 = *param_1;
      lVar3 = lVar3 * 0x70;
      local_40 = *(undefined8 *)(lVar4 + lVar3);
      local_48 = param_2;
      cVar2 = FUN_14069bc62();
      if (cVar2 == '\0') {
        lVar3 = lVar4 + lVar3;
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x68);
          if (lVar3 == -1) goto LAB_140809324;
          lVar1 = *param_1;
          lVar3 = lVar3 * 0x70;
          local_40 = *(undefined8 *)(lVar1 + lVar3);
          local_48 = param_2;
          cVar2 = FUN_14069bc62();
          lVar3 = lVar1 + lVar3;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x68);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_1405f5d2e(param_1,*puVar6);
    }
  }
LAB_140809324:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080938c FUN_14080938c body=122 status=ok
// SIG undefined FUN_14080938c(void)

void FUN_14080938c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 140809414 FUN_140809414 body=197 status=ok
// SIG undefined FUN_140809414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140809414(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b84b950;
  lVar2 = 0x78;
  do {
    if (*(longlong **)((longlong)param_1 + lVar2) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_1 + lVar2) + 0x10))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x18);
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408094da FUN_1408094da body=21 status=ok
// SIG undefined FUN_1408094da(void)

undefined8 FUN_1408094da(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1408094f0 FUN_1408094f0 body=24 status=ok
// SIG undefined FUN_1408094f0(void)

void FUN_1408094f0(void)

{
  FUN_140809607();
  FUN_140809508();
  FUN_140809a92();
  return;
}



// FUNCTION 140809508 FUN_140809508 body=254 status=ok
// SIG undefined FUN_140809508(void)

void FUN_140809508(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb442b0 == '\x01') {
    if (DAT_14cb442ac != DAT_14cb442a8) {
      DAT_14cb442a8 = DAT_14cb442ac;
      FUN_1456d06d8(&local_28,0x10,1,0);
      uVar5 = (ulonglong)local_18;
      lVar2 = local_28;
      iVar3 = local_20;
      if ((int)local_18 < local_20 && -1 < (int)local_18) {
        do {
          lVar1 = *(longlong *)(lVar2 + (uVar5 & 0xffffffff) * 8);
          uVar4 = (uint)uVar5;
          if (lVar1 != 0) {
            FUN_14080a0de(lVar1);
            lVar2 = local_28;
            iVar3 = local_20;
            uVar4 = local_18;
          }
          uVar5 = (longlong)(int)uVar4;
          do {
            uVar6 = uVar5;
            uVar5 = uVar6 + 1;
            local_18 = (uint)uVar5;
            if ((longlong)iVar3 <= (longlong)uVar5) break;
          } while (*(longlong *)(lVar2 + uVar5 * 8) == 0);
        } while ((-2 < (longlong)uVar6) && ((int)local_18 < iVar3));
      }
      if (lVar2 != 0) {
        FUN_1400020a8();
      }
      if (DAT_14cb442b0 != '\x01') goto LAB_140809525;
    }
    DAT_14cb442b0 = '\0';
  }
LAB_140809525:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140809607 FUN_140809607 body=1162 status=ok
// SIG undefined FUN_140809607(void)

void FUN_140809607(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  ulonglong uStack_b0;
  undefined8 *local_a8;
  ulonglong auStack_a0 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((DAT_14cb39fc4 != '\0') || (DAT_14ca83900 == (longlong *)0x0)) goto LAB_1408098b1;
  DAT_14cb39fc4 = '\x01';
  bVar15 = false;
  if ((DAT_14c7627fc != 0) && (bVar15 = false, DAT_14c7627f8 != 0)) {
    if (DAT_14ca84d96 == '\x01') {
      if (DAT_14cb3a150 - 2U < 0x7fffffff) {
        local_a8 = (undefined8 *)0x0;
        auStack_a0[0] = 0;
        FUN_1403de9f2(&DAT_14cb3a148,&local_a8,&DAT_149e06196,1);
        uVar3 = (**(code **)(*DAT_14ca83900 + 0x20))();
        FUN_140056680(&local_b8,uVar3);
        puVar10 = local_b8;
        uVar9 = (ulonglong)(int)auStack_a0[0];
        if (uVar9 == 0) {
          puVar12 = (undefined8 *)0x0;
          puVar5 = local_a8;
        }
        else {
          iVar7 = (int)uStack_b0 + -1;
          puVar13 = local_b8;
          if ((int)uStack_b0 == 0) {
            puVar13 = &DAT_149dfb77a;
            iVar7 = 0;
          }
          lVar8 = uVar9 << 4;
          local_d0 = local_a8;
          puVar12 = local_a8;
          do {
            iVar1 = *(int *)(puVar12 + 1);
            iVar6 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar6 = 0;
            }
            puVar11 = &DAT_149dfb77a;
            if (iVar1 != 0) {
              puVar11 = (undefined2 *)*puVar12;
            }
            cVar2 = FUN_14038a9c4(puVar13,iVar7,puVar11,iVar6);
            puVar5 = local_d0;
            if (cVar2 != '\0') goto LAB_14080974e;
            puVar12 = puVar12 + 2;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
          puVar12 = (undefined8 *)0x0;
        }
LAB_14080974e:
        if (puVar10 != (undefined2 *)0x0) {
          FUN_1400020a8(puVar10);
          uVar9 = auStack_a0[0] & 0xffffffff;
          puVar5 = local_a8;
        }
        FUN_1447a1747(puVar5,uVar9 & 0xffffffff);
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar12 != (undefined8 *)0x0) goto LAB_14080977f;
      }
      bVar15 = true;
      if (DAT_14cb3a160 - 2U < 0x7fffffff) {
        local_a8 = (undefined8 *)0x0;
        auStack_a0[0] = 0;
        bVar15 = true;
        FUN_1403de9f2(&DAT_14cb3a158,&local_a8,&DAT_149e06196,1);
        uVar9 = auStack_a0[0];
        puVar5 = local_a8;
        if ((longlong)(int)auStack_a0[0] != 0) {
          puVar10 = &DAT_149dfb77a;
          if (DAT_14ca84da8 != 0) {
            puVar10 = DAT_14ca84da0;
          }
          iVar7 = DAT_14ca84da8 + -1;
          if (DAT_14ca84da8 == 0) {
            iVar7 = 0;
          }
          lVar8 = (longlong)(int)auStack_a0[0] << 4;
          puVar12 = local_a8;
          do {
            iVar1 = *(int *)(puVar12 + 1);
            iVar6 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar6 = 0;
            }
            puVar13 = &DAT_149dfb77a;
            if (iVar1 != 0) {
              puVar13 = (undefined2 *)*puVar12;
            }
            cVar2 = FUN_14038a9c4(puVar10,iVar7,puVar13,iVar6);
            if (cVar2 != '\0') goto LAB_140809834;
            puVar12 = puVar12 + 2;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
          puVar12 = (undefined8 *)0x0;
LAB_140809834:
          bVar15 = puVar12 == (undefined8 *)0x0;
        }
        FUN_1447a1747(puVar5,uVar9 & 0xffffffff);
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (bVar15 == false) goto LAB_140809869;
      }
      if (DAT_14cb3a170 - 2U < 0x7fffffff) {
        local_b8 = (undefined2 *)0x0;
        uStack_b0 = 0;
        FUN_1403de9f2(&DAT_14cb3a168,&local_b8,&DAT_149e06124,1);
        auStack_a0[5] = 0;
        auStack_a0[6] = 0;
        auStack_a0[3] = 0;
        auStack_a0[4] = 0;
        auStack_a0[1] = 0;
        auStack_a0[2] = 0;
        local_a8 = (undefined8 *)0x0;
        auStack_a0[0] = 0;
        FUN_145c232fc(&local_a8);
        FUN_1400b22c2(&local_c8,&DAT_14c8c27d7);
        if (auStack_a0[3] != 0) {
          FUN_1400020a8();
        }
        FUN_1461924c8();
        if (auStack_a0[5] != 0) {
          FUN_1400020a8();
        }
        auStack_a0[5] = local_c8;
        auStack_a0[6] = uStack_c0;
        local_c8 = 0;
        uStack_c0 = 0;
        if ((longlong)(int)uStack_b0 == 0) {
          iVar7 = 0;
          lVar8 = 0;
        }
        else {
          puVar13 = local_b8 + (longlong)(int)uStack_b0 * 8;
          puVar10 = local_b8;
          do {
            FUN_1403de9f2(puVar10,&local_c8,&DAT_149e06196,0);
            lVar8 = local_c8;
            iVar7 = (int)uStack_c0;
            if ((int)uStack_c0 == 4) {
              lVar14 = 8;
              do {
                if (1 < *(int *)(lVar8 + lVar14)) {
                  iVar1 = *(int *)((longlong)&local_a8 + lVar14);
                  puVar11 = &DAT_149dfb77a;
                  if (iVar1 != 0) {
                    puVar11 = *(undefined2 **)((longlong)&uStack_b0 + lVar14);
                  }
                  iVar6 = iVar1 + -1;
                  if (iVar1 == 0) {
                    iVar6 = 0;
                  }
                  cVar2 = FUN_14038a9c4(puVar11,iVar6,*(undefined8 *)(lVar8 + -8 + lVar14));
                  if (cVar2 == '\0') break;
                }
                lVar14 = lVar14 + 0x10;
                if (lVar14 == 0x48) {
                  iVar7 = 4;
                  bVar15 = false;
                  goto LAB_140809a39;
                }
              } while( true );
            }
            puVar10 = puVar10 + 8;
            lVar8 = local_c8;
          } while (puVar10 != puVar13);
        }
LAB_140809a39:
        FUN_1447a1747(lVar8,iVar7);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        lVar8 = 0x40;
        do {
          if (*(longlong *)((longlong)&local_b8 + lVar8) != 0) {
            FUN_1400020a8();
          }
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
        FUN_1447a1747(local_b8,uStack_b0 & 0xffffffff);
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
LAB_14080977f:
      bVar15 = false;
    }
  }
LAB_140809869:
  cVar2 = DAT_14c76284c;
  if ((bool)DAT_14c76284c != bVar15) {
    DAT_14c76284c = bVar15;
  }
  bVar4 = DAT_14c76284e ^ 1 | (~DAT_14c873820 & 0x600000) == 0;
  if ((DAT_14c76284d != bVar4) || (bVar4 = DAT_14c76284d, (bool)cVar2 != bVar15)) {
    DAT_14c76284d = bVar4;
    FUN_1439f8904();
  }
LAB_1408098b1:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140809a92 FUN_140809a92 body=1604 status=ok
// SIG undefined FUN_140809a92(void)

void FUN_140809a92(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_98 [39];
  char local_71;
  longlong local_70;
  int local_68;
  uint local_60;
  char *local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c762934 == DAT_14c762948) {
LAB_140809abf:
    if (0 < DAT_14cb424a8) {
      DAT_14c762948 = -1;
      DAT_14cb425e8 = DAT_14c75b13c;
      FUN_1456d06d8(&local_70,0x10,1,0);
      uVar13 = (ulonglong)local_60;
      if ((-1 < (int)local_60) && ((int)local_60 < local_68)) {
        do {
          lVar2 = *(longlong *)(local_70 + (uVar13 & 0xffffffff) * 8);
          local_71 = '\0';
          if ((longlong)*(int *)(lVar2 + 0x80) != 0) {
            lVar3 = *(longlong *)(lVar2 + 0x78);
            lVar8 = (longlong)*(int *)(lVar2 + 0x80) * 0xa0 + lVar3;
            do {
              if ((longlong)*(int *)(lVar3 + 0x18) != 0) {
                plVar5 = *(longlong **)(lVar3 + 0x10);
                plVar7 = plVar5 + (longlong)*(int *)(lVar3 + 0x18) * 6;
                do {
                  if (DAT_14cb424a8 != 0) {
                    lVar10 = 0;
                    do {
                      if (*(longlong *)(DAT_14cb424a0 + lVar10) == *plVar5) {
                        local_71 = '\x01';
                        break;
                      }
                      lVar10 = lVar10 + 8;
                    } while ((longlong)DAT_14cb424a8 << 3 != lVar10);
                  }
                  plVar5 = plVar5 + 6;
                } while (plVar5 != plVar7);
              }
              lVar3 = lVar3 + 0xa0;
            } while (lVar3 != lVar8);
          }
          if ((longlong)*(int *)(lVar2 + 0x370) != 0) {
            plVar7 = *(longlong **)(lVar2 + 0x368);
            plVar5 = plVar7 + *(int *)(lVar2 + 0x370);
            do {
              lVar3 = *plVar7;
              if (lVar3 != 0) {
                lVar8 = FUN_140d29022();
                if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                   ((longlong)*(int *)(lVar3 + 0x50) != 0)) {
                  plVar4 = *(longlong **)(lVar3 + 0x48);
                  plVar9 = plVar4 + (longlong)*(int *)(lVar3 + 0x50) * 6;
                  do {
                    if (DAT_14cb424a8 != 0) {
                      lVar3 = 0;
                      do {
                        if (*(longlong *)(DAT_14cb424a0 + lVar3) == *plVar4) {
                          local_71 = '\x01';
                          break;
                        }
                        lVar3 = lVar3 + 8;
                      } while ((longlong)DAT_14cb424a8 << 3 != lVar3);
                    }
                    plVar4 = plVar4 + 6;
                  } while (plVar4 != plVar9);
                }
              }
              plVar7 = plVar7 + 1;
            } while (plVar7 != plVar5);
          }
          local_58 = &local_71;
          FUN_143ab7a02(&local_58,*(undefined8 *)(lVar2 + 0xd8));
          FUN_143ab7a02(&local_58,*(undefined8 *)(lVar2 + 0xe0));
          if ((longlong)*(int *)(lVar2 + 0xc0) != 0) {
            lVar8 = *(longlong *)(lVar2 + 0xb8);
            lVar3 = lVar8 + (longlong)*(int *)(lVar2 + 0xc0) * 0x48;
            do {
              lVar10 = FUN_14040f60c(lVar8);
              if (lVar10 != 0) {
                if ((longlong)*(int *)(lVar10 + 0xa8) != 0) {
                  plVar5 = *(longlong **)(lVar10 + 0xa0);
                  plVar7 = plVar5 + (longlong)*(int *)(lVar10 + 0xa8) * 6;
                  do {
                    if (DAT_14cb424a8 != 0) {
                      lVar14 = 0;
                      do {
                        if (*(longlong *)(DAT_14cb424a0 + lVar14) == *plVar5) {
                          local_71 = '\x01';
                          break;
                        }
                        lVar14 = lVar14 + 8;
                      } while ((longlong)DAT_14cb424a8 << 3 != lVar14);
                    }
                    plVar5 = plVar5 + 6;
                  } while (plVar5 != plVar7);
                }
                if ((longlong)*(int *)(lVar10 + 200) != 0) {
                  lVar14 = *(longlong *)(lVar10 + 0xc0);
                  lVar6 = (longlong)*(int *)(lVar10 + 200) * 0x40 + lVar14;
                  do {
                    if ((longlong)*(int *)(lVar14 + 0x18) != 0) {
                      plVar5 = *(longlong **)(lVar14 + 0x10);
                      plVar7 = plVar5 + (longlong)*(int *)(lVar14 + 0x18) * 6;
                      do {
                        if (DAT_14cb424a8 != 0) {
                          lVar11 = 0;
                          do {
                            if (*(longlong *)(DAT_14cb424a0 + lVar11) == *plVar5) {
                              local_71 = '\x01';
                              break;
                            }
                            lVar11 = lVar11 + 8;
                          } while ((longlong)DAT_14cb424a8 << 3 != lVar11);
                        }
                        plVar5 = plVar5 + 6;
                      } while (plVar5 != plVar7);
                    }
                    lVar14 = lVar14 + 0x40;
                  } while (lVar14 != lVar6);
                }
                if ((longlong)*(int *)(lVar10 + 0x230) != 0) {
                  plVar7 = *(longlong **)(lVar10 + 0x228);
                  plVar5 = plVar7 + *(int *)(lVar10 + 0x230);
                  do {
                    lVar14 = *plVar7;
                    if ((lVar14 != 0) && ((longlong)*(int *)(lVar14 + 0x40) != 0)) {
                      plVar4 = *(longlong **)(lVar14 + 0x38);
                      plVar9 = plVar4 + (longlong)*(int *)(lVar14 + 0x40) * 6;
                      do {
                        if (DAT_14cb424a8 != 0) {
                          lVar14 = 0;
                          do {
                            if (*(longlong *)(DAT_14cb424a0 + lVar14) == *plVar4) {
                              local_71 = '\x01';
                              break;
                            }
                            lVar14 = lVar14 + 8;
                          } while ((longlong)DAT_14cb424a8 << 3 != lVar14);
                        }
                        plVar4 = plVar4 + 6;
                      } while (plVar4 != plVar9);
                    }
                    plVar7 = plVar7 + 1;
                  } while (plVar7 != plVar5);
                }
                local_50 = &local_71;
                FUN_14080df66(&local_50,*(undefined8 *)(lVar10 + 0x118));
                FUN_14080df66(&local_50,*(undefined8 *)(lVar10 + 0xf0));
                if (*(longlong *)(lVar10 + 0x268) != 0) {
                  FUN_14080df66(&local_50);
                }
                iVar1 = *(int *)(lVar10 + 0x88);
                if ((longlong)iVar1 != 0) {
                  lVar10 = *(longlong *)(lVar10 + 0x80);
                  lVar14 = 0;
                  do {
                    FUN_14080df66(&local_50,*(undefined8 *)(lVar10 + lVar14));
                    lVar14 = lVar14 + 0x58;
                  } while ((longlong)iVar1 * 0x58 - lVar14 != 0);
                }
              }
              lVar8 = lVar8 + 0x48;
            } while (lVar8 != lVar3);
          }
          lVar3 = FUN_143ac50b6(lVar2);
          if (lVar3 != 0) {
            if ((longlong)*(int *)(lVar3 + 0x58) != 0) {
              lVar8 = *(longlong *)(lVar3 + 0x50);
              lVar10 = (longlong)*(int *)(lVar3 + 0x58) * 0x98 + lVar8;
              do {
                if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
                  plVar5 = *(longlong **)(lVar8 + 0x10);
                  plVar7 = plVar5 + (longlong)*(int *)(lVar8 + 0x18) * 6;
                  do {
                    if (DAT_14cb424a8 != 0) {
                      lVar14 = 0;
                      do {
                        if (*(longlong *)(DAT_14cb424a0 + lVar14) == *plVar5) {
                          local_71 = '\x01';
                          break;
                        }
                        lVar14 = lVar14 + 8;
                      } while ((longlong)DAT_14cb424a8 << 3 != lVar14);
                    }
                    plVar5 = plVar5 + 6;
                  } while (plVar5 != plVar7);
                }
                lVar8 = lVar8 + 0x98;
              } while (lVar8 != lVar10);
            }
            if ((longlong)*(int *)(lVar3 + 0x68) != 0) {
              lVar8 = *(longlong *)(lVar3 + 0x60);
              lVar3 = (longlong)*(int *)(lVar3 + 0x68) * 0x38 + lVar8;
              do {
                if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
                  plVar5 = *(longlong **)(lVar8 + 0x10);
                  plVar7 = plVar5 + (longlong)*(int *)(lVar8 + 0x18) * 6;
                  do {
                    if (DAT_14cb424a8 != 0) {
                      lVar10 = 0;
                      do {
                        if (*(longlong *)(DAT_14cb424a0 + lVar10) == *plVar5) {
                          local_71 = '\x01';
                          break;
                        }
                        lVar10 = lVar10 + 8;
                      } while ((longlong)DAT_14cb424a8 << 3 != lVar10);
                    }
                    plVar5 = plVar5 + 6;
                  } while (plVar5 != plVar7);
                }
                lVar8 = lVar8 + 0x38;
              } while (lVar8 != lVar3);
            }
          }
          if (local_71 == '\x01') {
            FUN_14080a0de(lVar2);
          }
          uVar13 = (longlong)(int)local_60;
          do {
            uVar12 = uVar13;
            uVar13 = uVar12 + 1;
            local_60 = (uint)uVar13;
            if ((longlong)local_68 <= (longlong)uVar13) break;
          } while (*(longlong *)(local_70 + uVar13 * 8) == 0);
        } while ((-2 < (longlong)uVar12) && ((int)local_60 < local_68));
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    if (DAT_14cb424ac < 0) {
      DAT_14cb424a8 = 0;
      FUN_1402191ca(&DAT_14cb424a0,0);
      goto LAB_140809ae3;
    }
  }
  else {
    DAT_14cb425e8 = DAT_14c75b13c;
    DAT_14c762948 = DAT_14c762934;
    FUN_1456d06d8(&local_70,0x10,1,0);
    uVar13 = (ulonglong)local_60;
    if ((-1 < (int)local_60) && ((int)local_60 < local_68)) {
      do {
        FUN_14080a0de(*(undefined8 *)(local_70 + (uVar13 & 0xffffffff) * 8));
        uVar13 = (longlong)(int)local_60;
        do {
          uVar12 = uVar13;
          uVar13 = uVar12 + 1;
          local_60 = (uint)uVar13;
          if ((longlong)local_68 <= (longlong)uVar13) break;
        } while (*(longlong *)(local_70 + uVar13 * 8) == 0);
      } while ((-2 < (longlong)uVar12) && ((int)local_60 < local_68));
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (DAT_14cb424ac < 0) {
      DAT_14cb424a8 = 0;
      FUN_1402191ca(&DAT_14cb424a0,0);
      goto LAB_140809abf;
    }
  }
  DAT_14cb424a8 = 0;
LAB_140809ae3:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14080a0de FUN_14080a0de body=241 status=ok
// SIG undefined FUN_14080a0de(void)

void FUN_14080a0de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14080afdc();
  FUN_1402d68f0(param_1);
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x28 + lVar3) != 0) {
        FUN_1405d548c();
      }
      lVar3 = lVar3 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar3);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_56 = 1;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_58 = 0x101;
  FUN_14080a1d0(&local_b8,param_1,1);
  FUN_14080a2a6(&local_b8);
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    FUN_1481fbdfc(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080a1d0 FUN_14080a1d0 body=213 status=ok
// SIG undefined FUN_14080a1d0(void)

void FUN_14080a1d0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14012e468(&local_40,0x10,1,0);
  uVar5 = (ulonglong)local_30;
  lVar3 = local_40;
  iVar2 = local_38;
  if (-1 < (int)local_30) {
    do {
      if (iVar2 <= (int)(uint)uVar5) break;
      lVar1 = *(longlong *)(lVar3 + (uVar5 & 0xffffffff) * 8);
      uVar4 = (uint)uVar5;
      if (*(longlong *)(lVar1 + 0x668) == param_2) {
        FUN_14080aaf6(param_1,lVar1,param_3,1);
        lVar3 = local_40;
        iVar2 = local_38;
        uVar4 = local_30;
      }
      uVar5 = (longlong)(int)uVar4;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_30 = (uint)uVar5;
        if ((longlong)iVar2 <= (longlong)uVar5) break;
      } while (*(longlong *)(lVar3 + uVar5 * 8) == 0);
    } while (-2 < (longlong)uVar6);
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14080a2a6 FUN_14080a2a6 body=329 status=ok
// SIG undefined FUN_14080a2a6(void)

void FUN_14080a2a6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_14080a3f0();
  plVar1 = param_1 + 0xf;
  if ((int)param_1[0x10] == 0) {
LAB_14080a2c1:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto LAB_14080a2c1;
    }
  }
  plVar1 = param_1 + 0xd;
  if ((int)param_1[0xe] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14080a2e7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14080a2e7:
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14080a3f0 FUN_14080a3f0 body=856 status=ok
// SIG undefined FUN_14080a3f0(void)

void FUN_14080a3f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  
  lVar7 = param_1[9];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = param_1[8];
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar9) != 0) {
        FUN_140bf4640();
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_14080a748(param_1 + 8,0);
  }
  lVar7 = param_1[7];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = param_1[6];
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (((lVar4 != 0) && (FUN_148110606(lVar4), (int)param_1[0x10] != 0)) &&
         (plVar6 = (longlong *)param_1[0xf], plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x60))(plVar6,lVar4);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_14574ac34(param_1 + 6,0);
  }
  lVar7 = param_1[0xb];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = param_1[10];
    bVar8 = true;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        if (bVar8) {
          if ((*(byte *)(lVar4 + 0x4f8) & 0x10) != 0) {
            FUN_14080c2b4();
            goto LAB_14080a590;
          }
          bVar8 = true;
        }
        else {
LAB_14080a590:
          bVar8 = false;
        }
        FUN_14080d0b8(lVar4);
        FUN_14080c8ea(lVar4);
        FUN_14080afdc(lVar4);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_14080a748(param_1 + 10,0);
  }
  lVar7 = param_1[3];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = param_1[2];
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        FUN_14080a7a8(lVar4);
        *(byte *)(lVar4 + 0x7cd) = *(byte *)(lVar4 + 0x7cd) & 0xfe;
        if (((int)param_1[0x10] != 0) &&
           (plVar6 = (longlong *)param_1[0xf], plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x60))(plVar6,lVar4);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14574ac34(param_1 + 2,0);
  }
  lVar7 = param_1[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        FUN_14810ca9e(lVar4);
        *(byte *)(lVar4 + 0x7cd) = *(byte *)(lVar4 + 0x7cd) & 0xfe;
        if (((int)param_1[0x10] != 0) &&
           (plVar6 = (longlong *)param_1[0xf], plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x60))(plVar6,lVar4);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14574ac34(param_1,0);
  }
  lVar7 = param_1[5];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = param_1[4];
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x760);
        plVar6 = *(longlong **)(lVar4 + 0x768);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          FUN_14574acf0(*(undefined8 *)(lVar5 + 0x30));
        }
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
        *(byte *)(lVar4 + 0x7cd) = *(byte *)(lVar4 + 0x7cd) & 0xfe;
        if (((int)param_1[0x10] != 0) &&
           (plVar6 = (longlong *)param_1[0xf], plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x60))(plVar6,lVar4);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14574ac34(param_1 + 2,0);
    return;
  }
  return;
}



// FUNCTION 14080a748 FUN_14080a748 body=96 status=ok
// SIG undefined FUN_14080a748(void)

void FUN_14080a748(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14080a7a8 FUN_14080a7a8 body=96 status=ok
// SIG undefined FUN_14080a7a8(void)

void FUN_14080a7a8(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xf2);
  lVar2 = param_1[0xf3];
  *(uint *)(param_1 + 0xf2) = uVar1 & 0xfffffffe;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  FUN_14080aa0e();
  *(uint *)(param_1 + 0xf2) = *(uint *)(param_1 + 0xf2) & 0xfffffffe | uVar1 & 1;
  *(char *)(param_1 + 0xf3) = (char)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00014080a805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,1);
  return;
}



// FUNCTION 14080a808 FUN_14080a808 body=517 status=ok
// SIG undefined FUN_14080a808(void)

void FUN_14080a808(void)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14cb43df8 & 1) != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cb43da0);
    local_38 = 0x100000000;
    local_30 = &DAT_14cb43db8;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (DAT_14cb43dd0 != 0) {
      FUN_1449c0562(&local_38);
    }
    local_60 = local_28;
    uVar2 = local_60;
    local_58 = local_20;
    local_54 = local_1c;
    local_70 = local_38;
    local_68 = local_30;
    local_78 = &DAT_14cb43da8;
    local_50 = &DAT_14cb43da8;
    local_48 = &DAT_14cb43da8;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_28 >> 0x20);
    if (local_60._4_4_ < (int)local_30[6]) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        lVar4 = FUN_14479d2ce((longlong)iVar3 * 0x18 + *local_78);
        if (lVar4 == 0) {
LAB_14080a963:
          lVar5 = FUN_14479d2ce(*local_78 + (longlong)local_60._4_4_ * 0x18 + 8);
          if ((lVar5 != 0) && (lVar4 != lVar5)) {
            uVar1 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            FUN_14482b126(lVar4,0x40000000);
          }
          FUN_1482074da(local_50,local_60._4_4_);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        else {
          lVar5 = FUN_14479d2ce(*local_78 + (longlong)local_60._4_4_ * 0x18 + 8);
          if (lVar5 == 0) goto LAB_14080a963;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < (int)local_68[6]);
      uVar2 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_148207494(local_48,*(int *)(local_48 + 1) - *(int *)((longlong)local_48 + 0x34));
        uVar2 = local_60;
      }
    }
    local_60 = uVar2;
    LOCK();
    DAT_14cb43df8 = 0;
    UNLOCK();
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cb43da0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080aa0e FUN_14080aa0e body=231 status=ok
// SIG undefined FUN_14080aa0e(void)

void FUN_14080aa0e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  FUN_1402a37f2(param_1,0);
  FUN_140388f74(param_1);
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FUN_1402a3786(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30),1);
    if (*(longlong *)(param_1 + 0x760) != 0) {
      FUN_1402a3992();
      *(undefined8 *)(param_1 + 0x760) = 0;
      plVar3 = *(longlong **)(param_1 + 0x768);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x768) = 0;
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
  }
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar4 = *(byte *)(param_1 + 0x9d);
    if ((bVar4 & 1) == 0) {
LAB_14080aad0:
      *(byte *)(param_1 + 0x9d) = bVar4 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar5 = FUN_1448abda6(param_1);
      if (lVar5 == 0) {
        bVar4 = *(byte *)(param_1 + 0x9d);
        goto LAB_14080aad0;
      }
    }
  }
  return;
}



// FUNCTION 14080aaf6 FUN_14080aaf6 body=810 status=ok
// SIG undefined FUN_14080aaf6(void)

void FUN_14080aaf6(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x68), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
  }
  *(byte *)((longlong)param_2 + 0x7cd) = *(byte *)((longlong)param_2 + 0x7cd) | 1;
  lVar3 = param_2[0xec];
  plVar4 = (longlong *)param_2[0xed];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
LAB_14080ab62:
    bVar6 = true;
  }
  else {
    bVar6 = false;
    FUN_14080ae38(*(undefined8 *)(lVar3 + 0x30),0);
    if ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0) goto LAB_14080ab62;
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
  if (bVar6) {
    if ((param_4 != '\0') && ((param_3 != '\0' || (*(char *)(param_1 + 0x62) == '\x01')))) {
      local_40 = (longlong *)param_2[0xcd];
      if ((local_40 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_14080ae66(param_1 + 0x50,&local_40);
      if ((param_3 != '\0') && (*(char *)(param_1 + 0x62) == '\x01')) {
        local_40 = (longlong *)param_2[0xcd];
        if ((local_40 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c();
        }
        FUN_14080ae66(param_1 + 0x40,&local_40);
      }
    }
    if ((((*(byte *)((longlong)param_2 + 0x9e) & 0x10) == 0) || (param_2[0xec] == 0)) ||
       (bVar6 = true, *(int *)(*(longlong *)(param_2[0xec] + 0x30) + 0x868) != 0)) {
      bVar6 = (int)param_2[0x105] != -1;
    }
    if (*(char *)(param_1 + 0x60) == '\x01') {
      (**(code **)(*param_2 + 0xa68))(param_2);
    }
    if ((bVar6) ||
       ((*(char *)(param_1 + 0x61) == '\0' && ((*(byte *)((longlong)param_2 + 0x9e) & 8) != 0)))) {
      if (param_3 != '\0') {
        param_1 = param_1 + 0x10;
      }
      local_40 = param_2;
      if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      FUN_14080af20(param_1,&local_40);
    }
    else {
      if (param_3 != '\0') {
        lVar3 = param_2[0xec];
        plVar4 = (longlong *)param_2[0xed];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        if ((lVar3 != 0) && (cVar5 = FUN_14574ac94(lVar3), cVar5 != '\0')) {
          if ((*(byte *)(*(longlong *)(lVar3 + 0x30) + 0x790) & 4) == 0) {
            param_1 = param_1 + 0x20;
          }
          else {
            param_1 = param_1 + 0x30;
          }
          local_40 = param_2;
          if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_2);
          }
          FUN_14080af20(param_1,&local_40);
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
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
              }
            }
          }
          goto LAB_14080ac66;
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
      }
      *(byte *)((longlong)param_2 + 0x7cd) = *(byte *)((longlong)param_2 + 0x7cd) & 0xfe;
    }
  }
LAB_14080ac66:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14080ae38 FUN_14080ae38 body=46 status=ok
// SIG undefined FUN_14080ae38(void)

void FUN_14080ae38(longlong param_1)

{
  FUN_140336cb8(param_1,0);
  if (*(longlong *)(param_1 + 0x7b0) == 0) {
    return;
  }
  FUN_14005a35e(param_1,1);
  return;
}



// FUNCTION 14080ae66 FUN_14080ae66 body=186 status=ok
// SIG undefined FUN_14080ae66(void)

void FUN_14080ae66(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14080de04(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 14080af20 FUN_14080af20 body=188 status=ok
// SIG undefined FUN_14080af20(void)

void FUN_14080af20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14043878c(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 14080afdc FUN_14080afdc body=4822 status=ok
// SIG undefined FUN_14080afdc(void)

void FUN_14080afdc(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  char cVar5;
  void *_Src;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_a18 [32];
  undefined4 local_9f8;
  undefined4 local_9f0;
  undefined4 local_9e8;
  undefined8 local_9e0;
  wchar_t *local_9d8;
  undefined1 *local_9d0;
  undefined1 *local_9c8;
  code **local_9c0;
  undefined1 *local_9b8;
  code *local_9b0;
  longlong local_9a8;
  longlong local_9a0;
  longlong *local_998;
  longlong local_990;
  longlong local_988;
  longlong local_980;
  longlong *local_978;
  longlong *local_970;
  undefined8 *local_968;
  longlong local_960;
  undefined8 local_958;
  longlong local_950;
  undefined4 local_948;
  undefined4 local_944;
  longlong local_940;
  undefined8 uStack_938;
  longlong *local_930;
  uint local_928;
  code *local_920;
  code *local_918;
  code *local_910;
  char local_908;
  undefined1 local_900 [2070];
  undefined1 local_ea [2];
  longlong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_90 [32];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a18;
  if (DAT_14cb366a0 == (longlong *)0x0) {
    local_9c0 = &local_920;
    local_920 = FUN_1449e2820;
    local_9b0 = FUN_14081d0ea;
    local_9b8 = &LAB_140eca530;
    local_9c8 = &LAB_148063819;
    local_9d0 = &LAB_1460672b6;
    local_9d8 = L"Niagara";
    local_9e0 = 0;
    local_9e8 = 0x10000006;
    local_9f0 = 8;
    local_9f8 = 0x130;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
  }
  plVar15 = DAT_14cb366a0;
  local_988 = DAT_14cb366a0[0x22];
  if (local_988 == 0) {
    (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
    local_988 = plVar15[0x22];
  }
  *(byte *)(param_1 + 0x4a0) = *(byte *)(param_1 + 0x4a0) | 4;
  puVar10 = (undefined1 *)FUN_14001cc68(0x50,0x10);
  *puVar10 = 0;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(undefined8 *)(puVar10 + 0x10) = 0;
  *(undefined8 *)(puVar10 + 0x20) = 0;
  *(undefined8 *)(puVar10 + 0x28) = 0;
  *(undefined ***)(puVar10 + 0x18) = &PTR_FUN_14a34c530;
  puVar10[0x30] = 0;
  *(undefined8 *)(puVar10 + 0x38) = 0;
  *(undefined8 *)(puVar10 + 0x40) = 0;
  *(undefined4 *)(puVar10 + 0x48) = 0;
  if (*(undefined1 **)(param_1 + 0x500) != puVar10) {
    *(undefined1 **)(param_1 + 0x500) = puVar10;
    FUN_14080540e();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb43790) && (FUN_144b3d300(&DAT_14cb43790), DAT_14cb43790 == -1)) {
    local_920 = (code *)0x14ae1e080;
    local_918 = (code *)CONCAT35(local_918._5_3_,0x15);
    uVar9 = FUN_14001a6c0(&local_920,1);
    DAT_14cb43788 = (ulonglong)uVar9;
    _Init_thread_footer(&DAT_14cb43790);
  }
  FUN_144af2e4c(param_1 + 0x4ac,param_1 + 0x180);
  plVar15 = (longlong *)(param_1 + 0x4c0);
  iVar8 = *(int *)(param_1 + 0x4cc);
  FUN_14080510d(*(undefined8 *)(param_1 + 0x4c0));
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  if ((iVar8 < 0) && (*(int *)(param_1 + 0x4cc) != 0)) {
    FUN_1481f7dc6(plVar15);
  }
  plVar21 = (longlong *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (*(int *)(param_1 + 0x4bc) < 0) {
    FUN_1481f7df6(plVar21);
  }
  iVar8 = *(int *)(param_1 + 0xc0);
  iVar20 = *(int *)(param_1 + 0x4c8);
  local_998 = plVar21;
  if (iVar20 < iVar8) {
    *(int *)(param_1 + 0x4c8) = iVar8;
    if ((uint)(*(int *)(param_1 + 0x4cc) - iVar20) < (uint)(iVar8 - iVar20)) {
      FUN_14183a448(plVar15);
    }
    memset((void *)((longlong)iVar20 * 0x10 + *plVar15),0,(longlong)(iVar8 - iVar20) << 4);
  }
  else {
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if (iVar8 < iVar20) {
      FUN_1481f7e26(plVar15);
      FUN_1481f7e80(plVar15);
    }
  }
  if (*(char *)(param_1 + 0x4a8) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a8) = 0;
  }
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0x80;
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_920 = (code *)local_900;
  local_908 = '\0';
  local_910 = (code *)local_ea;
  local_918 = local_920;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar18 = 0;
    local_980 = param_1 + 0x180;
    local_978 = plVar15;
    do {
      lVar22 = lVar18 * 0x48 + *(longlong *)(param_1 + 0xb8);
      iVar8 = *(int *)(param_1 + 0x4b8);
      *(uint *)(param_1 + 0x4b8) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x4bc) < iVar8 + 1U) {
        FUN_14183a556(plVar21,iVar8);
      }
      lVar24 = (longlong)iVar8 * 4 + *plVar21;
      FUN_143acb600(lVar24);
      if (*(char *)(lVar22 + 0x20) == '\x01') {
        if (*(char *)(lVar22 + 0x21) == '\0') {
          local_9a8 = FUN_14040f60c(lVar22);
          if (local_9a8 != 0) {
            local_918 = local_920;
            _Src = *(void **)(*(longlong *)(lVar22 + 0x28) + 0x60);
            uVar9 = *(uint *)(*(longlong *)(lVar22 + 0x28) + 0x68);
            iVar8 = uVar9 - 1;
            if (uVar9 == 0) {
              iVar8 = 0;
            }
            lVar23 = (longlong)iVar8;
            local_9a0 = lVar22;
            local_990 = lVar18;
            if (local_910 <= local_920 + lVar23 * 2) {
              FUN_140213274(&local_920,lVar23);
            }
            pcVar7 = local_918;
            if (1 < uVar9) {
              memcpy(local_918,_Src,lVar23 * 2);
              local_918 = pcVar7 + lVar23 * 2;
            }
            lVar18 = local_9a0;
            if (local_910 <= local_918 + 0x1e) {
              FUN_140213274(&local_920,0xf);
            }
            *(undefined8 *)(local_918 + 0xe) = 0x53006e006f0069;
            *(undefined8 *)(local_918 + 0x16) = 0x65007400610074;
            *(undefined4 *)local_918 = 0x45002e;
            *(undefined4 *)(local_918 + 4) = 0x650078;
            *(undefined4 *)(local_918 + 8) = 0x750063;
            *(undefined4 *)(local_918 + 0xc) = 0x690074;
            local_918 = local_918 + 0x1e;
            FUN_1446f82e2(&local_950,
                          (ulonglong)((longlong)local_918 - (longlong)local_920) >> 1 & 0xffffffff,
                          local_920,1);
            FUN_144af2e4c(lVar24,local_980,local_950);
            if (local_990 < *(int *)(param_1 + 0xf0)) {
              lVar22 = local_990 * 0x10;
              plVar15 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + lVar22);
              if ((longlong)(int)plVar15[1] != 0) {
                plVar21 = (longlong *)*plVar15;
                local_970 = plVar21 + (int)plVar15[1];
                do {
                  lVar18 = *local_978;
                  iVar8 = *(int *)(lVar18 + 8 + lVar22);
                  lVar24 = (longlong)iVar8;
                  *(uint *)(lVar18 + 8 + lVar22) = iVar8 + 1U;
                  if (*(uint *)(lVar18 + 0xc + lVar22) < iVar8 + 1U) {
                    FUN_14183a6b8((longlong *)(lVar18 + lVar22),iVar8);
                  }
                  lVar18 = *(longlong *)(lVar18 + lVar22);
                  lVar23 = *plVar21;
                  *(undefined8 *)(lVar18 + 4 + lVar24 * 0xc) = 0xffffffffffffffff;
                  *(undefined1 *)(lVar18 + lVar24 * 0xc) = 0;
                  lVar11 = FUN_14183ad48();
                  local_950 = lVar11;
                  if ((lVar11 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(lVar11);
                  }
                  local_948 = CONCAT13(local_948._3_1_,2);
                  local_944 = 0xffffffff;
                  FUN_140c6c286(lVar11,0);
                  iVar8 = FUN_144830b78(&local_960,&local_950);
                  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
                    puVar10 = (undefined1 *)(lVar24 * 0xc + lVar18);
                    lVar18 = *(longlong *)(param_1 + 0x180);
                    lVar24 = 0;
                    do {
                      if ((*(longlong *)(lVar18 + lVar24) == lVar23) &&
                         (*(int *)(lVar18 + 8 + lVar24) == iVar8)) {
                        iVar8 = (int)(lVar24 >> 2) * -0x55555555;
                        if (iVar8 != -1) {
                          *puVar10 = 1;
                          lVar18 = (longlong)iVar8 * 0x20;
                          *(uint *)(puVar10 + 4) =
                               (uint)*(ushort *)(*(longlong *)(param_1 + 400) + lVar18);
                          *(uint *)(puVar10 + 8) =
                               (uint)*(ushort *)(*(longlong *)(param_1 + 400) + 2 + lVar18);
                        }
                        break;
                      }
                      lVar11 = lVar18 + lVar24;
                      lVar24 = lVar24 + 0xc;
                    } while (lVar11 + 0xc != lVar18 + (longlong)*(int *)(param_1 + 0x188) * 0xc);
                  }
                  plVar21 = plVar21 + 1;
                } while (plVar21 != local_970);
                plVar15 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + lVar22);
                lVar18 = local_9a0;
              }
              plVar15 = plVar15 + 0x1e;
              if (*(char *)(local_988 + 0x3d) != '\0') {
                fVar4 = *(float *)(local_988 + 0x40);
                fVar26 = fVar4;
                if ((*(char *)(param_1 + 0x4a8) == '\x01') &&
                   (fVar26 = *(float *)(param_1 + 0x4a4), fVar4 <= *(float *)(param_1 + 0x4a4))) {
                  fVar26 = fVar4;
                }
                *(float *)(param_1 + 0x4a4) = fVar26;
                *(undefined1 *)(param_1 + 0x4a8) = 1;
              }
            }
            else {
              plVar15 = (longlong *)0x0;
            }
            FUN_1400337aa(*(undefined8 *)(lVar18 + 0x28));
            lVar22 = local_9a8;
            FUN_1407939a6(local_9a8,plVar15,*(undefined8 *)(lVar18 + 0x28));
            FUN_143a7c4ce(lVar22,&local_950);
            uVar16 = local_68;
            lVar18 = (longlong)(int)local_928;
            if (lVar18 != 0) {
              iVar8 = (int)local_68;
              lVar22 = (longlong)(int)local_68;
              local_68 = CONCAT44(local_68._4_4_,(int)local_68 + local_928);
              if ((uint)(local_68._4_4_ - iVar8) < local_928) {
                FUN_14476a5c8(local_90,uVar16 & 0xffffffff);
              }
              plVar15 = local_930;
              if (local_930 == (longlong *)0x0) {
                plVar15 = &local_950;
              }
              puVar10 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar10 = local_90;
              }
              memmove(puVar10 + lVar22 * 8,plVar15,lVar18 << 3);
              local_928 = 0;
            }
            plVar15 = local_930;
            if (local_930 == (longlong *)0x0) {
              plVar15 = &local_950;
            }
            FUN_144717c65(plVar15,0);
            if (local_930 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_968 = *(undefined8 **)(local_9a8 + 0x118);
            local_960 = *(longlong *)(local_9a8 + 0xf0);
            local_958 = *(undefined8 *)(local_9a8 + 0x268);
            lVar22 = 0;
            do {
              lVar18 = *(longlong *)((longlong)&local_968 + lVar22);
              if ((lVar18 != 0) && (iVar8 = *(int *)(lVar18 + 0x390), (longlong)iVar8 != 0)) {
                cVar5 = *(char *)(local_9a8 + 0x3c);
                lVar18 = *(longlong *)(lVar18 + 0x388);
                lVar24 = 0;
                do {
                  plVar15 = *(longlong **)(lVar18 + 0x40 + lVar24);
                  if (plVar15 != (longlong *)0x0) {
                    local_948 = *(undefined4 *)(lVar18 + 0x28 + lVar24);
                    local_950 = *(longlong *)(lVar18 + 0x20 + lVar24);
                    local_940 = 0;
                    uStack_938 = 0;
                    local_9f8 = CONCAT31(local_9f8._1_3_,cVar5 == '\x01');
                    (**(code **)(*plVar15 + 0x2c0))
                              (plVar15,*(undefined8 *)(param_1 + 0x500),&local_950,cVar5 == '\0');
                    if (local_940 != 0) {
                      FUN_1400020a8();
                    }
                    if ((cVar5 == '\x01') && (*(char *)(lVar18 + 0x38 + lVar24) == '\0')) {
                      FUN_144a13f80(&local_e8,&local_950,lVar18 + 0x2c + lVar24,0);
                    }
                  }
                  lVar24 = lVar24 + 0x50;
                } while ((longlong)iVar8 * 0x50 != lVar24);
              }
              lVar22 = lVar22 + 8;
              lVar18 = local_990;
              plVar21 = local_998;
            } while (lVar22 != 0x18);
          }
        }
        else if (*(longlong *)(lVar22 + 0x40) != 0) {
          FUN_143ad3f98();
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0xc0));
    if (0 < (int)local_68) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar2;
      if (puVar14 != (uint *)0x0) goto LAB_14080bb4d;
      do {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143acaafd);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        FUN_140217a48(puVar2);
        puVar14 = (uint *)*puVar2;
LAB_14080bb4d:
        uVar16 = *(longlong *)(puVar14 + 0x10) + 7;
        uVar9 = puVar14[0x12];
        while( true ) {
          puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
          if (puVar17 + 0x16 <= puVar14 + 0x4000) {
            *(undefined8 **)(puVar14 + 0x10) = puVar17 + 0x16;
            puVar14[0x12] = uVar9 + 1;
            FUN_1447247dc(puVar17,local_90);
            *puVar17 = &PTR_FUN_149f56280;
            *(undefined4 *)(puVar17 + 0x15) = 0xff;
            if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
            }
            puVar17[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar17[9] = puVar17;
            puVar17[10] = puVar17;
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            lVar22 = *(longlong *)(lVar18 + 0x2b8);
            if (lVar22 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar22 + 0x30);
            }
            puVar17[0xf] = uVar13;
            puVar17[0x10] = 0xc80000527800b400;
            *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
            if (puVar17 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
              UNLOCK();
            }
            local_950 = CONCAT71(local_950._1_7_,1);
            FUN_1447439e4(puVar17,&local_950);
            puVar3 = (undefined8 *)(param_1 + 0x4d8);
            puVar6 = *(undefined8 **)(param_1 + 0x4d8);
            *(undefined8 **)(param_1 + 0x4d8) = puVar17;
            if (puVar6 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar6 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar6)(puVar6,1);
              }
              puVar17 = (undefined8 *)*puVar3;
            }
            if (puVar17 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
              UNLOCK();
            }
            local_930 = (longlong *)0x0;
            local_928 = 1;
            local_968 = puVar17;
            FUN_144727e94(&local_950,1,0);
            plVar15 = local_930;
            if (local_930 == (longlong *)0x0) {
              plVar15 = &local_950;
            }
            FUN_144727e6e(plVar15,&local_968,1);
            if (local_968 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_968 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_968)(local_968,1);
              }
            }
            puVar14 = (uint *)*puVar2;
            if (puVar14 != (uint *)0x0) goto LAB_14080be17;
            goto LAB_14080bd99;
          }
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar19 = *puVar14;
          *puVar14 = *puVar14 + uVar9 + 1;
          UNLOCK();
          if ((uVar19 ^ uVar9) != 0xffffffff) break;
          puVar14 = (uint *)*puVar2;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          uVar16 = (longlong)puVar14 + 0x5f;
          uVar9 = 0;
        }
      } while( true );
    }
  }
LAB_14080b7e3:
  local_968 = *(undefined8 **)(param_1 + 0xd8);
  if ((*(undefined8 **)(param_1 + 0xd8) != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_960 = *(longlong *)(param_1 + 0xe0);
  if ((*(longlong *)(param_1 + 0xe0) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar18 = 0;
  do {
    lVar22 = *(longlong *)((longlong)&local_968 + lVar18);
    if ((lVar22 != 0) && ((longlong)*(int *)(lVar22 + 0x390) != 0)) {
      lVar24 = *(longlong *)(lVar22 + 0x388);
      lVar22 = (longlong)*(int *)(lVar22 + 0x390) * 0x50 + lVar24;
      do {
        plVar15 = *(longlong **)(lVar24 + 0x40);
        if (plVar15 != (longlong *)0x0) {
          if ((int)uStack_e0 == local_b4) {
LAB_14080b915:
            bVar25 = false;
          }
          else {
            lVar23 = *(longlong *)(lVar24 + 0x2c);
            uVar9 = (uint)((ulonglong)lVar23 >> 0x10);
            uVar19 = (uint)lVar23 & 0xffff;
            puVar10 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar10 = local_b0;
            }
            iVar8 = *(int *)(puVar10 +
                            (ulonglong)
                            (local_a0 - 1U &
                            (int)((ulonglong)lVar23 >> 0x20) + ((uint)lVar23 << 0x10 | uVar19) +
                            (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar19 >> 4)) * 4);
            if (iVar8 == -1) goto LAB_14080b915;
            do {
              bVar25 = *(longlong *)(local_e8 + (longlong)iVar8 * 0x10) == lVar23;
              if (bVar25) break;
              iVar8 = *(int *)((longlong)iVar8 * 0x10 + local_e8 + 8);
            } while (iVar8 != -1);
          }
          local_948 = *(undefined4 *)(lVar24 + 0x28);
          local_950 = *(longlong *)(lVar24 + 0x20);
          local_940 = 0;
          uStack_938 = 0;
          local_9f8 = CONCAT31(local_9f8._1_3_,bVar25);
          (**(code **)(*plVar15 + 0x2c0))(plVar15,*(undefined8 *)(param_1 + 0x500),&local_950,1);
          if (local_940 != 0) {
            FUN_1400020a8();
          }
        }
        lVar24 = lVar24 + 0x50;
      } while (lVar24 != lVar22);
    }
    lVar18 = lVar18 + 8;
    if (lVar18 == 0x10) {
      FUN_143acfd04(*(undefined8 *)(param_1 + 0x500));
      if (local_908 == '\x01') {
        FUN_1400020a8(local_920);
      }
      local_a0 = 0;
      if (local_a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar16 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if ((int)uVar16 != 0) {
        FUN_14472eb64(&local_e8,0);
      }
      uStack_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        FUN_1446efbd8(local_d8,0);
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      puVar10 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar10 = local_90;
      }
      FUN_144717c65(puVar10,local_68 & 0xffffffff);
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_a18) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
LAB_14080bd99:
  uVar9 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318);
  if ((uVar9 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar9 | 1;
    __tlregdtor(&LAB_143acaafd);
  }
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar12 = *(undefined4 **)(lVar22 + 0x310);
  *(undefined8 *)(lVar22 + 0x310) = 0;
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar12 = 0xffffffff;
  *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
  puVar12[0x12] = 0;
  *puVar2 = puVar12;
  FUN_140217a48(puVar2);
  puVar14 = (uint *)*puVar2;
LAB_14080be17:
  uVar16 = *(longlong *)(puVar14 + 0x10) + 7;
  uVar9 = puVar14[0x12];
  while( true ) {
    puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
    if (puVar17 + 0x18 <= puVar14 + 0x4000) {
      *(undefined8 **)(puVar14 + 0x10) = puVar17 + 0x18;
      puVar14[0x12] = uVar9 + 1;
      FUN_1447247dc(puVar17,&local_950);
      *puVar17 = &PTR_FUN_14ae26778;
      puVar17[0x15] = 0;
      if (param_1 == 0) {
        *(undefined4 *)(puVar17 + 0x15) = 0;
        iVar8 = 0;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0xc);
        *(uint *)(puVar17 + 0x15) = uVar9;
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar22 = 0;
        }
        iVar8 = *(int *)(lVar22 + 0x10);
        if (*(int *)(lVar22 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar20 = DAT_14c964868 + 1;
          bVar25 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar25) {
            local_9a8 = CONCAT44(local_9a8._4_4_,iVar20);
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar20);
            iVar20 = (int)local_9a8;
          }
          LOCK();
          iVar8 = *(int *)(lVar22 + 0x10);
          bVar25 = iVar8 == 0;
          if (bVar25) {
            *(int *)(lVar22 + 0x10) = iVar20;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar25) {
            iVar8 = iVar20;
          }
        }
      }
      *(int *)((longlong)puVar17 + 0xac) = iVar8;
      puVar17[0x16] = puVar3;
      puVar17[0x17] = *puVar3;
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar18 = *(longlong *)(lVar18 + 0x2b8);
      if (lVar18 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar18 + 0x30);
      }
      puVar17[0xf] = uVar13;
      puVar17[0x10] = 0xe80000527800b400;
      *(undefined4 *)((longlong)puVar17 + 0x1c) = 3;
      if (puVar17 == (undefined8 *)0x0) {
        local_968 = (undefined8 *)CONCAT71(local_968._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_968 = (undefined8 *)CONCAT71(local_968._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
      plVar15 = &local_950;
      if (local_930 != (longlong *)0x0) {
        plVar15 = local_930;
      }
      FUN_144717c65(plVar15,local_928);
      if (local_930 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14080b7e3;
    }
    *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
    LOCK();
    uVar19 = *puVar14;
    *puVar14 = *puVar14 + uVar9 + 1;
    UNLOCK();
    if ((uVar19 ^ uVar9) != 0xffffffff) break;
    puVar14 = (uint *)*puVar2;
    *puVar14 = 0xffffffff;
    *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
    puVar14[0x12] = 0;
    *puVar2 = puVar14;
    uVar16 = (longlong)puVar14 + 0x5f;
    uVar9 = 0;
  }
  goto LAB_14080bd99;
}



// FUNCTION 14080c2b4 FUN_14080c2b4 body=1518 status=ok
// SIG undefined FUN_14080c2b4(void)

void FUN_14080c2b4(void)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14ca84d88 != '\x01') goto LAB_14080c510;
  FUN_1447f69b6(&DAT_14ca96508);
  LOCK();
  DAT_14ca9659c = DAT_14ca9659c + 1;
  UNLOCK();
  if (((DAT_14ca9a438 == '\0') &&
      (cVar5 = (**(code **)(*DAT_14c82b500 + 0x38))(DAT_14c82b500,1), cVar5 == '\0')) &&
     (cVar5 = (**(code **)(*DAT_14c82b500 + 0x38))(DAT_14c82b500,0x101), cVar5 == '\0')) {
    (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
    (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,0x101);
  }
  FUN_1403abd4e(&DAT_14ca966d0,local_90);
  FUN_14004710c(local_78);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14080c386;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14080c38b;
      goto LAB_14080c3e9;
    }
LAB_14080c38b:
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_68,7);
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_68,5);
  }
  else {
LAB_14080c386:
    if (iVar6 == 0x10) goto LAB_14080c38b;
LAB_14080c3e9:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar3 + 0xc60), iVar6 == 2))
      goto LAB_14080c38b;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_14080c38b;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar9 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar9;
      if (puVar11 != (uint *)0x0) goto LAB_14080c5d5;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar3 + 0x310);
        *(undefined8 *)(lVar3 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar9 = puVar10;
        FUN_140217a48(puVar9);
        puVar11 = (uint *)*puVar9;
LAB_14080c5d5:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar2 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar9;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar9 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_14080c655;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14080c655:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a392a28;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar3 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar3 == 0) {
        uVar4 = 1;
        if ((char)uVar16 != '\x06') {
          uVar4 = uVar16;
        }
        uVar16 = uVar4;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar3 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
      if (puVar17 == (undefined8 *)0x0) {
        local_68 = (undefined8 *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68 = (undefined8 *)CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_98 = &local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a2b3190;
      local_40 = FUN_14322e652;
      local_68 = (undefined8 *)&LAB_142ea45a2;
      FUN_14005a792(&DAT_14ca9a440,L"FlushPendingDeleteRHIResourcesCmd",&DAT_14ca99fbc);
      if (local_68 != (undefined8 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  FUN_14493e3c6(&DAT_14ca96680,puVar9);
  local_68 = (undefined8 *)0x0;
  FUN_1400fb146(&local_68,0);
  FUN_1408e177a(&local_68,0);
  if (puVar9 != (undefined8 *)0x0) {
    FUN_141551d78(puVar9);
    FUN_1400020a8(puVar9);
  }
  FUN_1447f69b6(&DAT_14ca96520);
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
  LOCK();
  DAT_14ca9659c = DAT_14ca9659c + -1;
  UNLOCK();
LAB_14080c510:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080c8a4 FUN_14080c8a4 body=70 status=ok
// SIG undefined FUN_14080c8a4(void)

void FUN_14080c8a4(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x120))();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14480f766(uVar1);
    return;
  }
  return;
}



// FUNCTION 14080c8ea FUN_14080c8ea body=1519 status=ok
// SIG undefined FUN_14080c8ea(void)

void FUN_14080c8ea(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  longlong lVar23;
  int *piVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  undefined1 local_398 [64];
  undefined1 *local_358;
  undefined8 local_350;
  undefined1 *local_348;
  undefined1 *local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_358 = (undefined1 *)0x0;
  local_350 = 0x800000000;
  if ((longlong)*(int *)(param_1 + 0xc0) == 0) {
    uVar11 = 0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0xb8);
    local_3a0 = lVar10 + (longlong)*(int *)(param_1 + 0xc0) * 0x48;
    local_3a8 = param_1;
    do {
      if (*(char *)(lVar10 + 0x20) == '\x01') {
        if (*(char *)(lVar10 + 0x21) == '\0') {
          lVar6 = FUN_14040f60c(lVar10);
          if ((lVar6 != 0) && (iVar16 = *(int *)(lVar6 + 0x230), (longlong)iVar16 != 0)) {
            lVar6 = *(longlong *)(lVar6 + 0x228);
            lVar23 = 0;
            do {
              plVar1 = *(longlong **)(lVar6 + lVar23);
              if (((plVar1 != (longlong *)0x0) &&
                  (cVar5 = (**(code **)(*plVar1 + 0x308))(plVar1), cVar5 != '\0')) &&
                 (cVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1), uVar11 = local_350, cVar5 != '\0')
                 ) {
                iVar20 = (int)local_350;
                uVar19 = (int)local_350 + 1;
                local_350 = CONCAT44(local_350._4_4_,uVar19);
                if (local_350._4_4_ < uVar19) {
                  FUN_14080cedc(local_398,uVar11 & 0xffffffff);
                }
                puVar7 = local_358;
                if (local_358 == (undefined1 *)0x0) {
                  puVar7 = local_398;
                }
                *(int *)(puVar7 + (longlong)iVar20 * 8) = (int)plVar1[0xb];
                *(int *)(puVar7 + (longlong)iVar20 * 8 + 4) = iVar20;
              }
              lVar23 = lVar23 + 8;
            } while ((longlong)iVar16 * 8 != lVar23);
          }
        }
        else {
          lVar6 = *(longlong *)(lVar10 + 0x40);
          if ((lVar6 != 0) && (iVar16 = *(int *)(lVar6 + 0x130), (longlong)iVar16 != 0)) {
            lVar6 = *(longlong *)(lVar6 + 0x128);
            lVar23 = 0;
            do {
              plVar1 = *(longlong **)(lVar6 + lVar23);
              if ((plVar1 != (longlong *)0x0) &&
                 (cVar5 = (**(code **)(*plVar1 + 0x308))(plVar1), cVar5 != '\0')) {
                iVar20 = (int)local_350;
                uVar11 = local_350 & 0xffffffff;
                uVar19 = (int)local_350 + 1;
                local_350 = CONCAT44(local_350._4_4_,uVar19);
                if (local_350._4_4_ < uVar19) {
                  FUN_14080cedc(local_398,uVar11);
                }
                puVar7 = local_358;
                if (local_358 == (undefined1 *)0x0) {
                  puVar7 = local_398;
                }
                *(int *)(puVar7 + (longlong)iVar20 * 8) = (int)plVar1[0xb];
                *(int *)(puVar7 + (longlong)iVar20 * 8 + 4) = iVar20;
              }
              lVar23 = lVar23 + 8;
            } while ((longlong)iVar16 * 8 != lVar23);
          }
        }
      }
      lVar10 = lVar10 + 0x48;
    } while (lVar10 != local_3a0);
    iVar16 = (int)local_350;
    uVar11 = (ulonglong)(int)local_350;
    if (1 < (longlong)uVar11) {
      puVar7 = local_398;
      if (local_358 != (undefined1 *)0x0) {
        puVar7 = local_358;
      }
      memset(local_338,0,0x2f0);
      local_340 = puVar7 + uVar11 * 8 + -8;
      local_348 = puVar7;
      fVar26 = logf((float)iVar16);
      local_338[0] = (int)(longlong)(fVar26 + fVar26);
      ppuVar8 = &local_348;
      do {
        piVar9 = (int *)*ppuVar8;
        piVar12 = (int *)ppuVar8[1];
        iVar16 = *(int *)(ppuVar8 + 2);
        iVar20 = (int)((ulonglong)((longlong)piVar12 - (longlong)piVar9) >> 3);
        uVar19 = iVar20 + 1;
        piVar14 = piVar9;
        piVar15 = piVar12;
        piVar24 = piVar9;
        if (iVar16 != 0) {
LAB_14080caae:
          if (8 < (int)uVar19) {
            uVar2 = *(undefined8 *)(piVar14 + (ulonglong)(uVar19 >> 1) * 2);
            *(undefined8 *)(piVar14 + (ulonglong)(uVar19 >> 1) * 2) = *(undefined8 *)piVar14;
            *(undefined8 *)piVar14 = uVar2;
            piVar21 = piVar15 + 2;
            piVar9 = piVar14;
            do {
              piVar3 = piVar9 + 2;
              piVar4 = piVar9 + 2;
              do {
                piVar9 = piVar4;
                piVar13 = piVar3;
                if (piVar15 < piVar9) break;
                piVar3 = piVar13 + 2;
                piVar4 = piVar9 + 2;
              } while (*piVar9 <= *piVar14);
              piVar3 = piVar21 + -4;
              do {
                piVar4 = piVar21;
                piVar22 = piVar3;
                piVar21 = piVar4 + -2;
                if (piVar21 <= piVar14) break;
                piVar3 = piVar22 + -2;
              } while (*piVar14 <= *piVar21);
              if (piVar21 < piVar9) goto LAB_14080cb2d;
              uVar2 = *(undefined8 *)piVar9;
              *(undefined8 *)piVar9 = *(undefined8 *)piVar21;
              *(undefined8 *)piVar21 = uVar2;
            } while( true );
          }
          if (piVar14 < piVar15) {
            do {
              piVar9 = piVar14;
              if (piVar14 + 2 <= piVar15) {
                piVar12 = piVar14 + 2;
                iVar16 = *piVar14;
                do {
                  iVar20 = *piVar12;
                  iVar17 = iVar16;
                  if (iVar16 <= iVar20) {
                    iVar17 = iVar20;
                  }
                  if (iVar16 < iVar20) {
                    piVar9 = piVar12;
                  }
                  piVar12 = piVar12 + 2;
                  iVar16 = iVar17;
                } while (piVar12 <= piVar15);
              }
              uVar2 = *(undefined8 *)piVar9;
              *(undefined8 *)piVar9 = *(undefined8 *)piVar15;
              *(undefined8 *)piVar15 = uVar2;
              piVar15 = piVar15 + -2;
            } while (piVar14 < piVar15);
          }
          goto LAB_14080cc33;
        }
LAB_14080cd7f:
        if (uVar19 != 0) {
          iVar16 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
          iVar20 = iVar16;
joined_r0x00014080cda6:
          do {
            iVar17 = iVar16 * 2 + 1;
            if (iVar17 < (int)uVar19) {
              iVar18 = iVar16 * 2 + 2;
              if ((iVar18 < (int)uVar19) &&
                 (piVar9[(longlong)iVar17 * 2] <= piVar9[(longlong)iVar18 * 2])) {
                iVar17 = iVar18;
              }
              lVar6 = (longlong)iVar16;
              lVar10 = (longlong)iVar17;
              if (piVar9[lVar6 * 2] < piVar9[lVar10 * 2]) {
                uVar2 = *(undefined8 *)(piVar9 + lVar6 * 2);
                *(undefined8 *)(piVar9 + lVar6 * 2) = *(undefined8 *)(piVar9 + lVar10 * 2);
                *(undefined8 *)(piVar9 + lVar10 * 2) = uVar2;
                iVar16 = iVar17;
                goto joined_r0x00014080cda6;
              }
            }
            bVar25 = iVar20 != 0;
            iVar16 = iVar20 + -1;
            iVar20 = iVar16;
          } while (bVar25);
          if (1 < (int)uVar19) {
            uVar11 = (ulonglong)uVar19;
            uVar2 = *(undefined8 *)piVar9;
            *(undefined8 *)piVar9 = *(undefined8 *)(piVar9 + uVar11 * 2 + -2);
            *(undefined8 *)(piVar9 + uVar11 * 2 + -2) = uVar2;
            if (uVar19 != 2) {
              do {
                uVar11 = uVar11 - 1;
                iVar16 = 0;
                iVar17 = 1;
                iVar20 = 0;
                do {
                  iVar16 = iVar16 + 2;
                  iVar18 = iVar17;
                  if (((longlong)iVar16 < (longlong)uVar11) &&
                     (piVar9[(longlong)iVar17 * 2] <= piVar9[(longlong)iVar16 * 2])) {
                    iVar18 = iVar16;
                  }
                  lVar10 = (longlong)iVar20;
                  lVar6 = (longlong)iVar18;
                  if (piVar9[lVar6 * 2] <= piVar9[lVar10 * 2]) break;
                  uVar2 = *(undefined8 *)(piVar9 + lVar10 * 2);
                  *(undefined8 *)(piVar9 + lVar10 * 2) = *(undefined8 *)(piVar9 + lVar6 * 2);
                  *(undefined8 *)(piVar9 + lVar6 * 2) = uVar2;
                  iVar16 = iVar18 * 2;
                  iVar17 = iVar18 * 2 + 1;
                  iVar20 = iVar18;
                } while ((longlong)iVar17 < (longlong)uVar11);
                uVar2 = *(undefined8 *)piVar9;
                *(undefined8 *)piVar9 = *(undefined8 *)(piVar9 + uVar11 * 2 + -2);
                *(undefined8 *)(piVar9 + uVar11 * 2 + -2) = uVar2;
              } while (2 < uVar11);
            }
          }
        }
LAB_14080cc33:
        ppuVar8 = ppuVar8 + -3;
      } while (&local_348 <= ppuVar8);
      uVar11 = local_350 & 0xffffffff;
    }
    param_1 = local_3a8;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar11 & 0xffffffff);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x490);
  *(undefined4 *)(param_1 + 0x498) = 0;
  iVar16 = (int)uVar11;
  if (*(int *)(param_1 + 0x49c) < (int)uVar11) {
    FUN_14481578e(plVar1,uVar11 & 0xffffffff);
    iVar16 = (int)local_350;
  }
  puVar7 = local_398;
  if (local_358 != (undefined1 *)0x0) {
    puVar7 = local_358;
  }
  if (iVar16 != 0) {
    lVar10 = 0;
    do {
      iVar20 = *(int *)(param_1 + 0x498);
      *(uint *)(param_1 + 0x498) = iVar20 + 1U;
      if (*(uint *)(param_1 + 0x49c) < iVar20 + 1U) {
        FUN_1446f48e2(plVar1,iVar20);
      }
      *(undefined4 *)(*plVar1 + (longlong)iVar20 * 4) = *(undefined4 *)(puVar7 + lVar10 + 4);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar16 * 8 != lVar10);
  }
  if (local_358 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14080cb2d:
  uVar2 = *(undefined8 *)piVar14;
  *(undefined8 *)piVar14 = *(undefined8 *)piVar21;
  *(undefined8 *)piVar21 = uVar2;
  iVar16 = iVar16 + -1;
  piVar4 = piVar4 + -4;
  if ((longlong)piVar22 - (longlong)piVar24 < (longlong)piVar12 - (longlong)piVar13) {
    if (piVar9 < piVar15) {
      *ppuVar8 = (undefined1 *)piVar9;
      ppuVar8[1] = (undefined1 *)piVar15;
      *(int *)(ppuVar8 + 2) = iVar16;
      ppuVar8 = ppuVar8 + 3;
    }
    piVar13 = piVar14;
    piVar9 = piVar14;
    piVar15 = piVar4;
    piVar12 = piVar22;
    if (piVar21 <= piVar14 + 2) goto LAB_14080cc33;
  }
  else {
    if (piVar14 + 2 < piVar21) {
      *ppuVar8 = (undefined1 *)piVar14;
      ppuVar8[1] = (undefined1 *)piVar4;
      *(int *)(ppuVar8 + 2) = iVar16;
      ppuVar8 = ppuVar8 + 3;
    }
    piVar12 = piVar15;
    if (piVar15 <= piVar9) goto LAB_14080cc33;
  }
  iVar20 = (int)((ulonglong)((longlong)piVar12 - (longlong)piVar13) >> 3);
  uVar19 = iVar20 + 1;
  piVar14 = piVar9;
  piVar24 = piVar13;
  if (iVar16 == 0) goto LAB_14080cd7f;
  goto LAB_14080caae;
}



// FUNCTION 14080cedc FUN_14080cedc body=475 status=ok
// SIG undefined FUN_14080cedc(void)

void FUN_14080cedc(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
LAB_14080ceff:
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x40),(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (8 < *(uint *)((longlong)param_1 + 0x4c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_14080cfa4;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_14080cfa4:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar6;
      if (uVar6 < 9) goto LAB_14080ceff;
    }
    if (*(longlong *)((longlong)param_1 + 0x40) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar8,8);
  return;
}



// FUNCTION 14080d0b8 FUN_14080d0b8 body=3402 status=ok
// SIG undefined FUN_14080d0b8(void)

void FUN_14080d0b8(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  bool bVar37;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  ulonglong local_218;
  ulonglong local_210;
  longlong local_208;
  longlong *local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_180 [128];
  undefined1 *local_100;
  uint local_f8;
  uint local_f4;
  undefined1 local_f0 [128];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar7 = *(uint *)(param_1 + 0xc0);
  uVar33 = (ulonglong)uVar7;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x2000000000;
  local_100 = (undefined1 *)0x0;
  local_f4 = 0x400;
  local_1d8 = (longlong *)(param_1 + 0x460);
  local_228 = param_1;
  FUN_140966ae2(local_1d8,uVar33);
  FUN_1437d0854(local_f0);
  local_f8 = uVar7 * uVar7;
  if (uVar33 == 0) {
    local_1c8 = 0;
    uStack_1c0 = 0;
  }
  else {
    uVar14 = local_f8 + 0x1f;
    uVar29 = uVar14 >> 5;
    if (uVar14 < 0x420) {
      if (local_f8 < 0x101) {
        uVar29 = uVar29 + (uVar29 == 0);
        puVar17 = local_180;
      }
      else {
        puVar17 = local_180;
      }
    }
    else {
      FUN_140724ba4(local_180,0,uVar29,4);
      local_f4 = uVar14 & 0xffffffe0;
      puVar17 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar17 = local_180;
      }
    }
    memset(puVar17,0,(ulonglong)(uVar29 << 2));
    uVar14 = local_f8 + 0x1f;
    if (-1 < (int)local_f8) {
      uVar14 = local_f8;
    }
    if ((int)local_f8 % 0x20 != 0) {
      puVar17 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar17 = local_180;
      }
      bVar18 = -(char)((int)local_f8 % 0x20);
      *(uint *)(puVar17 + (longlong)((int)uVar14 >> 5) * 4) =
           (uint)(*(int *)(puVar17 + (longlong)((int)uVar14 >> 5) * 4) << (bVar18 & 0x1f)) >>
           (bVar18 & 0x1f);
    }
    local_1c8 = 0;
    uStack_1c0 = 0;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar7 * 3);
    }
    FUN_14183a2fc(&local_1c8);
  }
  local_1f8 = (longlong *)(local_228 + 0x470);
  *(undefined4 *)(local_228 + 0x478) = 0;
  if (*(int *)(local_228 + 0x47c) < 0) {
    FUN_1481f7d84(local_1f8);
  }
  local_200 = (longlong *)(local_228 + 0x480);
  *(undefined4 *)(local_228 + 0x488) = 0;
  if (*(int *)(local_228 + 0x48c) < 0) {
    FUN_1481f7d84(local_200);
  }
  lVar34 = local_228;
  if (uVar33 != 0) {
    uVar28 = (ulonglong)-uVar7;
    lVar35 = 0;
    uVar25 = 0;
    local_1f0 = 0;
    local_1e8 = local_1e8 & 0xffffffff00000000;
    local_210 = uVar28;
    do {
      lVar27 = uVar25 * 0x48 + *(longlong *)(lVar34 + 0xb8);
      local_220 = FUN_14040f60c(lVar27);
      uVar12 = uStack_1c0;
      puVar22 = (uint *)(*(longlong *)(local_228 + 0x460) + uVar25 * 4);
      *puVar22 = *puVar22 & 0xfffffffe;
      *(uint *)(*(longlong *)(local_228 + 0x460) + uVar25 * 4) =
           (*(uint *)(*(longlong *)(local_228 + 0x460) + uVar25 * 4) & 1) + (int)uVar25 * 2;
      puVar17 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar17 = local_f0;
      }
      *(undefined4 *)(puVar17 + uVar25 * 4) = 0xffffffff;
      lVar34 = local_228;
      local_218 = uVar25;
      if ((local_220 != 0) && (*(char *)(lVar27 + 0x20) == '\x01')) {
        iVar30 = (int)uStack_1c0;
        lVar34 = (longlong)(int)uStack_1c0;
        uVar14 = uStack_1c0._4_4_;
        local_208 = lVar35;
        if (lVar34 < 0) {
          uStack_1c0 = (ulonglong)uStack_1c0._4_4_ << 0x20;
          uVar29 = -iVar30;
          if (uVar14 - iVar30 < uVar29) {
            FUN_148171eb0(&local_1c8,uVar12 & 0xffffffff);
          }
          FUN_1481f7db4(lVar34 * 0x18 + local_1c8,uVar29);
        }
        else if ((int)uStack_1c0 != 0) {
          uStack_1c0 = (ulonglong)uStack_1c0._4_4_ << 0x20;
        }
        if ((longlong)*(int *)(local_220 + 0xe8) != 0) {
          lVar34 = *(longlong *)(local_220 + 0xe0);
          lVar35 = (longlong)*(int *)(local_220 + 0xe8) * 0xc;
          do {
            lVar15 = FUN_148161cdc(lVar34,local_228,lVar27);
            if (lVar15 != 0) {
              lVar36 = *(longlong *)(lVar15 + 0x28);
              if ((DAT_14c950c29 == 1) && (lVar36 != 0)) {
                FUN_1456cec3c(lVar36);
              }
              uVar28 = uStack_1c0;
              local_198 = *(longlong *)(lVar15 + 0x30);
              uStack_190 = *(undefined8 *)(lVar15 + 0x38);
              lVar15 = (longlong)(int)uStack_1c0;
              uVar14 = (int)uStack_1c0 + 1;
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar14);
              if (uStack_1c0._4_4_ < uVar14) {
                FUN_148171eb0(&local_1c8,uVar28 & 0xffffffff);
              }
              lVar3 = local_1c8;
              *(longlong *)(local_1c8 + lVar15 * 0x18) = lVar36;
              if ((DAT_14c950c29 == 1) && (lVar36 != 0)) {
                FUN_1456cec3c(lVar36);
              }
              lVar3 = lVar3 + lVar15 * 0x18;
              *(undefined4 *)(lVar3 + 8) = (undefined4)local_198;
              *(undefined4 *)(lVar3 + 0xc) = local_198._4_4_;
              *(int *)(lVar3 + 0x10) = (int)uStack_190;
              *(undefined4 *)(lVar3 + 0x14) = uStack_190._4_4_;
            }
            lVar34 = lVar34 + 0xc;
            lVar35 = lVar35 + -0xc;
          } while (lVar35 != 0);
        }
        lVar35 = local_220;
        lVar34 = local_228;
        if ((*(char *)(local_220 + 0x3c) == '\x01') && (*(longlong *)(local_220 + 0x268) != 0)) {
          FUN_1407d794a(local_228,local_220,*(longlong *)(local_220 + 0x268),&local_1c8);
          uVar25 = local_218;
        }
        else {
          FUN_1407d794a(local_228,local_220,*(undefined8 *)(local_220 + 0x118),&local_1c8);
          FUN_1407d794a(lVar34,lVar35,*(undefined8 *)(lVar35 + 0xf0),&local_1c8);
          uVar25 = local_218;
          if ((longlong)*(int *)(lVar35 + 0x88) != 0) {
            lVar34 = *(longlong *)(lVar35 + 0x80);
            lVar35 = (longlong)*(int *)(lVar35 + 0x88) * 0x58 + lVar34;
            do {
              if (((*(int *)(lVar34 + 0x38) != 0 || *(int *)(lVar34 + 0x34) != 0) ||
                  *(int *)(lVar34 + 0x3c) != 0) || *(int *)(lVar34 + 0x40) != 0) {
                local_198 = 0;
                uStack_190 = 0;
                FUN_1407c869a(lVar34 + 0x34);
                if (0 < *(int *)(local_228 + 0xc0)) {
                  lVar27 = 0;
                  do {
                    local_1a0 = *(undefined8 *)
                                 (*(longlong *)(local_228 + 0xb8) + 0x18 + lVar27 * 0x48);
                    FUN_1400021e4(&local_1a0);
                    if (local_1a8 == (int)uStack_190) {
                      if (local_1a8 < 2) {
                        bVar37 = true;
                      }
                      else {
                        lVar15 = 0;
                        while( true ) {
                          uVar5 = *(ushort *)(local_1b0 + lVar15);
                          uVar14 = (uint)uVar5;
                          uVar6 = *(ushort *)(local_198 + lVar15);
                          uVar29 = (uint)uVar6;
                          if (uVar5 != uVar6) {
                            if ((uVar6 | uVar5) < 0x80) {
                              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                              uVar29 = (uint)(byte)(&DAT_149e05da0)[uVar6];
                              if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar6])
                              goto LAB_14080d854;
                            }
                            iVar30 = uVar14 - uVar29;
                            goto LAB_14080d886;
                          }
                          if (uVar5 == 0) break;
LAB_14080d854:
                          lVar15 = lVar15 + 2;
                        }
                        iVar30 = 0;
LAB_14080d886:
                        bVar37 = iVar30 == 0;
                      }
                    }
                    else {
                      bVar37 = (int)uStack_190 + local_1a8 == 1;
                    }
                    if (local_1b0 != 0) {
                      FUN_1400020a8();
                    }
                    if (bVar37) {
                      lVar15 = *(longlong *)(local_228 + 0xb8);
                      lVar36 = (longlong)(int)uStack_1c0;
                      uVar14 = (int)uStack_1c0 + 1;
                      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar14);
                      if (uStack_1c0._4_4_ < uVar14) {
                        FUN_148171eb0(&local_1c8);
                      }
                      lVar3 = local_1c8;
                      lVar15 = lVar15 + lVar27 * 0x48;
                      lVar27 = *(longlong *)(lVar15 + 0x28);
                      *(longlong *)(local_1c8 + lVar36 * 0x18) = lVar27;
                      if ((lVar27 != 0 & DAT_14c950c29) == 1) {
                        FUN_1456cec3c();
                      }
                      lVar3 = lVar3 + lVar36 * 0x18;
                      uVar9 = *(undefined4 *)(lVar15 + 0x34);
                      uVar10 = *(undefined4 *)(lVar15 + 0x38);
                      uVar11 = *(undefined4 *)(lVar15 + 0x3c);
                      *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(lVar15 + 0x30);
                      *(undefined4 *)(lVar3 + 0xc) = uVar9;
                      *(undefined4 *)(lVar3 + 0x10) = uVar10;
                      *(undefined4 *)(lVar3 + 0x14) = uVar11;
                      uVar25 = local_218;
                      break;
                    }
                    lVar27 = lVar27 + 1;
                  } while (lVar27 < *(int *)(local_228 + 0xc0));
                }
                if (local_198 != 0) {
                  FUN_1400020a8();
                }
              }
              lVar34 = lVar34 + 0x58;
            } while (lVar34 != lVar35);
          }
        }
        lVar34 = local_228;
        if (0 < (int)uStack_1c0) {
          local_1e0 = -local_208;
          lVar35 = 0;
          bVar18 = DAT_14c950c29;
          do {
            lVar27 = 0x3c;
            uVar28 = 0;
            do {
              plVar24 = (longlong *)(lVar35 * 0x18 + local_1c8);
              lVar15 = *(longlong *)(lVar34 + 0xb8);
              lVar36 = *(longlong *)(lVar15 + -0x14 + lVar27);
              if (((bVar18 & 1) != 0) && (lVar36 != 0)) {
                FUN_1456cec3c(lVar36);
                lVar34 = local_228;
                bVar18 = DAT_14c950c29;
              }
              if ((((*plVar24 == lVar36) && ((int)plVar24[1] == *(int *)(lVar15 + -0xc + lVar27)))
                  && (*(int *)((longlong)plVar24 + 0xc) == *(int *)(lVar15 + -8 + lVar27))) &&
                 (((int)plVar24[2] == *(int *)(lVar15 + -4 + lVar27) &&
                  (*(int *)((longlong)plVar24 + 0x14) == *(int *)(lVar15 + lVar27))))) {
                if (uVar25 != uVar28) {
                  uVar16 = FUN_143ac44a8(local_180);
                  local_1f0 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
                  lVar34 = local_228;
                  bVar18 = DAT_14c950c29;
                }
                break;
              }
              uVar28 = uVar28 + 1;
              lVar27 = lVar27 + 0x48;
            } while (uVar33 != uVar28);
            lVar35 = lVar35 + 1;
          } while (lVar35 < (int)uStack_1c0);
        }
        lVar27 = local_220;
        uVar28 = local_210;
        lVar35 = local_208;
        if (0 < *(int *)(local_220 + 0x230)) {
          lVar35 = 0;
          iVar30 = (int)local_1e8;
          do {
            plVar24 = *(longlong **)(*(longlong *)(lVar27 + 0x228) + lVar35 * 8);
            if (((plVar24 != (longlong *)0x0) &&
                (cVar13 = (**(code **)(*plVar24 + 0x308))(plVar24), lVar34 = local_228,
                cVar13 != '\0')) &&
               (cVar13 = (**(code **)(*plVar24 + 0x2d8))(plVar24), lVar34 = local_228,
               cVar13 != '\0')) {
              cVar13 = (**(code **)(*plVar24 + 0x328))(plVar24);
              if (cVar13 != '\0') {
                lVar34 = (longlong)*(int *)(local_228 + 0x478);
                uVar14 = *(int *)(local_228 + 0x478) + 1;
                *(uint *)(local_228 + 0x478) = uVar14;
                if (*(uint *)(local_228 + 0x47c) < uVar14) {
                  FUN_14647a628(local_1f8);
                }
                lVar15 = *local_1f8;
                *(int *)(lVar15 + lVar34 * 0xc) = (int)uVar25;
                *(int *)(lVar15 + 4 + lVar34 * 0xc) = (int)lVar35;
                *(int *)(lVar15 + 8 + lVar34 * 0xc) = iVar30;
              }
              cVar13 = (**(code **)(*plVar24 + 0x330))(plVar24);
              if (cVar13 != '\0') {
                lVar34 = (longlong)*(int *)(local_228 + 0x488);
                uVar14 = *(int *)(local_228 + 0x488) + 1;
                *(uint *)(local_228 + 0x488) = uVar14;
                if (*(uint *)(local_228 + 0x48c) < uVar14) {
                  FUN_14647a628(local_200);
                }
                lVar15 = *local_200;
                *(int *)(lVar15 + lVar34 * 0xc) = (int)uVar25;
                *(int *)(lVar15 + 4 + lVar34 * 0xc) = (int)lVar35;
                *(int *)(lVar15 + 8 + lVar34 * 0xc) = iVar30;
              }
              iVar30 = iVar30 + 1;
              lVar34 = local_228;
            }
            lVar35 = lVar35 + 1;
          } while (lVar35 < *(int *)(lVar27 + 0x230));
          local_1e8 = CONCAT44(local_1e8._4_4_,iVar30);
          uVar28 = local_210;
          lVar35 = local_208;
        }
      }
      uVar25 = local_218 + 1;
      lVar35 = lVar35 + uVar28;
    } while (uVar25 != uVar33);
    if ((local_1f0 & 1) != 0) {
      uVar33 = 0;
      do {
        puVar17 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar17 = local_f0;
        }
      } while (((-1 < *(int *)(puVar17 + uVar33 * 4)) ||
               (cVar13 = FUN_140b4d61e(lVar34,uVar33,local_f0,local_180), lVar34 = local_228,
               cVar13 != '\0')) &&
              (uVar14 = (int)uVar33 + 1, uVar33 = (ulonglong)uVar14, (int)uVar14 < (int)uVar7));
      iVar30 = *(int *)(lVar34 + 0x468);
      uVar33 = (ulonglong)iVar30;
      if (0 < (longlong)uVar33) {
        local_210 = *(ulonglong *)(lVar34 + 0x460);
        uVar28 = 1;
        do {
          if (uVar28 < uVar33) {
            uVar7 = *(uint *)((local_210 - 4) + uVar28 * 4);
            uVar14 = *(uint *)(local_210 + uVar28 * 4);
            puVar17 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar17 = local_f0;
            }
            if (*(int *)(puVar17 + (ulonglong)(uVar14 >> 1) * 4) <
                *(int *)(puVar17 + (ulonglong)(uVar7 >> 1) * 4)) {
              *(uint *)((local_210 - 4) + uVar28 * 4) = uVar14;
              *(uint *)(local_210 + uVar28 * 4) = uVar7;
            }
          }
          uVar25 = uVar28 + 1;
          uVar28 = uVar28 + 2;
        } while (uVar25 < uVar33);
        if (2 < iVar30) {
          local_1d0 = local_210 + 4;
          uVar28 = 2;
          do {
            local_1e0 = uVar28;
            iVar8 = (int)local_1e0;
            uVar7 = iVar8 * 2;
            local_1f0 = CONCAT44(local_1f0._4_4_,uVar7);
            local_1f8 = (longlong *)(longlong)(int)uVar7;
            local_200 = (longlong *)((longlong)local_1f8 * 4);
            lVar34 = 0;
            local_220 = local_1d0;
            do {
              local_208 = lVar34;
              uVar14 = iVar30 - (int)local_208;
              if ((int)uVar7 <= (int)uVar14) {
                uVar14 = uVar7;
              }
              if (iVar8 < (int)uVar14 && 0 < iVar8) {
                local_218 = local_210 + local_208 * 4;
                iVar21 = 0;
                uVar28 = local_1e0;
                while( true ) {
                  iVar32 = (int)uVar28;
                  puVar22 = (uint *)(local_218 + (longlong)iVar32 * 4);
                  iVar23 = 0;
                  if (iVar32 - iVar21 != 0 && iVar21 <= iVar32) {
                    puVar17 = local_70;
                    if (local_70 == (undefined1 *)0x0) {
                      puVar17 = local_f0;
                    }
                    iVar23 = 0;
                    uVar29 = iVar32 - iVar21;
                    do {
                      iVar2 = (uVar29 >> 1) + iVar23;
                      if (*(int *)(puVar17 +
                                  (ulonglong)
                                  (*(uint *)(local_218 + (longlong)iVar21 * 4 + (longlong)iVar2 * 4)
                                  >> 1) * 4) <= *(int *)(puVar17 + (ulonglong)(*puVar22 >> 1) * 4))
                      {
                        iVar23 = iVar2 + (uVar29 & 1);
                      }
                      bVar37 = 1 < uVar29;
                      uVar29 = uVar29 >> 1;
                    } while (bVar37);
                  }
                  iVar23 = iVar23 + iVar21;
                  if (iVar32 - iVar23 == 0 || iVar32 < iVar23) break;
                  uVar29 = uVar14 - iVar32;
                  if (uVar29 == 0 || (int)uVar14 < iVar32) {
                    iVar21 = 0;
                  }
                  else {
                    puVar4 = (uint *)(local_218 + (longlong)iVar23 * 4);
                    uVar19 = *puVar4;
                    puVar17 = local_70;
                    if (local_70 == (undefined1 *)0x0) {
                      puVar17 = local_f0;
                    }
                    iVar21 = 0;
                    uVar28 = (ulonglong)uVar29;
                    do {
                      uVar28 = uVar28 >> 1;
                      uVar20 = (uint)uVar28 + iVar21;
                      if (*(int *)(puVar17 + (ulonglong)(puVar22[uVar20] >> 1) * 4) <
                          *(int *)(puVar17 + (ulonglong)(uVar19 >> 1) * 4)) {
                        iVar21 = uVar20 + (uVar29 & 1);
                      }
                      bVar37 = 1 < uVar29;
                      uVar29 = (uint)uVar28;
                    } while (bVar37);
                    uVar28 = (ulonglong)(uint)(iVar32 + iVar21);
                    if (0 < iVar21) {
                      puVar22 = puVar4 + (iVar32 - iVar23);
                      puVar31 = (uint *)(local_220 + (longlong)iVar23 * 4);
                      puVar26 = puVar22;
                      do {
                        puVar1 = puVar22 + 1;
                        puVar31[-1] = *puVar22;
                        *puVar22 = uVar19;
                        if (puVar1 == puVar4 + ((iVar32 + iVar21) - iVar23)) {
                          puVar22 = puVar26;
                          if (puVar31 == puVar26) break;
                        }
                        else {
                          puVar22 = puVar1;
                          if (puVar31 == puVar26) {
                            puVar26 = puVar1;
                          }
                        }
                        uVar19 = *puVar31;
                        puVar31 = puVar31 + 1;
                      } while( true );
                    }
                  }
                  if (((int)uVar14 <= (int)uVar28) ||
                     (iVar21 = iVar23 + iVar21 + 1, (int)uVar28 <= iVar21)) break;
                }
              }
              local_220 = local_220 + (longlong)local_200;
              lVar34 = local_208 + (longlong)local_1f8;
            } while (local_208 + (longlong)local_1f8 < (longlong)uVar33);
            uVar28 = (ulonglong)uVar7;
            local_1e8 = uVar33;
          } while ((int)uVar7 < iVar30);
        }
        iVar30 = *(int *)(local_228 + 0x468);
        lVar34 = local_228;
        if (1 < iVar30) {
          lVar35 = 1;
          uVar33 = (ulonglong)(*(uint *)*local_1d8 >> 1);
          do {
            uVar7 = *(uint *)(*local_1d8 + lVar35 * 4);
            uVar28 = (ulonglong)(uVar7 >> 1);
            puVar17 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar17 = local_f0;
            }
            if (*(int *)(puVar17 + uVar33 * 4) != *(int *)(puVar17 + uVar28 * 4)) {
              *(uint *)(*local_1d8 + lVar35 * 4) = uVar7 | 1;
              iVar30 = *(int *)(local_228 + 0x468);
            }
            lVar35 = lVar35 + 1;
            uVar33 = uVar28;
          } while (lVar35 < iVar30);
        }
      }
    }
  }
  puVar4 = *(uint **)(lVar34 + 0x460);
  lVar35 = (longlong)*(int *)(lVar34 + 0x468);
  puVar22 = puVar4;
  if (lVar35 != 0) {
    puVar22 = puVar4 + lVar35;
    lVar27 = 0;
    do {
      if (*(longlong *)
           (*(longlong *)(lVar34 + 0xb8) + 0x28 +
           (ulonglong)(*(uint *)((longlong)puVar4 + lVar27) >> 1) * 0x48) == 0) {
        puVar22 = (uint *)((longlong)puVar4 + lVar27);
        if (lVar35 * 4 + -4 != lVar27) {
          lVar27 = lVar27 + 4;
          do {
            if (*(longlong *)
                 (*(longlong *)(local_228 + 0xb8) + 0x28 +
                 (ulonglong)(*(uint *)((longlong)puVar4 + lVar27) >> 1) * 0x48) != 0) {
              *puVar22 = *(uint *)((longlong)puVar4 + lVar27);
              puVar22 = puVar22 + 1;
            }
            lVar27 = lVar27 + 4;
          } while (lVar35 * 4 != lVar27);
        }
        break;
      }
      lVar27 = lVar27 + 4;
    } while (lVar35 * 4 != lVar27);
  }
  FUN_140966ae2(local_1d8,(ulonglong)((longlong)puVar22 - (longlong)puVar4) >> 2);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14080de04 FUN_14080de04 body=353 status=ok
// SIG undefined FUN_14080de04(void)

void FUN_14080de04(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14080de89;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14080de89:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14080df66 FUN_14080df66 body=256 status=ok
// SIG undefined FUN_14080df66(void)

void FUN_14080df66(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x390) != 0)) {
    lVar7 = *(longlong *)(param_2 + 0x388);
    lVar6 = (longlong)*(int *)(param_2 + 0x390) * 0x50 + lVar7;
    do {
      if (*(longlong *)(lVar7 + 0x40) != 0) {
        lVar2 = FUN_140d29022();
        lVar5 = *(longlong *)(lVar7 + 0x40);
        if ((((lVar5 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) &&
           (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30)) && ((longlong)*(int *)(lVar5 + 0x50) != 0)))) {
          plVar3 = *(longlong **)(lVar5 + 0x48);
          plVar4 = plVar3 + (longlong)*(int *)(lVar5 + 0x50) * 6;
          lVar5 = DAT_14cb424a0;
          iVar8 = DAT_14cb424a8;
          do {
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              lVar2 = 0;
              do {
                if (*(longlong *)(lVar5 + lVar2) == *plVar3) {
                  *(undefined1 *)*param_1 = 1;
                  lVar5 = DAT_14cb424a0;
                  iVar8 = DAT_14cb424a8;
                  break;
                }
                lVar2 = lVar2 + 8;
              } while ((longlong)iVar8 * 8 != lVar2);
            }
            plVar3 = plVar3 + 6;
          } while (plVar3 != plVar4);
        }
      }
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != lVar6);
  }
  return;
}



// FUNCTION 14080e066 FUN_14080e066 body=205 status=ok
// SIG undefined FUN_14080e066(void)

uint FUN_14080e066(longlong param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  cVar4 = FUN_1402bfec4(param_1,0);
  if (cVar4 == '\0') {
    if (((((*(byte *)(param_1 + 0xc0) & 1) == 0) ||
         (bVar1 = *(byte *)(param_1 + 0xc5), (int)param_2 <= (int)(uint)bVar1)) ||
        (bVar2 = *(byte *)(param_1 + 0xc3), bVar2 <= bVar1)) || (*(byte *)(param_1 + 0xc6) != bVar1)
       ) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)bVar2;
      if (param_2 < bVar2) {
        uVar6 = param_2;
      }
      *(char *)(param_1 + 0xc6) = (char)uVar6;
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
      uVar6 = (uint)DAT_14ca84e06;
      lVar5 = FUN_14001cc68(0x730,0x10);
      FUN_14080e134(lVar5,param_1,param_3,uVar6 + 1);
      lVar3 = *(longlong *)(param_1 + 0x38);
      if (lVar3 != lVar5) {
        *(longlong *)(param_1 + 0x38) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          FUN_14128f1bc();
        }
      }
      uVar6 = CONCAT31((int3)(uVar6 + 1 >> 8),*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x5c))
              ^ 1;
    }
  }
  return uVar6;
}



// FUNCTION 14080e134 FUN_14080e134 body=334 status=ok
// SIG undefined FUN_14080e134(void)

undefined8 *
FUN_14080e134(undefined8 *param_1,longlong *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14080e284(param_1,param_2,param_4);
  *param_1 = &PTR_FUN_14a77dc10;
  param_1[0xe2] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)puVar1 + 10) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
  param_1[0xe3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0xe4) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x721) = 0;
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14a78d820;
  local_b8[0] = FUN_1433bcc3e;
  local_90 = param_1;
  (**(code **)(*param_2 + 0x388))(param_2);
  *(undefined4 *)(param_1 + 0xd) = 2;
  FUN_140622afe(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_140622afe(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78[0] != 0) {
    plVar3 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar3 = local_58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080e284 FUN_14080e284 body=194 status=ok
// SIG undefined FUN_14080e284(void)

undefined8 * FUN_14080e284(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_1403225d8();
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a77db90;
  memset(param_1 + 0x20,0,0x300);
  lVar2 = 0x400;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0xe) = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x16) = 1;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x50) = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x58) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x17);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x27);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x37);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x44) = 0;
    lVar2 = lVar2 + 0x60;
  } while (lVar2 != 0x700);
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = param_3;
  if (*(int *)(param_1 + 2) <= *(int *)((longlong)param_1 + 0x14)) {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  }
  return param_1;
}



// FUNCTION 14080e360 FUN_14080e360 body=59 status=ok
// SIG undefined FUN_14080e360(void)

undefined8 * FUN_14080e360(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f4b7f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14080e3aa FUN_14080e3aa body=157 status=ok
// SIG undefined FUN_14080e3aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14080e3aa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14080e450 FUN_14080e450 body=255 status=ok
// SIG undefined FUN_14080e450(void)

void FUN_14080e450(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x2d0) & 0x1e) != 0) {
    cVar3 = FUN_144729dda(param_1 + 0x4b8);
    if (cVar3 != '\0') {
      uVar4 = FUN_14479d2ce(param_1 + 0x4b8);
      FUN_144a7d35a(uVar4,&local_30);
      if (-1 < (int)local_28) {
        do {
          if ((int)local_30[1] <= (int)local_28) break;
          plVar5 = (longlong *)FUN_14479d2ce((ulonglong)local_28 * 8 + *local_30);
          if ((plVar5 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar3 != '\0')) {
            uVar1 = *(uint *)(param_1 + 0x2d0);
            local_40 = (undefined1)((uVar1 & 4) >> 2);
            local_48 = (undefined1)((uVar1 & 2) >> 1);
            (**(code **)(*plVar5 + 0xb60))(plVar5,param_2,(uVar1 & 8) >> 3,(uVar1 & 0x10) >> 4);
          }
          uVar1 = local_28 + 1;
          bVar2 = -2 < (int)local_28;
          local_28 = uVar1;
        } while (bVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14080e550 FUN_14080e550 body=2435 status=ok
// SIG undefined FUN_14080e550(void)

void FUN_14080e550(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(), lVar7 == 0)) goto LAB_14080eb17;
  if (DAT_14cac9ca8 == 0) {
    local_b0 = &local_60;
    local_60 = FUN_141030f22;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_14081d0ea;
    local_b8 = &LAB_1478c0a72;
    local_c0 = &LAB_1417b2375;
    local_c8 = L"Engine";
    local_d0 = 0x1000000000;
    local_d8 = 0x10000004;
    local_e0 = 8;
    local_e8 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14080eb17;
  plVar19 = *(longlong **)(param_1 + 0x10);
  local_78 = 0;
  uStack_70 = (longlong *)0x0;
  if ((plVar19 == (longlong *)0x0) || (lVar8 = (**(code **)(*plVar19 + 8))(plVar19), lVar8 == 0)) {
    local_78 = 0;
    iVar5 = 0;
  }
  else {
    uVar16 = *(uint *)(lVar8 + 0xc);
    local_78 = CONCAT44(local_78._4_4_,uVar16);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar21 = iVar5 == 0;
      if (bVar21) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar5 = iVar6;
      }
    }
  }
  local_78 = CONCAT44(iVar5,(undefined4)local_78);
  cVar4 = FUN_14493c216(&local_78,0);
  if (cVar4 == '\0') {
    uStack_70 = plVar19;
  }
  lVar8 = FUN_14080eed4(param_1);
  if (lVar8 != 0) {
    local_88 = (undefined4)local_78;
    uStack_84 = local_78._4_4_;
    uStack_80 = (undefined4)uStack_70;
    uStack_7c = uStack_70._4_4_;
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_14b3f7600;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar20 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar20 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar20;
    *(longlong *)(local_60 + 0x10) = lVar13;
    *(undefined ***)local_60 = &PTR_FUN_14b434220;
    *(undefined4 *)(local_60 + 0x18) = local_88;
    *(undefined4 *)(local_60 + 0x1c) = uStack_84;
    *(undefined4 *)(local_60 + 0x20) = uStack_80;
    *(undefined4 *)(local_60 + 0x24) = uStack_7c;
    if ((local_60 == (code *)0x0) ||
       (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
      if (local_58 == 0) {
        uVar17 = 0;
        goto LAB_14080e7ca;
      }
      if (local_60 != (code *)0x0) {
        uVar17 = 0;
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_14080e7b7;
      }
      uVar17 = 0;
    }
    else {
      plVar19 = (longlong *)(lVar8 + 0x58);
      if (*(int *)(lVar8 + 0x6c) < 1) {
        iVar5 = *(int *)(lVar8 + 0x60);
        iVar6 = *(int *)(lVar8 + 0x68) + -1;
        *(int *)(lVar8 + 0x68) = iVar6;
        if (iVar6 <= iVar5) {
          iVar6 = iVar5;
          if (0 < iVar5) {
            iVar15 = 0;
            do {
              if (((*(int *)(*plVar19 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar19 + (longlong)iVar15 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar19,iVar15);
                FUN_14005b248(plVar19);
              }
              else {
                iVar15 = iVar15 + 1;
              }
              iVar6 = *(int *)(lVar8 + 0x60);
            } while (iVar15 < iVar6);
          }
          iVar15 = 2;
          if (2 < iVar6 * 2) {
            iVar15 = iVar6 * 2;
          }
          *(int *)(lVar8 + 0x68) = iVar15;
          if ((iVar15 < iVar5) && (*(int *)(lVar8 + 100) != iVar6)) {
            FUN_14045812c();
          }
        }
      }
      uVar17 = 0;
      if ((local_58 != 0) && (local_60 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
        uVar17 = local_50;
      }
      iVar5 = *(int *)(lVar8 + 0x60);
      *(uint *)(lVar8 + 0x60) = iVar5 + 1U;
      if (*(uint *)(lVar8 + 100) < iVar5 + 1U) {
        FUN_1447a71f6(plVar19,iVar5);
      }
      lVar8 = *plVar19;
      lVar20 = (longlong)iVar5 * 0x10;
      *(undefined8 *)(lVar8 + lVar20) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar20) = 0;
      *(code **)(lVar8 + lVar20) = local_60;
      local_60 = (code *)0x0;
      *(int *)(lVar8 + 8 + lVar20) = local_58;
LAB_14080e7b7:
      local_58 = 0;
LAB_14080e7ca:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x108) = uVar17;
  }
  local_88 = (undefined4)local_78;
  uStack_84 = local_78._4_4_;
  uStack_80 = (undefined4)uStack_70;
  uStack_7c = uStack_70._4_4_;
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar20 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar20 == 0) {
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_60 + 0x10) = lVar20;
  *(undefined ***)local_60 = &PTR_FUN_14b434290;
  *(undefined4 *)(local_60 + 0x18) = local_88;
  *(undefined4 *)(local_60 + 0x1c) = uStack_84;
  *(undefined4 *)(local_60 + 0x20) = uStack_80;
  *(undefined4 *)(local_60 + 0x24) = uStack_7c;
  FUN_14080ef1c(lVar7 + 0x300,&local_50,&local_60);
  if (local_58 == 0) {
LAB_14080e88f:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_14080e88f;
  }
  *(undefined8 *)(param_1 + 0x110) = local_50;
  local_88 = (undefined4)local_78;
  uStack_84 = local_78._4_4_;
  uStack_80 = (undefined4)uStack_70;
  uStack_7c = uStack_70._4_4_;
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar20 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar20 == 0) {
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_60 + 0x10) = lVar20;
  *(undefined ***)local_60 = &PTR_FUN_14b434300;
  *(undefined4 *)(local_60 + 0x18) = local_88;
  *(undefined4 *)(local_60 + 0x1c) = uStack_84;
  *(undefined4 *)(local_60 + 0x20) = uStack_80;
  *(undefined4 *)(local_60 + 0x24) = uStack_7c;
  FUN_14080ef1c(lVar7 + 0x318,&local_50,&local_60);
  if (local_58 == 0) {
LAB_14080e95a:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_14080e95a;
  }
  *(undefined8 *)(param_1 + 0x118) = local_50;
  iVar5 = *(int *)(lVar7 + 0x268);
  local_90 = param_1;
  if (iVar5 == 0) {
    uVar18 = 0;
    uVar14 = 1;
    iVar6 = 0;
    iVar15 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar7 + 0x260);
    if (*(uint **)(lVar7 + 0x260) == (uint *)0x0) {
      puVar9 = (uint *)(lVar7 + 0x250);
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      uVar18 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar18;
      }
      iVar15 = 0;
      do {
        if (uVar14 == uVar18) goto LAB_14080eb17;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar9[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar18 = 0;
      iVar15 = 0;
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar14 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  if (iVar6 != iVar5) {
    uVar16 = 0xffffffff;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x240) + (longlong)iVar6 * 0x10);
      if (lVar8 != 0) {
        if (DAT_14cac7648 == 0) {
          local_60 = FUN_144a7958c;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_143242436;
          local_b0 = &local_60;
          local_b8 = &LAB_14789ef1f;
          local_c0 = &LAB_1417b008f;
          local_c8 = L"Engine";
          local_d0 = 0x8000000000;
          local_d8 = 0x10000004;
          local_e0 = 0x10;
          local_e8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
        }
        iVar6 = *(int *)(DAT_14cac7648 + 0x38);
        if (((iVar6 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar6 * 8)
             == DAT_14cac7648 + 0x30)) &&
           ((lVar8 == *(longlong *)(lVar7 + 0x1c8) || (*(longlong *)(lVar8 + 0x120) != 0)))) {
          FUN_14080f09c(local_90,CONCAT71((int7)(int3)((uint)iVar6 >> 8),1),lVar8);
        }
      }
      uVar16 = uVar16 & ~(uint)uVar14;
      puVar9 = *(uint **)(lVar7 + 0x260);
      if (*(uint **)(lVar7 + 0x260) == (uint *)0x0) {
        puVar9 = (uint *)(lVar7 + 0x250);
      }
      iVar2 = *(int *)(lVar7 + 0x268);
      iVar6 = (int)uVar18;
      lVar8 = (longlong)iVar6;
      uVar12 = puVar9[lVar8] & uVar16;
      if (uVar12 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar20 = 0;
          do {
            uVar12 = puVar9[lVar8 + lVar20 + 1];
            if (uVar12 != 0) {
              uVar18 = (ulonglong)(iVar6 + (int)lVar20 + 1);
              uVar16 = 0xffffffff;
              goto LAB_14080eaeb;
            }
            iVar15 = iVar15 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar11 - lVar8 != lVar20);
          uVar16 = 0xffffffff;
          iVar6 = iVar11;
        }
        uVar18 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar2;
      }
      else {
LAB_14080eaeb:
        uVar14 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar14 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
    } while (iVar6 != iVar5);
  }
LAB_14080eb17:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080eed4 FUN_14080eed4 body=72 status=ok
// SIG undefined FUN_14080eed4(void)

undefined8 FUN_14080eed4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    if (lVar1 != 0) {
      uVar2 = FUN_140437988();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014080ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14080ef1c FUN_14080ef1c body=370 status=ok
// SIG undefined FUN_14080ef1c(void)

undefined8 * FUN_14080ef1c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14080f09c FUN_14080f09c body=1568 status=ok
// SIG undefined FUN_14080f09c(void)

void FUN_14080f09c(longlong param_1,char param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar7 = *(uint **)(param_1 + 0xf8);
  iVar4 = *(int *)(param_1 + 0x100);
  if (param_2 == '\0') {
    if (iVar4 != 0) {
      lVar8 = 0;
      uVar5 = 0;
      do {
        iVar6 = *(int *)((longlong)puVar7 + lVar8 + 4);
        if ((iVar6 == 0) || (uVar10 = *(uint *)((longlong)puVar7 + lVar8), (int)uVar10 < 0)) {
LAB_14080f5a2:
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if ((int)uVar10 < DAT_14c9647dc) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != iVar6)) ||
               ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_14080f5a2;
            lVar11 = *plVar12;
          }
        }
        if (lVar11 == param_3) {
          if ((-1 < (int)uVar5) && ((int)uVar5 < iVar4)) {
            lVar8 = (ulonglong)(uVar5 & 0x7fffffff) * 0x10;
            if (*(longlong *)(puVar7 + (ulonglong)(uVar5 & 0x7fffffff) * 4 + 2) != 0) {
              FUN_14480f766(param_3 + 0x200);
              iVar4 = *(int *)(param_1 + 0x100);
            }
            if (iVar4 - 1U != uVar5) {
              memmove((void *)(*(longlong *)(param_1 + 0xf8) + lVar8),
                      (void *)(*(longlong *)(param_1 + 0xf8) + lVar8 + 0x10),
                      (longlong)(int)((iVar4 - 1U) - uVar5) << 4);
              iVar4 = *(int *)(param_1 + 0x100);
            }
            *(int *)(param_1 + 0x100) = iVar4 + -1;
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
          }
          break;
        }
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar4 * 0x10 != lVar8);
    }
    goto LAB_14080f3b2;
  }
  if (iVar4 != 0) {
    lVar8 = (longlong)iVar4 << 4;
    do {
      if ((puVar7[1] == 0) || (uVar5 = *puVar7, (int)uVar5 < 0)) {
LAB_14080f464:
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar12 == (longlong *)0x0) || (*(uint *)(plVar12 + 2) != puVar7[1])) ||
             ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_14080f464;
          lVar11 = *plVar12;
        }
      }
      if (lVar11 == param_3) {
        if (puVar7 != (uint *)0x0) goto LAB_14080f3b2;
        break;
      }
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  plVar12 = *(longlong **)(param_1 + 0x10);
  local_68 = 0;
  uStack_60 = (longlong *)0x0;
  if ((plVar12 == (longlong *)0x0) || (lVar8 = (**(code **)(*plVar12 + 8))(plVar12), lVar8 == 0)) {
    local_68 = 0;
    iVar4 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar8 + 0xc);
    local_68 = CONCAT44(local_68._4_4_,uVar5);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar4 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar4 = iVar6;
      }
    }
  }
  local_68 = CONCAT44(iVar4,(undefined4)local_68);
  cVar3 = FUN_14493c216(&local_68,0);
  if (cVar3 == '\0') {
    uStack_60 = plVar12;
  }
  iVar4 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar4 + 1U) {
    FUN_14080f6d4((longlong *)(param_1 + 0xf8),iVar4);
  }
  lVar8 = *(longlong *)(param_1 + 0xf8);
  puVar7 = (uint *)(lVar8 + (longlong)iVar4 * 0x10);
  puVar1 = (undefined8 *)(lVar8 + (longlong)iVar4 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
    *puVar7 = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar5 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar5 = *(uint *)(lVar8 + 0x10);
      bVar14 = uVar5 == 0;
      if (bVar14) {
        *(uint *)(lVar8 + 0x10) = uVar10;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar5 = uVar10;
      }
    }
  }
  puVar7[1] = uVar5;
  local_78 = (undefined4)local_68;
  uStack_74 = local_68._4_4_;
  uStack_70 = (undefined4)uStack_60;
  uStack_6c = uStack_60._4_4_;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14a7feda0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_58[2] = lVar11;
  *local_58 = (longlong)&PTR_FUN_14b434370;
  *(undefined4 *)(local_58 + 3) = local_78;
  *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_74;
  *(undefined4 *)(local_58 + 4) = uStack_70;
  *(undefined4 *)((longlong)local_58 + 0x24) = uStack_6c;
  if ((local_58 == (longlong *)0x0) || (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 == 0) {
      uVar13 = 0;
      goto LAB_14080f3a5;
    }
    if (local_58 != (longlong *)0x0) {
      uVar13 = 0;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_14080f398;
    }
    uVar13 = 0;
  }
  else {
    plVar12 = (longlong *)(param_3 + 0x200);
    if (*(int *)(param_3 + 0x214) < 1) {
      iVar4 = *(int *)(param_3 + 0x208);
      iVar6 = *(int *)(param_3 + 0x210) + -1;
      *(int *)(param_3 + 0x210) = iVar6;
      if (iVar6 <= iVar4) {
        iVar6 = iVar4;
        if (0 < iVar4) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar12 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar12 + (longlong)iVar9 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar12,iVar9);
              FUN_14005b248(plVar12);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar6 = *(int *)(param_3 + 0x208);
          } while (iVar9 < iVar6);
        }
        iVar9 = 2;
        if (2 < iVar6 * 2) {
          iVar9 = iVar6 * 2;
        }
        *(int *)(param_3 + 0x210) = iVar9;
        if ((iVar9 < iVar4) && (*(int *)(param_3 + 0x20c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    uVar13 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar13 = local_48;
    }
    iVar4 = *(int *)(param_3 + 0x208);
    *(uint *)(param_3 + 0x208) = iVar4 + 1U;
    if (*(uint *)(param_3 + 0x20c) < iVar4 + 1U) {
      FUN_1447a71f6(plVar12,iVar4);
    }
    lVar8 = *plVar12;
    lVar11 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar8 + lVar11) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar11) = 0;
    *(longlong **)(lVar8 + lVar11) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar8 + 8 + lVar11) = local_50;
LAB_14080f398:
    local_50 = 0;
LAB_14080f3a5:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(puVar7 + 2) = uVar13;
LAB_14080f3b2:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14080f6d4 FUN_14080f6d4 body=269 status=ok
// SIG undefined FUN_14080f6d4(void)

void FUN_14080f6d4(longlong param_1,int param_2)

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



// FUNCTION 14080f864 FUN_14080f864 body=594 status=ok
// SIG undefined FUN_14080f864(void)

void FUN_14080f864(float *param_1,double *param_2,double *param_3,float param_4,float param_5,
                  float param_6)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (!(bool)(~(param_4 != 0.0 && param_6 < 0.0) & 1) && param_5 <= 0.0) {
    FUN_14080fbce(param_1,param_2,param_3,param_4);
    return;
  }
  if (((param_4 != 0.0) || (NAN(param_4))) && (param_5 <= 0.0)) {
    if (1.0 <= param_6) {
      param_6 = 1.0;
    }
    if (param_6 <= 0.0) {
      param_6 = 0.0;
    }
    FUN_14080fab6(param_1,param_2,param_3,param_6);
    fVar5 = (float)SQRT((*param_3 - *param_2) * (*param_3 - *param_2) +
                        (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]));
    dVar1 = param_3[2];
    dVar2 = param_2[2];
    fVar3 = cosf(param_1[9] * 0.017453292);
    fVar4 = sinf(param_1[9] * 0.017453292);
    fVar4 = ((float)(dVar1 - dVar2) * fVar3 - fVar4 * fVar5) / (param_4 * 0.5 * fVar3);
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    *param_1 = (fVar5 / fVar4) / fVar3;
    return;
  }
  *param_1 = param_5;
  if (param_4 == 0.0 || param_6 >= 0.0) {
    if (1.0 <= param_6) {
      param_6 = 1.0;
    }
    if (param_6 <= 0.0) {
      param_6 = 0.0;
    }
    FUN_14080fab6(param_1,param_2,param_3,param_6);
    return;
  }
  FUN_14080fd26(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14080fab6 FUN_14080fab6 body=280 status=ok
// SIG undefined FUN_14080fab6(void)

void FUN_14080fab6(longlong param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = param_3[2] - param_2[2];
  dVar5 = param_3[1] - param_2[1];
  dVar1 = *param_3 - *param_2;
  dVar7 = dVar4 * dVar4 + dVar1 * dVar1 + dVar5 * dVar5;
  if (((dVar7 != 1.0) || (dVar3 = dVar4, dVar6 = dVar5, dVar2 = dVar1, NAN(dVar7))) &&
     (dVar3 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar2 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar3 = dVar4 * dVar7;
    dVar6 = dVar5 * dVar7;
    dVar2 = dVar1 * dVar7;
  }
  dVar3 = dVar2 * 0.0 + dVar6 * 0.0 + dVar3;
  dVar7 = dVar3;
  if (1.0 <= dVar3) {
    dVar7 = 1.0;
  }
  dVar7 = acos((double)(-(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar7));
  *(float *)(param_1 + 0x24) = (param_4 * (float)dVar7 + (1.5707964 - (float)dVar7)) * 57.295776;
  return;
}



// FUNCTION 14080fbce FUN_14080fbce body=343 status=ok
// SIG undefined FUN_14080fbce(void)

void FUN_14080fbce(float *param_1,double *param_2,double *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)SQRT((*param_3 - *param_2) * (*param_3 - *param_2) +
                      (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]));
  fVar5 = (param_4 + param_4) * (float)(param_3[2] - param_2[2]);
  fVar2 = fVar5 * fVar5 + param_4 * param_4 * fVar4 * fVar4 * 4.0;
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar3 = (fVar2 - fVar5) * 0.5;
    fVar2 = (-fVar5 - fVar2) * 0.5;
    fVar1 = fVar2;
    if (((0.0 <= fVar3) && (fVar1 = fVar3, 0.0 <= fVar2)) && (fVar2 <= fVar3)) {
      fVar1 = fVar2;
    }
  }
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  *param_1 = fVar1;
  fVar1 = atanf((fVar1 * fVar1) / (-param_4 * fVar4));
  param_1[9] = fVar1 * 57.295776;
  return;
}



// FUNCTION 14080fd26 FUN_14080fd26 body=268 status=ok
// SIG undefined FUN_14080fd26(void)

void FUN_14080fd26(float *param_1,double *param_2,double *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)SQRT((*param_3 - *param_2) * (*param_3 - *param_2) +
                      (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]));
  fVar1 = *param_1;
  fVar4 = -param_4 * fVar2;
  fVar1 = (((float)(param_3[2] - param_2[2]) + (float)(param_3[2] - param_2[2])) * fVar1 * fVar1 +
          fVar2 * fVar4) * param_4 + fVar1 * fVar1 * fVar1 * fVar1;
  if (0.0 < fVar1) {
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar3 = *param_1 * *param_1;
    fVar2 = atanf((fVar3 - fVar1) / fVar4);
    fVar1 = atanf((fVar3 + fVar1) / fVar4);
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
    param_1[9] = fVar2 * 57.295776;
    return;
  }
  FUN_14080fbce(param_1);
  return;
}



// FUNCTION 14080fe32 FUN_14080fe32 body=47 status=ok
// SIG undefined FUN_14080fe32(void)

void FUN_14080fe32(longlong *param_1)

{
  FUN_140690180(param_1 + 0x82);
  (**(code **)(*param_1 + 0x950))(param_1,1);
  FUN_14080fe84(param_1);
  return;
}



// FUNCTION 14080fe62 FUN_14080fe62 body=34 status=ok
// SIG undefined FUN_14080fe62(void)

void FUN_14080fe62(undefined8 param_1)

{
  FUN_1402b9e22();
  FUN_140757c4e(param_1);
  FUN_140759f2c(param_1);
  return;
}



// FUNCTION 14080fe84 FUN_14080fe84 body=50 status=ok
// SIG undefined FUN_14080fe84(void)

void FUN_14080fe84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa58);
  if (lVar1 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x841) == '\0') && ((*(byte *)(param_1 + 1099) & 0x20) == 0)) {
    FUN_1474898e6(lVar1,param_1,param_1);
    return;
  }
  FUN_14075b306(lVar1,param_1,param_1);
  return;
}



// FUNCTION 14080feb6 FUN_14080feb6 body=40 status=ok
// SIG undefined FUN_14080feb6(void)

undefined8 FUN_14080feb6(undefined8 param_1,int param_2)

{
  FUN_14080fede();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14080fede FUN_14080fede body=335 status=ok
// SIG undefined FUN_14080fede(void)

void FUN_14080fede(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7f3e50;
  param_1[5] = &PTR_FUN_14b7f4950;
  param_1[6] = &PTR_LAB_14b7f4990;
  param_1[0x55] = &PTR_FUN_14b7f49e0;
  param_1[0x56] = &PTR_FUN_14b7f4a60;
  param_1[0x57] = &PTR_FUN_14b7f4a70;
  param_1[0xc4] = &PTR_FUN_14b7f4aa0;
  param_1[0xff] = &PTR_FUN_14b7f4ab0;
  param_1[0x17e] = &PTR_FUN_14b7f4ae0;
  param_1[0x186] = &PTR_FUN_14b7f4af0;
  param_1[0x187] = &PTR_FUN_14b7f4b90;
  param_1[0x188] = &PTR_FUN_14b7f4bb0;
  param_1[0x189] = &PTR_FUN_14b7f4bd0;
  param_1[0x1da] = &PTR_FUN_14b7f4be8;
  FUN_14052f894(param_1 + 0x1f1,1);
  if (param_1[0x1ef] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1eb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e5] != 0) {
    FUN_1400020a8();
  }
  FUN_14081002e(param_1);
  return;
}



// FUNCTION 14081002e FUN_14081002e body=488 status=ok
// SIG undefined FUN_14081002e(void)

void FUN_14081002e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b16cd80;
  param_1[5] = &PTR_FUN_14b16d870;
  param_1[6] = &PTR_LAB_14b16d8b0;
  param_1[0x55] = &PTR_FUN_14b16d900;
  param_1[0x56] = &PTR_FUN_14b16d980;
  param_1[0x57] = &PTR_FUN_14b16d990;
  param_1[0xc4] = &PTR_FUN_14b16d9c0;
  param_1[0xff] = &PTR_FUN_14b16d9d0;
  param_1[0x17e] = &PTR_FUN_14b16da00;
  param_1[0x186] = &PTR_FUN_14b16da10;
  param_1[0x187] = &PTR_FUN_14b16dab0;
  param_1[0x188] = &PTR_FUN_14b16dad0;
  param_1[0x189] = &PTR_FUN_14b16daf0;
  FUN_14028f404(param_1[0x1d7],*(undefined4 *)(param_1 + 0x1d8));
  if (param_1[0x1d7] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a71e(param_1 + 0x1d0,1);
  if (param_1[0x1cd] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xe51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe51) = 0;
  }
  plVar3 = (longlong *)param_1[0x1c9];
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
  if (*(char *)(param_1 + 0x1c7) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c7) = 0;
  }
  FUN_14028f4a8(param_1 + 0x1a2);
  if (param_1[0x19f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18b],*(undefined4 *)(param_1 + 0x18c));
  if (param_1[0x18b] != 0) {
    FUN_1400020a8();
  }
  FUN_140810216(param_1);
  return;
}



// FUNCTION 140810216 FUN_140810216 body=169 status=ok
// SIG undefined FUN_140810216(void)

void FUN_140810216(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab87d60;
  param_1[5] = &PTR_FUN_14ab88850;
  param_1[6] = &PTR_LAB_14ab88890;
  param_1[0x55] = &PTR_FUN_14ab888e0;
  param_1[0x56] = &PTR_FUN_14ab88960;
  param_1[0x57] = &PTR_FUN_14ab88970;
  param_1[0xc4] = &PTR_FUN_14ab889a0;
  param_1[0xff] = &PTR_FUN_14ab889b0;
  if (*(char *)((longlong)param_1 + 0xc29) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc29) = 0;
  }
  param_1[0x17e] = &PTR_LAB_14ab74bb0;
  FUN_14028f6a8(param_1 + 0x180,1);
  FUN_1408102c0(param_1);
  return;
}



// FUNCTION 1408102c0 FUN_1408102c0 body=738 status=ok
// SIG undefined FUN_1408102c0(void)

void FUN_1408102c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ab5c1f0;
  param_1[5] = &PTR_FUN_14ab5cce0;
  param_1[6] = &PTR_LAB_14ab5cd20;
  param_1[0x55] = &PTR_FUN_14ab5cd70;
  param_1[0x56] = &PTR_FUN_14ab5cdf0;
  param_1[0x57] = &DAT_14ab5ce00;
  param_1[0xc4] = &PTR_FUN_14ab5ce30;
  param_1[0xff] = &PTR_FUN_14ab5ce40;
  FUN_140358fe5(param_1[0x17a],*(undefined4 *)(param_1 + 0x17b));
  if (param_1[0x17a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x176];
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
  plVar3 = (longlong *)param_1[0x170];
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
  puVar4 = param_1 + 0x157;
  if ((undefined8 *)param_1[0x16b] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x16b];
  }
  FUN_140810683(puVar4,*(undefined4 *)(param_1 + 0x16c));
  if (param_1[0x16b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x155] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x153] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x151] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x138],*(undefined4 *)(param_1 + 0x139));
  if (param_1[0x138] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x135],*(undefined4 *)(param_1 + 0x136));
  if (param_1[0x135] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x132],*(undefined4 *)(param_1 + 0x133));
  if (param_1[0x132] != 0) {
    FUN_1400020a8();
  }
  FUN_1408105a2(param_1[0x130],*(undefined4 *)(param_1 + 0x131));
  if (param_1[0x130] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12d] != 0) {
    FUN_1400020a8();
  }
  puVar4 = param_1 + 0x112;
  if ((undefined8 *)param_1[0x126] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x126];
  }
  FUN_140810652(puVar4,*(undefined4 *)(param_1 + 0x127));
  if (param_1[0x126] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x110] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x105];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1408105d4(param_1 + 0x100,1);
  FUN_14028f724(param_1);
  return;
}



// FUNCTION 1408105a2 FUN_1408105a2 body=49 status=ok
// SIG undefined FUN_1408105a2(void)

void FUN_1408105a2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408105d4 FUN_1408105d4 body=126 status=ok
// SIG undefined FUN_1408105d4(void)

void FUN_1408105d4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140810652 FUN_140810652 body=49 status=ok
// SIG undefined FUN_140810652(void)

void FUN_140810652(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140810683 FUN_140810683 body=63 status=ok
// SIG undefined FUN_140810683(void)

void FUN_140810683(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408106c2 FUN_1408106c2 body=114 status=ok
// SIG undefined FUN_1408106c2(void)

undefined8 FUN_1408106c2(undefined8 param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_14018d992();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_1400bd118(param_3);
      if (lVar1 != 0) {
        if (4 < param_4) {
          param_4 = 0;
        }
        uVar2 = FUN_140810734(*(undefined8 *)(lVar1 + 0x1b30),param_2,param_3,param_4);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140810734 FUN_140810734 body=373 status=ok
// SIG undefined FUN_140810734(void)

longlong FUN_140810734(longlong param_1,ulonglong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  ulonglong local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || ((*(byte *)(param_3 + 0x155) & 0x20) != 0)) {
    lVar3 = 0;
    goto LAB_140810857;
  }
  FUN_14032cd6a(&local_29);
  if (DAT_14c76283c == 0) {
    FUN_14032ce32(param_1 + 0x28,0);
LAB_140810817:
    lVar3 = FUN_1404174ad(param_3);
    if (*(char *)(lVar3 + 0x798) == '\0') {
      *(byte *)(lVar3 + 0x790) = *(byte *)(lVar3 + 0x790) | 1;
    }
    *(byte *)(lVar3 + 0x9e) = *(byte *)(lVar3 + 0x9e) & 0xf7;
    FUN_1409d23de(lVar3,param_2,1);
    *(char *)(lVar3 + 0x798) = (char)param_4;
  }
  else {
    if (*(int *)(param_2 + 0x28) == 0) goto LAB_140810817;
    local_38 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar2 = FUN_140b31800(param_1 + 0x28,uVar1 >> 0x10 ^ uVar1,&local_38);
    local_48 = 0;
    lVar3 = FUN_1439f8232(uVar2,param_3,param_2,param_4);
    if (lVar3 == 0) goto LAB_140810817;
  }
  if (local_29 == '\x01') {
    uVar2 = FUN_14811173e();
    FUN_1481117c2(uVar2);
  }
LAB_140810857:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1408108b2 FUN_1408108b2 body=175 status=ok
// SIG undefined FUN_1408108b2(void)

undefined8 * FUN_1408108b2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x275c8fdc;
  param_1[3] = 0;
  FUN_140265f12();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = &PTR_FUN_14b1828b0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[5] = &DAT_14cb83310;
  return param_1;
}



// FUNCTION 140810970 FUN_140810970 body=200 status=ok
// SIG undefined FUN_140810970(void)

undefined8 * FUN_140810970(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b13f860;
  if (param_1[0x24] != 0) {
    plVar1 = param_1 + 0x28;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x26];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1c] != 0) {
    plVar1 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140810a44 FUN_140810a44 body=699 status=ok
// SIG undefined FUN_140810a44(void)

undefined8 * FUN_140810a44(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a5d7590;
  param_1[5] = &PTR_FUN_14a5d7830;
  param_1[6] = &PTR_FUN_14a5d7870;
  FUN_140810d00(param_1 + 7,0);
  param_1[0x2b] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[0x2c] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[0x2d] = puVar1;
  *(int *)(param_1 + 0x32) = DAT_14cae8cbc;
  DAT_14cae8cbc = DAT_14cae8cbc + 1;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0xbff0000000000000;
  *(byte *)((longlong)param_1 + 0x243) = *(byte *)((longlong)param_1 + 0x243) & 0xfe;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xef;
  *(byte *)((longlong)param_1 + 0x242) = *(byte *)((longlong)param_1 + 0x242) & 0x2f | 0x80;
  *(undefined1 *)((longlong)param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x49] = 0;
  return param_1;
}



// FUNCTION 140810d00 FUN_140810d00 body=605 status=ok
// SIG undefined FUN_140810d00(void)

undefined8 * FUN_140810d00(undefined8 *param_1,wchar_t *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  size_t sVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  iVar3 = DAT_14cb0f150;
  pvVar2 = DAT_14cb0f148;
  lVar6 = (longlong)DAT_14cb0f150;
  *(int *)(param_1 + 1) = DAT_14cb0f150;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,pvVar2,lVar6 * 2);
  }
  param_1[2] = 0;
  iVar3 = DAT_14cb0f170;
  pvVar2 = DAT_14cb0f168;
  lVar6 = (longlong)DAT_14cb0f170;
  *(int *)(param_1 + 3) = DAT_14cb0f170;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar3,0);
    memcpy((void *)param_1[2],pvVar2,lVar6 * 2);
  }
  *(undefined4 *)(param_1 + 4) = DAT_14cb0f198;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar3 = DAT_14cb0f180;
  pvVar2 = DAT_14cb0f178;
  lVar6 = (longlong)DAT_14cb0f180;
  *(int *)(param_1 + 0xc) = DAT_14cb0f180;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar3,0);
    memcpy((void *)param_1[0xb],pvVar2,lVar6 * 2);
  }
  plVar1 = param_1 + 5;
  if (param_2 == (wchar_t *)0x0) {
    FUN_140810f5e(&local_50,0);
    local_60[0] = local_50;
    if (plVar1 != &local_50) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[5] = local_50;
      *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
      goto LAB_140810e18;
    }
  }
  else {
    local_40 = param_2;
    sVar5 = wcslen(param_2);
    local_38 = (int)sVar5;
    cVar4 = FUN_14022f3b8(&local_40,0,0);
    if (cVar4 != '\0') {
      FUN_14020fad6(plVar1,param_2);
      goto LAB_140810e18;
    }
    FUN_140056680(local_60,param_2);
    FUN_1405f3246(&local_50,local_60,1);
    if (plVar1 == &local_50) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[5] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
      local_48 = 0;
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
LAB_140810e18:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140810f5e FUN_140810f5e body=183 status=ok
// SIG undefined FUN_140810f5e(void)

undefined8 * FUN_140810f5e(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_140628716();
  lVar2 = plVar1[0x22];
  if (param_2 == '\x02') {
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    local_28 = *(longlong *)(lVar2 + 0xa0);
  }
  else {
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    local_28 = *(longlong *)(lVar2 + 0x80);
  }
  if (local_28 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1400021e4(&local_28,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140811016 FUN_140811016 body=672 status=ok
// SIG undefined FUN_140811016(void)

void FUN_140811016(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined1 local_74 [4];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_1;
  iVar2 = (int)param_2[5];
  local_80 = param_3;
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar11 = 0;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar7 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_2 + 2);
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar13 == uVar11) goto LAB_140811284;
        iVar12 = iVar12 + 0x20;
        uVar10 = puVar7[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar13 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 < iVar2) {
    local_88 = local_88 + 0xa8;
    uVar10 = 0xffffffff;
    local_90 = param_4;
    do {
      lVar9 = *(longlong *)(*param_2 + (longlong)iVar4 * 0x18);
      local_68 = *(longlong *)(*param_2 + 8 + (longlong)iVar4 * 0x18);
      if (local_68 != 0 && lVar9 != 0) {
        iVar2 = (int)local_80[1];
        *(uint *)(local_80 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)local_80 + 0xc) < iVar2 + 1U) {
          FUN_1491c0f8c(local_80,iVar2);
          param_4 = local_90;
        }
        lVar8 = *local_80;
        *(longlong *)(lVar8 + (longlong)iVar2 * 0x10) = local_68;
        *(longlong *)(lVar8 + 8 + (longlong)iVar2 * 0x10) = lVar9;
        *(undefined1 *)(local_80 + 2) = 0;
        if (param_4 != 0) {
          local_74[0] = 4;
          local_70 = local_68;
          uVar3 = FUN_140813180(param_4,local_74);
          param_4 = local_90;
          if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(local_90 + 0xc0))) &&
              (lVar9 = *(longlong *)(*(longlong *)(local_90 + 0xb8) + (ulonglong)uVar3 * 8),
              lVar9 != 0)) && (*(char *)(lVar9 + 0x10) == '\x04')) {
            local_78 = *(undefined4 *)(lVar9 + 0x1c);
            local_60 = &local_68;
            local_58 = &local_78;
            FUN_1410952c6(local_88,local_4c,&local_60,0);
            param_4 = local_90;
          }
        }
      }
      uVar10 = uVar10 & ~(uint)uVar13;
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_2 + 2);
      }
      iVar2 = (int)param_2[5];
      iVar4 = (int)uVar11;
      lVar9 = (longlong)iVar4;
      uVar3 = puVar7[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar5 <= iVar4) break;
        lVar8 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar3 = puVar7[lVar9 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar9 == lVar8) goto LAB_140811284;
        }
        uVar11 = (ulonglong)(iVar4 + (int)lVar8 + 1);
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar2);
  }
LAB_140811284:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408112b8 FUN_1408112b8 body=1 status=ok
// SIG undefined FUN_1408112b8(void)

void FUN_1408112b8(void)

{
  return;
}



// FUNCTION 1408112ba FUN_1408112ba body=19 status=ok
// SIG undefined FUN_1408112ba(void)

void FUN_1408112ba(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408112c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x18))();
    return;
  }
  return;
}



// FUNCTION 140811358 FUN_140811358 body=4936 status=ok
// SIG undefined FUN_140811358(void)

void FUN_140811358(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ulonglong *puVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  void *_Dst;
  undefined1 *puVar14;
  ushort *puVar15;
  ushort uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  short *psVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 uVar28;
  longlong *plVar29;
  int iVar30;
  ushort *puVar31;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong *local_170;
  uint local_168;
  uint local_164;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined2 local_13a;
  ulonglong local_138 [3];
  undefined1 local_11a [2];
  uint *local_118;
  undefined8 uStack_110;
  ushort local_100 [3];
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  longlong *local_98;
  ulonglong *puStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = param_2[0x5f];
  uStack_f0 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0);
  local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8);
  if (local_180 != 0) {
    local_170 = param_2;
    if (*(char *)(param_1 + 0x252) == '\x01') {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0._0_4_ = 0;
      uStack_f0._4_4_ = 0;
      FUN_1491ddccc(local_180);
      lVar27 = *(longlong *)(param_1 + 0x228);
      if (lVar27 != 0) {
        if (*(int *)(lVar27 + 0x34) < 0) {
          *(undefined4 *)(lVar27 + 0x30) = 0;
          FUN_14481578e(lVar27 + 0x28,0);
        }
        else {
          *(undefined4 *)(lVar27 + 0x30) = 0;
        }
        lVar27 = *(longlong *)(param_1 + 0x228);
        if (*(int *)(lVar27 + 0x44) < 0) {
          *(undefined4 *)(lVar27 + 0x40) = 0;
          FUN_14475e67c(lVar27 + 0x38,0);
        }
        else {
          *(undefined4 *)(lVar27 + 0x40) = 0;
        }
        FUN_1491c7604(*(longlong *)(param_1 + 0x228) + 0x110);
        uVar19 = *(uint *)(param_3 + 1);
        uVar21 = (ulonglong)uVar19;
        lVar27 = *(longlong *)(param_1 + 0x228);
        if (*(int *)(lVar27 + 100) < 0) {
          *(undefined4 *)(lVar27 + 0x60) = 0;
          FUN_1401a2688(lVar27 + 0x58,0);
        }
        else {
          *(undefined4 *)(lVar27 + 0x60) = 0;
        }
        lVar27 = *(longlong *)(param_1 + 0x228);
        if (*(int *)(lVar27 + 0x54) < 0) {
          *(undefined4 *)(lVar27 + 0x50) = 0;
          FUN_1401a2688(lVar27 + 0x48,0);
        }
        else {
          *(undefined4 *)(lVar27 + 0x50) = 0;
        }
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar21);
        }
        lVar27 = *(longlong *)(param_1 + 0x228);
        if (*(int *)(lVar27 + 0x34) < (int)uVar19) {
          FUN_14481578e(lVar27 + 0x28,uVar19);
          lVar27 = *(longlong *)(param_1 + 0x228);
        }
        if (*(int *)(lVar27 + 0x44) < (int)uVar19) {
          FUN_14475e67c(lVar27 + 0x38,uVar19);
          lVar27 = *(longlong *)(param_1 + 0x228);
        }
        FUN_146ed49ae(lVar27 + 0x58,uVar19);
        FUN_146ed49ae(*(longlong *)(param_1 + 0x228) + 0x48,uVar19);
        FUN_14005eae2(*(longlong *)(param_1 + 0x228) + 0xa8);
        bVar7 = 1;
        if (*(char *)(param_1 + 0x73) == '\0') {
          bVar7 = FUN_144729dda(param_1 + 0xf8);
        }
        *(byte *)(*(longlong *)(param_1 + 0x228) + 0x20) = bVar7 ^ 1;
        if (uVar21 != 0) {
          lVar27 = 0;
          uVar18 = 0;
          do {
            lVar26 = *(longlong *)(param_1 + 0x228);
            iVar17 = *(int *)(lVar26 + 0x30);
            *(uint *)(lVar26 + 0x30) = iVar17 + 1U;
            if (*(uint *)(lVar26 + 0x34) < iVar17 + 1U) {
              FUN_1446f48e2((longlong *)(lVar26 + 0x28),iVar17);
            }
            *(undefined4 *)(*(longlong *)(lVar26 + 0x28) + (longlong)iVar17 * 4) = 0xffffffff;
            iVar17 = *(int *)(param_3[0x12] + (lVar27 >> 0x1e));
            if (iVar17 != -1) {
              *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x28) + uVar18 * 4) = iVar17;
            }
            lVar26 = *(longlong *)(param_1 + 0x228);
            iVar17 = *(int *)(lVar26 + 0x40);
            *(uint *)(lVar26 + 0x40) = iVar17 + 1U;
            if (*(uint *)(lVar26 + 0x44) < iVar17 + 1U) {
              FUN_1401c3474((longlong *)(lVar26 + 0x38),iVar17);
            }
            *(undefined1 *)(*(longlong *)(lVar26 + 0x38) + (longlong)iVar17) = 0;
            uVar18 = uVar18 + 1;
            lVar27 = lVar27 + 0x100000000;
          } while (uVar21 != uVar18);
        }
        local_f9 = 0;
        FUN_149198544(*(undefined8 *)(param_1 + 0x228));
        local_118 = (uint *)0x0;
        uStack_110 = 0;
        cVar6 = FUN_144729dda(param_3 + 6);
        puVar5 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8);
        uStack_f0 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0);
        if (((cVar6 != '\0') &&
            (puVar5 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8),
            uStack_f0 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0), param_3[9] != 0)) &&
           (puVar5 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8),
           uStack_f0 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0), 0 < (int)param_3[1])) {
          lVar27 = *(longlong *)(param_1 + 0x228);
          if ((uint)(*(int *)(lVar27 + 0x118) - *(int *)(lVar27 + 0x144)) < uVar19) {
            FUN_1491c77c2(lVar27 + 0x110,uVar19);
            iVar17 = 1;
            if (3 < uVar19) {
              uVar8 = (uVar19 | 1) + 0xe;
              iVar17 = 0x1f;
              if (uVar8 != 0) {
                for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
                }
              }
              iVar17 = 1 << ((byte)iVar17 & 0x1f);
            }
            if ((*(int *)(lVar27 + 0x158) == 0) || (*(int *)(lVar27 + 0x158) < iVar17)) {
              *(int *)(lVar27 + 0x158) = iVar17;
              FUN_140728e20(lVar27 + 0x110);
            }
          }
          if (*(int *)(*(longlong *)(param_1 + 0x228) + 0x16c) < (int)uVar19) {
            FUN_14481578e(*(longlong *)(param_1 + 0x228) + 0x160,uVar19);
          }
          lVar27 = param_3[9];
          lVar26 = FUN_14479d2ce(param_3 + 8);
          local_178 = lVar26 + 0x50;
          if (lVar26 == 0) {
            local_178 = lVar27;
          }
          cVar6 = FUN_144729dda(param_1 + 0xf8);
          if (cVar6 == '\0') {
            local_98 = (longlong *)0x0;
            puStack_90 = (ulonglong *)0x0;
            local_138[0] = 0;
            local_138[1] = 0;
            (**(code **)(local_170[0x4f] + 0x10))();
            lVar27 = local_180;
            local_11a = (undefined1  [2])0x0;
            if (uVar21 != 0) {
              uVar8 = 0;
              puVar4 = uStack_f0;
              do {
                uStack_f0._4_4_ = (undefined4)((ulonglong)puVar4 >> 0x20);
                if (((int)uVar8 < (int)param_3[0xf]) &&
                   (lVar26 = (longlong)*(int *)(param_3[0xe] + (ulonglong)(ushort)local_11a * 4),
                   lVar26 != -1)) {
                  if ((longlong)(int)puStack_90 != 0) {
                    lVar26 = *(longlong *)(*(longlong *)(local_178 + 0x20) + lVar26 * 0xc);
                    lVar24 = 0;
LAB_140811e0a:
                    if (*(longlong *)((longlong)local_98 + lVar24) != lVar26)
                    goto code_r0x000140811e10;
                    local_f8._1_3_ = (undefined3)((ulonglong)local_f8 >> 8);
                    local_f8._0_4_ = CONCAT31(local_f8._1_3_,1);
                    local_f8._4_4_ = (uint)lVar26;
                    uStack_f0._0_4_ = (int)((ulonglong)lVar26 >> 0x20);
                    uVar8 = FUN_140813180(local_180,&local_f8);
                    uVar21 = uStack_110;
                    puVar4 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0);
                    if (uVar8 != 0xffffffff) {
                      lVar26 = (longlong)(int)uStack_110;
                      uVar9 = (int)uStack_110 + 1;
                      uStack_110 = CONCAT44(uStack_110._4_4_,uVar9);
                      if (uStack_110._4_4_ < uVar9) {
                        FUN_1446f48e2(&local_118,uVar21 & 0xffffffff);
                      }
                      local_118[lVar26] = uVar8;
                      local_13a = (undefined2)uVar8;
                      local_f8 = (ulonglong *)&local_13a;
                      uStack_f0 = (ushort *)local_11a;
                      FUN_140728a6a(*(longlong *)(param_1 + 0x228) + 0x110,local_100,&local_f8,0);
                      lVar26 = *(longlong *)(param_1 + 0x228);
                      iVar17 = *(int *)(lVar26 + 0x168);
                      *(uint *)(lVar26 + 0x168) = iVar17 + 1U;
                      if (*(uint *)(lVar26 + 0x16c) < iVar17 + 1U) {
                        FUN_1446f48e2((longlong *)(lVar26 + 0x160),iVar17);
                      }
                      *(uint *)(*(longlong *)(lVar26 + 0x160) + (longlong)iVar17 * 4) = uVar8;
                      FUN_144afced8(lVar27,&local_f8,uVar8);
                      puVar20 = &local_f8;
                      puVar23 = (undefined8 *)
                                ((ulonglong)((uint)(ushort)local_11a * 0x60) +
                                *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x48));
                      for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar23 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar23 = puVar23 + 1;
                      }
                      FUN_14486750c(lVar27,&local_f8);
                      puVar20 = &local_f8;
                      puVar23 = (undefined8 *)
                                ((ulonglong)((uint)(ushort)local_11a * 0x60) +
                                *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x58));
                      for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                        *puVar23 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar23 = puVar23 + 1;
                      }
                      goto LAB_140811e5b;
                    }
                  }
                }
LAB_140811e19:
                lVar26 = *(longlong *)(param_1 + 0x228);
                iVar17 = *(int *)(lVar26 + 0x168);
                *(uint *)(lVar26 + 0x168) = iVar17 + 1U;
                uStack_f0 = puVar4;
                if (*(uint *)(lVar26 + 0x16c) < iVar17 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar26 + 0x160),iVar17);
                }
                *(undefined4 *)(*(longlong *)(lVar26 + 0x160) + (longlong)iVar17 * 4) = 0xffffffff;
LAB_140811e5b:
                local_11a = (undefined1  [2])((short)local_11a + 1);
                uVar8 = (uint)(ushort)local_11a;
                puVar4 = uStack_f0;
              } while ((int)uVar8 < (int)uVar19);
            }
            if (local_138[0] != 0) {
              FUN_1400020a8();
            }
            if (local_98 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            local_78 = 0;
            local_70 = 0;
            local_98 = (longlong *)0x0;
            puStack_90 = (ulonglong *)0x0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            uVar11 = FUN_14479d2ce(param_1 + 0xf8);
            FUN_14793b58e(uVar11,&local_98);
            lVar27 = local_180;
            local_100[0] = 0;
            if (uVar21 != 0) {
              uVar8 = 0;
              puVar4 = uStack_f0;
              do {
                uStack_f0._4_4_ = (undefined4)((ulonglong)puVar4 >> 0x20);
                if ((((int)uVar8 < (int)param_3[0xf]) &&
                    (lVar26 = (longlong)*(int *)(param_3[0xe] + (ulonglong)local_100[0] * 4),
                    lVar26 != -1)) && ((int)puStack_90 != local_64)) {
                  lVar26 = *(longlong *)(*(longlong *)(local_178 + 0x20) + lVar26 * 0xc);
                  uVar8 = (uint)((ulonglong)lVar26 >> 0x10);
                  uVar9 = (uint)lVar26 & 0xffff;
                  puVar14 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar14 = local_60;
                  }
                  iVar17 = *(int *)(puVar14 +
                                   (ulonglong)
                                   (local_50 - 1U &
                                   (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar9)
                                   + (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar9 >> 4)) * 4);
                  if (iVar17 != -1) {
LAB_1408124e8:
                    plVar29 = local_98 + (longlong)iVar17 * 3;
                    if (*plVar29 != lVar26) goto code_r0x0001408124f8;
                    if (plVar29 + 1 != (longlong *)0x0 && plVar29 != (longlong *)0x0) {
                      local_f8._1_3_ = (undefined3)((ulonglong)local_f8 >> 8);
                      local_f8._0_4_ = CONCAT31(local_f8._1_3_,1);
                      lVar26 = plVar29[1];
                      local_f8._4_4_ = (uint)lVar26;
                      uStack_f0._0_4_ = (int)((ulonglong)lVar26 >> 0x20);
                      uVar8 = FUN_140813180(local_180,&local_f8);
                      uVar21 = uStack_110;
                      puVar4 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0);
                      if (uVar8 != 0xffffffff) {
                        lVar26 = (longlong)(int)uStack_110;
                        uVar9 = (int)uStack_110 + 1;
                        uStack_110 = CONCAT44(uStack_110._4_4_,uVar9);
                        if (uStack_110._4_4_ < uVar9) {
                          FUN_1446f48e2(&local_118,uVar21 & 0xffffffff);
                        }
                        local_118[lVar26] = uVar8;
                        local_11a = SUB42(uVar8,0);
                        local_f8 = (ulonglong *)local_11a;
                        uStack_f0 = local_100;
                        FUN_140728a6a(*(longlong *)(param_1 + 0x228) + 0x110,local_138,&local_f8,0);
                        lVar26 = *(longlong *)(param_1 + 0x228);
                        iVar17 = *(int *)(lVar26 + 0x168);
                        *(uint *)(lVar26 + 0x168) = iVar17 + 1U;
                        if (*(uint *)(lVar26 + 0x16c) < iVar17 + 1U) {
                          FUN_1446f48e2((longlong *)(lVar26 + 0x160),iVar17);
                        }
                        *(uint *)(*(longlong *)(lVar26 + 0x160) + (longlong)iVar17 * 4) = uVar8;
                        FUN_144afced8(lVar27,&local_f8,uVar8,0);
                        puVar20 = &local_f8;
                        puVar23 = (undefined8 *)
                                  ((ulonglong)((uint)local_100[0] * 0x60) +
                                  *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x48));
                        for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                          *puVar23 = *puVar20;
                          puVar20 = puVar20 + 1;
                          puVar23 = puVar23 + 1;
                        }
                        FUN_14486750c(lVar27,&local_f8,uVar8,0);
                        puVar20 = &local_f8;
                        puVar23 = (undefined8 *)
                                  ((ulonglong)((uint)local_100[0] * 0x60) +
                                  *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x58));
                        for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                          *puVar23 = *puVar20;
                          puVar20 = puVar20 + 1;
                          puVar23 = puVar23 + 1;
                        }
                        goto LAB_14081245d;
                      }
                    }
                  }
                }
LAB_14081241b:
                lVar26 = *(longlong *)(param_1 + 0x228);
                iVar17 = *(int *)(lVar26 + 0x168);
                *(uint *)(lVar26 + 0x168) = iVar17 + 1U;
                uStack_f0 = puVar4;
                if (*(uint *)(lVar26 + 0x16c) < iVar17 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar26 + 0x160),iVar17);
                }
                *(undefined4 *)(*(longlong *)(lVar26 + 0x160) + (longlong)iVar17 * 4) = 0xffffffff;
LAB_14081245d:
                local_100[0] = local_100[0] + 1;
                uVar8 = (uint)local_100[0];
                puVar4 = uStack_f0;
              } while ((int)uVar8 < (int)uVar19);
            }
            local_50 = 0;
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_140105116(&local_98);
          }
          lVar27 = *(longlong *)(param_1 + 0x228);
          iVar17 = (int)uStack_110;
          if (*(char *)(lVar27 + 0x20) == '\x01') {
            if ((int)uStack_110 == 0) {
              iVar17 = 0;
            }
            else {
              puVar1 = local_118 + (int)uStack_110;
              puVar22 = local_118;
              do {
                uVar19 = *puVar22;
                uVar8 = FUN_1491db798(local_180,uVar19);
                lVar27 = *(longlong *)(param_1 + 0x228);
                if (*(int *)(lVar27 + 0x118) != *(int *)(lVar27 + 0x144)) {
                  lVar26 = lVar27 + 0x148;
                  if (*(longlong *)(lVar27 + 0x150) != 0) {
                    lVar26 = *(longlong *)(lVar27 + 0x150);
                  }
                  iVar17 = *(int *)(lVar26 + (ulonglong)
                                             (*(int *)(lVar27 + 0x158) - 1U & uVar19 & 0xffff) * 4);
                  if (iVar17 != -1) {
                    do {
                      psVar25 = (short *)(*(longlong *)(lVar27 + 0x110) + (longlong)iVar17 * 0xc);
                      if (*psVar25 == (short)uVar19) goto LAB_140812033;
                      iVar17 = *(int *)(psVar25 + 2);
                    } while (iVar17 != -1);
                  }
                }
                psVar25 = (short *)0x0;
LAB_140812033:
                uVar19 = *(uint *)(*(longlong *)(lVar27 + 0x28) + (longlong)psVar25[1] * 4);
                uVar28 = 0;
                uVar11 = 0;
                iVar17 = 0;
                if (uVar8 != 0xffffffff) {
                  if (((int)uVar8 < 0) || (*(int *)(local_180 + 0xc0) <= (int)uVar8)) {
                    lVar26 = 0;
                  }
                  else {
                    lVar26 = *(longlong *)(*(longlong *)(local_180 + 0xb8) + (ulonglong)uVar8 * 8);
                  }
                  uVar11 = *(undefined8 *)(lVar26 + 0x14);
                  iVar17 = (int)((ulonglong)uVar11 >> 0x20);
                }
                iVar30 = 0;
                if (uVar19 != 0xffffffff) {
                  iVar30 = -1;
                  if ((-1 < (int)uVar19) && ((int)uVar19 < (int)param_3[0xf])) {
                    iVar30 = *(int *)(param_3[0xe] + (ulonglong)uVar19 * 4);
                  }
                  uVar28 = *(undefined8 *)(*(longlong *)(local_178 + 0x20) + (longlong)iVar30 * 0xc)
                  ;
                  iVar30 = (int)((ulonglong)uVar28 >> 0x20);
                }
                if (((int)uVar11 != (int)uVar28) || (iVar17 != iVar30)) {
                  *(undefined1 *)(*(longlong *)(lVar27 + 0x38) + (longlong)psVar25[1]) = 1;
                  *(undefined1 *)(*(longlong *)(param_1 + 0x228) + 0x20) = 0;
                }
                puVar22 = puVar22 + 1;
              } while (puVar22 != puVar1);
              lVar27 = *(longlong *)(param_1 + 0x228);
              iVar17 = (int)uStack_110;
            }
          }
          plVar29 = *(longlong **)(local_180 + 0xf0);
          lVar26 = plVar29[1];
          if (*(int *)(lVar27 + 0x10c) < 0) {
            *(undefined4 *)(lVar27 + 0x108) = 0;
            FUN_14481578e(lVar27 + 0x100,0);
          }
          else {
            *(undefined4 *)(lVar27 + 0x108) = 0;
          }
          *(byte *)(*(longlong *)(param_1 + 0x228) + 0xfc) =
               iVar17 != (int)lVar26 & *(byte *)(param_1 + 0x70);
          puVar5 = local_f8;
          if (*(char *)(*(longlong *)(param_1 + 0x228) + 0xfc) == '\x01') {
            iVar17 = (int)plVar29[1];
            iVar30 = iVar17 - (int)uStack_110;
            if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar30);
            }
            if (*(int *)(*(longlong *)(param_1 + 0x228) + 0x10c) < iVar30) {
              FUN_14481578e();
              iVar17 = (int)plVar29[1];
            }
            local_f8._0_4_ = 0;
            local_f8._4_4_ = 0;
            uStack_f0._4_4_ = 0;
            uStack_f0._0_4_ = iVar17;
            if (iVar17 == 0) {
              _Dst = (void *)0x0;
            }
            else {
              FUN_1401c3474(&local_f8);
              _Dst = (void *)CONCAT44(local_f8._4_4_,(int)local_f8);
            }
            memset(_Dst,0,(longlong)iVar17);
            if ((longlong)(int)uStack_110 != 0) {
              lVar27 = 0;
              do {
                iVar17 = *(int *)((longlong)local_118 + lVar27);
                if (((longlong)iVar17 < 0) || (*(int *)(local_180 + 0xc0) <= iVar17)) {
                  lVar26 = 0;
                }
                else {
                  lVar26 = *(longlong *)(*(longlong *)(local_180 + 0xb8) + (longlong)iVar17 * 8);
                }
                *(undefined1 *)
                 (CONCAT44(local_f8._4_4_,(int)local_f8) + (longlong)*(int *)(lVar26 + 0x20)) = 1;
                lVar27 = lVar27 + 4;
              } while ((longlong)(int)uStack_110 * 4 != lVar27);
            }
            if (0 < (int)uStack_f0) {
              lVar27 = 0;
              iVar17 = (int)uStack_f0;
              do {
                if (*(char *)(CONCAT44(local_f8._4_4_,(int)local_f8) + lVar27) == '\0') {
                  lVar26 = *(longlong *)(param_1 + 0x228);
                  uVar3 = *(undefined4 *)(*(longlong *)(*plVar29 + lVar27 * 8) + 0x1c);
                  iVar17 = *(int *)(lVar26 + 0x108);
                  *(uint *)(lVar26 + 0x108) = iVar17 + 1U;
                  if (*(uint *)(lVar26 + 0x10c) < iVar17 + 1U) {
                    FUN_1446f48e2((longlong *)(lVar26 + 0x100),iVar17);
                  }
                  *(undefined4 *)(*(longlong *)(lVar26 + 0x100) + (longlong)iVar17 * 4) = uVar3;
                  iVar17 = (int)uStack_f0;
                }
                lVar27 = lVar27 + 1;
              } while (lVar27 < iVar17);
            }
            puVar5 = (ulonglong *)0x0;
            if (CONCAT44(local_f8._4_4_,(int)local_f8) != 0) {
              FUN_1400020a8();
              puVar5 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8);
            }
          }
        }
        local_f8 = puVar5;
        if (local_118 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      local_148 = (longlong *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x110) = 0;
      if (*(int *)(param_1 + 0x114) < 0) {
        FUN_1491c795e(local_148);
      }
      local_150 = (longlong *)(param_1 + 0x118);
      *(undefined4 *)(param_1 + 0x120) = 0;
      if (*(int *)(param_1 + 0x124) < 0) {
        FUN_1491c795e(local_150);
      }
      if (*(int *)(param_1 + 0x134) < 0) {
        *(undefined4 *)(param_1 + 0x130) = 0;
        FUN_1491c798e(param_1 + 0x128);
      }
      else {
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      local_160 = (longlong *)(param_1 + 0x138);
      FUN_140812a8a();
      local_158 = (longlong *)(param_1 + 0x188);
      FUN_140812a8a();
      FUN_14574b114(param_1 + 0x1d8);
      cVar6 = FUN_144729dda(param_3 + 6);
      uStack_f0 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0);
      local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8);
      if (((cVar6 != '\0') &&
          (lVar27 = param_3[9], uStack_f0 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0),
          local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8), lVar27 != 0)) &&
         (iVar17 = (int)param_3[1], uStack_f0 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0),
         local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,(int)local_f8), 0 < iVar17)) {
        local_178 = param_1 + 0xf8;
        cVar6 = FUN_144729dda();
        if (cVar6 == '\0') {
          local_98 = (longlong *)0x0;
          puStack_90 = (ulonglong *)0x0;
          local_118 = (uint *)0x0;
          uStack_110 = 0;
          (**(code **)(param_2[0x4f] + 0x10))(param_2 + 0x4f);
          local_11a = (undefined1  [2])0x0;
          do {
            local_138[0] = *(ulonglong *)
                            (*(longlong *)(lVar27 + 0x20) +
                            (ulonglong)*(ushort *)(*param_3 + (ulonglong)(ushort)local_11a * 2) *
                            0xc);
            if ((longlong)(int)puStack_90 != 0) {
              lVar26 = 0;
              do {
                if (*(ulonglong *)((longlong)local_98 + lVar26) == local_138[0]) {
                  local_f8 = local_138;
                  uStack_f0 = (ushort *)local_11a;
                  FUN_1408126a2(local_160,local_100,&local_f8);
                  break;
                }
                lVar26 = lVar26 + 8;
              } while ((longlong)(int)puStack_90 * 8 != lVar26);
            }
            local_11a = (undefined1  [2])((short)local_11a + 1);
          } while ((int)(uint)(ushort)local_11a < iVar17);
          if (local_118 != (uint *)0x0) {
            FUN_1400020a8();
          }
          lVar26 = local_178;
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          uVar16 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_f8._0_4_ = 0;
          local_f8._4_4_ = 0;
          uStack_f0._0_4_ = 0;
          uStack_f0._4_4_ = 0;
          local_cc = 0xffffffff00000080;
          local_c4 = 0;
          local_b8 = (undefined1 *)0x0;
          local_b0 = 0;
          uVar11 = FUN_14479d2ce(local_178);
          FUN_14793b58e(uVar11,&local_f8);
          local_138[0] = local_138[0] & 0xffffffffffff0000;
          do {
            if ((int)uStack_f0 != local_c4) {
              lVar26 = *(longlong *)
                        (*(longlong *)(lVar27 + 0x20) +
                        (ulonglong)*(ushort *)(*param_3 + (ulonglong)uVar16 * 2) * 0xc);
              uVar19 = (uint)((ulonglong)lVar26 >> 0x10);
              uVar8 = (uint)lVar26 & 0xffff;
              puVar14 = local_b8;
              if (local_b8 == (undefined1 *)0x0) {
                puVar14 = local_c0;
              }
              iVar30 = *(int *)(puVar14 +
                               (ulonglong)
                               (local_b0 - 1U &
                               (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar8) +
                               (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar8 >> 4)) * 4);
              if (iVar30 != -1) {
                do {
                  plVar29 = (longlong *)
                            (CONCAT44(local_f8._4_4_,(int)local_f8) + (longlong)iVar30 * 0x18);
                  if (*plVar29 == lVar26) {
                    if (plVar29 + 1 != (longlong *)0x0 && plVar29 != (longlong *)0x0) {
                      local_98 = plVar29 + 1;
                      puStack_90 = local_138;
                      FUN_1408126a2(local_160,&local_118,&local_98);
                      uVar16 = (ushort)local_138[0];
                    }
                    break;
                  }
                  iVar30 = (int)plVar29[2];
                } while (iVar30 != -1);
              }
            }
            uVar16 = uVar16 + 1;
            local_138[0] = CONCAT62(local_138[0]._2_6_,uVar16);
          } while ((int)(uint)uVar16 < iVar17);
          local_b0 = 0;
          if (local_b8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_140105116(&local_f8);
          lVar26 = local_178;
        }
        plVar29 = local_160;
        if (*(int *)(param_1 + 0x80) != 0) {
          FUN_145860a8a(local_158,local_160);
          local_188 = plVar29;
          local_190 = local_170;
          local_198 = param_3;
          FUN_14448a2b4(param_1 + 0x78,lVar26,param_3,lVar27);
        }
        if (*(int *)(param_1 + 0x90) != 0) {
          local_188 = local_158;
          local_190 = local_170;
          local_198 = param_3;
          FUN_14448a2b4(param_1 + 0x88,lVar26,param_3,lVar27);
        }
        cVar6 = FUN_144729dda();
        if (cVar6 == '\0') {
          uVar21 = CONCAT71((int7)((ulonglong)lVar27 >> 8),1);
          puVar4 = uStack_f0;
          do {
            plVar29 = local_158;
            if ((char)uVar21 != '\0') {
              plVar29 = local_160;
            }
            if ((int)plVar29[1] != *(int *)((longlong)plVar29 + 0x34)) {
              local_164 = (uint)uVar21;
              plVar10 = local_150;
              if ((char)uVar21 != '\0') {
                plVar10 = local_148;
              }
              puVar31 = (ushort *)(plVar29 + 2);
              local_f8._0_4_ = 0;
              local_f8._4_4_ = 1;
              local_e8 = 0xffffffff;
              local_e0 = 0;
              local_170 = plVar10;
              if ((int)plVar29[5] == 0) {
                uVar21 = 1;
                local_e8._0_4_ = 0xffffffff;
                local_e8._4_4_ = 0;
              }
              else {
                uStack_f0 = puVar31;
                plVar10 = (longlong *)FUN_1449c0562(&local_f8);
                uVar21 = (ulonglong)local_f8._4_4_;
                puVar31 = uStack_f0;
              }
              uStack_f0._4_4_ = (undefined4)((ulonglong)puVar31 >> 0x20);
              puVar4 = puVar31;
              if (local_e8._4_4_ < *(int *)(puVar31 + 0xc)) {
                local_168 = (uint)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
                uVar19 = (uint)local_e8;
                iVar30 = (int)local_f8;
                iVar12 = local_e8._4_4_;
                iVar17 = local_e0;
                do {
                  local_178 = CONCAT44(local_178._4_4_,iVar17);
                  uVar16 = *(ushort *)(*plVar29 + 8 + (longlong)iVar12 * 0x14);
                  local_f8._0_4_ = CONCAT31(local_f8._1_3_,1);
                  uVar11 = *(undefined8 *)(*plVar29 + (longlong)iVar12 * 0x14);
                  local_f8._4_4_ = (uint)uVar11;
                  uStack_f0._0_4_ = (int)((ulonglong)uVar11 >> 0x20);
                  uVar8 = FUN_140813180(local_180,&local_f8);
                  if (uVar8 == 0xffffffff) {
                    local_168 = 0;
                  }
                  else {
                    iVar17 = (int)local_170[1];
                    *(uint *)(local_170 + 1) = iVar17 + 1U;
                    if (*(uint *)((longlong)local_170 + 0xc) < iVar17 + 1U) {
                      FUN_14574b158(local_170,iVar17);
                    }
                    *(uint *)(*local_170 + (longlong)iVar17 * 4) =
                         uVar8 & 0xffff | (uint)uVar16 << 0x10;
                  }
                  puVar4 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0);
                  uVar19 = uVar19 & ~(uint)uVar21;
                  puVar15 = *(ushort **)(puVar31 + 8);
                  if (*(ushort **)(puVar31 + 8) == (ushort *)0x0) {
                    puVar15 = puVar31;
                  }
                  iVar2 = *(int *)(puVar31 + 0xc);
                  lVar27 = (longlong)iVar30;
                  uVar8 = *(uint *)(puVar15 + lVar27 * 2) & uVar19;
                  iVar17 = (int)local_178;
                  if (uVar8 == 0) {
                    iVar12 = iVar2 + 0x1e;
                    if (-1 < iVar2 + -1) {
                      iVar12 = iVar2 + -1;
                    }
                    iVar12 = iVar12 >> 5;
                    iVar13 = iVar12;
                    if (iVar12 < iVar30) {
                      iVar13 = iVar30;
                    }
                    if (iVar12 <= iVar30) break;
                    lVar26 = 0;
                    while( true ) {
                      iVar17 = iVar17 + 0x20;
                      uVar8 = *(uint *)(puVar15 + lVar27 * 2 + lVar26 * 2 + 2);
                      if (uVar8 != 0) break;
                      lVar26 = lVar26 + 1;
                      if (iVar13 - lVar27 == lVar26) goto LAB_140811799;
                    }
                    iVar30 = iVar30 + (int)lVar26 + 1;
                    uVar19 = 0xffffffff;
                  }
                  uVar21 = (ulonglong)(-uVar8 & uVar8);
                  uVar18 = uVar21 * 2 + 1;
                  lVar27 = 0x3f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                    }
                  }
                  iVar12 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                } while (iVar12 < iVar2);
LAB_140811799:
                if ((local_168 & 1) == 0) {
                  *(undefined4 *)(local_170 + 1) = 0;
                  uVar21 = (ulonglong)local_164;
                  if (*(int *)((longlong)local_170 + 0xc) < 0) {
                    FUN_1491c795e();
                    puVar4 = (ushort *)CONCAT44(uStack_f0._4_4_,(int)uStack_f0);
                  }
                  goto LAB_1408117c0;
                }
              }
              uStack_f0 = puVar4;
              FUN_140812a8a();
              uVar21 = (ulonglong)local_164;
              puVar4 = uStack_f0;
            }
LAB_1408117c0:
            uVar18 = uVar21 & 1;
            uVar21 = 0;
            uStack_f0 = puVar4;
          } while (uVar18 != 0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001408124f8:
  iVar17 = (int)plVar29[2];
  if (iVar17 == -1) goto LAB_14081241b;
  goto LAB_1408124e8;
code_r0x000140811e10:
  lVar24 = lVar24 + 8;
  if ((longlong)(int)puStack_90 * 8 == lVar24) goto LAB_140811e19;
  goto LAB_140811e0a;
}



// FUNCTION 1408126a2 FUN_1408126a2 body=353 status=ok
// SIG undefined FUN_1408126a2(void)

undefined4 * FUN_1408126a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408128a4(param_1,local_40);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_38 = uVar2;
  *(undefined2 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_140812804(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_38 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_38 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140812c16(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140812804 FUN_140812804 body=159 status=ok
// SIG undefined FUN_140812804(void)

void FUN_140812804(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_147548c94(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_14081286d;
    }
  }
  uVar2 = 0;
LAB_14081286d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1408128a4 FUN_1408128a4 body=485 status=ok
// SIG undefined FUN_1408128a4(void)

int * FUN_1408128a4(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140812a8a FUN_140812a8a body=70 status=ok
// SIG undefined FUN_140812a8a(void)

void FUN_140812a8a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140812ad0();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140812ad0 FUN_140812ad0 body=325 status=ok
// SIG undefined FUN_140812ad0(void)

void FUN_140812ad0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 140812c16 FUN_140812c16 body=594 status=ok
// SIG undefined FUN_140812c16(void)

void FUN_140812c16(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x14);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x10 + lVar13 * 0x14) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0xc + lVar13 * 0x14) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_140812e1f;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_140812e1f:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140812e6a FUN_140812e6a body=597 status=ok
// SIG undefined FUN_140812e6a(void)

void FUN_140812e6a(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_158 [40];
  longlong local_130;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined4 local_c0;
  char local_bc [4];
  undefined8 local_b8;
  undefined8 local_b0 [13];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_147d1f11e(param_3,0);
  }
  lVar5 = *(longlong *)(param_1 + 0x80);
  iVar4 = *(int *)(lVar5 + 0xc0);
  if (0 < iVar4) {
    lVar8 = 0;
    local_130 = lVar5;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + lVar8 * 8);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x01')) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1446f84a2(param_2,iVar4);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar2 + 0x14);
        local_c0 = *(undefined4 *)(lVar2 + 0x18);
        local_c8 = *(undefined8 *)(lVar2 + 0x10);
        FUN_1408130c0(*(undefined8 *)(param_1 + 0x80),local_bc,&local_c8);
        if (local_bc[0] != '\x01') {
          local_b8 = 0;
        }
        iVar4 = *(int *)(lVar2 + 0x1c);
        if (((((longlong)iVar4 < 0) ||
             (lVar5 = *(longlong *)(param_1 + 0x80), *(int *)(lVar5 + 0xc0) <= iVar4)) ||
            (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (longlong)iVar4 * 8), lVar2 == 0))
           || (((bVar1 = *(byte *)(lVar2 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
               ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))) {
          puVar7 = &DAT_14c846480;
          puVar6 = local_128;
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          FUN_1401571e4(lVar5,local_128,lVar2,2);
        }
        uVar3 = local_b8;
        puVar7 = local_b0;
        puVar6 = local_128;
        for (lVar5 = 0xc; puVar7 = puVar7 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_140813296(param_3,iVar4);
        }
        puVar7 = (undefined8 *)(*param_3 + (longlong)iVar4 * 0x70);
        *puVar7 = uVar3;
        puVar6 = local_b0;
        for (lVar5 = 0xd; puVar7 = puVar7 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        iVar4 = *(int *)(local_130 + 0xc0);
        lVar5 = local_130;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408130c0 FUN_1408130c0 body=95 status=ok
// SIG undefined FUN_1408130c0(void)

undefined8 * FUN_1408130c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  FUN_140813180(param_1,param_3);
  lVar1 = FUN_140813120();
  if (lVar1 == 0) {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x18);
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return param_2;
}



// FUNCTION 140813120 FUN_140813120 body=96 status=ok
// SIG undefined FUN_140813120(void)

undefined8 FUN_140813120(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 0x10);
  if (bVar1 != 1) {
    if (bVar1 < 0x10) {
      if ((bVar1 != 2) && (bVar1 != 4)) {
        return 0;
      }
      if (*(int *)(param_2 + 0x1b0) < 1) {
        return 0;
      }
      puVar2 = (undefined8 *)(param_2 + 0x110);
      if (*(undefined8 **)(param_2 + 0x1a0) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)(param_2 + 0x1a0);
      }
      return *puVar2;
    }
    if (((bVar1 != 0x10) && (bVar1 != 0x80)) && (bVar1 != 0x20)) {
      return 0;
    }
  }
  return *(undefined8 *)(param_2 + 0x108);
}



// FUNCTION 140813180 FUN_140813180 body=277 status=ok
// SIG undefined FUN_140813180(void)

uint FUN_140813180(longlong param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if ((*(longlong *)(param_1 + 0x570) == 0) ||
     (lVar4 = FUN_1408133a6(*(longlong *)(param_1 + 0x570),param_2), lVar4 == 0)) {
    uVar3 = 0xffffffff;
    if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
      lVar4 = *(longlong *)(param_2 + 4);
      uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar5 = (uint)lVar4 & 0xffff;
      lVar7 = param_1 + 0x150;
      if (*(longlong *)(param_1 + 0x158) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x158);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x160) - 1U &
                               (uint)*param_2 +
                               ((int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar5) +
                                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 10) * 4);
      if (iVar6 != -1) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 0x18;
          if ((*(longlong *)(lVar7 + 4) == lVar4) &&
             (*(byte *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 0x18) == *param_2)) {
            if (lVar7 == 0) {
              return 0xffffffff;
            }
            if ((uint *)(lVar7 + 0xc) == (uint *)0x0) {
              return 0xffffffff;
            }
            return *(uint *)(lVar7 + 0xc);
          }
          iVar6 = *(int *)(lVar7 + 0x10);
        } while (iVar6 != -1);
      }
    }
  }
  else {
    cVar2 = FUN_1491ddc02(lVar4,param_1);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = 0xffffffff;
      if (*(ushort *)(lVar4 + 0xc) != 0xffff) {
        uVar3 = (uint)*(ushort *)(lVar4 + 0xc);
      }
    }
  }
  return uVar3;
}



// FUNCTION 140813296 FUN_140813296 body=271 status=ok
// SIG undefined FUN_140813296(void)

void FUN_140813296(longlong param_1,int param_2)

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
    uVar5 = lVar4 * 0x70;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1408133a6 FUN_1408133a6 body=175 status=ok
// SIG undefined FUN_1408133a6(void)

longlong FUN_1408133a6(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *(longlong *)(param_2 + 4);
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (uint)*param_2 +
                    ((int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 10) * 4);
    if (iVar6 != -1) {
      lVar1 = *param_1;
      do {
        lVar8 = (longlong)iVar6 * 0x38;
        if ((*(longlong *)(lVar1 + 4 + lVar8) == lVar3) &&
           (lVar4 = lVar1 + lVar8, *(byte *)(lVar1 + lVar8) == *param_2)) break;
        iVar6 = *(int *)(lVar1 + lVar8 + 0x30);
        lVar4 = 0;
      } while (iVar6 != -1);
      goto LAB_1408133b0;
    }
  }
  lVar4 = 0;
LAB_1408133b0:
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140813456 FUN_140813456 body=11245 status=ok
// SIG undefined FUN_140813456(void)

undefined4 FUN_140813456(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  void *_Src;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  size_t sVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  char *pcVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  char **ppcVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong lVar32;
  longlong lVar33;
  undefined4 uVar34;
  longlong lVar35;
  bool bVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_368 [32];
  char **local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  code *local_320;
  undefined1 *local_318;
  undefined8 *local_310;
  code *local_308;
  code *local_300;
  byte local_2ea;
  byte local_2e9;
  longlong *local_2e8;
  byte local_2d9;
  longlong *local_2d8;
  byte local_2cd;
  byte local_2cc;
  char local_2cb;
  byte local_2ca;
  undefined1 local_2c9;
  longlong *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  longlong *local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  int local_2a0;
  longlong *local_298;
  int local_290;
  undefined4 local_28c;
  char *local_288;
  undefined4 local_280;
  char *local_278;
  undefined4 local_270;
  undefined1 local_258 [64];
  longlong local_218;
  undefined4 local_210;
  char *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  int iStack_190;
  uint uStack_18c;
  double *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  cVar9 = (**(code **)(*param_1 + 0x2a8))();
  if (cVar9 == '\0') {
LAB_140813589:
    uVar12 = 0;
    goto LAB_140813d7f;
  }
  cVar9 = FUN_1403f35db(*param_2,&DAT_14cc074d8);
  if ((cVar9 == '\0') && (FUN_1401242c6(), DAT_14c951858 == 0)) {
    local_310 = &local_198;
    local_198._0_4_ = 0x449e2820;
    local_198._4_4_ = 1;
    local_300 = FUN_14081d0ea;
    local_308 = FUN_14081d0ea;
    local_318 = &LAB_1468c5283;
    local_320 = FUN_142809da0;
    local_328 = L"Engine";
    local_330 = 0x400000000;
    local_338 = 0x10000000;
    local_340 = 8;
    local_348 = (char **)CONCAT44(local_348._4_4_,0x50);
    param_4 = (longlong *)&DAT_1468c5288;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
  }
  if ((char)param_1[0x47] == '\x01') {
    lVar28 = param_1[9];
    cVar9 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
    param_1[9] = lVar28;
    if (cVar9 == '\0') goto LAB_140813589;
  }
  local_298 = (longlong *)0x0;
  local_290 = (int)param_1[0x34];
  lVar28 = (longlong)local_290;
  _Src = (void *)param_1[0x33];
  if (lVar28 == 0) {
    local_28c = 0;
LAB_14081359c:
    FUN_1406fa324(&local_298,param_1 + 0x31);
    lVar28 = *param_2;
    if ((longlong)local_290 != 0) {
      plVar15 = local_298 + local_290;
      goto LAB_1408135cd;
    }
    uVar21 = 0;
    bVar37 = true;
    local_2c0 = 0;
  }
  else {
    FUN_1401b309e(&local_298,local_290,0);
    memcpy(local_298,_Src,lVar28 << 3);
    if ((longlong)local_290 == 0) goto LAB_14081359c;
    plVar15 = local_298 + local_290;
    lVar28 = *param_2;
LAB_1408135cd:
    plVar20 = local_298 + 1;
    do {
      bVar37 = plVar20[-1] != lVar28;
      param_4 = plVar20;
      if (plVar20[-1] == lVar28) break;
      param_4 = plVar20 + 1;
      bVar36 = plVar20 != plVar15;
      plVar20 = param_4;
    } while (bVar36);
    uVar21 = CONCAT71((int7)((ulonglong)_Src >> 8),*local_298 == lVar28);
    local_2c0 = (undefined4)
                CONCAT71((int7)(int3)((uint)(local_290 + -1) >> 8),
                         local_298[local_290 + -1] == lVar28);
  }
  local_2e9 = FUN_1403f35db(lVar28,&DAT_14cc074d8);
  local_2ea = FUN_1403f35db(*param_2,&DAT_14cc074e8);
  plVar15 = local_298;
  lVar28 = (longlong)local_290;
  local_2b8 = param_2;
  if (lVar28 != 0) {
    lVar35 = 0;
    do {
      cVar9 = FUN_1403f35db(*(undefined8 *)((longlong)plVar15 + lVar35),&DAT_14cc074e8);
      if (cVar9 != '\0') {
        if ((longlong)DAT_14cc074e8 < 0) {
          pcVar23 = (char *)(DAT_14cc074e8 & 0x7fffffffffffffff);
          if (DAT_14cc074f4 == '\x01') {
            ppcVar29 = (char **)&local_198;
            FUN_1446f470e(ppcVar29,pcVar23,1);
          }
          else {
            local_198._0_4_ = SUB84(pcVar23,0);
            local_198._4_4_ = (undefined4)((ulonglong)pcVar23 >> 0x20);
            if (pcVar23 == (char *)0x0) {
              iStack_190 = 0;
            }
            else {
              sVar17 = strlen(pcVar23);
              iStack_190 = (int)sVar17;
            }
            ppcVar29 = &local_208;
            FUN_14001c09c(ppcVar29,&local_198,1);
          }
          DAT_14cc074e8 = (ulonglong)*(uint *)ppcVar29;
          local_278 = (char *)CONCAT44(DAT_14cc074f0,*(uint *)ppcVar29);
          param_2 = local_2b8;
        }
        else {
          local_278 = (char *)(DAT_14cc074e8 & 0xffffffff | (ulonglong)DAT_14cc074f0 << 0x20);
        }
        local_2bc = (**(code **)(*param_1 + 0x2f8))(param_1,&local_278);
        goto LAB_1408136ba;
      }
      lVar35 = lVar35 + 8;
    } while (lVar28 * 8 != lVar35);
  }
  local_2bc = 0;
LAB_1408136ba:
  plVar15 = local_298;
  lVar28 = (longlong)local_290;
  bVar11 = 1;
  if (lVar28 == 0) {
    bVar10 = 0;
  }
  else {
    local_2e8 = (longlong *)CONCAT44(local_2e8._4_4_,(int)uVar21);
    lVar35 = 0;
    do {
      bVar10 = FUN_1403f35db(*(undefined8 *)((longlong)plVar15 + lVar35),&DAT_14cc07498);
      plVar20 = local_298;
      if (bVar10 != 0) break;
      bVar36 = lVar28 * 8 + -8 != lVar35;
      lVar35 = lVar35 + 8;
    } while (bVar36);
    lVar28 = (longlong)local_290;
    if (lVar28 != 0) {
      lVar35 = 0;
      do {
        bVar11 = FUN_1403f35db(*(undefined8 *)((longlong)plVar20 + lVar35),&DAT_14cc074a8);
        if (bVar11 != 0) break;
        bVar36 = lVar28 * 8 + -8 != lVar35;
        lVar35 = lVar35 + 8;
      } while (bVar36);
      bVar11 = bVar11 ^ 1;
    }
    uVar21 = (ulonglong)local_2e8 & 0xffffffff;
    param_2 = local_2b8;
  }
  local_2cd = FUN_1403f35db(*param_2,&DAT_14cc07498);
  local_2d9 = FUN_1403f35db(*param_2,&DAT_14cc07488);
  local_2cc = FUN_1403f35db(*param_2,&DAT_14cc074a8);
  cVar9 = FUN_1403f35db(*param_2,&DAT_14cc06a40);
  local_2e8 = (longlong *)FUN_1403fefe0(param_1[0x2a]);
  local_2e8[4] = (longlong)(double)*(float *)(param_1 + 9);
  local_2e8[5] = (longlong)(double)*(float *)((longlong)param_1 + 0x4c);
  fVar38 = *(float *)(param_1 + 10);
  if (fVar38 <= 1e-08) {
    if (*(float *)(param_1 + 9) <= 1e-08) {
      fVar38 = 60.0;
    }
    else {
      fVar38 = 1.0 / *(float *)(param_1 + 9);
    }
  }
  local_2e8[6] = (longlong)(double)fVar38;
  local_2c8 = local_2e8;
  if ((byte)((byte)uVar21 | bVar37) == 1) {
    FUN_141905f56(param_1 + 0x2e);
  }
  local_2e8[0xb] = 0;
  local_2e8[0x28] = param_1[0xb3];
  plVar15 = (longlong *)param_1[2];
  lVar28 = plVar15[0x22];
  if (lVar28 == 0) {
    (**(code **)(*plVar15 + 1000))(plVar15);
    lVar28 = plVar15[0x22];
    if (lVar28 != 0) goto LAB_1408138a5;
  }
  else {
LAB_1408138a5:
    FUN_140ad4584(param_1 + 0x2c,lVar28 + 0x160);
  }
  plVar15 = local_2e8;
  local_2e8[0xc] = (longlong)(param_1 + 0x2b);
  lVar28 = FUN_140ec6e36(param_1);
  plVar20 = local_2c8;
  plVar15[0x29] = lVar28;
  *(undefined1 *)((longlong)plVar15 + 0x154) = *(undefined1 *)((longlong)param_1 + 0x7ec);
  FUN_1444888de(local_2c8 + 0x2b,param_1 + 0xfe);
  plVar15[0x36] = param_1[0x5f];
  plVar15[0x37] = (longlong)param_1;
  *(undefined4 *)(plVar15 + 0x2a) = *(undefined4 *)((longlong)param_1 + 0x2a4);
  if ((int)plVar15[0x25] != 3) {
    param_4 = (longlong *)0x0;
    FUN_1446efa72(plVar20 + 0x24,0,3);
    *(undefined4 *)(local_2e8 + 0x25) = 3;
    plVar15 = local_2e8;
  }
  puVar31 = (undefined8 *)plVar20[0x24];
  *puVar31 = &PTR_LAB_14bb765e0;
  LOCK();
  UNLOCK();
  lVar35 = DAT_14c758608 + 1;
  lVar28 = DAT_14c758608 + 1;
  if (lVar35 == 0) {
    LOCK();
    UNLOCK();
    lVar35 = DAT_14c758608 + 2;
    lVar28 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar28;
  puVar31[2] = lVar35;
  *puVar31 = &PTR_FUN_14bb76570;
  puVar31[3] = 0;
  local_2cb = cVar9;
  if (param_1 == (longlong *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(puVar31 + 3) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar28 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar28 = 0;
    }
    uVar13 = *(uint *)(lVar28 + 0x10);
    if (*(uint *)(lVar28 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      uVar26 = DAT_14c964868 + 1;
      bVar36 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar36) {
        param_4 = (longlong *)(ulonglong)uVar26;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
        plVar15 = local_2e8;
      }
      LOCK();
      uVar13 = *(uint *)(lVar28 + 0x10);
      bVar36 = uVar13 == 0;
      if (bVar36) {
        *(uint *)(lVar28 + 0x10) = uVar26;
        uVar13 = 0;
      }
      UNLOCK();
      if (bVar36) {
        uVar13 = uVar26;
      }
    }
  }
  *(uint *)((longlong)puVar31 + 0x1c) = uVar13;
  puVar31[4] = FUN_14448a776;
  *(undefined4 *)(puVar31 + 5) = 0;
  plVar20 = local_2c8 + 0x26;
  if ((int)plVar15[0x27] != 3) {
    param_4 = (longlong *)0x0;
    FUN_1446efa72(plVar20,0,3);
    *(undefined4 *)(local_2e8 + 0x27) = 3;
    plVar15 = local_2e8;
  }
  puVar31 = (undefined8 *)*plVar20;
  *puVar31 = &PTR_LAB_14bb766c0;
  LOCK();
  UNLOCK();
  lVar35 = DAT_14c758608 + 1;
  lVar28 = DAT_14c758608 + 1;
  if (lVar35 == 0) {
    LOCK();
    UNLOCK();
    lVar35 = DAT_14c758608 + 2;
    lVar28 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar28;
  puVar31[2] = lVar35;
  *puVar31 = &PTR_FUN_14bb76650;
  puVar31[3] = 0;
  if (param_1 == (longlong *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(puVar31 + 3) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar28 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar28 = 0;
    }
    uVar13 = *(uint *)(lVar28 + 0x10);
    if (*(uint *)(lVar28 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      uVar26 = DAT_14c964868 + 1;
      bVar36 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar36) {
        param_4 = (longlong *)(ulonglong)uVar26;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
        plVar15 = local_2e8;
      }
      LOCK();
      uVar13 = *(uint *)(lVar28 + 0x10);
      bVar36 = uVar13 == 0;
      if (bVar36) {
        *(uint *)(lVar28 + 0x10) = uVar26;
        uVar13 = 0;
      }
      UNLOCK();
      if (bVar36) {
        uVar13 = uVar26;
      }
    }
  }
  *(uint *)((longlong)puVar31 + 0x1c) = uVar13;
  puVar31[4] = FUN_14919da14;
  *(undefined4 *)(puVar31 + 5) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar15 = (longlong *)param_1[2];
    lVar28 = plVar15[0x22];
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 1000))(plVar15);
      lVar28 = plVar15[0x22];
      plVar15 = local_2e8;
      if (lVar28 == 0) goto LAB_140813b8b;
    }
    lVar35 = FUN_1401242c6();
    plVar15 = local_2e8;
    if (((*(int *)(lVar35 + 0x38) <= *(int *)(*(longlong *)(lVar28 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar35 + 0x38) * 8) == lVar35 + 0x30)) &&
       (*(longlong *)(lVar28 + 0x2f8) != 0)) {
      lVar35 = local_2e8[0x36];
      uVar13 = *(uint *)(*(longlong *)(lVar28 + 0x2f8) + 0xc);
      *(uint *)(lVar35 + 0x310) = uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar28 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar28 = 0;
      }
      uVar13 = *(uint *)(lVar28 + 0x10);
      if (*(uint *)(lVar28 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        uVar26 = DAT_14c964868 + 1;
        bVar36 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar36) {
          param_4 = (longlong *)(ulonglong)uVar26;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar13 = *(uint *)(lVar28 + 0x10);
        bVar36 = uVar13 == 0;
        if (bVar36) {
          *(uint *)(lVar28 + 0x10) = uVar26;
          uVar13 = 0;
        }
        UNLOCK();
        if (bVar36) {
          uVar13 = uVar26;
        }
      }
      *(uint *)(lVar35 + 0x314) = uVar13;
      plVar15 = local_2e8;
    }
  }
LAB_140813b8b:
  local_2ca = local_2e9 | local_2ea;
  local_2b0 = plVar15[0x36];
  local_2c9 = *(undefined1 *)(local_2b0 + 0x330);
  *(byte *)(local_2b0 + 0x330) = local_2ca;
  lVar28 = (**(code **)(*param_1 + 0x338))(param_1);
  if (lVar28 == 0) {
    local_2c8[0x1a] = 0;
    local_2c8[0x1b] = 0;
    local_2c8[0x1c] = 0;
    plVar20 = &DAT_14c846480;
    plVar18 = local_2c8 + 0xe;
    for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
      *plVar18 = *plVar20;
      plVar20 = plVar20 + 1;
      plVar18 = plVar18 + 1;
    }
    if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
      lVar28 = (**(code **)(*(longlong *)param_1[0x6c] + 0x30))();
      plVar15 = local_2e8;
      if (lVar28 == 0) {
        plVar15 = (longlong *)(**(code **)(*(longlong *)param_1[0x6c] + 0x28))();
        if (plVar15 != (longlong *)0x0) {
          lVar28 = (**(code **)(*plVar15 + 0x180))(plVar15);
          plVar15 = local_2e8;
          goto LAB_140813ff8;
        }
        lVar28 = local_2e8[0x1c];
        plVar15 = local_2e8;
      }
      else {
        local_2e8[0x1b] = lVar28;
        local_2e8[0x1c] = 0;
        lVar28 = FUN_1447210f0(lVar28);
LAB_140813ff8:
        plVar15[0x1c] = lVar28;
      }
      if (lVar28 != 0) goto LAB_140813c53;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      lVar28 = (**(code **)(*(longlong *)param_1[4] + 0x180))();
      goto LAB_140813c3c;
    }
  }
  else {
    plVar15[0x1a] = lVar28;
    plVar15[0x1b] = 0;
    plVar15[0x1c] = 0;
    plVar20 = &DAT_14c846480;
    plVar18 = local_2c8 + 0xe;
    for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
      *plVar18 = *plVar20;
      plVar20 = plVar20 + 1;
      plVar18 = plVar18 + 1;
    }
    plVar20 = (longlong *)(lVar28 + 0x240);
    plVar18 = local_2c8 + 0xe;
    for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
      *plVar18 = *plVar20;
      plVar20 = plVar20 + 1;
      plVar18 = plVar18 + 1;
    }
    lVar28 = *(longlong *)(lVar28 + 0xa8);
    plVar15[0x1b] = lVar28;
    plVar15[0x1c] = 0;
    if (lVar28 != 0) {
      lVar28 = FUN_1447210f0();
LAB_140813c3c:
      local_2e8[0x1c] = lVar28;
      plVar15 = local_2e8;
    }
  }
LAB_140813c53:
  local_2c8 = local_2c8 + 0x22;
  *(undefined4 *)(plVar15 + 0x23) = 0;
  if (*(int *)((longlong)plVar15 + 0x11c) < 0) {
    FUN_1491cb09e(local_2c8);
  }
  local_2d8 = param_1;
  plVar15 = (longlong *)(**(code **)(param_1[5] + 0x30))(param_1 + 5);
  if ((plVar15 != (longlong *)0x0) && (lVar28 = plVar15[1], (longlong)(int)lVar28 != 0)) {
    lVar35 = *plVar15;
    lVar33 = 0;
    plVar15 = local_2c8;
    plVar20 = local_2e8;
    do {
      uVar16 = *(undefined8 *)(lVar35 + lVar33);
      iVar14 = (int)plVar20[0x23];
      *(uint *)(plVar20 + 0x23) = iVar14 + 1U;
      if (*(uint *)((longlong)plVar20 + 0x11c) < iVar14 + 1U) {
        FUN_1466cc8ae(plVar15,iVar14);
        plVar15 = local_2c8;
        plVar20 = local_2e8;
      }
      *(undefined8 *)(*plVar15 + (longlong)iVar14 * 8) = uVar16;
      lVar33 = lVar33 + 8;
    } while ((longlong)(int)lVar28 * 8 != lVar33);
  }
  local_198 = &local_208;
  local_208 = (char *)0x0;
  FUN_1444955ba();
  plVar15 = local_2d8;
  lVar28 = local_2d8[0x5f];
  if (lVar28 != 0) {
    FUN_14449ea04(lVar28);
  }
  if (((int)plVar15[0x48] < 1) &&
     ((local_2ca == 0 || ((*(int *)((longlong)plVar15 + 0x7cc) < 1 && ((int)plVar15[0xfa] < 1))))))
  {
    if (local_2e9 == 0) {
      plVar20 = local_2b8;
      if ((((byte)(bVar10 | local_2d9 ^ 1) != 1) || (local_2cd = local_2cd ^ 1, local_2cd == 0)) &&
         ((longlong)(int)plVar15[0xbf] != 0)) {
        plVar18 = plVar15 + 0xbe;
        lVar35 = 0;
        do {
          if ((*(int *)(plVar15[0xbe] + 8 + lVar35) != 0) &&
             (*(longlong *)(plVar15[0xbe] + lVar35) != 0)) {
            *(int *)((longlong)plVar15 + 0x7d4) = *(int *)((longlong)plVar15 + 0x7d4) + 1;
            if ((longlong)DAT_14cc07488 < 0) {
              pcVar23 = (char *)(DAT_14cc07488 & 0x7fffffffffffffff);
              if (DAT_14cc07494 == '\x01') {
                ppcVar29 = (char **)&local_198;
                FUN_1446f470e(ppcVar29,pcVar23,1);
              }
              else {
                local_198._0_4_ = SUB84(pcVar23,0);
                local_198._4_4_ = (undefined4)((ulonglong)pcVar23 >> 0x20);
                if (pcVar23 == (char *)0x0) {
                  iStack_190 = 0;
                }
                else {
                  sVar17 = strlen(pcVar23);
                  iStack_190 = (int)sVar17;
                }
                ppcVar29 = &local_208;
                FUN_14001c09c(ppcVar29,&local_198,1);
              }
              DAT_14cc07488 = (ulonglong)*(uint *)ppcVar29;
              local_208 = (char *)CONCAT44(DAT_14cc07490,*(uint *)ppcVar29);
              plVar15 = local_2d8;
            }
            else {
              local_208 = (char *)(DAT_14cc07488 & 0xffffffff | (ulonglong)DAT_14cc07490 << 0x20);
            }
            plVar20 = local_2b8;
            FUN_1491c9588(plVar18,plVar15,&local_208);
            *(int *)((longlong)plVar15 + 0x7d4) = *(int *)((longlong)plVar15 + 0x7d4) + -1;
            break;
          }
          lVar35 = lVar35 + 0x10;
        } while ((longlong)(int)plVar15[0xbf] * 0x10 != lVar35);
      }
      uVar12 = (**(code **)(*plVar15 + 0x2f0))(plVar15);
      uVar34 = local_2c0;
      if ((byte)(bVar11 & local_2d9 | local_2cc) != 1) goto LAB_140813f75;
      bVar11 = (byte)local_2c0;
      if ((longlong)(int)plVar15[0xc2] != 0) {
        plVar18 = plVar15 + 0xc1;
        lVar35 = 0;
        do {
          if ((*(int *)(plVar15[0xc1] + 8 + lVar35) != 0) &&
             (*(longlong *)(plVar15[0xc1] + lVar35) != 0)) {
            *(int *)(plVar15 + 0xfb) = (int)plVar15[0xfb] + 1;
            if ((longlong)DAT_14cc07488 < 0) {
              pcVar23 = (char *)(DAT_14cc07488 & 0x7fffffffffffffff);
              if (DAT_14cc07494 == '\x01') {
                ppcVar29 = (char **)&local_198;
                FUN_1446f470e(ppcVar29,pcVar23,1);
              }
              else {
                local_198._0_4_ = SUB84(pcVar23,0);
                local_198._4_4_ = (undefined4)((ulonglong)pcVar23 >> 0x20);
                if (pcVar23 == (char *)0x0) {
                  iStack_190 = 0;
                }
                else {
                  sVar17 = strlen(pcVar23);
                  iStack_190 = (int)sVar17;
                }
                ppcVar29 = &local_208;
                FUN_14001c09c(ppcVar29,&local_198,1);
              }
              DAT_14cc07488 = (ulonglong)*(uint *)ppcVar29;
              local_208 = (char *)CONCAT44(DAT_14cc07490,*(uint *)ppcVar29);
              plVar15 = local_2d8;
              plVar20 = local_2b8;
            }
            else {
              local_208 = (char *)(DAT_14cc07488 & 0xffffffff | (ulonglong)DAT_14cc07490 << 0x20);
            }
            uVar34 = local_2c0;
            FUN_1491c9588(plVar18,plVar15,&local_208);
            *(int *)(plVar15 + 0xfb) = (int)plVar15[0xfb] + -1;
            goto LAB_140813f75;
          }
          lVar35 = lVar35 + 0x10;
        } while ((longlong)(int)plVar15[0xc2] * 0x10 != lVar35);
      }
    }
    else {
      FUN_1415bd5cc(lVar28,&local_2a8,0xff);
      cVar9 = (**(code **)(*plVar15 + 0x3c0))(plVar15);
      if ((longlong)(int)plVar15[0xb6] != 0) {
        plVar20 = plVar15 + 0xb5;
        lVar35 = 0;
        do {
          if ((*(int *)(plVar15[0xb5] + 8 + lVar35) != 0) &&
             (*(longlong *)(plVar15[0xb5] + lVar35) != 0)) {
            *(int *)((longlong)plVar15 + 0x7cc) = *(int *)((longlong)plVar15 + 0x7cc) + 1;
            if ((longlong)DAT_14cc074d8 < 0) {
              pcVar23 = (char *)(DAT_14cc074d8 & 0x7fffffffffffffff);
              if (DAT_14cc074e4 == '\x01') {
                ppcVar29 = (char **)&local_198;
                FUN_1446f470e(ppcVar29,pcVar23,1);
              }
              else {
                local_198._0_4_ = SUB84(pcVar23,0);
                local_198._4_4_ = (undefined4)((ulonglong)pcVar23 >> 0x20);
                if (pcVar23 == (char *)0x0) {
                  iStack_190 = 0;
                }
                else {
                  sVar17 = strlen(pcVar23);
                  iStack_190 = (int)sVar17;
                }
                ppcVar29 = &local_208;
                FUN_14001c09c(ppcVar29,&local_198,1);
              }
              DAT_14cc074d8 = (ulonglong)*(uint *)ppcVar29;
              local_208 = (char *)CONCAT44(DAT_14cc074e0,*(uint *)ppcVar29);
              plVar15 = local_2d8;
            }
            else {
              local_208 = (char *)(DAT_14cc074d8 & 0xffffffff | (ulonglong)DAT_14cc074e0 << 0x20);
            }
            FUN_1491c9588(plVar20,plVar15,&local_208);
            *(int *)((longlong)plVar15 + 0x7cc) = *(int *)((longlong)plVar15 + 0x7cc) + -1;
            break;
          }
          lVar35 = lVar35 + 0x10;
        } while ((longlong)(int)plVar15[0xb6] * 0x10 != lVar35);
      }
      lVar35 = FUN_14449bdee(lVar28,1);
      uVar1 = *(undefined1 *)(lVar35 + 0x49);
      *(undefined1 *)(lVar35 + 0x49) = 1;
      local_198._0_4_ = 0;
      local_198._4_4_ = 0;
      iStack_190 = 0;
      uStack_18c = 0;
      local_188 = (double *)0xffffffffffffffff;
      uStack_180 = CONCAT44(uStack_180._4_4_,0xffffffff);
      local_158 = 0;
      local_150 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_14c = 0xffffffff00000080;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      if (*(char *)((longlong)plVar15 + 0x7ca) == '\x01') {
        local_348 = &local_278;
        local_278 = (char *)0x0;
        local_270 = 0;
        local_340 = CONCAT31(local_340._1_3_,1);
        param_4 = (longlong *)CONCAT71((int7)((ulonglong)param_4 >> 8),0x8d);
        FUN_1444a18e6(lVar28,&local_208,0);
        FUN_149185768(&local_198,&local_208);
        local_1a0 = 0;
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
        FUN_1401f963a(&local_1e8);
        if (local_208 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      local_208 = (char *)0x0;
      uStack_200 = 0;
      local_1f8 = 0xffffffffffffffff;
      local_1f0 = 0xffffffff;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1bc = 0xffffffff00000080;
      local_1b4 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      if (*(char *)((longlong)local_2d8 + 0x7c9) == '\0') {
        local_348 = &local_288;
        local_288 = (char *)0x0;
        local_280 = 0;
        local_340 = CONCAT31(local_340._1_3_,1);
        param_4 = (longlong *)CONCAT71((int7)((ulonglong)param_4 >> 8),0x8d);
        FUN_1444a18e6(lVar28,&local_278,1);
        FUN_149185768(&local_208,&local_278);
        local_210 = 0;
        if (local_218 != 0) {
          FUN_1400020a8();
        }
        FUN_1401f963a(local_258);
        if (local_278 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      if ((char)local_2d8[0xf9] == '\x01') {
        FUN_1466ce248(lVar28);
      }
      if (0 < (int)uStack_200) {
        uVar2 = *(undefined1 *)(lVar28 + 0x110);
        *(undefined1 *)(lVar28 + 0x110) = 0;
        FUN_149196552(lVar28,&local_208,0);
        *(undefined1 *)(lVar28 + 0x110) = uVar2;
      }
      local_1a0 = 0;
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1401f963a(&local_1e8);
      if (local_208 != (char *)0x0) {
        FUN_1400020a8();
      }
      FUN_140ad5be4(lVar28);
      plVar15 = local_2d8;
      FUN_145a2beb0(local_2d8);
      if ((longlong)(int)plVar15[0xb9] != 0) {
        plVar20 = local_2d8 + 0xb8;
        lVar33 = 0;
        do {
          if ((*(int *)(local_2d8[0xb8] + 8 + lVar33) != 0) &&
             (*(longlong *)(local_2d8[0xb8] + lVar33) != 0)) {
            *(int *)((longlong)local_2d8 + 0x7cc) = *(int *)((longlong)local_2d8 + 0x7cc) + 1;
            if ((longlong)DAT_14cc074d8 < 0) {
              pcVar23 = (char *)(DAT_14cc074d8 & 0x7fffffffffffffff);
              if (DAT_14cc074e4 == '\x01') {
                ppcVar29 = &local_208;
                FUN_1446f470e(ppcVar29,pcVar23,1);
              }
              else {
                local_208 = pcVar23;
                if (pcVar23 == (char *)0x0) {
                  uVar12 = 0;
                }
                else {
                  sVar17 = strlen(pcVar23);
                  uVar12 = (undefined4)sVar17;
                }
                uStack_200 = CONCAT44(uStack_200._4_4_,uVar12);
                ppcVar29 = &local_278;
                FUN_14001c09c(ppcVar29,&local_208,1);
              }
              uVar21 = (ulonglong)*(uint *)ppcVar29;
              uVar19 = (ulonglong)DAT_14cc074e0 << 0x20;
              DAT_14cc074d8 = uVar21;
            }
            else {
              uVar21 = (ulonglong)DAT_14cc074e0 << 0x20;
              uVar19 = DAT_14cc074d8 & 0xffffffff;
            }
            plVar15 = local_2d8;
            local_278 = (char *)(uVar19 | uVar21);
            FUN_1491c9588(plVar20,local_2d8,&local_278);
            *(int *)((longlong)plVar15 + 0x7cc) = *(int *)((longlong)plVar15 + 0x7cc) + -1;
            break;
          }
          lVar33 = lVar33 + 0x10;
        } while ((longlong)(int)plVar15[0xb9] * 0x10 != lVar33);
      }
      if ((longlong)DAT_14cc074d8 < 0) {
        pcVar23 = (char *)(DAT_14cc074d8 & 0x7fffffffffffffff);
        if (DAT_14cc074e4 == '\x01') {
          ppcVar29 = &local_208;
          FUN_1446f470e(ppcVar29,pcVar23,1);
        }
        else {
          local_208 = pcVar23;
          if (pcVar23 == (char *)0x0) {
            uVar12 = 0;
          }
          else {
            sVar17 = strlen(pcVar23);
            uVar12 = (undefined4)sVar17;
          }
          uStack_200 = CONCAT44(uStack_200._4_4_,uVar12);
          ppcVar29 = &local_278;
          FUN_14001c09c(ppcVar29,&local_208,1);
        }
        DAT_14cc074d8 = (ulonglong)*(uint *)ppcVar29;
        local_278 = (char *)CONCAT44(DAT_14cc074e0,*(uint *)ppcVar29);
      }
      else {
        local_278 = (char *)(DAT_14cc074d8 & 0xffffffff | (ulonglong)DAT_14cc074e0 << 0x20);
      }
      uVar24 = local_2bc;
      uVar12 = (**(code **)(*local_2d8 + 0x2f0))(local_2d8,&local_278);
      if ((char)uVar24 == '\0') {
        (**(code **)(*local_2d8 + 0x468))();
      }
      if (0 < iStack_190) {
        uVar2 = *(undefined1 *)(lVar28 + 0x110);
        *(undefined1 *)(lVar28 + 0x110) = 0;
        FUN_149196552(lVar28,&local_198,1);
        *(undefined1 *)(lVar28 + 0x110) = uVar2;
        uVar24 = local_2bc;
      }
      local_130 = 0;
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      FUN_1401f963a(&local_178);
      if (CONCAT44(local_198._4_4_,(undefined4)local_198) != 0) {
        FUN_1400020a8();
      }
      uVar16 = FUN_14449bdee(lVar28,1);
      FUN_14601dce2(uVar16,&local_2a8,0);
      uVar34 = local_2c0;
      plVar15 = local_2d8;
      *(undefined1 *)(lVar35 + 0x49) = uVar1;
      if (((byte)uVar24 & local_2ea) == 1) {
        (**(code **)(*local_2d8 + 0x468))(local_2d8);
      }
      plVar20 = local_2b8;
      if (cVar9 != '\0') {
        FUN_140ad5be4(lVar28,1);
      }
      FUN_14449fb8c(lVar28,&local_198,0xff);
      if ((longlong)iStack_190 != 0) {
        plVar30 = (longlong *)CONCAT44(local_198._4_4_,(undefined4)local_198);
        plVar18 = plVar30 + iStack_190;
        do {
          if ((longlong)local_2a0 != 0) {
            param_4 = (longlong *)0x0;
            do {
              if ((*(longlong *)(local_2a8 + 4 + (longlong)param_4) ==
                   *(longlong *)(*plVar30 + 0x14)) &&
                 (*(char *)(local_2a8 + (longlong)param_4) == *(char *)(*plVar30 + 0x10)))
              goto LAB_1408157e5;
              param_4 = (longlong *)((longlong)param_4 + 0xc);
            } while ((longlong *)((longlong)local_2a0 * 0xc) != param_4);
          }
          FUN_140ad4746(lVar28);
LAB_1408157e5:
          plVar30 = plVar30 + 1;
        } while (plVar30 != plVar18);
      }
      if ((longlong)local_2a0 != 0) {
        lVar35 = local_2a8 + (longlong)local_2a0 * 0xc;
        lVar33 = local_2a8;
        do {
          uVar13 = FUN_140813180(lVar28);
          if (((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar28 + 0xc0))) &&
             (lVar32 = *(longlong *)(*(longlong *)(lVar28 + 0xb8) + (ulonglong)uVar13 * 8),
             lVar32 != 0)) {
            if ((longlong)iStack_190 != 0) {
              lVar22 = 0;
              do {
                if (*(longlong *)(CONCAT44(local_198._4_4_,(undefined4)local_198) + lVar22) ==
                    lVar32) goto LAB_14081586b;
                lVar22 = lVar22 + 8;
              } while ((longlong)iStack_190 * 8 != lVar22);
            }
            FUN_140ad4746(lVar28);
          }
LAB_14081586b:
          lVar33 = lVar33 + 0xc;
        } while (lVar33 != lVar35);
      }
      if (CONCAT44(local_198._4_4_,(undefined4)local_198) != 0) {
        FUN_1400020a8();
      }
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
LAB_140813f75:
      bVar11 = (byte)uVar34;
    }
    if ((bVar37 | bVar11) == 1) {
      *(undefined4 *)(plVar15 + 9) = 0;
    }
    if ((longlong)(int)plVar15[0x43] != 0) {
      lVar35 = 0;
      do {
        if ((*(int *)(plVar15[0x42] + 8 + lVar35) != 0) &&
           (*(longlong *)(plVar15[0x42] + lVar35) != 0)) {
          cVar9 = (**(code **)(*plVar15 + 0x478))(plVar15);
          if (cVar9 != '\0') {
            cVar9 = FUN_1403f35db(*plVar20,&DAT_14cc074b8);
            if (cVar9 != '\0') break;
          }
          *(int *)(plVar15 + 0x48) = (int)plVar15[0x48] + 1;
          FUN_1459b4b66(plVar15 + 0x42,plVar15,plVar20);
          *(int *)(plVar15 + 0x48) = (int)plVar15[0x48] + -1;
          break;
        }
        lVar35 = lVar35 + 0x10;
      } while ((longlong)(int)plVar15[0x43] * 0x10 != lVar35);
    }
    if (0 < (int)plVar15[0xfd]) {
      do {
        uStack_18c = uStack_18c & 0xffffff00;
        local_188 = (double *)0x0;
        local_178 = 0;
        local_198._0_4_ = CONCAT31(local_198._1_3_,3);
        local_198._4_4_ = (undefined4)*plVar20;
        iStack_190 = (int)((ulonglong)*plVar20 >> 0x20);
        uStack_180 = CONCAT44(uStack_180._4_4_,(float)(double)local_2e8[5]);
        FUN_14919d8ae(plVar15,lVar28,&local_198);
      } while (0 < (int)plVar15[0xfd]);
    }
    if ((local_2e8[0xb] != 0) && (bVar11 == 1 && local_2e8[0xc] != 0)) {
      FUN_1491721a2(local_2e8[0xb] + 8,local_2e8[0xc] + 8);
      if (lVar28 == 0) {
        uVar13 = 0;
        plVar20 = (longlong *)0x0;
        iVar14 = 0;
      }
      else {
        plVar20 = (longlong *)
                  CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(lVar28 + 0x4c8));
        *(undefined1 *)(lVar28 + 0x4c8) = 0;
        uVar13 = *(uint *)(lVar28 + 0xc);
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar35 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar35 = 0;
        }
        iVar14 = *(int *)(lVar35 + 0x10);
        if (*(int *)(lVar35 + 0x10) == 0) {
          LOCK();
          iVar14 = DAT_14c964868 + 1;
          UNLOCK();
          iVar27 = DAT_14c964868 + 1;
          bVar37 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar14;
          if (bVar37) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar27);
          }
          LOCK();
          iVar14 = *(int *)(lVar35 + 0x10);
          bVar37 = iVar14 == 0;
          if (bVar37) {
            *(int *)(lVar35 + 0x10) = iVar27;
            iVar14 = 0;
          }
          UNLOCK();
          if (bVar37) {
            iVar14 = iVar27;
          }
        }
      }
      iVar27 = *(int *)(lVar28 + 0xc0);
      if (0 < iVar27) {
        plVar15 = local_2d8 + 0x2e;
        lVar35 = 0;
        do {
          lVar33 = *(longlong *)(*(longlong *)(lVar28 + 0xb8) + lVar35 * 8);
          if (((((lVar33 != 0) && (*(char *)(lVar33 + 0x10) == '\x04')) &&
               (*(char *)(lVar33 + 0x210) != '\x01')) &&
              ((*(char *)(lVar33 + 0x211) != '\0' && (*(char *)(lVar33 + 0x33c) == '\x01')))) &&
             ((*(char *)(lVar33 + 0x358) == '\0' &&
              ((*(char *)(lVar33 + 0x230) == '\x01' && ((longlong)*(int *)(lVar33 + 0x228) != 0)))))
             ) {
            lVar32 = 0;
LAB_140814382:
            if ((*(char *)(*(longlong *)(lVar33 + 0x220) + lVar32) == '\0') ||
               (*(char *)(*(longlong *)(lVar33 + 0x220) + 1 + lVar32) == '\0')) goto LAB_140814391;
            local_2e8 = plVar15;
            local_2c8 = plVar20;
            FUN_1491829ae(lVar28,&local_208,*(undefined4 *)(lVar33 + 0x1c),0);
            ppcVar29 = &local_208;
            puVar31 = &local_158;
            for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
              *puVar31 = *ppcVar29;
              ppcVar29 = ppcVar29 + 1;
              puVar31 = puVar31 + 1;
            }
            local_198._0_4_ = 0;
            local_198._4_4_ = 0;
            iStack_190 = CONCAT31(iStack_190._1_3_,1);
            local_188 = (double *)0x0;
            uStack_180 = 0;
            local_178 = *(undefined8 *)(lVar33 + 0x348);
            uStack_170 = *(undefined8 *)(lVar33 + 0x350);
            local_168 = 0;
            local_d8 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            uStack_180._4_4_ = 0;
            dVar3 = DAT_14c8464e0;
            dVar4 = DAT_14c8464e8;
            dVar6 = DAT_14c8464e0;
            dVar7 = DAT_14c8464e8;
            dVar5 = DAT_14c8464f0;
            dVar8 = DAT_14c8464f0;
            switch(*(char *)(lVar33 + 0x211)) {
            case '\x01':
            case '\n':
              if ((**(char **)(lVar33 + 0x220) != '\0') ||
                 ((*(char **)(lVar33 + 0x220))[1] == '\x01')) {
                cVar9 = *(char *)(lVar33 + 0x21c);
                if (cVar9 == '\x02') {
                  dVar8 = (double)*(float *)(lVar33 + 0x234);
                  dVar5 = (double)*(float *)(lVar33 + 0x2b8);
                }
                else if (cVar9 == '\x01') {
                  dVar4 = (double)*(float *)(lVar33 + 0x2b8);
                  dVar7 = (double)*(float *)(lVar33 + 0x234);
                }
                else if (cVar9 == '\0') {
                  dVar3 = (double)*(float *)(lVar33 + 0x2b8);
                  dVar6 = (double)*(float *)(lVar33 + 0x234);
                }
LAB_140814ef3:
                uStack_180 = 1;
                FUN_1403e3958(&local_188,0);
                *local_188 = dVar6;
                local_188[1] = dVar7;
                local_188[2] = dVar8;
LAB_140814f26:
                uVar25 = (uint)uStack_180;
                uVar26 = (uint)uStack_180 + 1;
                uStack_180 = CONCAT44(uStack_180._4_4_,uVar26);
LAB_140814f37:
                if (uStack_180._4_4_ < uVar26) {
                  FUN_1403e3958(&local_188,uVar25);
                }
                lVar33 = (longlong)(int)uVar25;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar5;
                if (0 < (int)(uint)uStack_180) {
                  FUN_144467412(local_2e8,&local_198);
                }
              }
              break;
            case '\x02':
              if ((**(char **)(lVar33 + 0x220) != '\0') ||
                 ((*(char **)(lVar33 + 0x220))[1] == '\x01')) {
                cVar9 = *(char *)(lVar33 + 0x21c);
                if (cVar9 == '\x02') {
                  dVar8 = (double)*(int *)(lVar33 + 0x234);
                  dVar5 = (double)*(int *)(lVar33 + 0x2b8);
                }
                else if (cVar9 == '\x01') {
                  dVar4 = (double)*(int *)(lVar33 + 0x2b8);
                  dVar7 = (double)*(int *)(lVar33 + 0x234);
                }
                else if (cVar9 == '\0') {
                  dVar3 = (double)*(int *)(lVar33 + 0x2b8);
                  dVar6 = (double)*(int *)(lVar33 + 0x234);
                }
                goto LAB_140814ef3;
              }
              break;
            case '\x03':
              if ((1 < *(int *)(lVar33 + 0x228)) &&
                 ((((pcVar23 = *(char **)(lVar33 + 0x220), *pcVar23 != '\0' || (pcVar23[1] != '\0'))
                   || (pcVar23[2] != '\0')) || (pcVar23[3] == '\x01')))) {
                iStack_190 = CONCAT31(iStack_190._1_3_,2);
                fVar38 = *(float *)(lVar33 + 0x234);
                fVar39 = *(float *)(lVar33 + 0x238);
                fVar40 = *(float *)(lVar33 + 0x2b8);
                fVar41 = *(float *)(lVar33 + 700);
                cVar9 = *(char *)(lVar33 + 0x21c);
                if (cVar9 == '\x02') {
                  dVar4 = (double)fVar39;
                  dVar3 = (double)fVar38;
                  uStack_180._0_4_ = 1;
                  FUN_1403e3958(&local_188,0);
                  iVar27 = (uint)uStack_180;
                  *local_188 = dVar3;
                  local_188[1] = dVar4;
                  local_188[2] = 0.0;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,iVar27);
                  }
                  uVar26 = (uint)uStack_180;
                  local_188[lVar33 * 3] = (double)fVar40;
                  local_188[lVar33 * 3 + 1] = dVar4;
                  local_188[lVar33 * 3 + 2] = 0.0;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,uVar26);
                  }
                  uVar26 = (uint)uStack_180;
                  local_188[lVar33 * 3] = (double)fVar40;
                  local_188[lVar33 * 3 + 1] = (double)fVar41;
                  local_188[lVar33 * 3 + 2] = 0.0;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,uVar26);
                  }
                  uVar25 = (uint)uStack_180;
                  local_188[lVar33 * 3] = dVar3;
                  local_188[lVar33 * 3 + 1] = (double)fVar41;
                  local_188[lVar33 * 3 + 2] = 0.0;
                  uVar26 = (uint)uStack_180 + 1;
                  uStack_180 = CONCAT44(uStack_180._4_4_,uVar26);
                  dVar5 = 0.0;
                }
                else if (cVar9 == '\x01') {
                  dVar5 = (double)fVar39;
                  dVar3 = (double)fVar38;
                  uStack_180._0_4_ = 1;
                  FUN_1403e3958(&local_188,0);
                  iVar27 = (uint)uStack_180;
                  *local_188 = dVar3;
                  local_188[1] = 0.0;
                  local_188[2] = dVar5;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,iVar27);
                  }
                  uVar26 = (uint)uStack_180;
                  local_188[lVar33 * 3] = (double)fVar40;
                  local_188[lVar33 * 3 + 1] = 0.0;
                  local_188[lVar33 * 3 + 2] = dVar5;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,uVar26);
                  }
                  uVar26 = (uint)uStack_180;
                  local_188[lVar33 * 3] = (double)fVar40;
                  local_188[lVar33 * 3 + 1] = 0.0;
                  local_188[lVar33 * 3 + 2] = (double)fVar41;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,uVar26);
                  }
                  uVar25 = (uint)uStack_180;
                  local_188[lVar33 * 3] = dVar3;
                  local_188[lVar33 * 3 + 1] = 0.0;
                  local_188[lVar33 * 3 + 2] = (double)fVar41;
                  uVar26 = (uint)uStack_180 + 1;
                  uStack_180 = CONCAT44(uStack_180._4_4_,uVar26);
                  dVar4 = 0.0;
                }
                else {
                  if (cVar9 != '\0') break;
                  dVar5 = (double)fVar39;
                  dVar4 = (double)fVar38;
                  uStack_180._0_4_ = 1;
                  FUN_1403e3958(&local_188,0);
                  iVar27 = (uint)uStack_180;
                  *local_188 = 0.0;
                  local_188[1] = dVar4;
                  local_188[2] = dVar5;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,iVar27);
                  }
                  uVar26 = (uint)uStack_180;
                  local_188[lVar33 * 3] = 0.0;
                  local_188[lVar33 * 3 + 1] = (double)fVar40;
                  local_188[lVar33 * 3 + 2] = dVar5;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,uVar26);
                  }
                  uVar26 = (uint)uStack_180;
                  local_188[lVar33 * 3] = 0.0;
                  local_188[lVar33 * 3 + 1] = (double)fVar40;
                  local_188[lVar33 * 3 + 2] = (double)fVar41;
                  lVar33 = (longlong)(int)(uint)uStack_180;
                  uStack_180._0_4_ = (uint)uStack_180 + 1;
                  if (uStack_180._4_4_ < (uint)uStack_180) {
                    FUN_1403e3958(&local_188,uVar26);
                  }
                  uVar25 = (uint)uStack_180;
                  local_188[lVar33 * 3] = 0.0;
                  local_188[lVar33 * 3 + 1] = dVar4;
                  local_188[lVar33 * 3 + 2] = (double)fVar41;
                  uVar26 = (uint)uStack_180 + 1;
                  uStack_180 = CONCAT44(uStack_180._4_4_,uVar26);
                  dVar3 = 0.0;
                }
                goto LAB_140814f37;
              }
              break;
            case '\x04':
            case '\x05':
            case '\a':
            case '\b':
            case '\t':
              if ((2 < *(int *)(lVar33 + 0x228)) &&
                 ((((pcVar23 = *(char **)(lVar33 + 0x220), *pcVar23 != '\0' || (pcVar23[1] != '\0'))
                   || (pcVar23[2] != '\0')) ||
                  (((pcVar23[3] != '\0' || (pcVar23[4] != '\0')) || (pcVar23[5] == '\x01')))))) {
                bVar11 = *(char *)(lVar33 + 0x211) - 4;
                fVar38 = (float)DAT_14c846330;
                fVar39 = DAT_14c846330._4_4_;
                fVar40 = DAT_14c846338;
                fVar41 = (float)DAT_14c846330;
                fVar42 = DAT_14c846330._4_4_;
                fVar43 = DAT_14c846338;
                if ((bVar11 < 6) && ((0x3bU >> (bVar11 & 0x1f) & 1) != 0)) {
                  lVar32 = (ulonglong)bVar11 * 8;
                  fVar38 = *(float *)(lVar33 + *(longlong *)(&DAT_14bb776b0 + lVar32));
                  fVar39 = *(float *)(lVar33 + *(longlong *)(&DAT_14bb776e0 + lVar32));
                  fVar40 = *(float *)(lVar33 + *(longlong *)(&DAT_14bb77710 + lVar32));
                  fVar41 = *(float *)(lVar33 + *(longlong *)(&DAT_14bb77740 + lVar32));
                  fVar42 = *(float *)(lVar33 + *(longlong *)(&DAT_14bb77770 + lVar32));
                  fVar43 = *(float *)(lVar33 + *(longlong *)(&DAT_14bb777a0 + lVar32));
                }
                dVar8 = (double)fVar40;
                dVar7 = (double)fVar39;
                dVar6 = (double)fVar38;
                uStack_180._0_4_ = 1;
                FUN_1403e3958(&local_188,0);
                iVar27 = (uint)uStack_180;
                *local_188 = dVar6;
                local_188[1] = dVar7;
                local_188[2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,iVar27);
                }
                uVar26 = (uint)uStack_180;
                dVar3 = (double)fVar41;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                dVar4 = (double)fVar42;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                dVar5 = (double)fVar43;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar7;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar8;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                uVar26 = (uint)uStack_180;
                local_188[lVar33 * 3] = dVar6;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar5;
                lVar33 = (longlong)(int)(uint)uStack_180;
                uStack_180._0_4_ = (uint)uStack_180 + 1;
                if (uStack_180._4_4_ < (uint)uStack_180) {
                  FUN_1403e3958(&local_188,uVar26);
                }
                local_188[lVar33 * 3] = dVar3;
                local_188[lVar33 * 3 + 1] = dVar4;
                local_188[lVar33 * 3 + 2] = dVar8;
                goto LAB_140814f26;
              }
            }
            FUN_1490de8da(&local_198);
            iVar27 = *(int *)(lVar28 + 0xc0);
            plVar20 = local_2c8;
            plVar15 = local_2e8;
          }
LAB_14081439a:
          lVar35 = lVar35 + 1;
        } while (lVar35 < iVar27);
      }
      plVar15 = local_2d8;
      if (((((iVar14 != 0) && (-1 < (int)uVar13)) && ((int)uVar13 < DAT_14c9647dc)) &&
          ((plVar18 = (longlong *)
                      ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0xd & 0x3fff8))),
           plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar14)))) &&
         ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
          lVar28 = *plVar18;
        }
        else {
          lVar28 = 0;
        }
        *(char *)(lVar28 + 0x4c8) = (char)plVar20;
      }
    }
    if (local_2cb != '\0') {
      *(undefined1 *)(plVar15 + 0x100) = 0;
    }
    if (local_2e9 != 0) {
      if ((longlong)DAT_14cc074d8 < 0) {
        pcVar23 = (char *)(DAT_14cc074d8 & 0x7fffffffffffffff);
        if (DAT_14cc074e4 == '\x01') {
          ppcVar29 = (char **)&local_198;
          FUN_1446f470e(ppcVar29,pcVar23,1);
        }
        else {
          local_198._0_4_ = SUB84(pcVar23,0);
          local_198._4_4_ = (undefined4)((ulonglong)pcVar23 >> 0x20);
          if (pcVar23 == (char *)0x0) {
            iStack_190 = 0;
          }
          else {
            sVar17 = strlen(pcVar23);
            iStack_190 = (int)sVar17;
          }
          ppcVar29 = &local_208;
          FUN_14001c09c(ppcVar29,&local_198,1);
        }
        DAT_14cc074d8 = (ulonglong)*(uint *)ppcVar29;
        uVar21 = CONCAT44(DAT_14cc074e0,*(uint *)ppcVar29);
        plVar15 = local_2d8;
      }
      else {
        uVar21 = DAT_14cc074d8 & 0xffffffff | (ulonglong)DAT_14cc074e0 << 0x20;
      }
      FUN_140c0508e(plVar15 + 0x35,uVar21);
    }
    if (local_2ea != 0) {
      if ((longlong)DAT_14cc074e8 < 0) {
        pcVar23 = (char *)(DAT_14cc074e8 & 0x7fffffffffffffff);
        if (DAT_14cc074f4 == '\x01') {
          ppcVar29 = (char **)&local_198;
          FUN_1446f470e(ppcVar29,pcVar23,1);
        }
        else {
          local_198._0_4_ = SUB84(pcVar23,0);
          local_198._4_4_ = (undefined4)((ulonglong)pcVar23 >> 0x20);
          if (pcVar23 == (char *)0x0) {
            iStack_190 = 0;
          }
          else {
            sVar17 = strlen(pcVar23);
            iStack_190 = (int)sVar17;
          }
          ppcVar29 = &local_208;
          FUN_14001c09c(ppcVar29,&local_198,1);
        }
        DAT_14cc074e8 = (ulonglong)*(uint *)ppcVar29;
        uVar21 = CONCAT44(DAT_14cc074f0,*(uint *)ppcVar29);
        plVar15 = local_2d8;
      }
      else {
        uVar21 = DAT_14cc074e8 & 0xffffffff | (ulonglong)DAT_14cc074f0 << 0x20;
      }
      FUN_140c0508e(plVar15 + 0x35,uVar21);
    }
  }
  else {
    uVar12 = 0;
  }
  *(undefined1 *)(local_2b0 + 0x330) = local_2c9;
  if (local_298 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140813d7f:
  if ((local_c0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140814391:
  lVar32 = lVar32 + 2;
  if ((longlong)*(int *)(lVar33 + 0x228) * 2 == lVar32) goto LAB_14081439a;
  goto LAB_140814382;
}



// FUNCTION 140816056 FUN_140816056 body=1146 status=ok
// SIG undefined FUN_140816056(void)

/* WARNING: Removing unreachable block (ram,0x000140816437) */
/* WARNING: Removing unreachable block (ram,0x000140816444) */
/* WARNING: Removing unreachable block (ram,0x000140816448) */

void FUN_140816056(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  byte *pbVar21;
  int *piVar22;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  byte *local_130;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140a990a6(local_128);
  if (*param_2 == 1) {
    iVar12 = *(int *)(param_2 + 0x30);
    bVar18 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar12);
    local_138 = (ulonglong)bVar18;
    *(int *)(param_2 + 0x30) = iVar12 + 1;
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar12 * 8);
    iVar12 = *(int *)(param_2 + 0x44) * (uint)bVar18;
    bVar18 = 1;
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar4;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
    uVar11 = uVar2 & 0x7fff;
    lVar20 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar14 = (ulonglong)(uVar11 * *(int *)(lVar20 + 0x80)) + *(longlong *)(lVar20 + 0x70);
    }
    else {
      iVar12 = **(int **)(lVar20 + 0x20);
      lVar14 = 0;
      if (iVar12 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar12;
          iVar12 = (*(int **)(lVar20 + 0x20))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (iVar12 <= (int)uVar11);
      }
      lVar14 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar20 + 0x18) + lVar14 * 8);
    }
    local_138._0_4_ = (uint)(uVar2 >> 0xf);
    iVar12 = *(int *)(lVar20 + 0x4c) * (uint)local_138;
    bVar18 = *param_2;
    local_138 = (ulonglong)(uVar2 >> 0xf);
  }
  if ((bVar18 & 1) == 0) {
    puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar4;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
    uVar11 = uVar2 & 0x7fff;
    lVar19 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar20 = (ulonglong)(uVar11 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70);
    }
    else {
      iVar17 = **(int **)(lVar19 + 0x20);
      lVar20 = 0;
      if (iVar17 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar17;
          iVar17 = (*(int **)(lVar19 + 0x20))[lVar20 + 1];
          lVar20 = lVar20 + 1;
        } while (iVar17 <= (int)uVar11);
      }
      lVar20 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar19 + 0x18) + lVar20 * 8);
    }
    iVar17 = (uint)(uVar2 >> 0xf) * *(int *)(lVar19 + 0x4c);
    bVar18 = *param_2;
  }
  else {
    iVar17 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar17);
    *(int *)(param_2 + 0x30) = iVar17 + 1;
    lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar17 * 8);
    iVar17 = (uint)bVar1 * *(int *)(param_2 + 0x44);
  }
  if ((bVar18 & 1) == 0) {
    puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar4;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
    uVar11 = uVar2 & 0x7fff;
    lVar5 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar19 = (ulonglong)(uVar11 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70);
    }
    else {
      iVar15 = **(int **)(lVar5 + 0x20);
      lVar19 = 0;
      if (iVar15 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar15;
          iVar15 = (*(int **)(lVar5 + 0x20))[lVar19 + 1];
          lVar19 = lVar19 + 1;
        } while (iVar15 <= (int)uVar11);
      }
      lVar19 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar19 * 8);
    }
    uVar11 = (uint)(uVar2 >> 0xf);
    pbVar21 = (byte *)(lVar5 + 0x4c);
  }
  else {
    iVar15 = *(int *)(param_2 + 0x30);
    uVar11 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8);
    pbVar21 = param_2 + 0x44;
  }
  iVar15 = *(int *)pbVar21;
  uVar3 = *(uint *)(lVar20 + (longlong)iVar17 * 4);
  *(undefined1 *)(local_120 + 0xec) = 1;
  local_130 = param_2 + 0x3c;
  bVar18 = *param_2;
  lVar20 = *(longlong *)(param_2 + 0x80);
  pbVar21 = (byte *)(lVar20 + 0x40);
  if (bVar18 != 0) {
    pbVar21 = local_130;
  }
  if (0 < *(int *)pbVar21) {
    piVar22 = (int *)(lVar14 + (longlong)iVar12 * 4);
    puVar16 = (undefined4 *)(lVar19 + (longlong)(int)(iVar15 * uVar11) * 4);
    local_138 = (ulonglong)(uint)((int)local_138 << 2);
    iVar12 = 0;
    do {
      uVar10 = uStack_90;
      uVar9 = local_98;
      lVar14 = lStack_a0;
      ppuVar8 = local_a8;
      uVar7 = uStack_b0;
      uVar6 = uStack_c0;
      iVar17 = *piVar22;
      if ((((0 < iVar17) && (local_120 != 0)) && (-1 < (int)uVar3)) &&
         (((int)uVar3 < *(int *)(local_120 + 0xe0) &&
          (lVar19 = *(longlong *)(*(longlong *)(local_120 + 0xd8) + (ulonglong)uVar3 * 8),
          lVar19 != 0)))) {
        local_d8[0] = iVar17;
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        lStack_60 = lStack_a0;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = CONCAT44(uStack_e4,*puVar16);
        uStack_90 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = &PTR_LAB_14be786b0;
        lStack_a0 = lVar19;
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_1446198a6;
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        uStack_80._0_4_ = (undefined4)uVar6;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar7;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_58._0_4_ = (undefined4)uVar9;
        local_e8 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_e4 = local_58._4_4_;
        uStack_50._0_4_ = (undefined4)uVar10;
        uStack_e0 = (undefined4)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_dc = uStack_50._4_4_;
        local_f8 = ppuVar8;
        lStack_f0 = lVar14;
        uStack_50 = uVar10;
        local_58 = uVar9;
        lStack_60 = lVar14;
        local_68 = ppuVar8;
        uStack_70 = uVar7;
        local_78 = 0;
        uStack_80 = uVar6;
        local_88 = 0;
        local_a8 = &PTR_LAB_14be786b0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_1446198a6;
        local_108 = 0;
        local_118 = 0;
        FUN_1408164d2(local_120 + 0x70,local_d8);
        if (local_c8 != (code *)0x0) {
          pppuVar13 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar13 = &local_a8;
          }
          (*(code *)(*pppuVar13)[2])();
        }
        bVar18 = *param_2;
        lVar20 = *(longlong *)(param_2 + 0x80);
      }
      iVar12 = iVar12 + 1;
      pbVar21 = (byte *)(lVar20 + 0x40);
      if ((bVar18 & 1) != 0) {
        pbVar21 = local_130;
      }
      puVar16 = (undefined4 *)((longlong)puVar16 + (ulonglong)(uVar11 << 2));
      piVar22 = (int *)((longlong)piVar22 + local_138);
    } while (iVar12 < *(int *)pbVar21);
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408164d2 FUN_1408164d2 body=107 status=ok
// SIG undefined FUN_1408164d2(void)

void FUN_1408164d2(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 2) = *param_2;
  lVar1 = *(longlong *)(param_2 + 4);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0xc);
    if (*(undefined8 **)(param_2 + 8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_2 + 8);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    UNLOCK();
    LOCK();
    *puVar3 = puVar2;
    UNLOCK();
  }
  return;
}



// FUNCTION 14081653e FUN_14081653e body=1535 status=ok
// SIG undefined FUN_14081653e(void)

void FUN_14081653e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((param_2 == (longlong *)0x0) ||
      (lVar6 = (**(code **)(*param_2 + 0x3f8))(param_2), lVar6 == 0)) ||
     ((cVar4 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar4 == '\0' && (param_1[0x2c7] == 0))))
  goto LAB_140816740;
  local_118 = 0;
  local_110 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_70 = 0;
  uStack_68 = 0;
  local_1b8 = (longlong *)0x0;
  uStack_1b0 = 0;
  cVar4 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if (cVar4 == '\0') {
    if (param_1[0x2c7] != 0) {
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,1);
      FUN_14023b962(&local_1b8,0);
      *local_1b8 = param_1[0x2c7];
    }
  }
  else {
    FUN_140824b66(&local_1b8,param_1 + 0x2cb);
  }
  cVar4 = FUN_1408326be(param_1);
  if (cVar4 != '\0') {
    plVar8 = (longlong *)param_1[0x15];
    if (plVar8 != (longlong *)0x0) {
      uVar7 = FUN_140566488();
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
      if (plVar8 != (longlong *)0x0) {
        uVar7 = FUN_140566488();
        plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
        if (((plVar9 != (longlong *)0x0 && plVar8 != plVar9) &&
            (lVar6 = (**(code **)(*plVar9 + 0x20))(plVar9), lVar6 != 0)) &&
           (local_1e0 = *(longlong *)(lVar6 + 0x40), local_1e0 != 0)) {
          lVar17 = param_1[3];
          local_180 = lVar17;
          plVar8 = (longlong *)FUN_140777470(lVar6);
          if ((plVar8 == (longlong *)0x0) &&
             (plVar8 = (longlong *)FUN_140818d2a(lVar6,param_1), plVar8 == (longlong *)0x0)) {
            iVar5 = *(int *)(lVar6 + 0x78);
            if ((longlong)iVar5 != 0) {
              lVar6 = *(longlong *)(lVar6 + 0x70);
              lVar16 = 0;
              do {
                plVar8 = *(longlong **)(lVar6 + lVar16);
                if (plVar8 != (longlong *)0x0) {
                  lVar10 = (**(code **)(*plVar8 + 8))(plVar8);
                  lVar11 = FUN_1400653da();
                  if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                     ((*(longlong *)
                        (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                       lVar11 + 0x30 &&
                      ((**(code **)(*plVar8 + 0xb0))(plVar8,&local_198), local_198 == lVar17))))
                  goto LAB_1408167c0;
                }
                lVar16 = lVar16 + 8;
              } while ((longlong)iVar5 * 8 != lVar16);
            }
          }
          else {
LAB_1408167c0:
            lVar6 = local_1e0;
            local_1c8 = plVar8[9];
            if (local_1c8 != 0) {
              local_1c0 = *(longlong *)(local_1e0 + 0x18);
              lVar17 = (longlong)*(int *)(local_1e0 + 0x20);
              plVar8 = (longlong *)FUN_140816b3e();
              if (0 < lVar17) {
                lVar16 = 0;
                do {
                  if (((*(longlong **)(local_1c0 + lVar16 * 8) == plVar8) &&
                      ((int)lVar16 < *(int *)(lVar6 + 0x30))) &&
                     (plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x28) + lVar16 * 8),
                     plVar9 != (longlong *)0x0)) {
                    lVar10 = (**(code **)(*plVar9 + 8))(plVar9);
                    lVar11 = FUN_140816b3e();
                    if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                       (((*(longlong *)
                           (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                          lVar11 + 0x30 &&
                         ((plVar9[0xc] != 0 &&
                          (plVar12 = (longlong *)plVar9[0xd], plVar12 != (longlong *)0x0)))) &&
                        (0 < (int)plVar12[1])))) {
                      iVar5 = (int)plVar12[1];
                      do {
                        if (iVar5 == 0) {
                          lVar10 = 0;
                          goto LAB_1408168ae;
                        }
                        LOCK();
                        iVar3 = (int)plVar12[1];
                        bVar18 = iVar5 == iVar3;
                        if (bVar18) {
                          *(int *)(plVar12 + 1) = iVar5 + 1;
                          iVar3 = iVar5;
                        }
                        iVar5 = iVar3;
                        UNLOCK();
                      } while (!bVar18);
                      lVar10 = plVar9[0xc];
                      LOCK();
                      plVar13 = plVar12 + 1;
                      *(int *)plVar13 = (int)*plVar13 + -1;
                      UNLOCK();
                      if ((int)*plVar13 == 0) {
                        (**(code **)*plVar12)(plVar12);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar12 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar12 + 0x10))(plVar12);
                        }
                      }
LAB_1408168ae:
                      lVar6 = local_1e0;
                      if (lVar10 == local_1c8) {
                        if (plVar9[0xb] == 0) {
                          if (0 < (longlong)(int)plVar9[10]) {
                            plVar12 = (longlong *)plVar9[9];
                            plVar9 = plVar12 + (longlong)(int)plVar9[10] * 3;
                            local_1d8 = plVar9;
                            do {
                              uVar2 = uStack_1b0;
                              lVar6 = *plVar12;
                              if (lVar6 != 0) {
                                lVar10 = (longlong)(int)uStack_1b0;
                                if (lVar10 != 0) {
                                  uVar15 = 0;
                                  do {
                                    if (*(longlong *)((longlong)local_1b8 + uVar15) == lVar6) {
                                      if ((int)(~uVar15 >> 3) != 0) goto LAB_140816a26;
                                      break;
                                    }
                                    uVar15 = uVar15 + 8;
                                  } while (lVar10 * 8 - uVar15 != 0);
                                }
                                uVar14 = (int)uStack_1b0 + 1;
                                uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar14);
                                if (uStack_1b0._4_4_ < uVar14) {
                                  FUN_14023b962(&local_1b8,uVar2 & 0xffffffff);
                                  plVar9 = local_1d8;
                                }
                                local_1b8[lVar10] = lVar6;
                              }
LAB_140816a26:
                              plVar12 = plVar12 + 3;
                              lVar6 = local_1e0;
                            } while (plVar12 != plVar9);
                          }
                        }
                        else {
                          plVar12 = (longlong *)param_1[0x15];
                          if (plVar12 != (longlong *)0x0) {
                            uVar7 = FUN_1401fa540();
                            plVar12 = (longlong *)(**(code **)(*plVar12 + 0x288))(plVar12,uVar7);
                            if (plVar12 != (longlong *)0x0) {
                              uVar7 = FUN_1401fa540();
                              plVar13 = (longlong *)FUN_144718840(plVar12,uVar7);
                              if (((plVar12 != plVar13) && (plVar13 != (longlong *)0x0)) &&
                                 (lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar10 != 0)) {
                                local_198 = 0;
                                uStack_190 = 0;
                                FUN_140818e52(plVar9 + 0xb,lVar10,&local_198);
                                lVar6 = local_198;
                                lVar10 = (longlong)(int)uStack_190;
                                if (lVar10 != 0) {
                                  lVar11 = 0;
                                  local_1d8 = plVar8;
                                  local_1d0 = lVar17;
                                  do {
                                    local_1a0 = *(undefined8 *)(lVar6 + lVar11);
                                    FUN_1447a7018(&local_1b8,&local_1a0);
                                    lVar11 = lVar11 + 8;
                                    plVar8 = local_1d8;
                                    lVar17 = local_1d0;
                                  } while (lVar10 * 8 != lVar11);
                                }
                                lVar6 = local_1e0;
                                if (local_198 != 0) {
                                  FUN_1400020a8(local_198);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar16 != lVar17);
              }
              goto LAB_1408166e6;
            }
          }
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x17ff) = 0;
  }
LAB_1408166e6:
  uVar7 = (**(code **)(*param_2 + 0x3f8))(param_2);
  FUN_144a38cca(&local_1b8,&local_178,uVar7);
  FUN_140816b78(param_2 + 0x61,&local_178);
  *(byte *)((longlong)param_1 + 0xc71) = *(byte *)((longlong)param_1 + 0xc71) & 0xdf;
  if (local_1b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14074f6ec(&local_178);
LAB_140816740:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140816b3e FUN_140816b3e body=57 status=ok
// SIG undefined FUN_140816b3e(void)

void FUN_140816b3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a690 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a690 = FUN_140002ddd(FUN_1464ca7b2,uVar1,L"GbxBodyNodeSettings_GestaltPart");
  }
  return;
}



// FUNCTION 140816b78 FUN_140816b78 body=331 status=ok
// SIG undefined FUN_140816b78(void)

longlong FUN_140816b78(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_140816e52();
  if (param_1 == param_2) {
    FUN_140816e52(param_1 + 0x20,param_2 + 0x20);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x18);
    pvVar2 = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      FUN_144756262((undefined8 *)(param_1 + 0x10),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x10),pvVar2,(longlong)iVar1 * 0x60);
      }
    }
    FUN_140816e52(param_1 + 0x20,param_2 + 0x20);
    iVar1 = *(int *)(param_2 + 0x38);
    pvVar2 = *(void **)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      FUN_144756262((undefined8 *)(param_1 + 0x30),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x30),pvVar2,(longlong)iVar1 * 0x60);
      }
    }
  }
  FUN_140816cc4(param_1 + 0x40,param_2 + 0x40);
  FUN_140816cc4(param_1 + 0x90,param_2 + 0x90);
  FUN_140816ffa(param_1 + 0xe0,param_2 + 0xe0);
  FUN_14081718e(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  FUN_14054c6c4(param_1 + 0x108,param_2 + 0x108);
  return param_1;
}



// FUNCTION 140816cc4 FUN_140816cc4 body=154 status=ok
// SIG undefined FUN_140816cc4(void)

longlong FUN_140816cc4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140816d19;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140816d19:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140816d5e(param_1,param_2);
  return param_1;
}



// FUNCTION 140816d5e FUN_140816d5e body=243 status=ok
// SIG undefined FUN_140816d5e(void)

undefined8 * FUN_140816d5e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1401ad1b4(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 140816e52 FUN_140816e52 body=89 status=ok
// SIG undefined FUN_140816e52(void)

undefined8 * FUN_140816e52(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140816eac(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 140816eac FUN_140816eac body=334 status=ok
// SIG undefined FUN_140816eac(void)

void FUN_140816eac(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140816f1e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140816f1e:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140816ffa FUN_140816ffa body=87 status=ok
// SIG undefined FUN_140816ffa(void)

undefined8 * FUN_140816ffa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140817052(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140817052 FUN_140817052 body=315 status=ok
// SIG undefined FUN_140817052(void)

void FUN_140817052(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408170bf;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
      }
    }
LAB_1408170bf:
    iVar4 = (int)(uVar5 >> 1);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,2,2);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14081718e FUN_14081718e body=89 status=ok
// SIG undefined FUN_14081718e(void)

undefined8 * FUN_14081718e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1408171e8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408171e8 FUN_1408171e8 body=334 status=ok
// SIG undefined FUN_1408171e8(void)

void FUN_1408171e8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14081725a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14081725a:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140817336 FUN_140817336 body=82 status=ok
// SIG undefined FUN_140817336(void)

void FUN_140817336(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1408174de(*param_1,param_1[1],1);
  if (param_1[2] == 0) {
    return;
  }
  FUN_140818698(DAT_14cacd528);
  lVar1 = param_1[2];
  FUN_14793d2b8(lVar1);
  FUN_1447f69b6(lVar1 + 0x5b0);
  return;
}



// FUNCTION 140817388 FUN_140817388 body=147 status=ok
// SIG undefined FUN_140817388(void)

void FUN_140817388(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  iVar2 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140832e02(param_1);
  }
  memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc);
  iVar2 = *(int *)(param_1 + 3);
  *(uint *)(param_1 + 3) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar2) < uVar1) {
    FUN_144a2c682(param_1 + 2);
  }
  memcpy((void *)param_1[2],(void *)param_2[2],(longlong)(int)uVar1 * 0x60);
  FUN_140816cc4(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return;
}



// FUNCTION 14081741c FUN_14081741c body=194 status=ok
// SIG undefined FUN_14081741c(void)

void FUN_14081741c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1400f4bb8(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != param_2) {
    FUN_1401a2688(param_1 + 0x10,param_2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != param_2) {
    FUN_1400f4bb8(param_1 + 0x20,param_2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != param_2) {
    FUN_1401a2688(param_1 + 0x30,param_2);
  }
  FUN_140171a5c(param_1 + 0x40,param_2);
  FUN_140171a5c(param_1 + 0x90,param_2);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) == param_2) {
    return;
  }
  FUN_14481578e(param_1 + 0x108,param_2);
  return;
}



// FUNCTION 1408174de FUN_1408174de body=2193 status=ok
// SIG undefined FUN_1408174de(void)

void FUN_1408174de(longlong *param_1,longlong param_2,char param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_208 [32];
  int local_1e8;
  longlong *local_1e0;
  void **local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  void **local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  int local_198 [24];
  undefined1 local_138 [96];
  void *local_d8;
  undefined8 local_d0;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_3 != '\0') {
    FUN_140171a5c(param_1 + 8,0);
    lVar17 = param_1[1];
    local_198[0] = 0;
    if (0 < (int)lVar17) {
      do {
        if (*(longlong *)(*param_1 + (longlong)local_198[0] * 0xc) != 0) {
          local_d8 = (void *)(*param_1 + (longlong)local_198[0] * 0xc);
          local_d0 = local_198;
          FUN_140171856(param_1 + 8,local_138,&local_d8,0);
        }
        local_198[0] = local_198[0] + 1;
      } while (local_198[0] < (int)lVar17);
    }
  }
  if (param_2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(param_2 + 400);
  }
  local_d8 = (void *)0x0;
  uVar9 = *(uint *)(param_1 + 1);
  pvVar4 = (void *)*param_1;
  local_d0 = (int *)CONCAT44(local_d0._4_4_,uVar9);
  if (uVar9 == 0 && uVar13 == 0) {
    local_d0 = (int *)(ulonglong)uVar9;
  }
  else {
    iVar8 = uVar9 + uVar13;
    if ((int)uVar13 < 0) goto LAB_140817cee;
    FUN_140816eac(&local_d8,iVar8,0);
    if (uVar9 != 0) {
      memcpy(local_d8,pvVar4,(longlong)(int)uVar9 * 0xc);
    }
  }
  local_1d8 = (void **)(param_1 + 4);
  if (local_1d8 == &local_d8) {
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = (longlong)local_d8;
    *(undefined4 *)(param_1 + 5) = (undefined4)local_d0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_d0._4_4_;
  }
  local_d8 = (void *)0x0;
  uVar9 = *(uint *)(param_1 + 3);
  pvVar4 = (void *)param_1[2];
  local_d0 = (int *)CONCAT44(local_d0._4_4_,uVar9);
  if (uVar9 == 0 && uVar13 == 0) {
    local_d0 = (int *)(ulonglong)uVar9;
  }
  else {
    iVar8 = uVar9 + uVar13;
    if ((int)uVar13 < 0) {
LAB_140817cee:
      local_d8 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    FUN_144756262(&local_d8,iVar8,0);
    if (uVar9 != 0) {
      memcpy(local_d8,pvVar4,(longlong)(int)uVar9 * 0x60);
    }
  }
  ppvVar1 = (void **)(param_1 + 6);
  if (ppvVar1 == &local_d8) {
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = (longlong)local_d8;
    local_d8 = (void *)0x0;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_d0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_d0._4_4_;
  }
  FUN_140816cc4(param_1 + 0x12,param_1 + 8);
  plVar18 = param_1 + 0x1c;
  FUN_140817d70(plVar18,uVar13);
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13);
  }
  local_1e0 = param_1 + 0x1e;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) < (int)uVar13) {
    FUN_140818ad8(local_1e0,uVar13);
  }
  FUN_1448156a8(param_1 + 0x21,&DAT_14a7de1d0,(int)param_1[3]);
  if (uVar13 != 0) {
    local_68 = (undefined1 *)0x0;
    uVar9 = *(uint *)(param_1 + 3);
    uStack_60 = (ulonglong)uVar9;
    local_1c8 = plVar18;
    local_1c0 = ppvVar1;
    if ((longlong)(int)uVar9 != 0) {
      FUN_1447403be(&local_68);
    }
    local_1d0 = param_1 + 0x12;
    memset(local_68,0,(longlong)(int)uVar9);
    *local_68 = 1;
    local_78 = (void *)0x0;
    local_70 = (int)param_1[3];
    lVar17 = (longlong)local_70;
    pvVar4 = (void *)param_1[2];
    if (lVar17 == 0) {
      local_6c = 0;
    }
    else {
      FUN_144756262(&local_78,local_70,0);
      memcpy(local_78,pvVar4,lVar17 * 0x60);
    }
    plVar18 = param_1 + 0x19;
    local_1a8 = (ulonglong)uVar13;
    uVar12 = 0;
    plVar16 = local_1d0;
    local_1b8 = param_2;
    local_1b0 = plVar18;
    do {
      plVar2 = (longlong *)(*(longlong *)(param_2 + 0x188) + uVar12 * 0x18);
      lVar17 = *plVar2;
      if ((longlong)*(int *)(param_2 + 400) != 0) {
        lVar11 = *(longlong *)(param_2 + 0x188) + 8;
        lVar6 = (longlong)*(int *)(param_2 + 400) * 0x18;
        do {
          if (*(longlong *)(lVar11 + 8) == lVar17) {
            uVar5 = FUN_144a750a0(param_1);
            lVar17 = *plVar2;
            goto LAB_14081789c;
          }
          lVar11 = lVar11 + 0x18;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      if (lVar17 == 0) {
        uVar5 = 0xffffffff;
LAB_140817c8e:
        iVar8 = -1;
      }
      else {
        uVar5 = 0xffffffff;
        if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
          uVar13 = (uint)((ulonglong)lVar17 >> 0x10);
          uVar9 = (uint)lVar17 & 0xffff;
          plVar7 = (longlong *)param_1[0x1a];
          if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
            plVar7 = plVar18;
          }
          iVar8 = *(int *)((longlong)plVar7 +
                          (ulonglong)
                          ((int)param_1[0x1b] - 1U &
                          (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar9) +
                          (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              plVar7 = (longlong *)(*plVar16 + (longlong)iVar8 * 0x14);
              if (*plVar7 == lVar17) {
                uVar5 = 0xffffffff;
                if ((plVar7 != (longlong *)0x0) && (plVar7 + 1 != (longlong *)0x0)) {
                  uVar5 = (undefined4)plVar7[1];
                }
                goto LAB_14081789c;
              }
              iVar8 = *(int *)((longlong)plVar7 + 0xc);
            } while (iVar8 != -1);
            uVar5 = 0xffffffff;
LAB_14081789c:
            if (lVar17 == 0) goto LAB_140817c8e;
          }
        }
        iVar8 = -1;
        if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
          uVar13 = (uint)((ulonglong)lVar17 >> 0x10);
          uVar9 = (uint)lVar17 & 0xffff;
          plVar7 = (longlong *)param_1[0x1a];
          if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
            plVar7 = plVar18;
          }
          iVar10 = *(int *)((longlong)plVar7 +
                           (ulonglong)
                           ((int)param_1[0x1b] - 1U &
                           (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar9) +
                           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              plVar7 = (longlong *)(*plVar16 + (longlong)iVar10 * 0x14);
              if (*plVar7 == lVar17) {
                if ((plVar7 != (longlong *)0x0) && (plVar7 + 1 != (longlong *)0x0)) {
                  iVar8 = (int)plVar7[1];
                }
                break;
              }
              iVar10 = *(int *)((longlong)plVar7 + 0xc);
            } while (iVar10 != -1);
          }
        }
      }
      lVar17 = plVar2[1];
      if ((lVar17 != 0) && ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4))) {
        uVar13 = (uint)((ulonglong)lVar17 >> 0x10);
        uVar9 = (uint)lVar17 & 0xffff;
        plVar7 = (longlong *)param_1[0x1a];
        if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
          plVar7 = plVar18;
        }
        iVar10 = *(int *)((longlong)plVar7 +
                         (ulonglong)
                         ((int)param_1[0x1b] - 1U &
                         (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar9) +
                         (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            plVar7 = (longlong *)(*plVar16 + (longlong)iVar10 * 0x14);
            if (*plVar7 == lVar17) {
              if ((((plVar7 != (longlong *)0x0) && (plVar7 + 1 != (longlong *)0x0)) && (iVar8 != -1)
                  ) && (iVar10 = (int)plVar7[1], iVar10 != -1)) {
                local_1a0 = uVar12;
                FUN_1400021e4(plVar2 + 2,&local_d8);
                lVar17 = plVar2[2];
                iVar3 = (int)param_1[5];
                *(uint *)(param_1 + 5) = iVar3 + 1U;
                if (*(uint *)((longlong)param_1 + 0x2c) < iVar3 + 1U) {
                  FUN_140832e02(local_1d8,iVar3);
                }
                pvVar4 = *local_1d8;
                *(longlong *)((longlong)pvVar4 + (longlong)iVar3 * 0xc) = lVar17;
                *(int *)((longlong)pvVar4 + (longlong)iVar3 * 0xc + 8) = iVar8;
                if (local_d8 != (void *)0x0) {
                  FUN_1400020a8();
                }
                local_1e8 = iVar10;
                FUN_140817d9a(&local_d8,&local_68,&local_78,param_1);
                local_1e8 = uVar5;
                FUN_140817d9a(local_138,&local_68,&local_78,param_1);
                FUN_1449437a2(&local_d8,local_198,local_138);
                iVar8 = (int)param_1[7];
                *(uint *)(param_1 + 7) = iVar8 + 1U;
                if (*(uint *)((longlong)param_1 + 0x3c) < iVar8 + 1U) {
                  FUN_144a2c682(local_1c0,iVar8);
                }
                plVar16 = local_1d0;
                piVar14 = local_198;
                puVar15 = (undefined8 *)((longlong)iVar8 * 0x60 + param_1[6]);
                for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
                  *puVar15 = *(undefined8 *)piVar14;
                  piVar14 = piVar14 + 2;
                  puVar15 = puVar15 + 1;
                }
                local_58 = plVar2 + 2;
                FUN_140818534(local_1d0,&local_4c,&local_58,0);
                *(int *)(param_1[0x12] + 8 + (longlong)local_4c * 0x14) = iVar8;
                iVar3 = (int)param_1[0x1d];
                *(uint *)(param_1 + 0x1d) = iVar3 + 1U;
                if (*(uint *)((longlong)param_1 + 0xec) < iVar3 + 1U) {
                  FUN_14488eebe(local_1c8,iVar3);
                }
                *(short *)(param_1[0x1c] + (longlong)iVar3 * 2) = (short)iVar8;
                iVar3 = (int)param_1[0x1f];
                lVar17 = (longlong)iVar3;
                *(uint *)(param_1 + 0x1f) = iVar3 + 1U;
                if (*(uint *)((longlong)param_1 + 0xfc) < iVar3 + 1U) {
                  FUN_14794b31c(local_1e0,iVar3);
                }
                lVar6 = *local_1e0;
                *(int *)(lVar6 + lVar17 * 0xc) = iVar8;
                *(undefined4 *)(lVar6 + 4 + lVar17 * 0xc) = uVar5;
                *(int *)(lVar6 + 8 + lVar17 * 0xc) = iVar10;
                uVar12 = local_1a0;
                param_2 = local_1b8;
                plVar18 = local_1b0;
              }
              break;
            }
            iVar10 = *(int *)((longlong)plVar7 + 0xc);
          } while (iVar10 != -1);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != local_1a8);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140818698(DAT_14cacd528,param_2);
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140817d70 FUN_140817d70 body=41 status=ok
// SIG undefined FUN_140817d70(void)

void FUN_140817d70(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1448759c8();
  return;
}



// FUNCTION 140817d9a FUN_140817d9a body=1945 status=ok
// SIG undefined FUN_140817d9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140817d9a(double *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                      uint param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  double *pdVar19;
  double *pdVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar21 = (longlong)(int)param_5;
  pdVar20 = (double *)(lVar21 * 0x60 + *param_3);
  if (*(char *)(*param_2 + lVar21) == '\0') {
    local_2f8 = 0xffffffff;
    if ((-1 < (int)param_5) && ((int)param_5 < *(int *)(param_4 + 0x28))) {
      local_2f8 = *(undefined4 *)(*(longlong *)(param_4 + 0x20) + 8 + (ulonglong)param_5 * 0xc);
    }
    pdVar19 = &local_2e8;
    uVar16 = FUN_140817d9a(pdVar19,param_2);
    auVar9 = _DAT_149934d80;
    dVar2 = local_2a8._0_8_;
    dVar10 = local_2a8._8_8_;
    dVar3 = local_298._0_8_;
    dVar8 = local_298._8_8_;
    auVar25 = *(undefined1 (*) [16])(pdVar20 + 8);
    dVar4 = auVar25._0_8_;
    dVar24 = auVar25._8_8_;
    auVar1 = *(undefined1 (*) [16])(pdVar20 + 10);
    dVar5 = auVar1._0_8_;
    auVar25 = minpd(auVar25,local_2a8);
    auVar29 = minpd(auVar1,local_298);
    auVar31._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    iVar17 = movmskpd(uVar16,auVar31);
    auVar25._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    uVar18 = movmskpd((int)pdVar19,auVar25);
    if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
      dVar13 = *pdVar20;
      dVar14 = pdVar20[1];
      dVar30 = pdVar20[2];
      dVar15 = pdVar20[3];
      dVar33 = pdVar20[4] * dVar2;
      dVar35 = pdVar20[5] * dVar10;
      dVar27 = pdVar20[6] * dVar3;
      dVar11 = pdVar20[7] * dVar8;
      dVar28 = dVar35 * local_2e8 - dStack_2e0 * dVar33;
      dVar7 = dVar27 * dStack_2e0 - local_2d8 * dVar35;
      dVar34 = dVar33 * local_2d8 - local_2e8 * dVar27;
      dVar12 = dVar11 * dStack_2d0 - dStack_2d0 * dVar11;
      dVar7 = dVar7 + dVar7;
      dVar34 = dVar34 + dVar34;
      dVar28 = dVar28 + dVar28;
      dVar12 = dVar12 + dVar12;
      dStack_2c0 = (dVar7 * local_2d8 - dVar28 * local_2e8) + dStack_2d0 * dVar34 + dVar35 +
                   dStack_2c0;
      *pdVar20 = dVar14 * local_2d8 * -1.0 +
                 dVar30 * dStack_2e0 + dVar15 * local_2e8 * 1.0 + dVar13 * dStack_2d0;
      pdVar20[1] = dVar13 * local_2d8 * 1.0 +
                   dVar15 * dStack_2e0 + dVar30 * local_2e8 * -1.0 + dVar14 * dStack_2d0;
      pdVar20[2] = dVar15 * local_2d8 * 1.0 +
                   ((local_2e8 * dVar14 * 1.0 + dVar30 * dStack_2d0) - dVar13 * dStack_2e0);
      pdVar20[3] = dVar30 * local_2d8 * -1.0 +
                   ((local_2e8 * dVar13 * -1.0 + dVar15 * dStack_2d0) - dVar14 * dStack_2e0);
      auVar6._8_4_ = SUB84(dStack_2c0,0);
      auVar6._0_8_ = (dVar28 * dStack_2e0 - local_2d8 * dVar34) + dStack_2d0 * dVar7 + dVar33 +
                     local_2c8;
      auVar6._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
      *(undefined1 (*) [16])(pdVar20 + 4) = auVar6;
      pdVar20[6] = (dVar34 * local_2e8 - dStack_2e0 * dVar7) + dStack_2d0 * dVar28 + dVar27 +
                   (double)CONCAT44(uStack_2b4,local_2b8);
      pdVar20[7] = (dVar12 * dStack_2d0 - dVar12 * dStack_2d0) + dStack_2d0 * dVar12 + dVar11 +
                   dStack_2b0;
      pdVar20[8] = dVar4 * dVar2;
      pdVar20[9] = dVar24 * dVar10;
      pdVar20[10] = dVar5 * dVar3;
      pdVar20[0xb] = auVar1._8_8_ * dVar8;
    }
    else {
      dVar27 = dStack_2e0 + dStack_2e0;
      dVar28 = local_2d8 + local_2d8;
      dVar34 = local_2e8 * (local_2e8 + local_2e8);
      local_198 = (1.0 - (dVar34 + dStack_2e0 * dVar27)) * dVar3;
      dVar7 = (local_2e8 + local_2e8) * dStack_2d0;
      local_1a8 = (dVar27 * dStack_2d0 + local_2e8 * dVar28) * dVar3;
      dVar8 = dVar8 * auVar1._8_8_;
      dStack_1a0 = (dVar28 * dStack_2e0 - dVar7) * dVar3;
      local_1e8 = ((double)DAT_149934d80 - (local_2d8 * dVar28 + dStack_2e0 * dVar27)) * dVar2;
      dVar34 = (DAT_149934d80._8_8_ - (local_2d8 * dVar28 + dVar34)) * dVar10;
      dStack_1e0 = (dVar27 * local_2e8 + dVar28 * dStack_2d0) * dVar2;
      local_1b8 = (dVar28 * dStack_2e0 + dVar7) * dVar10;
      local_1d8 = (local_2e8 * dVar28 - dVar27 * dStack_2d0) * dVar2;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar34,0);
      local_1c8._0_8_ = (dVar27 * local_2e8 - dVar28 * dStack_2d0) * dVar10;
      local_1c8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = local_2c8;
      dStack_180 = dStack_2c0;
      local_178 = local_2b8;
      uStack_174 = uStack_2b4;
      uStack_170 = 0;
      uStack_16c = 0x3ff00000;
      dVar12 = *pdVar20;
      dVar13 = pdVar20[1];
      dVar14 = pdVar20[2];
      dVar30 = dVar13 + dVar13;
      dVar7 = dVar14 + dVar14;
      dVar11 = dVar12 * (dVar12 + dVar12);
      local_218 = (1.0 - (dVar11 + dVar13 * dVar30)) * dVar5;
      dVar28 = pdVar20[3];
      dVar34 = dVar7 * dVar28;
      dVar27 = (dVar12 + dVar12) * pdVar20[3];
      dVar28 = dVar30 * dVar28;
      local_228 = (dVar28 + *pdVar20 * dVar7) * dVar5;
      local_248 = (dVar30 * dVar12 - dVar34) * dVar24;
      dStack_220 = (dVar7 * dVar13 - dVar27) * dVar5;
      dVar10 = dVar10 * dVar24;
      local_268 = ((double)DAT_149934d80 - (dVar14 * dVar7 + dVar13 * dVar30)) * dVar4;
      dStack_240 = (DAT_149934d80._8_8_ - (dVar14 * dVar7 + dVar11)) * dVar24;
      dStack_260 = (dVar30 * dVar12 + dVar34) * dVar4;
      local_238 = (dVar7 * dVar13 + dVar27) * dVar24;
      local_258 = (*pdVar20 * dVar7 - dVar28) * dVar4;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = pdVar20[4];
      dStack_200 = pdVar20[5];
      local_1f8 = pdVar20[6];
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar29._8_8_ = -(ulonglong)(0.0 <= dVar10);
      auVar29._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
      auVar25 = blendvpd(_DAT_149936790,auVar9,auVar29);
      uVar22 = -(ulonglong)(0.0 <= dVar3 * dVar5);
      dVar24 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
      dVar28 = auVar25._0_8_;
      local_158 = local_158 * dVar28;
      local_160 = local_160 * dVar28;
      local_168 = local_168 * dVar28;
      dVar28 = auVar25._8_8_;
      local_138 = local_138 * dVar28;
      local_140 = local_140 * dVar28;
      local_148 = dVar28 * local_148;
      local_118 = local_118 * dVar24;
      local_120 = local_120 * dVar24;
      local_128 = dVar24 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar24 = local_278 * local_278 + local_288 * local_288;
      dVar28 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar26._0_8_ = dVar24 + dVar28;
      auVar26._8_8_ = dVar24 + dVar28;
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
      auVar25 = sqrtpd(auVar26,auVar26);
      auVar31 = divpd(auVar9,auVar25);
      auVar32._0_8_ = auVar31._0_8_ * local_278;
      auVar32._8_8_ = auVar31._8_8_ * dStack_270;
      auVar25 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar23);
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar2 * dVar4;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(pdVar20 + 8) = auVar9;
      auVar1._8_4_ = SUB84(dVar8,0);
      auVar1._0_8_ = dVar3 * dVar5;
      auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(pdVar20 + 10) = auVar1;
      *pdVar20 = (double)((ulonglong)(local_288 * auVar31._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
      pdVar20[1] = (double)((ulonglong)(dStack_280 * auVar31._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
      *(undefined1 (*) [16])(pdVar20 + 2) = auVar25;
      pdVar20[4] = local_108;
      pdVar20[5] = dStack_100;
      pdVar20[6] = local_f8;
      pdVar20[7] = 0.0;
    }
    *(undefined1 *)(*param_2 + lVar21) = 1;
  }
  pdVar19 = param_1;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar19 = *pdVar20;
    pdVar20 = pdVar20 + 1;
    pdVar19 = pdVar19 + 1;
  }
  if ((local_e0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140818534 FUN_140818534 body=354 status=ok
// SIG undefined FUN_140818534(void)

undefined4 *
FUN_140818534(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14487db2c(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0xffffffff00000000;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_1401719bc(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)(local_40 + 2) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14487ddf8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140818698 FUN_140818698 body=742 status=ok
// SIG undefined FUN_140818698(void)

void FUN_140818698(PSRWLOCK param_1,longlong param_2)

{
  PVOID pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  PSRWLOCK pRVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  AcquireSRWLockShared(param_1);
  if (param_2 == 0) {
    uVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar6 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar6 = *(uint *)(lVar12 + 0x10);
      bVar14 = uVar6 == 0;
      if (bVar14) {
        *(uint *)(lVar12 + 0x10) = uVar5;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar6 = uVar5;
      }
    }
  }
  if (*(int *)&param_1[0x14].Ptr != 0) {
    pRVar7 = param_1 + 0x12;
    if (param_1[0x13].Ptr != (PSRWLOCK)0x0) {
      pRVar7 = param_1[0x13].Ptr;
    }
    iVar11 = *(int *)((longlong)&pRVar7->Ptr +
                     (longlong)(int)(*(int *)&param_1[0x14].Ptr - 1U & (uVar6 ^ uVar8)) * 4);
    while (iVar10 = iVar11, iVar10 != -1) {
      iVar11 = *(int *)((longlong)param_1[0xb].Ptr + (longlong)iVar10 * 0x20 + 0x18);
      local_50 = *(undefined8 *)((longlong)param_1[0xb].Ptr + (longlong)iVar10 * 0x20);
      local_58 = CONCAT44(uVar6,uVar8);
      cVar4 = FUN_1448181f4(&local_50,&local_58);
      if (cVar4 != '\0') {
        do {
          uVar3 = uStack_60;
          pvVar1 = param_1[0xb].Ptr;
          lVar12 = (longlong)(int)uStack_60;
          uVar5 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_1408189ca(&local_68,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_68 + lVar12 * 0x10) =
               *(undefined8 *)((longlong)pvVar1 + (longlong)iVar10 * 0x20 + 8);
          lVar9 = *(longlong *)((longlong)pvVar1 + (longlong)iVar10 * 0x20 + 0x10);
          *(longlong *)(local_68 + 8 + lVar12 * 0x10) = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          do {
            iVar10 = iVar11;
            if (iVar10 == -1) goto LAB_140818829;
            iVar11 = *(int *)((longlong)param_1[0xb].Ptr + (longlong)iVar10 * 0x20 + 0x18);
            local_50 = *(undefined8 *)((longlong)param_1[0xb].Ptr + (longlong)iVar10 * 0x20);
            local_58 = CONCAT44(uVar6,uVar8);
            cVar4 = FUN_1448181f4(&local_50);
          } while (cVar4 == '\0');
        } while( true );
      }
    }
  }
LAB_140818829:
  ReleaseSRWLockShared(param_1);
  AcquireSRWLockExclusive(param_1);
  lVar12 = local_68;
  lVar9 = (longlong)(int)uStack_60;
  if (lVar9 != 0) {
    lVar13 = 0;
    do {
      lVar2 = *(longlong *)(lVar12 + lVar13);
      if (*(int *)(lVar2 + 0x1c) < 0) {
        *(undefined4 *)(lVar2 + 0x18) = 0;
        FUN_14481578e(lVar2 + 0x10,0);
      }
      else {
        *(undefined4 *)(lVar2 + 0x18) = 0;
      }
      if (*(int *)(lVar2 + 0x2c) < 0) {
        *(undefined4 *)(lVar2 + 0x28) = 0;
        FUN_14481578e(lVar2 + 0x20,0);
      }
      else {
        *(undefined4 *)(lVar2 + 0x28) = 0;
      }
      if (*(int *)(lVar2 + 0x3c) < 0) {
        *(undefined4 *)(lVar2 + 0x38) = 0;
        FUN_14794cd8a(lVar2 + 0x30);
      }
      else {
        *(undefined4 *)(lVar2 + 0x38) = 0;
      }
      FUN_144a38ff8(lVar2);
      lVar13 = lVar13 + 0x10;
    } while (lVar9 * 0x10 != lVar13);
  }
  ReleaseSRWLockExclusive(param_1);
  FUN_14081897f(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14081897f FUN_14081897f body=75 status=ok
// SIG undefined FUN_14081897f(void)

void FUN_14081897f(longlong param_1,int param_2)

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



// FUNCTION 1408189ca FUN_1408189ca body=269 status=ok
// SIG undefined FUN_1408189ca(void)

void FUN_1408189ca(longlong param_1,int param_2)

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



// FUNCTION 140818ad8 FUN_140818ad8 body=337 status=ok
// SIG undefined FUN_140818ad8(void)

void FUN_140818ad8(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140818b45;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140818b45:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 140818c2a FUN_140818c2a body=255 status=ok
// SIG undefined FUN_140818c2a(void)

void FUN_140818c2a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140818d2a FUN_140818d2a body=285 status=ok
// SIG undefined FUN_140818d2a(void)

longlong * FUN_140818d2a(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 != 0) {
    lVar3 = FUN_144a799b0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      while (param_2 = lVar4, lVar4 = *(longlong *)(param_2 + 0x20), lVar4 != 0) {
        lVar3 = FUN_144a799b0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) break;
      }
    }
  }
  lVar4 = FUN_14045cbe4(param_2 + 0x28);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14574b1de(param_1,param_2,lVar4);
    return plVar5;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar3 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar3);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
        lVar7 = FUN_1400de7f6();
        if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) &&
           (cVar2 = (**(code **)(*plVar5 + 0xa0))(plVar5,param_2), cVar2 != '\0')) {
          return plVar5;
        }
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return (longlong *)0x0;
}



// FUNCTION 140818e52 FUN_140818e52 body=227 status=ok
// SIG undefined FUN_140818e52(void)

void FUN_140818e52(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar6 = true;
  if (DAT_14c86a9f8 == '\x01') {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar3 != 2) {
      if (iVar3 != 1) goto LAB_140818ea2;
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      bVar6 = DVar4 == DVar5;
    }
  }
  if ((bVar6) && (*param_1 != 0)) {
    FUN_14076964e(param_2,&local_40);
    if (local_40 != 0) {
      FUN_140818f36(local_40,param_1,param_2,param_3);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
LAB_140818ea2:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140818f36 FUN_140818f36 body=348 status=ok
// SIG undefined FUN_140818f36(void)

void FUN_140818f36(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20) == lVar2) {
          if (lVar4 != 0) {
            plVar5 = (longlong *)(lVar4 + 8);
            goto LAB_140818fda;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  plVar5 = (longlong *)FUN_14076a210();
  if (plVar5 != (longlong *)0x0) {
LAB_140818fda:
    lVar2 = plVar5[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar4 = *plVar5;
      lVar9 = 0;
      do {
        iVar3 = *(int *)(lVar4 + 4 + lVar9);
        if ((iVar3 == 0) || (uVar1 = *(uint *)(lVar4 + lVar9), (int)uVar1 < 0)) {
LAB_14081908d:
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar3)) ||
               ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_14081908d;
            uVar8 = *puVar6;
          }
        }
        iVar3 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
          FUN_14023b962(param_4,iVar3);
        }
        *(undefined8 *)(*param_4 + (longlong)iVar3 * 8) = uVar8;
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar9);
    }
  }
  return;
}



// FUNCTION 1408190a0 FUN_1408190a0 body=31 status=ok
// SIG undefined FUN_1408190a0(void)

undefined8 FUN_1408190a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408190c0 FUN_1408190c0 body=37 status=ok
// SIG undefined FUN_1408190c0(void)

undefined8
FUN_1408190c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1408190e6(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1408190e6 FUN_1408190e6 body=320 status=ok
// SIG undefined FUN_1408190e6(void)

byte FUN_1408190e6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = *param_1;
  bVar5 = true;
  bVar4 = true;
  if (lVar3 == 0) {
    bVar4 = param_1[1] != 0;
  }
  lVar1 = *param_2;
  if (lVar1 == 0) {
    bVar5 = param_2[1] != 0;
  }
  bVar2 = 1;
  if ((bVar4 & bVar5) == 1) {
    if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar1);
      lVar3 = *param_1;
    }
    if (lVar3 == lVar1) {
      lVar3 = param_2[1];
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      if (param_1[1] == lVar3) {
        if (((double)param_1[3] == (double)param_2[3]) &&
           (!NAN((double)param_1[3]) && !NAN((double)param_2[3]))) {
          if (((double)param_1[4] == (double)param_2[4]) &&
             (!NAN((double)param_1[4]) && !NAN((double)param_2[4]))) {
            if (((double)param_1[5] == (double)param_2[5]) &&
               (!NAN((double)param_1[5]) && !NAN((double)param_2[5]))) {
              if (((double)param_1[6] == (double)param_2[6]) &&
                 (!NAN((double)param_1[6]) && !NAN((double)param_2[6]))) {
                if (((double)param_1[7] == (double)param_2[7]) &&
                   (!NAN((double)param_1[7]) && !NAN((double)param_2[7]))) {
                  if (((double)param_1[8] == (double)param_2[8]) &&
                     (!NAN((double)param_1[8]) && !NAN((double)param_2[8]))) {
                    if (((double)param_1[9] == (double)param_2[9]) &&
                       (!NAN((double)param_1[9]) && !NAN((double)param_2[9]))) {
                      if (((double)param_1[10] == (double)param_2[10]) &&
                         (!NAN((double)param_1[10]) && !NAN((double)param_2[10]))) {
                        bVar2 = -((double)param_2[0xb] == (double)param_1[0xb]) & 1;
                        goto LAB_14081912b;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar2 = 0;
  }
LAB_14081912b:
  if (bVar4 != bVar5) {
    return 0;
  }
  return bVar2;
}



// FUNCTION 140819234 FUN_140819234 body=40 status=ok
// SIG undefined FUN_140819234(void)

undefined8 FUN_140819234(undefined8 param_1,int param_2)

{
  FUN_14081925c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14081925c FUN_14081925c body=304 status=ok
// SIG undefined FUN_14081925c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081925c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b2c7960;
  plVar3 = (longlong *)param_1[0x1e];
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
  plVar3 = (longlong *)param_1[0x1b];
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
  plVar3 = (longlong *)param_1[0x18];
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
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000140819321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14081938c FUN_14081938c body=41 status=ok
// SIG undefined FUN_14081938c(void)

void FUN_14081938c(undefined8 param_1,longlong *param_2)

{
  FUN_1408193b6();
                    /* WARNING: Could not recover jumptable at 0x0001408193b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14afb7300);
  return;
}



// FUNCTION 1408193b6 FUN_1408193b6 body=142 status=ok
// SIG undefined FUN_1408193b6(void)

void FUN_1408193b6(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a3d2228);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014081943c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_149e3cbc8);
}



// FUNCTION 140819446 FUN_140819446 body=669 status=ok
// SIG undefined FUN_140819446(void)

void FUN_140819446(longlong param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  ulonglong local_78;
  longlong lStack_70;
  wchar_t awStack_68 [20];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 8;
  plVar4 = *(longlong **)(param_1 + 0x720);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2c0))(plVar4,&local_78,param_1);
    uVar5 = local_78;
    if (DAT_14c950c29 == '\x01') {
      if (local_78 == 0) {
        uVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        uVar5 = local_78;
      }
    }
    *(ulonglong *)(param_1 + 0x768) = uVar5;
    *(longlong *)(param_1 + 0x770) = lStack_70;
  }
  FUN_1408196e4(param_1 + 0x598,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb89578) && (FUN_144b3d300(&DAT_14cb89578), DAT_14cb89578 == -1)) {
    builtin_wcsncpy(awStack_68,L"entHitInternal",0xf);
    local_78 = 0x6f0043006e004f;
    lStack_70 = 0x6e006f0070006d;
    FUN_1446f470e(&DAT_14cb89570,&local_78,1);
    _Init_thread_footer(&DAT_14cb89578);
  }
  lVar6 = DAT_14cb89570;
  if (param_1 == 0) {
    uVar5 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar7;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),lVar6,1);
    }
  }
  local_78 = (ulonglong)uVar9 | uVar5 << 0x20;
  lStack_70 = lVar6;
  FUN_1400dccb8(param_1 + 0x598,&local_80);
  bVar2 = FUN_140819c20(param_1,local_80,&local_78);
  *(byte *)(param_1 + 0x598) = *(byte *)(param_1 + 0x598) | bVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408196e4 FUN_1408196e4 body=96 status=ok
// SIG undefined FUN_1408196e4(void)

void FUN_1408196e4(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_1400dccb8(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x598,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140819746 FUN_140819746 body=225 status=ok
// SIG undefined FUN_140819746(void)

longlong * FUN_140819746(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x130);
  if ((((lVar2 == 0) || (lVar1 = FUN_145a80696(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30 || (lVar2 = *(longlong *)(param_1 + 0x130), lVar2 == 0)))) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar1 = FUN_145a80696();
  if ((lVar1 == 0) ||
     ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x130);
  }
  lVar2 = FUN_14892b8d7(param_3,uVar3);
  *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0x20);
  FUN_140c6474a(lVar2);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_2 = lVar2;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_14081980d;
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    *param_2 = lVar2;
  }
  lVar2 = lVar2 + 0xa0;
LAB_14081980d:
  param_2[1] = lVar2;
  return param_2;
}



// FUNCTION 140819828 FUN_140819828 body=645 status=ok
// SIG undefined FUN_140819828(void)

ulonglong FUN_140819828(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [40];
  undefined **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if (DAT_14c963d90 != DAT_14c963dbc) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    puVar5 = DAT_14c963dc8;
    if (DAT_14c963dc8 == (undefined *)0x0) {
      puVar5 = &DAT_14c963dc0;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(DAT_14c963dd0 - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar1 = DAT_14c963d88 + (longlong)iVar4 * 0x60;
      if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar4 * 0x60) == param_1) {
        uVar8 = 0;
        if ((lVar1 == 0) || (plVar9 = (longlong *)(lVar1 + 8), plVar9 == (longlong *)0x0))
        goto LAB_140819a17;
        if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) goto LAB_1408199a8;
        uVar2 = (uint)((ulonglong)param_2 >> 0x10);
        uVar7 = (uint)param_2 & 0xffff;
        lVar6 = lVar1 + 0x40;
        if (*(longlong *)(lVar1 + 0x48) != 0) {
          lVar6 = *(longlong *)(lVar1 + 0x48);
        }
        iVar4 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar1 + 0x50) - 1U &
                                 (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7)
                                 + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar4 == -1) goto LAB_1408199a8;
        goto LAB_140819958;
      }
      iVar4 = *(int *)(lVar1 + 0x58);
    }
  }
  uVar8 = 0;
  goto LAB_140819a17;
  while (iVar4 = *(int *)(lVar6 + 0x18), iVar4 != -1) {
LAB_140819958:
    lVar6 = *plVar9 + (longlong)iVar4 * 0x20;
    if (*(longlong *)(*plVar9 + (longlong)iVar4 * 0x20) == param_2) {
      uVar8 = 0;
      if ((lVar6 == 0) || ((longlong *)(lVar6 + 8) == (longlong *)0x0)) goto LAB_1408199aa;
      lVar6 = *(longlong *)(lVar6 + 8);
      if ((lVar6 != 0) && (FUN_1401073f6(lVar6,param_3), 0 < *(int *)(lVar6 + 8))) {
        uVar8 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        goto LAB_1408199aa;
      }
      FUN_140819aae(plVar9,param_2);
      break;
    }
  }
LAB_1408199a8:
  uVar8 = 0;
LAB_1408199aa:
  if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
    if (DAT_14c963d90 != DAT_14c963dbc) {
      puVar5 = &DAT_14c963dc0;
      if (DAT_14c963dc8 != (undefined *)0x0) {
        puVar5 = DAT_14c963dc8;
      }
      for (iVar4 = *(int *)(puVar5 + ((longlong)(int)uVar3 & (longlong)DAT_14c963dd0 - 1U) * 4);
          iVar4 != -1; iVar4 = *(int *)((longlong)iVar4 * 0x60 + DAT_14c963d88 + 0x58)) {
        if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar4 * 0x60) == param_1) {
          FUN_14007eed8(&DAT_14c963d88);
          break;
        }
      }
      if (DAT_14c963d90 != DAT_14c963dbc) goto LAB_140819a17;
    }
    local_50 = &PTR_PTR_14c75ecc8;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
    FUN_140f933a4(&DAT_14c964830,&local_50,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  }
LAB_140819a17:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140819aae FUN_140819aae body=240 status=ok
// SIG undefined FUN_140819aae(void)

void FUN_140819aae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar9) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar3 = *param_1;
      do {
        lVar10 = (longlong)iVar8 * 0x20;
        lVar2 = lVar3 + lVar10;
        if (*(longlong *)(lVar3 + lVar10) == param_2) {
          iVar7 = *(int *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          if (iVar7 == iVar8) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          }
          else {
            do {
              piVar6 = (int *)((longlong)iVar7 * 0x20 + lVar3 + 0x18);
              iVar7 = *piVar6;
            } while (iVar7 != iVar8);
          }
          *piVar6 = *(int *)(lVar2 + 0x18);
          plVar5 = *(longlong **)(*param_1 + 0x10 + lVar10);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar6 = (int *)((longlong)plVar5 + 0xc);
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (*piVar6 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_140819bac(param_1,iVar8);
          return;
        }
        iVar8 = *(int *)(lVar2 + 0x18);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 140819b9e FUN_140819b9e body=14 status=ok
// SIG undefined FUN_140819b9e(void)

void FUN_140819b9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 140819bac FUN_140819bac body=116 status=ok
// SIG undefined FUN_140819bac(void)

void FUN_140819bac(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 140819c20 FUN_140819c20 body=653 status=ok
// SIG undefined FUN_140819c20(void)

undefined8 FUN_140819c20(ulonglong param_1,undefined8 param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) {
    uVar3 = *param_3;
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140819de6;
    plVar4 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
       ((*plVar4 != 0 &&
        (lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1),
        lVar5 != 0)))) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
      if (DAT_14c963d90 == DAT_14c963dbc) {
        FUN_140f9708a(&DAT_14c9647b8,&PTR_PTR_14c75ecc8);
      }
      uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_38 = param_1;
      uVar6 = FUN_140a2903e(uVar3 >> 0x10 ^ uVar3);
      uVar3 = (uint)((ulonglong)param_2 >> 0x10);
      uVar8 = (uint)param_2 & 0xffff;
      plVar4 = (longlong *)
               FUN_140a294e4(uVar6,((uint)param_2 << 0x10 | uVar8) +
                                   (int)((ulonglong)param_2 >> 0x20) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4),&local_30);
      if (*plVar4 == 0) {
        plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_149eae1a0;
        plVar7[2] = 0;
        plVar7[3] = 0;
        if (plVar7 == (longlong *)0x0) {
          *plVar4 = 0x10;
          plVar9 = (longlong *)plVar4[1];
          if (plVar9 != (longlong *)0x0) {
            plVar4[1] = 0;
LAB_140819e37:
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            if (plVar7 != (longlong *)0x0) goto LAB_140819dc2;
          }
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          *plVar4 = (longlong)(plVar7 + 2);
          plVar9 = (longlong *)plVar4[1];
          if (plVar7 == plVar9) {
            LOCK();
            plVar9 = plVar7 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
          else {
            plVar4[1] = (longlong)plVar7;
            if (plVar9 != (longlong *)0x0) goto LAB_140819e37;
          }
LAB_140819dc2:
          LOCK();
          plVar9 = plVar7 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      FUN_14053c012(*plVar4,param_3);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
      uVar6 = 1;
      goto LAB_140819de6;
    }
  }
  uVar6 = 0;
LAB_140819de6:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140819eae FUN_140819eae body=530 status=ok
// SIG undefined FUN_140819eae(void)

void FUN_140819eae(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0 [2];
  undefined1 local_9a [2];
  undefined1 *local_98;
  longlong *local_90;
  longlong *local_88;
  uint *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x10) * 2);
  cVar3 = FUN_14479fe53(uVar1,1,1);
  if ((cVar3 != '\0') && ((undefined *)*param_4 == &DAT_14cb00c58)) {
    (**(code **)(*param_3 + 0x288))(param_3,local_9a);
    uVar4 = (**(code **)(*param_3 + 0x270))(param_3);
    if (uVar4 < 2) {
      iVar5 = (**(code **)(*param_3 + 0x30))(param_3);
      if (iVar5 == 0) {
        local_b0[0] = *param_4;
        local_b0[1] = 0;
        local_64 = *(undefined4 *)(param_1 + 8);
        local_68 = *(uint *)(param_1 + 0x10);
        local_b8 = param_2;
        FUN_140286966(local_60,local_68,param_3);
        local_70 = param_6;
        local_98 = local_60;
        local_90 = param_3;
        local_88 = local_b0;
        local_80 = &local_68;
        local_78 = &local_64;
        FUN_14081a0c2(&local_98,1,0);
        FUN_14081a0c2(&local_98,0,0);
        if ((*(byte *)(param_5 + 5) & 0x80) != 0) {
          FUN_14081a0c2(&local_98,1,1);
          FUN_14081a0c2(&local_98,0,1);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar2 = *(undefined4 *)(param_1 + 8);
        local_c8 = param_6;
        local_d0._0_1_ = 0;
        local_d8 = uVar2;
        FUN_1406ffa3b();
        local_c8 = param_6;
        local_d0 = CONCAT11(local_d0._1_1_,1);
        local_d8 = uVar2;
        FUN_1406ffa3b();
        local_d8 = *(undefined4 *)(param_1 + 0x10);
        local_c0 = param_6;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 8));
        local_d0 = uVar1;
        FUN_14081a398(local_b8,local_b0,param_3,param_5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14081a0c2 FUN_14081a0c2 body=725 status=ok
// SIG undefined FUN_14081a0c2(void)

/* WARNING: Removing unreachable block (ram,0x00014081a33f) */

void FUN_14081a0c2(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined2 local_190 [4];
  undefined8 local_188;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar5 = *param_1;
  lVar7 = *(longlong *)(lVar5 + 8);
  if (*(longlong *)(lVar5 + 8) == 0) {
    lVar7 = lVar5;
  }
  if ((longlong)*(int *)(lVar5 + 0x10) != 0) {
    lVar5 = (longlong)*(int *)(lVar5 + 0x10) << 2;
    lVar6 = 0;
    local_1c8 = lVar5;
    local_1c0 = lVar7;
    do {
      local_1d0 = &local_1a8;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1e0 = 5;
      local_1e8 = param_2;
      local_1d8 = param_3;
      cVar3 = FUN_144a628de(param_1[1],*(undefined8 *)param_1[2],*(undefined4 *)(lVar7 + lVar6),
                            *(undefined4 *)param_1[3]);
      if (cVar3 != '\0') {
        local_80 = 0;
        local_78 = 0x300000000;
        local_70 = 0x7fffffff;
        uStack_68 = 0;
        local_190[0] = 0x101;
        local_1b8 = (undefined4)local_1a8;
        uStack_1b4 = local_1a8._4_4_;
        uStack_1b0 = (undefined4)uStack_1a0;
        uStack_1ac = uStack_1a0._4_4_;
        FUN_140700dd8(local_190,&local_1b8);
        local_70 = local_70 & 0x80000000 | *(uint *)param_1[4] & 0x7fffffff;
        uStack_68 = *(undefined8 *)param_1[2];
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 == 2)) {
          bVar4 = (**(code **)(*(longlong *)param_1[1] + 0x400))();
          local_70 = local_70 & 0x7fffffff | (uint)bVar4 << 0x1f;
          FUN_14365ece2(local_188);
        }
        plVar2 = (longlong *)param_1[5];
        iVar1 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
          FUN_14069191a(plVar2,iVar1);
        }
        lVar5 = *plVar2;
        _Dst = (void *)(lVar5 + (longlong)iVar1 * 0x130);
        memcpy(_Dst,local_190,0xe0);
        *(undefined8 *)(lVar5 + 0x110 + (longlong)iVar1 * 0x130) = 0;
        if (local_80 == 0) {
          *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
          *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
          *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
          *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
          *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
          *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
        }
        *(longlong *)((longlong)_Dst + 0x110) = local_80;
        *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
        *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
        *(uint *)((longlong)_Dst + 0x120) = local_70;
        *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
        *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
        *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
        local_78 = 0x300000000;
        local_80 = 0;
        lVar5 = local_1c8;
        lVar7 = local_1c0;
      }
      lVar6 = lVar6 + 4;
    } while (lVar5 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14081a398 FUN_14081a398 body=976 status=ok
// SIG undefined FUN_14081a398(void)

/* WARNING: Removing unreachable block (ram,0x00014081a726) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081a398(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint in_stack_00000038;
  longlong *in_stack_00000040;
  undefined1 auStack_308 [32];
  wchar_t *local_2e8;
  wchar_t *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d0;
  code *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  undefined2 local_278 [4];
  undefined8 local_270;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 local_160;
  uint local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined8 auStack_d0 [12];
  undefined4 auStack_70 [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_308;
  memset(local_d8,0,0x98);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9f87b8) && (FUN_144b3d300(&DAT_14c9f87b8), DAT_14c9f87b8 == -1)) {
    FUN_1460438b6();
    local_2a0 = &LAB_14712ac08;
    local_2a8 = &LAB_14712ac0c;
    local_2b0 = &LAB_14720487c;
    local_2b8 = &LAB_14176b2ca;
    local_2c0 = FUN_147204880;
    local_2c8 = FUN_1472048a8;
    local_2e0 = L"Main";
    local_2e8 = L"/Engine/Private/Lumen/LumenCardComputeShader.usf";
    local_290 = 0;
    local_298 = 0x110;
    local_2d0 = 1;
    local_2d8 = 5;
    FUN_140db5666(&DAT_14c9f8710,2,&DAT_14c9f86a8,L"FLumenCardCS");
    _DAT_14c9f8710 = &PTR_FUN_14a1fb500;
    atexit((_func_5014 *)&LAB_142d650ba);
    _Init_thread_footer(&DAT_14c9f87b8);
  }
  auStack_d0[DAT_14c9f8758] = &DAT_14c9f8710;
  auStack_70[DAT_14c9f8758] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  cVar3 = FUN_14007744c(param_3,local_d8,*param_2);
  if ((cVar3 != '\0') && (lStack_110 != 0)) {
    local_168 = 0;
    local_160 = 0x300000000;
    local_158 = 0x7fffffff;
    uStack_150 = 0;
    local_278[0] = 0x101;
    local_288 = lStack_110;
    local_280 = local_148;
    FUN_140700dd8(local_278);
    local_158 = local_158 & 0x80000000 | in_stack_00000038 & 0x7fffffff;
    uStack_150 = *param_2;
    if ((DAT_14cafb2b4 != 1) &&
       (((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) && (DAT_14cafb358 == 2)))) {
      bVar4 = (**(code **)(*param_3 + 0x400))(param_3);
      local_158 = local_158 & 0x7fffffff | (uint)bVar4 << 0x1f;
      FUN_14365ece2(local_270);
    }
    iVar1 = (int)in_stack_00000040[1];
    *(uint *)(in_stack_00000040 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)in_stack_00000040 + 0xc) < iVar1 + 1U) {
      FUN_14069191a(in_stack_00000040,iVar1);
    }
    lVar2 = *in_stack_00000040;
    _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
    memcpy(_Dst,local_278,0xe0);
    *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
    if (local_168 == 0) {
      *(undefined8 *)((longlong)_Dst + 0x100) = local_178;
      *(undefined8 *)((longlong)_Dst + 0x108) = uStack_170;
      *(undefined8 *)((longlong)_Dst + 0xf0) = local_188;
      *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_180;
      *(undefined8 *)((longlong)_Dst + 0xe0) = local_198;
      *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_190;
    }
    *(longlong *)((longlong)_Dst + 0x110) = local_168;
    local_168 = 0;
    *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_160;
    *(undefined4 *)((longlong)_Dst + 0x11c) = local_160._4_4_;
    local_160 = 0x300000000;
    *(uint *)((longlong)_Dst + 0x120) = local_158;
    *(undefined4 *)((longlong)_Dst + 0x124) = uStack_154;
    *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)_Dst + 300) = uStack_150._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14081a774 FUN_14081a774 body=1682 status=ok
// SIG undefined FUN_14081a774(void)

undefined8 * FUN_14081a774(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  uVar12 = DAT_14cb717f0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140486538(param_2,DAT_14cb717f0);
  FUN_14048646a(param_2 + 0x20,uVar12,0,0);
  FUN_14064ffa8(param_1,param_2);
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
  param_1[0x4c4] = 0;
  param_1[0x4c5] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  *(undefined4 *)(param_1 + 0x4c6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x263c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2654) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x265c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x266c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x267c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x269c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x26ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x26dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26d4) = 0;
  *(undefined1 *)(param_1 + 0x4e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x272c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x271c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2724) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2714) = 0;
  param_1[0x4eb] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4e9] = 0;
  param_1[0x4ea] = 0;
  param_1[0x4e7] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4ee] = 0;
  uVar12 = DAT_14c8463e8;
  param_1[0x4f2] = DAT_14c8463e0;
  param_1[0x4f3] = uVar12;
  uVar12 = DAT_14c8463d8;
  param_1[0x4f0] = DAT_14c8463d0;
  param_1[0x4f1] = uVar12;
  uVar12 = DAT_14c8464e8;
  param_1[0x4f4] = DAT_14c8464e0;
  param_1[0x4f5] = uVar12;
  param_1[0x4f6] = DAT_14c8464f0;
  uVar12 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
  param_1[0x4f7] = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
  param_1[0x4f8] = uVar12;
  param_1[0x4f9] = DAT_14c846520;
  param_1[0x4fa] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x4fb) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x27dc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x27de) = 0;
  param_1[0x4fc] = 0;
  param_1[0x4fd] = 0;
  param_1[0x500] = DAT_14c846520;
  uVar12 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
  param_1[0x4fe] = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
  param_1[0x4ff] = uVar12;
  param_1[0x501] = 0x4040000000000000;
  *(undefined1 *)(param_1 + 0x502) = 0;
  uVar5 = DAT_14c846518._4_4_;
  uVar4 = (undefined4)DAT_14c846518;
  uVar9 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x503) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x281c) = uVar9;
  *(undefined4 *)(param_1 + 0x504) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2824) = uVar5;
  param_1[0x505] = DAT_14c846520;
  *(undefined4 *)(param_1 + 0x506) = 1;
  param_1[0x514] = 0;
  *(undefined4 *)(param_1 + 0x515) = 0;
  param_1[0x507] = 0;
  param_1[0x508] = 0;
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  param_1[0x50b] = 0;
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  param_1[0x510] = 0;
  param_1[0x511] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28b4) = 0;
  param_1[0x518] = 0;
  *(undefined4 *)(param_1 + 0x519) = 0;
  *(byte *)(param_1 + 0x51a) = *(byte *)(param_1 + 0x51a) & 0xf8;
  param_1[0x51f] = 0;
  param_1[0x51d] = 0;
  param_1[0x51e] = 0;
  param_1[0x51b] = 0;
  param_1[0x51c] = 0;
  param_1[0x523] = 0;
  param_1[0x521] = 0;
  param_1[0x522] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1405ba932(param_1,1);
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xf7;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  local_40 = "RootStaticMesh";
  local_38 = 0xe;
  local_34 = 0;
  uVar9 = FUN_14001a6c0(&local_40,1);
  uVar12 = FUN_140c7aaec();
  local_50 = 0;
  local_58 = 0;
  plVar13 = (longlong *)FUN_14048696c(param_1,uVar9,uVar12,uVar12);
  if ((plVar13 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = plVar13;
    if (plVar13 == (longlong *)0x0) goto LAB_14081ad52;
  }
  else {
    FUN_1456cec3c(plVar13);
    param_1[0x39] = plVar13;
  }
  (**(code **)(*plVar13 + 0x588))(plVar13,2);
  *(undefined1 *)((longlong)plVar13 + 0xa01) = 1;
  *(byte *)((longlong)plVar13 + 0x2d4) = *(byte *)((longlong)plVar13 + 0x2d4) & 0xfe;
  lVar6 = DAT_14cbc54a8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar15 = 0;
  }
  else if (iVar2 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar15 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar15 = 1;
  }
  lVar7 = DAT_14cbc54a8;
  if (*(int *)(lVar6 + uVar15 * 4) == 1) {
    *(byte *)((longlong)plVar13 + 0x66c) = *(byte *)((longlong)plVar13 + 0x66c) | 2;
  }
  else {
    if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
      uVar15 = 0;
    }
    else {
      bVar8 = FUN_144a61b4f();
      uVar15 = (ulonglong)(bVar8 ^ 1);
    }
    if (*(int *)(lVar7 + uVar15 * 4) == 2) {
      *(byte *)((longlong)plVar13 + 0x66c) = *(byte *)((longlong)plVar13 + 0x66c) & 0xfd;
    }
  }
  plVar14 = plVar13;
  if (DAT_14c76142c == 1) {
    do {
      if ((*(byte *)(plVar14 + 0x3f) & 2) == 0) break;
      *(byte *)(plVar14 + 0x3f) = *(byte *)(plVar14 + 0x3f) & 0xfd;
      plVar1 = plVar14 + 0x24;
      plVar14 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
  }
  *(byte *)((longlong)plVar13 + 0x1f9) = *(byte *)((longlong)plVar13 + 0x1f9) | 4;
LAB_14081ad52:
  FUN_14081ae08(param_1,2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14081ae08 FUN_14081ae08 body=938 status=ok
// SIG undefined FUN_14081ae08(void)

void FUN_14081ae08(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x170) != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar5 = FUN_14487fd02(param_1);
  if (((iVar5 != 3) && ((*(byte *)(param_1 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x179);
    *(char *)(param_1 + 0x179) = (char)param_2;
    if ((((*(uint *)(param_1 + 8) & 0x10) == 0) &&
        (lVar6 = *(longlong *)(param_1 + 0x20), lVar6 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar6 + 8))) {
      uVar2 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          local_70 = &local_50;
          local_50 = (code *)&LAB_14355090c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_78 = &LAB_147b8e16d;
          local_80 = (code *)&LAB_140810a38;
          local_88 = L"Engine";
          local_90 = 0x800000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar6 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_70 = &local_50;
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_78 = &LAB_1468c5283;
          local_80 = FUN_142809da0;
          local_88 = L"Engine";
          local_90 = 0x400000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar8 = *(longlong *)(param_1 + 0x20);
        if (lVar8 != 0) {
          iVar5 = *(int *)(lVar6 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar5) ||
               (lVar7 = lVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
               lVar6 + 0x30)) {
              lVar7 = 0;
            }
          } while ((lVar7 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
          if ((lVar7 != 0) &&
             ((lVar6 = *(longlong *)(lVar7 + 0xc0), lVar6 != 0 &&
              ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)))) {
            lVar8 = 0;
            do {
              lVar7 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
              if (*(longlong *)(lVar7 + 0x360) == lVar6) {
                if (lVar7 != 0) {
                  if ((bVar1 != param_2) && (iVar5 = *(int *)(lVar7 + 0x2b8), (longlong)iVar5 != 0))
                  {
                    lVar8 = *(longlong *)(lVar7 + 0x2b0);
                    lVar9 = 0;
                    do {
                      plVar3 = *(longlong **)(lVar8 + lVar9);
                      if ((plVar3 != (longlong *)0x0) &&
                         (cVar4 = (**(code **)(*plVar3 + 0x440))(plVar3,param_1), cVar4 != '\0')) {
                        FUN_14081b1b4(*(undefined8 *)(lVar8 + lVar9),param_1,(uint)bVar1);
                      }
                      lVar9 = lVar9 + 0x10;
                    } while ((longlong)iVar5 * 0x10 != lVar9);
                  }
                  if ((int)param_2 < 2) {
                    FUN_14081b2ca(lVar6,param_1);
                    iVar5 = *(int *)(lVar7 + 0x2b8);
                    if ((longlong)iVar5 != 0) {
                      lVar6 = *(longlong *)(lVar7 + 0x2b0);
                      lVar8 = 0;
                      do {
                        plVar3 = *(longlong **)(lVar6 + lVar8);
                        if ((plVar3 != (longlong *)0x0) &&
                           (cVar4 = (**(code **)(*plVar3 + 0x440))(plVar3,param_1), cVar4 != '\0'))
                        {
                          FUN_14081b236(*(undefined8 *)(lVar6 + lVar8),param_1,0);
                        }
                        lVar8 = lVar8 + 0x10;
                      } while ((longlong)iVar5 * 0x10 != lVar8);
                    }
                  }
                }
                break;
              }
              lVar8 = lVar8 + 8;
            } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14081b1b4 FUN_14081b1b4 body=129 status=ok
// SIG undefined FUN_14081b1b4(void)

void FUN_14081b1b4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x830);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x308))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x840) == 0) {
    iVar2 = *(int *)(param_1 + 0x100);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + lVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x3b0))(plVar1,param_2);
          iVar2 = *(int *)(param_1 + 0x100);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
    return;
  }
  FUN_147bd66ce(*(longlong *)(param_1 + 0x840),param_2);
  return;
}



// FUNCTION 14081b236 FUN_14081b236 body=147 status=ok
// SIG undefined FUN_14081b236(void)

void FUN_14081b236(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_14c7615f0 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x830);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2f0))(plVar1,param_2,param_3);
    }
    if (*(longlong *)(param_1 + 0x840) != 0) {
      FUN_14359a7b0(*(longlong *)(param_1 + 0x840),param_2,param_3);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x100);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + lVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x3b0))(plVar1,param_2);
          iVar2 = *(int *)(param_1 + 0x100);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
  }
  return;
}



// FUNCTION 14081b2ca FUN_14081b2ca body=644 status=ok
// SIG undefined FUN_14081b2ca(void)

void FUN_14081b2ca(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_30;
      local_30 = (code *)&LAB_14355090c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147b8e16d;
      local_60 = (code *)&LAB_140810a38;
      local_68 = L"Engine";
      local_70 = 0x800000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar4 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar5 = *(longlong *)(param_2 + 0x20);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar4 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
           (lVar3 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar4 + 0x30)) {
          lVar3 = 0;
        }
      } while ((lVar3 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    }
    cVar2 = FUN_144a3a0f4(param_1);
    if ((cVar2 != '\0') &&
       (((param_1 != 0 && (DAT_14cb0d2b0 != 0)) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)
        ))) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
        if (*(longlong *)(lVar5 + 0x360) == param_1) {
          if ((lVar5 != 0) && (iVar1 = *(int *)(lVar5 + 0x2b8), (longlong)iVar1 != 0)) {
            lVar4 = *(longlong *)(lVar5 + 0x2b0);
            lVar5 = 0;
            do {
              lVar3 = *(longlong *)(lVar4 + lVar5);
              if (lVar3 != 0) {
                FUN_14081b550(lVar3,param_2);
              }
              lVar5 = lVar5 + 0x10;
            } while ((longlong)iVar1 * 0x10 != lVar5);
          }
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14081b550 FUN_14081b550 body=126 status=ok
// SIG undefined FUN_14081b550(void)

void FUN_14081b550(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x840) != 0) {
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x840) != 0) {
      return;
    }
    cVar2 = FUN_1449e2a3e(param_2);
    if ((cVar2 != '\0') && (*(char *)(param_2 + 0x179) == '\x04')) {
      return;
    }
  }
  FUN_140b95304(*(undefined8 *)(param_1 + 0x858),param_2,param_1,0);
  plVar1 = *(longlong **)(param_1 + 0x830);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014081b5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2d8))(plVar1,param_2);
  return;
}



// FUNCTION 14081b5ce FUN_14081b5ce body=353 status=ok
// SIG undefined FUN_14081b5ce(void)

void FUN_14081b5ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 == 0) goto LAB_14081b6c9;
  plVar5 = (longlong *)(param_1 + 0x48);
  lVar1 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0xf8);
  lVar6 = (longlong)*(int *)(lVar4 + 0x18) * 0x10;
  plVar2 = *(longlong **)(lVar1 + lVar6);
  plVar3 = *(longlong **)(lVar1 + 8 + lVar6);
  if (param_2 == 0) {
    if (plVar2 != (longlong *)0x0) goto LAB_14081b64b;
  }
  else if (plVar2 != (longlong *)0x0) {
    if ((plVar3 != (longlong *)0x0) &&
       ((*(byte *)(*(longlong *)(*(longlong *)(lVar4 + 8) + 0xe8) + 0xf8 +
                  (longlong)*(int *)(lVar4 + 0x18) * 0x310) & 1) == 0)) {
      FUN_146d47824(*(longlong *)(param_2 + 0x9c8) + 0xdb0,plVar2,plVar3);
      lVar4 = *plVar5;
    }
LAB_14081b64b:
    local_30 = lVar4;
    FUN_14081b998((longlong)(int)plVar2[1] * 0x10 + *(longlong *)(*plVar2 + 0x1b8),&local_30,
                  CONCAT71((int7)((ulonglong)*plVar2 >> 8),1));
    lVar4 = *plVar5;
  }
  if (plVar3 != (longlong *)0x0) {
    local_30 = lVar4;
    FUN_14081b998((longlong)(int)plVar3[1] * 0x10 + *(longlong *)(*plVar3 + 0x1b8),&local_30,
                  CONCAT71((int7)((ulonglong)*plVar3 >> 8),1));
    lVar4 = *plVar5;
  }
  if (*(longlong *)(lVar4 + 0x10) != 0) {
    FUN_1400d2a94(*(longlong *)(param_2 + 0x9c8) + 0x100);
    lVar4 = *plVar5;
  }
  FUN_14081b730(*(longlong *)(param_2 + 0x9c8) + 0x8f0,*(undefined4 *)(lVar4 + 0x18));
  *plVar5 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_14081b6c9:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14081b730 FUN_14081b730 body=615 status=ok
// SIG undefined FUN_14081b730(void)

void FUN_14081b730(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x129) = 1;
  plVar1 = (longlong *)(param_1 + 0x118);
  lVar9 = (longlong)(int)param_2;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + lVar9 * 8);
  if (lVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xf8);
    plVar3 = *(longlong **)(lVar5 + lVar9 * 0x10);
    if (plVar3 != (longlong *)0x0) {
      local_48 = lVar2;
      FUN_14081b998((longlong)(int)plVar3[1] * 0x10 + *(longlong *)(*plVar3 + 0x1b8),&local_48,1);
      lVar5 = *(longlong *)(param_1 + 0xf8);
    }
    plVar3 = *(longlong **)(lVar5 + 8 + lVar9 * 0x10);
    if (plVar3 != (longlong *)0x0) {
      local_48 = lVar2;
      FUN_14081b998((longlong)(int)plVar3[1] * 0x10 + *(longlong *)(*plVar3 + 0x1b8),&local_48,
                    CONCAT71((int7)((ulonglong)*plVar3 >> 8),1));
    }
    FUN_1400020a8(lVar2);
    *(undefined8 *)(*plVar1 + lVar9 * 8) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x100);
  uVar7 = ~param_2;
  iVar6 = iVar4 + uVar7;
  if (iVar6 != 0) {
    iVar8 = 1;
    if (iVar6 < 1) {
      iVar8 = iVar6;
    }
    memmove((void *)(lVar9 * 0x10 + *(longlong *)(param_1 + 0xf8)),
            (void *)((longlong)(iVar4 - iVar8) * 0x10 + *(longlong *)(param_1 + 0xf8)),
            (longlong)iVar8 << 4);
    iVar4 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar4 + -1;
  FUN_14081bb22(param_1 + 0xf8);
  iVar4 = *(int *)(param_1 + 0xf0);
  iVar6 = iVar4 + uVar7;
  if (iVar6 != 0) {
    iVar8 = 1;
    if (iVar6 < 1) {
      iVar8 = iVar6;
    }
    memmove((void *)(lVar9 * 0x310 + *(longlong *)(param_1 + 0xe8)),
            (void *)((longlong)(iVar4 - iVar8) * 0x310 + *(longlong *)(param_1 + 0xe8)),
            (longlong)iVar8 * 0x310);
    iVar4 = *(int *)(param_1 + 0xf0);
  }
  *(int *)(param_1 + 0xf0) = iVar4 + -1;
  FUN_14081ba84(param_1 + 0xe8);
  iVar4 = *(int *)(param_1 + 0x110);
  iVar6 = iVar4 + uVar7;
  if (iVar6 != 0) {
    iVar8 = 1;
    if (iVar6 < 1) {
      iVar8 = iVar6;
    }
    memmove((void *)(lVar9 * 0x58 + *(longlong *)(param_1 + 0x108)),
            (void *)((longlong)(iVar4 - iVar8) * 0x58 + *(longlong *)(param_1 + 0x108)),
            (longlong)iVar8 * 0x58);
    iVar4 = *(int *)(param_1 + 0x110);
  }
  *(int *)(param_1 + 0x110) = iVar4 + -1;
  FUN_14081be76(param_1 + 0x108);
  iVar4 = *(int *)(param_1 + 0x120);
  iVar6 = uVar7 + iVar4;
  if (iVar6 != 0) {
    iVar8 = 1;
    if (iVar6 < 1) {
      iVar8 = iVar6;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x118) + lVar9 * 8),
            (void *)(*(longlong *)(param_1 + 0x118) + (longlong)(iVar4 - iVar8) * 8),
            (longlong)iVar8 << 3);
    iVar4 = *(int *)(param_1 + 0x120);
  }
  *(int *)(param_1 + 0x120) = iVar4 + -1;
  FUN_14081bd0a(plVar1);
  if ((int)param_2 < *(int *)(param_1 + 0x120)) {
    *(uint *)(*(longlong *)(*plVar1 + lVar9 * 8) + 0x18) = param_2;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14081b998 FUN_14081b998 body=171 status=ok
// SIG undefined FUN_14081b998(void)

undefined8 FUN_14081b998(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_14081ba44(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 14081ba44 FUN_14081ba44 body=63 status=ok
// SIG undefined FUN_14081ba44(void)

void FUN_14081ba44(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14081bac4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14081ba84 FUN_14081ba84 body=64 status=ok
// SIG undefined FUN_14081ba84(void)

void FUN_14081ba84(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14081bb62(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x310,0x10);
  }
  return;
}



// FUNCTION 14081bac4 FUN_14081bac4 body=93 status=ok
// SIG undefined FUN_14081bac4(void)

ulonglong FUN_14081bac4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14081bb22 FUN_14081bb22 body=64 status=ok
// SIG undefined FUN_14081bb22(void)

void FUN_14081bb22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14081bc44(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14081bb62 FUN_14081bb62 body=226 status=ok
// SIG undefined FUN_14081bb62(void)

ulonglong FUN_14081bb62(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x310)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x310;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x2a) {
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
          uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
        }
      }
      uVar1 = uVar1 / 0x310;
    }
  }
  return uVar1;
}



// FUNCTION 14081bc44 FUN_14081bc44 body=198 status=ok
// SIG undefined FUN_14081bc44(void)

ulonglong FUN_14081bc44(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x800) {
            uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14081bd0a FUN_14081bd0a body=364 status=ok
// SIG undefined FUN_14081bd0a(void)

void FUN_14081bd0a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && ((uVar3 == 0 || (0x40 < (int)(iVar6 - uVar3))))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14081bdab;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14081bdab:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 14081be76 FUN_14081be76 body=371 status=ok
// SIG undefined FUN_14081be76(void)

ulonglong FUN_14081be76(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar7 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x58)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     ((uVar3 == 0 || (0x40 < (int)uVar5)))) {
    if (0 < (int)uVar3) {
      uVar6 = uVar6 * 0x58;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar7 = uVar6 + 0xf;
          if (uVar3 < 0x175) {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
          }
          else {
            if ((uVar7 & 0x7ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
              uVar8 = 0x32;
              if (0x32 < bVar2) {
                uVar8 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14081bf12;
                lVar1 = uVar8 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar6 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar6 = (ulonglong)DAT_14c841df8;
            }
            uVar6 = -uVar6 & ((uVar7 & 0x7ffffffff0) + uVar6) - 1;
          }
        }
        else {
          uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14081bf12:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar6;
      uVar7 = SUB168(auVar4 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
      uVar6 = uVar6 / 0x58;
    }
    if ((int)uVar6 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar6;
      uVar7 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar6,0x58,8);
    }
  }
  return uVar7;
}



// FUNCTION 14081bfea FUN_14081bfea body=306 status=ok
// SIG undefined FUN_14081bfea(void)

void FUN_14081bfea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  void *_Dst;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
  fVar10 = 0.0;
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar8 = *(uint *)(param_1 + 8), -1 < (int)uVar8)) &&
      ((int)uVar8 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0xc))) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
    fVar10 = (float)*(double *)(*plVar7 + 0x6d0);
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (0 < iVar6) {
    plVar7 = (longlong *)(param_1 + 0x10);
    uVar9 = 0;
    do {
      uVar8 = (uint)uVar9;
      cVar5 = FUN_14081c12a(fVar10,*(undefined8 *)(*plVar7 + uVar9 * 0x10));
      if (cVar5 == '\0') {
        lVar3 = *plVar7;
        plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)uVar8 * 0x10);
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
        iVar6 = *(int *)(param_1 + 0x18);
        if (~uVar8 + iVar6 != 0) {
          _Dst = (void *)(lVar3 + (longlong)(int)uVar8 * 0x10);
          memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar8 + iVar6) << 4);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 + -1;
        FUN_14081ddde(plVar7);
        uVar8 = uVar8 - 1;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar6 = *(int *)(param_1 + 0x18);
    } while ((int)(uVar8 + 1) < iVar6);
  }
  if (iVar6 != 0) {
    return;
  }
  FUN_140f21362(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14081c11c FUN_14081c11c body=14 status=ok
// SIG undefined FUN_14081c11c(void)

void FUN_14081c11c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14081c12a FUN_14081c12a body=3475 status=ok
// SIG undefined FUN_14081c12a(void)

bool FUN_14081c12a(float param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  float fVar27;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  char local_179;
  longlong local_178;
  uint *local_170;
  ulonglong local_168;
  char *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  undefined5 uStack_148;
  longlong local_140;
  char local_138;
  char local_130;
  char *local_128;
  code *local_120;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  undefined5 uStack_108;
  undefined3 uStack_103;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined5 uStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  fVar3 = *(float *)(param_2 + 4);
  fVar27 = (param_1 - fVar3) / *(float *)(param_2 + 0x30);
  if (1.0 <= fVar27) {
    fVar27 = 1.0;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  fVar27 = (float)FUN_14002c5a6(fVar27,param_2[0x34],*(undefined8 *)(param_2 + 0x38));
  iVar11 = *(int *)(param_2 + 0x18);
  if (iVar11 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
LAB_14081c558:
      bVar9 = false;
      goto LAB_14081c2a2;
    }
    uVar25 = *(uint *)(param_2 + 8);
    bVar9 = false;
    if (((int)uVar25 < 0) || (DAT_14c9647dc <= (int)uVar25)) goto LAB_14081c2a2;
    plVar13 = (longlong *)
              ((ulonglong)((uVar25 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8));
    if ((plVar13 == (longlong *)0x0) ||
       ((((int)plVar13[2] != *(int *)(param_2 + 0xc) || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)
         ) || (lVar8 = *plVar13, lVar8 == 0)))) goto LAB_14081c558;
    if (DAT_14cac9ca8 == 0) {
      local_1a0 = (code **)&local_118;
      local_118 = FUN_141030f22;
      local_190 = FUN_14081d0ea;
      local_198 = FUN_14081d0ea;
      local_1a8 = &LAB_1478c0a72;
      local_1b0 = &LAB_1417b2375;
      local_1b8 = L"Engine";
      local_1c0 = 0x1000000000;
      local_1c8 = 0x10000004;
      local_1d0 = 8;
      local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    pcVar1 = param_2 + 0x10;
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
      lVar14 = FUN_14081cebe();
      if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
        FUN_14081d1c8(lVar8,param_2 + 0x20,*param_2,pcVar1);
      }
    }
    else {
      cVar5 = *param_2;
      uStack_a8 = (undefined5)((ulonglong)*(undefined8 *)(param_2 + 0x2d) >> 0x18);
      local_b8 = *(undefined4 *)(param_2 + 0x20);
      uStack_b4 = *(undefined4 *)(param_2 + 0x24);
      fStack_b0 = *(float *)(param_2 + 0x28);
      fStack_ac = *(float *)(param_2 + 0x2c);
      lVar14 = *(longlong *)(param_2 + 0x38);
      uVar16 = CONCAT71((int7)((ulonglong)*(undefined8 *)(param_2 + 0x2d) >> 8),DAT_14c950c29);
      if ((lVar14 != 0 & DAT_14c950c29) == 1) {
        uVar16 = FUN_1456cec3c(lVar14);
        uVar16 = CONCAT71((int7)((ulonglong)uVar16 >> 8),DAT_14c950c29);
      }
      cVar6 = param_2[0x40];
      if ((lVar14 != 0 & (byte)uVar16) == 1) {
        uVar16 = FUN_1456cec3c(lVar14);
      }
      if (DAT_14cad00c8 == 0) {
        local_1a0 = (code **)&local_118;
        local_118 = FUN_144a7958c;
        local_190 = FUN_14081d0ea;
        local_198 = FUN_14081d0ea;
        local_1a8 = &LAB_1479b7a0c;
        local_1b0 = &LAB_1463b464e;
        local_1b8 = L"Engine";
        local_1c0 = 0;
        local_1c8 = 0x10000005;
        local_1d0 = 8;
        local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x110);
        uVar16 = FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      }
      bVar10 = DAT_14cad00c8 != 0 & DAT_14c950c29;
      local_168 = CONCAT71((int7)((ulonglong)uVar16 >> 8),bVar10);
      local_178 = DAT_14cad00c8;
      local_179 = cVar5;
      local_160 = pcVar1;
      if (bVar10 == 0) {
        if (DAT_14cad00c8 != 0) goto LAB_14081c390;
LAB_14081c645:
        local_168 = local_168 ^ 1;
        local_1a0 = &local_120;
        local_120 = FUN_144a7958c;
        local_190 = FUN_14081d0ea;
        local_198 = FUN_14081d0ea;
        local_1a8 = &LAB_1479b7a0c;
        local_1b0 = &LAB_1463b464e;
        local_1b8 = L"Engine";
        local_1c0 = 0;
        local_1c8 = 0x10000005;
        local_1d0 = 8;
        local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x110);
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar22 = 0;
LAB_14081c6f6:
        if (lVar22 == DAT_14cad00c8) {
          uStack_108 = uStack_a8;
          local_118 = (code *)CONCAT44(uStack_b4,local_b8);
          fStack_110 = fStack_b0;
          fStack_10c = fStack_ac;
          local_100 = lVar14;
          if ((lVar14 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar14);
          }
          uStack_f8 = CONCAT71(uStack_f8._1_7_,cVar6);
          local_f0 = CONCAT71(local_f0._1_7_,cVar5);
          pcStack_e8 = pcVar1;
          if ((local_178 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(local_178);
          }
          puVar23 = (uint *)(lVar8 + 0x250);
          iVar11 = *(int *)(lVar8 + 0x268);
          if (iVar11 == 0) {
            uVar26 = 1;
            iVar20 = 0;
            iVar12 = 0;
            uVar24 = 0;
          }
          else {
            puVar15 = *(uint **)(lVar8 + 0x260);
            if (*(uint **)(lVar8 + 0x260) == (uint *)0x0) {
              puVar15 = puVar23;
            }
            uVar25 = *puVar15;
            if (uVar25 == 0) {
              iVar12 = iVar11 + 0x1e;
              if (-1 < iVar11 + -1) {
                iVar12 = iVar11 + -1;
              }
              uVar24 = 0;
              uVar26 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar26 = uVar24;
              }
              iVar20 = 0;
              do {
                if (uVar26 == uVar24) goto LAB_14081c284;
                iVar20 = iVar20 + 0x20;
                uVar25 = puVar15[uVar24 + 1];
                uVar24 = uVar24 + 1;
              } while (uVar25 == 0);
            }
            else {
              iVar20 = 0;
              uVar24 = 0;
            }
            uVar26 = (ulonglong)(-uVar25 & uVar25);
            uVar2 = uVar26 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar12 = (iVar20 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if (iVar11 <= iVar12) {
              iVar12 = iVar11;
            }
          }
          if (iVar12 != iVar11) {
            uVar25 = 0xffffffff;
            local_170 = puVar23;
            do {
              lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x240) + (longlong)iVar12 * 0x10);
              if (lVar14 != 0) {
                lVar22 = FUN_14081cebe();
                puVar23 = local_170;
                if ((*(int *)(lVar22 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar22 + 0x38) * 8) == lVar22 + 0x30)) {
                  FUN_14081d1c8(lVar14,&local_118,local_179,local_160);
                  puVar23 = local_170;
                }
              }
              uVar25 = uVar25 & ~(uint)uVar26;
              puVar15 = *(uint **)(lVar8 + 0x260);
              if (*(uint **)(lVar8 + 0x260) == (uint *)0x0) {
                puVar15 = puVar23;
              }
              iVar7 = *(int *)(lVar8 + 0x268);
              iVar12 = (int)uVar24;
              lVar14 = (longlong)iVar12;
              uVar19 = puVar15[lVar14] & uVar25;
              if (uVar19 == 0) {
                iVar17 = iVar7 + 0x1e;
                if (-1 < iVar7 + -1) {
                  iVar17 = iVar7 + -1;
                }
                iVar17 = iVar17 >> 5;
                iVar20 = iVar20 + 0x20;
                iVar18 = iVar17;
                if (iVar17 < iVar12) {
                  iVar18 = iVar12;
                }
                if (iVar12 < iVar17) {
                  lVar22 = 0;
                  do {
                    uVar19 = puVar15[lVar22 + lVar14 + 1];
                    if (uVar19 != 0) {
                      uVar24 = (ulonglong)(iVar12 + (int)lVar22 + 1);
                      uVar25 = 0xffffffff;
                      goto LAB_14081cbbb;
                    }
                    iVar20 = iVar20 + 0x20;
                    lVar22 = lVar22 + 1;
                  } while (iVar18 - lVar14 != lVar22);
                  uVar25 = 0xffffffff;
                  iVar12 = iVar18;
                }
                uVar24 = (ulonglong)(iVar12 + 1);
                puVar23 = local_170;
                iVar12 = iVar7;
              }
              else {
LAB_14081cbbb:
                uVar26 = (ulonglong)(-uVar19 & uVar19);
                uVar2 = uVar26 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                iVar12 = (iVar20 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if (iVar7 <= iVar12) {
                  iVar12 = iVar7;
                }
              }
            } while (iVar12 != iVar11);
          }
          goto LAB_14081c284;
        }
      }
      else {
        FUN_1456cec3c(DAT_14cad00c8);
        if (DAT_14cad00c8 == 0) {
          local_1a0 = &local_120;
          local_120 = FUN_144a7958c;
          local_190 = FUN_14081d0ea;
          local_198 = FUN_14081d0ea;
          local_1a8 = &LAB_1479b7a0c;
          local_1b0 = &LAB_1463b464e;
          local_1b8 = L"Engine";
          local_1c0 = 0;
          local_1c8 = 0x10000005;
          local_1d0 = 8;
          local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x110);
          FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
          if (DAT_14cad00c8 == 0) goto LAB_14081c645;
        }
LAB_14081c390:
        if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(local_178 + 0x38)) {
          local_168 = 0;
          lVar22 = 0;
          if (*(longlong *)
               (*(longlong *)(local_178 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar22 = local_178;
          }
          goto LAB_14081c6f6;
        }
        local_168 = 0;
      }
      uStack_148 = uStack_a8;
      local_158 = local_b8;
      uStack_154 = uStack_b4;
      fStack_150 = fStack_b0;
      fStack_14c = fStack_ac;
      local_140 = lVar14;
      if ((lVar14 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar14);
      }
      local_138 = cVar6;
      local_130 = cVar5;
      local_128 = pcVar1;
      if ((local_178 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(local_178);
      }
      puVar23 = (uint *)(lVar8 + 0x250);
      iVar11 = *(int *)(lVar8 + 0x268);
      if (iVar11 == 0) {
        uVar26 = 1;
        uVar24 = 0;
        iVar12 = 0;
        iVar20 = 0;
      }
      else {
        puVar15 = *(uint **)(lVar8 + 0x260);
        if (*(uint **)(lVar8 + 0x260) == (uint *)0x0) {
          puVar15 = puVar23;
        }
        uVar25 = *puVar15;
        if (uVar25 == 0) {
          iVar12 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar12 = iVar11 + -1;
          }
          uVar24 = 0;
          uVar26 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar26 = uVar24;
          }
          iVar20 = 0;
          do {
            if (uVar26 == uVar24) goto LAB_14081c284;
            iVar20 = iVar20 + 0x20;
            uVar25 = puVar15[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar25 == 0);
        }
        else {
          uVar24 = 0;
          iVar20 = 0;
        }
        uVar26 = (ulonglong)(-uVar25 & uVar25);
        uVar2 = uVar26 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar12 = (iVar20 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar12) {
          iVar12 = iVar11;
        }
      }
      if (iVar12 != iVar11) {
        uVar25 = 0xffffffff;
        lVar14 = local_178;
        local_170 = puVar23;
        do {
          lVar22 = *(longlong *)(*(longlong *)(lVar8 + 0x240) + (longlong)iVar12 * 0x10);
          if (lVar22 != 0) {
            if ((lVar14 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar14);
              puVar23 = local_170;
              lVar14 = local_178;
            }
            if ((char)local_168 == '\0') {
              if (DAT_14cad00c8 == 0) {
                local_1a0 = &local_120;
                local_120 = FUN_144a7958c;
                local_190 = FUN_14081d0ea;
                local_198 = FUN_14081d0ea;
                local_1a8 = &LAB_1479b7a0c;
                local_1b0 = &LAB_1463b464e;
                local_1b8 = L"Engine";
                local_1c0 = 0;
                local_1c8 = 0x10000005;
                local_1d0 = 8;
                local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x110);
                FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                puVar23 = local_170;
                lVar14 = local_178;
                if (DAT_14cad00c8 == 0) goto LAB_14081c83c;
              }
              if (*(int *)(lVar14 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14081c83c;
              lVar21 = 0;
              if (*(longlong *)
                   (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                  DAT_14cad00c8 + 0x30) {
                lVar21 = lVar14;
              }
            }
            else {
LAB_14081c83c:
              lVar21 = 0;
            }
            if ((*(int *)(lVar21 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar21 + 0x38) * 8) == lVar21 + 0x30)) {
              lVar21 = FUN_14081cebe();
              puVar23 = local_170;
              lVar14 = local_178;
              if ((*(int *)(lVar21 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar21 + 0x38) * 8) == lVar21 + 0x30)) {
                FUN_14081d1c8(lVar22,&local_158,local_179,local_160);
                puVar23 = local_170;
                lVar14 = local_178;
              }
            }
          }
          uVar25 = uVar25 & ~(uint)uVar26;
          puVar15 = *(uint **)(lVar8 + 0x260);
          if (*(uint **)(lVar8 + 0x260) == (uint *)0x0) {
            puVar15 = puVar23;
          }
          iVar7 = *(int *)(lVar8 + 0x268);
          iVar12 = (int)uVar24;
          lVar22 = (longlong)iVar12;
          uVar19 = puVar15[lVar22] & uVar25;
          if (uVar19 == 0) {
            iVar17 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar17 = iVar7 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar18 = iVar17;
            if (iVar17 < iVar12) {
              iVar18 = iVar12;
            }
            puVar23 = local_170;
            if (iVar12 < iVar17) {
              lVar21 = 0;
              do {
                uVar19 = puVar15[lVar21 + lVar22 + 1];
                if (uVar19 != 0) {
                  uVar24 = (ulonglong)(iVar12 + (int)lVar21 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_14081c8e0;
                }
                iVar20 = iVar20 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar18 - lVar22 != lVar21);
              uVar25 = 0xffffffff;
              iVar12 = iVar18;
            }
            uVar24 = (ulonglong)(iVar12 + 1);
            lVar14 = local_178;
            iVar12 = iVar7;
          }
          else {
LAB_14081c8e0:
            uVar26 = (ulonglong)(-uVar19 & uVar19);
            uVar2 = uVar26 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar12 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar12) {
              iVar12 = iVar7;
            }
          }
        } while (iVar12 != iVar11);
      }
    }
LAB_14081c284:
    iVar11 = *(int *)(param_2 + 0x18);
    if (iVar11 != 0) goto LAB_14081c3b5;
    fVar27 = *(float *)(param_2 + 0x30) + 10.0;
  }
  else {
LAB_14081c3b5:
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar14 = 0;
    do {
      iVar12 = *(int *)(lVar8 + 0x24 + lVar14);
      if (((((iVar12 != 0) && (uVar25 = *(uint *)(lVar8 + 0x20 + lVar14), -1 < (int)uVar25)) &&
           ((int)uVar25 < DAT_14c9647dc)) &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == iVar12)))) &&
         (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (lVar22 = *plVar13, lVar22 != 0)))) {
        if (*param_2 == '\x01') {
          local_118 = (code *)((ulonglong)local_118 & 0xffffffffffffff00);
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          pcStack_e8 = (char *)0x0;
          local_100 = 0;
          uStack_f8 = 0;
          fStack_110 = 0.0;
          fStack_10c = 0.0;
          uStack_108 = 0;
          uStack_103 = 0;
          local_1d8 = &local_118;
          FUN_140042bb4(lVar22,lVar8 + 0x10 + lVar14,
                        (*(float *)(param_2 + 0x48) - *(float *)(lVar8 + lVar14)) * fVar27 +
                        *(float *)(lVar8 + lVar14),0);
        }
        else {
          fStack_10c = *(float *)(lVar8 + 0xc + lVar14);
          fStack_110 = *(float *)(lVar8 + 8 + lVar14);
          fVar4 = *(float *)(lVar8 + 4 + lVar14);
          fStack_10c = (*(float *)(param_2 + 0x54) - fStack_10c) * fVar27 + fStack_10c;
          fStack_110 = (*(float *)(param_2 + 0x50) - fStack_110) * fVar27 + fStack_110;
          local_118 = (code *)CONCAT44((*(float *)(param_2 + 0x4c) - fVar4) * fVar27 + fVar4,
                                       (*(float *)(param_2 + 0x48) - *(float *)(lVar8 + lVar14)) *
                                       fVar27 + *(float *)(lVar8 + lVar14));
          FUN_14016d7a8(lVar22,lVar8 + 0x10 + lVar14,&local_118);
        }
      }
      lVar14 = lVar14 + 0x28;
    } while ((longlong)iVar11 * 0x28 != lVar14);
    fVar27 = *(float *)(param_2 + 0x30);
  }
  bVar9 = param_1 - fVar3 < fVar27;
LAB_14081c2a2:
  if ((local_a0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 14081cebe FUN_14081cebe body=228 status=ok
// SIG undefined FUN_14081cebe(void)

longlong FUN_14081cebe(void)

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
  if (DAT_14cad1938 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1479e696c;
    local_40 = &LAB_1463b90cc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/Engine",L"MeshComponent",&DAT_14cad1938,FUN_1463b90aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1938;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14081cfa3 FUN_14081cfa3 body=326 status=ok
// SIG undefined FUN_14081cfa3(void)

void FUN_14081cfa3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  code *param_13,code *param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c963f04 == '\0') {
    uVar1 = FUN_140011aa6();
    uVar1 = FUN_140011c0e(uVar1,0x250,8);
  }
  else {
    uVar1 = FUN_14001cc68(0x250,8);
  }
  *param_3 = uVar1;
  FUN_1446f470e(local_50,param_2,1);
  local_60 = param_12;
  local_68 = param_11;
  local_70 = param_10;
  local_80 = param_9;
  local_88 = param_8;
  local_90 = param_7;
  local_98 = CONCAT44(local_98._4_4_,param_6);
  local_78 = 199;
  FUN_14574b4b2(uVar1);
  *param_3 = uVar1;
  uVar2 = (*param_14)();
  uVar1 = *param_3;
  uVar3 = (*param_13)();
  local_98 = param_2;
  FUN_14574b446(uVar3,uVar1,uVar2,param_1);
  (*param_4)();
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14081d0ea FUN_14081d0ea body=221 status=ok
// SIG undefined FUN_14081d0ea(void)

longlong FUN_14081d0ea(void)

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
  if (DAT_14c927740 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146856450;
    local_40 = FUN_1427b121c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000021;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c927740;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14081d1c8 FUN_14081d1c8 body=3092 status=ok
// SIG undefined FUN_14081d1c8(void)

void FUN_14081d1c8(longlong *param_1,ulonglong *param_2,byte param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  byte local_f1;
  longlong *local_f0;
  int local_e4;
  ulonglong *local_e0;
  code *local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  code *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f1 = param_3;
  local_e0 = param_2;
  local_d0 = param_4;
  if (param_2[1] == 0) {
    local_d8 = (code *)0x0;
    iVar9 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x620))(param_1,&local_98);
    local_d8 = local_98;
    iVar9 = (int)uStack_90;
  }
  iVar8 = (**(code **)(*param_1 + 0x7b0))(param_1);
  local_f0 = param_1;
  if (0 < iVar8) {
    local_c0 = (longlong)iVar9;
    local_c8 = (ulonglong)((uint)(local_f1 ^ 1) * 0x50);
    uVar19 = 0;
    do {
      plVar11 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,uVar19 & 0xffffffff);
      if ((plVar11 != (longlong *)0x0) &&
         ((local_e0[1] == 0 ||
          (((longlong)uVar19 < local_c0 && (*(ulonglong *)(local_d8 + uVar19 * 8) == local_e0[1]))))
         )) {
        local_98 = (code *)0x0;
        uStack_90 = 0;
        lVar12 = (**(code **)(*plVar11 + 0x2d0))(plVar11,&local_98);
        puVar15 = (uint *)(lVar12 + local_c8 + 0x10);
        plVar13 = (longlong *)(lVar12 + local_c8);
        iVar9 = *(int *)(lVar12 + local_c8 + 0x28);
        param_1 = local_f0;
        if (iVar9 == 0) {
          uVar24 = 1;
          iVar26 = 0;
          uVar23 = 0;
          iVar8 = 0;
        }
        else {
          puVar20 = (uint *)plVar13[4];
          if ((uint *)plVar13[4] == (uint *)0x0) {
            puVar20 = puVar15;
          }
          uVar18 = *puVar20;
          if (uVar18 == 0) {
            iVar8 = iVar9 + 0x1e;
            if (-1 < iVar9 + -1) {
              iVar8 = iVar9 + -1;
            }
            uVar23 = 0;
            uVar24 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar24 = uVar23;
            }
            iVar26 = 0;
            do {
              if (uVar24 == uVar23) goto LAB_14081d471;
              iVar26 = iVar26 + 0x20;
              uVar18 = puVar20[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar18 == 0);
          }
          else {
            iVar26 = 0;
            uVar23 = 0;
          }
          uVar24 = (ulonglong)(-uVar18 & uVar18);
          uVar1 = uVar24 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar8 = (iVar26 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar8) {
            iVar8 = iVar9;
          }
        }
        if (iVar8 < iVar9) {
          uVar1 = *local_e0;
          iVar16 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar16 = iVar9 + -1;
          }
          uVar18 = 0xffffffff;
          while (*(ulonglong *)(*plVar13 + (longlong)iVar8 * 0x18) != uVar1) {
            uVar18 = uVar18 & ~(uint)uVar24;
            puVar20 = (uint *)plVar13[4];
            if ((uint *)plVar13[4] == (uint *)0x0) {
              puVar20 = puVar15;
            }
            iVar8 = (int)uVar23;
            lVar12 = (longlong)iVar8;
            uVar25 = puVar20[lVar12] & uVar18;
            if (uVar25 == 0) {
              iVar22 = iVar16 >> 5;
              if (iVar16 >> 5 < iVar8) {
                iVar22 = iVar8;
              }
              lVar21 = 0;
              do {
                if (iVar22 - lVar12 == lVar21) goto LAB_14081d471;
                iVar26 = iVar26 + 0x20;
                uVar25 = puVar20[lVar12 + lVar21 + 1];
                lVar21 = lVar21 + 1;
              } while (uVar25 == 0);
              uVar23 = (ulonglong)(uint)(iVar8 + (int)lVar21);
              uVar18 = 0xffffffff;
            }
            uVar24 = (ulonglong)(-uVar25 & uVar25);
            uVar2 = uVar24 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar8 = (iVar26 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar9 <= iVar8) goto LAB_14081d471;
          }
          lVar12 = *plVar13 + (longlong)iVar8 * 0x18;
          uVar3 = *(undefined1 *)(lVar12 + 8);
          local_9a = *(undefined1 *)(lVar12 + 0xb);
          local_9c = *(undefined2 *)(lVar12 + 9);
          uVar4 = *(undefined4 *)(lVar12 + 0xc);
          if (DAT_14caec470 == 0) {
            local_98 = FUN_1417df956;
            local_100 = FUN_14081d0ea;
            local_108 = &LAB_1463eaa20;
            local_118 = &LAB_147bbd9ea;
            local_120 = FUN_1401cf6d7;
            local_128 = L"Engine";
            local_130 = 0;
            local_138 = 0x10000000;
            local_140 = 8;
            local_148 = 0x330;
            local_110 = &local_98;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470);
          }
          if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
             (plVar13 = plVar11,
             *(longlong *)
              (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) !=
             DAT_14caec470 + 0x30)) {
            local_98 = (code *)plVar11[3];
            FUN_1400021e4(&local_98);
            iVar9 = (int)local_a8;
            iVar26 = ((int)local_a8 == 0) + 8;
            local_98 = local_b0;
            local_b0 = (code *)0x0;
            iVar8 = local_a8._4_4_;
            uStack_90 = local_a8;
            local_a8 = 0;
            iVar16 = iVar26 + iVar9;
            if (iVar16 < iVar9) goto LAB_14081dda7;
            if (iVar16 < 0) goto LAB_14081ddae;
            if (iVar8 < iVar16) {
              FUN_1446f8c06(&local_98);
            }
            FUN_1400020e8(&local_98,L"_Dynamic",8);
            iVar9 = (int)uStack_90 + -1;
            if ((int)uStack_90 == 0) {
              iVar9 = 0;
            }
            FUN_1446f82e2(&local_b8,iVar9,local_98);
            uVar6 = local_b8;
            if (local_98 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (local_b0 != (code *)0x0) {
              FUN_1400020a8();
            }
            plVar5 = local_f0;
            plVar13 = (longlong *)FUN_14090ceee(plVar11,local_f0[0x15],uVar6);
            FUN_1417bdf10(plVar5,plVar11,plVar13);
          }
          puVar14 = (undefined4 *)FUN_140a89d9e(local_d0);
          *(ulonglong *)(puVar14 + 4) = uVar1;
          *(undefined1 *)(puVar14 + 6) = uVar3;
          *(undefined2 *)((longlong)puVar14 + 0x19) = local_9c;
          *(undefined1 *)((longlong)puVar14 + 0x1b) = local_9a;
          puVar14[7] = uVar4;
          if (plVar13 == (longlong *)0x0) {
            puVar14[8] = 0;
            iVar9 = 0;
          }
          else {
            uVar18 = *(uint *)((longlong)plVar13 + 0xc);
            puVar14[8] = uVar18;
            if ((int)uVar18 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar9 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar9 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar27 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar9;
              if (bVar27) {
                local_e4 = iVar8;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
                iVar8 = local_e4;
              }
              LOCK();
              iVar9 = *(int *)(lVar12 + 0x10);
              bVar27 = iVar9 == 0;
              if (bVar27) {
                *(int *)(lVar12 + 0x10) = iVar8;
                iVar9 = 0;
              }
              UNLOCK();
              if (bVar27) {
                iVar9 = iVar8;
              }
            }
          }
          puVar14[9] = iVar9;
          uVar10 = (undefined4)(uVar1 >> 0x20);
          if (local_f1 == 0) {
            local_98 = (code *)(uVar1 & 0xffffffff);
            uStack_90 = CONCAT44(uVar4,uVar10);
            local_88 = uVar3;
            FUN_140fc5922(plVar13,&local_98);
            param_1 = local_f0;
          }
          else {
            local_b0 = (code *)(uVar1 & 0xffffffff);
            local_a8 = CONCAT44(uVar4,uVar10);
            local_78 = 0xff;
            local_70 = 0xffffffff;
            local_6c = 0;
            local_148 = 3;
            local_a0 = uVar3;
            cVar7 = (**(code **)(*plVar13 + 0x3c0))(plVar13,0);
            param_1 = local_f0;
            if (cVar7 != '\0') {
              *puVar14 = local_98._0_4_;
            }
          }
        }
      }
LAB_14081d471:
      uVar19 = uVar19 + 1;
      iVar9 = (**(code **)(*param_1 + 0x7b0))(param_1);
    } while ((longlong)uVar19 < (longlong)iVar9);
  }
  if (((char)local_e0[4] != '\0') &&
     (plVar11 = (longlong *)(**(code **)(*param_1 + 0x658))(param_1), plVar11 != (longlong *)0x0)) {
    bVar17 = local_f1 ^ 1;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    lVar12 = (**(code **)(*plVar11 + 0x2d0))(plVar11,&local_98);
    uVar19 = (ulonglong)((uint)bVar17 * 0x50);
    plVar13 = (longlong *)(lVar12 + uVar19);
    lVar12 = lVar12 + uVar19;
    puVar15 = (uint *)(lVar12 + 0x10);
    iVar9 = *(int *)(lVar12 + 0x28);
    if (iVar9 == 0) {
      uVar19 = 1;
      uVar24 = 0;
      iVar26 = 0;
      iVar8 = 0;
    }
    else {
      puVar20 = (uint *)plVar13[4];
      if ((uint *)plVar13[4] == (uint *)0x0) {
        puVar20 = puVar15;
      }
      uVar18 = *puVar20;
      if (uVar18 == 0) {
        iVar8 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar8 = iVar9 + -1;
        }
        uVar24 = 0;
        uVar19 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar19 = uVar24;
        }
        iVar26 = 0;
        do {
          if (uVar19 == uVar24) goto LAB_14081dc86;
          iVar26 = iVar26 + 0x20;
          uVar18 = puVar20[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar24 = 0;
        iVar26 = 0;
      }
      uVar19 = (ulonglong)(-uVar18 & uVar18);
      uVar23 = uVar19 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar26 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar9 <= iVar8) {
        iVar8 = iVar9;
      }
    }
    if (iVar8 < iVar9) {
      uVar23 = *local_e0;
      iVar16 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar16 = iVar9 + -1;
      }
      uVar18 = 0xffffffff;
      while (*(ulonglong *)(*plVar13 + (longlong)iVar8 * 0x18) != uVar23) {
        uVar18 = uVar18 & ~(uint)uVar19;
        puVar20 = (uint *)plVar13[4];
        if ((uint *)plVar13[4] == (uint *)0x0) {
          puVar20 = puVar15;
        }
        iVar8 = (int)uVar24;
        lVar12 = (longlong)iVar8;
        uVar25 = puVar20[lVar12] & uVar18;
        if (uVar25 == 0) {
          iVar22 = iVar16 >> 5;
          if (iVar16 >> 5 < iVar8) {
            iVar22 = iVar8;
          }
          lVar21 = 0;
          do {
            if (iVar22 - lVar12 == lVar21) goto LAB_14081dc86;
            iVar26 = iVar26 + 0x20;
            uVar25 = puVar20[lVar12 + lVar21 + 1];
            lVar21 = lVar21 + 1;
          } while (uVar25 == 0);
          uVar24 = (ulonglong)(uint)(iVar8 + (int)lVar21);
          uVar18 = 0xffffffff;
        }
        uVar19 = (ulonglong)(-uVar25 & uVar25);
        uVar1 = uVar19 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar8 = (iVar26 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar8) goto LAB_14081dc86;
      }
      lVar12 = *plVar13 + (longlong)iVar8 * 0x18;
      uVar3 = *(undefined1 *)(lVar12 + 8);
      local_9a = *(undefined1 *)(lVar12 + 0xb);
      local_9c = *(undefined2 *)(lVar12 + 9);
      uVar4 = *(undefined4 *)(lVar12 + 0xc);
      if (DAT_14caec470 == 0) {
        local_98 = FUN_1417df956;
        local_100 = FUN_14081d0ea;
        local_108 = &LAB_1463eaa20;
        local_118 = &LAB_147bbd9ea;
        local_120 = FUN_1401cf6d7;
        local_128 = L"Engine";
        local_130 = 0;
        local_138 = 0x10000000;
        local_140 = 8;
        local_148 = 0x330;
        local_110 = &local_98;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) !=
          DAT_14caec470 + 0x30)) {
        local_98 = (code *)plVar11[3];
        FUN_1400021e4(&local_98);
        iVar9 = (int)local_a8;
        iVar26 = ((int)local_a8 == 0) + 8;
        local_98 = local_b0;
        local_b0 = (code *)0x0;
        iVar8 = local_a8._4_4_;
        uStack_90 = local_a8;
        local_a8 = 0;
        iVar16 = iVar26 + iVar9;
        if (iVar16 < iVar9) {
LAB_14081dda7:
          local_a8 = 0;
          local_b0 = (code *)0x0;
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar26);
        }
        if (iVar16 < 0) {
LAB_14081ddae:
          local_a8 = 0;
          local_b0 = (code *)0x0;
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar16);
        }
        if (iVar8 < iVar16) {
          FUN_1446f8c06(&local_98);
        }
        FUN_1400020e8(&local_98,L"_Dynamic",8);
        iVar9 = (int)uStack_90 + -1;
        if ((int)uStack_90 == 0) {
          iVar9 = 0;
        }
        FUN_1446f82e2(&local_b8,iVar9,local_98,1);
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0 != (code *)0x0) {
          FUN_1400020a8();
        }
        plVar13 = local_f0;
        plVar11 = (longlong *)FUN_14090ceee(plVar11,local_f0[0x15],local_b8);
        (**(code **)(*plVar13 + 0x660))(plVar13,plVar11);
      }
      puVar14 = (undefined4 *)FUN_140a89d9e(local_d0);
      *(ulonglong *)(puVar14 + 4) = uVar23;
      *(undefined1 *)(puVar14 + 6) = uVar3;
      *(undefined2 *)((longlong)puVar14 + 0x19) = local_9c;
      *(undefined1 *)((longlong)puVar14 + 0x1b) = local_9a;
      puVar14[7] = uVar4;
      if (plVar11 == (longlong *)0x0) {
        puVar14[8] = 0;
        iVar9 = 0;
      }
      else {
        uVar18 = *(uint *)((longlong)plVar11 + 0xc);
        puVar14[8] = uVar18;
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar9 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar9 = *(int *)(lVar12 + 0x10);
          bVar27 = iVar9 == 0;
          if (bVar27) {
            *(int *)(lVar12 + 0x10) = iVar8;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar9 = iVar8;
          }
        }
      }
      puVar14[9] = iVar9;
      uVar10 = (undefined4)(uVar23 >> 0x20);
      if (local_f1 == 0) {
        local_98 = (code *)(uVar23 & 0xffffffff);
        uStack_90 = CONCAT44(uVar4,uVar10);
        local_88 = uVar3;
        FUN_140fc5922(plVar11,&local_98,puVar14,0);
      }
      else {
        local_b0 = (code *)(uVar23 & 0xffffffff);
        local_a8 = CONCAT44(uVar4,uVar10);
        local_78 = 0xff;
        local_70 = 0xffffffff;
        local_6c = 0;
        local_148 = 3;
        local_a0 = uVar3;
        cVar7 = (**(code **)(*plVar11 + 0x3c0))(plVar11,0);
        if (cVar7 != '\0') {
          *puVar14 = local_98._0_4_;
        }
      }
    }
  }
LAB_14081dc86:
  if (local_d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14081ddde FUN_14081ddde body=143 status=ok
// SIG undefined FUN_14081ddde(void)

void FUN_14081ddde(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14081de6e FUN_14081de6e body=861 status=ok
// SIG undefined FUN_14081de6e(void)

undefined8 * FUN_14081de6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ade0f40;
  param_1[0x2e] = &DAT_14a176f00;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2e] = &PTR_FUN_14a177080;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)((longlong)param_1 + 0x184) != 0) {
    FUN_14472eb64(param_1 + 0x2f,0);
  }
  param_1[0x35] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1a4)) {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80;
    FUN_1446efbd8(param_1 + 0x31,0);
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &DAT_14a176f00;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &PTR_FUN_14a177080;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)((longlong)param_1 + 0x104) != 0) {
    FUN_14472eb64(param_1 + 0x1f,0);
  }
  param_1[0x25] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x124)) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
    FUN_1446efbd8(param_1 + 0x21,0);
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &DAT_14a176f00;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &PTR_FUN_14a177080;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_14472eb64(param_1 + 0xf,0);
  }
  param_1[0x15] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xa4)) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
    FUN_1446efbd8(param_1 + 0x11,0);
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14081e1cc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14081e1cc FUN_14081e1cc body=45 status=ok
// SIG undefined FUN_14081e1cc(void)

void FUN_14081e1cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc62b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 14081e1fa FUN_14081e1fa body=5053 status=ok
// SIG undefined FUN_14081e1fa(void)

longlong * FUN_14081e1fa(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  size_t sVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  void *pvVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  void *pvVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong *plVar27;
  void *pvVar28;
  ulonglong uVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_5b8 [32];
  wchar_t *local_598;
  ulonglong *local_588;
  uint local_57c;
  longlong local_578;
  ulonglong local_570;
  longlong local_568;
  longlong local_560;
  longlong local_558;
  longlong *local_550;
  ulonglong local_548;
  undefined8 *local_540;
  undefined8 local_538;
  longlong local_530;
  undefined8 *local_528;
  longlong local_520;
  int local_518;
  int local_514;
  undefined4 local_510;
  int local_50c;
  int local_508;
  undefined4 local_504;
  undefined2 local_500;
  undefined2 local_4fe;
  undefined2 local_4fc;
  undefined2 local_4fa;
  void *local_4f8;
  undefined8 uStack_4f0;
  void *local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  ulonglong uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  uint local_49c;
  undefined4 local_498;
  undefined8 local_494;
  undefined2 local_48c;
  short local_48a;
  undefined2 local_488;
  undefined4 local_486;
  undefined1 local_2a8 [520];
  longlong local_a0;
  ulonglong local_90;
  
  lVar17 = DAT_14ca97170;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar21 = 0;
  }
  else if (iVar4 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar21 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar21 = 1;
  }
  if (((*(int *)(lVar17 + uVar21 * 4) < 1) || (cVar9 = FUN_14743127f(), cVar9 == '\0')) ||
     ((int)(&DAT_14ca814b8)[(param_3 & 0xffff) * 0xf] < 3)) {
    plVar15 = (longlong *)0x0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x18);
    if ((ulonglong)uVar12 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      uVar26 = 0;
      do {
        lVar22 = (longlong)(int)uVar26 * 0x440;
        lVar16 = *(longlong *)(lVar17 + 0x428 + lVar22);
        if (lVar16 != 0) {
          lVar16 = (**(code **)(**(longlong **)(lVar16 + 0x10) + 8))();
          plVar15 = DAT_14cb016e8;
          lVar17 = *(longlong *)(param_1 + 0x10);
          if ((*(int *)(lVar16 + 0x24) != *(int *)(lVar17 + 0x430 + lVar22)) ||
             (*(int *)(lVar16 + 0x28) != *(int *)(lVar17 + lVar22 + 0x434))) {
            if (DAT_14cb016e8 == (longlong *)0x0) goto LAB_14081e3b3;
            DAT_14cb016e8 = (longlong *)0x0;
            (**(code **)(*plVar15 + 0x38))();
            plVar15 = DAT_14cb016e8;
            if (DAT_14cb016e8 == (longlong *)0x0) goto LAB_14081e3b3;
            DAT_14cb016e8 = (longlong *)0x0;
            (**(code **)(*plVar15 + 0x38))();
            break;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar12 != uVar26);
    }
    plVar15 = DAT_14cb016e8;
    if (DAT_14cb016e8 == (longlong *)0x0) {
LAB_14081e3b3:
      uVar26 = *(uint *)(DAT_14cb01470 + 4);
      local_548 = (ulonglong)uVar26;
      local_48a = (short)uVar12 * 2;
      local_494 = CONCAT44(uVar26,uVar26);
      local_49c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_498 = 0;
      local_48c = 1;
      uStack_4b0 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
      uStack_4a8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
      uStack_4a0 = DAT_14ca85098;
      local_488 = 0x101;
      local_486 = 0xff001a01;
      local_4b8 = (longlong *)&DAT_00020008;
      local_598 = L"SpecularProfileTexture";
      FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_4b8,&DAT_14cb016e8);
      local_538 = *(undefined8 *)(&DAT_14ca8c1f0 + (param_3 & 0xffff) * 8);
      lVar17 = FUN_14476842e(param_2,&DAT_14cb016e8,L"SpecularProfileTexture",0);
      uVar3 = *(undefined1 *)(lVar17 + 0x94);
      puVar1 = (ulonglong *)(param_2 + 0x70);
      puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar25 + 9;
      local_588 = puVar1;
      if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
        FUN_140023dd8(puVar1,0x50);
        puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar20 = puVar25 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar20;
      puVar25[1] = *(undefined8 *)(lVar17 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 0;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 1;
      *puVar25 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar25 + 6) = uVar3;
      *(undefined1 *)(puVar25 + 7) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
      puVar25[8] = lVar17;
      iVar4 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(param_2 + 0x198,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      if (uVar12 != 0) {
        local_550 = (longlong *)(param_2 + 0x98);
        uVar21 = local_548 & 0xffffffff;
        local_560 = param_2 + 0x188;
        local_558 = param_2 + 0x588;
        uVar26 = 0;
        local_578 = param_2 + 0x198;
        local_570 = (ulonglong)uVar12;
        local_568 = lVar17;
        local_528 = puVar25;
        do {
          lVar16 = (longlong)(int)uVar26 * 0x440;
          FUN_147bc57d6(&local_4b8,*(longlong *)(param_1 + 0x10) + lVar16);
          puVar1 = local_588;
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x428 + lVar16);
          puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar20 = puVar25 + 10;
          local_530 = lVar16;
          if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
            FUN_140023dd8(local_588,0x60);
            puVar25 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar20 = puVar25 + 10;
          }
          uVar29 = local_548;
          *(undefined8 **)(param_2 + 0x70) = puVar20;
          *puVar25 = &PTR_FUN_14aa6e290;
          puVar25[2] = 0;
          puVar25[3] = 0;
          puVar25[7] = 0;
          puVar25[8] = 0;
          puVar25[9] = 0;
          iVar4 = *(int *)(param_2 + 0xa0);
          *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
          local_540 = puVar25;
          if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
            FUN_1448cfae8(local_550,iVar4);
          }
          puVar20 = local_540;
          *(undefined8 **)(*local_550 + (longlong)iVar4 * 8) = local_540;
          local_520 = lVar17;
          if (lVar17 == 0) {
            *(undefined4 *)(local_540 + 6) = 0;
            uVar18 = 0;
          }
          else {
            lVar16 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 8))();
            *(uint *)(puVar20 + 6) =
                 *(int *)(lVar16 + 0x30) + (uint)((char)*(int *)(lVar16 + 0x30) == '\0') & 0xff;
            uVar18 = *(undefined8 *)(*(longlong *)(lVar17 + 0x10) + 0x60);
          }
          puVar20[2] = uVar18;
          puVar20[3] = DAT_14c9c0d80;
          puVar20[4] = *(undefined8 *)(local_568 + 0x84);
          puVar20[5] = *(undefined8 *)(local_568 + 0x84);
          puVar20[9] = local_528;
          *(uint *)((longlong)puVar20 + 0x34) = uVar26;
          local_4e8 = (void *)0x0;
          uStack_4e0 = 0;
          local_4f8 = (void *)0x0;
          uStack_4f0 = 0;
          local_57c = uVar26;
          FUN_143681090(&local_4e8);
          FUN_143681090(&local_4f8,*(undefined4 *)((longlong)puVar20 + 0x2c));
          uVar12 = (uint)uVar29;
          if (uVar12 != 0) {
            uVar26 = 0;
            do {
              fVar31 = ((float)uVar26 + 0.5) / (float)uVar21;
              FUN_147a3ecf0(&uStack_4b0,&local_4d8,fVar31);
              FUN_143681100(&local_500,&local_4d8);
              lVar17 = (longlong)(int)uVar26;
              *(undefined2 *)((longlong)local_4e8 + lVar17 * 8) = local_500;
              *(undefined2 *)((longlong)local_4e8 + lVar17 * 8 + 2) = local_4fe;
              *(undefined2 *)((longlong)local_4e8 + lVar17 * 8 + 4) = local_4fc;
              *(undefined2 *)((longlong)local_4e8 + lVar17 * 8 + 6) = local_4fa;
              FUN_147a3ecf0(local_2a8,&local_4d8,fVar31);
              FUN_143681100(&local_500,&local_4d8);
              *(undefined2 *)((longlong)local_4f8 + lVar17 * 8) = local_500;
              *(undefined2 *)((longlong)local_4f8 + lVar17 * 8 + 2) = local_4fe;
              *(undefined2 *)((longlong)local_4f8 + lVar17 * 8 + 4) = local_4fc;
              *(undefined2 *)((longlong)local_4f8 + lVar17 * 8 + 6) = local_4fa;
              uVar26 = uVar26 + 1;
            } while (uVar12 != uVar26);
          }
          puVar1 = local_588;
          uVar26 = 8;
          if (DAT_14ca84e48 < 8) {
            uVar26 = DAT_14ca84e48;
          }
          uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x4109);
          uVar11 = DAT_14ca84e48;
          if (uVar12 < DAT_14ca84e48) {
            uVar11 = uVar12;
          }
          local_4c8 = 0;
          local_4d8 = (void *)CONCAT44(uVar11 + (uVar11 == 0),uVar26 + (uVar26 == 0));
          uVar23 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
          uVar29 = uVar23 + 0x150;
          if (*(ulonglong *)(param_2 + 0x78) < uVar29) {
            FUN_140023dd8(local_588,0x160);
            uVar23 = *puVar1 + 0xf & 0xfffffffffffffff0;
            uVar29 = uVar23 + 0x150;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar29;
          FUN_1456bd266(uVar23,L"ViewColor",&local_4d8,1);
          lVar17 = local_520;
          iVar4 = *(int *)(param_2 + 400);
          *(uint *)(param_2 + 400) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x194) < iVar4 + 1U) {
            FUN_144737178(local_560,iVar4);
          }
          pvVar8 = local_4e8;
          puVar1 = local_588;
          *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar4 * 8) = uVar23;
          *(int *)(uVar23 + 0x7c) = *(int *)(param_2 + 400) + -1;
          sVar2 = (longlong)(int)uStack_4e0 * 8;
          pvVar28 = local_4e8;
          if ((longlong)(int)uStack_4e0 != 0) {
            pvVar28 = (void *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            pvVar19 = (void *)((longlong)pvVar28 + sVar2);
            if (*(void **)(param_2 + 0x78) < pvVar19) {
              FUN_140023dd8(local_588,(int)sVar2 + 0x10);
              pvVar28 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              pvVar19 = (void *)((longlong)pvVar28 + sVar2);
            }
            *local_588 = (ulonglong)pvVar19;
            memcpy(pvVar28,pvVar8,sVar2);
          }
          iVar4 = *(int *)(param_2 + 0x590);
          *(uint *)(param_2 + 0x590) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x594) < iVar4 + 1U) {
            FUN_144775ac8(local_558,iVar4);
          }
          puVar1 = local_588;
          lVar16 = *(longlong *)(param_2 + 0x588);
          lVar22 = (longlong)iVar4 * 0x120;
          *(undefined2 *)(lVar16 + lVar22) = 0;
          *(ulonglong *)(lVar16 + 8 + lVar22) = uVar23;
          *(void **)(lVar16 + 0x10 + lVar22) = pvVar28;
          *(size_t *)(lVar16 + 0x18 + lVar22) = sVar2;
          *(undefined8 *)(lVar16 + 0x20 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0x30 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0x60 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0x70 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xa0 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xb0 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xe0 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xf0 + lVar22) = 0;
          *(byte *)(uVar23 + 0x24) = *(byte *)(uVar23 + 0x24) | 0x80;
          puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar20 = puVar25 + 9;
          if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
            FUN_140023dd8(local_588,0x50);
            puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar20 = puVar25 + 9;
          }
          uVar29 = local_548;
          *(undefined8 **)(param_2 + 0x70) = puVar20;
          puVar25[1] = *(undefined8 *)(uVar23 + 8);
          puVar25[2] = 0;
          *(undefined1 *)(puVar25 + 3) = 3;
          *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
          *puVar25 = &PTR_FUN_14a1fb168;
          *(undefined1 *)(puVar25 + 5) = 10;
          *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
          puVar25[7] = 0;
          puVar25[8] = uVar23;
          iVar4 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
            FUN_1447568fc(local_578,iVar4);
          }
          puVar1 = local_588;
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar25;
          *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
          local_540[7] = puVar25;
          uVar12 = 8;
          if (DAT_14ca84e48 < 8) {
            uVar12 = DAT_14ca84e48;
          }
          uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x4109);
          uVar26 = DAT_14ca84e48;
          if ((uint)uVar29 < DAT_14ca84e48) {
            uVar26 = (uint)uVar29;
          }
          local_4c8 = 0;
          local_4d8 = (void *)CONCAT44(uVar26 + (uVar26 == 0),uVar12 + (uVar12 == 0));
          uVar23 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
          uVar29 = uVar23 + 0x150;
          if (*(ulonglong *)(param_2 + 0x78) < uVar29) {
            FUN_140023dd8(local_588,0x160);
            uVar23 = *puVar1 + 0xf & 0xfffffffffffffff0;
            uVar29 = uVar23 + 0x150;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar29;
          FUN_1456bd266(uVar23,L"LightColor",&local_4d8,1);
          iVar4 = *(int *)(param_2 + 400);
          *(uint *)(param_2 + 400) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x194) < iVar4 + 1U) {
            FUN_144737178(local_560,iVar4);
          }
          pvVar8 = local_4f8;
          puVar1 = local_588;
          *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar4 * 8) = uVar23;
          *(int *)(uVar23 + 0x7c) = *(int *)(param_2 + 400) + -1;
          sVar2 = (longlong)(int)uStack_4f0 * 8;
          pvVar28 = local_4f8;
          if ((longlong)(int)uStack_4f0 != 0) {
            pvVar28 = (void *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            pvVar19 = (void *)((longlong)pvVar28 + sVar2);
            if (*(void **)(param_2 + 0x78) < pvVar19) {
              FUN_140023dd8(local_588,(int)sVar2 + 0x10);
              pvVar28 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              pvVar19 = (void *)((longlong)pvVar28 + sVar2);
            }
            *local_588 = (ulonglong)pvVar19;
            memcpy(pvVar28,pvVar8,sVar2);
          }
          iVar4 = *(int *)(param_2 + 0x590);
          *(uint *)(param_2 + 0x590) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x594) < iVar4 + 1U) {
            FUN_144775ac8(local_558,iVar4);
          }
          puVar1 = local_588;
          lVar16 = *(longlong *)(param_2 + 0x588);
          lVar22 = (longlong)iVar4 * 0x120;
          *(undefined2 *)(lVar16 + lVar22) = 0;
          *(ulonglong *)(lVar16 + 8 + lVar22) = uVar23;
          *(void **)(lVar16 + 0x10 + lVar22) = pvVar28;
          *(size_t *)(lVar16 + 0x18 + lVar22) = sVar2;
          *(undefined8 *)(lVar16 + 0x20 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0x30 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0x60 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0x70 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xa0 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xb0 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xe0 + lVar22) = 0;
          *(undefined8 *)(lVar16 + 0xf0 + lVar22) = 0;
          *(byte *)(uVar23 + 0x24) = *(byte *)(uVar23 + 0x24) | 0x80;
          puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar20 = puVar25 + 9;
          if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
            FUN_140023dd8(local_588,0x50);
            puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar20 = puVar25 + 9;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar20;
          puVar25[1] = *(undefined8 *)(uVar23 + 8);
          puVar25[2] = 0;
          *(undefined1 *)(puVar25 + 3) = 3;
          *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
          *puVar25 = &PTR_FUN_14a1fb168;
          *(undefined1 *)(puVar25 + 5) = 10;
          *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
          puVar25[7] = 0;
          puVar25[8] = uVar23;
          iVar4 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
            FUN_1447568fc(local_578,iVar4);
          }
          puVar24 = local_540;
          puVar20 = local_540 + 2;
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar25;
          *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
          local_540[8] = puVar25;
          bVar30 = local_a0 == 0;
          FUN_145e9aefa();
          FUN_1448e935e(local_538,&local_4d8,&DAT_14cb014e0,bVar30);
          FUN_145e9aefa();
          iVar5 = *(int *)(puVar24 + 5);
          iVar6 = *(int *)((longlong)puVar24 + 0x2c);
          iVar4 = iVar6 + 7;
          local_508 = iVar6 + 0xe;
          if (-1 < iVar4) {
            local_508 = iVar4;
          }
          local_508 = local_508 >> 3;
          iVar4 = iVar5 + 7;
          local_50c = iVar5 + 0xe;
          if (-1 < iVar4) {
            local_50c = iVar4;
          }
          local_50c = local_50c >> 3;
          local_504 = 1;
          local_598 = (wchar_t *)&local_50c;
          FUN_147cdb6d3(param_2,&local_500,&local_4d8,puVar20);
          if (lVar17 == 0) {
            uVar29 = 0;
            uVar23 = 0;
          }
          else {
            lVar17 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 8))();
            uVar29 = *(ulonglong *)(lVar17 + 0x24);
            uVar23 = uVar29 & 0xffffffff00000000;
          }
          uVar7 = local_570;
          uVar26 = local_57c;
          *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x430 + local_530) =
               uVar29 & 0xffffffff | uVar23;
          if (local_4f8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_4e8 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_14599ed1e(&local_4b8);
          uVar26 = uVar26 + 1;
          uVar12 = (uint)uVar7;
        } while (uVar26 != uVar12);
        local_4d8 = (void *)0x0;
        uStack_4d0 = 0;
        if ((int)uVar12 < 1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar7);
        }
        uStack_4d0 = uVar7 & 0xffffffff;
        uVar21 = 0;
        FUN_14475e4ac(&local_4d8);
        memset(local_4d8,0,uVar7 * 4);
        puVar1 = local_588;
        do {
          *(undefined4 *)((longlong)local_4d8 + uVar21 * 4) =
               *(undefined4 *)
                (&DAT_149e1eeb0 +
                (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x10) + uVar21 * 0x440) == '\x01') * 4
                );
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar7);
        uVar26 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar26 = DAT_14ca84e48;
        }
        uStack_4b0 = CONCAT44(uStack_4b0._4_4_,0x10109);
        uVar11 = DAT_14ca84e48;
        if (uVar12 < DAT_14ca84e48) {
          uVar11 = uVar12;
        }
        uStack_4a8 = 0;
        local_4b8 = (longlong *)CONCAT44(uVar11 + (uVar11 == 0),uVar26 + (uVar26 == 0));
        uVar29 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar21 = uVar29 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar21) {
          FUN_140023dd8(local_588,0x160);
          uVar29 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar21 = uVar29 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar21;
        FUN_1456bd266(uVar29,L"SpecularProfileData",&local_4b8,1);
        iVar4 = *(int *)(param_2 + 400);
        uVar12 = iVar4 + 1;
        *(uint *)(param_2 + 400) = uVar12;
        if (*(uint *)(param_2 + 0x194) < uVar12) {
          FUN_144737178(local_560);
        }
        pvVar8 = local_4d8;
        puVar1 = local_588;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar4 * 8) = uVar29;
        *(int *)(uVar29 + 0x7c) = *(int *)(param_2 + 400) + -1;
        sVar2 = (longlong)(int)uStack_4d0 * 4;
        pvVar28 = local_4d8;
        if ((longlong)(int)uStack_4d0 != 0) {
          pvVar28 = (void *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          pvVar19 = (void *)((longlong)pvVar28 + sVar2);
          if (*(void **)(param_2 + 0x78) < pvVar19) {
            FUN_140023dd8(local_588,(int)sVar2 + 0x10);
            pvVar28 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            pvVar19 = (void *)((longlong)pvVar28 + sVar2);
          }
          *local_588 = (ulonglong)pvVar19;
          memcpy(pvVar28,pvVar8,sVar2);
        }
        iVar4 = *(int *)(param_2 + 0x590);
        uVar12 = iVar4 + 1;
        *(uint *)(param_2 + 0x590) = uVar12;
        if (*(uint *)(param_2 + 0x594) < uVar12) {
          FUN_144775ac8(local_558);
        }
        puVar1 = local_588;
        lVar17 = *(longlong *)(param_2 + 0x588);
        lVar16 = (longlong)iVar4 * 0x120;
        *(undefined2 *)(lVar17 + lVar16) = 0;
        *(ulonglong *)(lVar17 + 8 + lVar16) = uVar29;
        *(void **)(lVar17 + 0x10 + lVar16) = pvVar28;
        *(size_t *)(lVar17 + 0x18 + lVar16) = sVar2;
        *(undefined8 *)(lVar17 + 0x20 + lVar16) = 0;
        *(undefined8 *)(lVar17 + 0x30 + lVar16) = 0;
        *(undefined8 *)(lVar17 + 0x60 + lVar16) = 0;
        *(undefined8 *)(lVar17 + 0x70 + lVar16) = 0;
        *(undefined8 *)(lVar17 + 0xa0 + lVar16) = 0;
        *(undefined8 *)(lVar17 + 0xb0 + lVar16) = 0;
        *(undefined8 *)(lVar17 + 0xe0 + lVar16) = 0;
        *(undefined8 *)(lVar17 + 0xf0 + lVar16) = 0;
        *(byte *)(uVar29 + 0x24) = *(byte *)(uVar29 + 0x24) | 0x80;
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar20 = puVar25 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
          FUN_140023dd8(local_588,0x50);
          puVar25 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar20 = puVar25 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar20;
        *puVar25 = &PTR_FUN_14aa6e2b8;
        puVar25[5] = 0;
        puVar25[6] = 0;
        puVar25[7] = 0;
        iVar4 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
          FUN_1448cfae8(local_550,iVar4);
        }
        puVar1 = local_588;
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar25;
        *(undefined4 *)(puVar25 + 2) = 0x40;
        *(int *)(puVar25 + 4) = (int)local_570;
        puVar25[3] = *(undefined8 *)(local_568 + 0x84);
        cVar9 = *(char *)(uVar29 + 0x68);
        puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar20 = puVar24 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
          FUN_140023dd8(local_588,0x50);
          puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar20 = puVar24 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar20;
        puVar24[1] = *(undefined8 *)(uVar29 + 8);
        puVar24[2] = 0;
        *(undefined1 *)(puVar24 + 3) = 3;
        *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
        *puVar24 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar24 + 5) = cVar9 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
        puVar24[7] = 0;
        puVar24[8] = uVar29;
        iVar4 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
          FUN_1447568fc(local_578,iVar4);
        }
        lVar17 = local_568;
        puVar1 = local_588;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar24;
        *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar25[7] = puVar24;
        puVar25[5] = DAT_14c9c0d80;
        uVar3 = *(undefined1 *)(local_568 + 0x94);
        puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar20 = puVar24 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
          FUN_140023dd8(local_588,0x50);
          puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar20 = puVar24 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar20;
        puVar24[1] = *(undefined8 *)(lVar17 + 8);
        puVar24[2] = 0;
        *(undefined1 *)(puVar24 + 3) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar24 + 5) = 0;
        *puVar24 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar24 + 6) = uVar3;
        *(undefined1 *)(puVar24 + 7) = 0;
        *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
        puVar24[8] = lVar17;
        iVar4 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
          FUN_1447568fc(local_578,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar24;
        *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar25[6] = puVar24;
        FUN_145f0ccfa();
        FUN_1448e935e(local_538,&local_4b8,&DAT_14cb01608,0);
        FUN_145f0ccfa();
        iVar4 = *(int *)((longlong)puVar25 + 0x1c) + 7;
        local_514 = *(int *)((longlong)puVar25 + 0x1c) + 0xe;
        if (-1 < iVar4) {
          local_514 = iVar4;
        }
        local_514 = local_514 >> 3;
        iVar4 = *(int *)(puVar25 + 3) + 7;
        local_518 = *(int *)(puVar25 + 3) + 0xe;
        if (-1 < iVar4) {
          local_518 = iVar4;
        }
        local_518 = local_518 >> 3;
        local_598 = (wchar_t *)&local_518;
        local_510 = (undefined4)local_570;
        FUN_147cdb785(param_2,&local_4e8,&local_4b8,puVar25 + 2);
        lVar17 = local_568;
        if (local_4d8 != (void *)0x0) {
          FUN_1400020a8();
          lVar17 = local_568;
        }
      }
      local_4b8 = (longlong *)0x0;
      uStack_4b0 = 0;
      if (lVar17 != 0) {
        uStack_4b0 = 1;
        FUN_144904f42(&local_4b8,0);
        *local_4b8 = lVar17;
        *(undefined4 *)(local_4b8 + 1) = 0x70;
        *(undefined1 *)((longlong)local_4b8 + 0xc) = 1;
        if ((longlong)(int)uStack_4b0 != 0) {
          plVar27 = local_4b8 + (longlong)(int)uStack_4b0 * 2;
          plVar15 = local_4b8;
          do {
            bVar10 = 1;
            if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
               (bVar10 = *(byte *)((longlong)plVar15 + 0xc) & 3, DAT_14ca84e99 != '\0')) {
              bVar10 = 1;
            }
            lVar17 = *plVar15;
            if ((*(byte *)(lVar17 + 0x20) & 0xc) == 0) {
              lVar16 = plVar15[1];
              if ((*(byte *)(lVar17 + 0x20) & 0x10) != 0) {
                FUN_140069376(param_2);
              }
              iVar4 = *(int *)(param_2 + 0x5a0);
              *(uint *)(param_2 + 0x5a0) = iVar4 + 1U;
              if (*(uint *)(param_2 + 0x5a4) < iVar4 + 1U) {
                FUN_1400f155a((longlong *)(param_2 + 0x598),iVar4);
              }
              *(longlong *)(*(longlong *)(param_2 + 0x598) + (longlong)iVar4 * 8) = lVar17;
              *(int *)(lVar17 + 0x1c) = (int)lVar16;
              *(byte *)(lVar17 + 0x20) = bVar10 | *(byte *)(lVar17 + 0x20) & 0xe8 | 0x14;
              *(int *)(lVar17 + 0x58) = (int)lVar16;
            }
            plVar15 = plVar15 + 2;
          } while (plVar15 != plVar27);
        }
      }
      uVar21 = uStack_4b0 >> 0x20;
      uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
      plVar15 = DAT_14cb016e8;
      if ((int)uVar21 != 0) {
        FUN_1400f146c(&local_4b8,0);
        plVar15 = DAT_14cb016e8;
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar15;
}



// FUNCTION 14081f5b8 FUN_14081f5b8 body=210 status=ok
// SIG undefined FUN_14081f5b8(void)

void FUN_14081f5b8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar7);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = plVar4[2];
        cVar6 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (cVar6 == '\x01' && lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,local_58);
          FUN_14081f6d4(param_2,uVar2,plVar4,local_58);
        }
        else if (lVar5 != 0 && cVar6 == '\0') {
          FUN_1400d2a94(param_2,plVar4);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14081f6d4 FUN_14081f6d4 body=70 status=ok
// SIG undefined FUN_14081f6d4(void)

void FUN_14081f6d4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar1 = FUN_14081f7f6();
    if (lVar1 != 0) {
      FUN_14081f71a(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
      FUN_140479940();
      return;
    }
  }
  return;
}



// FUNCTION 14081f71a FUN_14081f71a body=220 status=ok
// SIG undefined FUN_14081f71a(void)

longlong FUN_14081f71a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_3 + 8);
  }
  if (lVar1 == 0 || lVar1 != lVar2) {
    if (lVar2 != 0 && lVar1 != 0) {
      lVar1 = FUN_14081fbd8(param_1,lVar1,lVar2);
      return lVar1;
    }
    if (lVar1 == 0) {
      if (lVar2 != 0) {
        FUN_1404799cc(0,param_2,lVar2);
        return lVar2;
      }
      lVar1 = FUN_140479aca(param_1 + 0xb0);
      FUN_140479c9a(lVar1 + 0x10,*(undefined4 *)(param_1 + 0x138),1);
      FUN_1404799cc();
    }
    FUN_1404799cc();
  }
  return lVar1;
}



// FUNCTION 14081f7f6 FUN_14081f7f6 body=993 status=ok
// SIG undefined FUN_14081f7f6(void)

longlong * FUN_14081f7f6(longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar17 = (longlong *)*param_4;
  if ((plVar17 == (longlong *)0x0) || (*(byte *)((longlong)plVar17 + 0xc) < 2)) {
LAB_14081f855:
    plVar9 = (longlong *)param_4[1];
    if (((plVar9 == (longlong *)0x0) || (*(byte *)((longlong)plVar9 + 0xc) < 2)) ||
       ((cVar1 = *(char *)(*(longlong *)(*plVar9 + 0x2c0) + 0xb + (longlong)(int)plVar9[1] * 0x10),
        cVar1 != '\x04' && (cVar1 != '\x01')))) {
      plVar17 = (longlong *)0x0;
      goto LAB_14081f9c4;
    }
    if (plVar17 != (longlong *)0x0) {
      lVar8 = *plVar17;
      lVar10 = (longlong)(int)plVar17[1];
      goto LAB_14081f8a1;
    }
LAB_14081f9f4:
    lVar8 = FUN_14081ffb2(param_1);
  }
  else {
    lVar8 = *plVar17;
    lVar10 = (longlong)(int)plVar17[1];
    cVar1 = *(char *)(*(longlong *)(lVar8 + 0x2c0) + 0xb + lVar10 * 0x10);
    if ((cVar1 != '\x01') && (cVar1 != '\x04')) goto LAB_14081f855;
LAB_14081f8a1:
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x1e8) + lVar10 * 8);
    if (lVar8 == 0) goto LAB_14081f9f4;
  }
  plVar17 = (longlong *)param_4[1];
  if ((plVar17 == (longlong *)0x0) ||
     (lVar10 = *(longlong *)(*(longlong *)(*plVar17 + 0x1e8) + (longlong)(int)plVar17[1] * 8),
     lVar10 == 0)) {
    lVar10 = FUN_14081ffb2(param_1);
  }
  iVar15 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar15 == 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      plVar9 = (longlong *)FUN_1457d03ea();
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x90);
      if (*(int *)((longlong)puVar3 + 0x14) == 0) {
        if ((longlong)*(int *)(param_1 + 0x98) < 1) {
          lVar12 = -1;
        }
        else {
          piVar13 = (int *)((longlong)puVar3 + 0x14);
          iVar15 = 0x7fffffff;
          uVar14 = 0xffffffff;
          uVar16 = 0;
          do {
            iVar2 = *piVar13;
            if (0 < iVar2 && iVar2 < iVar15) {
              uVar14 = uVar16 & 0xffffffff;
              iVar15 = iVar2;
            }
            uVar16 = uVar16 + 1;
            piVar13 = piVar13 + 8;
          } while ((longlong)*(int *)(param_1 + 0x98) != uVar16);
          lVar12 = (longlong)(int)uVar14;
        }
        local_68 = *puVar3;
        uStack_60 = puVar3[1];
        local_58 = puVar3[2];
        uStack_50 = puVar3[3];
        uVar4 = puVar3[lVar12 * 4];
        uVar5 = (puVar3 + lVar12 * 4)[1];
        uVar6 = (puVar3 + lVar12 * 4 + 2)[1];
        puVar3[2] = puVar3[lVar12 * 4 + 2];
        puVar3[3] = uVar6;
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        puVar3[lVar12 * 4 + 2] = local_58;
        (puVar3 + lVar12 * 4 + 2)[1] = uStack_50;
        puVar3[lVar12 * 4] = local_68;
        (puVar3 + lVar12 * 4)[1] = uStack_60;
      }
      plVar9 = *(longlong **)(param_1 + 0x90);
    }
    if ((longlong)*(int *)((longlong)plVar9 + 0x1c) == -1) {
      if ((int)plVar9[3] < (int)plVar9[2]) {
        plVar17 = (longlong *)plVar9[1];
        plVar9[1] = (longlong)(plVar17 + 10);
        *(undefined4 *)(plVar17 + 9) = 0xffffffff;
        *(byte *)((longlong)plVar17 + 0x4c) = *(byte *)((longlong)plVar17 + 0x4c) & 0xfe;
        *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + -1;
        *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
      }
      else {
        plVar17 = (longlong *)0x0;
      }
    }
    else {
      lVar12 = *plVar9;
      lVar11 = (longlong)*(int *)((longlong)plVar9 + 0x1c) * 0x50;
      plVar17 = (longlong *)(lVar12 + lVar11);
      *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)(lVar12 + 0x48 + lVar11);
      *(undefined4 *)(lVar12 + 0x48 + lVar11) = 0xffffffff;
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + -1;
    }
    *(undefined1 (*) [16])(plVar17 + 1) = (undefined1  [16])0x0;
    plVar17[3] = 0;
    *(undefined4 *)(plVar17 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)plVar17 + 0x24) = 0xffffffff;
    *(undefined4 *)(plVar17 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)plVar17 + 0x2c) = 0xffffffff;
    plVar17[6] = -1;
    plVar17[7] = 0;
    *(undefined4 *)(plVar17 + 8) = 0;
    *(undefined4 *)(plVar17 + 6) = param_2;
    *plVar17 = param_3;
    if (param_3 != 0) {
      *(longlong **)(param_3 + 0x10) = plVar17;
      bVar7 = (**(code **)(*(longlong *)*plVar17 + 0x38))();
      *(uint *)(plVar17 + 8) = *(uint *)(plVar17 + 8) & 0xfffffffe | (uint)bVar7;
    }
    *(byte *)((longlong)plVar17 + 0x4c) = *(byte *)((longlong)plVar17 + 0x4c) | 1;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  }
  else {
    plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x80) + -8 + (longlong)iVar15 * 8);
    *(int *)(param_1 + 0x88) = iVar15 + -1;
    *(undefined4 *)(plVar17 + 6) = param_2;
    *plVar17 = param_3;
    if (param_3 != 0) {
      *(longlong **)(param_3 + 0x10) = plVar17;
      bVar7 = (**(code **)(*(longlong *)*plVar17 + 0x38))();
      *(uint *)(plVar17 + 8) = *(uint *)(plVar17 + 8) & 0xfffffffe | (uint)bVar7;
    }
  }
  iVar15 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar15 + 1U) {
    FUN_14082058a((longlong *)(param_1 + 0x70),iVar15);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar15 * 8) = plVar17;
  *(int *)((longlong)plVar17 + 0x24) = iVar15;
  if (lVar8 != 0) {
    plVar17[2] = lVar8;
    iVar15 = *(int *)(lVar8 + 0x18);
    *(uint *)(lVar8 + 0x18) = iVar15 + 1U;
    if (*(uint *)(lVar8 + 0x1c) < iVar15 + 1U) {
      FUN_14082058a((longlong *)(lVar8 + 0x10),iVar15);
    }
    *(longlong **)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar15 * 8) = plVar17;
    *(int *)(plVar17 + 5) = iVar15;
  }
  if (lVar10 != 0) {
    plVar17[3] = lVar10;
    iVar15 = *(int *)(lVar10 + 0x18);
    *(uint *)(lVar10 + 0x18) = iVar15 + 1U;
    if (*(uint *)(lVar10 + 0x1c) < iVar15 + 1U) {
      FUN_14082058a((longlong *)(lVar10 + 0x10),iVar15);
    }
    *(longlong **)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar15 * 8) = plVar17;
    *(int *)((longlong)plVar17 + 0x2c) = iVar15;
  }
  iVar15 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = iVar15 + 1;
  *(int *)((longlong)plVar17 + 0x3c) = iVar15;
LAB_14081f9c4:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar17;
}



// FUNCTION 14081fbd8 FUN_14081fbd8 body=985 status=ok
// SIG undefined FUN_14081fbd8(void)

longlong FUN_14081fbd8(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == param_3) goto LAB_14081fd84;
  plVar17 = *(longlong **)(param_2 + 0x70);
  plVar8 = *(longlong **)(param_3 + 0x70);
  if (plVar17 == (longlong *)0x0 || plVar17 != plVar8) {
    if (plVar8 == (longlong *)0x0 || plVar17 == (longlong *)0x0) {
      if (plVar17 == (longlong *)0x0) {
        if (plVar8 != (longlong *)0x0) {
          *(longlong **)(param_2 + 0x70) = plVar8;
          iVar10 = (int)plVar8[1];
          *(uint *)(plVar8 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)plVar8 + 0xc) < iVar10 + 1U) {
            FUN_140731e0c(plVar8,iVar10);
          }
          *(longlong *)(*plVar8 + (longlong)iVar10 * 8) = param_2;
          *(int *)(param_2 + 0x78) = iVar10;
          *(int *)(plVar8 + 2) = (int)plVar8[2] + *(int *)(param_2 + 0x80);
          goto LAB_14081fd74;
        }
        iVar10 = *(int *)(param_1 + 0x108);
        if ((longlong)iVar10 == 0) {
          if (*(int *)(param_1 + 0x128) == 0) {
            plVar8 = (longlong *)FUN_1457d025e();
          }
          else {
            puVar3 = *(undefined8 **)(param_1 + 0x110);
            if (*(int *)((longlong)puVar3 + 0x14) == 0) {
              if ((longlong)*(int *)(param_1 + 0x118) < 1) {
                lVar12 = -1;
              }
              else {
                piVar9 = (int *)((longlong)puVar3 + 0x14);
                iVar10 = 0x7fffffff;
                uVar14 = 0xffffffff;
                uVar15 = 0;
                do {
                  iVar2 = *piVar9;
                  if (0 < iVar2 && iVar2 < iVar10) {
                    uVar14 = uVar15 & 0xffffffff;
                    iVar10 = iVar2;
                  }
                  uVar15 = uVar15 + 1;
                  piVar9 = piVar9 + 8;
                } while ((longlong)*(int *)(param_1 + 0x118) != uVar15);
                lVar12 = (longlong)(int)uVar14;
              }
              local_68 = *puVar3;
              uStack_60 = puVar3[1];
              local_58 = puVar3[2];
              uStack_50 = puVar3[3];
              uVar5 = puVar3[lVar12 * 4];
              uVar6 = (puVar3 + lVar12 * 4)[1];
              uVar7 = (puVar3 + lVar12 * 4 + 2)[1];
              puVar3[2] = puVar3[lVar12 * 4 + 2];
              puVar3[3] = uVar7;
              *puVar3 = uVar5;
              puVar3[1] = uVar6;
              puVar3[lVar12 * 4 + 2] = local_58;
              (puVar3 + lVar12 * 4 + 2)[1] = uStack_50;
              puVar3[lVar12 * 4] = local_68;
              (puVar3 + lVar12 * 4)[1] = uStack_60;
            }
            plVar8 = *(longlong **)(param_1 + 0x110);
          }
          piVar9 = (int *)(param_1 + 0x128);
          if ((longlong)*(int *)((longlong)plVar8 + 0x1c) == -1) {
            if ((int)plVar8[3] < (int)plVar8[2]) {
              plVar17 = (longlong *)plVar8[1];
              plVar8[1] = (longlong)(plVar17 + 4);
              *(undefined4 *)(plVar17 + 3) = 0xffffffff;
              *(byte *)((longlong)plVar17 + 0x1c) = *(byte *)((longlong)plVar17 + 0x1c) & 0xfe;
              *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + -1;
              *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
            }
            else {
              plVar17 = (longlong *)0x0;
            }
          }
          else {
            lVar12 = *plVar8;
            lVar11 = (longlong)*(int *)((longlong)plVar8 + 0x1c) * 0x20;
            plVar17 = (longlong *)(lVar12 + lVar11);
            *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)(lVar12 + 0x18 + lVar11);
            *(undefined4 *)(lVar12 + 0x18 + lVar11) = 0xffffffff;
            *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + -1;
          }
          *plVar17 = 0;
          plVar17[1] = 0;
          plVar17[2] = -0x100000000;
          *(byte *)((longlong)plVar17 + 0x1c) = *(byte *)((longlong)plVar17 + 0x1c) | 1;
          iVar10 = *piVar9;
        }
        else {
          piVar9 = (int *)(param_1 + 0x108);
          plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x100) + -8 + (longlong)iVar10 * 8);
        }
        *piVar9 = iVar10 + -1;
        iVar10 = *(int *)(param_1 + 0xf8);
        *(uint *)(param_1 + 0xf8) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0xfc) < iVar10 + 1U) {
          FUN_14574b690((longlong *)(param_1 + 0xf0),iVar10);
        }
        *(longlong **)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar10 * 8) = plVar17;
        *(int *)((longlong)plVar17 + 0x14) = iVar10;
        *(longlong **)(param_2 + 0x70) = plVar17;
        iVar10 = (int)plVar17[1];
        *(uint *)(plVar17 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar17 + 0xc) < iVar10 + 1U) {
          FUN_140731e0c(plVar17,iVar10);
        }
        *(longlong *)(*plVar17 + (longlong)iVar10 * 8) = param_2;
        *(int *)(param_2 + 0x78) = iVar10;
        *(int *)(plVar17 + 2) = (int)plVar17[2] + *(int *)(param_2 + 0x80);
      }
      *(longlong **)(param_3 + 0x70) = plVar17;
      iVar10 = (int)plVar17[1];
      *(uint *)(plVar17 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar17 + 0xc) < iVar10 + 1U) {
        FUN_140731e0c(plVar17,iVar10);
      }
      *(longlong *)(*plVar17 + (longlong)iVar10 * 8) = param_3;
      *(int *)(param_3 + 0x78) = iVar10;
      *(int *)(plVar17 + 2) = (int)plVar17[2] + *(int *)(param_3 + 0x80);
    }
    else if (plVar17 != plVar8) {
      plVar16 = plVar17;
      if ((int)plVar17[2] < (int)plVar8[2]) {
        plVar16 = plVar8;
        plVar8 = plVar17;
      }
      lVar12 = plVar8[1];
      if ((longlong)(int)lVar12 != 0) {
        lVar11 = *plVar8;
        iVar10 = (int)plVar16[1];
        lVar13 = 0;
        do {
          lVar4 = *(longlong *)(lVar11 + lVar13);
          *(longlong **)(lVar4 + 0x70) = plVar16;
          *(int *)(lVar4 + 0x78) = iVar10;
          iVar10 = iVar10 + 1;
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)lVar12 * 8 != lVar13);
        uVar1 = *(uint *)(plVar8 + 1);
        if ((longlong)(int)uVar1 != 0) {
          iVar10 = (int)plVar16[1];
          *(uint *)(plVar16 + 1) = uVar1 + iVar10;
          if ((uint)(*(int *)((longlong)plVar16 + 0xc) - iVar10) < uVar1) {
            FUN_140731e0c(plVar16,iVar10);
          }
          memmove((void *)((longlong)iVar10 * 8 + *plVar16),(void *)*plVar8,
                  (longlong)(int)uVar1 << 3);
          *(undefined4 *)(plVar8 + 1) = 0;
        }
      }
      *(int *)(plVar16 + 2) = (int)plVar16[2] + (int)plVar8[2];
      FUN_140d9d802(param_1 + 0xf0,plVar8);
    }
  }
LAB_14081fd74:
  if (*(int *)(param_2 + 0x80) < *(int *)(param_3 + 0x80)) {
    param_2 = param_3;
  }
LAB_14081fd84:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14081ffb2 FUN_14081ffb2 body=1178 status=ok
// SIG undefined FUN_14081ffb2(void)

undefined8 * FUN_14081ffb2(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int *piVar25;
  double *pdVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    puVar16 = (undefined8 *)0x0;
    goto LAB_1408201bf;
  }
  iVar21 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar21 == 0) {
    if (*(int *)(param_1 + 0x68) == 0) {
      lVar22 = FUN_1457d01dc();
    }
    else {
      puVar16 = *(undefined8 **)(param_1 + 0x50);
      if (*(int *)((longlong)puVar16 + 0x14) == 0) {
        if ((longlong)*(int *)(param_1 + 0x58) < 1) {
          lVar22 = -1;
        }
        else {
          piVar25 = (int *)((longlong)puVar16 + 0x14);
          iVar21 = 0x7fffffff;
          uVar27 = 0xffffffff;
          uVar28 = 0;
          do {
            iVar23 = *piVar25;
            if (0 < iVar23 && iVar23 < iVar21) {
              uVar27 = uVar28 & 0xffffffff;
              iVar21 = iVar23;
            }
            uVar28 = uVar28 + 1;
            piVar25 = piVar25 + 8;
          } while ((longlong)*(int *)(param_1 + 0x58) != uVar28);
          lVar22 = (longlong)(int)uVar27;
        }
        uVar11 = *puVar16;
        uVar12 = puVar16[1];
        local_48 = puVar16[2];
        uStack_40 = puVar16[3];
        uVar13 = puVar16[lVar22 * 4];
        uVar14 = (puVar16 + lVar22 * 4)[1];
        uVar15 = (puVar16 + lVar22 * 4 + 2)[1];
        puVar16[2] = puVar16[lVar22 * 4 + 2];
        puVar16[3] = uVar15;
        *puVar16 = uVar13;
        puVar16[1] = uVar14;
        local_58._0_4_ = (undefined4)uVar11;
        local_58._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar12;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        puVar16[lVar22 * 4 + 2] = local_48;
        (puVar16 + lVar22 * 4 + 2)[1] = uStack_40;
        puVar16 = puVar16 + lVar22 * 4;
        *(undefined4 *)puVar16 = (undefined4)local_58;
        *(undefined4 *)((longlong)puVar16 + 4) = local_58._4_4_;
        *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_50._4_4_;
        local_58 = uVar11;
        uStack_50 = uVar12;
      }
      lVar22 = *(longlong *)(param_1 + 0x50);
    }
    puVar16 = (undefined8 *)FUN_140820536(lVar22);
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    puVar16[4] = 0xffffffffffffffff;
    *(undefined4 *)(puVar16 + 5) = 0xffffffff;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x34) = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    *(undefined4 *)(puVar16 + 9) = 0xffffffff;
    *puVar16 = param_2;
    *(undefined8 **)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8) = puVar16;
    *(byte *)((longlong)puVar16 + 0x54) = *(byte *)((longlong)puVar16 + 0x54) | 1;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  else {
    puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)iVar21 * 8);
    *(int *)(param_1 + 0x48) = iVar21 + -1;
    *puVar16 = param_2;
    *(undefined8 **)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8) = puVar16;
  }
  iVar21 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar21 + 1U) {
    FUN_140479b38((longlong *)(param_1 + 0x30),iVar21);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar21 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x24) = iVar21;
  uVar17 = 0;
  uVar20 = 0;
  if (1 < *(byte *)((longlong)param_2 + 0xc)) {
    cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
    uVar20 = (uint)(cVar2 == '\x01' || cVar2 == '\x04');
  }
  uVar3 = *(uint *)((longlong)puVar16 + 0x2c);
  *(uint *)((longlong)puVar16 + 0x2c) = uVar3 & 0xfffffffe | uVar20;
  if (1 < *(byte *)((longlong)param_2 + 0xc)) {
    uVar17 = (uint)(*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb +
                             (longlong)(int)param_2[1] * 0x10) == '\x01') * 2;
  }
  *(uint *)((longlong)puVar16 + 0x2c) = uVar3 & 0xfffffffc | uVar20 | uVar17;
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
LAB_140820175:
    uVar18 = 0;
  }
  else if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
    lVar22 = *param_2;
    lVar24 = (longlong)(int)param_2[1];
LAB_1408200ed:
    if (*(int *)(*(longlong *)(lVar22 + 0x2a8) + 0x30 + lVar24 * 0x40) == 2) {
      pdVar26 = (double *)(*(longlong *)(lVar22 + 0x2a8) + lVar24 * 0x40);
      lVar4 = *(longlong *)(lVar22 + 0x28);
      dVar6 = *(double *)(lVar4 + lVar24 * 0x18) - *pdVar26;
      uVar18 = 4;
      if (((((dVar6 == 0.0) && (!NAN(dVar6))) &&
           (dVar6 = *(double *)(lVar4 + 8 + lVar24 * 0x18) - pdVar26[1], dVar6 == 0.0)) &&
          ((!NAN(dVar6) &&
           (dVar6 = *(double *)(lVar4 + 0x10 + lVar24 * 0x18) - pdVar26[2], dVar6 == 0.0)))) &&
         (!NAN(dVar6))) {
        pfVar1 = (float *)(*(longlong *)(lVar22 + 0x48) + lVar24 * 0x10);
        fVar32 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar33 = *(float *)(pdVar26 + 4) * -1.0;
        fVar34 = *(float *)((longlong)pdVar26 + 0x24) * -1.0;
        fVar35 = *(float *)(pdVar26 + 5) * -1.0;
        fVar36 = *(float *)((longlong)pdVar26 + 0x2c) * 1.0;
        fVar29 = fVar9 * fVar34 * -1.0 +
                 fVar8 * fVar35 * 1.0 + fVar32 * fVar36 * 1.0 + fVar10 * fVar33;
        fVar30 = fVar9 * fVar33 * 1.0 +
                 fVar8 * fVar36 * 1.0 + fVar32 * fVar35 * -1.0 + fVar10 * fVar34;
        fVar31 = fVar9 * fVar36 * 1.0 +
                 fVar8 * fVar33 * -1.0 + fVar32 * fVar34 * 1.0 + fVar10 * fVar35;
        fVar32 = fVar9 * fVar35 * -1.0 +
                 fVar8 * fVar34 * -1.0 + fVar32 * fVar33 * -1.0 + fVar10 * fVar36;
        auVar7._4_4_ = -(uint)(1e-08 < ABS(fVar30 - DAT_14c846344));
        auVar7._0_4_ = -(uint)(1e-08 < ABS(fVar29 - DAT_14c84633c._4_4_));
        auVar7._8_4_ = -(uint)(1e-08 < ABS(fVar31 - DAT_14c846348));
        auVar7._12_4_ = -(uint)(1e-08 < ABS(fVar32 - DAT_14c84634c));
        iVar21 = movmskps((int)*(longlong *)(lVar22 + 0x48),auVar7);
        auVar5._4_4_ = -(uint)(1e-08 < ABS(fVar30 + DAT_14c846344));
        auVar5._0_4_ = -(uint)(1e-08 < ABS(fVar29 + DAT_14c84633c._4_4_));
        auVar5._8_4_ = -(uint)(1e-08 < ABS(fVar31 + DAT_14c846348));
        auVar5._12_4_ = -(uint)(1e-08 < ABS(fVar32 + DAT_14c84634c));
        iVar23 = movmskps((int)(lVar24 * 0x10),auVar5);
        if (iVar23 == 0 || iVar21 == 0) goto LAB_140820175;
      }
    }
    else {
      lVar4 = *(longlong *)(lVar22 + 0x278);
      fVar32 = *(float *)(lVar4 + lVar24 * 0xc);
      uVar18 = 4;
      if (((fVar32 == 0.0) && (!NAN(fVar32))) &&
         ((fVar32 = *(float *)(lVar4 + 4 + lVar24 * 0xc), fVar32 == 0.0 &&
          (((!NAN(fVar32) && (fVar32 = *(float *)(lVar4 + 8 + lVar24 * 0xc), fVar32 == 0.0)) &&
           (!NAN(fVar32))))))) {
        lVar22 = *(longlong *)(lVar22 + 0x290);
        fVar32 = *(float *)(lVar22 + lVar24 * 0xc);
        if (((fVar32 == 0.0) && (!NAN(fVar32))) &&
           ((fVar32 = *(float *)(lVar22 + 4 + lVar24 * 0xc), fVar32 == 0.0 &&
            (((!NAN(fVar32) && (fVar32 = *(float *)(lVar22 + lVar24 * 0xc + 8), fVar32 == 0.0)) &&
             (!NAN(fVar32))))))) goto LAB_140820175;
      }
    }
  }
  else {
    lVar22 = *param_2;
    lVar24 = (longlong)(int)param_2[1];
    cVar2 = *(char *)(*(longlong *)(lVar22 + 0x2c0) + 0xb + lVar24 * 0x10);
    if ((cVar2 == '\x01') || (cVar2 == '\x03')) goto LAB_140820175;
    uVar18 = 4;
    if (cVar2 == '\x02') goto LAB_1408200ed;
  }
  *(uint *)((longlong)puVar16 + 0x2c) = uVar3 & 0xfffffff8 | uVar20 | uVar17 | uVar18;
  if (*(char *)(*(longlong *)(*param_2 + 0x188) + (longlong)(int)param_2[1]) == '\0') {
    uVar19 = (uint)(*(char *)(*(longlong *)(*param_2 + 0x200) + (longlong)(int)param_2[1]) == '\0')
             << 3;
  }
  else {
    uVar19 = 8;
  }
  *(uint *)((longlong)puVar16 + 0x2c) = uVar3 & 0xfffffff0 | uVar20 | uVar17 | uVar18 | uVar19;
  FUN_14082044e(param_1,puVar16);
LAB_1408201bf:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14082044e FUN_14082044e body=231 status=ok
// SIG undefined FUN_14082044e(void)

void FUN_14082044e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  float *local_68;
  float *local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_2 + 0x2c) & 1) != 0) {
    local_58 = &local_4c;
    local_60 = &local_40;
    local_68 = &local_3c;
    FUN_14018540c(*param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18));
    local_60 = &local_48;
    local_68 = &local_44;
    FUN_14021cac2(*param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18));
    *(float *)((longlong)param_2 + 0x34) = local_3c * local_3c;
    *(float *)(param_2 + 7) = local_40 * local_40;
    *(undefined4 *)((longlong)param_2 + 0x3c) = local_4c;
    *(float *)(param_2 + 8) = local_44 * local_44;
    *(float *)((longlong)param_2 + 0x44) = local_48 * local_48;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


