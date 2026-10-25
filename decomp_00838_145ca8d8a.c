// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ca8d8a FUN_145ca8d8a body=333 status=ok
// SIG undefined FUN_145ca8d8a(void)

void FUN_145ca8d8a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  if (param_2 == 0) {
    if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145ca8fd4(&local_40,&local_30);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = local_40;
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (plVar4 == (longlong *)0x0) goto LAB_145ca8e03;
    *(undefined8 *)(param_1 + 0xb0) = 0;
LAB_145ca8e7c:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145ca8e03;
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
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa8) = local_40;
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (local_38 != plVar4) {
      *(longlong **)(param_1 + 0xb0) = local_38;
      if (plVar4 == (longlong *)0x0) goto LAB_145ca8e03;
      goto LAB_145ca8e7c;
    }
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ca8e03;
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
LAB_145ca8e03:
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 145ca8f50 FUN_145ca8f50 body=132 status=ok
// SIG undefined FUN_145ca8f50(void)

void FUN_145ca8f50(longlong param_1,int param_2)

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



// FUNCTION 145ca8fd4 FUN_145ca8fd4 body=424 status=ok
// SIG undefined FUN_145ca8fd4(void)

longlong * FUN_145ca8fd4(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14001cc68(0xe8,0x10);
  FUN_145ca917e(lVar2,&local_30,*param_2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae8c310;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_30 = 0;
    goto LAB_145ca909a;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_145ca9120:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_145ca9089;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_145ca9120;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_145ca9089:
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
    }
  }
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_145ca909a:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ca917e FUN_145ca917e body=200 status=ok
// SIG undefined FUN_145ca917e(void)

undefined8 * FUN_145ca917e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1458f8842();
  *param_1 = &PTR_FUN_14ae9e120;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14aea0b70;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[0x1a] = puVar1 + 2;
  param_1[0x1b] = puVar1;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return param_1;
}



// FUNCTION 145ca9246 FUN_145ca9246 body=561 status=ok
// SIG undefined FUN_145ca9246(void)

longlong FUN_145ca9246(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  uint local_1e0;
  uint local_1dc;
  longlong local_1d8;
  ulonglong uStack_1d0;
  longlong local_1c0;
  int local_1b8;
  undefined1 local_1b0 [112];
  uint local_140;
  undefined1 local_138 [112];
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_145ca9da6(param_1,&local_1c0);
  if (local_1b8 < 2) {
    *(undefined1 *)(param_2 + 0x70) = 0;
    goto LAB_145ca93bb;
  }
  local_c8 = 0;
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
  uStack_c0 = 0xffffffff00000000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = &DAT_14c872ad8;
  FUN_14105aa76(DAT_14c872ce0,local_1c0,L"DriverDenyList",&local_1d8);
  lVar1 = local_1d8;
  lVar6 = (longlong)(int)uStack_1d0;
  if (lVar6 == 0) {
LAB_145ca938c:
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        puVar4 = *(undefined2 **)(lVar1 + lVar5);
      }
      FUN_145ca97a0(local_138,puVar4);
      local_1dc = 0;
      cVar2 = FUN_145ca952a(local_138,param_1,&local_1dc);
      if ((cVar2 != '\0') && (local_1e0 = local_1dc, local_58 <= local_1dc)) {
        FUN_147406748(local_1b0,local_138);
        local_140 = local_1e0;
        FUN_14740685a(&local_c8);
        local_58 = local_140;
        FUN_145ca9478();
      }
      FUN_145ca9478(local_138);
      lVar5 = lVar5 + 0x10;
    } while (lVar6 * 0x10 != lVar5);
    if ((char)local_88 == (char)uStack_70) goto LAB_145ca938c;
    FUN_147406748(param_2,&local_c8);
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 0x70) = uVar3;
  FUN_1447a1747(local_1d8,uStack_1d0 & 0xffffffff);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145ca9478(&local_c8);
LAB_145ca93bb:
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca9478 FUN_145ca9478 body=71 status=ok
// SIG undefined FUN_145ca9478(void)

void FUN_145ca9478(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  FUN_145ca94c0(param_1);
  return;
}



// FUNCTION 145ca94c0 FUN_145ca94c0 body=106 status=ok
// SIG undefined FUN_145ca94c0(void)

void FUN_145ca94c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((char)param_1[4] == '\x01') {
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
    *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 145ca952a FUN_145ca952a body=371 status=ok
// SIG undefined FUN_145ca952a(void)

ulonglong FUN_145ca952a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x40) != *(char *)(param_1 + 0x58)) &&
     (cVar1 = FUN_145ca969e(), cVar1 != '\0')) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      cVar1 = FUN_145ca9d10(param_2,param_1 + 0x30);
      if (cVar1 != '\0') {
        FUN_145ca9e88(param_2,local_48);
        local_38[0] = 0;
        local_38[1] = 0;
        FUN_145ca9b58(local_38,local_48);
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
        uVar2 = FUN_145caa0d7(local_38,*(undefined4 *)(param_1 + 0x28),param_1 + 0x30);
        uVar3 = (ulonglong)uVar2;
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_145ca9562;
      }
    }
    if (*(char *)(param_1 + 0x58) == '\x01') {
      FUN_1431e5d98(local_38,param_2 + 0x48);
      uVar4 = (undefined7)((ulonglong)param_1 >> 8);
      switch(*(undefined4 *)(param_1 + 0x48)) {
      case 1:
        uVar3 = CONCAT71(uVar4,local_38[0] == *(longlong *)(param_1 + 0x50));
        break;
      case 2:
        uVar3 = CONCAT71(uVar4,local_38[0] != *(longlong *)(param_1 + 0x50));
        break;
      case 3:
        uVar3 = CONCAT71(uVar4,*(longlong *)(param_1 + 0x50) < local_38[0]);
        break;
      case 4:
        uVar3 = CONCAT71(uVar4,*(longlong *)(param_1 + 0x50) <= local_38[0]);
        break;
      case 5:
        uVar3 = CONCAT71(uVar4,local_38[0] < *(longlong *)(param_1 + 0x50));
        break;
      case 6:
        uVar3 = CONCAT71(uVar4,local_38[0] <= *(longlong *)(param_1 + 0x50));
        break;
      default:
        goto switchD_145ca9630_default;
      }
      goto LAB_145ca9562;
    }
  }
switchD_145ca9630_default:
  uVar3 = 0;
LAB_145ca9562:
  if ((local_38[2] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 145ca969e FUN_145ca969e body=256 status=ok
// SIG undefined FUN_145ca969e(void)

ulonglong FUN_145ca969e(longlong *param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_3 = 0;
  if (*(int *)((longlong)param_1 + 0xc) == -1) {
LAB_145ca973b:
    uVar5 = CONCAT71((int7)(unaff_RDI >> 8),1);
    if ((char)param_1[4] != '\x01') goto LAB_145ca9744;
    FUN_140d5ff90(local_40,param_1 + 2,param_2 + 8);
    cVar4 = FUN_140d5fc7a(local_40);
    if (cVar4 != '\0') {
      *param_3 = *param_3 + 1;
      FUN_141701fe8(local_40);
      goto LAB_145ca9744;
    }
    FUN_141701fe8(local_40);
  }
  else {
    iVar3 = (int)param_1[1];
    if (iVar3 == *(int *)(param_2 + 0x60)) {
      if (1 < iVar3) {
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_1 + lVar6);
          uVar7 = (uint)uVar1;
          uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x58) + lVar6);
          unaff_RDI = (ulonglong)uVar2;
          if (uVar1 != uVar2) break;
          if (uVar1 == 0) goto LAB_145ca9735;
LAB_145ca96ff:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar1) < 0x80) {
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          unaff_RDI = (ulonglong)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145ca96ff;
        }
        if (uVar7 != (uint)unaff_RDI) goto LAB_145ca9731;
      }
LAB_145ca9735:
      *param_3 = 1;
      goto LAB_145ca973b;
    }
    if (*(int *)(param_2 + 0x60) + iVar3 == 1) goto LAB_145ca9735;
  }
LAB_145ca9731:
  uVar5 = 0;
LAB_145ca9744:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 145ca97a0 FUN_145ca97a0 body=437 status=ok
// SIG undefined FUN_145ca97a0(void)

