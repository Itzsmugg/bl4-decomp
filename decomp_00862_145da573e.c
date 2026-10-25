// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145da573e FUN_145da573e body=226 status=ok
// SIG undefined FUN_145da573e(void)

longlong * FUN_145da573e(longlong *param_1)

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
  pcVar13 = FUN_1462df9b4;
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



// FUNCTION 145da5822 FUN_145da5822 body=136 status=ok
// SIG undefined FUN_145da5822(void)

code * FUN_145da5822(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCulledHeightfieldObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145da5934;
}



// FUNCTION 145da58aa FUN_145da58aa body=138 status=ok
// SIG undefined FUN_145da58aa(void)

code * FUN_145da58aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridCulledMeshSDFObjectIndicesArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f9ca2;
}



// FUNCTION 145da5934 FUN_145da5934 body=138 status=ok
// SIG undefined FUN_145da5934(void)

code * FUN_145da5934(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1300000005e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f9b8e;
}



// FUNCTION 145da59be FUN_145da59be body=755 status=ok
// SIG undefined FUN_145da59be(void)

undefined8 FUN_145da59be(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined *local_e0;
  wchar_t *local_d8;
  wchar_t *local_d0;
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  undefined2 *local_b0;
  int local_a8;
  wchar_t *local_a0;
  int local_98;
  wchar_t *local_90;
  int local_88;
  wchar_t *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_60,1);
  FUN_145da5dd4(param_1 + 0x2c,&local_70);
  local_c0 = local_70;
  if (local_68 == 0) {
    local_c0 = &DAT_149dfb77a;
  }
  lVar1 = param_1[0x13];
  local_d0 = L"NULL";
  if (lVar1 != 0) {
    local_90 = *(wchar_t **)(lVar1 + 0x18);
    FUN_1400021e4(&local_90,&local_80);
    local_d0 = local_80;
    if (local_78 == 0) {
      local_d0 = L"";
    }
  }
  lVar2 = param_1[6];
  local_d8 = L"NULL";
  if (lVar2 != 0) {
    local_a0 = *(wchar_t **)(lVar2 + 0x18);
    FUN_1400021e4(&local_a0,&local_90);
    local_d8 = local_90;
    if (local_88 == 0) {
      local_d8 = L"";
    }
  }
  local_b8 = param_2;
  if ((longlong *)param_1[0xb] == (longlong *)0x0) {
    puVar5 = &DAT_14a1798f8;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
    puVar5 = &DAT_14a1798f8;
    if (cVar3 != '\0') {
      puVar5 = &DAT_14a1798f0;
    }
    if (param_1[0xb] != 0) {
      FUN_145da5cb2(param_1[0xb],&local_a0);
      local_e8 = L"";
      if (local_98 != 0) {
        local_e8 = local_a0;
      }
      local_50 = param_1[3];
      FUN_1400021e4(&local_50,&local_b0);
      uVar6 = local_b8;
      puVar7 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar7 = local_b0;
      }
      puVar4 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar4 = local_60;
      }
      local_c8 = local_c0;
      local_e0 = puVar5;
      FUN_140002266(local_b8,
                    L"[UNetConnection] RemoteAddr: %s, Name: %s, Driver: %s, IsServer: %s, PC: %s, Owner: %s, UniqueId: %s"
                    ,puVar4,puVar7);
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_145da5b9c;
    }
  }
  local_a0 = (wchar_t *)param_1[3];
  FUN_1400021e4(&local_a0,&local_b0);
  puVar7 = &DAT_149dfb77a;
  if (local_a8 != 0) {
    puVar7 = local_b0;
  }
  puVar4 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar4 = local_60;
  }
  local_c8 = local_c0;
  local_e8 = L"NULL";
  local_e0 = puVar5;
  FUN_140002266(local_b8,
                L"[UNetConnection] RemoteAddr: %s, Name: %s, Driver: %s, IsServer: %s, PC: %s, Owner: %s, UniqueId: %s"
                ,puVar4,puVar7);
  uVar6 = local_b8;
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
    uVar6 = local_b8;
  }
LAB_145da5b9c:
  if ((lVar2 != 0) && (local_90 != (wchar_t *)0x0)) {
    FUN_1400020a8();
  }
  if ((lVar1 != 0) && (local_80 != (wchar_t *)0x0)) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 145da5cb2 FUN_145da5cb2 body=288 status=ok
// SIG undefined FUN_145da5cb2(void)

undefined8 FUN_145da5cb2(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  wchar_t *local_80;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pwVar2 = L"(PEER)";
  if ((*(byte *)(param_1 + 0x30a) & 1) == 0) {
    pwVar2 = L"";
  }
  local_60 = *(undefined2 **)(param_1 + 0x18);
  FUN_1400021e4(&local_60,&local_50);
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  FUN_1400021e4(param_1 + 0x278,&local_60);
  puVar4 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar4 = local_60;
  }
  FUN_1400021e4(param_1 + 0x200,&local_70);
  puVar1 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar1 = local_70;
  }
  local_88 = puVar3;
  local_80 = pwVar2;
  FUN_140002266(param_2,L"Name:%s Def:%s %s%s",puVar1,puVar4);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da5dd4 FUN_145da5dd4 body=595 status=ok
// SIG undefined FUN_145da5dd4(void)

longlong ** FUN_145da5dd4(longlong param_1,longlong **param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  uVar6 = (ulonglong)*(byte *)(param_1 + 0x18);
  bVar7 = (&DAT_149fc1b6e)[uVar6];
  if (bVar7 == 1) {
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      if (cVar5 != '\0') {
        uVar6 = (ulonglong)*(byte *)(param_1 + 0x18);
        bVar7 = (&DAT_149fc1b6e)[uVar6];
        goto LAB_145da5e33;
      }
    }
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) != 0) {
LAB_145da5e33:
    if ((bVar7 & 1) == 0) {
      uVar4 = (ulonglong)local_50 >> 0x20;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      if ((&DAT_149fc1b3a)[uVar6] == '\x01') {
        local_50 = (longlong *)CONCAT44((int)uVar4,*(undefined4 *)(param_1 + 8));
      }
      FUN_146fe04fa(&local_40,&local_50);
      if (&local_40 == param_2) {
        if (local_40 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        *param_2 = local_40;
        *(undefined4 *)(param_2 + 1) = local_38;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_34;
      }
    }
    else {
      FUN_1408e4d18(param_1,&local_40);
      (**(code **)(*local_40 + 0x38))(local_40,&local_60);
      puVar9 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar9 = local_60;
      }
      (**(code **)(*local_40 + 0x10))(local_40,local_78);
      FUN_1400021e4(local_78,&local_70);
      puVar8 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar8 = local_70;
      }
      FUN_140002266(&local_50,L"%s:%s",puVar8,puVar9);
      if (&local_50 == param_2) {
        if (local_50 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        *param_2 = local_50;
        local_50 = (longlong *)0x0;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_48;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_48._4_4_;
        local_48 = 0;
      }
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
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
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14020fad6(param_2,L"INVALID");
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 145da602a FUN_145da602a body=169 status=ok
// SIG undefined FUN_145da602a(void)

void FUN_145da602a(longlong param_1,uint param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x180))) {
    local_38 = (void *)0x0;
    local_30 = *(int *)(*(longlong *)(param_1 + 0x178) + 8 + (ulonglong)param_2 * 0x10);
    lVar1 = (longlong)local_30;
    _Src = *(void **)(*(longlong *)(param_1 + 0x178) + (ulonglong)param_2 * 0x10);
    if (lVar1 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar1 * 2);
    }
    FUN_145da60d4(param_1,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da60d4 FUN_145da60d4 body=165 status=ok
// SIG undefined FUN_145da60d4(void)

void FUN_145da60d4(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = (int)param_2[1];
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_145da617a(param_1,&local_40,0);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da617a FUN_145da617a body=75 status=ok
// SIG undefined FUN_145da617a(void)

void FUN_145da617a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x148) + 0x20))
            (*(longlong **)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x58),param_2);
  FUN_1459ca14e(param_1,param_3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145da61c6 FUN_145da61c6 body=595 status=ok
// SIG undefined FUN_145da61c6(void)

void FUN_145da61c6(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145da641a();
  lVar8 = param_1 + 0x1d0;
  cVar4 = FUN_144729dda(lVar8);
  if (cVar4 == '\0') {
    uVar6 = FUN_145da6514(DAT_14c951640);
    FUN_14485c47a(lVar8,uVar6);
    lVar7 = FUN_14479d2ce(lVar8);
    uVar2 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    FUN_1447f71cc(lVar7,0x40000000);
    uVar6 = FUN_145da641c(param_1);
    lVar8 = FUN_14479d2ce(lVar8);
    FUN_14485c47a(lVar8 + 0x28,uVar6);
  }
  if (((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x178) + 8))) goto LAB_145da6321;
  uVar6 = FUN_145da641c(param_1);
  lVar8 = FUN_145d34c03(uVar6);
  if (lVar8 == 0) goto LAB_145da6321;
  plVar10 = *(longlong **)(lVar8 + 0x10);
  if (plVar10 == (longlong *)0x0) {
LAB_145da6393:
    *(undefined8 *)(param_1 + 0x170) = 0;
    plVar9 = *(longlong **)(param_1 + 0x178);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar10 = (longlong *)0x0;
        bVar11 = true;
LAB_145da63da:
        (**(code **)(*plVar9 + 0x10))();
        *(longlong **)(param_1 + 0x178) = plVar10;
        if (!bVar11) goto LAB_145da62eb;
      }
      else {
        *(undefined8 *)(param_1 + 0x178) = 0;
      }
    }
  }
  else {
    iVar5 = (int)plVar10[1];
    do {
      if (iVar5 == 0) goto LAB_145da6393;
      LOCK();
      iVar3 = (int)plVar10[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar11);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(lVar8 + 8);
    if (*(longlong **)(param_1 + 0x178) != plVar10) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x178);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          bVar11 = false;
          goto LAB_145da63da;
        }
      }
      *(longlong **)(param_1 + 0x178) = plVar10;
    }
LAB_145da62eb:
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
  local_50 = (code *)&LAB_14584172a;
  local_48 = 0;
  FUN_145da65ac(lVar8 + 0x60,local_40,param_1);
LAB_145da6321:
  if (param_2 != 0) {
    local_50 = FUN_145c1929a;
    local_48 = 0;
    FUN_145da6426(param_2 + 0x570,local_40,param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145da641a FUN_145da641a body=1 status=ok
// SIG undefined FUN_145da641a(void)

void FUN_145da641a(void)

{
  return;
}



// FUNCTION 145da641c FUN_145da641c body=9 status=ok
// SIG undefined FUN_145da641c(void)

void FUN_145da641c(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x18);
  return;
}



// FUNCTION 145da6426 FUN_145da6426 body=237 status=ok
// SIG undefined FUN_145da6426(void)

undefined8
FUN_145da6426(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14ab18ff0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b96dbf0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_141332804(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da6514 FUN_145da6514 body=150 status=ok
// SIG undefined FUN_145da6514(void)

undefined8 FUN_145da6514(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d88c2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da65ac FUN_145da65ac body=237 status=ok
// SIG undefined FUN_145da65ac(void)

undefined8
FUN_145da65ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b96db80;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da66a6 FUN_145da66a6 body=153 status=ok
// SIG undefined FUN_145da66a6(void)

undefined8 * FUN_145da66a6(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a697580;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec040) {
    FUN_144b3d300(&DAT_14caec040);
    if (DAT_14caec040 == -1) {
      FUN_14154d070();
      atexit((_func_5014 *)&LAB_14356f508);
      _Init_thread_footer(&DAT_14caec040);
    }
  }
  return param_1;
}



// FUNCTION 145da674a FUN_145da674a body=153 status=ok
// SIG undefined FUN_145da674a(void)

undefined8 * FUN_145da674a(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a697990;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec058) {
    FUN_144b3d300(&DAT_14caec058);
    if (DAT_14caec058 == -1) {
      FUN_14154d116();
      atexit((_func_5014 *)&LAB_14356f51c);
      _Init_thread_footer(&DAT_14caec058);
    }
  }
  return param_1;
}



// FUNCTION 145da67ee FUN_145da67ee body=153 status=ok
// SIG undefined FUN_145da67ee(void)

undefined8 * FUN_145da67ee(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a697dc0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec070) {
    FUN_144b3d300(&DAT_14caec070);
    if (DAT_14caec070 == -1) {
      FUN_14154d1bc();
      atexit((_func_5014 *)&LAB_14356f530);
      _Init_thread_footer(&DAT_14caec070);
    }
  }
  return param_1;
}



// FUNCTION 145da6892 FUN_145da6892 body=153 status=ok
// SIG undefined FUN_145da6892(void)

undefined8 * FUN_145da6892(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a699d50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec148) {
    FUN_144b3d300(&DAT_14caec148);
    if (DAT_14caec148 == -1) {
      FUN_14154d262();
      atexit((_func_5014 *)&LAB_14356f5e4);
      _Init_thread_footer(&DAT_14caec148);
    }
  }
  return param_1;
}



// FUNCTION 145da6936 FUN_145da6936 body=153 status=ok
// SIG undefined FUN_145da6936(void)

undefined8 * FUN_145da6936(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a69a640;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec178) {
    FUN_144b3d300(&DAT_14caec178);
    if (DAT_14caec178 == -1) {
      FUN_14154d308();
      atexit((_func_5014 *)&LAB_14356f60c);
      _Init_thread_footer(&DAT_14caec178);
    }
  }
  return param_1;
}



// FUNCTION 145da69d0 FUN_145da69d0 body=88 status=ok
// SIG undefined FUN_145da69d0(void)

