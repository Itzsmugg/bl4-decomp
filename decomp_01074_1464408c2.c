// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464408c2 FUN_1464408c2 body=85 status=ok
// SIG undefined FUN_1464408c2(void)

void FUN_1464408c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac898f0;
  return;
}



// FUNCTION 146440918 FUN_146440918 body=29 status=ok
// SIG undefined FUN_146440918(void)

undefined8 FUN_146440918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146440936 FUN_146440936 body=85 status=ok
// SIG undefined FUN_146440936(void)

void FUN_146440936(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac88d50;
  return;
}



// FUNCTION 14644098c FUN_14644098c body=29 status=ok
// SIG undefined FUN_14644098c(void)

undefined8 FUN_14644098c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464409aa FUN_1464409aa body=48 status=ok
// SIG undefined FUN_1464409aa(void)

void FUN_1464409aa(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac89a4c);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  return;
}



// FUNCTION 1464409da FUN_1464409da body=106 status=ok
// SIG undefined FUN_1464409da(void)

void FUN_1464409da(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  local_28 = 0xaaea8bff;
  uStack_24 = 0x59a4216;
  uStack_20 = 0xa775a9ee;
  uStack_1c = 0xa1593ab0;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 0) {
    *(byte *)(param_1 + 0x10b) = *(byte *)(param_1 + 0x10c) ^ 1;
    *(undefined1 *)(param_1 + 0x10c) = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146440a46 FUN_146440a46 body=87 status=ok
// SIG undefined FUN_146440a46(void)

void FUN_146440a46(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0x60,param_2);
  FUN_140aa1618(param_1 + 0xf8,param_2);
  FUN_140aa1618(param_1 + 0x118,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  return;
}



// FUNCTION 146440a9e FUN_146440a9e body=38 status=ok
// SIG undefined FUN_146440a9e(void)

void FUN_146440a9e(longlong param_1,undefined8 param_2)

{
  FUN_140f5d36e();
  FUN_140aa1618(param_1 + 0x80,param_2);
  return;
}



// FUNCTION 146440ac4 FUN_146440ac4 body=231 status=ok
// SIG undefined FUN_146440ac4(void)

void FUN_146440ac4(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14ac8ab40;
  local_28[3] = &DAT_14cb23b70;
  local_28[4] = FUN_1459cf3d8;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146440bac FUN_146440bac body=48 status=ok
// SIG undefined FUN_146440bac(void)

void FUN_146440bac(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8a218);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 146440bdc FUN_146440bdc body=748 status=ok
// SIG undefined FUN_146440bdc(void)

void FUN_146440bdc(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_99;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68;
  longlong *local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140cad146();
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x140) == '\x01') {
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x20) + 0x18);
      if ((((-1 < (longlong)iVar2) && (iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78))) &&
          (lVar4 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar2 * 8),
          lVar4 != 0)) && (*(char *)(lVar4 + 0xcd) == '\x01')) {
        *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
        goto LAB_146440d19;
      }
    }
    *(undefined4 *)(param_1 + 0xd8) = 1;
    local_99 = 2;
    local_a8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_68);
    local_98[0] = 0;
    local_70 = 0;
    FUN_144a7bf34(local_98,&local_68,&local_a8,&local_99);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    FUN_1447c3578(lVar3 + 0x108,&local_68,local_98);
    uVar6 = FUN_1405d5f74(&local_68);
    *(undefined4 *)(param_1 + 0xdc) = uVar6;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar7 = &local_68;
      if (0x18 < local_50) {
        pppuVar7 = (undefined8 ***)local_68;
      }
      (*pcVar5)(pppuVar7);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
    FUN_144a5ac3a(local_98);
  }
  else {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
LAB_146440d19:
  if (*(char *)(lVar3 + 0x180) == '\x01') {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20);
    if (lVar4 != 0) {
      iVar2 = *(int *)(lVar4 + 0x18);
      if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78))) &&
         ((lVar4 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar2 * 8),
          lVar4 != 0 && (*(char *)(lVar4 + 0xcd) != '\0')))) goto LAB_146440d22;
    }
    local_99 = 2;
    local_a8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_68);
    local_98[0] = 0;
    local_70 = 0;
    FUN_144a7bf34(local_98,&local_68,&local_a8,&local_99);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    FUN_1447c3578(lVar3 + 0x148,&local_68,local_98);
    uVar6 = FUN_144a7ecd0(&local_68);
    *(undefined4 *)(param_1 + 0xe4) = uVar6;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar7 = &local_68;
      if (0x18 < local_50) {
        pppuVar7 = (undefined8 ***)local_68;
      }
      (*pcVar5)(pppuVar7);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
    FUN_144a5ac3a(local_98);
    *(float *)(param_1 + 0xe0) = *(float *)(param_2 + 8) + *(float *)(param_1 + 0xe4);
  }
  else {
LAB_146440d22:
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146440eca FUN_146440eca body=677 status=ok
// SIG undefined FUN_146440eca(void)

longlong FUN_146440eca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_140343d7a();
  if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0x1b8) == '\x01')) {
    dVar6 = *(double *)(param_1 + 0x1a0);
    dVar8 = *(double *)(param_1 + 0x1a8);
    dVar7 = *(double *)(param_1 + 0x1b0);
    (**(code **)(*plVar4 + 0x328))(plVar4,&local_68);
    dVar10 = local_68 * local_68 + local_60 * local_60;
    bVar2 = true;
    if ((dVar10 != 1.0) || (NAN(dVar10))) {
      if (dVar10 < 9.99999993922529e-09) {
        bVar2 = DAT_14c8464f0 == 0.0;
        local_60 = DAT_14c8464e8;
        local_68 = DAT_14c8464e0;
      }
      else {
        local_60 = local_60 * (1.0 / SQRT(dVar10));
        local_68 = local_68 * (1.0 / SQRT(dVar10));
      }
    }
    if ((((local_68 != 0.0) || (NAN(local_68))) || (local_60 != 0.0)) ||
       ((NAN(local_60) || (!bVar2)))) {
      lVar1 = plVar4[0x39];
      if (lVar1 == 0) {
        pdVar5 = &DAT_14c8464e0;
        dVar10 = DAT_14c8464f0;
      }
      else {
        pdVar5 = (double *)(lVar1 + 0x260);
        dVar10 = *(double *)(lVar1 + 0x270);
      }
      dVar6 = *pdVar5 - dVar6;
      dVar8 = pdVar5[1] - dVar8;
      dVar11 = dVar6 * dVar6 + dVar8 * dVar8;
      if ((dVar11 != 1.0) || (NAN(dVar11))) {
        dVar7 = DAT_14c8464e0;
        dVar9 = DAT_14c8464e8;
        dVar10 = DAT_14c8464f0;
        if (9.99999993922529e-09 <= dVar11) {
          dVar7 = dVar6 * (1.0 / SQRT(dVar11));
          dVar9 = dVar8 * (1.0 / SQRT(dVar11));
          dVar10 = 0.0;
        }
      }
      else {
        dVar10 = dVar10 - dVar7;
        dVar7 = dVar6;
        dVar9 = dVar8;
        dVar10 = (double)(-(ulonglong)(dVar10 == 0.0) & (ulonglong)dVar10);
      }
      if (((((dVar7 != 0.0) || (NAN(dVar7))) || (dVar9 != 0.0)) || ((NAN(dVar9) || (dVar10 != 0.0)))
          ) || (NAN(dVar10))) {
        *(bool *)param_2 =
             0.0 < (float)((DAT_14c8462c0 * dVar9 - dVar7 * DAT_14c8462c8) * dVar10 +
                          (DAT_14c8462c8 * dVar10 - DAT_14c8462d0 * dVar9) * dVar7 +
                          (DAT_14c8462d0 * dVar7 - dVar10 * DAT_14c8462c0) * dVar9);
        uVar3 = 1;
        goto LAB_1464410c6;
      }
    }
  }
  uVar3 = 0;
LAB_1464410c6:
  *(undefined1 *)(param_2 + 1) = uVar3;
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146441170 FUN_146441170 body=383 status=ok
// SIG undefined FUN_146441170(void)

ulonglong FUN_146441170(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),2);
  do {
    iVar1 = *(int *)(param_1 + 0x1b8);
    uVar6 = *(uint *)(param_1 + 0x1c0);
    if (iVar1 <= (int)uVar6 || (int)uVar6 < 0) {
      uVar6 = -(uint)(iVar1 < 1);
      goto LAB_1464411ca;
    }
    uVar4 = (ulonglong)uVar6;
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar5 = param_1 + 0x130;
    }
    if (*(longlong *)(lVar5 + uVar4 * 0x10) == 0) {
LAB_1464412e3:
      *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
      goto LAB_14644128c;
    }
    if ((char)param_3 == '\x01') {
      uVar6 = *(uint *)(*(longlong *)(lVar2 + 0xd0) + uVar4 * 8);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_1464411ca:
      if ((int)uVar6 < 0) goto LAB_1464412e3;
    }
    else {
      uVar7 = (ulonglong)param_3;
      if ((param_3 & 0xff) != 0) {
        if ((param_3 & 0xff) != 2) {
          uVar7 = (ulonglong)param_3;
          goto LAB_1464412e3;
        }
        uVar6 = *(uint *)(*(longlong *)(lVar2 + 0xd0) + 4 + uVar4 * 8);
        uVar7 = CONCAT71((uint7)(uint3)(param_3 >> 8),2);
        goto LAB_1464411ca;
      }
    }
    if ((iVar1 <= (int)uVar6) || (*(int *)(param_1 + 0x1d0) <= (int)uVar6)) goto LAB_1464412e3;
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar5 = param_1 + 0x130;
    }
    uVar4 = (ulonglong)uVar6;
    lVar5 = *(longlong *)(lVar5 + uVar4 * 0x10);
    if (lVar5 == 0) goto LAB_1464412e3;
    *(uint *)(param_1 + 0x1c0) = uVar6;
    if (*(char *)(*(longlong *)(param_1 + 0x1c8) + uVar4) != '\0') goto LAB_14644128c;
    *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + uVar4) = 1;
    cVar3 = FUN_14097f910(lVar5,param_2,param_1,uVar6);
  } while ((cVar3 != '\x02') || (cVar3 = FUN_14097ea48(lVar5,param_2,param_1,uVar6), cVar3 == '\0'))
  ;
  uVar7 = 0;