longlong FUN_145ca97a0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145ca9a5e();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_98 = 0;
  FUN_14063337c(param_2,L"DriverVersion=",&local_58,1);
  if (1 < (int)uStack_50) {
    FUN_145ca9956(&local_78,&local_58);
    if (&local_78 == (longlong *)(param_1 + 0x28)) {
      if (lStack_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((*(char *)(param_1 + 0x40) == '\x01') && (*(longlong *)(param_1 + 0x30) != 0)) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + 0x28) = (undefined4)local_78;
      *(longlong *)(param_1 + 0x30) = lStack_70;
      *(undefined4 *)(param_1 + 0x38) = local_68;
      *(undefined4 *)(param_1 + 0x3c) = local_64;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
  }
  local_78 = 0;
  lStack_70 = 0;
  local_98 = 0;
  FUN_14063337c(param_2,L"DriverDate=",&local_78,1);
  if (1 < (int)lStack_70) {
    FUN_147406570(&local_88,&local_78);
    *(undefined4 *)(param_1 + 0x48) = local_88;
    *(undefined4 *)(param_1 + 0x4c) = uStack_84;
    *(undefined4 *)(param_1 + 0x50) = uStack_80;
    *(undefined4 *)(param_1 + 0x54) = uStack_7c;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  local_98 = 0;
  FUN_14063337c(param_2,L"Reason=",param_1 + 0x60,1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca9956 FUN_145ca9956 body=145 status=ok
// SIG undefined FUN_145ca9956(void)

undefined4 * FUN_145ca9956(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (*(int *)(param_2 + 1) == 0) {
    local_28 = &DAT_149dfb77a;
  }
  else {
    local_28 = (undefined2 *)*param_2;
  }
  uVar1 = FUN_145ca99e8(&local_28);
  *param_1 = uVar1;
  FUN_140056680(local_38,local_28);
  FUN_145ca9b58(param_1 + 2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca99e8 FUN_145ca99e8 body=117 status=ok
// SIG undefined FUN_145ca99e8(void)

undefined8 FUN_145ca99e8(longlong *param_1)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  psVar2 = (short *)*param_1;
  sVar1 = *psVar2;
  if (sVar1 == 0x3c) {
    *param_1 = (longlong)(psVar2 + 1);
    if (psVar2[1] != 0x3d) {
      return 5;
    }
    uVar4 = 6;
  }
  else {
    uVar3 = 1;
    if (sVar1 == 0x21) {
      uVar4 = 2;
    }
    else if (sVar1 == 0x3e) {
      *param_1 = (longlong)(psVar2 + 1);
      uVar3 = 3;
      uVar4 = 4;
    }
    else {
      if (sVar1 != 0x3d) {
        return 1;
      }
      uVar4 = 1;
    }
    if (psVar2[1] != 0x3d) {
      return uVar3;
    }
  }
  *param_1 = (longlong)(psVar2 + 2);
  return uVar4;
}



// FUNCTION 145ca9a5e FUN_145ca9a5e body=248 status=ok
// SIG undefined FUN_145ca9a5e(void)

longlong * FUN_145ca9a5e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = -0x100000000;
  *(undefined1 *)(param_1 + 4) = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = 0;
  FUN_14063337c(param_2,L"RHI=",&local_48,1);
  if ((&local_48 != param_1) && (1 < (int)uStack_40)) {
    FUN_14034a368(param_1,&local_48);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  FUN_14063337c(param_2,L"AdapterNameRegex=",&local_58,1);
  if (1 < (int)uStack_50) {
    FUN_147406604(param_1 + 2,&local_58);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca9b58 FUN_145ca9b58 body=439 status=ok
// SIG undefined FUN_145ca9b58(void)

void FUN_145ca9b58(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78 [2];
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14480809c(param_1,0);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar5 * 2);
  }
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  while( true ) {
    FUN_140056680(local_78,&DAT_149e0635c);
    local_80 = 0;
    local_88 = 1;
    cVar2 = FUN_1407cdbc6(&local_58,local_78,&local_68,&local_58);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') break;
    pwVar4 = L"";
    if ((int)uStack_60 != 0) {
      pwVar4 = local_68;
    }
    iVar3 = _wtoi(pwVar4);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447808da(param_1,iVar1);
    }
    *(int *)(*param_1 + (longlong)iVar1 * 4) = iVar3;
  }
  pwVar4 = local_58;
  if (local_50 == 0) {
    pwVar4 = L"";
  }
  iVar3 = _wtoi(pwVar4);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(param_1,iVar1);
  }
  *(int *)(*param_1 + (longlong)iVar1 * 4) = iVar3;
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca9d10 FUN_145ca9d10 body=148 status=ok
// SIG undefined FUN_145ca9d10(void)

ulonglong FUN_145ca9d10(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  uint *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  undefined7 uVar4;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*param_1 == 0x8086) {
    FUN_145ca9e88(param_1,local_48);
    local_38 = (uint *)0x0;
    uStack_30 = 0;
    FUN_145ca9b58(&local_38,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = *local_38;
    uVar2 = *(uint *)*param_2;
    if (local_38 != (uint *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = CONCAT71(uVar4,99 < uVar1 != uVar2 < 100);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca9da6 FUN_145ca9da6 body=222 status=ok
// SIG undefined FUN_145ca9da6(void)

undefined8 FUN_145ca9da6(int *param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar1 = *param_1;
  pwVar2 = (wchar_t *)0x0;
  if (iVar1 == 0x10de) {
    pwVar2 = L"GPU_NVIDIA";
  }
  pwVar3 = L"GPU_Intel";
  if (iVar1 != 0x8086) {
    pwVar3 = pwVar2;
  }
  pwVar2 = L"GPU_AMD";
  if (iVar1 != 0x1002) {
    pwVar2 = pwVar3;
  }
  if (pwVar2 != (wchar_t *)0x0) {
    FUN_144a81018(local_138,"Windows");
    FUN_140002266(param_2,L"%s %s",pwVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_158);
}



// FUNCTION 145ca9e88 FUN_145ca9e88 body=236 status=ok
// SIG undefined FUN_145ca9e88(void)

undefined8 * FUN_145ca9e88(int *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (*param_1 == 0x10de) {
    iVar1 = param_1[0xc];
    if (iVar1 == param_1[0x10]) {
      if (1 < iVar1) {
        lVar2 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*(longlong *)(param_1 + 10) + lVar2);
          uVar4 = (ulonglong)uVar3;
          uVar5 = *(ushort *)(*(longlong *)(param_1 + 0xe) + lVar2);
          if (uVar3 != uVar5) break;
          if (uVar3 == 0) goto LAB_145ca9f34;
LAB_145ca9f04:
          lVar2 = lVar2 + 2;
        }
        if ((uVar5 | uVar3) < 0x80) {
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_145ca9f04;
        }
        if (uVar3 != uVar5) goto LAB_145ca9eb4;
      }
    }
    else if (param_1[0x10] + iVar1 != 1) {
LAB_145ca9eb4:
      FUN_145ca9f74(param_2);
      return param_2;
    }
  }
  else {
    if (*param_1 == 0x8086) {
      FUN_145caa2c2(param_2);
      return param_2;
    }
    iVar1 = param_1[0xc];
  }
LAB_145ca9f34:
  *param_2 = 0;
  _Src = *(void **)(param_1 + 10);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 145ca9f74 FUN_145ca9f74 body=352 status=ok
// SIG undefined FUN_145ca9f74(void)

longlong * FUN_145ca9f74(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  if ((int)uVar2 < 6) {
    *param_1 = 0;
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    puVar3 = &DAT_149dfb77a;
    if (iVar1 != 0) {
      puVar3 = (undefined2 *)*param_2;
    }
    FUN_140056680(param_1,puVar3 + ((ulonglong)uVar2 - 6));
    local_38 = 1;
    FUN_140807d8e(param_1,&local_30,&DAT_149e0635c,&DAT_149dfb77a);
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
      local_30 = 0;
      *(undefined4 *)(param_1 + 1) = local_28;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
    }
    FUN_140056680(&local_30,&DAT_149e0635c);
    FUN_140e63652(param_1,3,&local_30);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caa0d7 FUN_145caa0d7 body=491 status=ok
// SIG undefined FUN_145caa0d7(void)

byte FUN_145caa0d7(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_2 == 5) {
    uVar5 = (ulonglong)*(int *)(param_3 + 1);
    if ((longlong)uVar5 < 1) {
      return 0;
    }
    uVar1 = *(uint *)*param_3;
    uVar2 = *(uint *)*param_1;
    if (uVar2 < uVar1) {
      return 1;
    }
    if (uVar1 < uVar2) {
      return 0;
    }
    uVar7 = 1;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6;
      if (uVar5 == uVar6) goto LAB_145caa166;
      uVar1 = ((uint *)*param_3)[uVar6];
      uVar2 = ((uint *)*param_1)[uVar6];
      if (uVar2 < uVar1) {
        uVar7 = 1;
        goto LAB_145caa166;
      }
      uVar7 = uVar6 + 1;
    } while (uVar2 <= uVar1);
    uVar7 = 0;
LAB_145caa166:
    bVar3 = (byte)uVar7;
    bVar8 = uVar6 < uVar5;
    goto LAB_145caa169;
  }
  switch(param_2) {
  case 1:
    bVar3 = FUN_1474066ae(param_1,param_3);
    return bVar3;
  case 2:
    bVar3 = FUN_1474066ae(param_1,param_3);
    return bVar3 ^ 1;
  case 3:
    uVar5 = (ulonglong)*(int *)(param_1 + 1);
    if ((longlong)uVar5 < 1) {
      return 0;
    }
    uVar1 = *(uint *)*param_1;
    uVar2 = *(uint *)*param_3;
    if (uVar2 < uVar1) {
      return 1;
    }
    if (uVar1 < uVar2) {
      return 0;
    }
    uVar7 = 1;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6;
      if (uVar5 == uVar6) goto LAB_145caa2b2;
      uVar1 = ((uint *)*param_1)[uVar6];
      uVar2 = ((uint *)*param_3)[uVar6];
      if (uVar2 < uVar1) goto LAB_145caa2af;
      uVar7 = uVar6 + 1;
    } while (uVar2 <= uVar1);
    break;
  case 4:
    cVar4 = FUN_1474066ae(param_1,param_3);
    if (cVar4 != '\0') {
      return 1;
    }
    uVar5 = (ulonglong)*(int *)(param_1 + 1);
    if ((longlong)uVar5 < 1) {
      return 0;
    }
    uVar1 = *(uint *)*param_1;
    uVar2 = *(uint *)*param_3;
    if (uVar2 < uVar1) {
      return 1;
    }
    if (uVar1 < uVar2) {
      return 0;
    }
    uVar7 = 1;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6;
      if (uVar5 == uVar6) goto LAB_145caa2b2;
      uVar1 = ((uint *)*param_1)[uVar6];
      uVar2 = ((uint *)*param_3)[uVar6];
      if (uVar2 < uVar1) goto LAB_145caa2af;
      uVar7 = uVar6 + 1;
    } while (uVar2 <= uVar1);
    break;
  default:
    return 0;
  case 6:
    cVar4 = FUN_1474066ae(param_1,param_3);
    if (cVar4 != '\0') {
      return 1;
    }
    uVar5 = (ulonglong)*(int *)(param_3 + 1);
    if ((longlong)uVar5 < 1) {
      return 0;
    }
    uVar1 = *(uint *)*param_3;
    uVar2 = *(uint *)*param_1;
    if (uVar2 < uVar1) {
      return 1;
    }
    if (uVar1 < uVar2) {
      return 0;
    }
    uVar7 = 1;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6;
      if (uVar5 == uVar6) goto LAB_145caa2b2;
      uVar1 = ((uint *)*param_3)[uVar6];
      uVar2 = ((uint *)*param_1)[uVar6];
      if (uVar2 < uVar1) goto LAB_145caa2af;
      uVar7 = uVar6 + 1;
    } while (uVar2 <= uVar1);
  }
  uVar7 = 0;
  goto LAB_145caa2b2;
LAB_145caa2af:
  uVar7 = 1;
LAB_145caa2b2:
  bVar3 = (byte)uVar7;
  bVar8 = uVar6 < uVar5;
LAB_145caa169:
  return bVar8 & bVar3;
}



// FUNCTION 145caa2c2 FUN_145caa2c2 body=235 status=ok
// SIG undefined FUN_145caa2c2(void)

undefined8 * FUN_145caa2c2(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  iVar1 = FUN_1447ee042(param_2,&DAT_149e0635c,1,0,0,0xffffffff);
  if ((iVar1 == -1) || (iVar1 = FUN_1447ee042(param_2,&DAT_149e0635c,1,0,0,iVar1 + 1), iVar1 == -1))
  {
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
  }
  else {
    uVar5 = *(int *)(param_2 + 1) - 1;
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
      uVar5 = 0;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    uVar2 = iVar1 + 1U;
    if ((int)uVar5 <= (int)(iVar1 + 1U)) {
      uVar2 = uVar5;
    }
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = 0;
    }
    FUN_14006620a(param_1,puVar4 + uVar3,uVar5 - (int)uVar3);
  }
  return param_1;
}



// FUNCTION 145caa3ae FUN_145caa3ae body=158 status=ok
// SIG undefined FUN_145caa3ae(void)

void FUN_145caa3ae(undefined8 param_1,longlong param_2)

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
  FUN_145caa44e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caa44e FUN_145caa44e body=80 status=ok
// SIG undefined FUN_145caa44e(void)

void FUN_145caa44e(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x4e8))();
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xdf | param_2 << 5;
  FUN_144a62f0c(param_1,param_1[7],0xb);
  FUN_14045627c(param_1,uVar1,1);
  return;
}



// FUNCTION 145caa4aa FUN_145caa4aa body=227 status=ok
// SIG undefined FUN_145caa4aa(void)

undefined8 * FUN_145caa4aa(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a769e70;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"NewTextRenderComponent",1);
  uVar2 = FUN_1411bca8c();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caa58e FUN_145caa58e body=40 status=ok
// SIG undefined FUN_145caa58e(void)

undefined8 FUN_145caa58e(undefined8 param_1,int param_2)

{
  FUN_145caa5b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caa5b6 FUN_145caa5b6 body=199 status=ok
// SIG undefined FUN_145caa5b6(void)

void FUN_145caa5b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b836660;
  param_1[6] = &PTR_FUN_14b836920;
  param_1[7] = &PTR_LAB_14b8369b0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x26);
  FUN_1449db362(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140926446(param_1 + 0x15);
  FUN_1449db362(param_1 + 0x13);
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_140e3eae6(param_1);
  return;
}



// FUNCTION 145caa67e FUN_145caa67e body=183 status=ok
// SIG undefined FUN_145caa67e(void)