void FUN_145da69d0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_144a126be();
  if ((*(char *)(lVar1 + 0x152) == '\x01') || (*(char *)(lVar1 + 0x152) == '\x03')) {
    FUN_145da6a2a(local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145da6a2a FUN_145da6a2a body=239 status=ok
// SIG undefined FUN_145da6a2a(void)

undefined8 FUN_145da6a2a(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1ca5b0;
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
  *local_30 = &PTR_FUN_14aa2ace0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_145c573bc;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da6b1a FUN_145da6b1a body=40 status=ok
// SIG undefined FUN_145da6b1a(void)

undefined8 FUN_145da6b1a(undefined8 param_1,int param_2)

{
  FUN_145da6b42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da6b42 FUN_145da6b42 body=156 status=ok
// SIG undefined FUN_145da6b42(void)

void FUN_145da6b42(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aed70c0;
  param_1[5] = &PTR_FUN_14aed7400;
  plVar3 = (longlong *)param_1[0x17];
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145da6bde(param_1 + 0xb);
  FUN_145da6c13(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145da6bde FUN_145da6bde body=53 status=ok
// SIG undefined FUN_145da6bde(void)

void FUN_145da6bde(longlong *param_1)

{
  FUN_145da6c52();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145da6c13 FUN_145da6c13 body=63 status=ok
// SIG undefined FUN_145da6c13(void)

void FUN_145da6c13(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145da6c52 FUN_145da6c52 body=345 status=ok
// SIG undefined FUN_145da6c52(void)

void FUN_145da6c52(longlong *param_1)

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



// FUNCTION 145da6db8 FUN_145da6db8 body=188 status=ok
// SIG undefined FUN_145da6db8(void)

undefined8 * FUN_145da6db8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b3c39c0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x2000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x2000000000;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  FUN_145da6e74(param_1 + 0x3f);
  return param_1;
}



// FUNCTION 145da6e74 FUN_145da6e74 body=130 status=ok
// SIG undefined FUN_145da6e74(void)

void FUN_145da6e74(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}



// FUNCTION 145da6ef6 FUN_145da6ef6 body=619 status=ok
// SIG undefined FUN_145da6ef6(void)

void FUN_145da6ef6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  local_170 = local_150;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_170 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = &local_168;
  local_158 = local_40;
  local_168 = local_50;
  uStack_164 = uStack_4c;
  uStack_160 = uStack_48;
  uStack_15c = uStack_44;
  FUN_14154d3ae(param_1,local_28,local_30,local_38);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da7162 FUN_145da7162 body=170 status=ok
// SIG undefined FUN_145da7162(void)

void FUN_145da7162(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_4;
  if (DAT_14c9abbe0 == param_4) {
    local_28 = DAT_14c9abbf0;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_30 = &local_48;
  local_38 = FUN_143ce9808;
  local_48 = param_2;
  local_40 = param_3;
  FUN_1447683ea(&local_50,&local_28,0);
  FUN_1408d6bd2(uVar1,local_50,&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da720e FUN_145da720e body=382 status=ok
// SIG undefined FUN_145da720e(void)

longlong * FUN_145da720e(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14596c9e6(param_1 + 0x1b0,param_3);
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_145da738e(param_1,local_38,&local_48,param_4);
  lVar5 = *param_3;
  if ((char)param_4 != '\0') {
    thunk_FUN_1616686ea();
    cVar4 = (**(code **)(*(longlong *)*param_3 + 400))();
    lVar5 = *param_3;
    if ((cVar4 != '\0') && (*(char *)(lVar5 + 0x368) < '\0')) {
      plVar2 = *(longlong **)(lVar5 + 0x510);
      plVar3 = *(longlong **)(lVar5 + 0x518);
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x90))(plVar2);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x90))(plVar2);
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
      lVar5 = *param_3;
    }
  }
  *param_2 = lVar5;
  lVar5 = param_3[1];
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da738e FUN_145da738e body=1692 status=ok
// SIG undefined FUN_145da738e(void)

undefined8 *
FUN_145da738e(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(char *)(param_1 + 0x1a2) == '\x01') && (cVar5 = FUN_145787e4e(), cVar5 == '\0')) {
    uVar9 = FUN_14001cc68(0x18,0x10);
    FUN_1415641a4(uVar9);
    *param_2 = uVar9;
    local_88 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    local_88[1] = &DAT_100000001;
    *local_88 = &PTR_LAB_149eca0b0;
    local_88[2] = uVar9;
    param_2[1] = local_88;
    lVar3 = *param_3;
    if (local_88 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = *(int *)(local_88 + 1) + 1;
      UNLOCK();
    }
    local_90 = uVar9;
    FUN_140764358(lVar3,&local_90);
    plVar10 = *(longlong **)(DAT_14c968098 + 0x20);
    local_a0 = *param_3;
    local_98 = param_3[1];
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar10 + 0x30))(plVar10,&local_a0);
    goto LAB_145da7769;
  }
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  local_f9 = param_4;
  FUN_145861bfe(*param_3,&local_c8);
  if (local_c8 != 0) {
    local_b8 = *(undefined8 *)(local_c8 + 0x510);
    plVar10 = *(longlong **)(local_c8 + 0x518);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      plStack_b0 = plVar10;
    }
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  local_d8 = puVar7;
  local_d0 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_d0[1] = (longlong)&DAT_100000001;
  *local_d0 = (longlong)&PTR_FUN_149efda20;
  local_d0[2] = (longlong)puVar7;
  lVar3 = *param_3;
  *(undefined4 *)puVar7 = *(undefined4 *)(lVar3 + 0x304);
  FUN_145da7a52(lVar3,&local_80);
  plVar10 = local_80;
  *(undefined4 *)((longlong)puVar7 + 0xc) = (undefined4)local_80;
  *(undefined4 *)(puVar7 + 2) = local_80._4_4_;
  FUN_145da7a60(*param_3,&local_80);
  plVar1 = local_80;
  *(undefined4 *)((longlong)puVar7 + 4) = (undefined4)local_80;
  *(undefined4 *)(puVar7 + 1) = local_80._4_4_;
  *(byte *)(puVar7 + 3) = *(byte *)(*param_3 + 0x369) & 1;
  uVar6 = FUN_145da7a2c();
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar6;
  uVar4 = FUN_145da7a7c(*param_3);
  *(undefined1 *)((longlong)puVar7 + 0x19) = uVar4;
  *(byte *)((longlong)puVar7 + 0x1a) = *(byte *)(*param_3 + 0x368) >> 2 & 1;
  uVar4 = FUN_14020e49e();
  *(undefined1 *)((longlong)puVar7 + 0x1b) = uVar4;
  uVar6 = FUN_145da7a34(*param_3);
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar6;
  *(byte *)(puVar7 + 4) = *(byte *)(*param_3 + 0x368) >> 7;
  uVar4 = FUN_14154d6de();
  *(undefined1 *)((longlong)puVar7 + 0x21) = uVar4;
  uVar4 = FUN_14154d6ea(*param_3);
  *(undefined1 *)((longlong)puVar7 + 0x22) = uVar4;
  uVar4 = FUN_14154d6f6(*param_3);
  *(undefined1 *)((longlong)puVar7 + 0x23) = uVar4;
  lVar3 = *param_3;
  *(byte *)((longlong)puVar7 + 0x24) = *(byte *)(lVar3 + 0x369) >> 6 & 1;
  if ((*(byte *)(lVar3 + 0x368) & 2) == 0) {
    bVar11 = (*(int *)(lVar3 + 0x304) - 2U & 0xfffffffd) != 0;
  }
  else {
    bVar11 = false;
  }
  *(bool *)((longlong)puVar7 + 0x25) = bVar11;
  uVar4 = FUN_145da7a46();
  *(undefined1 *)((longlong)puVar7 + 0x26) = uVar4;
  lVar3 = *param_3;
  *(byte *)((longlong)puVar7 + 0x27) = *(byte *)(lVar3 + 0x368) >> 3 & 1;
  *(byte *)(puVar7 + 5) = *(byte *)(lVar3 + 0x36a) & 1;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = *(undefined4 *)(lVar3 + 0x624);
  *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(lVar3 + 0x628);
  plVar8 = (longlong *)FUN_14142e2d2(lVar3 + 0x308);
  local_80 = (longlong *)*plVar8;
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  local_78 = (undefined4)plVar8[1];
  uVar9 = FUN_1447a1f4a(&local_80);
  FUN_144a787a6(puVar7 + 7,uVar9);
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  uVar6 = FUN_145da7a3c(*param_3);
  *(undefined4 *)(puVar7 + 9) = uVar6;
  uVar6 = FUN_145da7a6e(*param_3);
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar6;
  FUN_145da7a9a(*param_3,&local_80);
  FUN_145da7b0e(puVar7 + 10,&local_80);
  *(byte *)(puVar7 + 0xe) = *(byte *)(*param_3 + 0x36a) >> 2 & 1;
  (**(code **)(*DAT_14c968088 + 0x38))(DAT_14c968088,param_2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if ((DAT_14c872bf1 == '\x01') && ((DAT_14c8442b8 & 1) == 0)) goto LAB_145da76aa;
LAB_145da790c:
    lVar3 = *param_3;
    uVar9 = FUN_14001cc68(0x18,0x10);
    FUN_1415641a4(uVar9);
    local_f8 = uVar9;
    local_f0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    local_f0[1] = &DAT_100000001;
    *local_f0 = &PTR_LAB_149eca0b0;
    local_f0[2] = uVar9;
    FUN_140764358(lVar3,&local_f8);
  }
  else {
    if (DAT_14c8442b8 != 0) goto LAB_145da790c;
LAB_145da76aa:
    lVar3 = *param_3;
    local_e8 = *param_2;
    local_e0 = param_2[1];
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    FUN_140764358(lVar3,&local_e8);
    FUN_145a1ce82(*param_3,plVar1);
    FUN_1402bb070(*param_3,plVar10);
    local_108 = local_f9;
    (**(code **)(*DAT_14c968088 + 0x40))(DAT_14c968088,param_2,&local_d8,&local_b8);
    plVar10 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe8))();
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10,param_2);
    }
  }
  plVar10 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_c0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  plVar10 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_145da7769:
  plVar10 = (longlong *)param_3[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145da7a2c FUN_145da7a2c body=7 status=ok
// SIG undefined FUN_145da7a2c(void)

undefined4 FUN_145da7a2c(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x364);
}



// FUNCTION 145da7a34 FUN_145da7a34 body=7 status=ok
// SIG undefined FUN_145da7a34(void)

undefined4 FUN_145da7a34(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x36c);
}



// FUNCTION 145da7a3c FUN_145da7a3c body=9 status=ok
// SIG undefined FUN_145da7a3c(void)

undefined4 FUN_145da7a3c(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x35c);
}



// FUNCTION 145da7a46 FUN_145da7a46 body=12 status=ok
// SIG undefined FUN_145da7a46(void)

byte FUN_145da7a46(longlong param_1)

{
  return (*(byte *)(param_1 + 0x369) & 0x20) >> 5;
}



// FUNCTION 145da7a52 FUN_145da7a52 body=14 status=ok
// SIG undefined FUN_145da7a52(void)

undefined8 * FUN_145da7a52(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x378);
  return param_2;
}



// FUNCTION 145da7a60 FUN_145da7a60 body=14 status=ok
// SIG undefined FUN_145da7a60(void)

undefined8 * FUN_145da7a60(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x370);
  return param_2;
}



// FUNCTION 145da7a6e FUN_145da7a6e body=14 status=ok
// SIG undefined FUN_145da7a6e(void)

undefined4 FUN_145da7a6e(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x498) + 0x15e0);
}



// FUNCTION 145da7a7c FUN_145da7a7c body=30 status=ok
// SIG undefined FUN_145da7a7c(void)

undefined4 FUN_145da7a7c(longlong param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x368) & 2) == 0) {
    uVar1 = *(int *)(param_1 + 0x304) - 2;
    return CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xfffffffd) != 0);
  }
  return 0;
}



// FUNCTION 145da7a9a FUN_145da7a9a body=115 status=ok
// SIG undefined FUN_145da7a9a(void)

void FUN_145da7a9a(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x4f0);
  *(char *)(param_2 + 1) = cVar1;
  if (cVar1 == '\x01') {
    *param_2 = *(undefined4 *)(param_1 + 0x4ec);
  }
  cVar1 = *(char *)(param_1 + 0x4f8);
  *(char *)(param_2 + 3) = cVar1;
  if (cVar1 == '\x01') {
    param_2[2] = *(undefined4 *)(param_1 + 0x4f4);
  }
  cVar1 = *(char *)(param_1 + 0x500);
  *(char *)(param_2 + 5) = cVar1;
  if (cVar1 == '\x01') {
    param_2[4] = *(undefined4 *)(param_1 + 0x4fc);
  }
  cVar1 = *(char *)(param_1 + 0x508);
  *(char *)(param_2 + 7) = cVar1;
  if (cVar1 == '\x01') {
    param_2[6] = *(undefined4 *)(param_1 + 0x504);
  }
  return;
}



// FUNCTION 145da7b0e FUN_145da7b0e body=137 status=ok
// SIG undefined FUN_145da7b0e(void)

void FUN_145da7b0e(undefined4 *param_1,undefined4 *param_2)

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
    if (*(char *)(param_1 + 1) != '\x01') goto LAB_145da7b29;
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
LAB_145da7b29:
  if (*(char *)(param_2 + 3) == '\x01') {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)(param_2 + 5) == '\x01') {
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)(param_2 + 7) != '\x01') {
    if (*(char *)(param_1 + 7) == '\x01') {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    return;
  }
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



// FUNCTION 145da7b98 FUN_145da7b98 body=156 status=ok
// SIG undefined FUN_145da7b98(void)

void FUN_145da7b98(undefined8 param_1,longlong param_2)

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
  FUN_145da7c36(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da7c36 FUN_145da7c36 body=49 status=ok
// SIG undefined FUN_145da7c36(void)

void FUN_145da7c36(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14028d356();
    if (*(longlong *)(param_1 + 0x698) == param_2) {
      *(undefined8 *)(param_1 + 0x698) = 0;
    }
  }
  return;
}



// FUNCTION 145da7c68 FUN_145da7c68 body=151 status=ok
// SIG undefined FUN_145da7c68(void)

void FUN_145da7c68(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x340) == '\x01') {
    lVar1 = FUN_140391552(param_1);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x348) != 0)) {
      FUN_1446ddc76(&local_30,"ChangeFirstTimeCalibrationNavBar",1);
      FUN_1401cd85c(lVar1,local_30,param_1 + 0x348);
    }
  }
  FUN_145da7d00(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da7d00 FUN_145da7d00 body=54 status=ok
// SIG undefined FUN_145da7d00(void)

void FUN_145da7d00(longlong param_1)

{
  FUN_14615573a();
  FUN_14615dab0(param_1);
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x31c) = 0xffffffff00000000;
  return;
}



// FUNCTION 145da7d36 FUN_145da7d36 body=78 status=ok
// SIG undefined FUN_145da7d36(void)

void FUN_145da7d36(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x728);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x728) = 0;
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
  }
  FUN_14154d702(param_1);
  return;
}



// FUNCTION 145da7d8a FUN_145da7d8a body=160 status=ok
// SIG undefined FUN_145da7d8a(void)

void FUN_145da7d8a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145907800(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a418550;
  puVar1[5] = &PTR_FUN_14a418f60;
  puVar1[6] = &PTR_LAB_14a418fa0;
  puVar1[0x55] = &PTR_FUN_14a418ff0;
  puVar1[0x56] = &PTR_FUN_14a419070;
  puVar1[0x57] = &PTR_FUN_14a419080;
  *(undefined2 *)(puVar1 + 0xce) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x672) = 0;
  puVar1[0xcf] = 0;
  *(undefined4 *)(puVar1 + 0xd0) = 0;
  *(byte *)((longlong)puVar1 + 0x9f) = *(byte *)((longlong)puVar1 + 0x9f) & 0xfd;
  *(byte *)((longlong)puVar1 + 0x2d5) = *(byte *)((longlong)puVar1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)puVar1 + 0x4a) = *(byte *)((longlong)puVar1 + 0x4a) & 0xf1 | 2;
  return;
}



// FUNCTION 145da7e2a FUN_145da7e2a body=40 status=ok
// SIG undefined FUN_145da7e2a(void)

undefined8 FUN_145da7e2a(undefined8 param_1,int param_2)

{
  FUN_145da7e52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da7e52 FUN_145da7e52 body=125 status=ok
// SIG undefined FUN_145da7e52(void)

void FUN_145da7e52(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a521140;
  param_1[5] = &PTR_FUN_14a521440;
  plVar3 = (longlong *)param_1[0x33];
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
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145da7eda FUN_145da7eda body=154 status=ok
// SIG undefined FUN_145da7eda(void)

undefined8 * FUN_145da7eda(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e75e0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14a6e8f20;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xf0 | 4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(byte *)(param_1 + 5) = (*(byte *)(param_1 + 5) & 0xfc) + 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145da7f80 FUN_145da7f80 body=154 status=ok
// SIG undefined FUN_145da7f80(void)

undefined8 * FUN_145da7f80(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a829190;
  param_1[5] = &PTR_LAB_14a829610;
  param_1[6] = &PTR_LAB_14a829650;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  bVar1 = *(byte *)((longlong)param_1 + 0x9f);
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13a) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x28;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)(param_1 + 0x34) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a2) = 1;
  *(byte *)((longlong)param_1 + 0x9f) = bVar1 | 2;
  return param_1;
}



// FUNCTION 145da801a FUN_145da801a body=40 status=ok
// SIG undefined FUN_145da801a(void)

undefined8 FUN_145da801a(undefined8 param_1,int param_2)