LAB_14644128c:
  if ((longlong)*(int *)(param_1 + 0x1d0) != 0) {
    memset(*(void **)(param_1 + 0x1c8),0,(longlong)*(int *)(param_1 + 0x1d0));
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146441332 FUN_146441332 body=40 status=ok
// SIG undefined FUN_146441332(void)

undefined8 FUN_146441332(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14644135a FUN_14644135a body=85 status=ok
// SIG undefined FUN_14644135a(void)

void FUN_14644135a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b220;
  return;
}



// FUNCTION 1464413b0 FUN_1464413b0 body=29 status=ok
// SIG undefined FUN_1464413b0(void)

undefined8 FUN_1464413b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464413ce FUN_1464413ce body=93 status=ok
// SIG undefined FUN_1464413ce(void)

void FUN_1464413ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8ab40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14644142c FUN_14644142c body=29 status=ok
// SIG undefined FUN_14644142c(void)

undefined8 FUN_14644142c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14644144a FUN_14644144a body=85 status=ok
// SIG undefined FUN_14644144a(void)

void FUN_14644144a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8b430;
  return;
}



// FUNCTION 1464414a0 FUN_1464414a0 body=29 status=ok
// SIG undefined FUN_1464414a0(void)

undefined8 FUN_1464414a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464414bd FUN_1464414bd body=484 status=ok
// SIG undefined FUN_1464414bd(void)

void FUN_1464414bd(void)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"GbxBrainGraphTypes");
  FUN_1446f470e(&local_40,L"AI.BrainTypes",1);
  FUN_1413e432a(lVar1,local_38,local_40,local_30);
  FUN_1446f470e(&local_48,L"AI.BrainTypes.Shared",1);
  FUN_1413e432a(lVar1,local_38,local_48,local_30);
  FUN_1446f470e(&local_50,L"AI.BrainTypes.Enemy",1);
  FUN_1413e432a(lVar1,local_38,local_50,local_30);
  FUN_1446f470e(&local_58,L"AI.BrainTypes.NPC",1);
  FUN_1413e432a(lVar1,local_38,local_58,local_30);
  FUN_1446f470e(&local_60,L"AI.BrainTypes.Gear",1);
  FUN_1413e432a(lVar1,local_38,local_60,local_30);
  FUN_1446f470e(&local_68,L"AI.BrainTypes.PlayerBot",1);
  FUN_1413e432a(lVar1,local_38,local_68,local_30);
  FUN_1446f470e(&local_70,L"AI.BrainTypes.Example",1);
  FUN_1413e432a(lVar1,local_38,local_70,local_30);
  FUN_1446f470e(&local_78,L"AI.BrainTypes.Test",1);
  FUN_1413e432a(lVar1,local_38,local_78,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464416a2 FUN_1464416a2 body=60 status=ok
// SIG undefined FUN_1464416a2(void)

void FUN_1464416a2(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0xa8,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  return;
}



// FUNCTION 1464416f2 FUN_1464416f2 body=108 status=ok
// SIG undefined FUN_1464416f2(void)

void FUN_1464416f2(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x80);
  FUN_140aa1618(param_1 + 0x140,param_2);
  FUN_140aa1618(param_1 + 0x160,param_2);
  FUN_140aa1618(param_1 + 0x1c8,param_2);
  FUN_140aa1618(param_1 + 0x1e8,param_2);
  FUN_140aa1618(param_1 + 0x120,param_2);
  return;
}



// FUNCTION 14644175e FUN_14644175e body=110 status=ok
// SIG undefined FUN_14644175e(void)

void FUN_14644175e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140aa1618(param_1 + 0x48);
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_140d4e44a(param_1 + 0x178,param_2);
    lVar1 = 0x2d8;
  }
  else {
    lVar1 = 0xe0;
    if (*(int *)(param_1 + 0x44) != 1) goto LAB_146441799;
  }
  FUN_140aa1618(lVar1 + param_1,param_2);
LAB_146441799:
  FUN_140aa1618(param_1 + 0x338,param_2);
  FUN_140aa1618(param_1 + 0x358,param_2);
  return;
}



// FUNCTION 1464417cc FUN_1464417cc body=48 status=ok
// SIG undefined FUN_1464417cc(void)

void FUN_1464417cc(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8c3d0);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 1464417fc FUN_1464417fc body=87 status=ok
// SIG undefined FUN_1464417fc(void)

void FUN_1464417fc(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x60,param_2);
  FUN_140aa1618(param_1 + 0xf8,param_2);
  FUN_140aa1618(param_1 + 400,param_2);
  FUN_140aa1618(param_1 + 0x1f0,param_2);
  return;
}



// FUNCTION 146441874 FUN_146441874 body=85 status=ok
// SIG undefined FUN_146441874(void)

void FUN_146441874(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8c580;
  return;
}



// FUNCTION 1464418ca FUN_1464418ca body=29 status=ok
// SIG undefined FUN_1464418ca(void)

undefined8 FUN_1464418ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464418e8 FUN_1464418e8 body=85 status=ok
// SIG undefined FUN_1464418e8(void)

undefined8 * FUN_1464418e8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac8c770;
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



// FUNCTION 14644193e FUN_14644193e body=160 status=ok
// SIG undefined FUN_14644193e(void)

void FUN_14644193e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_140115e24();
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x3a8) == 0) {
      plVar1 = (longlong *)(param_1 + 0x398);
      *(longlong **)(param_1 + 0x3b0) = &DAT_14cb242b0;
      *(longlong *)(param_1 + 0x3a8) = param_1;
      lVar2 = DAT_14cb242b0;
      while( true ) {
        *(longlong *)(param_1 + 0x398) = lVar2;
        LOCK();
        lVar3 = **(longlong **)(param_1 + 0x3b0);
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          **(longlong **)(param_1 + 0x3b0) = (longlong)plVar1;
          lVar3 = lVar2;
        }
        UNLOCK();
        if (bVar4) break;
        *(longlong *)(param_1 + 0x398) = lVar3;
        lVar2 = **(longlong **)(param_1 + 0x3b0);
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
    }
    FUN_14035d02e(param_1 + 0x3b8,param_1);
    FUN_140359e06(param_1 + 0x768,param_1);
    return;
  }
  return;
}



// FUNCTION 1464419de FUN_1464419de body=94 status=ok
// SIG undefined FUN_1464419de(void)

void FUN_1464419de(longlong param_1)

{
  FUN_145bf2856(param_1 + 0x398,0);
  FUN_14035d552(param_1 + 0x3b8);
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FUN_140a19d0e(param_1 + 0x798,0);
    *(undefined8 *)(param_1 + 0x780) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x790) = 0;
  }
  FUN_140872622(param_1);
  return;
}



// FUNCTION 146441a3c FUN_146441a3c body=87 status=ok
// SIG undefined FUN_146441a3c(void)

void FUN_146441a3c(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0xa0,param_2);
  FUN_140aa1618(param_1 + 0xc0,param_2);
  return;
}



// FUNCTION 146441a94 FUN_146441a94 body=79 status=ok
// SIG undefined FUN_146441a94(void)

void FUN_146441a94(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  FUN_140309e34(param_1 + 0xb0,param_2,param_1 + 200);
  return;
}



// FUNCTION 146441ae4 FUN_146441ae4 body=51 status=ok
// SIG undefined FUN_146441ae4(void)

void FUN_146441ae4(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_14024bdb0();
  fVar1 = (float)FUN_1411259a0();
  fVar2 = *(float *)(param_1 + 200);
  if (fVar1 <= *(float *)(param_1 + 200)) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 200) = fVar2;
  return;
}



// FUNCTION 146441b18 FUN_146441b18 body=87 status=ok
// SIG undefined FUN_146441b18(void)

void FUN_146441b18(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0x118,param_2);
  FUN_140aa1618(param_1 + 0x148,param_2);
  return;
}



// FUNCTION 146441b70 FUN_146441b70 body=72 status=ok
// SIG undefined FUN_146441b70(void)

void FUN_146441b70(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0xa8,param_2);
  return;
}



// FUNCTION 146441bb8 FUN_146441bb8 body=132 status=ok
// SIG undefined FUN_146441bb8(void)

void FUN_146441bb8(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 200,param_2);
  FUN_140aa1618(param_1 + 0xe8,param_2);
  FUN_140aa1618(param_1 + 0x108,param_2);
  FUN_140aa1618(param_1 + 0x90,param_2);
  FUN_140aa1618(param_1 + 0x128,param_2);
  FUN_140aa1618(param_1 + 0x1c0,param_2);
  return;
}



// FUNCTION 146441c3c FUN_146441c3c body=102 status=ok
// SIG undefined FUN_146441c3c(void)

void FUN_146441c3c(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0x160,param_2);
  FUN_140aa1618(param_1 + 0x180,param_2);
  FUN_140aa1618(param_1 + 0x128,param_2);
  return;
}



// FUNCTION 146441ca2 FUN_146441ca2 body=72 status=ok
// SIG undefined FUN_146441ca2(void)

void FUN_146441ca2(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0xa0,param_2);
  return;
}



// FUNCTION 146441cea FUN_146441cea body=54 status=ok
// SIG undefined FUN_146441cea(void)

void FUN_146441cea(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  return;
}



// FUNCTION 146441d20 FUN_146441d20 body=57 status=ok
// SIG undefined FUN_146441d20(void)

void FUN_146441d20(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x90,param_2);
  return;
}



// FUNCTION 146441d5a FUN_146441d5a body=72 status=ok
// SIG undefined FUN_146441d5a(void)

void FUN_146441d5a(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0xa0,param_2);
  return;
}



// FUNCTION 146441da2 FUN_146441da2 body=57 status=ok
// SIG undefined FUN_146441da2(void)

void FUN_146441da2(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  return;
}



// FUNCTION 146441ddc FUN_146441ddc body=300 status=ok
// SIG undefined FUN_146441ddc(void)