void FUN_145caa67e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  GUID local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145caa81a();
  FUN_14151c7bd(&local_38,param_2);
  *(undefined8 *)(param_1 + 0x4cc) = local_38._0_8_;
  *(uchar (*) [8])(param_1 + 0x4d4) = local_38.Data4;
  if (((*(int *)(param_1 + 0x4d0) == 0 && *(int *)(param_1 + 0x4cc) == 0) &&
      *(int *)(param_1 + 0x4d4) == 0) && *(int *)(param_1 + 0x4d8) == 0) {
    local_38.Data1 = 0;
    local_38.Data2 = 0;
    local_38.Data3 = 0;
    local_38.Data4[0] = '\0';
    local_38.Data4[1] = '\0';
    local_38.Data4[2] = '\0';
    local_38.Data4[3] = '\0';
    local_38.Data4[4] = '\0';
    local_38.Data4[5] = '\0';
    local_38.Data4[6] = '\0';
    local_38.Data4[7] = '\0';
    CoCreateGuid(&local_38);
    *(undefined8 *)(param_1 + 0x4cc) = local_38._0_8_;
    *(uchar (*) [8])(param_1 + 0x4d4) = local_38.Data4;
  }
  local_38._0_8_ = *(undefined8 *)(param_1 + 0x4cc);
  local_38.Data4 = *(uchar (*) [8])(param_1 + 0x4d4);
  FUN_145caa736(&DAT_14cb89758,param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caa736 FUN_145caa736 body=226 status=ok
// SIG undefined FUN_145caa736(void)

void FUN_145caa736(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_58 = *param_3;
        uStack_54 = param_3[1];
        uStack_50 = param_3[2];
        uStack_4c = param_3[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,&local_58);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_145caa80a;
          goto LAB_145caa76b;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145caa80a:
    FUN_14474d06a(param_1,0);
  }
LAB_145caa76b:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145caa81a FUN_145caa81a body=245 status=ok
// SIG undefined FUN_145caa81a(void)

void FUN_145caa81a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = DAT_14cb896b8;
  local_58 = DAT_14cb896b0;
  FUN_1448075d0(local_48);
  puVar4 = (undefined8 *)FUN_144a06846(param_2,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar4 != (byte *)0x0) && ((*(byte *)*puVar4 & 3) != 0)) {
    cVar3 = FUN_148931ac0(param_1,puVar4);
    if (cVar3 == '\0') {
      local_68 = 0;
      FUN_1401412e0(puVar4,local_48,0,0);
      FUN_1446dcc2e(param_1 + 0x4b0,local_48);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x4c0) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caa910 FUN_145caa910 body=40 status=ok
// SIG undefined FUN_145caa910(void)

undefined8 FUN_145caa910(undefined8 param_1,int param_2)

{
  FUN_145caa938();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caa938 FUN_145caa938 body=59 status=ok
// SIG undefined FUN_145caa938(void)

void FUN_145caa938(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aafe670;
  if (param_1[0xb] != 0) {
    FUN_14151c906();
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145caa974 FUN_145caa974 body=40 status=ok
// SIG undefined FUN_145caa974(void)

undefined8 FUN_145caa974(undefined8 param_1,int param_2)

{
  FUN_145caa99c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caa99c FUN_145caa99c body=164 status=ok
// SIG undefined FUN_145caa99c(void)

void FUN_145caa99c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a566da0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaa42(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaa78(param_1 + 8);
  FUN_145caaaad(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145caaa42 FUN_145caaa42 body=53 status=ok
// SIG undefined FUN_145caaa42(void)

void FUN_145caaa42(longlong *param_1)

{
  FUN_145caab4a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caaa78 FUN_145caaa78 body=53 status=ok
// SIG undefined FUN_145caaa78(void)

void FUN_145caaa78(longlong *param_1)

{
  FUN_145caaaf0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caaaad FUN_145caaaad body=66 status=ok
// SIG undefined FUN_145caaaad(void)

void FUN_145caaaad(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 145caaaf0 FUN_145caaaf0 body=90 status=ok
// SIG undefined FUN_145caaaf0(void)

void FUN_145caaaf0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 145caab4a FUN_145caab4a body=370 status=ok
// SIG undefined FUN_145caab4a(void)

void FUN_145caab4a(longlong *param_1)

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
      FUN_1477cbc26(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 145caacbe FUN_145caacbe body=40 status=ok
// SIG undefined FUN_145caacbe(void)

undefined8 FUN_145caacbe(undefined8 param_1,int param_2)

{
  FUN_145caace6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caace6 FUN_145caace6 body=432 status=ok
// SIG undefined FUN_145caace6(void)

void FUN_145caace6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6476d0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaf2e(param_1 + 0x4c);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  FUN_144a76fd2(param_1 + 0x45);
  FUN_145caae96(param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaf64(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaf9c(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145caafd4(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaebe(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaef6(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145cab00c(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145caae96 FUN_145caae96 body=40 status=ok
// SIG undefined FUN_145caae96(void)

void FUN_145caae96(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147b9b38a(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 145caaebe FUN_145caaebe body=55 status=ok
// SIG undefined FUN_145caaebe(void)

void FUN_145caaebe(longlong *param_1)

{
  FUN_145cab044(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caaef6 FUN_145caaef6 body=55 status=ok
// SIG undefined FUN_145caaef6(void)

void FUN_145caaef6(longlong *param_1)

{
  FUN_145cab0c0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caaf2e FUN_145caaf2e body=53 status=ok
// SIG undefined FUN_145caaf2e(void)

void FUN_145caaf2e(longlong *param_1)

{
  FUN_145cab13c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caaf64 FUN_145caaf64 body=55 status=ok
// SIG undefined FUN_145caaf64(void)

void FUN_145caaf64(longlong *param_1)

{
  FUN_145cab196(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caaf9c FUN_145caaf9c body=55 status=ok
// SIG undefined FUN_145caaf9c(void)

void FUN_145caaf9c(longlong *param_1)

{
  FUN_145cab394(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caafd4 FUN_145caafd4 body=55 status=ok
// SIG undefined FUN_145caafd4(void)

void FUN_145caafd4(longlong *param_1)

{
  FUN_145cab212(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cab00c FUN_145cab00c body=55 status=ok
// SIG undefined FUN_145cab00c(void)

void FUN_145cab00c(longlong *param_1)

{
  FUN_145cab516(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cab044 FUN_145cab044 body=123 status=ok
// SIG undefined FUN_145cab044(void)

void FUN_145cab044(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145cab0c0 FUN_145cab0c0 body=123 status=ok
// SIG undefined FUN_145cab0c0(void)

void FUN_145cab0c0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145cab13c FUN_145cab13c body=90 status=ok
// SIG undefined FUN_145cab13c(void)

void FUN_145cab13c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145cab196 FUN_145cab196 body=123 status=ok
// SIG undefined FUN_145cab196(void)

void FUN_145cab196(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 145cab212 FUN_145cab212 body=384 status=ok
// SIG undefined FUN_145cab212(void)

void FUN_145cab212(longlong *param_1,int param_2)

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
      FUN_143567f8c(*local_70 + (longlong)iStack_54 * 0xd0 + 0x10);
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
    FUN_1472cec54(param_1,param_2);
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



// FUNCTION 145cab394 FUN_145cab394 body=385 status=ok
// SIG undefined FUN_145cab394(void)

void FUN_145cab394(longlong *param_1,int param_2)

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
      FUN_14356840a(*local_70 + (longlong)iStack_54 * 0x50 + 0x10);
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
    FUN_140e9549c(param_1,param_2);
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



// FUNCTION 145cab516 FUN_145cab516 body=385 status=ok
// SIG undefined FUN_145cab516(void)

void FUN_145cab516(longlong *param_1,int param_2)

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
      FUN_147ba50d2(*local_70 + (longlong)iStack_54 * 0x50 + 0x10);
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
    FUN_140e9549c(param_1,param_2);
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



// FUNCTION 145cab698 FUN_145cab698 body=292 status=ok
// SIG undefined FUN_145cab698(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cab698(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9000) {
    FUN_144b3d300(&DAT_14c9d9000);
    if (DAT_14c9d9000 == -1) {
      FUN_145cab906();
      FUN_145cab7bc();
      FUN_140db5666(&DAT_14c9d8f58,0,&DAT_14c9d8ef0,L"FVisiblityRasterComputePrepareDepthGridCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterCompute.usf",
                    L"PrepareDepthGridCS",5,1,FUN_147184a76,FUN_147184a16,&LAB_1462ca468,
                    &LAB_147184a12,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9dad88);
      _DAT_14c9d8f58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66175);
      _Init_thread_footer(&DAT_14c9d9000);
    }
  }
  return &DAT_14c9d8f58;
}



// FUNCTION 145cab7bc FUN_145cab7bc body=205 status=ok
// SIG undefined FUN_145cab7bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cab7bc(void)

{
  if ((DAT_14c9d8f57 & 2) == 0) {
    DAT_14c9d8f57 = DAT_14c9d8f57 | 2;
    _DAT_14c9d8ef8 = L"FVisiblityRasterComputePrepareDepthGridCS";
    _DAT_14c9d8f10 = FUN_146826540;
    _DAT_14c9d8f18 = FUN_146825d77;
    _DAT_14c9d8f20 = FUN_146825fd6;
    _DAT_14c9d8f28 = FUN_1407e02ea;
    _DAT_14c9d8f30 = FUN_146826273;
    _DAT_14c9d8f08 = FUN_1471849e4;
    _DAT_14c9d8f48 = 0xffffffff000000e0;
    _DAT_14c9d8f50 = 8;
    DAT_14c9d8f54 = 0;
    _DAT_14c9d8f38 = &LAB_147184a0e;
    FUN_145cab88a();
    FUN_1407e00cc(&DAT_14c9d8ef0);
    return;
  }
  return;
}



// FUNCTION 145cab88a FUN_145cab88a body=123 status=ok
// SIG undefined FUN_145cab88a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cab88a(void)

{
  _DAT_14c9dc1e8 = L"BASE";
  DAT_14c9dc212 = 4;
  _DAT_14c9dc1f0 = FUN_140b35ae4();
  _DAT_14c9dc1f8 = DAT_14c9d8f00;
  _DAT_14c9dc200 = &LAB_14682652b;
  DAT_14c9d8f00 = &DAT_14c9dc1e8;
  DAT_14c9d8f55 = DAT_14c9d8f55 + '\x01';
  _DAT_14c9dc208 = 0x100000000;
  if (*(char *)(_DAT_14c9dc1f0 + 100) != '\0') {
    DAT_14c9d8f56 = DAT_14c9d8f56 + '\x01';
  }
  return;
}



// FUNCTION 145cab906 FUN_145cab906 body=261 status=ok
// SIG undefined FUN_145cab906(void)

void FUN_145cab906(void)

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
              0x110) < DAT_14c9dae08) {
    FUN_144b3d300(&DAT_14c9dae08);
    if (DAT_14c9dae08 == -1) {
      FUN_145caba0c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0xc61;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dad88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d45);
      _Init_thread_footer(&DAT_14c9dae08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caba0c FUN_145caba0c body=226 status=ok
// SIG undefined FUN_145caba0c(void)

longlong * FUN_145caba0c(longlong *param_1)

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
  pcVar13 = FUN_1462cce82;
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



// FUNCTION 145cabaf4 FUN_145cabaf4 body=138 status=ok
// SIG undefined FUN_145cabaf4(void)

code * FUN_145cabaf4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTileDepthGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000c64;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718d83a;
}



// FUNCTION 145cabb7e FUN_145cabb7e body=138 status=ok
// SIG undefined FUN_145cabb7e(void)

undefined1 * FUN_145cabb7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cabc08();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRasterComputeCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc62;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9dae10;
  return &LAB_145cabaf0;
}



// FUNCTION 145cabc08 FUN_145cabc08 body=258 status=ok
// SIG undefined FUN_145cabc08(void)

void FUN_145cabc08(void)

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
              0x110) < DAT_14c9dae90) {
    FUN_144b3d300(&DAT_14c9dae90);
    if (DAT_14c9dae90 == -1) {
      FUN_14151ce02(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRasterComputeCommonParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0xc46;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dae10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d51);
      _Init_thread_footer(&DAT_14c9dae90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cabd10 FUN_145cabd10 body=138 status=ok
// SIG undefined FUN_145cabd10(void)

code * FUN_145cabd10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ResolutionMultiplier";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000c49;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718deb2;
}



// FUNCTION 145cabd9a FUN_145cabd9a body=138 status=ok
// SIG undefined FUN_145cabd9a(void)

code * FUN_145cabd9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000c4a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cabd10;
}



// FUNCTION 145cabe24 FUN_145cabe24 body=134 status=ok
// SIG undefined FUN_145cabe24(void)

void FUN_145cabe24(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [608];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  memset(local_298,0,0x260);
  local_38 = param_2;
  local_30 = local_298;
  FUN_145cabeac(param_1 + 0x18,local_24);
  FUN_145cac218(local_298);
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cabeac FUN_145cabeac body=317 status=ok
// SIG undefined FUN_145cabeac(void)

undefined4 * FUN_145cabeac(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cac096(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_145cac66a(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x4d) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (int)((ulonglong)*local_40 >> 0x20) * 0x17 + (int)*local_40;
  cVar3 = FUN_145cabfea(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x26c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x4d) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145cac498(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cabfea FUN_145cabfea body=171 status=ok
// SIG undefined FUN_145cabfea(void)

undefined8 FUN_145cabfea(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x270);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x270) == *param_3) {
          FUN_145cac218((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x268);
          FUN_145a10214(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x268);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145cac096 FUN_145cac096 body=236 status=ok
// SIG undefined FUN_145cac096(void)

int * FUN_145cac096(longlong *param_1,int *param_2)

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
      FUN_145cac182(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x270);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x270) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x270 + *param_1;
  return param_2;
}



// FUNCTION 145cac182 FUN_145cac182 body=149 status=ok
// SIG undefined FUN_145cac182(void)

void FUN_145cac182(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x270,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x270)) {
      uVar5 = uVar4 / 0x270 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x270,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cac218 FUN_145cac218 body=639 status=ok
// SIG undefined FUN_145cac218(void)

void FUN_145cac218(longlong *param_1)

{
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
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 145cac498 FUN_145cac498 body=465 status=ok
// SIG undefined FUN_145cac498(void)

void FUN_145cac498(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x270;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x26c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x268 + lVar7) =
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



// FUNCTION 145cac66a FUN_145cac66a body=1297 status=ok
// SIG undefined FUN_145cac66a(void)

undefined8 * FUN_145cac66a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_2[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x16] = param_2[0x16];
  param_2[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_2[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_2[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1a] = param_2[0x1a];
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_2[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1e] = param_2[0x1e];
  param_2[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  param_2[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x20] = param_2[0x20];
  param_2[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  param_2[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x22] = param_2[0x22];
  param_2[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_2[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x24] = param_2[0x24];
  param_2[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  param_2[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x26] = param_2[0x26];
  param_2[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  param_2[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x28] = param_2[0x28];
  param_2[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  param_2[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2a] = param_2[0x2a];
  param_2[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  param_2[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2c] = param_2[0x2c];
  param_2[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  param_2[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2e] = param_2[0x2e];
  param_2[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  param_2[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x30] = param_2[0x30];
  param_2[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  param_2[0x31] = 0;
  memcpy(param_1 + 0x32,param_2 + 0x32,0xd0);
  return param_1;
}



// FUNCTION 145cacb7c FUN_145cacb7c body=77 status=ok
// SIG undefined FUN_145cacb7c(void)

void FUN_145cacb7c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a8c772(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = FUN_145cacbca(lVar1,param_1 + 0x38);
    if (lVar1 != 0) {
      FUN_140e4d8e8(lVar1,param_1 + 0x40,param_1 + 0x48,*(undefined1 *)(param_1 + 0x98));
      return;
    }
  }
  return;
}



// FUNCTION 145cacbca FUN_145cacbca body=123 status=ok
// SIG undefined FUN_145cacbca(void)

longlong FUN_145cacbca(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    lVar1 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x3a0) == *param_2)) {
        if (plVar2 != (longlong *)0x0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          goto LAB_145cacc23;
        }
        break;
      }
      plVar2 = plVar2 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  lVar3 = 0;
LAB_145cacc23:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  return lVar3;
}



// FUNCTION 145cacc46 FUN_145cacc46 body=54 status=ok
// SIG undefined FUN_145cacc46(void)

void FUN_145cacc46(void)

{
  FUN_145cacc7c();
  if (DAT_14cacdfe0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cacdfc0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cacc7c FUN_145cacc7c body=340 status=ok
// SIG undefined FUN_145cacc7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cacc7c(void)

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
  local_28 = &DAT_14cacdfd0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cacdfe8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cacdfc0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_145cacdd2((longlong)iStack_3c * 0x98 + *local_58);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cacdfc8 = 0;
  if (DAT_14cacdfcc != 0) {
    FUN_140f776e6(&DAT_14cacdfc0,0);
  }
  _DAT_14cacdff0 = 0xffffffff;
  DAT_14cacdfe8 = 0;
  if (0x80 < DAT_14cacdfec) {
    DAT_14cacdfec = 0x80;
    FUN_1446efbd8(&DAT_14cacdfd0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cacdd2 FUN_145cacdd2 body=63 status=ok
// SIG undefined FUN_145cacdd2(void)

void FUN_145cacdd2(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145cace12(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cace12 FUN_145cace12 body=53 status=ok
// SIG undefined FUN_145cace12(void)

void FUN_145cace12(longlong *param_1)

{
  FUN_145cace48();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cace48 FUN_145cace48 body=88 status=ok
// SIG undefined FUN_145cace48(void)

void FUN_145cace48(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 145cacea0 FUN_145cacea0 body=55 status=ok
// SIG undefined FUN_145cacea0(void)

longlong FUN_145cacea0(longlong param_1,int param_2)

{
  FUN_145caced8(param_1 + 0xe0);
  FUN_1400deb62(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caced8 FUN_145caced8 body=162 status=ok
// SIG undefined FUN_145caced8(void)

void FUN_145caced8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8eca0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a53be(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145cacf7a(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a5388(param_1 + 0x1a);
  FUN_145ab7db0(param_1);
  return;
}



// FUNCTION 145cacf7a FUN_145cacf7a body=53 status=ok
// SIG undefined FUN_145cacf7a(void)

void FUN_145cacf7a(longlong *param_1)

{
  FUN_145cacfb0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cacfb0 FUN_145cacfb0 body=90 status=ok
// SIG undefined FUN_145cacfb0(void)

void FUN_145cacfb0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145cad00a FUN_145cad00a body=86 status=ok
// SIG undefined FUN_145cad00a(void)

undefined4 FUN_145cad00a(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0xffffffff;
  cVar1 = (**(code **)(*param_1 + 0x90))();
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = local_14;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cad062 FUN_145cad062 body=33 status=ok
// SIG undefined FUN_145cad062(void)

void FUN_145cad062(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xd8))();
  if (cVar1 != '\0') {
    *param_3 = param_2;
  }
  return;
}



// FUNCTION 145cad084 FUN_145cad084 body=52 status=ok
// SIG undefined FUN_145cad084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cad084(void)

{
  FUN_145cad0b8();
  _DAT_14c9a1370 = 0;
  if (DAT_14c9a1368 != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(&DAT_14c9a1328);
  return;
}



// FUNCTION 145cad0b8 FUN_145cad0b8 body=68 status=ok
// SIG undefined FUN_145cad0b8(void)

void FUN_145cad0b8(void)

{
  FUN_1415455b2();
  DAT_14c9a1380 = 0;
  if (DAT_14c9a1384 != 0) {
    FUN_1447ab16c(&DAT_14c9a1378,0);
  }
  if (DAT_14c9a1378 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cad0fc FUN_145cad0fc body=40 status=ok
// SIG undefined FUN_145cad0fc(void)

undefined8 FUN_145cad0fc(undefined8 param_1,int param_2)

{
  FUN_145cad124();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cad124 FUN_145cad124 body=80 status=ok
// SIG undefined FUN_145cad124(void)

void FUN_145cad124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a411e20;
  param_1[5] = &PTR_FUN_14a4120c0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cad174 FUN_145cad174 body=40 status=ok
// SIG undefined FUN_145cad174(void)

undefined8 FUN_145cad174(undefined8 param_1,int param_2)

{
  FUN_145cad19c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cad19c FUN_145cad19c body=80 status=ok
// SIG undefined FUN_145cad19c(void)

void FUN_145cad19c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a58c230;
  param_1[5] = &PTR_LAB_14a58c4e0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3698e(param_1);
  return;
}



// FUNCTION 145cad1f8 FUN_145cad1f8 body=157 status=ok
// SIG undefined FUN_145cad1f8(void)

undefined8 * FUN_145cad1f8(undefined8 *param_1)

{
  FUN_145cad296();
  *param_1 = &PTR_FUN_14a775300;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}



// FUNCTION 145cad296 FUN_145cad296 body=72 status=ok
// SIG undefined FUN_145cad296(void)

undefined8 * FUN_145cad296(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab24880;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 145cad2ea FUN_145cad2ea body=109 status=ok
// SIG undefined FUN_145cad2ea(void)

undefined8 * FUN_145cad2ea(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a9f3ac0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 2;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  return param_1;
}



// FUNCTION 145cad35c FUN_145cad35c body=115 status=ok
// SIG undefined FUN_145cad35c(void)

void FUN_145cad35c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459cd740(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acdb640;
  puVar1[6] = puVar1[3];
  FUN_144a5dc74(puVar1 + 7);
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  return;
}



// FUNCTION 145cad3d8 FUN_145cad3d8 body=112 status=ok
// SIG undefined FUN_145cad3d8(void)

undefined8 * FUN_145cad3d8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad6f440;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[9] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 145cad448 FUN_145cad448 body=40 status=ok
// SIG undefined FUN_145cad448(void)

undefined8 FUN_145cad448(undefined8 param_1,int param_2)

{
  FUN_145cad470();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cad470 FUN_145cad470 body=200 status=ok
// SIG undefined FUN_145cad470(void)

void FUN_145cad470(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae4e590;
  param_1[5] = &PTR_FUN_14ae4e900;
  FUN_144760e21(param_1[0x71],*(undefined4 *)(param_1 + 0x72));
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x70];
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
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x56] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6a];
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
  FUN_1458dfdc4(param_1);
  return;
}



// FUNCTION 145cad538 FUN_145cad538 body=63 status=ok
// SIG undefined FUN_145cad538(void)

undefined1 FUN_145cad538(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145cad578(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 145cad578 FUN_145cad578 body=177 status=ok
// SIG undefined FUN_145cad578(void)

longlong FUN_145cad578(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1458df92a(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 145cad630 FUN_145cad630 body=55 status=ok
// SIG undefined FUN_145cad630(void)

void FUN_145cad630(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60d70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60d70 = FUN_140002ddd(FUN_1464f00d2,uVar1,L"GbxMomentNodeState_PlayTrick");
  }
  return;
}



// FUNCTION 145cad66e FUN_145cad66e body=55 status=ok
// SIG undefined FUN_145cad66e(void)

void FUN_145cad66e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a38 = FUN_140002ddd(FUN_1464ee538,uVar1,L"GbxMomentNodeSettings_LookAtPlayer");
  }
  return;
}



// FUNCTION 145cad6ae FUN_145cad6ae body=351 status=ok
// SIG undefined FUN_145cad6ae(void)

void FUN_145cad6ae(longlong param_1)

{
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  local_80 = (longlong *)(param_1 + 0xb8);
  local_38 = param_1 + 200;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_58 = local_80;
  local_50 = local_80;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      (**(code **)(**(longlong **)(*local_80 + 8 + (longlong)iStack_64 * 0x20) + 0x148))();
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_1489bdc86(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cad810 FUN_145cad810 body=38 status=ok
// SIG undefined FUN_145cad810(void)

undefined8 FUN_145cad810(undefined8 param_1,int param_2)

{
  FUN_145cad836();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cad836 FUN_145cad836 body=82 status=ok
// SIG undefined FUN_145cad836(void)

void FUN_145cad836(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b906470;
  if (param_1[0x16e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b3782(param_1);
  return;
}



// FUNCTION 145cad892 FUN_145cad892 body=141 status=ok
// SIG undefined FUN_145cad892(void)

void FUN_145cad892(longlong param_1)

{
  FUN_141282245(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1412823f0(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1412823f0(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cad920 FUN_145cad920 body=38 status=ok
// SIG undefined FUN_145cad920(void)

undefined8 FUN_145cad920(undefined8 param_1,int param_2)

{
  FUN_14151cee6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cad946 FUN_145cad946 body=86 status=ok
// SIG undefined FUN_145cad946(void)

void FUN_145cad946(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar2 + 0x30))(plVar2,DAT_14c99d400,param_1 + 0x10);
  FUN_145a225a3(*(undefined8 *)(param_1 + 0x10));
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cad992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145cad99c FUN_145cad99c body=34 status=ok
// SIG undefined FUN_145cad99c(void)

undefined8 FUN_145cad99c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145cad9be FUN_145cad9be body=229 status=ok
// SIG undefined FUN_145cad9be(void)

void FUN_145cad9be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x3e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0xc0));
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
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x2f4) != *(int *)(lVar3 + 0x24)) {
      *(undefined1 *)(lVar4 + 0x2f0) = *(undefined1 *)(lVar3 + 0x20);
      *(undefined4 *)(lVar4 + 0x2f4) = *(undefined4 *)(lVar3 + 0x24);
    }
    puVar5 = *(ushort **)(lVar4 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0xc0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cadaa4 FUN_145cadaa4 body=369 status=ok
// SIG undefined FUN_145cadaa4(void)

void FUN_145cadaa4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar4 = *(longlong *)(local_38 + 0x3e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0xc0));
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
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) goto LAB_145cadb3e;
  if (*(int *)(param_1 + 0x318) != *(int *)(lVar4 + 0x2c)) {
    uVar3 = *(undefined1 *)(lVar4 + 0x28);
    *(undefined1 *)(param_1 + 0x314) = uVar3;
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(lVar4 + 0x2c);
    *(undefined1 *)(lVar5 + 0xc1) = uVar3;
    uVar3 = *(undefined1 *)(param_1 + 0x314);
    *(undefined1 *)(lVar5 + 0xc0) = uVar3;
    *(undefined1 *)(param_1 + 0x31c) = uVar3;
  }
  if (*(int *)(param_1 + 0x308) != *(int *)(lVar4 + 0x58)) {
    lVar7 = *(longlong *)(lVar4 + 0x50);
    *(longlong *)(param_1 + 0x300) = lVar7;
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(lVar4 + 0x58);
    bVar8 = lVar7 != DAT_14cbde978 && lVar7 != DAT_14cbde920;
    if ((bool)*(char *)(lVar5 + 0x2f8) == bVar8) {
      iVar9 = 1;
      if (*(int *)(lVar5 + 0x2fc) != 0) goto LAB_145cadb24;
    }
    else {
      iVar9 = *(int *)(lVar5 + 0x2fc) + 1;
    }
    *(bool *)(lVar5 + 0x2f8) = bVar8;
    *(int *)(lVar5 + 0x2fc) = iVar9;
  }
LAB_145cadb24:
  puVar6 = *(ushort **)(lVar5 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
LAB_145cadb3e:
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0xc0));
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cadc16 FUN_145cadc16 body=160 status=ok
// SIG undefined FUN_145cadc16(void)

void FUN_145cadc16(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x918))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cadcb8 FUN_145cadcb8 body=296 status=ok
// SIG undefined FUN_145cadcb8(void)

undefined8 FUN_145cadcb8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_1 + 0xf0);
  uVar10 = 0x3f800000;
  if (plVar4 != (longlong *)0x0) {
    iVar8 = (int)plVar4[1];
    do {
      uVar10 = 0x3f800000;
      if (iVar8 == 0) goto LAB_145cadd6d;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    lVar5 = *(longlong *)(param_1 + 0xe8);
    uVar10 = 0x3f800000;
    if (lVar5 != 0) {
      FUN_14151e938(lVar5,&local_50);
      plVar6 = local_48;
      plVar2 = local_50;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar10 = 0x3f800000;
      if (plVar2 != (longlong *)0x0) {
        FUN_14151e938(lVar5,&local_50);
        uVar10 = (**(code **)(*local_50 + 0xf8))();
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)local_48 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
      }
    }
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
LAB_145cadd6d:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 145cadde2 FUN_145cadde2 body=1819 status=ok
// SIG undefined FUN_145cadde2(void)

void FUN_145cadde2(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x60) == '\0') {
    local_58 = L"OverviewDesc";
    local_50 = 0xc;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,L"All Lumen view mode tiles overlayed on top");
    local_58 = L"Overview";
    local_50 = 8;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Overview");
    local_80 = 1;
    local_88 = 0;
    FUN_145cae4fe(param_1,L"Overview",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"PerformanceOverviewDesc";
    local_50 = 0x17;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"All Lumen performance view mode tiles overlayed on top");
    local_58 = L"PerformanceOverview";
    local_50 = 0x13;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Performance Overview");
    local_80 = 2;
    local_88 = 0;
    FUN_145cae4fe(param_1,L"PerformanceOverview",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"LumenSceneDesc";
    local_50 = 0xe;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Visualizes Lumen scene representation in a highest possible quality and view distance"
                 );
    local_58 = L"LumenScene";
    local_50 = 10;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Lumen Scene");
    local_80 = 3;
    local_88 = 1;
    FUN_145cae4fe(param_1,L"LumenScene",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"GeometryNormalsDesc";
    local_50 = 0x13;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Visualizes Geometry Normals with current Lumen settings.");
    local_58 = L"GeometryNormals";
    local_50 = 0xf;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Geometry Normals");
    local_80 = 6;
    local_88 = 1;
    FUN_145cae4fe(param_1,L"GeometryNormals",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"ReflectionViewDesc";
    local_50 = 0x12;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Visualizes Lumen scene representation with current reflection settings");
    local_58 = L"ReflectionView";
    local_50 = 0xe;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Reflection View");
    local_80 = 4;
    local_88 = 1;
    FUN_145cae4fe(param_1,L"ReflectionView",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"SurfaceCacheDesc";
    local_50 = 0x10;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Visualizes Lumen Surface Cache. Pink - missing surface cache coverage. Yellow - culled meshes."
                 );
    local_58 = L"SurfaceCache";
    local_50 = 0xc;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Surface Cache");
    local_80 = 5;
    local_88 = 1;
    FUN_145cae4fe(param_1,L"SurfaceCache",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    local_58 = L"DedicatedReflectionRaysDesc";
    local_50 = 0x1b;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,
                  L"Visualizes pixels which require dedicated Lumen reflection rays (pass MaxRoughnessToTrace or MaxRoughnessToTraceForFoliage treshold). Green - foliage. Red - other."
                 );
    local_58 = L"DedicatedReflectionRays";
    local_50 = 0x17;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"FLumenVisualizationData";
    local_50 = 0x17;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Dedicated Reflection Rays");
    local_80 = 7;
    local_88 = 1;
    FUN_145cae4fe(param_1,L"DedicatedReflectionRays",&local_58,local_68);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    FUN_145cae980(param_1);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cae4fe FUN_145cae4fe body=375 status=ok
// SIG undefined FUN_145cae4fe(void)

void FUN_145cae4fe(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_50,param_2,1);
  local_60 = &local_50;
  FUN_145cae676(param_1,&local_44,&local_60);
  lVar1 = *param_1 + (longlong)local_44 * 0x58;
  ppuVar4 = (undefined8 **)(lVar1 + 8);
  FUN_140056680(&local_60,param_2);
  if (ppuVar4 == &local_60) {
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*ppuVar4 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    *ppuVar4 = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar1 + 0x10) = local_58;
    *(undefined4 *)(lVar1 + 0x14) = local_54;
  }
  *(undefined8 *)(lVar1 + 0x18) = local_50;
  plVar2 = (longlong *)*param_3;
  plVar3 = *(longlong **)(lVar1 + 0x20);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x20) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x28) = (int)param_3[1];
  plVar2 = (longlong *)*param_4;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x30) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x38) = (int)param_4[1];
  *(undefined1 *)(lVar1 + 0x40) = param_5;
  *(undefined4 *)(lVar1 + 0x44) = param_6;
  *(undefined1 *)(lVar1 + 0x48) = 1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cae676 FUN_145cae676 body=289 status=ok
// SIG undefined FUN_145cae676(void)

undefined4 * FUN_145cae676(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cae798(param_1,local_40);
  FUN_145cae884(param_3,local_38);
  *(undefined4 *)(local_38 + 10) = 0xffffffff;
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
  uVar1 = *local_38;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_38 + 0x54) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 10) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_14151e95a(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cae798 FUN_145cae798 body=236 status=ok
// SIG undefined FUN_145cae798(void)

int * FUN_145cae798(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 145cae884 FUN_145cae884 body=251 status=ok
// SIG undefined FUN_145cae884(void)

undefined8 * FUN_145cae884(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a5dc74(&plStack_60);
  FUN_144a5dc74(&plStack_50);
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = local_78;
  local_78 = 0;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_70._4_4_;
  uStack_70 = 0;
  param_2[3] = local_68;
  FUN_14023423e(param_2 + 4,&plStack_60);
  FUN_14023423e(param_2 + 6,&plStack_50);
  *(undefined1 *)(param_2 + 9) = (undefined1)local_38;
  param_2[8] = uStack_40;
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x10))();
  }
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x10))();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cae980 FUN_145cae980 body=515 status=ok
// SIG undefined FUN_145cae980(void)

void FUN_145cae980(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      iVar4 = iStack_84;
      lVar3 = *local_a0;
      FUN_140056680(&local_68,&DAT_14a819d6a);
      iVar2 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_78,local_68,iVar2);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar3 = (longlong)iVar4 * 0x58 + lVar3;
      iVar2 = *(int *)(lVar3 + 0x10);
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(&local_78,*(undefined8 *)(lVar3 + 8),iVar4);
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[3]);
  }
  plVar1 = param_1 + 10;
  FUN_14020fad6(plVar1,
                L"When the viewport view-mode is set to \'Lumen Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
               );
  iVar2 = (int)uStack_70 + -1;
  if ((int)uStack_70 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(plVar1,local_78,iVar2);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if ((int)param_1[0xb] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*plVar1;
  }
  local_a8 = 1;
  (**(code **)(*DAT_14c8407a8 + 8))
            (DAT_14c8407a8,L"r.Lumen.Visualize.ViewMode",&DAT_149dfb77a,puVar5);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caeb84 FUN_145caeb84 body=40 status=ok
// SIG undefined FUN_145caeb84(void)

undefined8 FUN_145caeb84(undefined8 param_1,int param_2)

{
  FUN_145caebac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caebac FUN_145caebac body=81 status=ok
// SIG undefined FUN_145caebac(void)

void FUN_145caebac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e736d0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145caec8e(param_1 + 0x19);
  FUN_145caebfe(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145caebfe FUN_145caebfe body=87 status=ok
// SIG undefined FUN_145caebfe(void)

void FUN_145caebfe(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145caec56(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1);
  return;
}



// FUNCTION 145caec56 FUN_145caec56 body=55 status=ok
// SIG undefined FUN_145caec56(void)

void FUN_145caec56(longlong *param_1)

{
  FUN_145caecc4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caec8e FUN_145caec8e body=53 status=ok
// SIG undefined FUN_145caec8e(void)

void FUN_145caec8e(longlong *param_1)

{
  FUN_145caee6a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caecc4 FUN_145caecc4 body=420 status=ok
// SIG undefined FUN_145caecc4(void)

void FUN_145caecc4(longlong *param_1,int param_2)

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
      FUN_140bb2a1a(lVar2 + lVar5 + 8);
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



// FUNCTION 145caee6a FUN_145caee6a body=346 status=ok
// SIG undefined FUN_145caee6a(void)

void FUN_145caee6a(longlong *param_1)

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
      FUN_145caebfe(*local_68 + (longlong)iStack_4c * 0xb0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1467f17ac(param_1,0);
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



// FUNCTION 145caefc6 FUN_145caefc6 body=38 status=ok
// SIG undefined FUN_145caefc6(void)

undefined8 FUN_145caefc6(undefined8 param_1,int param_2)

{
  FUN_145caefec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caefec FUN_145caefec body=109 status=ok
// SIG undefined FUN_145caefec(void)

void FUN_145caefec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b401520;
  param_1[1] = &PTR_FUN_14b401570;
  FUN_14051f380(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &PTR_LAB_14b4019d0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145caf05a(param_1 + 2);
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 145caf05a FUN_145caf05a body=55 status=ok
// SIG undefined FUN_145caf05a(void)

void FUN_145caf05a(longlong *param_1)

{
  FUN_14151eb3e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caf092 FUN_145caf092 body=40 status=ok
// SIG undefined FUN_145caf092(void)

undefined8 FUN_145caf092(undefined8 param_1,int param_2)

{
  FUN_145caf0ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145caf0ba FUN_145caf0ba body=138 status=ok
// SIG undefined FUN_145caf0ba(void)

void FUN_145caf0ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a702f70;
  FUN_145caf144(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145caf144 FUN_145caf144 body=63 status=ok
// SIG undefined FUN_145caf144(void)

void FUN_145caf144(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145caf18e FUN_145caf18e body=229 status=ok
// SIG undefined FUN_145caf18e(void)

undefined8 * FUN_145caf18e(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14b383ab0;
  FUN_144a63cba(param_1 + 0x5a);
  *(undefined4 *)(param_1 + 0x5f) = 1;
  *(undefined4 *)(param_1 + 0x16) = 0xe864aed;
  param_1[0x17] = "inv_aspect";
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"parent",0);
  FUN_1404e49fa(param_1 + 0x5a,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  FUN_1400b22c2(local_58,"Inventory.Aspects");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caf280 FUN_145caf280 body=64 status=ok
// SIG undefined FUN_145caf280(void)

longlong FUN_145caf280(void)

{
  void *_Dst;
  longlong lVar1;
  
  _Dst = (void *)FUN_14001cc68(0xc0);
  memset(_Dst,0,0xc0);
  FUN_145caf2c0(_Dst);
  lVar1 = (longlong)_Dst + 0x10;
  if (_Dst == (void *)0x0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 145caf2c0 FUN_145caf2c0 body=166 status=ok
// SIG undefined FUN_145caf2c0(void)

undefined8 * FUN_145caf2c0(undefined8 *param_1)

{
  FUN_14118b488();
  *param_1 = &PTR_FUN_14befdc40;
  param_1[1] = &PTR_LAB_14befdc70;
  param_1[2] = &PTR_FUN_14befdce0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145caf366 FUN_145caf366 body=411 status=ok
// SIG undefined FUN_145caf366(void)

void FUN_145caf366(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145caf502(local_20,local_24,iVar1 != 0,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caf502 FUN_145caf502 body=10 status=ok
// SIG undefined FUN_145caf502(void)

void FUN_145caf502(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
       (plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) {
      if (((ulonglong)bVar1 != 0) && (cVar2 = (**(code **)(*plVar3 + 0x368))(plVar3), cVar2 != '\0')
         ) {
        if (*(int *)(param_1 + 0xbf0) < 1) {
          return;
        }
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001401e63d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x378))(plVar3,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 145caf514 FUN_145caf514 body=384 status=ok
// SIG undefined FUN_145caf514(void)

undefined8 * FUN_145caf514(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8ccc0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a60;
  uVar1 = DAT_14c8464e8;
  param_1[0x13] = DAT_14c8464e0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x19] = DAT_14c8464f8;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = uVar1;
  param_1[0x21] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[0x26] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x27) = 2;
  param_1[0x25] = &PTR_FUN_14a1a0a20;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x15a) = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2f) = 0x42c80000;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x30] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x33) = 0x447a0000;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 145caf694 FUN_145caf694 body=254 status=ok
// SIG undefined FUN_145caf694(void)

undefined8
FUN_145caf694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b4edcd0;
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
  *local_48 = &PTR_FUN_14b9b8230;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145caf794(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caf794 FUN_145caf794 body=216 status=ok
// SIG undefined FUN_145caf794(void)

undefined8 * FUN_145caf794(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145caf87a FUN_145caf87a body=54 status=ok
// SIG undefined FUN_145caf87a(void)

void FUN_145caf87a(void)

{
  FUN_145caf8e6(&DAT_14cae9a20);
  DAT_14cae9a18 = 0;
  if (DAT_14cae9a10 != 0) {
    FUN_1400020a8();
  }
  FUN_145caf8b0();
  return;
}



// FUNCTION 145caf8b0 FUN_145caf8b0 body=54 status=ok
// SIG undefined FUN_145caf8b0(void)

void FUN_145caf8b0(void)

{
  FUN_145caf966();
  if (DAT_14cae99f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cae99d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caf8e6 FUN_145caf8e6 body=73 status=ok
// SIG undefined FUN_145caf8e6(void)

void FUN_145caf8e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9c3c70;
  FUN_145caf9d0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145caf930(param_1 + 1);
  return;
}



// FUNCTION 145caf930 FUN_145caf930 body=53 status=ok
// SIG undefined FUN_145caf930(void)

void FUN_145caf930(longlong *param_1)

{
  FUN_145cafb0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145caf966 FUN_145caf966 body=106 status=ok
// SIG undefined FUN_145caf966(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145caf966(void)

{
  DAT_14cae99d8 = 0;
  if (DAT_14cae99dc != 0) {
    FUN_1403af08a(&DAT_14cae99d0,0);
  }
  _DAT_14cae9a00 = 0xffffffff;
  DAT_14cae99f8 = 0;
  if (DAT_14cae99fc < 0x81) {
    return;
  }
  DAT_14cae99fc = 0x80;
  FUN_1446efbd8(&DAT_14cae99e0,0);
  return;
}



// FUNCTION 145caf9d0 FUN_145caf9d0 body=234 status=ok
// SIG undefined FUN_145caf9d0(void)

void FUN_145caf9d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [36];
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar6 = DAT_14c846508;
  uVar5 = DAT_14c846500;
  uVar4 = DAT_14c8464f8;
  uVar3 = DAT_14c8464e8;
  local_30 = DAT_14c846508;
  local_40 = DAT_14c8464f8;
  uStack_38 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0xa0) = 0x42b40000;
  local_40._0_4_ = (undefined4)uVar4;
  local_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_38._0_4_ = (undefined4)uVar5;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uStack_44;
  *(undefined4 *)(param_1 + 0xa8) = (undefined4)local_40;
  *(undefined4 *)(param_1 + 0xac) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_38;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  local_40 = uVar4;
  uStack_38 = uVar5;
  FUN_145caface(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar2 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145caface FUN_145caface body=63 status=ok
// SIG undefined FUN_145caface(void)

void FUN_145caface(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145cafb68(param_1);
    FUN_145cafb0e(param_1);
    return;
  }
  FUN_145cafb0e(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147ba6c12(param_1);
  return;
}



// FUNCTION 145cafb0e FUN_145cafb0e body=90 status=ok
// SIG undefined FUN_145cafb0e(void)

void FUN_145cafb0e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 145cafb68 FUN_145cafb68 body=339 status=ok
// SIG undefined FUN_145cafb68(void)

void FUN_145cafb68(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 145cafcbc FUN_145cafcbc body=62 status=ok
// SIG undefined FUN_145cafcbc(void)

void FUN_145cafcbc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145cafcfa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145cafcfa FUN_145cafcfa body=89 status=ok
// SIG undefined FUN_145cafcfa(void)

ulonglong FUN_145cafcfa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145cafd5c FUN_145cafd5c body=143 status=ok
// SIG undefined FUN_145cafd5c(void)

undefined8 * FUN_145cafd5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8cd60;
  uVar1 = DAT_14c9ab028;
  param_1[0x11] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x12) = 2;
  param_1[0x10] = &PTR_FUN_14a1a0a20;
  param_1[0x13] = 0;
  param_1[0x15] = uVar1;
  *(undefined1 *)(param_1 + 0x16) = 2;
  param_1[0x14] = &PTR_FUN_14a1a0a20;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 145cafdec FUN_145cafdec body=169 status=ok
// SIG undefined FUN_145cafdec(void)

bool FUN_145cafdec(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 145cafe96 FUN_145cafe96 body=422 status=ok
// SIG undefined FUN_145cafe96(void)

void FUN_145cafe96(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_98 [40];
  undefined **local_70;
  longlong *local_68;
  longlong local_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (longlong *)*param_2;
  local_60 = param_2[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_70 = &PTR_FUN_14a5af930;
  local_50 = 0;
  uStack_48 = 0;
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar5 = FUN_14151ed84(uVar4,&local_70);
  local_70 = &PTR_FUN_14a5af930;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  if (lVar5 != 0) {
    FUN_1402815f4(param_1,&local_70);
    puVar2 = (undefined8 *)local_70[0x3c];
    AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
    plVar3 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar6 = (int *)((longlong)plVar3 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    iVar7 = *(int *)(lVar5 + 0x394);
    piVar6 = (int *)*puVar2;
    *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 2;
    if ((longlong)*(int *)(puVar2 + 1) != 0) {
      lVar5 = (longlong)*(int *)(puVar2 + 1) * 0xd8;
      do {
        if (*piVar6 == iVar7) {
          if (piVar6 == (int *)0x0) break;
          if ((bool)(char)piVar6[0x33] == (param_3 == 1)) {
            if (piVar6[0x34] != 0) break;
            iVar7 = 1;
          }
          else {
            iVar7 = piVar6[0x34] + 1;
          }
          *(bool *)(piVar6 + 0x33) = param_3 == 1;
          piVar6[0x34] = iVar7;
          *(int *)(puVar2 + 5) = *(int *)(puVar2 + 5) + 1;
          break;
        }
        piVar6 = piVar6 + 0x36;
        lVar5 = lVar5 + -0xd8;
      } while (lVar5 != 0);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb003e FUN_145cb003e body=438 status=ok
// SIG undefined FUN_145cb003e(void)

void FUN_145cb003e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte bVar9;
  bool bVar10;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x6c8))();
  if (cVar2 == '\0') {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(lVar7 + 0x398) != 0) {
    lVar5 = FUN_144a7b4ca();
    lVar7 = *(longlong *)(lVar7 + 0x398);
    if ((((lVar7 != 0) && (lVar5 != 0)) && (lVar1 = *(longlong *)(lVar7 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      FUN_145cb0266(lVar7,0);
    }
  }
  bVar3 = FUN_144729dda(param_1 + 0xac);
  bVar9 = (byte)param_2;
  if ((bVar3 & bVar9) == 0) {
    FUN_145cb020a(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if (bVar9 != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x38);
    if (cVar2 != '\0') {
      uVar6 = FUN_14479d2ce(param_1 + 0x38);
      lVar7 = FUN_140d27a2a(uVar6);
      if ((byte)(*(char *)(lVar7 + 0xb0) - 5U) < 2) {
        uVar4 = FUN_148d7ff02(lVar7);
        bVar10 = 1 < uVar4;
        goto LAB_145cb0109;
      }
    }
  }
  bVar10 = false;
LAB_145cb0109:
  lVar7 = param_1 + 0x38;
  cVar2 = FUN_144729dda(lVar7);
  if (cVar2 != '\0') {
    uVar6 = FUN_14479d2ce(lVar7);
    uVar6 = FUN_140d27a2a(uVar6);
    FUN_145cb01f4(uVar6);
  }
  if (bVar10) {
    FUN_145a08e78(param_1,3,0);
    FUN_146071882(param_1,1);
    uVar6 = FUN_14479d2ce(lVar7);
    FUN_148d30150(uVar6);
  }
  else {
    uVar6 = FUN_144a7ba4c(*(undefined8 *)(param_1 + 0x30));
    lVar7 = FUN_1404960a8(uVar6);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar8 = &PTR_FUN_14b993ef8;
      FUN_14039144e(lVar7,puVar8);
    }
    *(byte *)(param_1 + 0x44) = bVar3 & bVar9;
    FUN_145a08c52(param_1,0,1);
  }
  if (bVar3 != 0 || bVar9 != 1) {
    return;
  }
  FUN_140d27c2e(param_1,0,0);
  return;
}



// FUNCTION 145cb01f4 FUN_145cb01f4 body=22 status=ok
// SIG undefined FUN_145cb01f4(void)

void FUN_145cb01f4(longlong param_1)

{
  if ((byte)(*(char *)(param_1 + 0xb0) - 1U) < 8) {
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  return;
}



// FUNCTION 145cb020a FUN_145cb020a body=91 status=ok
// SIG undefined FUN_145cb020a(void)

void FUN_145cb020a(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadb18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb0266 FUN_145cb0266 body=113 status=ok
// SIG undefined FUN_145cb0266(void)

void FUN_145cb0266(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar2 = FUN_144a7ba4c(lVar2);
      if (lVar2 != 0) {
        lVar1 = FUN_14030d4a0();
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
          *(undefined1 *)(lVar2 + 0x3de) = param_2;
        }
      }
    }
  }
  return;
}



// FUNCTION 145cb02e2 FUN_145cb02e2 body=110 status=ok
// SIG undefined FUN_145cb02e2(void)

undefined8 * FUN_145cb02e2(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140f47896();
  *param_1 = &PTR_FUN_14a39e4a0;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 7) = 0x41200000;
  *(undefined4 *)(param_1 + 8) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x99) = 1;
  lVar1 = FUN_140f477b0();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x9a] = lVar1;
  return param_1;
}



// FUNCTION 145cb035c FUN_145cb035c body=231 status=ok
// SIG undefined FUN_145cb035c(void)

undefined8 * FUN_145cb035c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d6b60;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  param_1[0x12] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe5) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x115) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(byte *)((longlong)param_1 + 0x134) = (*(byte *)((longlong)param_1 + 0x134) & 0xf8) + 1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 4 | 0xf3;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 145cb0443 FUN_145cb0443 body=35 status=ok
// SIG undefined FUN_145cb0443(void)

void FUN_145cb0443(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145cb0466(puVar1,param_1);
  *puVar1 = &PTR_FUN_14af185d0;
  return;
}



// FUNCTION 145cb0466 FUN_145cb0466 body=86 status=ok
// SIG undefined FUN_145cb0466(void)

undefined8 * FUN_145cb0466(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14aef36a0;
  *(undefined4 *)(param_1 + 0x15) = 0x10101;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xad) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0xb1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb3) = 0x1010101;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145cb04bc FUN_145cb04bc body=24 status=ok
// SIG undefined FUN_145cb04bc(void)

void FUN_145cb04bc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cb04d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145cb04d4 FUN_145cb04d4 body=38 status=ok
// SIG undefined FUN_145cb04d4(void)

undefined8 FUN_145cb04d4(undefined8 param_1,int param_2)

{
  FUN_145cb04fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb04fa FUN_145cb04fa body=469 status=ok
// SIG undefined FUN_145cb04fa(void)

void FUN_145cb04fa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3f8ee0;
  param_1[4] = &PTR_FUN_14b3f8f00;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb06d0(param_1 + 0x33);
  plVar3 = (longlong *)param_1[0x32];
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
  plVar3 = (longlong *)param_1[0x30];
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
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb0708(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb0740(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb0778(param_1 + 0x11);
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
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
  FUN_140af926c(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cb06cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145cb06d0 FUN_145cb06d0 body=55 status=ok
// SIG undefined FUN_145cb06d0(void)

void FUN_145cb06d0(longlong *param_1)

{
  FUN_145cb08a4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb0708 FUN_145cb0708 body=55 status=ok
// SIG undefined FUN_145cb0708(void)

void FUN_145cb0708(longlong *param_1)

{
  FUN_145cb0a3e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb0740 FUN_145cb0740 body=55 status=ok
// SIG undefined FUN_145cb0740(void)

void FUN_145cb0740(longlong *param_1)

{
  FUN_145cb07b0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb0778 FUN_145cb0778 body=55 status=ok
// SIG undefined FUN_145cb0778(void)

void FUN_145cb0778(longlong *param_1)

{
  FUN_145cb082a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb07b0 FUN_145cb07b0 body=121 status=ok
// SIG undefined FUN_145cb07b0(void)

void FUN_145cb07b0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 145cb082a FUN_145cb082a body=121 status=ok
// SIG undefined FUN_145cb082a(void)

void FUN_145cb082a(longlong param_1,int param_2)

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



// FUNCTION 145cb08a4 FUN_145cb08a4 body=409 status=ok
// SIG undefined FUN_145cb08a4(void)

void FUN_145cb08a4(longlong *param_1,int param_2)

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



// FUNCTION 145cb0a3e FUN_145cb0a3e body=409 status=ok
// SIG undefined FUN_145cb0a3e(void)

void FUN_145cb0a3e(longlong *param_1,int param_2)

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



// FUNCTION 145cb0bd8 FUN_145cb0bd8 body=40 status=ok
// SIG undefined FUN_145cb0bd8(void)

undefined8 FUN_145cb0bd8(undefined8 param_1,int param_2)

{
  FUN_145cb0c00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb0c00 FUN_145cb0c00 body=81 status=ok
// SIG undefined FUN_145cb0c00(void)

void FUN_145cb0c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4af630;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb0c52 FUN_145cb0c52 body=40 status=ok
// SIG undefined FUN_145cb0c52(void)

undefined8 FUN_145cb0c52(undefined8 param_1,int param_2)

{
  FUN_14151ee08();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb0c7a FUN_145cb0c7a body=38 status=ok
// SIG undefined FUN_145cb0c7a(void)

undefined8 FUN_145cb0c7a(undefined8 param_1,int param_2)

{
  FUN_145cb0ca0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb0ca0 FUN_145cb0ca0 body=83 status=ok
// SIG undefined FUN_145cb0ca0(void)

void FUN_145cb0ca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8d7990;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145cb0cf4 FUN_145cb0cf4 body=66 status=ok
// SIG undefined FUN_145cb0cf4(void)

void FUN_145cb0cf4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1407cbe30();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_145cb0d36();
    FUN_144a2e342(lVar1,param_1 + 0x160,uVar2);
    return;
  }
  return;
}



// FUNCTION 145cb0d36 FUN_145cb0d36 body=55 status=ok
// SIG undefined FUN_145cb0d36(void)

void FUN_145cb0d36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc1d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc1d8 = FUN_140002ddd(FUN_14660a90e,uVar1,L"OakWidgetData_VehicleStatus");
  }
  return;
}



// FUNCTION 145cb0d6e FUN_145cb0d6e body=66 status=ok
// SIG undefined FUN_145cb0d6e(void)

void FUN_145cb0d6e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1407cbe30();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_145cb0db0();
    FUN_144a2e342(lVar1,param_1 + 0x160,uVar2);
    return;
  }
  return;
}



// FUNCTION 145cb0db0 FUN_145cb0db0 body=55 status=ok
// SIG undefined FUN_145cb0db0(void)

void FUN_145cb0db0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc890 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc890 = FUN_140002ddd(FUN_14660b3c0,uVar1,L"OakWidgetData_WeaponWheel");
  }
  return;
}



// FUNCTION 145cb0de8 FUN_145cb0de8 body=38 status=ok
// SIG undefined FUN_145cb0de8(void)

undefined8 FUN_145cb0de8(undefined8 param_1,int param_2)

{
  FUN_14151eed2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb0e16 FUN_145cb0e16 body=113 status=ok
// SIG undefined FUN_145cb0e16(void)

undefined8 * FUN_145cb0e16(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *param_1 = &PTR_FUN_14bbd5270;
  if (DAT_14cc084a8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc084a8 = FUN_140002ddd(FUN_1466d2497,uVar1,L"RigDispatch_GetAnimAttribute");
  }
  param_1[1] = DAT_14cc084a8;
  return param_1;
}



// FUNCTION 145cb0e90 FUN_145cb0e90 body=113 status=ok
// SIG undefined FUN_145cb0e90(void)

undefined8 * FUN_145cb0e90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *param_1 = &PTR_FUN_14bbd5450;
  if (DAT_14cc084c0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc084c0 = FUN_140002ddd(FUN_1466d252d,uVar1,L"RigDispatch_SetAnimAttribute");
  }
  param_1[1] = DAT_14cc084c0;
  return param_1;
}



// FUNCTION 145cb0f0c FUN_145cb0f0c body=110 status=ok
// SIG undefined FUN_145cb0f0c(void)

undefined8 * FUN_145cb0f0c(undefined8 *param_1)

{
  FUN_140d2f8ee();
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14bda5f30;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x10101;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 145cb0f7a FUN_145cb0f7a body=38 status=ok
// SIG undefined FUN_145cb0f7a(void)

undefined8 FUN_145cb0f7a(undefined8 param_1,int param_2)

{
  FUN_145cb0fa0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb0fa0 FUN_145cb0fa0 body=83 status=ok
// SIG undefined FUN_145cb0fa0(void)

void FUN_145cb0fa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be80840;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dd32a(param_1 + 1);
  return;
}



// FUNCTION 145cb0ff4 FUN_145cb0ff4 body=440 status=ok
// SIG undefined FUN_145cb0ff4(void)

void FUN_145cb0ff4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
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
  plVar3 = (longlong *)FUN_145d0c2fa();
  (**(code **)(*plVar3 + 0x1d8))(plVar3,(char)param_1[0x8f]);
  (**(code **)(*param_1 + 0x500))(param_1);
  FUN_145cb1552(param_1 + 5);
  FUN_145cb1256(param_1 + 5,(int)param_1[6] - *(int *)((longlong)param_1 + 0x5c));
  plVar3 = param_1 + 0x90;
  FUN_145cb1486(plVar3);
  FUN_145cb1294(plVar3,(int)param_1[0x91] - *(int *)((longlong)param_1 + 0x4b4));
  plVar1 = param_1 + 0x92;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_1[0x95] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_1[0x95];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar3;
  if ((iStack_44 != iVar4) || (uStack_50 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x20);
      FUN_145cb13a8(lVar2 + 0x178);
      FUN_145cb11be(lVar2 + 0x178,*(int *)(lVar2 + 0x180) - *(int *)(lVar2 + 0x1ac));
      FUN_145cb12da(lVar2 + 0x128);
      FUN_145cb1204(lVar2 + 0x128,*(int *)(lVar2 + 0x130) - *(int *)(lVar2 + 0x15c),1);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar3 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb11be FUN_145cb11be body=70 status=ok
// SIG undefined FUN_145cb11be(void)

void FUN_145cb11be(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14125fc82(param_1);
  return;
}



// FUNCTION 145cb1204 FUN_145cb1204 body=81 status=ok
// SIG undefined FUN_145cb1204(void)

undefined8 FUN_145cb1204(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_14482b9e8(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 145cb1256 FUN_145cb1256 body=62 status=ok
// SIG undefined FUN_145cb1256(void)

void FUN_145cb1256(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145cb1288:
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1479664a8(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145cb1288;
  return;
}



// FUNCTION 145cb1294 FUN_145cb1294 body=70 status=ok
// SIG undefined FUN_145cb1294(void)

void FUN_145cb1294(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1416179de(param_1);
  return;
}



// FUNCTION 145cb12da FUN_145cb12da body=205 status=ok
// SIG undefined FUN_145cb12da(void)

void FUN_145cb12da(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x18);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x18);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x18) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x18);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_144727cd0(param_1,iVar5);
  return;
}



// FUNCTION 145cb13a8 FUN_145cb13a8 body=221 status=ok
// SIG undefined FUN_145cb13a8(void)

void FUN_145cb13a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        iVar5 = (int)uVar7;
        if (iVar3 < iVar5) {
          lVar6 = (longlong)iVar5 * 0x98;
          iVar5 = *(int *)(lVar2 + lVar6);
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x98) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x98) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + (longlong)iVar5 * 0x98);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_140f776e6(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 145cb1486 FUN_145cb1486 body=204 status=ok
// SIG undefined FUN_145cb1486(void)

void FUN_145cb1486(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_1446f4a44(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 145cb1552 FUN_145cb1552 body=205 status=ok
// SIG undefined FUN_145cb1552(void)

void FUN_145cb1552(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        iVar5 = (int)uVar7;
        if (iVar3 < iVar5) {
          lVar6 = (longlong)iVar5 * 0x38;
          iVar5 = *(int *)(lVar2 + lVar6);
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x38) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x38) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + (longlong)iVar5 * 0x38);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_144748838(param_1,iVar5);
  return;
}



// FUNCTION 145cb1620 FUN_145cb1620 body=39 status=ok
// SIG undefined FUN_145cb1620(void)

undefined8 FUN_145cb1620(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x20))
            (param_2,param_3,param_4,*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc));
  return 1;
}



// FUNCTION 145cb1647 FUN_145cb1647 body=897 status=ok
// SIG undefined FUN_145cb1647(void)

void FUN_145cb1647(char *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_d8 [44];
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  int local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar6 = FUN_144729dda(&stack0x00000028);
  if (cVar6 != '\0') {
    uVar8 = FUN_14479d2ce(&stack0x00000028);
    if (*param_1 == '\x01') {
      FUN_1447a97f4(&local_70,param_1 + 0x10);
      if (0 < local_6c) {
        iVar14 = 0;
        do {
          FUN_144a7c8fe(&local_70,local_7c,iVar14,1);
          if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                ((FUN_144a7c8fe(&local_70,local_88,iVar14,1), local_88[0] == DAT_14cb7bec8 &&
                 (local_80 == DAT_14cb7bed0)))) ||
               ((FUN_144a7c8fe(&local_70,local_94,iVar14,1), local_94[0] == DAT_14cb7bee0 &&
                (local_8c == DAT_14cb7bee8)))) ||
              ((FUN_144a7c8fe(&local_70,local_a0,iVar14,1), local_a0[0] == DAT_14cb7bef8 &&
               (local_98 == DAT_14cb7bf00)))) ||
             ((FUN_144a7c8fe(&local_70,local_ac,iVar14,1), local_ac[0] == DAT_14cb7bf10 &&
              (local_a4 == DAT_14cb7bf18)))) {
            FUN_1402b5374(&local_70,iVar14,0);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < local_6c);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_70 = *(int *)(param_1 + 0x10);
    }
    if (DAT_14cb7bf98 != DAT_14cb7bfc4) {
      uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      uVar7 = (uVar7 >> 2) + param_4 + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7;
      uVar7 = local_70 + (uVar7 >> 2) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7;
      puVar10 = &DAT_14cb7bfc8;
      if (DAT_14cb7bfd0 != (undefined *)0x0) {
        puVar10 = DAT_14cb7bfd0;
      }
      iVar14 = *(int *)(puVar10 + (ulonglong)(DAT_14cb7bfd8 - 1U & uVar7) * 4);
      while (iVar14 != -1) {
        lVar1 = DAT_14cb7bf90 + (longlong)iVar14 * 0x20;
        if (*(uint *)(DAT_14cb7bf90 + (longlong)iVar14 * 0x20) == uVar7) {
          if ((lVar1 != 0) && (plVar12 = (longlong *)(lVar1 + 8), plVar12 != (longlong *)0x0)) {
            uVar8 = (ulonglong)*(int *)(lVar1 + 0x10);
            if (0 < (longlong)uVar8) {
              iVar14 = -*(int *)(lVar1 + 0x10);
              lVar11 = uVar8 * 8;
              do {
                lVar11 = lVar11 + -8;
                lVar9 = *plVar12;
                cVar6 = FUN_144729dda(lVar9 + lVar11);
                if (cVar6 == '\0') {
                  uVar7 = *(uint *)(lVar1 + 0x10);
                  if (uVar8 != uVar7) {
                    iVar13 = 1;
                    if ((int)(uVar7 + iVar14) < 1) {
                      iVar13 = uVar7 + iVar14;
                    }
                    memmove((void *)(*(longlong *)(lVar1 + 8) + uVar8 * 8 + -8),
                            (void *)(*(longlong *)(lVar1 + 8) + (longlong)(int)(uVar7 - iVar13) * 8)
                            ,(longlong)iVar13 << 3);
                    uVar7 = *(uint *)(lVar1 + 0x10);
                  }
                  *(uint *)(lVar1 + 0x10) = uVar7 - 1;
                  FUN_14580d3a6(plVar12);
                }
                else {
                  lVar9 = FUN_14479d2ce(lVar9 + lVar11);
                  FUN_14493b798(param_1,lVar9 + 0x38);
                  uVar3 = *(undefined4 *)(param_1 + 0x3c);
                  uVar4 = *(undefined4 *)(param_1 + 0x40);
                  uVar5 = *(undefined4 *)(param_1 + 0x44);
                  *(undefined4 *)(lVar9 + 0x70) = *(undefined4 *)(param_1 + 0x38);
                  *(undefined4 *)(lVar9 + 0x74) = uVar3;
                  *(undefined4 *)(lVar9 + 0x78) = uVar4;
                  *(undefined4 *)(lVar9 + 0x7c) = uVar5;
                  FUN_145cb19c9(lVar9 + 0x28,lVar9);
                }
                iVar14 = iVar14 + 1;
                bVar2 = 1 < uVar8;
                uVar8 = uVar8 - 1;
              } while (bVar2);
            }
          }
          break;
        }
        iVar14 = *(int *)(lVar1 + 0x18);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb19c9 FUN_145cb19c9 body=62 status=ok
// SIG undefined FUN_145cb19c9(void)

void FUN_145cb19c9(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb1a10 FUN_145cb1a10 body=246 status=ok
// SIG undefined FUN_145cb1a10(void)

undefined8 * FUN_145cb1a10(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aed5030;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_145cb1b08(param_1 + 0x16);
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1446ddc76(&local_38,"InputBehaviors",1);
  local_40 = 0;
  local_48 = 0;
  lVar1 = FUN_140fe6954(param_1,local_38,0,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[7] = lVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb1b08 FUN_145cb1b08 body=220 status=ok
// SIG undefined FUN_145cb1b08(void)

undefined8 * FUN_145cb1b08(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_145cb1fac(param_1 + 1);
  FUN_145cb1c40(param_1 + 5);
  *param_1 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_145cb1fac(&local_e8);
  FUN_1413a4742(param_1 + 1,&local_e8);
  plVar3 = local_d8;
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_d0;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_145cb1c40(&local_e8);
  FUN_145cb1be6(param_1 + 5,&local_e8);
  FUN_145c1547e(&local_e8);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb1be6 FUN_145cb1be6 body=89 status=ok
// SIG undefined FUN_145cb1be6(void)

longlong FUN_145cb1be6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1413a4742();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1413a4742(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_1413a4742(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  puVar2 = (undefined8 *)(param_2 + 0x60);
  puVar3 = (undefined8 *)(param_1 + 0x60);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 145cb1c40 FUN_145cb1c40 body=875 status=ok
// SIG undefined FUN_145cb1c40(void)

/* WARNING: Removing unreachable block (ram,0x000145cb1ee6) */
/* WARNING: Removing unreachable block (ram,0x000145cb1ef1) */
/* WARNING: Removing unreachable block (ram,0x000145cb1f04) */
/* WARNING: Removing unreachable block (ram,0x000145cb1e72) */
/* WARNING: Removing unreachable block (ram,0x000145cb1e7d) */
/* WARNING: Removing unreachable block (ram,0x000145cb1e90) */
/* WARNING: Removing unreachable block (ram,0x000145cb1f58) */
/* WARNING: Removing unreachable block (ram,0x000145cb1f62) */
/* WARNING: Removing unreachable block (ram,0x000145cb1f74) */

longlong FUN_145cb1c40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cb1fac();
  FUN_145cb1fac(param_1 + 0x20);
  FUN_145cb1fac(param_1 + 0x40);
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x3ff0000000000000;
  local_50 = DAT_14c966ea0;
  local_58 = DAT_14c966e98;
  plStack_48 = DAT_14c966ea8;
  if (DAT_14c966ea8 == (longlong *)0x0) {
    plStack_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
    UNLOCK();
  }
  local_40 = 0;
  FUN_1413a4742(param_1,&local_58);
  plVar4 = plStack_48;
  *(undefined4 *)(param_1 + 0x18) = local_40;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = DAT_14c966fc0;
  local_58 = DAT_14c966fb8;
  plStack_48 = DAT_14c966fc8;
  if (DAT_14c966fc8 == (longlong *)0x0) {
    plStack_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966fc8 + 1) = (int)DAT_14c966fc8[1] + 1;
    UNLOCK();
  }
  local_40 = 0;
  FUN_1413a4742(param_1 + 0x20,&local_58);
  plVar4 = plStack_48;
  *(undefined4 *)(param_1 + 0x38) = local_40;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = DAT_14c966fa8;
  local_58 = DAT_14c966fa0;
  plStack_48 = DAT_14c966fb0;
  if (DAT_14c966fb0 == (longlong *)0x0) {
    plStack_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966fb0 + 1) = (int)DAT_14c966fb0[1] + 1;
    UNLOCK();
  }
  local_40 = 0;
  FUN_1413a4742(param_1 + 0x40,&local_58);
  plVar4 = plStack_48;
  *(undefined4 *)(param_1 + 0x58) = local_40;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar3 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x68) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x78) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x3ff0000000000000;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145cb1fac FUN_145cb1fac body=135 status=ok
// SIG undefined FUN_145cb1fac(void)

undefined8 * FUN_145cb1fac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = (longlong *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1413a4742(0,&local_38);
  plVar3 = local_28;
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
      }
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb2034 FUN_145cb2034 body=147 status=ok
// SIG undefined FUN_145cb2034(void)

void FUN_145cb2034(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x2a];
  FUN_145cb20c8(param_1[0xb],lVar1);
  lVar2 = param_1[0xb];
  (**(code **)(*param_1 + 0x360))(param_1,local_38,0);
  FUN_145cb2136(lVar2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1[0xb] + 0x2f8))((longlong *)param_1[0xb],lVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb20c8 FUN_145cb20c8 body=110 status=ok
// SIG undefined FUN_145cb20c8(void)

void FUN_145cb20c8(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x2d4) < 0) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    FUN_145cb2204(param_1 + 0x2c8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  if (-1 < *(int *)(param_2 + 0x224)) {
    *(undefined4 *)(param_2 + 0x220) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 0x220) = 0;
  FUN_1459b4c14(param_2 + 0x218,0);
  return;
}



// FUNCTION 145cb2136 FUN_145cb2136 body=164 status=ok
// SIG undefined FUN_145cb2136(void)

void FUN_145cb2136(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar1 = (longlong *)(param_1 + 0x2c8);
  FUN_145cb21da(plVar1,(int)param_2[1]);
  lVar12 = param_2[1];
  if ((longlong)(int)lVar12 != 0) {
    lVar5 = *param_2;
    lVar14 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x2d0);
      lVar13 = (longlong)iVar4;
      *(uint *)(param_1 + 0x2d0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x2d4) < iVar4 + 1U) {
        FUN_1490ee6d0(plVar1,iVar4);
      }
      puVar2 = (undefined4 *)(lVar5 + lVar14);
      lVar6 = *plVar1;
      *(undefined8 *)(lVar6 + 0x20 + lVar13 * 0x28) = *(undefined8 *)(puVar2 + 8);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      uVar11 = *(undefined8 *)(puVar2 + 6);
      puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar13 * 0x28);
      *puVar3 = *(undefined8 *)(puVar2 + 4);
      puVar3[1] = uVar11;
      puVar2 = (undefined4 *)(lVar6 + lVar13 * 0x28);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      lVar14 = lVar14 + 0x30;
    } while ((longlong)(int)lVar12 * 0x30 != lVar14);
  }
  FUN_1458eba4e(param_1);
  return;
}



// FUNCTION 145cb21da FUN_145cb21da body=41 status=ok
// SIG undefined FUN_145cb21da(void)

void FUN_145cb21da(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_145cb2204();
  return;
}



// FUNCTION 145cb2204 FUN_145cb2204 body=113 status=ok
// SIG undefined FUN_145cb2204(void)

void FUN_145cb2204(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 145cb2276 FUN_145cb2276 body=83 status=ok
// SIG undefined FUN_145cb2276(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cb2276(void)

{
  _DAT_14cb0baa8 = 0;
  if (DAT_14cb0baa0 != 0) {
    FUN_1400020a8();
  }
  FUN_145cb22ca();
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  if (DAT_14cb0ba28 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  return;
}



// FUNCTION 145cb22ca FUN_145cb22ca body=54 status=ok
// SIG undefined FUN_145cb22ca(void)

void FUN_145cb22ca(void)

{
  FUN_145cb2300();
  if (DAT_14cb0ba80 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0ba60 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb2300 FUN_145cb2300 body=106 status=ok
// SIG undefined FUN_145cb2300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cb2300(void)

{
  _DAT_14cb0ba68 = 0;
  if (DAT_14cb0ba6c != 0) {
    FUN_144727cd0(&DAT_14cb0ba60,0);
  }
  _DAT_14cb0ba90 = 0xffffffff;
  _DAT_14cb0ba88 = 0;
  if (DAT_14cb0ba8c < 0x81) {
    return;
  }
  DAT_14cb0ba8c = 0x80;
  FUN_1446efbd8(&DAT_14cb0ba70,0);
  return;
}



// FUNCTION 145cb236a FUN_145cb236a body=37 status=ok
// SIG undefined FUN_145cb236a(void)

void FUN_145cb236a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x148);
  FUN_145cb2390(param_2);
  return;
}



// FUNCTION 145cb2390 FUN_145cb2390 body=206 status=ok
// SIG undefined FUN_145cb2390(void)

undefined8 * FUN_145cb2390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b8d7de0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x40a00000;
  return param_1;
}



// FUNCTION 145cb245e FUN_145cb245e body=230 status=ok
// SIG undefined FUN_145cb245e(void)

longlong * FUN_145cb245e(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418d20;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[2] = (longlong)&PTR_LAB_14b418d40;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145cb2548(&local_30,plVar1);
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



// FUNCTION 145cb2548 FUN_145cb2548 body=162 status=ok
// SIG undefined FUN_145cb2548(void)

void FUN_145cb2548(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145cb2587;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145cb2587;
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
LAB_145cb2587:
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
                    /* WARNING: Could not recover jumptable at 0x000145cb25e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145cb25ea FUN_145cb25ea body=1139 status=ok
// SIG undefined FUN_145cb25ea(void)

void FUN_145cb25ea(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_78 [8];
  longlong local_70 [2];
  short local_5c [2];
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + -0x30;
  lVar13 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if (lVar13 == 0) goto LAB_145cb297d;
  uVar14 = FUN_140495e96(param_1);
  lVar15 = FUN_140ade8e4(uVar14);
  if (lVar15 == 0) {
LAB_145cb2a38:
    lVar15 = 0;
  }
  else {
    lVar16 = FUN_140ade7fe();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8
         ) != lVar16 + 0x30)) goto LAB_145cb2a38;
  }
  FUN_14485c47a(param_1 + 0x90,lVar15);
  lVar15 = FUN_1411c648e(*(undefined8 *)(lVar13 + 0x1f0));
  if (lVar15 != 0) {
    local_58 = FUN_14156cf36;
    local_50 = 0;
    FUN_145cb2b72(lVar15 + 0x48,local_70,lVar1);
    *(longlong *)(param_1 + 0x70) = local_70[0];
    uVar14 = FUN_1400d7050(param_1);
    lVar16 = FUN_145cb2a5e(lVar15,uVar14);
    if (lVar16 != 0) {
      lVar17 = FUN_145908d38();
      if (((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) &&
         (*(char *)(lVar16 + 0x1e0) == '\0')) {
        FUN_145a316be(lVar16,lVar1);
      }
    }
  }
  lVar16 = FUN_1449baec6(lVar13);
  if (lVar16 != 0) {
    lVar17 = FUN_140d976a6();
    if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8
         ) == lVar17 + 0x30)) {
      FUN_14485c47a(param_1 + 0x98,lVar16);
      local_58 = (code *)&LAB_145dddd1a;
      local_50 = 0;
      FUN_145cb2a78(local_70,lVar1,&local_58);
      *(longlong *)(param_1 + 0x78) = local_70[0];
      local_58 = (code *)&LAB_145c620c2;
      local_50 = 0;
      FUN_145cb2d70(lVar16 + 0x410,local_70,lVar1,&local_58);
      *(longlong *)(param_1 + 0x80) = local_70[0];
      *(uint *)(param_1 + 0xe8) = (uint)*(byte *)(lVar16 + 0x70);
      FUN_141508c46(lVar1);
    }
  }
  lVar16 = FUN_1400d7050(param_1);
  if (lVar16 != 0) {
    lVar17 = FUN_144a5dd5e();
    if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8
         ) == lVar17 + 0x30)) {
      lVar13 = FUN_1400f6f32(lVar13);
      if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x68), lVar13 != 0)) {
        FUN_140d27df6(lVar13,local_5c,lVar16);
        if (-1 < local_5c[0]) {
          uVar11 = FUN_1402d8968(lVar13,local_5c);
          if (uVar11 < 3) {
            local_58 = (code *)0x0;
            local_50 = 0;
            FUN_1446efa72(&local_58,0,3,0x10);
            pcVar10 = local_58;
            local_50 = 3;
            *(undefined ***)local_58 = &PTR_LAB_14b3e9ca0;
            LOCK();
            UNLOCK();
            lVar17 = DAT_14c758608 + 1;
            lVar15 = DAT_14c758608 + 1;
            if (lVar17 == 0) {
              LOCK();
              UNLOCK();
              lVar17 = DAT_14c758608 + 2;
              lVar15 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar15;
            *(longlong *)(local_58 + 0x10) = lVar17;
            *(undefined ***)local_58 = &PTR_FUN_14b9ab190;
            *(undefined8 *)(local_58 + 0x18) = 0;
            FUN_14485c47a(local_58 + 0x18,lVar1);
            *(code **)(pcVar10 + 0x20) = FUN_14615a0ae;
            *(undefined4 *)(pcVar10 + 0x28) = 0;
            FUN_140056680(local_70,L"CursorSettingsReady");
            local_88 = 1;
            local_90 = 0x80000;
            local_98 = local_70;
            FUN_1413d987a(lVar13,local_78,local_5c,&local_58);
            if (local_70[0] != 0) {
              FUN_1400020a8();
            }
            FUN_1449db362(&local_58);
          }
          else if (lVar15 != 0) {
            uVar12 = FUN_140def96c(lVar13,local_5c);
            puVar18 = (undefined4 *)FUN_1411c6420(lVar15,uVar12);
            if (puVar18 != (undefined4 *)0x0) {
              uVar12 = *puVar18;
              uVar4 = puVar18[1];
              uVar5 = puVar18[2];
              uVar6 = puVar18[3];
              uVar7 = puVar18[5];
              uVar8 = puVar18[6];
              uVar9 = puVar18[7];
              *(undefined4 *)(param_1 + 0x58) = puVar18[4];
              *(undefined4 *)(param_1 + 0x5c) = uVar7;
              *(undefined4 *)(param_1 + 0x60) = uVar8;
              *(undefined4 *)(param_1 + 100) = uVar9;
              *(undefined4 *)(param_1 + 0x48) = uVar12;
              *(undefined4 *)(param_1 + 0x4c) = uVar4;
              *(undefined4 *)(param_1 + 0x50) = uVar5;
              *(undefined4 *)(param_1 + 0x54) = uVar6;
              uVar12 = puVar18[8];
              *(undefined4 *)(param_1 + 0x68) = uVar12;
              *(char *)(param_1 + 0xf4) = (char)uVar12;
              lVar13 = FUN_1402735c8();
              fVar2 = *(float *)(lVar13 + 0x14c);
              fVar3 = *(float *)(lVar13 + 0x148);
              *(float *)(param_1 + 0x100) =
                   (*(float *)(lVar13 + 0x144) - *(float *)(lVar13 + 0x140)) *
                   *(float *)(param_1 + 0x4c) + *(float *)(lVar13 + 0x140);
              *(float *)(param_1 + 0x104) =
                   (fVar2 - fVar3) * *(float *)(param_1 + 0x4c) + *(float *)(lVar13 + 0x148);
            }
          }
        }
      }
      local_58 = FUN_1458d853c;
      local_50 = 0;
      FUN_145cb2e70(lVar16 + 0xaa0,local_70,lVar1);
    }
  }
LAB_145cb297d:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb2a5e FUN_145cb2a5e body=26 status=ok
// SIG undefined FUN_145cb2a5e(void)

undefined8 FUN_145cb2a5e(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14122506a();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



// FUNCTION 145cb2a78 FUN_145cb2a78 body=248 status=ok
// SIG undefined FUN_145cb2a78(void)

undefined8 FUN_145cb2a78(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a8e9b60;
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
  *local_40 = &PTR_FUN_14b9ab0b0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c22c52(&DAT_14cb0ca98,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb2b72 FUN_145cb2b72 body=254 status=ok
// SIG undefined FUN_145cb2b72(void)

undefined8
FUN_145cb2b72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9ab040;
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
  *local_48 = &PTR_FUN_14b9aafd0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145cb2c72(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb2c72 FUN_145cb2c72 body=216 status=ok
// SIG undefined FUN_145cb2c72(void)

undefined8 * FUN_145cb2c72(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145cb2d58 FUN_145cb2d58 body=24 status=ok
// SIG undefined FUN_145cb2d58(void)

bool FUN_145cb2d58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145cb2d70 FUN_145cb2d70 body=254 status=ok
// SIG undefined FUN_145cb2d70(void)

undefined8
FUN_145cb2d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b4332c0;
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
  *local_48 = &PTR_FUN_14b9ab120;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14572a21a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb2e70 FUN_145cb2e70 body=254 status=ok
// SIG undefined FUN_145cb2e70(void)

undefined8
FUN_145cb2e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9ab200;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb2f70 FUN_145cb2f70 body=40 status=ok
// SIG undefined FUN_145cb2f70(void)

undefined8 FUN_145cb2f70(undefined8 param_1,int param_2)

{
  FUN_145cb2f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb2f98 FUN_145cb2f98 body=135 status=ok
// SIG undefined FUN_145cb2f98(void)

void FUN_145cb2f98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9beb10;
  param_1[0x72] = &PTR_FUN_14a9bf1e0;
  param_1[0x89] = &PTR_FUN_14a9bf220;
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_14151ef9e(param_1);
  return;
}



// FUNCTION 145cb3020 FUN_145cb3020 body=90 status=ok
// SIG undefined FUN_145cb3020(void)

void FUN_145cb3020(longlong param_1)

{
  longlong lVar1;
  
  FUN_1410ea50c();
  *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  FUN_145cb307a(param_1,1);
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1403ca8ec(lVar1 + 0x3c0,&DAT_14cbd9580);
    return;
  }
  return;
}



// FUNCTION 145cb307a FUN_145cb307a body=396 status=ok
// SIG undefined FUN_145cb307a(void)

void FUN_145cb307a(longlong param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) != 0) && (*(char *)(param_1 + 0x2b0) != param_2)) {
    lVar3 = FUN_1407f4ede(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_1407f4df8();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))) {
        uVar2 = (uint)((ulonglong)DAT_14cbe27a0 >> 0x10);
        uVar7 = (uint)DAT_14cbe27a0 & 0xffff;
        lVar3 = param_1 + 0x110;
        if (*(longlong *)(param_1 + 0x118) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x118);
        }
        iVar5 = *(int *)(lVar3 + (ulonglong)
                                 (*(int *)(param_1 + 0x120) - 1U &
                                 (int)((ulonglong)DAT_14cbe27a0 >> 0x20) +
                                 ((uint)DAT_14cbe27a0 << 0x10 | uVar7) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            plVar6 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar5 * 0x18);
            if (*plVar6 == DAT_14cbe27a0) {
              if ((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) {
                if (param_2 == '\0') {
                  local_38 = 0;
                  FUN_14485c47a(&local_38,*plVar6);
                  FUN_1412e3bcc(param_1,local_38);
                }
                else {
                  uVar1 = *(undefined4 *)(param_1 + 0x148);
                  local_30 = 0;
                  FUN_14485c47a(&local_30,*plVar6);
                  FUN_14143058a(param_1,local_30,uVar1);
                }
              }
              break;
            }
            iVar5 = (int)plVar6[2];
          } while (iVar5 != -1);
        }
      }
    }
    *(char *)(param_1 + 0x2b0) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cb3208 FUN_145cb3208 body=122 status=ok
// SIG undefined FUN_145cb3208(void)

longlong FUN_145cb3208(longlong param_1,longlong param_2)

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
    FUN_145cb3282(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145cb3282 FUN_145cb3282 body=122 status=ok
// SIG undefined FUN_145cb3282(void)

undefined8 * FUN_145cb3282(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140032a2c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1404f0360(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xe8);
    }
  }
  return param_1;
}



// FUNCTION 145cb32fc FUN_145cb32fc body=62 status=ok
// SIG undefined FUN_145cb32fc(void)

void FUN_145cb32fc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14ca842a0;
  if (DAT_14ca843a0 != (undefined *)0x0) {
    puVar1 = DAT_14ca843a0;
  }
  FUN_145cb333a(puVar1,DAT_14ca843a8);
  if (DAT_14ca843a0 == (undefined *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb333a FUN_145cb333a body=60 status=ok
// SIG undefined FUN_145cb333a(void)

void FUN_145cb333a(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cb337e FUN_145cb337e body=114 status=ok
// SIG undefined FUN_145cb337e(void)

undefined8 * FUN_145cb337e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14a3f5cc0;
  param_1[5] = &PTR_FUN_14a3f6150;
  param_1[6] = &PTR_LAB_14a3f6190;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 145cb33fc FUN_145cb33fc body=111 status=ok
// SIG undefined FUN_145cb33fc(void)

undefined8 * FUN_145cb33fc(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a503ca0;
  param_1[5] = &PTR_FUN_14a503fa0;
  FUN_1412cd7de(param_1 + 0x2e);
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(undefined1 *)(param_1 + 0xfc) = 1;
  lVar1 = FUN_140bcc93a();
  FUN_1412cc8ca(param_1 + 0x2e,lVar1 + 0x2740);
  return param_1;
}



// FUNCTION 145cb3476 FUN_145cb3476 body=111 status=ok
// SIG undefined FUN_145cb3476(void)

undefined8 * FUN_145cb3476(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65b080;
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
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 145cb34f0 FUN_145cb34f0 body=111 status=ok
// SIG undefined FUN_145cb34f0(void)

undefined8 * FUN_145cb34f0(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65cd70;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x4380000043800000;
  return param_1;
}



// FUNCTION 145cb356a FUN_145cb356a body=111 status=ok
// SIG undefined FUN_145cb356a(void)

undefined8 * FUN_145cb356a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65e8e0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 145cb35e4 FUN_145cb35e4 body=111 status=ok
// SIG undefined FUN_145cb35e4(void)

undefined8 * FUN_145cb35e4(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65f2c0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 145cb365e FUN_145cb365e body=111 status=ok
// SIG undefined FUN_145cb365e(void)

undefined8 * FUN_145cb365e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a687f00;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 145cb36d8 FUN_145cb36d8 body=111 status=ok
// SIG undefined FUN_145cb36d8(void)

undefined8 * FUN_145cb36d8(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a7e30;
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
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  return param_1;
}



// FUNCTION 145cb3748 FUN_145cb3748 body=62 status=ok
// SIG undefined FUN_145cb3748(void)

void FUN_145cb3748(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14cb0d028;
  if (DAT_14cb0d040 != (undefined8 *)0x0) {
    puVar1 = DAT_14cb0d040;
  }
  FUN_145cb3786(puVar1,DAT_14cb0d048);
  if (DAT_14cb0d040 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb3786 FUN_145cb3786 body=60 status=ok
// SIG undefined FUN_145cb3786(void)

void FUN_145cb3786(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 145cb37c2 FUN_145cb37c2 body=40 status=ok
// SIG undefined FUN_145cb37c2(void)

undefined8 FUN_145cb37c2(undefined8 param_1,int param_2)

{
  FUN_145cb37ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb37ea FUN_145cb37ea body=82 status=ok
// SIG undefined FUN_145cb37ea(void)

void FUN_145cb37ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abbedd0;
  param_1[0x72] = &PTR_FUN_14abbf5a0;
  FUN_144760e21(param_1[0xe7],*(undefined4 *)(param_1 + 0xe8));
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  FUN_145972054(param_1);
  return;
}



// FUNCTION 145cb3844 FUN_145cb3844 body=114 status=ok
// SIG undefined FUN_145cb3844(void)

undefined8 * FUN_145cb3844(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ad942a0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_140056680(param_1 + 0xb,L"{AssetFolder}/{AssetName}_BakedAtlas_{OutputName}");
  FUN_140056680(param_1 + 0xd,L"{AssetFolder}/{AssetName}_BakedFrame_{OutputName}_{FrameIndex}");
  FUN_140056680(param_1 + 0xf,
                L"{SavedDir}/NiagaraBaker/{AssetName}_{OutputName}/Frame_{FrameIndex}.png");
  return param_1;
}



// FUNCTION 145cb38b6 FUN_145cb38b6 body=40 status=ok
// SIG undefined FUN_145cb38b6(void)

undefined8 FUN_145cb38b6(undefined8 param_1,int param_2)

{
  FUN_145cb38de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb38de FUN_145cb38de body=82 status=ok
// SIG undefined FUN_145cb38de(void)

void FUN_145cb38de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad8cc90;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145cb3930 FUN_145cb3930 body=40 status=ok
// SIG undefined FUN_145cb3930(void)

undefined8 FUN_145cb3930(undefined8 param_1,int param_2)

{
  FUN_145cb3958();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3958 FUN_145cb3958 body=82 status=ok
// SIG undefined FUN_145cb3958(void)

void FUN_145cb3958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae593c0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}