{
  FUN_145da8042();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da8042 FUN_145da8042 body=125 status=ok
// SIG undefined FUN_145da8042(void)

void FUN_145da8042(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abee880;
  param_1[5] = &PTR_FUN_14abeebb0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145da80c0 FUN_145da80c0 body=40 status=ok
// SIG undefined FUN_145da80c0(void)

undefined8 FUN_145da80c0(undefined8 param_1,int param_2)

{
  FUN_145da80e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da80e8 FUN_145da80e8 body=125 status=ok
// SIG undefined FUN_145da80e8(void)

void FUN_145da80e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abef4f0;
  param_1[5] = &PTR_FUN_14abef820;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145da8170 FUN_145da8170 body=154 status=ok
// SIG undefined FUN_145da8170(void)

undefined8 * FUN_145da8170(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad117b0;
  param_1[5] = &PTR_FUN_14ad11a50;
  param_1[6] = &PTR_FUN_14ad11a90;
  param_1[7] = &PTR_FUN_14ad11ab0;
  param_1[8] = &PTR_FUN_14ad11ac0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  return param_1;
}



// FUNCTION 145da820a FUN_145da820a body=128 status=ok
// SIG undefined FUN_145da820a(void)

undefined8 * FUN_145da820a(undefined8 *param_1)

{
  int iVar1;
  undefined *_Src;
  undefined8 *_Dst;
  longlong lVar2;
  
  iVar1 = DAT_14cb98b10;
  if (param_1 != &DAT_14cb98ac8) {
    lVar2 = (longlong)DAT_14cb98b10;
    FUN_144a1cbf0(param_1 + 7,0,DAT_14cb98b10,4);
    if (lVar2 != 0) {
      _Dst = param_1 + 7;
      if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[8];
      }
      _Src = &DAT_14cb98b00;
      if (DAT_14cb98b08 != (undefined *)0x0) {
        _Src = DAT_14cb98b08;
      }
      memcpy(_Dst,_Src,lVar2 << 2);
    }
    *(int *)(param_1 + 9) = iVar1;
    FUN_145da828a(param_1);
  }
  return param_1;
}



// FUNCTION 145da828a FUN_145da828a body=202 status=ok
// SIG undefined FUN_145da828a(void)

undefined8 * FUN_145da828a(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar2 = DAT_14cb98ad0;
  uVar4 = (ulonglong)DAT_14cb98ad0;
  FUN_145c08366(param_1,uVar4);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar1 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_1447711aa(param_1);
  }
  *(undefined4 *)(param_1 + 6) = DAT_14cb98af8;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_14cb98afc;
  FUN_144a69486(param_1 + 2,&DAT_14cb98ad8);
  if (0 < (int)uVar2) {
    puVar6 = (undefined4 *)*param_1;
    uVar5 = 0;
    puVar7 = DAT_14cb98ac8;
    do {
      puVar3 = DAT_14cb98ae8;
      if (DAT_14cb98ae8 == (undefined *)0x0) {
        puVar3 = &DAT_14cb98ad8;
      }
      if ((*(uint *)(puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1) == 0) {
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
      }
      else {
        FUN_148ac4254(puVar6,puVar7);
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 8;
      puVar6 = puVar6 + 8;
    } while (uVar4 != uVar5);
  }
  return param_1;
}



// FUNCTION 145da8354 FUN_145da8354 body=43 status=ok
// SIG undefined FUN_145da8354(void)

undefined8 FUN_145da8354(undefined8 param_1,int param_2)

{
  FUN_145da8380();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 145da8380 FUN_145da8380 body=287 status=ok
// SIG undefined FUN_145da8380(void)

void FUN_145da8380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c16b0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145da84aa FUN_145da84aa body=270 status=ok
// SIG undefined FUN_145da84aa(void)

longlong * FUN_145da84aa(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = (longlong)&PTR_FUN_14ba4c9c0;
  param_1[0x75] = 0;
  FUN_1446f470e(&local_20,L"Sprite",1);
  uVar2 = FUN_141260078();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  bVar1 = DAT_14c950c29;
  if (lVar3 == 0 || DAT_14c950c29 != 1) {
    param_1[0x75] = lVar3;
    if (lVar3 == 0) goto LAB_145da8556;
  }
  else {
    FUN_14689c22e(lVar3);
    param_1[0x75] = lVar3;
    bVar1 = DAT_14c950c29;
  }
  *(byte *)(lVar3 + 0x1f9) = *(byte *)(lVar3 + 0x1f9) | 8;
  lVar3 = param_1[0x75];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_1[0x75];
    }
  }
  param_1[0x39] = lVar3;
LAB_145da8556:
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  (**(code **)(*param_1 + 0x638))(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da85ba FUN_145da85ba body=48 status=ok
// SIG undefined FUN_145da85ba(void)

void FUN_145da85ba(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined2 *)(param_1 + 0x398) = 0x101;
  *(undefined8 *)(param_1 + 0x39c) = 0x3c23d70a00000000;
  *(undefined4 *)(param_1 + 0x3a4) = 0x3f800000;
  return;
}



// FUNCTION 145da85ea FUN_145da85ea body=315 status=ok
// SIG undefined FUN_145da85ea(void)

undefined8 *
FUN_145da85ea(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da8736 FUN_145da8736 body=40 status=ok
// SIG undefined FUN_145da8736(void)

undefined8 FUN_145da8736(undefined8 param_1,int param_2)

{
  FUN_145da875e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da875e FUN_145da875e body=245 status=ok
// SIG undefined FUN_145da875e(void)

void FUN_145da875e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bd52d50;
  FUN_145da8853(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
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
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0xf];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145da8853 FUN_145da8853 body=45 status=ok
// SIG undefined FUN_145da8853(void)

void FUN_145da8853(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145da8880 FUN_145da8880 body=40 status=ok
// SIG undefined FUN_145da8880(void)

undefined8 FUN_145da8880(undefined8 param_1,int param_2)

{
  FUN_145da88a8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da88a8 FUN_145da88a8 body=125 status=ok
// SIG undefined FUN_145da88a8(void)

void FUN_145da88a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd5cc20;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145da8926 FUN_145da8926 body=183 status=ok
// SIG undefined FUN_145da8926(void)

void FUN_145da8926(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cc32970 != 0) {
    local_20 = DAT_14cc32970;
    local_18 = DAT_14cc32978;
    if (DAT_14cc32978 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14cc32978 + 1) = (int)DAT_14cc32978[1] + 1;
      UNLOCK();
    }
    FUN_145da8a2a(&DAT_14c867310,&local_20);
    plVar3 = DAT_14cc32978;
    DAT_14cc32970 = 0;
    if (DAT_14cc32978 != (longlong *)0x0) {
      DAT_14cc32978 = (longlong *)0x0;
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da89ea FUN_145da89ea body=25 status=ok
// SIG undefined FUN_145da89ea(void)

void FUN_145da89ea(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145da89ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145da8a04 FUN_145da8a04 body=38 status=ok
// SIG undefined FUN_145da8a04(void)

undefined8 FUN_145da8a04(undefined8 param_1,int param_2)

{
  FUN_145da8bd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145da8a2a FUN_145da8a2a body=134 status=ok
// SIG undefined FUN_145da8a2a(void)

void FUN_145da8a2a(undefined8 param_1,undefined8 *param_2)

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
  FUN_145da8ac2(param_1,&local_28);
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



// FUNCTION 145da8ac2 FUN_145da8ac2 body=273 status=ok
// SIG undefined FUN_145da8ac2(void)

void FUN_145da8ac2(longlong *param_1,undefined8 *param_2)

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
          if (bVar8) goto LAB_145da8baf;
          goto LAB_145da8b68;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145da8baf:
    FUN_14474d06a(param_1,0);
  }
LAB_145da8b68:
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



// FUNCTION 145da8bd4 FUN_145da8bd4 body=358 status=ok
// SIG undefined FUN_145da8bd4(void)

void FUN_145da8bd4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14bf07e60;
  FUN_145da8db4();
  FUN_145da8d3a(param_1);
  FUN_14080c2b4();
  FUN_145c1d16f(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_145c1d292(param_1 + 0xd,0);
  }
  if (param_1[0xf] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0xf] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_145c1d16f(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0xc];
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
  plVar5 = (longlong *)param_1[10];
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
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145da8d3a FUN_145da8d3a body=121 status=ok
// SIG undefined FUN_145da8d3a(void)

void FUN_145da8d3a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar6);
      lVar4 = lVar3 + 0x20;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      FUN_140414380(lVar4,0);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0x70));
  }
  lVar5 = *(longlong *)(param_1 + 0x78);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 145da8db4 FUN_145da8db4 body=359 status=ok
// SIG undefined FUN_145da8db4(void)

void FUN_145da8db4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x30))(param_1,local_28);
  uVar6 = (**(code **)(*param_1 + 0x58))(param_1);
  FUN_1411f311e(uVar6,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  lVar7 = param_1[0xb];
  if (lVar7 != 0) {
    iVar3 = (int)param_1[0xe];
    *(uint *)(param_1 + 0xe) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x74) < iVar3 + 1U) {
      FUN_1465a0462(param_1 + 0xd,iVar3);
      lVar7 = param_1[0xb];
    }
    lVar4 = param_1[0xd];
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar7;
    lVar7 = param_1[0xc];
    *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_143feb9fc(param_1[9]);
    param_1[0xb] = 0;
    plVar5 = (longlong *)param_1[0xc];
    if (plVar5 != (longlong *)0x0) {
      param_1[0xc] = 0;
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
  if (param_1[0x10] != 0) {
    FUN_149917fe2();
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
    param_1[0x10] = 0;
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
    param_1[0x11] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da8f22 FUN_145da8f22 body=123 status=ok
// SIG undefined FUN_145da8f22(void)

undefined8 * FUN_145da8f22(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x28) <= iVar1)) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = (longlong)iVar1 * 0x10;
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 8 + lVar3);
    _Src = *(void **)(lVar2 + lVar3);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 145da8f9e FUN_145da8f9e body=589 status=ok
// SIG undefined FUN_145da8f9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da8f9e(uint param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  lVar11 = 0;
  FUN_145da91ec();
  uStack_40 = uStack_40 & 0xffffffff00000000;
  do {
    if (DAT_14cb98910 == DAT_14cb9893c) {
LAB_145da913e:
      lVar5 = 0;
      if (_DAT_00000010 <= lVar11) goto LAB_145da9059;
    }
    else {
      puVar3 = DAT_14cb98948;
      if (DAT_14cb98948 == (undefined *)0x0) {
        puVar3 = &DAT_14cb98940;
      }
      iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cb98950 - 1U & param_1) * 4);
      iVar4 = iVar1;
      if (iVar1 == -1) goto LAB_145da913e;
      do {
        lVar5 = DAT_14cb98908 + (longlong)iVar4 * 0x20;
        if (*(uint *)(DAT_14cb98908 + (longlong)iVar4 * 0x20) == param_1) goto LAB_145da9036;
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (*(int *)(lVar5 + 0x18) != -1);
      lVar5 = 0;
LAB_145da9036:
      if (*(int *)(lVar5 + 0x10) <= lVar11) {
        break;
      }
      do {
        lVar5 = DAT_14cb98908 + (longlong)iVar1 * 0x20;
        if (*(uint *)(DAT_14cb98908 + (longlong)iVar1 * 0x20) == param_1) goto LAB_145da90c5;
        iVar1 = *(int *)(lVar5 + 0x18);
      } while (iVar1 != -1);
      lVar5 = 0;
    }
LAB_145da90c5:
    iVar1 = *(int *)(*(longlong *)(lVar5 + 8) + 8 + lVar11 * 200);
    if (iVar1 == (int)param_2[1]) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*(longlong *)(*(longlong *)(lVar5 + 8) + lVar11 * 200) + lVar6);
          uVar8 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(*param_2 + lVar6);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_145da9195;
LAB_145da9110:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_145da9110;
        }
        if (uVar7 != uVar9) goto LAB_145da91b6;
      }
LAB_145da9195:
      iVar1 = FUN_144a8a8b6();
      if (iVar1 != 0) goto LAB_145da91b6;
    }
    else {
      if ((int)param_2[1] + iVar1 == 1) goto LAB_145da9195;
LAB_145da91b6:
      uVar8 = uStack_40;
      uVar2 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
      if (uStack_40._4_4_ < uVar2) {
        FUN_148ac5928(&local_48,uVar8 & 0xffffffff);
      }
      FUN_148abf86e();
    }
    lVar11 = lVar11 + 1;
  } while( true );
  while (iVar1 = *(int *)(lVar5 + 0x18), lVar5 = 0, iVar1 != -1) {
    lVar5 = DAT_14cb98908 + (longlong)iVar1 * 0x20;
    if (*(uint *)(DAT_14cb98908 + (longlong)iVar1 * 0x20) == param_1) break;
  }