undefined8 * FUN_146441ddc(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 == 0) || ((-1 < (short)param_1[1] && (param_1[2] == 0)))) {
    local_40 = DAT_14cb21030;
    local_48 = DAT_14cb21028;
    FUN_1448075d0(param_2);
  }
  else {
    puVar1 = *(undefined4 **)(*param_1 + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    FUN_1447a97f4(&local_48,puVar2);
    if (((param_3 == '\0') && (-1 < (short)param_1[1])) &&
       ((undefined4 *)param_1[2] != (undefined4 *)0x0)) {
      local_50 = (longlong)CONCAT24((short)param_1[1],*(undefined4 *)param_1[2]) + 0x100000000;
      FUN_1447325ac(&local_48,local_58,1);
      FUN_140ebdabe(param_2,local_58,&local_50);
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      FUN_1404e49fa(param_2,&local_48);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146441f4c FUN_146441f4c body=40 status=ok
// SIG undefined FUN_146441f4c(void)

undefined8 FUN_146441f4c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146441f74 FUN_146441f74 body=40 status=ok
// SIG undefined FUN_146441f74(void)

undefined8 FUN_146441f74(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146441f9c FUN_146441f9c body=40 status=ok
// SIG undefined FUN_146441f9c(void)

undefined8 FUN_146441f9c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146441fc4 FUN_146441fc4 body=40 status=ok
// SIG undefined FUN_146441fc4(void)

undefined8 FUN_146441fc4(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146441fec FUN_146441fec body=40 status=ok
// SIG undefined FUN_146441fec(void)

undefined8 FUN_146441fec(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146442014 FUN_146442014 body=40 status=ok
// SIG undefined FUN_146442014(void)

undefined8 FUN_146442014(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14644203c FUN_14644203c body=70 status=ok
// SIG undefined FUN_14644203c(void)

undefined8 * FUN_14644203c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac88ea0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146442082 FUN_146442082 body=85 status=ok
// SIG undefined FUN_146442082(void)

void FUN_146442082(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d5c0;
  return;
}



// FUNCTION 1464420d8 FUN_1464420d8 body=29 status=ok
// SIG undefined FUN_1464420d8(void)

undefined8 FUN_1464420d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464420f6 FUN_1464420f6 body=86 status=ok
// SIG undefined FUN_1464420f6(void)

void FUN_1464420f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14644214c FUN_14644214c body=85 status=ok
// SIG undefined FUN_14644214c(void)

void FUN_14644214c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac8d6f0;
  return;
}



// FUNCTION 1464421a2 FUN_1464421a2 body=29 status=ok
// SIG undefined FUN_1464421a2(void)

undefined8 FUN_1464421a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464421c0 FUN_1464421c0 body=150 status=ok
// SIG undefined FUN_1464421c0(void)

void FUN_1464421c0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x308,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x308)) {
      uVar5 = uVar4 / 0x308 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x308,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146442258 FUN_146442258 body=143 status=ok
// SIG undefined FUN_146442258(void)

void FUN_146442258(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1464422e8 FUN_1464422e8 body=302 status=ok
// SIG undefined FUN_1464422e8(void)

undefined4 * FUN_1464422e8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_14105fbf6(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_14105fb62(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)(local_40 + 3) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
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
      FUN_141060018(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146442417 FUN_146442417 body=47 status=ok
// SIG undefined FUN_146442417(void)

longlong FUN_146442417(void)

{
  if (DAT_14cb24700 == 0) {
    FUN_14073dd9a(&DAT_14cb24700,&PTR_LAB_14ac8dec0);
  }
  return DAT_14cb24700;
}



// FUNCTION 146442446 FUN_146442446 body=47 status=ok
// SIG undefined FUN_146442446(void)

longlong FUN_146442446(void)

{
  if (DAT_14cb246e0 == 0) {
    FUN_14000fc22(&DAT_14cb246e0,&PTR_FUN_14ac8dcd0);
  }
  return DAT_14cb246e0;
}



// FUNCTION 146442475 FUN_146442475 body=49 status=ok
// SIG undefined FUN_146442475(void)

longlong FUN_146442475(void)

{
  if (DAT_14cb24938 == 0) {
    FUN_14086a14e(&DAT_14cb24938,&PTR_FUN_14ac94980);
  }
  return DAT_14cb24938;
}



// FUNCTION 1464424a6 FUN_1464424a6 body=47 status=ok
// SIG undefined FUN_1464424a6(void)

longlong FUN_1464424a6(void)

{
  if (DAT_14cb246f0 == 0) {
    FUN_14000fc22(&DAT_14cb246f0,&PTR_FUN_14ac8de00);
  }
  return DAT_14cb246f0;
}



// FUNCTION 1464424d5 FUN_1464424d5 body=35 status=ok
// SIG undefined FUN_1464424d5(void)

void FUN_1464424d5(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac8df00;
  return;
}



// FUNCTION 1464424fd FUN_1464424fd body=115 status=ok
// SIG undefined FUN_1464424fd(void)

void FUN_1464424fd(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_14480568a(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14ac8e2b0;
  puVar1[5] = &PTR_FUN_14ac8ecb0;
  puVar1[6] = &PTR_LAB_14ac8ecf0;
  puVar1[0x55] = &PTR_FUN_14ac8ed40;
  puVar1[0x56] = &PTR_FUN_14ac8edc0;
  puVar1[0x57] = &PTR_FUN_14ac8edd0;
  puVar1[0xc4] = 0;
  return;
}



// FUNCTION 146442570 FUN_146442570 body=47 status=ok
// SIG undefined FUN_146442570(void)

longlong FUN_146442570(void)

{
  if (DAT_14cb24728 == 0) {
    FUN_14073dd9a(&DAT_14cb24728,&PTR_LAB_14ac8e268);
  }
  return DAT_14cb24728;
}



// FUNCTION 14644259f FUN_14644259f body=47 status=ok
// SIG undefined FUN_14644259f(void)

longlong FUN_14644259f(void)

{
  if (DAT_14cb24738 == 0) {
    FUN_14086a14e(&DAT_14cb24738,&PTR_FUN_14ac8ef48);
  }
  return DAT_14cb24738;
}



// FUNCTION 1464425d4 FUN_1464425d4 body=48 status=ok
// SIG undefined FUN_1464425d4(void)

void FUN_1464425d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14ac96f30;
  return;
}



// FUNCTION 146442604 FUN_146442604 body=49 status=ok
// SIG undefined FUN_146442604(void)

longlong FUN_146442604(void)

{
  if (DAT_14cb24770 == 0) {
    FUN_14073dd9a(&DAT_14cb24770,&PTR_LAB_14ac8f3b0);
  }
  return DAT_14cb24770;
}



// FUNCTION 146442635 FUN_146442635 body=47 status=ok
// SIG undefined FUN_146442635(void)

longlong FUN_146442635(void)

{
  if (DAT_14cb24750 == 0) {
    FUN_14000fc22(&DAT_14cb24750,&PTR_FUN_14ac8eff0);
  }
  return DAT_14cb24750;
}



// FUNCTION 146442664 FUN_146442664 body=47 status=ok
// SIG undefined FUN_146442664(void)

longlong FUN_146442664(void)

{
  if (DAT_14cb24758 == 0) {
    FUN_14000fc22(&DAT_14cb24758,&PTR_FUN_14ac8f0a0);
  }
  return DAT_14cb24758;
}



// FUNCTION 146442693 FUN_146442693 body=47 status=ok
// SIG undefined FUN_146442693(void)

longlong FUN_146442693(void)

{
  if (DAT_14cb24760 == 0) {
    FUN_14000fc22(&DAT_14cb24760,&PTR_FUN_14ac8f158);
  }
  return DAT_14cb24760;
}



// FUNCTION 1464426c2 FUN_1464426c2 body=34 status=ok
// SIG undefined FUN_1464426c2(void)

void FUN_1464426c2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14595a802();
  FUN_14069c8d6(uVar1,&PTR_s_OnBreakMakeFracturedChunksTransi_14ac8f1a0,3);
  return;
}



// FUNCTION 1464426e4 FUN_1464426e4 body=132 status=ok
// SIG undefined FUN_1464426e4(void)

void FUN_1464426e4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac8f3f0;
  puVar1[5] = &PTR_FUN_14ac8f9d0;
  puVar1[6] = &PTR_LAB_14ac8fa10;
  puVar1[0x5d] = 0;
  *(undefined4 *)(puVar1 + 0x5e) = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x2fc) = 0;
  puVar1[0x61] = 0;
  *(undefined4 *)(puVar1 + 0x62) = 0;
  return;
}



// FUNCTION 146442773 FUN_146442773 body=47 status=ok
// SIG undefined FUN_146442773(void)

longlong FUN_146442773(void)

{
  if (DAT_14cb24788 == 0) {
    FUN_14073dd9a(&DAT_14cb24788,&PTR_LAB_14ac8fb48);
  }
  return DAT_14cb24788;
}



// FUNCTION 1464427a2 FUN_1464427a2 body=55 status=ok
// SIG undefined FUN_1464427a2(void)

void FUN_1464427a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb247a0 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb247a0 = FUN_140002ddd(FUN_1464427d9,uVar1,L"DestructibleConstraint");
  }
  return;
}



// FUNCTION 1464427d9 FUN_1464427d9 body=47 status=ok
// SIG undefined FUN_1464427d9(void)

longlong FUN_1464427d9(void)

{
  if (DAT_14cb24798 == 0) {
    FUN_14086a14e(&DAT_14cb24798,&PTR_FUN_14ac90468);
  }
  return DAT_14cb24798;
}



// FUNCTION 146442808 FUN_146442808 body=48 status=ok
// SIG undefined FUN_146442808(void)

void FUN_146442808(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14ac97090;
  return;
}



// FUNCTION 146442849 FUN_146442849 body=49 status=ok
// SIG undefined FUN_146442849(void)

longlong FUN_146442849(void)

{
  if (DAT_14cb247b8 == 0) {
    FUN_14073dd9a(&DAT_14cb247b8,&PTR_LAB_14ac907c8);
  }
  return DAT_14cb247b8;
}



// FUNCTION 14644287a FUN_14644287a body=47 status=ok
// SIG undefined FUN_14644287a(void)

longlong FUN_14644287a(void)

{
  if (DAT_14cb247c8 == 0) {
    FUN_1409ce572(&DAT_14cb247c8,&PTR_FUN_14ac90ba0);
  }
  return DAT_14cb247c8;
}



// FUNCTION 1464428ae FUN_1464428ae body=47 status=ok
// SIG undefined FUN_1464428ae(void)

longlong FUN_1464428ae(void)

{
  if (DAT_14cb247f0 == 0) {
    FUN_14073dd9a(&DAT_14cb247f0,&PTR_LAB_14ac91480);
  }
  return DAT_14cb247f0;
}



// FUNCTION 1464428dd FUN_1464428dd body=47 status=ok
// SIG undefined FUN_1464428dd(void)

longlong FUN_1464428dd(void)

{
  if (DAT_14cb247e0 == 0) {
    FUN_14000fc22(&DAT_14cb247e0,&PTR_FUN_14ac90c48);
  }
  return DAT_14cb247e0;
}



// FUNCTION 14644290c FUN_14644290c body=34 status=ok
// SIG undefined FUN_14644290c(void)

void FUN_14644290c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458bc096();
  FUN_14069c8d6(uVar1,&PTR_s_GetGeometryCollectionComponentCl_14ac90c90,1);
  return;
}



// FUNCTION 14644293e FUN_14644293e body=49 status=ok
// SIG undefined FUN_14644293e(void)

longlong FUN_14644293e(void)

{
  if (DAT_14cb24840 == 0) {
    FUN_14073dd9a(&DAT_14cb24840,&PTR_LAB_14ac91f00);
  }
  return DAT_14cb24840;
}



// FUNCTION 14644296f FUN_14644296f body=47 status=ok
// SIG undefined FUN_14644296f(void)

longlong FUN_14644296f(void)

{
  if (DAT_14cb24800 == 0) {
    FUN_14000fc22(&DAT_14cb24800,&PTR_FUN_14ac918a0);
  }
  return DAT_14cb24800;
}



// FUNCTION 14644299e FUN_14644299e body=47 status=ok
// SIG undefined FUN_14644299e(void)

longlong FUN_14644299e(void)

{
  if (DAT_14cb24808 == 0) {
    FUN_14000fc22(&DAT_14cb24808,&PTR_FUN_14ac919f8);
  }
  return DAT_14cb24808;
}



// FUNCTION 1464429cd FUN_1464429cd body=47 status=ok
// SIG undefined FUN_1464429cd(void)

longlong FUN_1464429cd(void)

{
  if (DAT_14cb24810 == 0) {
    FUN_14000fc22(&DAT_14cb24810,&PTR_FUN_14ac91b28);
  }
  return DAT_14cb24810;
}



// FUNCTION 1464429fc FUN_1464429fc body=47 status=ok
// SIG undefined FUN_1464429fc(void)

longlong FUN_1464429fc(void)

{
  if (DAT_14cb24818 == 0) {
    FUN_14000fc22(&DAT_14cb24818,&PTR_FUN_14ac91b88);
  }
  return DAT_14cb24818;
}



// FUNCTION 146442a2b FUN_146442a2b body=47 status=ok
// SIG undefined FUN_146442a2b(void)

longlong FUN_146442a2b(void)

{
  if (DAT_14cb24820 == 0) {
    FUN_14000fc22(&DAT_14cb24820,&PTR_FUN_14ac91c28);
  }
  return DAT_14cb24820;
}



// FUNCTION 146442a5a FUN_146442a5a body=47 status=ok
// SIG undefined FUN_146442a5a(void)

longlong FUN_146442a5a(void)

{
  if (DAT_14cb24828 == 0) {
    FUN_14000fc22(&DAT_14cb24828,&PTR_FUN_14ac91cc0);
  }
  return DAT_14cb24828;
}



// FUNCTION 146442a89 FUN_146442a89 body=47 status=ok
// SIG undefined FUN_146442a89(void)

longlong FUN_146442a89(void)

{
  if (DAT_14cb24830 == 0) {
    FUN_14000fc22(&DAT_14cb24830,&PTR_FUN_14ac91d78);
  }
  return DAT_14cb24830;
}



// FUNCTION 146442ab8 FUN_146442ab8 body=34 status=ok
// SIG undefined FUN_146442ab8(void)

void FUN_146442ab8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14079f750();
  FUN_14069c8d6(uVar1,&PTR_s_DoFracture_14ac91dc0,7);
  return;
}



// FUNCTION 146442adf FUN_146442adf body=35 status=ok
// SIG undefined FUN_146442adf(void)

void FUN_146442adf(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac91f40;
  return;
}



// FUNCTION 146442b07 FUN_146442b07 body=35 status=ok
// SIG undefined FUN_146442b07(void)

void FUN_146442b07(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac92280;
  return;
}



// FUNCTION 146442b2f FUN_146442b2f body=47 status=ok
// SIG undefined FUN_146442b2f(void)

longlong FUN_146442b2f(void)

{
  if (DAT_14cb24858 == 0) {
    FUN_14073dd9a(&DAT_14cb24858,&PTR_LAB_14ac92238);
  }
  return DAT_14cb24858;
}



// FUNCTION 146442b5e FUN_146442b5e body=49 status=ok
// SIG undefined FUN_146442b5e(void)

longlong FUN_146442b5e(void)

{
  if (DAT_14cb24888 == 0) {
    FUN_14073dd9a(&DAT_14cb24888,&PTR_LAB_14ac92910);
  }
  return DAT_14cb24888;
}



// FUNCTION 146442b8f FUN_146442b8f body=47 status=ok
// SIG undefined FUN_146442b8f(void)

longlong FUN_146442b8f(void)

{
  if (DAT_14cb24868 == 0) {
    FUN_14000fc22(&DAT_14cb24868,&PTR_FUN_14ac925d8);
  }
  return DAT_14cb24868;
}



// FUNCTION 146442bbe FUN_146442bbe body=47 status=ok
// SIG undefined FUN_146442bbe(void)

longlong FUN_146442bbe(void)

{
  if (DAT_14cb24870 == 0) {
    FUN_14000fc22(&DAT_14cb24870,&PTR_FUN_14ac92678);
  }
  return DAT_14cb24870;
}



// FUNCTION 146442bed FUN_146442bed body=47 status=ok
// SIG undefined FUN_146442bed(void)

longlong FUN_146442bed(void)

{
  if (DAT_14cb24878 == 0) {
    FUN_14000fc22(&DAT_14cb24878,&PTR_FUN_14ac92718);
  }
  return DAT_14cb24878;
}



// FUNCTION 146442c1c FUN_146442c1c body=34 status=ok
// SIG undefined FUN_146442c1c(void)

void FUN_146442c1c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a77040();
  FUN_14069c8d6(uVar1,&PTR_s_GetOnFractureParticleEffect_14ac92760,3);
  return;
}



// FUNCTION 146442c3e FUN_146442c3e body=56 status=ok
// SIG undefined FUN_146442c3e(void)

void FUN_146442c3e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140be449e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac92950;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}



// FUNCTION 146442c76 FUN_146442c76 body=47 status=ok
// SIG undefined FUN_146442c76(void)

longlong FUN_146442c76(void)

{
  if (DAT_14cb24898 == 0) {
    FUN_1409ce572(&DAT_14cb24898,&PTR_FUN_14ac92c90);
  }
  return DAT_14cb24898;
}



// FUNCTION 146442ca5 FUN_146442ca5 body=49 status=ok
// SIG undefined FUN_146442ca5(void)

longlong FUN_146442ca5(void)

{
  if (DAT_14cb248c8 == 0) {
    FUN_14073dd9a(&DAT_14cb248c8,&PTR_LAB_14ac931d0);
  }
  return DAT_14cb248c8;
}



// FUNCTION 146442cd6 FUN_146442cd6 body=47 status=ok
// SIG undefined FUN_146442cd6(void)

longlong FUN_146442cd6(void)

{
  if (DAT_14cb248b0 == 0) {
    FUN_14000fc22(&DAT_14cb248b0,&PTR_FUN_14ac92d08);
  }
  return DAT_14cb248b0;
}



// FUNCTION 146442d05 FUN_146442d05 body=47 status=ok
// SIG undefined FUN_146442d05(void)

longlong FUN_146442d05(void)

{
  if (DAT_14cb248b8 == 0) {
    FUN_14000fc22(&DAT_14cb248b8,&PTR_FUN_14ac92d90);
  }
  return DAT_14cb248b8;
}



// FUNCTION 146442d34 FUN_146442d34 body=34 status=ok
// SIG undefined FUN_146442d34(void)

void FUN_146442d34(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458f18b8();
  FUN_14069c8d6(uVar1,&PTR_s_GetPostFractureMesh_14ac92dd0,2);
  return;
}



// FUNCTION 146442d56 FUN_146442d56 body=89 status=ok
// SIG undefined FUN_146442d56(void)

void FUN_146442d56(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140be449e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac93210;
  *(undefined2 *)(puVar1 + 0x1b) = 0;
  *(undefined4 *)(puVar1 + 0x23) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10d) = 0;
  return;
}



// FUNCTION 146442db4 FUN_146442db4 body=75 status=ok
// SIG undefined FUN_146442db4(void)

void FUN_146442db4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac93700;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 146442e04 FUN_146442e04 body=47 status=ok
// SIG undefined FUN_146442e04(void)

longlong FUN_146442e04(void)

{
  if (DAT_14cb248f8 == 0) {
    FUN_14073dd9a(&DAT_14cb248f8,&PTR_LAB_14ac936b8);
  }
  return DAT_14cb248f8;
}



// FUNCTION 146442e33 FUN_146442e33 body=47 status=ok
// SIG undefined FUN_146442e33(void)

longlong FUN_146442e33(void)

{
  if (DAT_14cb24910 == 0) {
    FUN_14073dd9a(&DAT_14cb24910,&PTR_LAB_14ac943d8);
  }
  return DAT_14cb24910;
}



// FUNCTION 146442e62 FUN_146442e62 body=47 status=ok
// SIG undefined FUN_146442e62(void)

longlong FUN_146442e62(void)

{
  if (DAT_14cb24920 == 0) {
    FUN_1409ce572(&DAT_14cb24920,&PTR_FUN_14ac947f0);
  }
  return DAT_14cb24920;
}



// FUNCTION 146442e92 FUN_146442e92 body=55 status=ok
// SIG undefined FUN_146442e92(void)

void FUN_146442e92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24940 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb24940 = FUN_140002ddd(FUN_146442475,uVar1,L"DestructionHitProperties");
  }
  return;
}



// FUNCTION 146442eca FUN_146442eca body=48 status=ok
// SIG undefined FUN_146442eca(void)