LAB_145da9059:
  FUN_145da9218(lVar5 + 8,&local_48);
  FUN_14154d759();
  FUN_145da91ec(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da91ec FUN_145da91ec body=43 status=ok
// SIG undefined FUN_145da91ec(void)

void FUN_145da91ec(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148abf402(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 145da9218 FUN_145da9218 body=93 status=ok
// SIG undefined FUN_145da9218(void)

undefined8 * FUN_145da9218(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145da91ec(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ac79c2(param_1,iVar1);
      FUN_148ac7585(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145da9276 FUN_145da9276 body=157 status=ok
// SIG undefined FUN_145da9276(void)

void FUN_145da9276(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + -0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_145da92b8;
  }
  lVar2 = 0;
LAB_145da92b8:
  local_38 = FUN_14117e6d4;
  local_30 = 0;
  FUN_145da9314(lVar2 + 0xc10,&local_28,param_1 + -0x30);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da9314 FUN_145da9314 body=254 status=ok
// SIG undefined FUN_145da9314(void)

undefined8
FUN_145da9314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b412ca0;
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
  *local_48 = &PTR_FUN_14b9aadd0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ab8ab8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da9414 FUN_145da9414 body=63 status=ok
// SIG undefined FUN_145da9414(void)

undefined1 FUN_145da9414(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145da9454(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 145da9454 FUN_145da9454 body=510 status=ok
// SIG undefined FUN_145da9454(void)

longlong FUN_145da9454(longlong param_1,longlong param_2)

{
  longlong lVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  uVar10 = *(undefined4 *)(param_2 + 0x28);
  uVar11 = *(undefined4 *)(param_2 + 0x2c);
  uVar12 = *(undefined4 *)(param_2 + 0x30);
  uVar13 = *(undefined4 *)(param_2 + 0x34);
  uVar14 = *(undefined4 *)(param_2 + 0x38);
  uVar15 = *(undefined4 *)(param_2 + 0x3c);
  uVar16 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = uVar14;
  *(undefined4 *)(param_1 + 0x3c) = uVar15;
  *(undefined4 *)(param_1 + 0x40) = uVar16;
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  *(undefined4 *)(param_1 + 0x2c) = uVar11;
  *(undefined4 *)(param_1 + 0x30) = uVar12;
  *(undefined4 *)(param_1 + 0x34) = uVar13;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_140bee9ec(param_1 + 0x58,param_2 + 0x58);
  FUN_14058acb2(param_1 + 0x68,param_2 + 0x68);
  FUN_1410b2022(param_1 + 0xb8,param_2 + 0xb8);
  uVar2 = *(undefined4 *)(param_2 + 0x10c);
  uVar3 = *(undefined4 *)(param_2 + 0x110);
  uVar4 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = uVar2;
  *(undefined4 *)(param_1 + 0x110) = uVar3;
  *(undefined4 *)(param_1 + 0x114) = uVar4;
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar2 = *(undefined4 *)(param_2 + 0x134);
  uVar3 = *(undefined4 *)(param_2 + 0x138);
  uVar4 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  *(undefined4 *)(param_1 + 0x13c) = uVar4;
  FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  uVar2 = *(undefined4 *)(param_2 + 0x15c);
  uVar3 = *(undefined4 *)(param_2 + 0x160);
  uVar4 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  *(undefined4 *)(param_1 + 0x164) = uVar4;
  FUN_144a787a6(param_1 + 0x168,param_2 + 0x168);
  if ((*(longlong *)(param_1 + 0x178) != *(longlong *)(param_2 + 0x178)) ||
     (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180))) {
    *(longlong *)(param_1 + 0x178) = *(longlong *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if ((*(longlong *)(param_1 + 400) != *(longlong *)(param_2 + 400)) ||
     (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198))) {
    *(longlong *)(param_1 + 400) = *(longlong *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) != lVar1) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  if (*(longlong *)(param_1 + 0x1b0) != *(longlong *)(param_2 + 0x1b0)) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  uVar17 = FUN_14477b664();
  uVar17 = FUN_14477b664(uVar17);
  *(undefined8 *)(param_1 + 0x1b0) = uVar17;
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  FUN_145da9652(param_1 + 0x1c0,param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 145da9652 FUN_145da9652 body=88 status=ok
// SIG undefined FUN_145da9652(void)

longlong * FUN_145da9652(longlong *param_1,longlong *param_2)

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



// FUNCTION 145da96aa FUN_145da96aa body=146 status=ok
// SIG undefined FUN_145da96aa(void)

code * FUN_145da96aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145da973c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbRCAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXRCASParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2a178;
  return FUN_145de59ce;
}



// FUNCTION 145da973c FUN_145da973c body=278 status=ok
// SIG undefined FUN_145da973c(void)

undefined * FUN_145da973c(void)

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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2a1f8) {
    FUN_144b3d300(&DAT_14cc2a1f8);
    if (DAT_14cc2a1f8 == -1) {
      FUN_145da9854(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbRCAS";
      local_78 = L"FFXRCASParameters";
      local_50 = 0x10;
      local_58 = 0x5c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a178,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144655d03);
      _Init_thread_footer(&DAT_14cc2a1f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2a178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da9854 FUN_145da9854 body=232 status=ok
// SIG undefined FUN_145da9854(void)

longlong * FUN_145da9854(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146762b24;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145da9942 FUN_145da9942 body=205 status=ok
// SIG undefined FUN_145da9942(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da9942(void)

{
  if ((DAT_14ca14627 & 2) == 0) {
    DAT_14ca14627 = DAT_14ca14627 | 2;
    _DAT_14ca145c8 = L"FRasterClearCS";
    _DAT_14ca145e0 = FUN_146826540;
    _DAT_14ca145e8 = FUN_146825d77;
    _DAT_14ca145f0 = FUN_146825fd6;
    _DAT_14ca145f8 = FUN_1407e02ea;
    _DAT_14ca14600 = FUN_146826273;
    _DAT_14ca145d8 = FUN_147251916;
    _DAT_14ca14618 = 0xffffffff000000e0;
    _DAT_14ca14620 = 8;
    DAT_14ca14624 = 0;
    _DAT_14ca14608 = &LAB_147251942;
    FUN_145da9a10();
    FUN_1407e00cc(&DAT_14ca145c0);
    return;
  }
  return;
}



// FUNCTION 145da9a10 FUN_145da9a10 body=123 status=ok
// SIG undefined FUN_145da9a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145da9a10(void)

{
  _DAT_14ca18fb0 = L"BASE";
  DAT_14ca18fda = 4;
  _DAT_14ca18fb8 = FUN_140b35ae4();
  _DAT_14ca18fc0 = DAT_14ca145d0;
  _DAT_14ca18fc8 = &LAB_14682652b;
  DAT_14ca145d0 = &DAT_14ca18fb0;
  DAT_14ca14625 = DAT_14ca14625 + '\x01';
  _DAT_14ca18fd0 = 0x100000000;
  if (*(char *)(_DAT_14ca18fb8 + 100) != '\0') {
    DAT_14ca14626 = DAT_14ca14626 + '\x01';
  }
  return;
}



// FUNCTION 145da9a8c FUN_145da9a8c body=226 status=ok
// SIG undefined FUN_145da9a8c(void)

longlong * FUN_145da9a8c(longlong *param_1)

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
  pcVar13 = FUN_1462f0394;
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



// FUNCTION 145da9b74 FUN_145da9b74 body=140 status=ok
// SIG undefined FUN_145da9b74(void)

undefined1 * FUN_145da9b74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145da9c00();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RasterParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRasterParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca17600;
  return &LAB_145da9b70;
}



// FUNCTION 145da9c00 FUN_145da9c00 body=261 status=ok
// SIG undefined FUN_145da9c00(void)

void FUN_145da9c00(void)

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
              0x110) < DAT_14ca17680) {
    FUN_144b3d300(&DAT_14ca17680);
    if (DAT_14ca17680 == -1) {
      FUN_145da9d06(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRasterParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17600,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275d3);
      _Init_thread_footer(&DAT_14ca17680);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145da9d06 FUN_145da9d06 body=226 status=ok
// SIG undefined FUN_145da9d06(void)

longlong * FUN_145da9d06(longlong *param_1)

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
  pcVar13 = FUN_1462f041c;
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



// FUNCTION 145da9dea FUN_145da9dea body=138 status=ok
// SIG undefined FUN_145da9dea(void)

code * FUN_145da9dea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisBuffer64";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<UlongType>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145da9efe;
}



// FUNCTION 145da9e74 FUN_145da9e74 body=138 status=ok
// SIG undefined FUN_145da9e74(void)

code * FUN_145da9e74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutDbgBuffer64";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<UlongType>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145da9dea;
}



// FUNCTION 145da9efe FUN_145da9efe body=138 status=ok
// SIG undefined FUN_145da9efe(void)

code * FUN_145da9efe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutDepthBufferArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f04a4;
}



// FUNCTION 145da9f88 FUN_145da9f88 body=302 status=ok
// SIG undefined FUN_145da9f88(void)

void FUN_145da9f88(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_4a8 [40];
  undefined1 local_480 [376];
  undefined1 local_308 [376];
  undefined1 local_190 [80];
  undefined1 local_140 [256];
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  FUN_14583e8ce(local_190);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_190);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_190);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14154dd46(local_308,local_190);
  cVar1 = (**(code **)(*param_1 + 0xf70))(param_1,local_308);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ExecuteInventoryTransactionOnServer_Validate");
  }
  else {
    FUN_14154dd46(local_480,local_190);
    (**(code **)(*param_1 + 0xf78))(param_1,local_480);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(local_140);
  if ((local_18 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daa0b8 FUN_145daa0b8 body=47 status=ok
// SIG undefined FUN_145daa0b8(void)

undefined1 FUN_145daa0b8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_2 + 0x50);
  return 1;
}



// FUNCTION 145daa0e8 FUN_145daa0e8 body=64 status=ok
// SIG undefined FUN_145daa0e8(void)

void FUN_145daa0e8(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xc38) != 0) {
    FUN_145daa128(*(longlong *)(param_1 + 0xc38),param_2);
  }
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_2 + 0x50);
  return;
}



// FUNCTION 145daa128 FUN_145daa128 body=30 status=ok
// SIG undefined FUN_145daa128(void)

void FUN_145daa128(longlong param_1)

{
  FUN_145dd7080(param_1 + 0x60);
  FUN_145e36b8a(param_1);
  return;
}



// FUNCTION 145daa146 FUN_145daa146 body=124 status=ok
// SIG undefined FUN_145daa146(void)

void FUN_145daa146(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong ****pppplVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *****ppppplVar13;
  int iVar14;
  longlong *****ppppplVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [8];
  longlong *plStack_a8;
  int iStack_a0;
  longlong ****pppplStack_90;
  undefined4 uStack_80;
  longlong ****pppplStack_78;
  undefined8 uStack_70;
  ushort uStack_60;
  byte bStack_58;
  ulonglong uStack_50;
  undefined8 uStack_40;
  
  uStack_40 = 0x145daa162;
  plVar10 = (longlong *)FUN_144a8232a(&DAT_14cb7bde0);
  if (*param_2 != *plVar10) {
    return;
  }
  uStack_40 = 0x145daa179;
  cVar6 = FUN_1407eda54(*param_3);
  lVar16 = *(longlong *)(param_1 + 8);
  if ((lVar16 == 0) || (*(char *)(lVar16 + 0x2b0) == cVar6)) {
    return;
  }
  *(char *)(lVar16 + 0x2b0) = cVar6;
  if (cVar6 == '\0') {
    FUN_140ebf9e6(lVar16 + 0x380);
    return;
  }
  uStack_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pppplStack_78 = *(longlong *****)(lVar16 + 0x2b8);
  FUN_1446dcdd4(&plStack_a8);
  if (DAT_14cb818c8 != 0) {
    lVar9 = FUN_144815d88(DAT_14cb818c8,&plStack_a8);
    if ((longlong *****)pppplStack_90 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if (lVar9 == 0) goto LAB_140e3fce2;
    lVar1 = lVar16 + 0x380;
    FUN_140e41048(lVar1,lVar9);
    lVar9 = *(longlong *)(lVar16 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(lVar16);
      if (lVar9 == 0) goto LAB_140e3fce2;
      lVar9 = *(longlong *)(lVar16 + 0xb0);
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(lVar16);
      }
    }
    bVar2 = *(byte *)(lVar9 + 0x152);
    if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_140e3fce2;
    FUN_140e40572(lVar1,0);
    if (*(char *)(lVar16 + 0x2e0) == '\x01') {
      plStack_a8 = (longlong *)((ulonglong)plStack_a8 & 0xffffffffffffff00);
      uStack_80 = 0;
      FUN_1456bb102(&plStack_a8,*(undefined8 *)(lVar16 + 0xa8));
      FUN_1448729ea(lVar16 + 0x2e8,&pppplStack_78);
      fVar18 = (float)FUN_144a7b41a(&pppplStack_78,0xbf800000);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppplVar13 = &pppplStack_78;
        if (0x18 < uStack_60) {
          ppppplVar13 = (longlong *****)pppplStack_78;
        }
        (*pcVar5)(ppppplVar13);
      }
      if (0x18 < uStack_60) {
        FUN_1400020a8(pppplStack_78);
      }
      FUN_144a5ac3a(&plStack_a8);
      if (0.0 <= fVar18) {
        *(float *)(lVar16 + 0x96c) = fVar18;
      }
    }
    lVar9 = FUN_140e40dfb();
    pppplStack_78 = (longlong ****)0x0;
    uStack_70 = 0;
    FUN_140e40420(*(undefined8 *)(lVar16 + 0xa8),&pppplStack_78);
    if ((longlong)(int)uStack_70 != 0) {
      ppppplVar13 = (longlong *****)(pppplStack_78 + (int)uStack_70);
      ppppplVar15 = (longlong *****)pppplStack_78;
      do {
        pppplVar3 = *ppppplVar15;
        cVar6 = *(char *)(lVar16 + 0x338);
        if (cVar6 == '\x02') {
          bVar2 = *(byte *)(lVar9 + 0x60);
          uVar7 = (*(code *)(*pppplVar3)[0xb0])(pppplVar3);
          if (uVar7 == bVar2) {
LAB_140e3f9ad:
            FUN_140e40132(lVar1,pppplVar3);
          }
        }
        else if (cVar6 == '\x01') {
          if ((longlong)*(int *)(lVar16 + 0x348) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong ****)(*(longlong *)(lVar16 + 0x340) + lVar11) == pppplVar3[3])
              goto LAB_140e3f9ad;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar16 + 0x348) * 8 != lVar11);
          }
        }
        else if (cVar6 == '\x03') goto LAB_140e3f9ad;
        cVar6 = *(char *)(lVar16 + 0x350);
        if (cVar6 == '\x02') {
          bVar2 = *(byte *)(lVar9 + 0x60);
          uVar7 = (*(code *)(*pppplVar3)[0xb0])(pppplVar3);
          if (uVar7 == bVar2) goto LAB_140e3ff0e;
        }
        else if (cVar6 == '\x03') {
LAB_140e3ff0e:
          FUN_140f41cc4(lVar1,pppplVar3);
        }
        else if ((cVar6 == '\x01') && ((longlong)*(int *)(lVar16 + 0x360) != 0)) {
          lVar11 = 0;
          do {
            if (*(longlong ****)(*(longlong *)(lVar16 + 0x358) + lVar11) == pppplVar3[3])
            goto LAB_140e3ff0e;
            lVar11 = lVar11 + 8;
          } while ((longlong)*(int *)(lVar16 + 0x360) * 8 != lVar11);
        }
        if ((longlong)*(int *)(lVar16 + 0x370) != 0) {
          lVar11 = 0;
          do {
            if (*(longlong ****)(*(longlong *)(lVar16 + 0x368) + lVar11) == pppplVar3[3]) {
              FUN_140f41c18(lVar1,pppplVar3);
              break;
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)*(int *)(lVar16 + 0x370) * 8 != lVar11);
        }
        ppppplVar15 = ppppplVar15 + 1;
      } while (ppppplVar15 != ppppplVar13);
    }
    plStack_a8 = (longlong *)0x0;
    iStack_a0 = 0;
    FUN_1446efa72(&plStack_a8,0,3,0x10);
    plVar10 = plStack_a8;
    iStack_a0 = 3;
    *plStack_a8 = (longlong)&PTR_LAB_149e020b0;
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
    plStack_a8[2] = lVar11;
    *plStack_a8 = (longlong)&PTR_FUN_14b40fcb0;
    plStack_a8[3] = 0;
    iVar12 = 0;
    if (lVar16 != 0) {
      uVar7 = *(uint *)(lVar16 + 0xc);
      *(uint *)(plStack_a8 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar17 = iVar12 == 0;
        if (bVar17) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar12 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar10 + 0x1c) = iVar12;
    plVar10[4] = (longlong)FUN_140fa3e9e;
    *(undefined4 *)(plVar10 + 5) = 0;
    FUN_1448b6402(lVar1,auStack_b0,&plStack_a8);
    if (iStack_a0 == 0) {
LAB_140e3fb13:
      if (plStack_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (plStack_a8 != (longlong *)0x0) {
      (**(code **)*plStack_a8)(plStack_a8,0);
      FUN_1446efa72(&plStack_a8,0,0,0x10);
      iStack_a0 = 0;
      goto LAB_140e3fb13;
    }
    FUN_140e401f0(lVar1);
    FUN_140e400c2(lVar1);
    lVar9 = *(longlong *)(lVar16 + 0xa8);
    plStack_a8 = (longlong *)0x0;
    iStack_a0 = 0;
    FUN_1446efa72(&plStack_a8,0,3,0x10);
    plVar10 = plStack_a8;
    iStack_a0 = 3;
    *plStack_a8 = (longlong)&PTR_LAB_14a915ec0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    plStack_a8[2] = lVar11;
    *plStack_a8 = (longlong)&PTR_FUN_14b40fd20;
    plStack_a8[3] = 0;
    iVar12 = 0;
    if (lVar16 != 0) {
      uVar7 = *(uint *)(lVar16 + 0xc);
      *(uint *)(plStack_a8 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar12 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar12 = *(int *)(lVar16 + 0x10);
        bVar17 = iVar12 == 0;
        if (bVar17) {
          *(int *)(lVar16 + 0x10) = iVar8;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar12 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar10 + 0x1c) = iVar12;
    plVar10[4] = (longlong)FUN_1488bba2a;
    *(undefined4 *)(plVar10 + 5) = 0;
    if (((iStack_a0 == 0) || (plStack_a8 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*plStack_a8 + 0x30))(), cVar6 == '\0')) {
      if (iStack_a0 != 0) {
        pppplStack_90 = pppplStack_78;
        if (plStack_a8 == (longlong *)0x0) goto LAB_140e3fcd8;
        (**(code **)*plStack_a8)(plStack_a8,0);
        FUN_1446efa72(&plStack_a8,0,0,0x10);
        goto LAB_140e3fcbd;
      }
    }
    else {
      plVar10 = (longlong *)(lVar9 + 0x300);
      if (*(int *)(lVar9 + 0x314) < 1) {
        iVar12 = *(int *)(lVar9 + 0x308);
        iVar8 = *(int *)(lVar9 + 0x310) + -1;
        *(int *)(lVar9 + 0x310) = iVar8;
        if (iVar8 <= iVar12) {
          iVar8 = iVar12;
          if (0 < iVar12) {
            iVar14 = 0;
            do {
              if (((*(int *)(*plVar10 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar10 + (longlong)iVar14 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar10,iVar14);
                FUN_14005b248(plVar10);
              }
              else {
                iVar14 = iVar14 + 1;
              }
              iVar8 = *(int *)(lVar9 + 0x308);
            } while (iVar14 < iVar8);
          }
          iVar14 = 2;
          if (2 < iVar8 * 2) {
            iVar14 = iVar8 * 2;
          }
          *(int *)(lVar9 + 0x310) = iVar14;
          if ((iVar14 < iVar12) && (*(int *)(lVar9 + 0x30c) != iVar8)) {
            FUN_14045812c();
          }
        }
      }
      if ((iStack_a0 != 0) && (plStack_a8 != (longlong *)0x0)) {
        (**(code **)(*plStack_a8 + 0x38))(plStack_a8,auStack_b0);
      }
      iVar12 = *(int *)(lVar9 + 0x308);
      *(uint *)(lVar9 + 0x308) = iVar12 + 1U;
      if (*(uint *)(lVar9 + 0x30c) < iVar12 + 1U) {
        FUN_1447a71f6(plVar10,iVar12);
      }
      lVar16 = *plVar10;
      lVar9 = (longlong)iVar12 * 0x10;
      *(undefined8 *)(lVar16 + lVar9) = 0;
      *(undefined4 *)(lVar16 + 8 + lVar9) = 0;
      *(longlong **)(lVar16 + lVar9) = plStack_a8;
      plStack_a8 = (longlong *)0x0;
      *(int *)(lVar16 + 8 + lVar9) = iStack_a0;
LAB_140e3fcbd:
      iStack_a0 = 0;
    }
    pppplStack_90 = pppplStack_78;
    if (plStack_a8 != (longlong *)0x0) {
      FUN_1400020a8();
      pppplStack_90 = pppplStack_78;
    }
  }
LAB_140e3fcd8:
  if ((longlong *****)pppplStack_90 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
LAB_140e3fce2:
  if ((uStack_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145daa1c4 FUN_145daa1c4 body=918 status=ok
// SIG undefined FUN_145daa1c4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145daa1c4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined4 *local_160;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_134;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118 [6];
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_118[4] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  puVar2 = &DAT_14c846480;
  puVar4 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_88 = 0;
  local_80 = 0x100;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar2 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118 + 2);
  }
  plVar3 = local_118 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_118[1] = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118 + 1);
  }
  plVar5 = local_118 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_118[0] = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  plVar7 = local_118;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_120 = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  puVar4 = &local_120;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_128 = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  puVar6 = &local_128;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_154 = 0x100;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_12c = 0;
  *puVar2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_154);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_154);
  }
  local_160 = &local_154;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_160 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = puVar6;
  FUN_145daa55c(plVar3,plVar5,plVar7,puVar4);
  if ((DAT_14c950c29 == 1) && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar7 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daa55c FUN_145daa55c body=73 status=ok
// SIG undefined FUN_145daa55c(void)

void FUN_145daa55c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_4 = param_1[2];
  *param_5 = param_1[0x10];
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = *(undefined8 *)((longlong)param_1 + 0xac);
  *(undefined8 *)((longlong)param_6 + 0x1c) = *(undefined8 *)((longlong)param_1 + 0xa4);
  *(undefined8 *)((longlong)param_6 + 0x24) = uVar5;
  param_6[2] = uVar3;
  param_6[3] = uVar4;
  *param_6 = uVar1;
  param_6[1] = uVar2;
  return;
}



// FUNCTION 145daa5a6 FUN_145daa5a6 body=290 status=ok
// SIG undefined FUN_145daa5a6(void)

longlong * FUN_145daa5a6(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14001cc68(0xb0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9a1cd0;
  plVar1 = plVar4 + 2;
  memset(plVar4 + 3,0,0x88);
  plVar4[0xe] = DAT_14cb7bd68;
  *(undefined4 *)(plVar4 + 0xf) = DAT_14cb7bd70;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = DAT_14cb7bd80;
  *(undefined4 *)((longlong)plVar4 + 0x84) = DAT_14cb7bd88;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  *(undefined4 *)(plVar4 + 0x13) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b9a1cf0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145daa6cc(&local_30,plVar1);
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



// FUNCTION 145daa6cc FUN_145daa6cc body=162 status=ok
// SIG undefined FUN_145daa6cc(void)

void FUN_145daa6cc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145daa70b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145daa70b;
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
LAB_145daa70b:
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
                    /* WARNING: Could not recover jumptable at 0x000145daa76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145daa76e FUN_145daa76e body=91 status=ok
// SIG undefined FUN_145daa76e(void)

void FUN_145daa76e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_145daa7d4();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000145daa7c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145daa7ca FUN_145daa7ca body=9 status=ok
// SIG undefined FUN_145daa7ca(void)

void FUN_145daa7ca(longlong param_1)

{
  FUN_14154de72(param_1 + 0x10);
  return;
}



// FUNCTION 145daa7d4 FUN_145daa7d4 body=257 status=ok
// SIG undefined FUN_145daa7d4(void)

void FUN_145daa7d4(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_145daa8d6();
  plVar1 = plVar2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)plVar2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)plVar2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      do {
        FUN_1461c2f32(param_1,*(undefined4 *)(*local_80 + (longlong)iStack_64 * 0xc));
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while (((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1) || (local_80 != plVar2));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145daa8d6 FUN_145daa8d6 body=8 status=ok
// SIG undefined FUN_145daa8d6(void)

longlong FUN_145daa8d6(longlong param_1)

{
  return param_1 + 0xb0;
}



// FUNCTION 145daa8de FUN_145daa8de body=158 status=ok
// SIG undefined FUN_145daa8de(void)

void FUN_145daa8de(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140e06fb1(lVar1);
      if (lVar1 != 0) {
        local_30 = &LAB_140b99ae2;
        local_28 = 0;
        FUN_145daa97e(lVar1 + 0x18,local_20,param_1 + -0x30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daa97e FUN_145daa97e body=254 status=ok
// SIG undefined FUN_145daa97e(void)

undefined8
FUN_145daa97e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b41e020;
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
  *local_48 = &PTR_FUN_14b9b0110;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141180640(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daaa7e FUN_145daaa7e body=230 status=ok
// SIG undefined FUN_145daaa7e(void)

void FUN_145daaa7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145daab66();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca43d48,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145daab66();
  FUN_145daaee6(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daab66 FUN_145daab66 body=258 status=ok
// SIG undefined FUN_145daab66(void)

void FUN_145daab66(void)

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
              0x110) < DAT_14ca43dc8) {
    FUN_144b3d300(&DAT_14ca43dc8);
    if (DAT_14ca43dc8 == -1) {
      FUN_145daac6a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCubeFinalGatherPS";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43d48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb1ee8);
      _Init_thread_footer(&DAT_14ca43dc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daac6a FUN_145daac6a body=226 status=ok
// SIG undefined FUN_145daac6a(void)

longlong * FUN_145daac6a(longlong *param_1)

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
  pcVar13 = FUN_146304310;
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



// FUNCTION 145daad4e FUN_145daad4e body=132 status=ok
// SIG undefined FUN_145daad4e(void)

undefined1 * FUN_145daad4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionEnvironmentColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cd4a8;
}



// FUNCTION 145daadd2 FUN_145daadd2 body=138 status=ok
// SIG undefined FUN_145daadd2(void)

code * FUN_145daadd2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCaptureArrayMips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000009c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145daae5c;
}



// FUNCTION 145daae5c FUN_145daae5c body=138 status=ok
// SIG undefined FUN_145daae5c(void)

code * FUN_145daae5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionEnvironmentColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000009b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145daad4e;
}



// FUNCTION 145daaee6 FUN_145daaee6 body=365 status=ok
// SIG undefined FUN_145daaee6(void)

void FUN_145daaee6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca43d90;
  if (DAT_14ca43d90 != 0) {
    LOCK();
    *(int *)(DAT_14ca43d90 + 8) = *(int *)(DAT_14ca43d90 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca43d48;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2e7120;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dab054 FUN_145dab054 body=244 status=ok
// SIG undefined FUN_145dab054(void)

undefined8 FUN_145dab054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b98b1c0;
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
  *local_38 = &PTR_FUN_14b98b150;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148d9a028;
  FUN_145dab14a(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dab14a FUN_145dab14a body=216 status=ok
// SIG undefined FUN_145dab14a(void)

undefined8 * FUN_145dab14a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dab230 FUN_145dab230 body=24 status=ok
// SIG undefined FUN_145dab230(void)

bool FUN_145dab230(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145dab248 FUN_145dab248 body=244 status=ok
// SIG undefined FUN_145dab248(void)

undefined8 FUN_145dab248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b9db4a0;
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
  *local_38 = &PTR_FUN_14b9db430;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145d1a492;
  FUN_145dab33e(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dab33e FUN_145dab33e body=216 status=ok
// SIG undefined FUN_145dab33e(void)

undefined8 * FUN_145dab33e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dab424 FUN_145dab424 body=24 status=ok
// SIG undefined FUN_145dab424(void)

bool FUN_145dab424(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145dab43c FUN_145dab43c body=169 status=ok
// SIG undefined FUN_145dab43c(void)

bool FUN_145dab43c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dab4e6 FUN_145dab4e6 body=154 status=ok
// SIG undefined FUN_145dab4e6(void)

void FUN_145dab4e6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = param_3 + 0x9d8;
      if (*(char *)(param_3 + 0x178) == '\x03') {
        lVar1 = param_3 + 0x3f0;
      }
      local_30 = FUN_145bf63a2;
      local_28 = 0;
      FUN_145dab582(lVar1,local_20,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dab582 FUN_145dab582 body=254 status=ok
// SIG undefined FUN_145dab582(void)

undefined8
FUN_145dab582(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14abe5a20;
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
  *local_48 = &PTR_FUN_14b96e6b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a58104(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dab682 FUN_145dab682 body=240 status=ok
// SIG undefined FUN_145dab682(void)

undefined8 FUN_145dab682(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,0,0);
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                (*(longlong **)(param_1 + 0x28),0xffffffff,0);
    }
    plVar3 = *(longlong **)(param_1 + 0x28);
    if ((plVar3 != (longlong *)0x0) && (*(char *)(param_1 + 1) != '\x01')) goto LAB_145dab6bf;
  }
  FUN_14154df9a(param_1);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))(*(longlong **)(param_1 + 0x28),0,0);
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (cVar2 == '\0') {
    (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
    plVar3 = *(longlong **)(param_1 + 0x28);
  }
LAB_145dab6bf:
  FUN_14018802a(plVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_145880f72();
  EnterCriticalSection(lpCriticalSection);
  FUN_145dab772(lpCriticalSection + 1,param_1 + 0x18);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}



// FUNCTION 145dab772 FUN_145dab772 body=262 status=ok
// SIG undefined FUN_145dab772(void)

undefined4 FUN_145dab772(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
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
LAB_145dab7e4:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x20);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar8 = 0;
          do {
            uVar5 = *(ushort *)(*plVar3 + lVar8);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(*param_2 + lVar8);
            if (uVar5 == uVar7) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar5)) goto LAB_145dab852;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_145dab852;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_145dab858;
      }
      if (iVar1 + iVar2 == 1) goto LAB_145dab858;
      goto LAB_145dab802;
    }
  }
  return 0;
LAB_145dab852:
  if (uVar5 == uVar7) {
LAB_145dab858:
    FUN_145dab878(param_1);
    return 1;
  }
LAB_145dab802:
  iVar1 = (int)plVar3[3];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_145dab7e4;
}



// FUNCTION 145dab878 FUN_145dab878 body=89 status=ok
// SIG undefined FUN_145dab878(void)

void FUN_145dab878(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145dab8d2();
  return;
}



// FUNCTION 145dab8d2 FUN_145dab8d2 body=51 status=ok
// SIG undefined FUN_145dab8d2(void)

void FUN_145dab8d2(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145dab906(param_1,param_2);
  return;
}



// FUNCTION 145dab906 FUN_145dab906 body=116 status=ok
// SIG undefined FUN_145dab906(void)

void FUN_145dab906(longlong *param_1,int param_2)

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



// FUNCTION 145dab97a FUN_145dab97a body=26 status=ok
// SIG undefined FUN_145dab97a(void)

undefined8 FUN_145dab97a(longlong param_1,undefined8 param_2)

{
  FUN_145dab994(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145dab994 FUN_145dab994 body=422 status=ok
// SIG undefined FUN_145dab994(void)

longlong * FUN_145dab994(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb71d80 != (longlong *)0x0 && DAT_14cb71d88 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb71d80 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb71d80;
    if (DAT_14cb71d88 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145daba65;
  }
  lVar3 = FUN_14001cc68(0x68,0x10);
  FUN_145dabb3c(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3ecdf0;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145daba65;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145daba65;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145dabae0:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145daba5b;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145dabae0;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145daba5b:
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
LAB_145daba65:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145dabb3c FUN_145dabb3c body=214 status=ok
// SIG undefined FUN_145dabb3c(void)

undefined8 * FUN_145dabb3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b3ed780;
  FUN_141067f4a(param_1 + 4);
  param_1[4] = &PTR_FUN_14a1b6cf0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1446efa72(param_1 + 9,0,3,0x10);
  *(undefined4 *)(param_1 + 10) = 3;
  puVar1 = (undefined8 *)param_1[9];
  *puVar1 = &PTR_LAB_149e01f80;
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
  *puVar1 = &PTR_FUN_14b3edf40;
  puVar1[3] = param_1;
  puVar1[4] = FUN_144a24e00;
  *(undefined4 *)(puVar1 + 5) = 0;
  return param_1;
}



// FUNCTION 145dabc12 FUN_145dabc12 body=205 status=ok
// SIG undefined FUN_145dabc12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dabc12(void)

{
  if ((DAT_14c9b7047 & 2) == 0) {
    DAT_14c9b7047 = DAT_14c9b7047 | 2;
    _DAT_14c9b6fe8 = L"FAmbientOcclusionPS";
    _DAT_14c9b7000 = FUN_146826540;
    _DAT_14c9b7008 = FUN_146825d77;
    _DAT_14c9b7010 = FUN_146825fd6;
    _DAT_14c9b7018 = FUN_1407e02ea;
    _DAT_14c9b7020 = FUN_146826273;
    _DAT_14c9b6ff8 = FUN_147134fe8;
    _DAT_14c9b7038 = 0xffffffff000000e0;
    _DAT_14c9b7040 = 8;
    DAT_14c9b7044 = 0;
    _DAT_14c9b7028 = &LAB_147135012;
    FUN_145dabce0();
    FUN_1407e00cc(&DAT_14c9b6fe0);
    return;
  }
  return;
}



// FUNCTION 145dabce0 FUN_145dabce0 body=123 status=ok
// SIG undefined FUN_145dabce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dabce0(void)

{
  _DAT_14c9c00e0 = L"BASE";
  DAT_14c9c010a = 4;
  _DAT_14c9c00e8 = FUN_140b35ae4();
  _DAT_14c9c00f0 = DAT_14c9b6ff0;
  _DAT_14c9c00f8 = &LAB_14682652b;
  DAT_14c9b6ff0 = &DAT_14c9c00e0;
  DAT_14c9b7045 = DAT_14c9b7045 + '\x01';
  _DAT_14c9c0100 = 0x100000000;
  if (*(char *)(_DAT_14c9c00e8 + 100) != '\0') {
    DAT_14c9b7046 = DAT_14c9b7046 + '\x01';
  }
  return;
}



// FUNCTION 145dabd5c FUN_145dabd5c body=226 status=ok
// SIG undefined FUN_145dabd5c(void)

longlong * FUN_145dabd5c(longlong *param_1)

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
  pcVar13 = FUN_1462b8c8e;
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



// FUNCTION 145dabe44 FUN_145dabe44 body=140 status=ok
// SIG undefined FUN_145dabe44(void)

undefined1 * FUN_145dabe44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dabed0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAmbientOcclusionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b8608;
  return &LAB_145dabe40;
}



// FUNCTION 145dabed0 FUN_145dabed0 body=261 status=ok
// SIG undefined FUN_145dabed0(void)

void FUN_145dabed0(void)

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
              0x110) < DAT_14c9b8688) {
    FUN_144b3d300(&DAT_14c9b8688);
    if (DAT_14c9b8688 == -1) {
      FUN_145dac066(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAmbientOcclusionParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x29c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8608,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90901);
      _Init_thread_footer(&DAT_14c9b8688);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dabfd6 FUN_145dabfd6 body=144 status=ok
// SIG undefined FUN_145dabfd6(void)

code * FUN_145dabfd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1c0000002cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dabe44;
}



// FUNCTION 145dac066 FUN_145dac066 body=226 status=ok
// SIG undefined FUN_145dac066(void)

longlong * FUN_145dac066(longlong *param_1)

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
  pcVar13 = FUN_1462b8d16;
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



// FUNCTION 145dac14e FUN_145dac14e body=136 status=ok
// SIG undefined FUN_145dac14e(void)

code * FUN_145dac14e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSAO_NormalsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x198000002a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713ac50;
}



// FUNCTION 145dac1d6 FUN_145dac1d6 body=138 status=ok
// SIG undefined FUN_145dac1d6(void)

code * FUN_145dac1d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSAO_DownsampledAO";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a0000002aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dac14e;
}



// FUNCTION 145dac260 FUN_145dac260 body=40 status=ok
// SIG undefined FUN_145dac260(void)

undefined8 FUN_145dac260(undefined8 param_1,int param_2)

{
  FUN_145dac288();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dac288 FUN_145dac288 body=80 status=ok
// SIG undefined FUN_145dac288(void)

void FUN_145dac288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b43dc90;
  FUN_145dac30e();
  FUN_1458219bc(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145dac2d8(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dac2d8 FUN_145dac2d8 body=53 status=ok
// SIG undefined FUN_145dac2d8(void)

void FUN_145dac2d8(longlong *param_1)

{
  FUN_145dac3a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dac30e FUN_145dac30e body=144 status=ok
// SIG undefined FUN_145dac30e(void)

void FUN_145dac30e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145dac3fa(param_1 + 0x30,&local_38);
  lVar1 = local_38;
  lVar2 = (longlong)(int)uStack_30;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      FUN_1489cb44e(param_1,*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while (lVar2 * 4 != lVar3);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dac3a0 FUN_145dac3a0 body=90 status=ok
// SIG undefined FUN_145dac3a0(void)

void FUN_145dac3a0(longlong param_1)

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



// FUNCTION 145dac3fa FUN_145dac3fa body=751 status=ok
// SIG undefined FUN_145dac3fa(void)

void FUN_145dac3fa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14481578e(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_1400bac10(&local_98,uVar5);
    iVar4 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar4)) {
      local_50 = iVar4;
      FUN_144a56d22();
    }
  }
  iVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    FUN_14481578e(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar2 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar5 = *(uint *)(lVar1 + lVar2 * 0x28);
        puVar3 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar3 = local_60;
        }
        for (iVar4 = *(int *)(puVar3 + (ulonglong)(local_50 - 1U & uVar5) * 4); iVar4 != -1;
            iVar4 = *(int *)(local_98 + (longlong)iVar4 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar4 * 0xc) == uVar5) goto LAB_145dac6b9;
        }
      }
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1446f48e2(param_2,iVar4);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar4 * 4) = *(undefined4 *)(lVar2 * 0x28 + lVar1);
      FUN_1447cbafe(&local_98,&local_b8,(longlong)iStack_c4 * 0x28 + *local_e0,0);
LAB_145dac6b9:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dac6ec FUN_145dac6ec body=135 status=ok
// SIG undefined FUN_145dac6ec(void)

longlong FUN_145dac6ec(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_145dac774();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x24 != 0) goto LAB_145dac739;
  }
  local_30 = param_3;
  FUN_145dac7e8(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145dac739:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x24 + 0x18;
}



// FUNCTION 145dac774 FUN_145dac774 body=115 status=ok
// SIG undefined FUN_145dac774(void)

int FUN_145dac774(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if ((((*(longlong *)(lVar3 + lVar5 * 0x24) == *param_3) &&
             (lVar1 = lVar3 + lVar5 * 0x24, *(longlong *)(lVar1 + 8) == param_3[1])) &&
            (*(int *)(lVar1 + 0x10) == (int)param_3[2])) &&
           (*(char *)(lVar1 + 0x14) == *(char *)((longlong)param_3 + 0x14))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x1c + lVar5 * 0x24);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 145dac7e8 FUN_145dac7e8 body=294 status=ok
// SIG undefined FUN_145dac7e8(void)

undefined4 * FUN_145dac7e8(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145dac976(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = *puVar1;
  local_40[1] = puVar1[1];
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined1 *)((longlong)local_40 + 0x14) = *(undefined1 *)((longlong)puVar1 + 0x14);
  local_40[3] = 0xffffffff00000000;
  cVar2 = FUN_145dac910(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 4) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x1c) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145daca5e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dac910 FUN_145dac910 body=102 status=ok
// SIG undefined FUN_145dac910(void)

undefined8 FUN_145dac910(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_145dac774(), iVar8 != -1)) {
    lVar2 = *param_1;
    lVar9 = (longlong)iVar8;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar3 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar2 + 0x18 + lVar9 * 0x24) = param_3[6];
    *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x24) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x24);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_14611f12a(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 145dac976 FUN_145dac976 body=231 status=ok
// SIG undefined FUN_145dac976(void)

int * FUN_145dac976(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 145daca5e FUN_145daca5e body=447 status=ok
// SIG undefined FUN_145daca5e(void)

void FUN_145daca5e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
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
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x24;
        iVar6 = FUN_140b95084(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x20) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x1c) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
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



// FUNCTION 145dacc1e FUN_145dacc1e body=292 status=ok
// SIG undefined FUN_145dacc1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dacc1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b100) {
    FUN_144b3d300(&DAT_14ca4b100);
    if (DAT_14ca4b100 == -1) {
      FUN_145dace8c();
      FUN_145dacd42();
      FUN_140db5666(&DAT_14ca4b058,0,&DAT_14ca4aff0,L"FHZBBuildPS",L"/Engine/Private/HZB.usf",
                    L"HZBBuildPS",3,2,FUN_1472e1380,FUN_1472e1320,&LAB_1472e131c,&LAB_1472e1318,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca4bae8);
      _DAT_14ca4b058 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430038cd);
      _Init_thread_footer(&DAT_14ca4b100);
    }
  }
  return &DAT_14ca4b058;
}



// FUNCTION 145dacd42 FUN_145dacd42 body=205 status=ok
// SIG undefined FUN_145dacd42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dacd42(void)

{
  if ((DAT_14ca4b057 & 2) == 0) {
    DAT_14ca4b057 = DAT_14ca4b057 | 2;
    _DAT_14ca4aff8 = L"FHZBBuildPS";
    _DAT_14ca4b010 = FUN_146826540;
    _DAT_14ca4b018 = FUN_146825d77;
    _DAT_14ca4b020 = FUN_146825fd6;
    _DAT_14ca4b028 = FUN_1407e02ea;
    _DAT_14ca4b030 = FUN_146826273;
    _DAT_14ca4b008 = FUN_1472e12e8;
    _DAT_14ca4b048 = 0xffffffff000000e0;
    _DAT_14ca4b050 = 8;
    DAT_14ca4b054 = 0;
    _DAT_14ca4b038 = &LAB_1472e1314;
    FUN_145dace10();
    FUN_1407e00cc(&DAT_14ca4aff0);
    return;
  }
  return;
}



// FUNCTION 145dace10 FUN_145dace10 body=123 status=ok
// SIG undefined FUN_145dace10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dace10(void)

{
  _DAT_14ca4c888 = L"BASE";
  DAT_14ca4c8b2 = 4;
  _DAT_14ca4c890 = FUN_140b35ae4();
  _DAT_14ca4c898 = DAT_14ca4b000;
  _DAT_14ca4c8a0 = &LAB_14682652b;
  DAT_14ca4b000 = &DAT_14ca4c888;
  DAT_14ca4b055 = DAT_14ca4b055 + '\x01';
  _DAT_14ca4c8a8 = 0x100000000;
  if (*(char *)(_DAT_14ca4c890 + 100) != '\0') {
    DAT_14ca4b056 = DAT_14ca4b056 + '\x01';
  }
  return;
}



// FUNCTION 145dace8c FUN_145dace8c body=261 status=ok
// SIG undefined FUN_145dace8c(void)

void FUN_145dace8c(void)

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
              0x110) < DAT_14ca4bb68) {
    FUN_144b3d300(&DAT_14ca4bb68);
    if (DAT_14ca4bb68 == -1) {
      FUN_145dacf92(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x2f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4bae8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143021d03);
      _Init_thread_footer(&DAT_14ca4bb68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dacf92 FUN_145dacf92 body=226 status=ok
// SIG undefined FUN_145dacf92(void)

longlong * FUN_145dacf92(longlong *param_1)

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
  pcVar13 = FUN_1463066dc;
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



// FUNCTION 145dad07a FUN_145dad07a body=138 status=ok
// SIG undefined FUN_145dad07a(void)

code * FUN_145dad07a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceMipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dad104;
}



// FUNCTION 145dad104 FUN_145dad104 body=140 status=ok
// SIG undefined FUN_145dad104(void)

undefined1 * FUN_145dad104(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dad190();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Shared";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSharedHZBParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4bb70;
  return &LAB_145dad076;
}



// FUNCTION 145dad190 FUN_145dad190 body=261 status=ok
// SIG undefined FUN_145dad190(void)

void FUN_145dad190(void)

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
              0x110) < DAT_14ca4bbf0) {
    FUN_144b3d300(&DAT_14ca4bbf0);
    if (DAT_14ca4bbf0 == -1) {
      FUN_145dad296(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSharedHZBParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x17;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4bb70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143021d0f);
      _Init_thread_footer(&DAT_14ca4bbf0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dad296 FUN_145dad296 body=226 status=ok
// SIG undefined FUN_145dad296(void)

longlong * FUN_145dad296(longlong *param_1)

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
  pcVar13 = FUN_146306764;
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



// FUNCTION 145dad37e FUN_145dad37e body=138 status=ok
// SIG undefined FUN_145dad37e(void)

code * FUN_145dad37e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputViewportMaxBound";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e3e90;
}



// FUNCTION 145dad408 FUN_145dad408 body=138 status=ok
// SIG undefined FUN_145dad408(void)

code * FUN_145dad408(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e3d7c;
}



// FUNCTION 145dad492 FUN_145dad492 body=258 status=ok
// SIG undefined FUN_145dad492(void)

void FUN_145dad492(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  lVar4 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 200) == 0) {
    lVar4 = param_1 + 0x88;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar3);
      if (lVar2 != 0) {
        FUN_14003821a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_145dad594(param_1 + 0x88);
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar4 = param_1 + 0xd8;
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar3);
      if (lVar2 != 0) {
        FUN_14003821a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_145dad594(param_1 + 0xd8);
  }
                    /* WARNING: Could not recover jumptable at 0x000145dad58d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 145dad594 FUN_145dad594 body=74 status=ok
// SIG undefined FUN_145dad594(void)

void FUN_145dad594(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x40),
              (longlong)*(int *)((longlong)param_1 + 0x48) << 3);
      FUN_1446efa72((longlong)param_1 + 0x40,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 145dad5de FUN_145dad5de body=85 status=ok
// SIG undefined FUN_145dad5de(void)

void FUN_145dad5de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca965c8) {
    FUN_144b3d300(&DAT_14ca965c8);
    if (DAT_14ca965c8 == -1) {
      FUN_14154e3a6();
      _Init_thread_footer(&DAT_14ca965c8);
      return;
    }
  }
  return;
}



// FUNCTION 145dad634 FUN_145dad634 body=292 status=ok
// SIG undefined FUN_145dad634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dad634(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caad0d0) {
    FUN_144b3d300(&DAT_14caad0d0);
    if (DAT_14caad0d0 == -1) {
      FUN_145dad8a2();
      FUN_145dad758();
      FUN_140db5666(&DAT_14caad028,0,&DAT_14caacfc0,L"FCompositePS",
                    L"/Engine/Private/CompositeUIPixelShader.usf",L"Main",3,4,FUN_14750d3b4,
                    FUN_14750d354,&LAB_1463365a8,&LAB_14750d350,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cab04b8);
      _DAT_14caad028 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432bd399);
      _Init_thread_footer(&DAT_14caad0d0);
    }
  }
  return &DAT_14caad028;
}



// FUNCTION 145dad758 FUN_145dad758 body=205 status=ok
// SIG undefined FUN_145dad758(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dad758(void)

{
  if ((DAT_14caad027 & 2) == 0) {
    DAT_14caad027 = DAT_14caad027 | 2;
    _DAT_14caacfc8 = L"FCompositePS";
    _DAT_14caacfe0 = FUN_146826540;
    _DAT_14caacfe8 = FUN_146825d77;
    _DAT_14caacff0 = FUN_146825fd6;
    _DAT_14caacff8 = FUN_1407e02ea;
    _DAT_14caad000 = FUN_146826273;
    _DAT_14caacfd8 = FUN_14750d322;
    _DAT_14caad018 = 0xffffffff000000e0;
    _DAT_14caad020 = 8;
    DAT_14caad024 = 0;
    _DAT_14caad008 = &LAB_14750d34c;
    FUN_145dad826();
    FUN_1407e00cc(&DAT_14caacfc0);
    return;
  }
  return;
}



// FUNCTION 145dad826 FUN_145dad826 body=123 status=ok
// SIG undefined FUN_145dad826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dad826(void)

{
  _DAT_14cab0e18 = L"BASE";
  DAT_14cab0e42 = 4;
  _DAT_14cab0e20 = FUN_140b35ae4();
  _DAT_14cab0e28 = DAT_14caacfd0;
  _DAT_14cab0e30 = &LAB_14682652b;
  DAT_14caacfd0 = &DAT_14cab0e18;
  DAT_14caad025 = DAT_14caad025 + '\x01';
  _DAT_14cab0e38 = 0x100000000;
  if (*(char *)(_DAT_14cab0e20 + 100) != '\0') {
    DAT_14caad026 = DAT_14caad026 + '\x01';
  }
  return;
}



// FUNCTION 145dad8a2 FUN_145dad8a2 body=261 status=ok
// SIG undefined FUN_145dad8a2(void)

void FUN_145dad8a2(void)

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
              0x110) < DAT_14cab0538) {
    FUN_144b3d300(&DAT_14cab0538);
    if (DAT_14cab0538 == -1) {
      FUN_145dad9a8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x25e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab04b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c72bb);
      _Init_thread_footer(&DAT_14cab0538);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dad9a8 FUN_145dad9a8 body=226 status=ok
// SIG undefined FUN_145dad9a8(void)

longlong * FUN_145dad9a8(longlong *param_1)

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
  pcVar13 = FUN_14633732c;
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



// FUNCTION 145dada90 FUN_145dada90 body=138 status=ok
// SIG undefined FUN_145dada90(void)

code * FUN_145dada90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000261;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147511234;
}



// FUNCTION 145dadb1a FUN_145dadb1a body=140 status=ok
// SIG undefined FUN_145dadb1a(void)

undefined1 * FUN_145dadb1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dadba6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCompositeShaderCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cab0540;
  return &LAB_145dada8c;
}



// FUNCTION 145dadba6 FUN_145dadba6 body=261 status=ok
// SIG undefined FUN_145dadba6(void)

void FUN_145dadba6(void)

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
              0x110) < DAT_14cab05c0) {
    FUN_144b3d300(&DAT_14cab05c0);
    if (DAT_14cab05c0 == -1) {
      FUN_145dadcac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCompositeShaderCommonParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x239;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab0540,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c72c7);
      _Init_thread_footer(&DAT_14cab05c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dadcac FUN_145dadcac body=226 status=ok
// SIG undefined FUN_145dadcac(void)

longlong * FUN_145dadcac(longlong *param_1)

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
  pcVar13 = FUN_1463373b4;
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



// FUNCTION 145dadd94 FUN_145dadd94 body=138 status=ok
// SIG undefined FUN_145dadd94(void)

code * FUN_145dadd94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorVisionDeficiencySeverity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000240;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147511348;
}



// FUNCTION 145dade1e FUN_145dade1e body=138 status=ok
// SIG undefined FUN_145dade1e(void)

code * FUN_145dade1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UIWriteMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000023c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14751145c;
}



// FUNCTION 145dadea8 FUN_145dadea8 body=50 status=ok
// SIG undefined FUN_145dadea8(void)

void FUN_145dadea8(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cb0e288;
  if (DAT_14cb0e288 != 0) {
    FUN_145dadeda(DAT_14cb0e288);
    FUN_1400020a8(lVar1);
  }
  DAT_14cb0e288 = 0;
  return;
}



// FUNCTION 145dadeda FUN_145dadeda body=116 status=ok
// SIG undefined FUN_145dadeda(void)

void FUN_145dadeda(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
    plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145dadf4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145dadf4e FUN_145dadf4e body=40 status=ok
// SIG undefined FUN_145dadf4e(void)

undefined8 FUN_145dadf4e(undefined8 param_1,int param_2)

{
  FUN_145dadf76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dadf76 FUN_145dadf76 body=126 status=ok
// SIG undefined FUN_145dadf76(void)

void FUN_145dadf76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abb86f0;
  param_1[5] = &PTR_FUN_14abb90f0;
  param_1[6] = &PTR_LAB_14abb9130;
  param_1[0x55] = &PTR_FUN_14abb9180;
  param_1[0x56] = &PTR_FUN_14abb9200;
  param_1[0x57] = &PTR_FUN_14abb9210;
  param_1[0xc4] = &PTR_FUN_14abb9240;
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145dadff4 FUN_145dadff4 body=40 status=ok
// SIG undefined FUN_145dadff4(void)

undefined8 FUN_145dadff4(undefined8 param_1,int param_2)

{
  FUN_145dae01c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dae01c FUN_145dae01c body=126 status=ok
// SIG undefined FUN_145dae01c(void)

void FUN_145dae01c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aead0a0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_14582b792(param_1 + 0xe);
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dae0a6 FUN_145dae0a6 body=155 status=ok
// SIG undefined FUN_145dae0a6(void)

undefined8 * FUN_145dae0a6(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14aef26d0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x100;
  param_1[0x16] = 0x40a0000040400000;
  *(undefined4 *)(param_1 + 0x17) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_14cb4c9d4;
  *(undefined4 *)(param_1 + 0x18) = DAT_14cb4c9d8;
  *(undefined4 *)((longlong)param_1 + 0xc4) = DAT_14cb4c4b8;
  *(undefined4 *)(param_1 + 0x19) = 0xfff00ff0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 145dae142 FUN_145dae142 body=40 status=ok
// SIG undefined FUN_145dae142(void)

undefined8 FUN_145dae142(undefined8 param_1,int param_2)

{
  FUN_145dae16a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dae16a FUN_145dae16a body=126 status=ok
// SIG undefined FUN_145dae16a(void)

void FUN_145dae16a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af0aba0;
  param_1[5] = &PTR_FUN_14af0ae50;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145dae1f4 FUN_145dae1f4 body=155 status=ok
// SIG undefined FUN_145dae1f4(void)

undefined8 * FUN_145dae1f4(undefined8 *param_1)

{
  FUN_145ce41c8();
  *param_1 = &PTR_FUN_14b58ca80;
  param_1[5] = &PTR_FUN_14b58cf60;
  param_1[0x2d] = &PTR_FUN_14b58cfa0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 2;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  return param_1;
}



// FUNCTION 145dae298 FUN_145dae298 body=158 status=ok
// SIG undefined FUN_145dae298(void)

undefined8 * FUN_145dae298(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b5a2470;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 2;
  *(undefined1 *)((longlong)param_1 + 0x37) = 2;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0x3fe0000000000000;
  param_1[9] = 0x3fe0000000000000;
  param_1[10] = 0x3fe0000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x42c80000;
  memset(param_1 + 0x15,0,0x8c);
  return param_1;
}



// FUNCTION 145dae336 FUN_145dae336 body=29 status=ok
// SIG undefined FUN_145dae336(void)

void FUN_145dae336(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145dae354 FUN_145dae354 body=54 status=ok
// SIG undefined FUN_145dae354(void)

undefined8 * FUN_145dae354(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c6230;
  FUN_1460491bc(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dae38a FUN_145dae38a body=116 status=ok
// SIG undefined FUN_145dae38a(void)

void FUN_145dae38a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145dae400(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1490ef516(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145dae400 FUN_145dae400 body=132 status=ok
// SIG undefined FUN_145dae400(void)

void FUN_145dae400(longlong param_1,int param_2)

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



// FUNCTION 145dae484 FUN_145dae484 body=116 status=ok
// SIG undefined FUN_145dae484(void)

void FUN_145dae484(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145dae4fa(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1490ef5b2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145dae4fa FUN_145dae4fa body=132 status=ok
// SIG undefined FUN_145dae4fa(void)

void FUN_145dae4fa(longlong param_1,int param_2)

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



// FUNCTION 145dae57e FUN_145dae57e body=40 status=ok
// SIG undefined FUN_145dae57e(void)

undefined8 FUN_145dae57e(undefined8 param_1,int param_2)

{
  FUN_145dae5a6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dae5a6 FUN_145dae5a6 body=126 status=ok
// SIG undefined FUN_145dae5a6(void)

void FUN_145dae5a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd94eb0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145dae624 FUN_145dae624 body=287 status=ok
// SIG undefined FUN_145dae624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dae624(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9df350) {
    FUN_144b3d300(&DAT_14c9df350);
    if (DAT_14c9df350 == -1) {
      FUN_145dae744();
      FUN_140db5666(&DAT_14c9df2a8,2,&DAT_14c9df240,L"FRenderLightingCacheWithLiveShadingCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingPipeline.usf"
                    ,L"RenderLightingCacheWithLiveShadingCS",5,0x18,FUN_14719c2a6,FUN_14719c27e,
                    &LAB_142c9b8b4,&LAB_14719c27a,&LAB_14712ac0c,&LAB_14712ac08,0x130,0);
      _DAT_14c9df2a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c9b908);
      _Init_thread_footer(&DAT_14c9df350);
    }
  }
  return &DAT_14c9df2a8;
}



// FUNCTION 145dae744 FUN_145dae744 body=320 status=ok
// SIG undefined FUN_145dae744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dae744(void)

{
  if ((DAT_14c9df2a7 & 2) == 0) {
    DAT_14c9df2a7 = DAT_14c9df2a7 | 2;
    _DAT_14c9df248 = L"FRenderLightingCacheWithLiveShadingCS";
    _DAT_14c9df260 = FUN_146826540;
    _DAT_14c9df268 = FUN_146825d77;
    _DAT_14c9df270 = FUN_146825fd6;
    _DAT_14c9df278 = FUN_1407e02ea;
    _DAT_14c9df280 = FUN_146826273;
    _DAT_14c9df258 = FUN_14719c240;
    _DAT_14c9df298 = 0xffffffff00000130;
    _DAT_14c9df2a0 = 8;
    DAT_14c9df2a4 = 0;
    _DAT_14c9df288 = &LAB_14719c276;
    _DAT_14c9e0e18 = L"ShaderLooseBindings";
    DAT_14c9e0e42 = FUN_140850cc5();
    FUN_145dae884();
    _DAT_14c9e0e20 = &DAT_14c9df1d0;
    _DAT_14c9e0e30 = &LAB_14682652b;
    _DAT_14c9e0e38 = &DAT_100000108;
    _DAT_14c9e0e40 = 0;
    _DAT_14c9e0e28 = DAT_14c9df250;
    DAT_14c9df250 = &DAT_14c9e0e18;
    FUN_145daeca2();
    FUN_1407e00cc(&DAT_14c9df240);
    return;
  }
  return;
}



// FUNCTION 145dae884 FUN_145dae884 body=200 status=ok
// SIG undefined FUN_145dae884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dae884(void)

{
  if ((DAT_14c9df237 & 2) != 0) {
    return;
  }
  DAT_14c9df237 = DAT_14c9df237 | 2;
  _DAT_14c9df1d8 = L"FRenderLightingCacheLooseBindings";
  _DAT_14c9df1f0 = FUN_146826540;
  _DAT_14c9df1f8 = FUN_146825d77;
  _DAT_14c9df200 = FUN_146825fd6;
  _DAT_14c9df208 = FUN_1407e02ea;
  _DAT_14c9df210 = FUN_146826273;
  _DAT_14c9df1e8 = &LAB_14719c226;
  _DAT_14c9df228 = 0xffffffff00000024;
  _DAT_14c9df230 = 2;
  DAT_14c9df234 = 0;
  _DAT_14c9df218 = &LAB_14719c23c;
  FUN_145dae94c();
  FUN_1407e00cc(&DAT_14c9df1d0);
  return;
}



// FUNCTION 145dae94c FUN_145dae94c body=121 status=ok
// SIG undefined FUN_145dae94c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dae94c(void)

{
  FUN_145dae9c6();
  _DAT_14c9e0c68 = L"SceneDepthTextureBinding";
  DAT_14c9e0c92 = FUN_140850cc5();
  _DAT_14c9e0c70 = FUN_140fb78d0();
  _DAT_14c9e0c80 = &LAB_14682652b;
  _DAT_14c9e0c88 = 0x100000000;
  _DAT_14c9e0c90 = 0;
  _DAT_14c9e0c78 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0c68;
  return;
}



// FUNCTION 145dae9c6 FUN_145dae9c6 body=121 status=ok
// SIG undefined FUN_145dae9c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dae9c6(void)

{
  FUN_145daea40();
  _DAT_14c9e0c98 = L"ShadowDepthTextureBinding";
  DAT_14c9e0cc2 = FUN_140850cc5();
  _DAT_14c9e0ca0 = FUN_140fb78d0();
  _DAT_14c9e0cb0 = &LAB_14682652b;
  _DAT_14c9e0cb8 = &DAT_100000004;
  _DAT_14c9e0cc0 = 0;
  _DAT_14c9e0ca8 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0c98;
  return;
}



// FUNCTION 145daea40 FUN_145daea40 body=121 status=ok
// SIG undefined FUN_145daea40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145daea40(void)

{
  FUN_145daeaba();
  _DAT_14c9e0cc8 = L"ShadowDepthTextureSamplerBinding";
  DAT_14c9e0cf2 = FUN_140850cc5();
  _DAT_14c9e0cd0 = FUN_140fb78d0();
  _DAT_14c9e0ce0 = &LAB_14682652b;
  _DAT_14c9e0ce8 = &DAT_100000008;
  _DAT_14c9e0cf0 = 0;
  _DAT_14c9e0cd8 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0cc8;
  return;
}



// FUNCTION 145daeaba FUN_145daeaba body=121 status=ok
// SIG undefined FUN_145daeaba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145daeaba(void)

{
  FUN_145daeb34();
  _DAT_14c9e0cf8 = L"StaticShadowDepthTextureBinding";
  DAT_14c9e0d22 = FUN_140850cc5();
  _DAT_14c9e0d00 = FUN_140fb78d0();
  _DAT_14c9e0d10 = &LAB_14682652b;
  _DAT_14c9e0d18 = &DAT_10000000c;
  _DAT_14c9e0d20 = 0;
  _DAT_14c9e0d08 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0cf8;
  return;
}



// FUNCTION 145daeb34 FUN_145daeb34 body=121 status=ok
// SIG undefined FUN_145daeb34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145daeb34(void)

{
  FUN_145daebae();
  _DAT_14c9e0d28 = L"StaticShadowDepthTextureSamplerBinding";
  DAT_14c9e0d52 = FUN_140850cc5();
  _DAT_14c9e0d30 = FUN_140fb78d0();
  _DAT_14c9e0d40 = &LAB_14682652b;
  _DAT_14c9e0d48 = &DAT_100000010;
  _DAT_14c9e0d50 = 0;
  _DAT_14c9e0d38 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0d28;
  return;
}



// FUNCTION 145daebae FUN_145daebae body=121 status=ok
// SIG undefined FUN_145daebae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145daebae(void)

{
  FUN_145daec28();
  _DAT_14c9e0d58 = L"ShadowDepthCubeTextureBinding";
  DAT_14c9e0d82 = FUN_140850cc5();
  _DAT_14c9e0d60 = FUN_140fb78d0();
  _DAT_14c9e0d70 = &LAB_14682652b;
  _DAT_14c9e0d78 = &DAT_100000014;
  _DAT_14c9e0d80 = 0;
  _DAT_14c9e0d68 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0d58;
  return;
}



// FUNCTION 145daec28 FUN_145daec28 body=121 status=ok
// SIG undefined FUN_145daec28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145daec28(void)

{
  FUN_145daed1e();
  _DAT_14c9e0d88 = L"ShadowDepthCubeTexture2Binding";
  DAT_14c9e0db2 = FUN_140850cc5();
  _DAT_14c9e0d90 = FUN_140fb78d0();
  _DAT_14c9e0da0 = &LAB_14682652b;
  _DAT_14c9e0da8 = &DAT_100000018;
  _DAT_14c9e0db0 = 0;
  _DAT_14c9e0d98 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0d88;
  return;
}



// FUNCTION 145daeca2 FUN_145daeca2 body=123 status=ok
// SIG undefined FUN_145daeca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145daeca2(void)

{
  _DAT_14c9e1b08 = L"BASE";
  DAT_14c9e1b32 = 4;
  _DAT_14c9e1b10 = FUN_141092e92();
  _DAT_14c9e1b18 = DAT_14c9df250;
  _DAT_14c9e1b20 = &LAB_14682652b;
  DAT_14c9df250 = &DAT_14c9e1b08;
  DAT_14c9df2a5 = DAT_14c9df2a5 + '\x01';
  _DAT_14c9e1b28 = 0x100000000;
  if (*(char *)(_DAT_14c9e1b10 + 100) != '\0') {
    DAT_14c9df2a6 = DAT_14c9df2a6 + '\x01';
  }
  return;
}



// FUNCTION 145daed1e FUN_145daed1e body=216 status=ok
// SIG undefined FUN_145daed1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145daed1e(void)

{
  _DAT_14c9e0de8 = L"LightingCacheTextureBinding";
  DAT_14c9e0e12 = FUN_140850cc5();
  _DAT_14c9e0df0 = FUN_140fb78d0();
  _DAT_14c9e0e00 = &LAB_14682652b;
  _DAT_14c9e0e08 = &DAT_100000020;
  _DAT_14c9e0e10 = 0;
  _DAT_14c9e0df8 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0de8;
  _DAT_14c9e0db8 = L"ShadowDepthCubeTextureSamplerBinding";
  DAT_14c9e0de2 = FUN_140850cc5();
  _DAT_14c9e0dc0 = FUN_140fb78d0();
  _DAT_14c9e0dd0 = &LAB_14682652b;
  _DAT_14c9e0dd8 = &DAT_10000001c;
  _DAT_14c9e0de0 = 0;
  _DAT_14c9e0dc8 = DAT_14c9df1e0;
  DAT_14c9df1e0 = &DAT_14c9e0db8;
  return;
}



// FUNCTION 145daedf6 FUN_145daedf6 body=146 status=ok
// SIG undefined FUN_145daedf6(void)

code * FUN_145daedf6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145daee88();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InVF";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsInstanceRawParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cbfa3d0;
  return FUN_1490966ae;
}



// FUNCTION 145daee88 FUN_145daee88 body=261 status=ok
// SIG undefined FUN_145daee88(void)

void FUN_145daee88(void)

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
              0x110) < DAT_14cbfa450) {
    FUN_144b3d300(&DAT_14cbfa450);
    if (DAT_14cbfa450 == -1) {
      FUN_145daef8e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceRawParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x2dd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa3d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444396f5);
      _Init_thread_footer(&DAT_14cbfa450);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daef8e FUN_145daef8e body=226 status=ok
// SIG undefined FUN_145daef8e(void)

longlong * FUN_145daef8e(longlong *param_1)

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
  pcVar13 = FUN_145d4c5d6;
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



// FUNCTION 145daf076 FUN_145daf076 body=138 status=ok
// SIG undefined FUN_145daf076(void)

undefined1 * FUN_145daf076(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2de;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145daf072;
}



// FUNCTION 145daf100 FUN_145daf100 body=144 status=ok
// SIG undefined FUN_145daf100(void)

code * FUN_145daf100(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145daf190();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Resources";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceResourceRawParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x130000002df;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145daf076;
}



// FUNCTION 145daf190 FUN_145daf190 body=268 status=ok
// SIG undefined FUN_145daf190(void)

undefined * FUN_145daf190(void)

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
              0x110) < DAT_14cbfa730) {
    FUN_144b3d300(&DAT_14cbfa730);
    if (DAT_14cbfa730 == -1) {
      FUN_145daf29e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceResourceRawParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x61;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa6b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14443970d);
      _Init_thread_footer(&DAT_14cbfa730);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cbfa6b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145daf29e FUN_145daf29e body=226 status=ok
// SIG undefined FUN_145daf29e(void)

longlong * FUN_145daf29e(longlong *param_1)

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
  pcVar13 = FUN_14667c60a;
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



// FUNCTION 145daf382 FUN_145daf382 body=136 status=ok
// SIG undefined FUN_145daf382(void)

code * FUN_145daf382(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145daf40a;
}



// FUNCTION 145daf40a FUN_145daf40a body=138 status=ok
// SIG undefined FUN_145daf40a(void)

code * FUN_145daf40a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909684c;
}



// FUNCTION 145daf494 FUN_145daf494 body=138 status=ok
// SIG undefined FUN_145daf494(void)

code * FUN_145daf494(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096738;
}



// FUNCTION 145daf526 FUN_145daf526 body=638 status=ok
// SIG undefined FUN_145daf526(void)

void FUN_145daf526(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  longlong *local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_145daf6f9;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14101cf30(*(longlong *)(param_1 + 0x18),&local_88);
  if ((longlong)local_80 == 0) {
    local_80 = 0;
  }
  else {
    lVar9 = (longlong)local_80 << 4;
    plVar7 = local_88;
    do {
      local_c8 = *(undefined8 *)*plVar7;
      plVar3 = (longlong *)((undefined8 *)*plVar7)[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_c0 = (longlong *)0x0;
        cVar4 = FUN_145daf7a6(param_1,*(undefined4 *)(param_2 + 0x5c));
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        plStack_c0 = plVar3;
        cVar4 = FUN_145daf7a6(param_1,*(undefined4 *)(param_2 + 0x5c),&local_c8);
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
      if (cVar4 != '\0') {
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        local_98 = 0;
        FUN_145dafb08(param_1,plVar7,&local_c8);
        uVar6 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_140cb3cca(&local_78,uVar6 & 0xffffffff);
        }
        FUN_14144d64a(lVar8 * 0x38 + local_78,&local_c8);
        FUN_14154e5cc(&local_c8);
      }
      plVar7 = plVar7 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  FUN_14101cee4(local_88,local_80);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = (longlong)(int)uStack_70;
  uVar6 = 0;
  if (lVar9 != 0) {
    if (*(char *)(param_2 + 0x58) == '\0') {
LAB_145daf6a3:
      lVar8 = lVar9 * 0x38 + local_78;
      lVar9 = local_78;
      do {
        FUN_14154e566(param_1,param_2,lVar9);
        lVar9 = lVar9 + 0x38;
      } while (lVar9 != lVar8);
    }
    else {
      FUN_145dafa7a(param_2,0);
      lVar9 = (longlong)(int)uStack_70;
      if (lVar9 != 0) goto LAB_145daf6a3;
    }
    FUN_145dafdaa(param_1,param_2);
    FUN_141163218(param_1,param_2);
    uVar6 = uStack_70 & 0xffffffff;
  }
  FUN_140cb1696(local_78,uVar6);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_145daf6f9:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145daf7a6 FUN_145daf7a6 body=723 status=ok
// SIG undefined FUN_145daf7a6(void)

undefined4 FUN_145daf7a6(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar8 = (longlong *)*param_3;
  if (plVar8 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_145daf8ec;
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&local_70);
  FUN_1446f470e(&local_60,L"SHIFT",1);
  plVar2 = plStack_40;
  plVar5 = plStack_50;
  lVar3 = *param_3;
  plVar8 = (longlong *)param_3[1];
  if (local_70 == local_60) {
    local_48 = lVar3;
    if (plVar8 == (longlong *)0x0) {
      plStack_40 = (longlong *)0x0;
      plVar8 = plStack_40;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          puVar4 = (undefined8 *)*plStack_40;
          plStack_40 = plVar8;
          (*(code *)*puVar4)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar8 = plStack_40;
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            plVar8 = plStack_40;
          }
        }
      }
    }
    plStack_40 = plVar8;
    lVar3 = local_48;
    uVar7 = FUN_140b70546(param_1);
    FUN_140b6e166(&local_70,uVar7,lVar3);
    plVar8 = plStack_50;
    local_58 = local_70;
    local_70 = 0;
    if (local_68 == plStack_50) goto LAB_145daf9c5;
    plStack_50 = local_68;
    plVar5 = plStack_40;
LAB_145daf890:
    plStack_40 = plVar5;
    local_68 = (longlong *)0x0;
    local_70 = 0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_145daf9c5;
    }
  }
  else {
    local_58 = lVar3;
    if (plVar8 == (longlong *)0x0) {
      plStack_50 = (longlong *)0x0;
      plVar8 = plStack_50;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar4 = (undefined8 *)*plStack_50;
          plStack_50 = plVar8;
          (*(code *)*puVar4)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar8 = plStack_50;
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            plVar8 = plStack_50;
          }
        }
      }
    }
    plStack_50 = plVar8;
    lVar3 = local_58;
    uVar7 = FUN_140b70546(param_1);
    FUN_140b6ec10(&local_70,uVar7,lVar3);
    local_48 = local_70;
    local_70 = 0;
    plVar8 = plStack_40;
    plVar5 = local_68;
    if (local_68 != plStack_40) goto LAB_145daf890;
LAB_145daf9c5:
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_68 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_68)(local_68);
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
  uVar6 = FUN_140b7030a(param_1,param_2,&local_58,&local_48);
  plVar8 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_145daf8ec:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 145dafa7a FUN_145dafa7a body=94 status=ok
// SIG undefined FUN_145dafa7a(void)

void FUN_145dafa7a(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_140cb1696(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145dafad8(param_1);
  }
  FUN_14127b1cd(param_1[9],*(undefined4 *)(param_1 + 10));
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    return;
  }
  FUN_1459b6c3c(param_1 + 9,0);
  return;
}



// FUNCTION 145dafad8 FUN_145dafad8 body=48 status=ok
// SIG undefined FUN_145dafad8(void)

void FUN_145dafad8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 145dafb08 FUN_145dafb08 body=672 status=ok
// SIG undefined FUN_145dafb08(void)

void FUN_145dafb08(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  cVar6 = FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb977e0);
  if (cVar6 == '\0') goto LAB_145dafc39;
  uVar4 = *(undefined8 *)*param_2;
  plVar5 = (longlong *)((undefined8 *)*param_2)[1];
  if (plVar5 == (longlong *)0x0) {
    *param_3 = uVar4;
    plVar8 = (longlong *)param_3[1];
    if (plVar8 != (longlong *)0x0) {
      param_3[1] = 0;
LAB_145dafc85:
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145dafcc1:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_3 = uVar4;
    plVar8 = (longlong *)param_3[1];
    if (plVar5 == plVar8) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar8 = plVar5;
        goto joined_r0x000145dafcc1;
      }
    }
    else {
      param_3[1] = plVar5;
      if (plVar8 != (longlong *)0x0) goto LAB_145dafc85;
    }
  }
  iVar3 = (int)uStack_40 + -1;
  if ((int)uStack_40 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_3 + 4,local_48,iVar3);
  uVar7 = FUN_140b70546(param_1);
  FUN_140b6e166(&local_58,uVar7,uVar4);
  plVar8 = local_50;
  if (local_58 != 0) {
    if (local_50 == (longlong *)0x0) {
      param_3[2] = local_58;
      plVar9 = (longlong *)param_3[3];
      if (plVar9 != (longlong *)0x0) {
        param_3[3] = 0;
LAB_145dafcef:
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
        if (plVar8 != (longlong *)0x0) goto LAB_145dafc02;
      }
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      param_3[2] = local_58;
      plVar9 = (longlong *)param_3[3];
      if (local_50 == plVar9) {
        LOCK();
        plVar9 = local_50 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      else {
        param_3[3] = local_50;
        if (plVar9 != (longlong *)0x0) goto LAB_145dafcef;
      }
LAB_145dafc02:
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  }
  *(undefined1 *)((longlong)param_3 + 0x31) = *(undefined1 *)(*param_2 + 0x18);
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_145dafc39:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dafdaa FUN_145dafdaa body=890 status=ok
// SIG undefined FUN_145dafdaa(void)

ulonglong FUN_145dafdaa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar13 = *(longlong *)(param_1 + 0x18);
  if (lVar13 != 0) {
    iVar4 = *(int *)(lVar13 + 0x78);
    if ((longlong)iVar4 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x70);
      lVar11 = 0;
      uVar10 = 0;
      uVar12 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar13 + lVar11) + 0x18) != '\0') {
          uVar12 = 0;
          if ((-1 < (int)uVar10) && ((int)uVar10 < iVar4)) {
            lVar11 = (ulonglong)(uVar10 & 0x7fffffff) * 0x10;
            puVar5 = *(undefined8 **)(lVar13 + lVar11);
            plVar6 = *(longlong **)(lVar13 + 8 + lVar11);
            if (plVar6 == (longlong *)0x0) {
              if (puVar5 == (undefined8 *)0x0) goto LAB_145db007a;
              local_58 = 0;
              uStack_50 = 0;
              local_68 = 0;
              uStack_60 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_48 = 0;
              local_b8 = (longlong *)0x0;
              local_c0 = puVar5;
              FUN_145dafb08(param_1);
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              if (puVar5 == (undefined8 *)0x0) {
                uVar12 = 0;
                goto LAB_145daffd3;
              }
              local_58 = 0;
              uStack_50 = 0;
              local_68 = 0;
              uStack_60 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_48 = 0;
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              local_c0 = puVar5;
              local_b8 = plVar6;
              FUN_145dafb08(param_1);
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar6 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar6 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                }
              }
            }
            local_c0 = (undefined8 *)*puVar5;
            plVar7 = (longlong *)puVar5[1];
            if (plVar7 == (longlong *)0x0) {
              local_b8 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              local_b8 = plVar7;
            }
            cVar8 = FUN_145daf7a6(param_1,*(undefined4 *)((longlong)param_2 + 0x5c),&local_c0);
            plVar2 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar7 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar3 = (int *)((longlong)plVar7 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            if (cVar8 == '\0') {
              local_88 = *puVar5;
              local_80 = puVar5[1];
              if (local_80 != 0) {
                LOCK();
                *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
                UNLOCK();
              }
              cVar8 = FUN_1457931da(param_1,*(undefined4 *)((longlong)param_2 + 0x5c),&local_88);
              if (cVar8 == '\0') {
                uVar12 = 0;
                goto LAB_145daffc4;
              }
            }
            plVar7 = param_2 + 2;
            if ((longlong)(int)param_2[1] == 0) goto LAB_145daff5b;
            lVar13 = *param_2;
            lVar11 = (longlong)(int)param_2[1] * 0x38;
            goto LAB_145daff3e;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((longlong)iVar4 << 4 != lVar11);
      goto LAB_145daffdd;
    }
  }
LAB_145db007a:
  uVar12 = 0;
  goto LAB_145daffdd;
  while( true ) {
    lVar13 = lVar13 + 0x38;
    lVar11 = lVar11 + -0x38;
    if (lVar11 == 0) break;
LAB_145daff3e:
    cVar8 = FUN_1410d3d16(lVar13,plVar7);
    if (cVar8 != '\0') {
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x31) = 0;
      }
      break;
    }
  }
LAB_145daff5b:
  FUN_14144d64a(&local_c0,plVar7);
  FUN_1410d422e(plVar7,&local_78);
  if ((local_c0 == (undefined8 *)0x0) || (*plVar7 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)*local_c0)();
    uVar12 = uVar12 & 0xffffffff;
  }
  if ((local_b0 == (undefined8 *)0x0) || (param_2[4] == 0)) {
    bVar9 = 0;
  }
  else {
    bVar9 = (**(code **)*local_b0)();
  }
  uVar12 = CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 | bVar9) ^ 1;
  FUN_14154e5cc(&local_c0);
LAB_145daffc4:
  FUN_14154e5cc(&local_78);
  if (plVar6 != (longlong *)0x0) {
LAB_145daffd3:
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_145daffdd:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 145db0126 FUN_145db0126 body=270 status=ok
// SIG undefined FUN_145db0126(void)

void FUN_145db0126(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_145db0236(param_1 + 0x3f0,&local_38);
    if ((local_38 != 0) && ((longlong)*(int *)(local_38 + 0x218) != 0)) {
      plVar8 = *(longlong **)(local_38 + 0x210);
      plVar1 = plVar8 + *(int *)(local_38 + 0x218);
      do {
        bVar4 = *(char *)(param_1 + 0x970) - 1;
        if (-1 < (char)bVar4) {
          iVar7 = (uint)bVar4 << 0x18;
          lVar5 = (ulonglong)bVar4 + 1;
          do {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x968) + -8 + lVar5 * 8);
            if ((lVar6 != 0) && (*(longlong *)(*(longlong *)(lVar6 + 8) + 0x1d4) == *plVar8)) {
              FUN_1458cb582(param_1 + 0x968,iVar7 >> 0x18);
              break;
            }
            iVar7 = iVar7 + -0x1000000;
            lVar6 = lVar5 + -1;
            bVar3 = 0 < lVar5;
            lVar5 = lVar6;
          } while (lVar6 != 0 && bVar3);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145db0236 FUN_145db0236 body=172 status=ok
// SIG undefined FUN_145db0236(void)

longlong * FUN_145db0236(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c65c56(param_1,&local_28);
  lVar3 = local_28;
  if (local_28 != 0) {
    uVar5 = FUN_145db02e4();
    cVar4 = FUN_1448093f4(lVar3,uVar5);
    if (cVar4 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_145db0291;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_145db0291:
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db02e4 FUN_145db02e4 body=55 status=ok
// SIG undefined FUN_145db02e4(void)

void FUN_145db02e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbffc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbffc8 = FUN_140002ddd(FUN_146615858,uVar1,L"ShieldStatsContainer");
  }
  return;
}



// FUNCTION 145db0326 FUN_145db0326 body=153 status=ok
// SIG undefined FUN_145db0326(void)

undefined8 * FUN_145db0326(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a699590;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec130) {
    FUN_144b3d300(&DAT_14caec130);
    if (DAT_14caec130 == -1) {
      FUN_14154e640();
      atexit((_func_5014 *)&LAB_14356f5d0);
      _Init_thread_footer(&DAT_14caec130);
    }
  }
  return param_1;
}



// FUNCTION 145db03c0 FUN_145db03c0 body=132 status=ok
// SIG undefined FUN_145db03c0(void)

void FUN_145db03c0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_145db0444(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145db0444 FUN_145db0444 body=89 status=ok
// SIG undefined FUN_145db0444(void)

void FUN_145db0444(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145db049e();
  return;
}



// FUNCTION 145db049e FUN_145db049e body=112 status=ok
// SIG undefined FUN_145db049e(void)

void FUN_145db049e(longlong *param_1,int param_2)

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



// FUNCTION 145db050e FUN_145db050e body=20 status=ok
// SIG undefined FUN_145db050e(void)

undefined1 FUN_145db050e(longlong param_1)

{
  FUN_145db0522(param_1 + 0x18);
  return 1;
}



// FUNCTION 145db0522 FUN_145db0522 body=104 status=ok
// SIG undefined FUN_145db0522(void)

void FUN_145db0522(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  uVar2 = FUN_140032b16(0);
  FUN_145c3cfe0(uVar2,local_28);
  FUN_140c379ae(lVar1 + 8,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db058c FUN_145db058c body=226 status=ok
// SIG undefined FUN_145db058c(void)

longlong * FUN_145db058c(longlong *param_1)

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
  pcVar13 = FUN_1463e9830;
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



// FUNCTION 145db0674 FUN_145db0674 body=132 status=ok
// SIG undefined FUN_145db0674(void)

undefined1 * FUN_145db0674(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameNumber";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145db0670;
}



// FUNCTION 145db06f8 FUN_145db06f8 body=138 status=ok
// SIG undefined FUN_145db06f8(void)

code * FUN_145db06f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSkinPassThroughPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145db0674;
}



// FUNCTION 145db0782 FUN_145db0782 body=325 status=ok
// SIG undefined FUN_145db0782(void)

void FUN_145db0782(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x60 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_145db08c8(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[0xb];
        puVar8 = puVar7 + 0xb;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 145db08c8 FUN_145db08c8 body=94 status=ok
// SIG undefined FUN_145db08c8(void)

void FUN_145db08c8(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_145db0926();
  return;
}



// FUNCTION 145db0926 FUN_145db0926 body=82 status=ok
// SIG undefined FUN_145db0926(void)

void FUN_145db0926(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145e04ddc(lVar1 + lVar2 + 8);
  FUN_145db0978(param_1,param_2);
  return;
}



// FUNCTION 145db0978 FUN_145db0978 body=124 status=ok
// SIG undefined FUN_145db0978(void)

void FUN_145db0978(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 145db09f4 FUN_145db09f4 body=226 status=ok
// SIG undefined FUN_145db09f4(void)

longlong * FUN_145db09f4(longlong *param_1)

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
  pcVar13 = FUN_1464747aa;
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



// FUNCTION 145db0adc FUN_145db0adc body=132 status=ok
// SIG undefined FUN_145db0adc(void)

undefined1 * FUN_145db0adc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145db0ad8;
}