void FUN_146442eca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000150;
  *puVar1 = &PTR_FUN_14ac97430;
  return;
}



// FUNCTION 146442efa FUN_146442efa body=47 status=ok
// SIG undefined FUN_146442efa(void)

longlong FUN_146442efa(void)

{
  if (DAT_14cb24960 == 0) {
    FUN_14073dd9a(&DAT_14cb24960,&PTR_LAB_14ac94ab0);
  }
  return DAT_14cb24960;
}



// FUNCTION 146442f29 FUN_146442f29 body=47 status=ok
// SIG undefined FUN_146442f29(void)

longlong FUN_146442f29(void)

{
  if (DAT_14cb24950 == 0) {
    FUN_14000fc22(&DAT_14cb24950,&PTR_FUN_14ac94a00);
  }
  return DAT_14cb24950;
}



// FUNCTION 146442f58 FUN_146442f58 body=34 status=ok
// SIG undefined FUN_146442f58(void)

void FUN_146442f58(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a77218();
  FUN_14069c8d6(uVar1,&PTR_s_DoFracture_14ac94a40,1);
  return;
}



// FUNCTION 146442f7a FUN_146442f7a body=35 status=ok
// SIG undefined FUN_146442f7a(void)

void FUN_146442f7a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac94af0;
  return;
}



// FUNCTION 146442f9d FUN_146442f9d body=47 status=ok
// SIG undefined FUN_146442f9d(void)

longlong FUN_146442f9d(void)

{
  if (DAT_14cb24980 == 0) {
    FUN_14073dd9a(&DAT_14cb24980,&PTR_LAB_14ac94eb8);
  }
  return DAT_14cb24980;
}



// FUNCTION 146442fcc FUN_146442fcc body=49 status=ok
// SIG undefined FUN_146442fcc(void)

longlong FUN_146442fcc(void)

{
  if (DAT_14cb249b8 == 0) {
    FUN_14073dd9a(&DAT_14cb249b8,&PTR_LAB_14ac959b0);
  }
  return DAT_14cb249b8;
}



// FUNCTION 146442ffd FUN_146442ffd body=47 status=ok
// SIG undefined FUN_146442ffd(void)

longlong FUN_146442ffd(void)

{
  if (DAT_14cb24990 == 0) {
    FUN_14000fc22(&DAT_14cb24990,&PTR_FUN_14ac955b0);
  }
  return DAT_14cb24990;
}



// FUNCTION 14644302c FUN_14644302c body=47 status=ok
// SIG undefined FUN_14644302c(void)

longlong FUN_14644302c(void)

{
  if (DAT_14cb24998 == 0) {
    FUN_14000fc22(&DAT_14cb24998,&PTR_FUN_14ac95650);
  }
  return DAT_14cb24998;
}



// FUNCTION 14644305b FUN_14644305b body=47 status=ok
// SIG undefined FUN_14644305b(void)

longlong FUN_14644305b(void)

{
  if (DAT_14cb249a0 == 0) {
    FUN_14000fc22(&DAT_14cb249a0,&PTR_FUN_14ac956f8);
  }
  return DAT_14cb249a0;
}



// FUNCTION 14644308a FUN_14644308a body=47 status=ok
// SIG undefined FUN_14644308a(void)

longlong FUN_14644308a(void)

{
  if (DAT_14cb249a8 == 0) {
    FUN_14000fc22(&DAT_14cb249a8,&PTR_FUN_14ac95780);
  }
  return DAT_14cb249a8;
}



// FUNCTION 1464430ba FUN_1464430ba body=34 status=ok
// SIG undefined FUN_1464430ba(void)

void FUN_1464430ba(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140a6d95c();
  FUN_14069c8d6(uVar1,&PTR_s_GetDestructibleData_14ac957c0,4);
  return;
}



// FUNCTION 1464430e1 FUN_1464430e1 body=47 status=ok
// SIG undefined FUN_1464430e1(void)

longlong FUN_1464430e1(void)

{
  if (DAT_14cb249c8 == 0) {
    FUN_1409ce572(&DAT_14cb249c8,&PTR_FUN_14ac95ab0);
  }
  return DAT_14cb249c8;
}



// FUNCTION 146443110 FUN_146443110 body=47 status=ok
// SIG undefined FUN_146443110(void)

longlong FUN_146443110(void)

{
  if (DAT_14cb249e0 == 0) {
    FUN_1409ce572(&DAT_14cb249e0,&PTR_FUN_14ac95b70);
  }
  return DAT_14cb249e0;
}



// FUNCTION 14644313f FUN_14644313f body=89 status=ok
// SIG undefined FUN_14644313f(void)

void FUN_14644313f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac96070;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
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
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  return;
}



// FUNCTION 146443198 FUN_146443198 body=47 status=ok
// SIG undefined FUN_146443198(void)

longlong FUN_146443198(void)

{
  if (DAT_14cb24a00 == 0) {
    FUN_14073dd9a(&DAT_14cb24a00,&PTR_LAB_14ac96028);
  }
  return DAT_14cb24a00;
}



// FUNCTION 1464431c8 FUN_1464431c8 body=78 status=ok
// SIG undefined FUN_1464431c8(void)

void FUN_1464431c8(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_1414229e0();
  if (((lVar3 != 0) && (*(longlong *)(param_1 + 0x260) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38), lVar2 != 0)) {
    fVar1 = *(float *)(lVar3 + 0xf0);
    lVar3 = *(longlong *)(lVar2 + 0x9c8);
    *(undefined8 *)(lVar3 + 0xba0) = 0;
    *(undefined8 *)(lVar3 + 0xba8) = 0;
    *(double *)(lVar3 + 0xbb0) = (double)fVar1;
  }
  return;
}



// FUNCTION 146443216 FUN_146443216 body=231 status=ok
// SIG undefined FUN_146443216(void)

void FUN_146443216(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14ac97b20;
  local_28[3] = &DAT_14cb24a60;
  local_28[4] = FUN_1459cf406;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464432fe FUN_1464432fe body=144 status=ok
// SIG undefined FUN_1464432fe(void)

void FUN_1464432fe(void)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14576a26c(&DAT_14cb10950,local_48,FUN_1459ac9b6);
  FUN_14576a192(&DAT_14cb10a20,local_48,FUN_141257cc6);
  FUN_145afd586(local_48,FUN_1464431c8);
  FUN_14126834e(&DAT_14cb10aa8,local_50,local_48);
  FUN_1401cb1ee(local_48);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146443390 FUN_146443390 body=40 status=ok
// SIG undefined FUN_146443390(void)

undefined8 FUN_146443390(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464433b8 FUN_1464433b8 body=40 status=ok
// SIG undefined FUN_1464433b8(void)

undefined8 FUN_1464433b8(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464433e0 FUN_1464433e0 body=40 status=ok
// SIG undefined FUN_1464433e0(void)

undefined8 FUN_1464433e0(undefined8 param_1,int param_2)

{
  FUN_145b085a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146443408 FUN_146443408 body=40 status=ok
// SIG undefined FUN_146443408(void)

undefined8 FUN_146443408(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146443430 FUN_146443430 body=65 status=ok
// SIG undefined FUN_146443430(void)

undefined8 * FUN_146443430(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac914c0;
  FUN_144760d56(param_1 + 0x26);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146443472 FUN_146443472 body=40 status=ok
// SIG undefined FUN_146443472(void)

undefined8 FUN_146443472(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14644349a FUN_14644349a body=40 status=ok
// SIG undefined FUN_14644349a(void)

undefined8 FUN_14644349a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464434c2 FUN_1464434c2 body=40 status=ok
// SIG undefined FUN_1464434c2(void)

undefined8 FUN_1464434c2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464434ea FUN_1464434ea body=40 status=ok
// SIG undefined FUN_1464434ea(void)

undefined8 FUN_1464434ea(undefined8 param_1,int param_2)

{
  FUN_140caa07a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146443512 FUN_146443512 body=40 status=ok
// SIG undefined FUN_146443512(void)

undefined8 FUN_146443512(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14644353a FUN_14644353a body=29 status=ok
// SIG undefined FUN_14644353a(void)

undefined8 FUN_14644353a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146443558 FUN_146443558 body=29 status=ok
// SIG undefined FUN_146443558(void)

undefined8 FUN_146443558(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146443576 FUN_146443576 body=29 status=ok
// SIG undefined FUN_146443576(void)

undefined8 FUN_146443576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146443594 FUN_146443594 body=93 status=ok
// SIG undefined FUN_146443594(void)

void FUN_146443594(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac97b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464435f2 FUN_1464435f2 body=29 status=ok
// SIG undefined FUN_1464435f2(void)

undefined8 FUN_1464435f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14644360f FUN_14644360f body=47 status=ok
// SIG undefined FUN_14644360f(void)

longlong FUN_14644360f(void)

{
  if (DAT_14cb24b20 == 0) {
    FUN_1409ce572(&DAT_14cb24b20,&PTR_FUN_14ac98d50);
  }
  return DAT_14cb24b20;
}



// FUNCTION 14644363e FUN_14644363e body=47 status=ok
// SIG undefined FUN_14644363e(void)

longlong FUN_14644363e(void)

{
  if (DAT_14cb24b10 == 0) {
    FUN_14073dd9a(&DAT_14cb24b10,&PTR_LAB_14ac98c98);
  }
  return DAT_14cb24b10;
}



// FUNCTION 14644366d FUN_14644366d body=47 status=ok
// SIG undefined FUN_14644366d(void)

longlong FUN_14644366d(void)

{
  if (DAT_14cb24b40 == 0) {
    FUN_14073dd9a(&DAT_14cb24b40,&PTR_LAB_14ac99098);
  }
  return DAT_14cb24b40;
}



// FUNCTION 14644369c FUN_14644369c body=47 status=ok
// SIG undefined FUN_14644369c(void)

longlong FUN_14644369c(void)

{
  if (DAT_14cb24b68 == 0) {
    FUN_14000fc22(&DAT_14cb24b68,&PTR_FUN_14ac99260);
  }
  return DAT_14cb24b68;
}



// FUNCTION 1464436cb FUN_1464436cb body=47 status=ok
// SIG undefined FUN_1464436cb(void)

longlong FUN_1464436cb(void)

{
  if (DAT_14cb24b70 == 0) {
    FUN_14000fc22(&DAT_14cb24b70,&PTR_FUN_14ac99498);
  }
  return DAT_14cb24b70;
}



// FUNCTION 1464436fa FUN_1464436fa body=47 status=ok
// SIG undefined FUN_1464436fa(void)

longlong FUN_1464436fa(void)

{
  if (DAT_14cb24b78 == 0) {
    FUN_14000fc22(&DAT_14cb24b78,&PTR_FUN_14ac99670);
  }
  return DAT_14cb24b78;
}



// FUNCTION 146443729 FUN_146443729 body=47 status=ok
// SIG undefined FUN_146443729(void)

longlong FUN_146443729(void)

{
  if (DAT_14cb24b80 == 0) {
    FUN_14000fc22(&DAT_14cb24b80,&PTR_FUN_14ac99758);
  }
  return DAT_14cb24b80;
}



// FUNCTION 146443758 FUN_146443758 body=47 status=ok
// SIG undefined FUN_146443758(void)

longlong FUN_146443758(void)

{
  if (DAT_14cb24b88 == 0) {
    FUN_14000fc22(&DAT_14cb24b88,&PTR_FUN_14ac99830);
  }
  return DAT_14cb24b88;
}



// FUNCTION 146443787 FUN_146443787 body=47 status=ok
// SIG undefined FUN_146443787(void)

longlong FUN_146443787(void)

{
  if (DAT_14cb24b90 == 0) {
    FUN_14000fc22(&DAT_14cb24b90,&PTR_FUN_14ac99a00);
  }
  return DAT_14cb24b90;
}



// FUNCTION 1464437b6 FUN_1464437b6 body=47 status=ok
// SIG undefined FUN_1464437b6(void)

longlong FUN_1464437b6(void)

{
  if (DAT_14cb24b98 == 0) {
    FUN_14000fc22(&DAT_14cb24b98,&PTR_FUN_14ac99b78);
  }
  return DAT_14cb24b98;
}



// FUNCTION 1464437e5 FUN_1464437e5 body=47 status=ok
// SIG undefined FUN_1464437e5(void)

longlong FUN_1464437e5(void)

{
  if (DAT_14cb24ba0 == 0) {
    FUN_14000fc22(&DAT_14cb24ba0,&PTR_FUN_14ac99cb8);
  }
  return DAT_14cb24ba0;
}



// FUNCTION 146443814 FUN_146443814 body=47 status=ok
// SIG undefined FUN_146443814(void)

longlong FUN_146443814(void)

{
  if (DAT_14cb24ba8 == 0) {
    FUN_14000fc22(&DAT_14cb24ba8,&PTR_FUN_14ac99ee8);
  }
  return DAT_14cb24ba8;
}



// FUNCTION 146443843 FUN_146443843 body=47 status=ok
// SIG undefined FUN_146443843(void)

longlong FUN_146443843(void)

{
  if (DAT_14cb24bb0 == 0) {
    FUN_14000fc22(&DAT_14cb24bb0,&PTR_FUN_14ac99fd0);
  }
  return DAT_14cb24bb0;
}



// FUNCTION 146443872 FUN_146443872 body=47 status=ok
// SIG undefined FUN_146443872(void)

longlong FUN_146443872(void)

{
  if (DAT_14cb24bb8 == 0) {
    FUN_14000fc22(&DAT_14cb24bb8,&PTR_FUN_14ac9a190);
  }
  return DAT_14cb24bb8;
}



// FUNCTION 1464438a1 FUN_1464438a1 body=47 status=ok
// SIG undefined FUN_1464438a1(void)

longlong FUN_1464438a1(void)

{
  if (DAT_14cb24bc0 == 0) {
    FUN_14000fc22(&DAT_14cb24bc0,&PTR_FUN_14ac9a3f8);
  }
  return DAT_14cb24bc0;
}



// FUNCTION 1464438d0 FUN_1464438d0 body=47 status=ok
// SIG undefined FUN_1464438d0(void)

longlong FUN_1464438d0(void)

{
  if (DAT_14cb24bc8 == 0) {
    FUN_14000fc22(&DAT_14cb24bc8,&PTR_FUN_14ac9a4e8);
  }
  return DAT_14cb24bc8;
}



// FUNCTION 1464438ff FUN_1464438ff body=47 status=ok
// SIG undefined FUN_1464438ff(void)

longlong FUN_1464438ff(void)

{
  if (DAT_14cb24bd0 == 0) {
    FUN_14000fc22(&DAT_14cb24bd0,&PTR_FUN_14ac9a660);
  }
  return DAT_14cb24bd0;
}



// FUNCTION 14644392e FUN_14644392e body=47 status=ok
// SIG undefined FUN_14644392e(void)

longlong FUN_14644392e(void)

{
  if (DAT_14cb24bd8 == 0) {
    FUN_14000fc22(&DAT_14cb24bd8,&PTR_FUN_14ac9a878);
  }
  return DAT_14cb24bd8;
}



// FUNCTION 14644395d FUN_14644395d body=47 status=ok
// SIG undefined FUN_14644395d(void)

longlong FUN_14644395d(void)

{
  if (DAT_14cb24be0 == 0) {
    FUN_14000fc22(&DAT_14cb24be0,&PTR_FUN_14ac9aa38);
  }
  return DAT_14cb24be0;
}



// FUNCTION 14644398c FUN_14644398c body=47 status=ok
// SIG undefined FUN_14644398c(void)

longlong FUN_14644398c(void)

{
  if (DAT_14cb24be8 == 0) {
    FUN_14000fc22(&DAT_14cb24be8,&PTR_FUN_14ac9aba8);
  }
  return DAT_14cb24be8;
}



// FUNCTION 1464439bb FUN_1464439bb body=47 status=ok
// SIG undefined FUN_1464439bb(void)

longlong FUN_1464439bb(void)

{
  if (DAT_14cb24bf0 == 0) {
    FUN_14000fc22(&DAT_14cb24bf0,&PTR_FUN_14ac9acc8);
  }
  return DAT_14cb24bf0;
}



// FUNCTION 1464439ea FUN_1464439ea body=47 status=ok
// SIG undefined FUN_1464439ea(void)

longlong FUN_1464439ea(void)

{
  if (DAT_14cb24bf8 == 0) {
    FUN_14000fc22(&DAT_14cb24bf8,&PTR_FUN_14ac9ae88);
  }
  return DAT_14cb24bf8;
}



// FUNCTION 146443a19 FUN_146443a19 body=47 status=ok
// SIG undefined FUN_146443a19(void)

longlong FUN_146443a19(void)

{
  if (DAT_14cb24c00 == 0) {
    FUN_14000fc22(&DAT_14cb24c00,&PTR_FUN_14ac9b000);
  }
  return DAT_14cb24c00;
}



// FUNCTION 146443a48 FUN_146443a48 body=47 status=ok
// SIG undefined FUN_146443a48(void)

longlong FUN_146443a48(void)

{
  if (DAT_14cb24c08 == 0) {
    FUN_14000fc22(&DAT_14cb24c08,&PTR_FUN_14ac9b0e8);
  }
  return DAT_14cb24c08;
}



// FUNCTION 146443a77 FUN_146443a77 body=47 status=ok
// SIG undefined FUN_146443a77(void)

longlong FUN_146443a77(void)

{
  if (DAT_14cb24c10 == 0) {
    FUN_14000fc22(&DAT_14cb24c10,&PTR_FUN_14ac9b228);
  }
  return DAT_14cb24c10;
}



// FUNCTION 146443aa6 FUN_146443aa6 body=47 status=ok
// SIG undefined FUN_146443aa6(void)

longlong FUN_146443aa6(void)

{
  if (DAT_14cb24c18 == 0) {
    FUN_14000fc22(&DAT_14cb24c18,&PTR_FUN_14ac9b2b0);
  }
  return DAT_14cb24c18;
}



// FUNCTION 146443ad5 FUN_146443ad5 body=47 status=ok
// SIG undefined FUN_146443ad5(void)

longlong FUN_146443ad5(void)

{
  if (DAT_14cb24c20 == 0) {
    FUN_14000fc22(&DAT_14cb24c20,&PTR_FUN_14ac9b390);
  }
  return DAT_14cb24c20;
}



// FUNCTION 146443b04 FUN_146443b04 body=47 status=ok
// SIG undefined FUN_146443b04(void)

longlong FUN_146443b04(void)

{
  if (DAT_14cb24c28 == 0) {
    FUN_14000fc22(&DAT_14cb24c28,&PTR_FUN_14ac9b460);
  }
  return DAT_14cb24c28;
}



// FUNCTION 146443b33 FUN_146443b33 body=47 status=ok
// SIG undefined FUN_146443b33(void)

longlong FUN_146443b33(void)

{
  if (DAT_14cb24c30 == 0) {
    FUN_14000fc22(&DAT_14cb24c30,&PTR_FUN_14ac9b558);
  }
  return DAT_14cb24c30;
}



// FUNCTION 146443b62 FUN_146443b62 body=47 status=ok
// SIG undefined FUN_146443b62(void)

longlong FUN_146443b62(void)

{
  if (DAT_14cb24c38 == 0) {
    FUN_14000fc22(&DAT_14cb24c38,&PTR_FUN_14ac9b690);
  }
  return DAT_14cb24c38;
}



// FUNCTION 146443b92 FUN_146443b92 body=34 status=ok
// SIG undefined FUN_146443b92(void)

void FUN_146443b92(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a773f0();
  FUN_14069c8d6(uVar1,&PTR_s_ApplyActionOnEvent_14ac9b6d0,0x1b);
  return;
}



// FUNCTION 146443bb4 FUN_146443bb4 body=47 status=ok
// SIG undefined FUN_146443bb4(void)

longlong FUN_146443bb4(void)

{
  if (DAT_14cb24c60 == 0) {
    FUN_14073dd9a(&DAT_14cb24c60,&PTR_LAB_14ac9bb98);
  }
  return DAT_14cb24c60;
}



// FUNCTION 146443be3 FUN_146443be3 body=47 status=ok
// SIG undefined FUN_146443be3(void)

longlong FUN_146443be3(void)

{
  if (DAT_14cb24c70 == 0) {
    FUN_1409ce572(&DAT_14cb24c70,&PTR_FUN_14ac9bc90);
  }
  return DAT_14cb24c70;
}



// FUNCTION 146443c12 FUN_146443c12 body=55 status=ok
// SIG undefined FUN_146443c12(void)

void FUN_146443c12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24c90 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24c90 = FUN_140002ddd(FUN_146443c49,uVar1,L"GbxAudioZoneEffectProvider");
  }
  return;
}



// FUNCTION 146443c49 FUN_146443c49 body=47 status=ok
// SIG undefined FUN_146443c49(void)

longlong FUN_146443c49(void)

{
  if (DAT_14cb24c88 == 0) {
    FUN_14086a14e(&DAT_14cb24c88,&PTR_FUN_14ac9bd18);
  }
  return DAT_14cb24c88;
}



// FUNCTION 146443c78 FUN_146443c78 body=48 status=ok
// SIG undefined FUN_146443c78(void)

void FUN_146443c78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14ac9f1a0;
  return;
}



// FUNCTION 146443ca8 FUN_146443ca8 body=55 status=ok
// SIG undefined FUN_146443ca8(void)

void FUN_146443ca8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ca8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ca8 = FUN_140002ddd(FUN_146443cdf,uVar1,L"GbxAudioAcousticsDataProvider");
  }
  return;
}



// FUNCTION 146443cdf FUN_146443cdf body=47 status=ok
// SIG undefined FUN_146443cdf(void)

longlong FUN_146443cdf(void)

{
  if (DAT_14cb24ca0 == 0) {
    FUN_14086a14e(&DAT_14cb24ca0,&PTR_FUN_14ac9bdb0);
  }
  return DAT_14cb24ca0;
}



// FUNCTION 146443d0e FUN_146443d0e body=48 status=ok
// SIG undefined FUN_146443d0e(void)

void FUN_146443d0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14ac9f330;
  return;
}



// FUNCTION 146443d3e FUN_146443d3e body=55 status=ok
// SIG undefined FUN_146443d3e(void)

void FUN_146443d3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24cc0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24cc0 = FUN_140002ddd(FUN_1418188f4,uVar1,L"GbxAudioEvent");
  }
  return;
}



// FUNCTION 146443d76 FUN_146443d76 body=48 status=ok
// SIG undefined FUN_146443d76(void)

void FUN_146443d76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ac9f4d0;
  return;
}



// FUNCTION 146443db1 FUN_146443db1 body=47 status=ok
// SIG undefined FUN_146443db1(void)

longlong FUN_146443db1(void)

{
  if (DAT_14cb24cd8 == 0) {
    FUN_14073dd9a(&DAT_14cb24cd8,&PTR_LAB_14ac9c648);
  }
  return DAT_14cb24cd8;
}



// FUNCTION 146443de0 FUN_146443de0 body=55 status=ok
// SIG undefined FUN_146443de0(void)

void FUN_146443de0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24cf0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24cf0 = FUN_140002ddd(FUN_146443e17,uVar1,L"GbxAudioGraphFloatArray");
  }
  return;
}



// FUNCTION 146443e17 FUN_146443e17 body=49 status=ok
// SIG undefined FUN_146443e17(void)

longlong FUN_146443e17(void)

{
  if (DAT_14cb24ce8 == 0) {
    FUN_14086a14e(&DAT_14cb24ce8,&PTR_FUN_14ac9c7c0);
  }
  return DAT_14cb24ce8;
}



// FUNCTION 146443e48 FUN_146443e48 body=48 status=ok
// SIG undefined FUN_146443e48(void)

void FUN_146443e48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ac9f630;
  return;
}



// FUNCTION 146443e78 FUN_146443e78 body=55 status=ok
// SIG undefined FUN_146443e78(void)

void FUN_146443e78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d08 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d08 = FUN_140002ddd(FUN_146443eaf,uVar1,L"GbxAudioGraphSettings");
  }
  return;
}



// FUNCTION 146443eaf FUN_146443eaf body=47 status=ok
// SIG undefined FUN_146443eaf(void)

longlong FUN_146443eaf(void)

{
  if (DAT_14cb24d00 == 0) {
    FUN_14086a14e(&DAT_14cb24d00,&PTR_FUN_14ac9c8c8);
  }
  return DAT_14cb24d00;
}



// FUNCTION 146443ede FUN_146443ede body=48 status=ok
// SIG undefined FUN_146443ede(void)

void FUN_146443ede(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14ac9f790;
  return;
}



// FUNCTION 146443f0e FUN_146443f0e body=47 status=ok
// SIG undefined FUN_146443f0e(void)

longlong FUN_146443f0e(void)

{
  if (DAT_14cb24d18 == 0) {
    FUN_1409ce572(&DAT_14cb24d18,&PTR_FUN_14ac9c950);
  }
  return DAT_14cb24d18;
}



// FUNCTION 146443f3e FUN_146443f3e body=55 status=ok
// SIG undefined FUN_146443f3e(void)

void FUN_146443f3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d38 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d38 = FUN_140002ddd(FUN_146443f75,uVar1,L"GbxAudioGraphState");
  }
  return;
}



// FUNCTION 146443f75 FUN_146443f75 body=47 status=ok
// SIG undefined FUN_146443f75(void)

longlong FUN_146443f75(void)

{
  if (DAT_14cb24d30 == 0) {
    FUN_14086a14e(&DAT_14cb24d30,&PTR_FUN_14ac9ca48);
  }
  return DAT_14cb24d30;
}



// FUNCTION 146443fa4 FUN_146443fa4 body=48 status=ok
// SIG undefined FUN_146443fa4(void)

void FUN_146443fa4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000168;
  *puVar1 = &PTR_FUN_14ac9fa30;
  return;
}



// FUNCTION 146443fd4 FUN_146443fd4 body=68 status=ok
// SIG undefined FUN_146443fd4(void)

void FUN_146443fd4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac9cb20;
  puVar1[5] = &PTR_FUN_14ac9cdd0;
  puVar1[10] = &PTR_FUN_14ac9ce00;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 14644401d FUN_14644401d body=47 status=ok
// SIG undefined FUN_14644401d(void)

longlong FUN_14644401d(void)

{
  if (DAT_14cb24d50 == 0) {
    FUN_14073dd9a(&DAT_14cb24d50,&PTR_LAB_14ac9cad8);
  }
  return DAT_14cb24d50;
}



// FUNCTION 14644404c FUN_14644404c body=55 status=ok
// SIG undefined FUN_14644404c(void)

void FUN_14644404c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d68 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d68 = FUN_140002ddd(FUN_146444083,uVar1,L"GbxAudioNodeAspectSettings");
  }
  return;
}



// FUNCTION 146444083 FUN_146444083 body=47 status=ok
// SIG undefined FUN_146444083(void)

longlong FUN_146444083(void)

{
  if (DAT_14cb24d60 == 0) {
    FUN_14086a14e(&DAT_14cb24d60,&PTR_FUN_14ac9cf70);
  }
  return DAT_14cb24d60;
}



// FUNCTION 1464440b2 FUN_1464440b2 body=48 status=ok
// SIG undefined FUN_1464440b2(void)

void FUN_1464440b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ac9fba0;
  return;
}



// FUNCTION 1464440e2 FUN_1464440e2 body=55 status=ok
// SIG undefined FUN_1464440e2(void)

void FUN_1464440e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d80 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d80 = FUN_140002ddd(FUN_146444119,uVar1,L"GbxAudioNodeAspectState");
  }
  return;
}



// FUNCTION 146444119 FUN_146444119 body=47 status=ok
// SIG undefined FUN_146444119(void)

longlong FUN_146444119(void)

{
  if (DAT_14cb24d78 == 0) {
    FUN_14086a14e(&DAT_14cb24d78,&PTR_FUN_14ac9cff0);
  }
  return DAT_14cb24d78;
}



// FUNCTION 146444148 FUN_146444148 body=48 status=ok
// SIG undefined FUN_146444148(void)

void FUN_146444148(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ac9fd90;
  return;
}



// FUNCTION 146444178 FUN_146444178 body=55 status=ok
// SIG undefined FUN_146444178(void)

void FUN_146444178(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d98 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d98 = FUN_140002ddd(FUN_1464441af,uVar1,L"GbxAudioNodeAspectSettings_Data");
  }
  return;
}



// FUNCTION 1464441af FUN_1464441af body=49 status=ok
// SIG undefined FUN_1464441af(void)

longlong FUN_1464441af(void)

{
  if (DAT_14cb24d90 == 0) {
    FUN_14086a14e(&DAT_14cb24d90,&PTR_FUN_14ac9d088);
  }
  return DAT_14cb24d90;
}



// FUNCTION 1464441e0 FUN_1464441e0 body=48 status=ok
// SIG undefined FUN_1464441e0(void)

void FUN_1464441e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ac9ff80;
  return;
}



// FUNCTION 146444210 FUN_146444210 body=55 status=ok
// SIG undefined FUN_146444210(void)

void FUN_146444210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24db0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24db0 = FUN_140002ddd(FUN_146444247,uVar1,L"GbxAudioNodeAspectState_Data");
  }
  return;
}



// FUNCTION 146444247 FUN_146444247 body=49 status=ok
// SIG undefined FUN_146444247(void)

longlong FUN_146444247(void)

{
  if (DAT_14cb24da8 == 0) {
    FUN_14086a14e(&DAT_14cb24da8,&PTR_FUN_14ac9d118);
  }
  return DAT_14cb24da8;
}



// FUNCTION 146444278 FUN_146444278 body=48 status=ok
// SIG undefined FUN_146444278(void)

void FUN_146444278(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14aca0170;
  return;
}



// FUNCTION 1464442a8 FUN_1464442a8 body=55 status=ok
// SIG undefined FUN_1464442a8(void)

void FUN_1464442a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24dc8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24dc8 = FUN_140002ddd(FUN_1464442df,uVar1,L"GbxAudioNodeAspectSettings_Action");
  }
  return;
}



// FUNCTION 1464442df FUN_1464442df body=49 status=ok
// SIG undefined FUN_1464442df(void)

longlong FUN_1464442df(void)

{
  if (DAT_14cb24dc0 == 0) {
    FUN_14086a14e(&DAT_14cb24dc0,&PTR_FUN_14ac9d1b8);
  }
  return DAT_14cb24dc0;
}



// FUNCTION 146444310 FUN_146444310 body=48 status=ok
// SIG undefined FUN_146444310(void)

void FUN_146444310(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14aca0360;
  return;
}



// FUNCTION 146444340 FUN_146444340 body=55 status=ok
// SIG undefined FUN_146444340(void)

void FUN_146444340(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24de0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24de0 = FUN_140002ddd(FUN_146444377,uVar1,L"GbxAudioNodeAspectState_Action");
  }
  return;
}



// FUNCTION 146444377 FUN_146444377 body=49 status=ok
// SIG undefined FUN_146444377(void)

longlong FUN_146444377(void)

{
  if (DAT_14cb24dd8 == 0) {
    FUN_14086a14e(&DAT_14cb24dd8,&PTR_FUN_14ac9d250);
  }
  return DAT_14cb24dd8;
}



// FUNCTION 1464443a8 FUN_1464443a8 body=48 status=ok
// SIG undefined FUN_1464443a8(void)

void FUN_1464443a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14aca0550;
  return;
}



// FUNCTION 1464443d8 FUN_1464443d8 body=47 status=ok
// SIG undefined FUN_1464443d8(void)

longlong FUN_1464443d8(void)

{
  if (DAT_14cb24df0 == 0) {
    FUN_1409ce572(&DAT_14cb24df0,&PTR_FUN_14ac9d3d0);
  }
  return DAT_14cb24df0;
}



// FUNCTION 146444408 FUN_146444408 body=55 status=ok
// SIG undefined FUN_146444408(void)

void FUN_146444408(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e10 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e10 = FUN_140002ddd(FUN_14644443f,uVar1,L"GbxAudioNodeAspectSettings_SpawnEmitter");
  }
  return;
}



// FUNCTION 14644443f FUN_14644443f body=47 status=ok
// SIG undefined FUN_14644443f(void)

longlong FUN_14644443f(void)

{
  if (DAT_14cb24e08 == 0) {
    FUN_14086a14e(&DAT_14cb24e08,&PTR_FUN_14ac9d5e0);
  }
  return DAT_14cb24e08;
}



// FUNCTION 14644446e FUN_14644446e body=48 status=ok
// SIG undefined FUN_14644446e(void)

void FUN_14644446e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000e0;
  *puVar1 = &PTR_FUN_14aca07e0;
  return;
}



// FUNCTION 14644449e FUN_14644449e body=55 status=ok
// SIG undefined FUN_14644449e(void)

void FUN_14644449e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e28 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e28 = FUN_140002ddd(FUN_1464444d5,uVar1,L"GbxAudioNodeAspectState_SpawnEmitter");
  }
  return;
}



// FUNCTION 1464444d5 FUN_1464444d5 body=47 status=ok
// SIG undefined FUN_1464444d5(void)

longlong FUN_1464444d5(void)

{
  if (DAT_14cb24e20 == 0) {
    FUN_14086a14e(&DAT_14cb24e20,&PTR_FUN_14ac9d688);
  }
  return DAT_14cb24e20;
}



// FUNCTION 146444504 FUN_146444504 body=48 status=ok
// SIG undefined FUN_146444504(void)

void FUN_146444504(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14aca09d0;
  return;
}



// FUNCTION 146444534 FUN_146444534 body=55 status=ok
// SIG undefined FUN_146444534(void)

void FUN_146444534(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e40 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e40 = FUN_140002ddd(FUN_14644456b,uVar1,L"GbxAudioNodeAspectSettings_GetEmitter");
  }
  return;
}



// FUNCTION 14644456b FUN_14644456b body=47 status=ok
// SIG undefined FUN_14644456b(void)

longlong FUN_14644456b(void)

{
  if (DAT_14cb24e38 == 0) {
    FUN_14086a14e(&DAT_14cb24e38,&PTR_FUN_14ac9d778);
  }
  return DAT_14cb24e38;
}



// FUNCTION 14644459a FUN_14644459a body=48 status=ok
// SIG undefined FUN_14644459a(void)

void FUN_14644459a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14aca0bc0;
  return;
}



// FUNCTION 1464445ca FUN_1464445ca body=55 status=ok
// SIG undefined FUN_1464445ca(void)

void FUN_1464445ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e58 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e58 = FUN_140002ddd(FUN_146444601,uVar1,L"GbxAudioNodeAspectState_GetEmitter");
  }
  return;
}



// FUNCTION 146444601 FUN_146444601 body=47 status=ok
// SIG undefined FUN_146444601(void)

longlong FUN_146444601(void)

{
  if (DAT_14cb24e50 == 0) {
    FUN_14086a14e(&DAT_14cb24e50,&PTR_FUN_14ac9d820);
  }
  return DAT_14cb24e50;
}



// FUNCTION 146444630 FUN_146444630 body=48 status=ok
// SIG undefined FUN_146444630(void)

void FUN_146444630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14aca0db0;
  return;
}



// FUNCTION 146444660 FUN_146444660 body=55 status=ok
// SIG undefined FUN_146444660(void)

void FUN_146444660(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e70 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e70 = FUN_140002ddd(FUN_146444697,uVar1,L"GbxAudioNodeAspectSettings_PostEvent");
  }
  return;
}



// FUNCTION 146444697 FUN_146444697 body=47 status=ok
// SIG undefined FUN_146444697(void)

longlong FUN_146444697(void)

{
  if (DAT_14cb24e68 == 0) {
    FUN_14086a14e(&DAT_14cb24e68,&PTR_FUN_14ac9da18);
  }
  return DAT_14cb24e68;
}



// FUNCTION 1464446c6 FUN_1464446c6 body=48 status=ok
// SIG undefined FUN_1464446c6(void)

void FUN_1464446c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a8;
  *puVar1 = &PTR_FUN_14aca0fa0;
  return;
}



// FUNCTION 1464446f6 FUN_1464446f6 body=47 status=ok
// SIG undefined FUN_1464446f6(void)

longlong FUN_1464446f6(void)

{
  if (DAT_14cb24e80 == 0) {
    FUN_14086a14e(&DAT_14cb24e80,&PTR_FUN_14ac9dab8);
  }
  return DAT_14cb24e80;
}



// FUNCTION 146444726 FUN_146444726 body=48 status=ok
// SIG undefined FUN_146444726(void)

void FUN_146444726(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14aca1190;
  return;
}



// FUNCTION 146444756 FUN_146444756 body=55 status=ok
// SIG undefined FUN_146444756(void)

void FUN_146444756(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ea0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ea0 = FUN_140002ddd(FUN_14644478d,uVar1,L"GbxAudioNodeAspectSettings_MidiNote");
  }
  return;
}



// FUNCTION 14644478d FUN_14644478d body=47 status=ok
// SIG undefined FUN_14644478d(void)

longlong FUN_14644478d(void)

{
  if (DAT_14cb24e98 == 0) {
    FUN_14086a14e(&DAT_14cb24e98,&PTR_FUN_14ac9dc08);
  }
  return DAT_14cb24e98;
}



// FUNCTION 1464447bc FUN_1464447bc body=48 status=ok
// SIG undefined FUN_1464447bc(void)

void FUN_1464447bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14aca1380;
  return;
}



// FUNCTION 1464447ec FUN_1464447ec body=55 status=ok
// SIG undefined FUN_1464447ec(void)

void FUN_1464447ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24eb8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24eb8 = FUN_140002ddd(FUN_146444823,uVar1,L"GbxAudioNodeAspectState_MidiNote");
  }
  return;
}



// FUNCTION 146444823 FUN_146444823 body=47 status=ok
// SIG undefined FUN_146444823(void)

longlong FUN_146444823(void)

{
  if (DAT_14cb24eb0 == 0) {
    FUN_14086a14e(&DAT_14cb24eb0,&PTR_FUN_14ac9dca8);
  }
  return DAT_14cb24eb0;
}



// FUNCTION 146444852 FUN_146444852 body=48 status=ok
// SIG undefined FUN_146444852(void)

void FUN_146444852(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14aca1570;
  return;
}



// FUNCTION 146444882 FUN_146444882 body=55 status=ok
// SIG undefined FUN_146444882(void)

void FUN_146444882(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ed0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ed0 = FUN_140002ddd(FUN_1464448b9,uVar1,L"GbxAudioNodeAspectSettings_Rtpc");
  }
  return;
}



// FUNCTION 1464448b9 FUN_1464448b9 body=47 status=ok
// SIG undefined FUN_1464448b9(void)

longlong FUN_1464448b9(void)

{
  if (DAT_14cb24ec8 == 0) {
    FUN_14086a14e(&DAT_14cb24ec8,&PTR_FUN_14ac9dd98);
  }
  return DAT_14cb24ec8;
}



// FUNCTION 1464448e8 FUN_1464448e8 body=48 status=ok
// SIG undefined FUN_1464448e8(void)

void FUN_1464448e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14aca1760;
  return;
}



// FUNCTION 146444918 FUN_146444918 body=55 status=ok
// SIG undefined FUN_146444918(void)

void FUN_146444918(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ee8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ee8 = FUN_140002ddd(FUN_14644494f,uVar1,L"GbxAudioNodeAspectState_Rtpc");
  }
  return;
}



// FUNCTION 14644494f FUN_14644494f body=47 status=ok
// SIG undefined FUN_14644494f(void)

longlong FUN_14644494f(void)

{
  if (DAT_14cb24ee0 == 0) {
    FUN_14086a14e(&DAT_14cb24ee0,&PTR_FUN_14ac9de28);
  }
  return DAT_14cb24ee0;
}



// FUNCTION 14644497e FUN_14644497e body=48 status=ok
// SIG undefined FUN_14644497e(void)

void FUN_14644497e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14aca1950;
  return;
}



// FUNCTION 1464449ae FUN_1464449ae body=55 status=ok
// SIG undefined FUN_1464449ae(void)

void FUN_1464449ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24f00 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24f00 = FUN_140002ddd(FUN_1464449e5,uVar1,L"GbxAudioNodeAspectSettings_SetSwitch");
  }
  return;
}



// FUNCTION 1464449e5 FUN_1464449e5 body=47 status=ok
// SIG undefined FUN_1464449e5(void)

longlong FUN_1464449e5(void)

{
  if (DAT_14cb24ef8 == 0) {
    FUN_14086a14e(&DAT_14cb24ef8,&PTR_FUN_14ac9df28);
  }
  return DAT_14cb24ef8;
}


