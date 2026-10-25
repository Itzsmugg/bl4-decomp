// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476ca88a FUN_1476ca88a body=120 status=ok
// SIG undefined FUN_1476ca88a(void)

undefined8 * FUN_1476ca88a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab75a8) {
    FUN_144b3d300(&DAT_14cab75a8);
    if (DAT_14cab75a8 == -1) {
      FUN_1446ddc76(&DAT_14cab75a0,"FontOutlineSettings",1);
      _Init_thread_footer(&DAT_14cab75a8);
    }
  }
  *param_1 = DAT_14cab75a0;
  return param_1;
}



// FUNCTION 1476ca902 FUN_1476ca902 body=451 status=ok
// SIG undefined FUN_1476ca902(void)

longlong *
FUN_1476ca902(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (param_5 < (int)param_4[1])) {
    if (param_3 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = *(longlong *)(param_3 + 0x50);
    }
    local_48 = 0xffffffff;
    local_44 = 0x101;
    local_42 = 0;
    local_58 = param_3;
    FUN_144a2daf0(&local_58);
    if (local_50 != 0) {
      do {
        lVar2 = local_50;
        if (*(longlong *)(local_50 + 0x20) == *(longlong *)(*param_4 + (longlong)param_5 * 8)) {
          lVar4 = *(longlong *)(local_50 + 8);
          lVar3 = FUN_1446dcc8c();
          if (*(ulonglong *)(lVar3 + 8) == 0) {
            bVar5 = lVar4 != 0;
            if (lVar4 == lVar3 || !bVar5) goto LAB_1476caa5e;
            goto LAB_1476caa4a;
          }
          if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1476caa02;
          break;
        }
        local_50 = *(longlong *)(local_50 + 0x18);
        FUN_144a2daf0(&local_58);
      } while (local_50 != 0);
    }
  }
  goto LAB_1476ca9b1;
  while (lVar4 != 0) {
LAB_1476caa4a:
    lVar4 = *(longlong *)(lVar4 + 0x30);
    bVar5 = lVar4 != 0;
    if (lVar4 == lVar3) break;
  }
LAB_1476caa5e:
  if (bVar5) {
LAB_1476caa02:
    if ((int)param_4[1] + -1 != param_5) {
      local_98 = param_5 + 1;
      local_88 = (undefined4)*param_4;
      uStack_84 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_80 = (undefined4)param_4[1];
      uStack_7c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_1476ca902(param_1,param_2 + *(int *)(lVar2 + 0x44),*(undefined8 *)(lVar2 + 0x70));
      goto LAB_1476ca9b7;
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x18);
    FUN_1476ca79a(&local_60);
    if (((lVar4 == local_60) || (FUN_1476ca812(&local_68), lVar4 == local_68)) ||
       (FUN_1476ca88a(&local_70), lVar4 == local_70)) {
      iVar1 = *(int *)(lVar2 + 0x44);
      *param_1 = lVar4;
      param_1[1] = param_2 + iVar1;
      goto LAB_1476ca9b7;
    }
  }
LAB_1476ca9b1:
  *param_1 = 0;
  param_1[1] = 0;
LAB_1476ca9b7:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1476caaca FUN_1476caaca body=37 status=ok
// SIG undefined FUN_1476caaca(void)

void FUN_1476caaca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476caaf0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476caaf0 FUN_1476caaf0 body=104 status=ok
// SIG undefined FUN_1476caaf0(void)

byte FUN_1476caaf0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  byte local_21;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    local_21 = 0;
    bVar1 = FUN_1476f8d11(lVar2,param_1 + 0x30,&local_21,local_20);
    bVar1 = bVar1 & local_21;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cab5c FUN_1476cab5c body=26 status=ok
// SIG undefined FUN_1476cab5c(void)

bool FUN_1476cab5c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = FUN_144a5ab96();
  return lVar1 == lVar2;
}



// FUNCTION 1476cab76 FUN_1476cab76 body=26 status=ok
// SIG undefined FUN_1476cab76(void)

bool FUN_1476cab76(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = FUN_144a5ab96();
  return lVar1 == lVar2;
}



// FUNCTION 1476cab90 FUN_1476cab90 body=156 status=ok
// SIG undefined FUN_1476cab90(void)

void FUN_1476cab90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8 [20];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476cac2e(param_1,local_c8);
  FUN_140f13d9e(param_3,local_c8);
  local_c8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cac2e FUN_1476cac2e body=640 status=ok
// SIG undefined FUN_1476cac2e(void)

undefined8 * FUN_1476cac2e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar5 != 0) {
    if ((*(char *)(param_1 + 0x71) != '\x01') || (*(char *)(param_1 + 0x70) == '\0')) {
      FUN_140ca8f8e(param_2);
      cVar4 = FUN_1476f9904(lVar5,param_1 + 0x30,param_2,&local_e8);
      if (cVar4 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x100;
        goto LAB_1476cad7c;
      }
      *param_2 = &PTR_FUN_149ed05f0;
      plVar3 = (longlong *)param_2[0x14];
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
    }
    if ((*(char *)(param_1 + 0x71) != '\x01') || (*(char *)(param_1 + 0x70) == '\x01')) {
      cVar4 = FUN_1476fa4e2(lVar5,param_1 + 0x30,&local_30,&local_e8);
      lVar5 = local_30;
      if ((cVar4 != '\0') && (local_30 != 0)) {
        lVar6 = FUN_144a79692();
        lVar7 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          *(undefined2 *)(param_1 + 0x70) = 0x101;
          lVar7 = FUN_145a69e6c();
          if (*(longlong *)(lVar7 + 0x110) == 0) {
            FUN_140aa6c08(lVar7);
          }
          FUN_1477a4f1e(param_2,lVar5,0,0);
          goto LAB_1476cad7c;
        }
      }
    }
  }
  local_30 = DAT_14c84635c;
  FUN_1412ce202(&local_e8);
  *param_2 = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_2 + 1) = local_e0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_dc;
  *(undefined4 *)(param_2 + 2) = uStack_d8;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_d4;
  *(undefined4 *)(param_2 + 3) = local_d0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_cc;
  *(undefined4 *)(param_2 + 4) = uStack_c8;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_c4;
  *(undefined4 *)(param_2 + 5) = local_c0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_bc;
  *(undefined4 *)(param_2 + 6) = uStack_b8;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_b4;
  param_2[7] = local_b0;
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar8 = local_a8;
  puVar9 = param_2 + 8;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)((longlong)param_2 + 0x94) = local_54;
  *(undefined4 *)(param_2 + 0x12) = local_58;
  param_2[0x13] = local_50;
  param_2[0x14] = local_48;
  if (local_48 == (longlong *)0x0) {
    param_2[0x15] = local_40;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    param_2[0x15] = local_40;
    local_e8 = &PTR_FUN_149ed05f0;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
LAB_1476cad7c:
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476caeba FUN_1476caeba body=224 status=ok
// SIG undefined FUN_1476caeba(void)

undefined8 FUN_1476caeba(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1476caf45;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1476caf45;
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_1476caef8;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1476caef8:
      lVar3 = *(longlong *)(param_2 + 0x70);
      lVar1 = FUN_144a79692();
      if ((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                         *(longlong *)
                          (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                         lVar1 + 0x30);
      }
      return uVar2;
    }
  }
LAB_1476caf45:
  uVar2 = FUN_1476f989a(param_2);
  return uVar2;
}



// FUNCTION 1476caf9a FUN_1476caf9a body=37 status=ok
// SIG undefined FUN_1476caf9a(void)

void FUN_1476caf9a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476cafc0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476cafc0 FUN_1476cafc0 body=180 status=ok
// SIG undefined FUN_1476cafc0(void)

undefined1 FUN_1476cafc0(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar4 != 0) {
    if ((*(char *)(param_1 + 0x71) != '\x01') || (bVar1 = 1, *(char *)(param_1 + 0x70) == '\0')) {
      local_21 = 0;
      cVar3 = FUN_1476fa860(lVar4,param_1 + 0x30,&local_21,local_20);
      if (cVar3 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x100;
        uVar2 = local_21;
        goto LAB_1476cb002;
      }
      bVar1 = *(byte *)(param_1 + 0x71);
    }
    if (((bVar1 & 1) == 0) || (*(char *)(param_1 + 0x70) == '\x01')) {
      local_21 = 0;
      cVar3 = FUN_1476f8d11(lVar4,param_1 + 0x30,&local_21,local_20);
      if (cVar3 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x101;
        uVar2 = local_21;
        goto LAB_1476cb002;
      }
    }
  }
  uVar2 = 0;
LAB_1476cb002:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1476cb078 FUN_1476cb078 body=46 status=ok
// SIG undefined FUN_1476cb078(void)

bool FUN_1476cb078(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x2a8))();
  bVar4 = true;
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_2 + 8);
    lVar3 = FUN_144a5ab96();
    bVar4 = lVar1 == lVar3;
  }
  return bVar4;
}



// FUNCTION 1476cb0a6 FUN_1476cb0a6 body=330 status=ok
// SIG undefined FUN_1476cb0a6(void)

undefined8 FUN_1476cb0a6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6cd0) && (FUN_144b3d300(&DAT_14cab6cd0), DAT_14cab6cd0 == -1)) {
    FUN_1446f470e(&DAT_14cab6cc8,L"ECheckBoxState",1);
    _Init_thread_footer(&DAT_14cab6cd0);
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_2[1];
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      lVar3 = 0x78;
      if (bVar4) goto LAB_1476cb0fa;
    }
    else {
      lVar3 = 0x78;
      if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) goto LAB_1476cb0fa;
    }
    lVar2 = param_2[1];
    lVar1 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar2 = (**(code **)(*param_2 + 0x1f0))(param_2);
    lVar3 = 0x70;
    if (lVar2 != 0) {
LAB_1476cb0fa:
      lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + lVar3) + 0x18);
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == DAT_14cab6cc8);
    }
  }
  return 0;
}



// FUNCTION 1476cb1f0 FUN_1476cb1f0 body=88 status=ok
// SIG undefined FUN_1476cb1f0(void)

void FUN_1476cb1f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476cb24a(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cb24a FUN_1476cb24a body=236 status=ok
// SIG undefined FUN_1476cb24a(void)

undefined8 * FUN_1476cb24a(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 == 0) {
LAB_1476cb28e:
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x71) != '\x01') || (bVar1 = 1, *(char *)(param_1 + 0x70) == '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
      cVar2 = FUN_1476fc202(lVar3,param_1 + 0x30,param_2,&local_40);
      if (cVar2 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x100;
        goto LAB_1476cb294;
      }
      bVar1 = *(byte *)(param_1 + 0x71);
    }
    if (((bVar1 & 1) != 0) && (*(char *)(param_1 + 0x70) != '\x01')) goto LAB_1476cb28e;
    local_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0x3f800000;
    uStack_34 = 0x3f800000;
    local_30 = '\0';
    cVar2 = FUN_1476fb625(lVar3,param_1 + 0x30,&local_40,local_28);
    if (cVar2 == '\0') goto LAB_1476cb28e;
    *(undefined2 *)(param_1 + 0x70) = 0x101;
    uVar5 = local_40;
    uVar6 = uStack_3c;
    uVar7 = uStack_38;
    uVar8 = uStack_34;
    if (local_30 == '\x01') {
      puVar4 = (undefined4 *)FUN_1400c06fe(&local_40);
      uVar5 = *puVar4;
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      uVar8 = puVar4[3];
    }
  }
  *(undefined4 *)param_2 = uVar5;
  *(undefined4 *)((longlong)param_2 + 4) = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
LAB_1476cb294:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476cb338 FUN_1476cb338 body=94 status=ok
// SIG undefined FUN_1476cb338(void)

void FUN_1476cb338(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476cb398(param_1,&local_2c);
  param_3[4] = local_1c;
  *param_3 = local_2c;
  param_3[1] = uStack_28;
  param_3[2] = uStack_24;
  param_3[3] = uStack_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cb398 FUN_1476cb398 body=218 status=ok
// SIG undefined FUN_1476cb398(void)

undefined4 * FUN_1476cb398(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 == 0) {
LAB_1476cb3dc:
    uVar4 = 0x3f800000;
    uVar5 = 0;
    uVar6 = 0x3f800000;
    uVar7 = 0x3f800000;
  }
  else {
    if ((*(char *)(param_1 + 0x71) != '\x01') || (bVar1 = 1, *(char *)(param_1 + 0x70) == '\0')) {
      *param_2 = 0x3f800000;
      param_2[1] = 0;
      param_2[2] = 0x3f800000;
      param_2[3] = 0x3f800000;
      *(undefined1 *)(param_2 + 4) = 0;
      cVar2 = FUN_1476fb625(lVar3,param_1 + 0x30,param_2,&local_38);
      if (cVar2 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x100;
        goto LAB_1476cb3ea;
      }
      bVar1 = *(byte *)(param_1 + 0x71);
    }
    if (((bVar1 & 1) != 0) && (*(char *)(param_1 + 0x70) != '\x01')) goto LAB_1476cb3dc;
    local_38 = 0;
    uStack_30 = 0;
    cVar2 = FUN_1476fc202(lVar3,param_1 + 0x30,&local_38,local_28);
    if (cVar2 == '\0') goto LAB_1476cb3dc;
    *(undefined2 *)(param_1 + 0x70) = 0x101;
    uVar4 = (undefined4)local_38;
    uVar5 = local_38._4_4_;
    uVar6 = (undefined4)uStack_30;
    uVar7 = uStack_30._4_4_;
  }
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_1476cb3ea:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cb484 FUN_1476cb484 body=41 status=ok
// SIG undefined FUN_1476cb484(void)

undefined1 FUN_1476cb484(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1476fb4fc(param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_1476fb566(param_2);
  return uVar2;
}



// FUNCTION 1476cb4ae FUN_1476cb4ae body=259 status=ok
// SIG undefined FUN_1476cb4ae(void)

void FUN_1476cb4ae(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  cVar1 = FUN_1476fb4fc(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_1476fb566(param_2);
    if (cVar1 == '\0') {
      return;
    }
    puVar3 = (undefined8 *)&DAT_14cab6d0c;
    if (DAT_14cab6d14 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) goto LAB_1476cb4f4;
    puVar4 = &DAT_14cab6d14;
    FUN_144b3d300(&DAT_14cab6d14);
    if (DAT_14cab6d14 != -1) goto LAB_1476cb4f4;
    puVar3 = (undefined8 *)&DAT_14cab6d0c;
    pwVar2 = L"GetLinearValue";
  }
  else {
    puVar3 = &DAT_14cab6d00;
    if (DAT_14cab6d08 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) goto LAB_1476cb4f4;
    puVar4 = &DAT_14cab6d08;
    FUN_144b3d300(&DAT_14cab6d08);
    if (DAT_14cab6d08 != -1) goto LAB_1476cb4f4;
    puVar3 = &DAT_14cab6d00;
    pwVar2 = L"GetSlateValue";
  }
  FUN_1446f470e(puVar3,pwVar2,1);
  _Init_thread_footer(puVar4);
LAB_1476cb4f4:
  FUN_14485c47a(param_3,param_1);
  *(undefined8 *)(param_3 + 8) = *puVar3;
  return;
}



// FUNCTION 1476cb5b2 FUN_1476cb5b2 body=39 status=ok
// SIG undefined FUN_1476cb5b2(void)

void FUN_1476cb5b2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476cb5da();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476cb5da FUN_1476cb5da body=186 status=ok
// SIG undefined FUN_1476cb5da(void)

void FUN_1476cb5da(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_58 [40];
  double local_30;
  float local_24;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 == 0) {
    fVar3 = 0.0;
  }
  else {
    local_24 = 0.0;
    param_1 = param_1 + 0x30;
    cVar1 = FUN_1411bde3a(param_1,lVar2);
    fVar3 = 0.0;
    if (cVar1 != '\0') {
      local_30 = 0.0;
      cVar1 = FUN_1476fcde0(0,param_1,&local_24,local_20);
      fVar3 = local_24;
      if (cVar1 == '\0') {
        cVar1 = FUN_1476fd9a4(lVar2,param_1,&local_30,local_20);
        fVar3 = 0.0;
        if (cVar1 != '\0') {
          fVar3 = (float)local_30;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar3);
  }
  return;
}



// FUNCTION 1476cb6a6 FUN_1476cb6a6 body=49 status=ok
// SIG undefined FUN_1476cb6a6(void)

bool FUN_1476cb6a6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = FUN_144a64e42();
  if (lVar1 == lVar2) {
    bVar3 = true;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
    lVar2 = FUN_144a49fc8();
    bVar3 = lVar1 == lVar2;
  }
  return bVar3;
}



// FUNCTION 1476cb6d8 FUN_1476cb6d8 body=37 status=ok
// SIG undefined FUN_1476cb6d8(void)

void FUN_1476cb6d8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476cb6fe();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476cb6fe FUN_1476cb6fe body=111 status=ok
// SIG undefined FUN_1476cb6fe(void)

undefined4 FUN_1476cb6fe(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  uVar3 = 0;
  if (lVar2 != 0) {
    local_24 = 0;
    cVar1 = FUN_1476fe5db(lVar2,param_1 + 0x30,&local_24,local_20);
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = local_24;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cb788 FUN_1476cb788 body=37 status=ok
// SIG undefined FUN_1476cb788(void)

void FUN_1476cb788(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476cb7ae();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476cb7ae FUN_1476cb7ae body=118 status=ok
// SIG undefined FUN_1476cb7ae(void)

undefined1 FUN_1476cb7ae(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  uVar1 = 1;
  if (lVar3 != 0) {
    local_21 = 0;
    cVar2 = FUN_1476fa860(lVar3,param_1 + 0x30,&local_21,local_20);
    uVar1 = 1;
    if (cVar2 != '\0') {
      uVar1 = local_21;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1476cb836 FUN_1476cb836 body=330 status=ok
// SIG undefined FUN_1476cb836(void)

undefined8 FUN_1476cb836(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6d98) && (FUN_144b3d300(&DAT_14cab6d98), DAT_14cab6d98 == -1)) {
    FUN_1446f470e(&DAT_14cab6d90,L"EMouseCursor",1);
    _Init_thread_footer(&DAT_14cab6d98);
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_2[1];
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      lVar3 = 0x78;
      if (bVar4) goto LAB_1476cb88a;
    }
    else {
      lVar3 = 0x78;
      if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) goto LAB_1476cb88a;
    }
    lVar2 = param_2[1];
    lVar1 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar2 = (**(code **)(*param_2 + 0x1f0))(param_2);
    lVar3 = 0x70;
    if (lVar2 != 0) {
LAB_1476cb88a:
      lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + lVar3) + 0x18);
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == DAT_14cab6d90);
    }
  }
  return 0;
}



// FUNCTION 1476cb98c FUN_1476cb98c body=134 status=ok
// SIG undefined FUN_1476cb98c(void)

void FUN_1476cb98c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab6dc0) {
    FUN_144b3d300(&DAT_14cab6dc0);
    if (DAT_14cab6dc0 == -1) {
      FUN_1446f470e(&DAT_14cab6db8,L"GetValue",1);
      _Init_thread_footer(&DAT_14cab6dc0);
    }
  }
  FUN_14485c47a(param_3,param_1);
  *(undefined8 *)(param_3 + 8) = DAT_14cab6db8;
  return;
}



// FUNCTION 1476cba12 FUN_1476cba12 body=29 status=ok
// SIG undefined FUN_1476cba12(void)

void FUN_1476cba12(ulonglong *param_1,ulonglong *param_2,char param_3)

{
  ulonglong uVar1;
  
  uVar1 = *param_2 | *param_1;
  if (param_3 == '\0') {
    uVar1 = ~*param_2 & *param_1;
  }
  *param_1 = uVar1;
  return;
}



// FUNCTION 1476cba62 FUN_1476cba62 body=19 status=ok
// SIG undefined FUN_1476cba62(void)

byte FUN_1476cba62(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14775b22e(param_2);
  return bVar1 ^ 1;
}



// FUNCTION 1476cba94 FUN_1476cba94 body=139 status=ok
// SIG undefined FUN_1476cba94(void)

void FUN_1476cba94(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476cbb20(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cbb20 FUN_1476cbb20 body=539 status=ok
// SIG undefined FUN_1476cbb20(void)

longlong * FUN_1476cbb20(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  float local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar4 != 0) {
    if ((*(char *)(param_1 + 0x71) != '\x01') || (*(char *)(param_1 + 0x70) == '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
      cVar3 = FUN_147700486(lVar4,param_1 + 0x30,param_2,&local_40);
      if (cVar3 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x100;
        goto LAB_1476cbb92;
      }
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
    }
    if ((*(char *)(param_1 + 0x71) != '\x01') || (bVar2 = 1, *(char *)(param_1 + 0x70) == '\x02')) {
      plVar5 = (longlong *)FUN_140e82300();
      local_40 = (longlong *)*plVar5;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))();
      }
      local_38 = (undefined4)plVar5[1];
      cVar3 = FUN_1476ff8c2(lVar4,param_1 + 0x30,&local_40,local_30);
      if (cVar3 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x102;
        puVar6 = (undefined8 *)FUN_1447a1f4a(&local_40);
        *param_2 = 0;
        iVar1 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        *(int *)(param_2 + 1) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar1,0);
          memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
        }
        if (local_40 != (longlong *)0x0) {
          (**(code **)(*local_40 + 0x10))();
        }
        goto LAB_1476cbb92;
      }
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
      }
      bVar2 = *(byte *)(param_1 + 0x71);
    }
    if (((bVar2 & 1) == 0) || (*(char *)(param_1 + 0x70) == '\x03')) {
      cVar3 = FUN_1476fe5db(lVar4,param_1 + 0x30,local_30,&local_40);
      if (cVar3 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x103;
        *param_2 = 0;
        param_2[1] = 0;
        FUN_144a83b10(param_2,local_30[0]);
        goto LAB_1476cbb92;
      }
      bVar2 = *(byte *)(param_1 + 0x71);
    }
    if (((bVar2 & 1) == 0) || (*(char *)(param_1 + 0x70) == '\x04')) {
      cVar3 = FUN_1476fcde0(lVar4,param_1 + 0x30,local_30,&local_40);
      if (cVar3 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x104;
        FUN_1406112c4(param_2,(double)local_30[0],1);
        goto LAB_1476cbb92;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1476cbb92:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cbd3c FUN_1476cbd3c body=107 status=ok
// SIG undefined FUN_1476cbd3c(void)

void FUN_1476cbd3c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476cbda8(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cbda8 FUN_1476cbda8 body=578 status=ok
// SIG undefined FUN_1476cbda8(void)

longlong * FUN_1476cbda8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar5 != 0) {
    if ((*(char *)(param_1 + 0x71) != '\x01') || (*(char *)(param_1 + 0x70) == '\0')) {
      plVar6 = (longlong *)FUN_140e82300();
      plVar2 = (longlong *)*plVar6;
      *param_2 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(int *)(param_2 + 1) = (int)plVar6[1];
      cVar4 = FUN_1476ff8c2(lVar5,param_1 + 0x30,param_2,&local_48);
      if (cVar4 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x100;
        goto LAB_1476cbe3f;
      }
      if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + 0x10))();
      }
    }
    if ((*(char *)(param_1 + 0x71) != '\x01') || (bVar3 = 1, *(char *)(param_1 + 0x70) == '\x01')) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      cVar4 = FUN_147700486(lVar5,param_1 + 0x30,&local_48,local_30);
      if (cVar4 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x101;
        FUN_140009b9a(param_2,&local_48);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1476cbe3f;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      bVar3 = *(byte *)(param_1 + 0x71);
    }
    if (((bVar3 & 1) == 0) || (*(char *)(param_1 + 0x70) == '\x03')) {
      cVar4 = FUN_1476fe5db(lVar5,param_1 + 0x30,local_30,&local_48);
      if (cVar4 == '\0') {
        bVar3 = *(byte *)(param_1 + 0x71);
        goto LAB_1476cbe0e;
      }
      *(undefined2 *)(param_1 + 0x70) = 0x103;
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      FUN_1413a4536(param_2,local_30[0],0,&local_48);
LAB_1476cbf39:
      plVar2 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_40 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      goto LAB_1476cbe3f;
    }
LAB_1476cbe0e:
    if (((bVar3 & 1) == 0) || (*(char *)(param_1 + 0x70) == '\x04')) {
      cVar4 = FUN_1476fcde0(lVar5,param_1 + 0x30,local_30,&local_48);
      if (cVar4 != '\0') {
        *(undefined2 *)(param_1 + 0x70) = 0x104;
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        FUN_1404079ea(param_2,local_30[0],0,&local_48);
        goto LAB_1476cbf39;
      }
    }
  }
  plVar6 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar6;
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar6[1];
LAB_1476cbe3f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cbfee FUN_1476cbfee body=26 status=ok
// SIG undefined FUN_1476cbfee(void)

bool FUN_1476cbfee(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = FUN_144a4a07e();
  return lVar1 == lVar2;
}



// FUNCTION 1476cc008 FUN_1476cc008 body=79 status=ok
// SIG undefined FUN_1476cc008(void)

ulonglong FUN_1476cc008(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar3 = FUN_144a4a07e();
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (lVar1 != lVar3) {
    lVar1 = *(longlong *)(param_2 + 8);
    lVar3 = FUN_144a49f24();
    if (lVar1 != lVar3) {
      cVar2 = FUN_1476fe568(param_2);
      if (cVar2 == '\0') {
        lVar1 = *(longlong *)(param_2 + 8);
        lVar3 = FUN_144a64e42();
        uVar4 = CONCAT71(uVar5,lVar1 == lVar3);
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1476cc058 FUN_1476cc058 body=260 status=ok
// SIG undefined FUN_1476cc058(void)

void FUN_1476cc058(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = FUN_144a4a07e();
  if (lVar1 == lVar2) {
    puVar4 = (undefined8 *)&DAT_14cab6ed0;
    if (DAT_14cab6ed8 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) goto LAB_1476cc102;
    puVar5 = &DAT_14cab6ed8;
    FUN_144b3d300(&DAT_14cab6ed8);
    if (DAT_14cab6ed8 != -1) goto LAB_1476cc102;
    puVar4 = (undefined8 *)&DAT_14cab6ed0;
    pwVar3 = L"GetTextValue";
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
    lVar2 = FUN_144a49f24();
    if (lVar1 != lVar2) {
      return;
    }
    puVar4 = &DAT_14cab6edc;
    if (DAT_14cab6ee4 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) goto LAB_1476cc102;
    puVar5 = &DAT_14cab6ee4;
    FUN_144b3d300(&DAT_14cab6ee4);
    if (DAT_14cab6ee4 != -1) goto LAB_1476cc102;
    puVar4 = &DAT_14cab6edc;
    pwVar3 = L"GetStringValue";
  }
  FUN_1446f470e(puVar4,pwVar3,1);
  _Init_thread_footer(puVar5);
LAB_1476cc102:
  FUN_14485c47a(param_3,param_1);
  *(undefined8 *)(param_3 + 8) = *puVar4;
  return;
}



// FUNCTION 1476cc15c FUN_1476cc15c body=37 status=ok
// SIG undefined FUN_1476cc15c(void)

void FUN_1476cc15c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476cc182();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476cc182 FUN_1476cc182 body=114 status=ok
// SIG undefined FUN_1476cc182(void)

undefined1 FUN_1476cc182(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  uVar3 = 0;
  if (lVar2 != 0) {
    local_29 = 0;
    cVar1 = FUN_1476fa860(lVar2,param_1 + 0x30,&local_29,local_28);
    if (cVar1 != '\0') {
      uVar3 = local_29;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1476cc206 FUN_1476cc206 body=330 status=ok
// SIG undefined FUN_1476cc206(void)

undefined8 FUN_1476cc206(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6f10) && (FUN_144b3d300(&DAT_14cab6f10), DAT_14cab6f10 == -1)) {
    FUN_1446f470e(&DAT_14cab6f08,L"ESlateVisibility",1);
    _Init_thread_footer(&DAT_14cab6f10);
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_2[1];
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      lVar3 = 0x78;
      if (bVar4) goto LAB_1476cc25a;
    }
    else {
      lVar3 = 0x78;
      if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) goto LAB_1476cc25a;
    }
    lVar2 = param_2[1];
    lVar1 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar2 = (**(code **)(*param_2 + 0x1f0))(param_2);
    lVar3 = 0x70;
    if (lVar2 != 0) {
LAB_1476cc25a:
      lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + lVar3) + 0x18);
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == DAT_14cab6f08);
    }
  }
  return 0;
}



// FUNCTION 1476cc350 FUN_1476cc350 body=38 status=ok
// SIG undefined FUN_1476cc350(void)

void FUN_1476cc350(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476cc376();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476cc376 FUN_1476cc376 body=150 status=ok
// SIG undefined FUN_1476cc376(void)

longlong FUN_1476cc376(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    local_20 = 0;
    cVar1 = FUN_1476fa4e2(lVar2,param_1 + 0x30,&local_20,local_18);
    lVar2 = local_20;
    if ((cVar1 != '\0') && (local_20 != 0)) {
      lVar3 = FUN_140de7a58();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_1476cc39d;
    }
  }
  lVar2 = 0;
LAB_1476cc39d:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1476cc41e FUN_1476cc41e body=203 status=ok
// SIG undefined FUN_1476cc41e(void)

undefined8 FUN_1476cc41e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(param_2 + 0x70);
    lVar1 = FUN_140de7a58();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                      lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1476cc4ea FUN_1476cc4ea body=249 status=ok
// SIG undefined FUN_1476cc4ea(void)

void FUN_1476cc4ea(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar2 * 2);
  }
  uVar1 = FUN_1476cc5e4(&local_48);
  *param_3 = uVar1;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cc5e4 FUN_1476cc5e4 body=177 status=ok
// SIG undefined FUN_1476cc5e4(void)

undefined8 FUN_1476cc5e4(longlong *param_1)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1476cc699(DAT_14c951640);
  local_40 = (void *)0x0;
  local_38 = (int)param_1[1];
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_1476cc72e(uVar1,&local_40);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cc699 FUN_1476cc699 body=148 status=ok
// SIG undefined FUN_1476cc699(void)

undefined8 FUN_1476cc699(undefined8 param_1)

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
  uVar1 = FUN_145990d72();
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



// FUNCTION 1476cc72e FUN_1476cc72e body=230 status=ok
// SIG undefined FUN_1476cc72e(void)

void FUN_1476cc72e(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_141054386();
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
  uVar3 = (**(code **)(*local_30 + 0xf0))();
  FUN_1476cc816(uVar3,param_1);
  (**(code **)(*local_30 + 0x68))(local_30,param_2);
  plVar2 = local_30;
  FUN_140056680(local_40,&DAT_149e8e77a);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*local_30 + 0xe8))();
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cc816 FUN_1476cc816 body=188 status=ok
// SIG undefined FUN_1476cc816(void)

void FUN_1476cc816(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a508f50;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(code **)&p_Var1->EntryCount = FUN_14332e596;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476cc8b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1476cc8de FUN_1476cc8de body=346 status=ok
// SIG undefined FUN_1476cc8de(void)

void FUN_1476cc8de(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [40];
  undefined8 local_c0 [9];
  undefined8 local_78 [8];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0x3ff0000000000000;
  local_78[3] = 0x3ff0000000000000;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_38 = 0;
  local_34 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_78;
  puVar4 = local_c0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_1476cdbf8(param_1,local_30,0);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cca3a FUN_1476cca3a body=11 status=ok
// SIG undefined FUN_1476cca3a(void)

void FUN_1476cca3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1476cdbf8(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 1476cca4c FUN_1476cca4c body=490 status=ok
// SIG undefined FUN_1476cca4c(void)

void FUN_1476cca4c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0 [9];
  undefined8 local_88 [8];
  undefined4 local_48;
  undefined1 local_44;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0x3ff0000000000000;
  local_88[3] = 0x3ff0000000000000;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_48 = 0;
  local_44 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_d0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (local_38 == 0) {
    uVar1 = 0;
    FUN_1415b7ec4(L"The Player is invalid.",3,0);
  }
  else {
    uVar1 = FUN_1476cdbf8(param_1,local_30,local_38,local_d0);
  }
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ccc38 FUN_1476ccc38 body=42 status=ok
// SIG undefined FUN_1476ccc38(void)

undefined8 FUN_1476ccc38(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    FUN_1415b7ec4(L"The Player is invalid.",3,0);
    return 0;
  }
  uVar1 = FUN_1476cdbf8();
  return uVar1;
}



// FUNCTION 1476ccc62 FUN_1476ccc62 body=186 status=ok
// SIG undefined FUN_1476ccc62(void)

void FUN_1476ccc62(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70 [9];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476ccd1e(param_1,local_70,local_28);
  puVar2 = local_70;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ccd1e FUN_1476ccd1e body=314 status=ok
// SIG undefined FUN_1476ccd1e(void)

undefined8 * FUN_1476ccd1e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0xd9) & 0x20) != 0)) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_3);
    iVar2 = (int)local_38;
    iVar3 = local_38._4_4_;
    uVar4 = FUN_144a78877(local_38 & 0xffffffff,local_38._4_4_);
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      lVar7 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xa0);
      }
      iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x60);
        do {
          lVar6 = (longlong)iVar5 * 0x78;
          lVar1 = lVar7 + lVar6;
          if ((*(int *)(lVar7 + lVar6) == iVar2) && (*(int *)(lVar7 + 4 + lVar6) == iVar3)) {
            if ((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0 && lVar1 != 0) {
              puVar8 = (undefined8 *)(lVar1 + 8);
              for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
                *param_2 = *puVar8;
                puVar8 = puVar8 + 1;
                param_2 = param_2 + 1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x70);
        } while (iVar5 != -1);
      }
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[2] = 0x3ff0000000000000;
  param_2[3] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476cce64 FUN_1476cce64 body=163 status=ok
// SIG undefined FUN_1476cce64(void)

void FUN_1476cce64(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476ccf08(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ccf08 FUN_1476ccf08 body=270 status=ok
// SIG undefined FUN_1476ccf08(void)

bool FUN_1476ccf08(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    bVar8 = false;
    FUN_1415b7ec4(L"The Widget is invalid.",3,0);
  }
  else {
    if ((*(byte *)(param_2 + 0xd9) & 0x20) != 0) {
      local_28 = 0;
      FUN_14485c47a(&local_28);
      iVar2 = (int)local_28;
      iVar3 = local_28._4_4_;
      uVar4 = FUN_144a78877(local_28 & 0xffffffff,local_28._4_4_);
      if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
        lVar6 = param_1 + 0x98;
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          lVar6 = *(longlong *)(param_1 + 0xa0);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & uVar4) * 4);
        if (iVar5 != -1) {
          lVar6 = *(longlong *)(param_1 + 0x60);
          do {
            lVar7 = (longlong)iVar5 * 0x78;
            lVar1 = lVar6 + lVar7;
            if ((*(int *)(lVar6 + lVar7) == iVar2) && (*(int *)(lVar6 + 4 + lVar7) == iVar3)) {
              if (((lVar1 + 8U & 0xfffffffffffffff7) != 0) &&
                 ((*(longlong *)(lVar1 + 0x58) != 0 && (*(longlong *)(lVar1 + 0x60) != 0)))) {
                bVar8 = 0 < *(int *)(*(longlong *)(lVar1 + 0x60) + 8);
                goto LAB_1476ccf5e;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x70);
          } while (iVar5 != -1);
        }
      }
    }
    bVar8 = false;
  }
LAB_1476ccf5e:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 1476cd018 FUN_1476cd018 body=156 status=ok
// SIG undefined FUN_1476cd018(void)

void FUN_1476cd018(undefined8 param_1,longlong param_2)

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
  FUN_1476cd0b6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cd0b6 FUN_1476cd0b6 body=336 status=ok
// SIG undefined FUN_1476cd0b6(void)

void FUN_1476cd0b6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xd9) & 0x20) != 0)) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0x3ff0000000000000;
    local_90 = 0x3ff0000000000000;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_64 = 1;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (longlong *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    FUN_14485c47a(&local_40,param_2);
    local_b0 = local_40;
    plVar1 = (longlong *)(param_1 + 0x60);
    FUN_1477021b4(plVar1,&local_40);
    uVar3 = local_40;
    if ((longlong)(int)local_40 != -1) {
      FUN_147702234(&local_a8,*plVar1 + (longlong)(int)local_40 * 0x78 + 8);
      FUN_1477022a2(plVar1,uVar3 & 0xffffffff);
    }
    FUN_1476cda32(param_2,&uStack_58,&local_60);
    FUN_147702336(param_1 + 0x48,param_2);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cd208 FUN_1476cd208 body=334 status=ok
// SIG undefined FUN_1476cd208(void)

void FUN_1476cd208(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0 [9];
  undefined8 local_78 [8];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0x3ff0000000000000;
  local_78[3] = 0x3ff0000000000000;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_38 = 0;
  local_34 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_78;
  puVar3 = local_c0;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1476cd358(param_1,local_28);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cd358 FUN_1476cd358 body=613 status=ok
// SIG undefined FUN_1476cd358(void)

void FUN_1476cd358(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  double *pdVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  byte bVar12;
  byte bVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != 0) && (-1 < (short)*(undefined4 *)(param_2 + 8))) {
    local_a8 = 0.0;
    FUN_14485c47a(&local_a8,param_2);
    local_68 = (undefined4)local_a8;
    local_64 = local_a8._4_4_;
    uVar6 = FUN_144a78877();
    pdVar8 = (double *)FUN_147701c9a(param_1 + 0x60,uVar6,&local_68);
    *(byte *)(param_2 + 0xd9) = *(byte *)(param_2 + 0xd9) | 0x20;
    pdVar10 = param_3;
    pdVar11 = pdVar8;
    for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar11 = *pdVar10;
      pdVar10 = pdVar10 + 1;
      pdVar11 = pdVar11 + 1;
    }
    plVar3 = (longlong *)pdVar8[0xb];
    if (plVar3 != (longlong *)0x0) {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_1476cd38f;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar14 = iVar7 == iVar5;
        if (bVar14) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar14);
      dVar4 = pdVar8[10];
      if (dVar4 != 0.0) {
        bVar12 = 0;
        bVar13 = 0;
        if ((((*(float *)(param_3 + 5) == 0.0) && (bVar13 = bVar12, !NAN(*(float *)(param_3 + 5))))
            && (*(float *)((longlong)param_3 + 0x2c) == 0.0)) &&
           (!NAN(*(float *)((longlong)param_3 + 0x2c)))) {
          if ((param_3[1] != param_3[3]) || (NAN(param_3[1]) || NAN(param_3[3]))) {
            bVar13 = 0;
          }
          else {
            bVar13 = -(param_3[2] == *param_3) & 1;
          }
        }
        local_a8 = param_3[4];
        dStack_a0 = param_3[5];
        local_98 = (double)CONCAT71(local_98._1_7_,1);
        dStack_90 = 0.0;
        uStack_88 = 0;
        FUN_1476df0e4(pdVar8[0xc],(longlong)pdVar8[0xc] + 0x20,&local_a8,1);
        FUN_1449db362(&dStack_90);
        local_a8._0_2_ = CONCAT11(1,bVar13);
        dStack_a0 = 0.0;
        local_98 = 0.0;
        FUN_1476df1ae(pdVar8[0xc],(longlong)pdVar8[0xc] + 0xa8,&local_a8,1);
        FUN_1449db362(&dStack_a0);
        local_a8 = *param_3;
        dStack_a0 = param_3[1];
        local_98 = param_3[2];
        dStack_90 = param_3[3];
        uStack_88 = CONCAT71(uStack_88._1_7_,1);
        local_80 = 0;
        uStack_78 = 0;
        FUN_1476df26c(pdVar8[0xc],(longlong)pdVar8[0xc] + 0x48,&local_a8,1);
        FUN_1449db362(&local_80);
        local_a8 = param_3[6];
        dStack_a0 = param_3[7];
        local_98 = (double)CONCAT71(local_98._1_7_,1);
        dStack_90 = 0.0;
        uStack_88 = 0;
        FUN_1476df4ec(pdVar8[0xc],(longlong)pdVar8[0xc] + 0x80,&local_a8,1);
        FUN_1449db362(&dStack_90);
        FUN_146a8b32c(pdVar8[0xc],(float)*(int *)(param_3 + 8));
        FUN_140163244(dVar4,1);
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
  }
LAB_1476cd38f:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476cd5be FUN_1476cd5be body=335 status=ok
// SIG undefined FUN_1476cd5be(void)

void FUN_1476cd5be(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  local_50 = 0x3ff0000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[4] = local_48;
  *(float *)(param_3 + 5) = (float)local_78;
  *(float *)((longlong)param_3 + 0x2c) = (float)local_70;
  *(undefined4 *)(param_3 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_3 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_30._4_4_;
  param_3[8] = CONCAT44(uStack_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cd70e FUN_1476cd70e body=53 status=ok
// SIG undefined FUN_1476cd70e(void)

void FUN_1476cd70e(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = param_3[1];
  *(float *)(param_2 + 5) = (float)*param_3;
  *(float *)((longlong)param_2 + 0x2c) = (float)dVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 1476cd74a FUN_1476cd74a body=609 status=ok
// SIG undefined FUN_1476cd74a(void)

void FUN_1476cd74a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  undefined1 auStack_f8 [36];
  int local_d4;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0x3ff0000000000000;
  local_a0 = 0x3ff0000000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_74 = CONCAT31(local_74._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)uStack_90;
  uStack_64 = uStack_90._4_4_;
  uStack_60 = (undefined4)local_88;
  uStack_5c = local_88._4_4_;
  local_58 = (undefined4)uStack_80;
  uStack_54 = uStack_80._4_4_;
  uStack_50 = local_78;
  uStack_4c = local_74;
  if (local_d4 != 0) {
    fVar1 = (float)FUN_14778e70a(local_c0);
    local_d0 = local_d0 * (1.0 / (double)fVar1);
    local_c8 = local_c8 * (1.0 / (double)fVar1);
  }
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  *(float *)(param_3 + 4) = (float)local_d0;
  *(float *)((longlong)param_3 + 0x24) = (float)local_c8;
  *(undefined4 *)(param_3 + 5) = local_68;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_64;
  *(undefined4 *)(param_3 + 6) = uStack_60;
  *(undefined4 *)((longlong)param_3 + 0x34) = uStack_5c;
  *(undefined4 *)(param_3 + 7) = local_58;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_54;
  *(undefined4 *)(param_3 + 8) = uStack_50;
  *(undefined4 *)((longlong)param_3 + 0x44) = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cd9ac FUN_1476cd9ac body=130 status=ok
// SIG undefined FUN_1476cd9ac(void)

undefined8 *
FUN_1476cd9ac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,double *param_4,
             char param_5)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  
  if (param_5 == '\0') {
    dVar5 = *param_4;
    dVar1 = param_4[1];
  }
  else {
    fVar4 = (float)FUN_14778e70a(param_3);
    dVar5 = *param_4 * (1.0 / (double)fVar4);
    *param_4 = dVar5;
    dVar1 = (1.0 / (double)fVar4) * param_4[1];
    param_4[1] = dVar1;
  }
  *(float *)(param_2 + 4) = (float)dVar5;
  *(float *)((longlong)param_2 + 0x24) = (float)dVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar3 = param_1;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 1476cda32 FUN_1476cda32 body=337 status=ok
// SIG undefined FUN_1476cda32(void)

void FUN_1476cda32(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xdf;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_1476cdb61;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *param_2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if ((((lVar3 != 0) && (lVar7 = (**(code **)(*param_1 + 0x180))(param_1), lVar7 != 0)) &&
        (cVar5 = FUN_144b2c332(lVar7), cVar5 != '\0')) &&
       (plVar8 = (longlong *)FUN_1449baec6(lVar7), plVar8 != (longlong *)0x0)) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_40 = lVar3;
      local_38 = plVar2;
      (**(code **)(*plVar8 + 0x2e0))(plVar8);
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_50 = lVar3;
      local_48 = plVar2;
      uVar9 = FUN_14479d2ce(param_3);
      (**(code **)(*plVar8 + 0x2f0))(plVar8,uVar9,&local_50);
      LOCK();
      plVar8 = plVar2 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_1476cdb61:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476cdb84 FUN_1476cdb84 body=12 status=ok
// SIG undefined FUN_1476cdb84(void)

void FUN_1476cdb84(void)

{
  FUN_1476cdb90(DAT_14cb0d2b0);
  return;
}



// FUNCTION 1476cdb90 FUN_1476cdb90 body=103 status=ok
// SIG undefined FUN_1476cdb90(void)

void FUN_1476cdb90(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a6935c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_147701c4e(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cdbf8 FUN_1476cdbf8 body=1723 status=ok
// SIG undefined FUN_1476cdbf8(void)

ulonglong FUN_1476cdbf8(longlong param_1,longlong *param_2,longlong param_3,double *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  double *pdVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  double *pdVar12;
  undefined7 uVar14;
  ulonglong uVar13;
  double *pdVar15;
  undefined2 *puVar16;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  double local_418;
  longlong *local_410;
  double *local_408;
  double local_400;
  double local_3f8;
  longlong *local_3f0;
  double local_3e8;
  longlong *local_3e0;
  undefined1 local_3d1;
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined2 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  double local_308;
  longlong *local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined1 local_2b0;
  undefined1 local_2a8 [16];
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278;
  undefined1 local_270 [16];
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_250;
  undefined1 local_248 [16];
  undefined2 local_238;
  undefined1 local_230 [24];
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (param_2 == (longlong *)0x0) {
    pwVar11 = L"The Widget is invalid.";
LAB_1476cdd19:
    uVar13 = 0;
    FUN_1415b7ec4(pwVar11,3,0);
    goto LAB_1476cdcda;
  }
  lVar7 = FUN_1477439ba(param_2);
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar7 != 0) {
      cVar5 = FUN_144b2c332(lVar7);
      if (cVar5 != '\0') {
        plVar8 = (longlong *)FUN_1449baec6(lVar7);
        if (plVar8 == (longlong *)0x0) {
          pwVar11 = L"No game viewport was found.";
          goto LAB_1476cdd19;
        }
        local_2e0 = 0;
        local_218 = (undefined2 *)0x0;
        FUN_14485c47a(&local_218,param_2);
        local_2e0 = local_218;
        uVar6 = FUN_144a78877();
        pdVar9 = (double *)FUN_147701c9a(param_1 + 0x60,uVar6,&local_2e0);
        *(byte *)((longlong)param_2 + 0xd9) = *(byte *)((longlong)param_2 + 0xd9) | 0x20;
        if (((pdVar9[10] != 0.0) && (pdVar9[0xb] != 0.0)) &&
           (0 < *(int *)((longlong)pdVar9[0xb] + 8))) {
          local_218 = (undefined2 *)param_2[3];
          FUN_1400021e4(&local_218,&local_2d8);
          puVar16 = &DAT_149dfb77a;
          if (iStack_2d0 != 0) {
            puVar16 = (undefined2 *)CONCAT44(uStack_2d4,local_2d8);
          }
          pwVar11 = L"The widget \'%s\' was already added to the screen.";
          goto LAB_1476cdc89;
        }
        local_410 = (longlong *)0x0;
        if ((*(float *)(param_4 + 5) == 0.0) && (!NAN(*(float *)(param_4 + 5)))) {
          if ((*(float *)((longlong)param_4 + 0x2c) == 0.0) &&
             (local_410 = (longlong *)0, !NAN(*(float *)((longlong)param_4 + 0x2c)))) {
            if ((param_4[1] != param_4[3]) || (NAN(param_4[1]) || NAN(param_4[3]))) {
              local_410 = (longlong *)0x0;
            }
            else {
              local_410 = (longlong *)(ulonglong)(-(uint)(param_4[2] == *param_4) & 1);
            }
          }
        }
        local_2f8 = *(undefined4 *)(param_4 + 4);
        uStack_2f4 = *(undefined4 *)((longlong)param_4 + 0x24);
        uStack_2f0 = *(undefined4 *)(param_4 + 5);
        uStack_2ec = *(undefined4 *)((longlong)param_4 + 0x2c);
        local_408 = pdVar9;
        FUN_146350a26(&local_218);
        FUN_146060cee(&local_2d8);
        local_338 = local_2f8;
        uStack_334 = uStack_2f4;
        uStack_330 = uStack_2f0;
        uStack_32c = uStack_2ec;
        local_328 = 1;
        local_320 = 0;
        uStack_318 = 0;
        local_2b0 = 1;
        local_2c0 = local_2f8;
        uStack_2bc = uStack_2f4;
        uStack_2b8 = uStack_2f0;
        uStack_2b4 = uStack_2ec;
        FUN_144a450dc(local_2a8,&local_320);
        FUN_1449db362(&local_320);
        local_350 = CONCAT11(1,(char)local_410);
        local_348 = 0;
        uStack_340 = 0;
        local_238 = local_350;
        FUN_144a450dc(local_230,&local_348);
        FUN_1449db362(&local_348);
        local_388 = *(undefined4 *)param_4;
        uStack_384 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_380 = *(undefined4 *)(param_4 + 1);
        uStack_37c = *(undefined4 *)((longlong)param_4 + 0xc);
        local_378 = *(undefined4 *)(param_4 + 2);
        uStack_374 = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_370 = *(undefined4 *)(param_4 + 3);
        uStack_36c = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_368 = 1;
        local_360 = 0;
        uStack_358 = 0;
        local_278 = 1;
        local_298 = local_388;
        uStack_294 = uStack_384;
        uStack_290 = uStack_380;
        uStack_28c = uStack_37c;
        local_288 = local_378;
        uStack_284 = uStack_374;
        uStack_280 = uStack_370;
        uStack_27c = uStack_36c;
        FUN_144a450dc(local_270,&local_360);
        FUN_1449db362(&local_360);
        local_3b8 = *(undefined4 *)(param_4 + 6);
        uStack_3b4 = *(undefined4 *)((longlong)param_4 + 0x34);
        uStack_3b0 = *(undefined4 *)(param_4 + 7);
        uStack_3ac = *(undefined4 *)((longlong)param_4 + 0x3c);
        local_3a8 = 1;
        local_3a0 = 0;
        uStack_398 = 0;
        local_250 = 1;
        local_260 = local_3b8;
        uStack_25c = uStack_3b4;
        uStack_258 = uStack_3b0;
        uStack_254 = uStack_3ac;
        FUN_144a450dc(local_248,&local_3a0);
        FUN_1449db362(&local_3a0);
        local_400 = (double)CONCAT44(uStack_2d4,local_2d8);
        FUN_14603f380(&local_218,&local_2d8);
        local_428 = &local_3d1;
        FUN_146124132(local_3d0,"SConstraintCanvas",
                      ".\\Runtime/UMG/Private/Blueprint/GameViewportSubsystem.cpp",0xa5);
        FUN_145e31788(local_3d0,&local_308,&local_218);
        local_418 = local_308;
        if (local_300 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_300 + 1) = (int)local_300[1] + 1;
          UNLOCK();
          if (local_300 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_300 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*local_300)(local_300);
              LOCK();
              piVar1 = (int *)((longlong)local_300 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_300 + 0x10))(local_300);
              }
            }
          }
        }
        local_410 = local_300;
        if (local_3c8 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_3c8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_3c8)(local_3c8);
            LOCK();
            piVar1 = (int *)((longlong)local_3c8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_3c8 + 0x10))(local_3c8);
            }
          }
        }
        FUN_145e31cfe(&local_2d8);
        FUN_146350aa0(&local_218);
        pdVar9 = local_408;
        pdVar12 = param_4;
        pdVar15 = local_408;
        for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar15 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar15 = pdVar15 + 1;
        }
        FUN_14485c47a(local_408 + 9,param_3);
        plVar2 = local_410;
        pdVar9[10] = local_418;
        plVar10 = (longlong *)pdVar9[0xb];
        if (plVar10 != local_410) {
          if (local_410 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_410 + 0xc) = *(int *)((longlong)local_410 + 0xc) + 1;
            UNLOCK();
            plVar10 = (longlong *)pdVar9[0xb];
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
              pdVar9 = local_408;
            }
          }
          pdVar9[0xb] = (double)plVar2;
        }
        pdVar9[0xc] = local_400;
        FUN_143333872(param_2,&local_2d8);
        FUN_14149270a(local_400);
        puVar16 = *(undefined2 **)((longlong)local_400 + 0x10);
        uVar4 = *(undefined8 *)((longlong)local_400 + 0x18);
        *(ulonglong *)((longlong)local_400 + 0x10) = CONCAT44(uStack_2d4,local_2d8);
        *(ulonglong *)((longlong)local_400 + 0x18) = CONCAT44(uStack_2cc,iStack_2d0);
        local_218._0_4_ = SUB84(puVar16,0);
        local_218._4_4_ = (undefined4)((ulonglong)puVar16 >> 0x20);
        uStack_210._0_4_ = (int)uVar4;
        uStack_210._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_2d8 = (undefined4)local_218;
        uStack_2d4 = local_218._4_4_;
        iStack_2d0 = (int)uStack_210;
        uStack_2cc = uStack_210._4_4_;
        local_218 = puVar16;
        uStack_210 = uVar4;
        FUN_140a5503c(local_400);
        plVar10 = (longlong *)CONCAT44(uStack_2cc,iStack_2d0);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        plVar2 = local_410;
        iVar3 = *(int *)(param_4 + 8);
        uVar14 = (undefined7)((ulonglong)plVar10 >> 8);
        if (param_3 == 0) {
          if (local_410 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_410 + 1) = (int)local_410[1] + 1;
            UNLOCK();
            local_3f8 = local_418;
            local_3f0 = local_410;
            LOCK();
            *(int *)(local_410 + 1) = (int)local_410[1] + 1;
            UNLOCK();
            (**(code **)(*plVar8 + 0x2d8))(plVar8,&local_3f8,iVar3 + 10);
LAB_1476ce258:
            LOCK();
            plVar8 = plVar2 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            FUN_147702104(param_1 + 0x30,param_2,param_3);
            LOCK();
            plVar8 = plVar2 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            uVar13 = CONCAT71(uVar14,1);
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            goto LAB_1476cdcda;
          }
          local_3f8 = local_418;
          local_3f0 = (longlong *)0x0;
          (**(code **)(*plVar8 + 0x2d8))(plVar8,&local_3f8,iVar3 + 10);
        }
        else {
          if (local_410 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_410 + 1) = (int)local_410[1] + 1;
            UNLOCK();
            local_3e8 = local_418;
            local_3e0 = local_410;
            LOCK();
            *(int *)(local_410 + 1) = (int)local_410[1] + 1;
            UNLOCK();
            (**(code **)(*plVar8 + 0x2e8))(plVar8,param_3);
            goto LAB_1476ce258;
          }
          local_3e8 = local_418;
          local_3e0 = (longlong *)0x0;
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_3);
        }
        FUN_147702104(param_1 + 0x30,param_2,param_3);
        uVar13 = CONCAT71(uVar14,1);
        goto LAB_1476cdcda;
      }
    }
    local_218 = (undefined2 *)param_2[3];
    FUN_1400021e4(&local_218,&local_2d8);
    puVar16 = &DAT_149dfb77a;
    if (iStack_2d0 != 0) {
      puVar16 = (undefined2 *)CONCAT44(uStack_2d4,local_2d8);
    }
    pwVar11 = L"The widget \'%s\' does not have a World.";
  }
  else {
    local_218 = (undefined2 *)param_2[3];
    FUN_1400021e4(&local_218,&local_2d8);
    puVar16 = &DAT_149dfb77a;
    if (iStack_2d0 != 0) {
      puVar16 = (undefined2 *)CONCAT44(uStack_2d4,local_2d8);
    }
    pwVar11 = 
    L"The widget \'%s\' already has a parent widget. It can\'t also be added to the viewport!";
  }
LAB_1476cdc89:
  FUN_140002266(&local_218,pwVar11,puVar16);
  puVar16 = &DAT_149dfb77a;
  if ((int)uStack_210 != 0) {
    puVar16 = local_218;
  }
  FUN_1415b7ec4(puVar16,3,0);
  if (local_218 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_2d4,local_2d8) != 0) {
    FUN_1400020a8();
  }
  uVar13 = 0;
LAB_1476cdcda:
  if ((local_60 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce2c0 FUN_1476ce2c0 body=195 status=ok
// SIG undefined FUN_1476ce2c0(void)

void FUN_1476ce2c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = uStack_20;
  uVar1 = FUN_1476ce384();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce384 FUN_1476ce384 body=174 status=ok
// SIG undefined FUN_1476ce384(void)

undefined8 FUN_1476ce384(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar3 = FUN_1405e2bf2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_1476ce3c3;
  }
  lVar5 = 0;
LAB_1476ce3c3:
  FUN_1476ceaae(&local_28,lVar5);
  if (local_28 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*local_28 + 0x80))();
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce43a FUN_1476ce43a body=194 status=ok
// SIG undefined FUN_1476ce43a(void)

void FUN_1476ce43a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = uStack_20;
  uVar1 = FUN_1476ce4fe();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce4fe FUN_1476ce4fe body=169 status=ok
// SIG undefined FUN_1476ce4fe(void)

undefined4 FUN_1476ce4fe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar4 = FUN_1405e2bf2();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_1476ce53d;
  }
  lVar5 = 0;
LAB_1476ce53d:
  FUN_1476ceaae(&local_28,lVar5);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x20))();
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce5ae FUN_1476ce5ae body=194 status=ok
// SIG undefined FUN_1476ce5ae(void)

void FUN_1476ce5ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = uStack_20;
  uVar1 = FUN_1476ce672();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce672 FUN_1476ce672 body=169 status=ok
// SIG undefined FUN_1476ce672(void)

undefined4 FUN_1476ce672(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar4 = FUN_1405e2bf2();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_1476ce6b1;
  }
  lVar5 = 0;
LAB_1476ce6b1:
  FUN_1476ceaae(&local_28,lVar5);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x30))();
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce720 FUN_1476ce720 body=142 status=ok
// SIG undefined FUN_1476ce720(void)

void FUN_1476ce720(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145920c18();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476ce75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x28))(plVar3);
      return;
    }
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    uVar1 = FUN_145920c18();
    cVar2 = FUN_144a7ff9e(lVar4,uVar1);
    if (cVar2 != '\0') {
      lVar4 = FUN_1400796d0(param_1[2],DAT_14cab6fd8,1);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476ce7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x248))(param_1,lVar4,0,*(code **)(*param_1 + 0x248));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476ce7ae FUN_1476ce7ae body=195 status=ok
// SIG undefined FUN_1476ce7ae(void)

void FUN_1476ce7ae(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_145920c18();
    lVar3 = FUN_144718840(param_1,uVar2);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    uVar2 = FUN_145920c18();
    cVar1 = FUN_144a7ff9e(lVar3,uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_1400796d0(param_1[2],DAT_14cab6ff8,1);
      if (lVar3 != 0) {
        local_21 = param_2;
        (**(code **)(*param_1 + 0x248))(param_1,lVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce884 FUN_1476ce884 body=195 status=ok
// SIG undefined FUN_1476ce884(void)

void FUN_1476ce884(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_145920c18();
    lVar3 = FUN_144718840(param_1,uVar2);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    uVar2 = FUN_145920c18();
    cVar1 = FUN_144a7ff9e(lVar3,uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_1400796d0(param_1[2],DAT_14cab6fe8,1);
      if (lVar3 != 0) {
        local_21 = param_2;
        (**(code **)(*param_1 + 0x248))(param_1,lVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ce95a FUN_1476ce95a body=87 status=ok
// SIG undefined FUN_1476ce95a(void)

void FUN_1476ce95a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))();
    if (plVar1 != (longlong *)0x0) goto LAB_1476ce974;
  }
  plVar1 = (longlong *)0x0;
LAB_1476ce974:
  lVar2 = FUN_1400796d0(plVar1[2],DAT_14cab6fd8,1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476ce9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x248))(plVar1,lVar2,0,*(code **)(*plVar1 + 0x248));
    return;
  }
  return;
}



// FUNCTION 1476ce9b2 FUN_1476ce9b2 body=124 status=ok
// SIG undefined FUN_1476ce9b2(void)

void FUN_1476ce9b2(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))();
    if (plVar1 != (longlong *)0x0) goto LAB_1476ce9de;
  }
  plVar1 = (longlong *)0x0;
LAB_1476ce9de:
  lVar2 = FUN_1400796d0(plVar1[2],DAT_14cab6ff8,1);
  if (lVar2 != 0) {
    local_19 = param_2;
    (**(code **)(*plVar1 + 0x248))(plVar1,lVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cea30 FUN_1476cea30 body=124 status=ok
// SIG undefined FUN_1476cea30(void)

void FUN_1476cea30(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))();
    if (plVar1 != (longlong *)0x0) goto LAB_1476cea5c;
  }
  plVar1 = (longlong *)0x0;
LAB_1476cea5c:
  lVar2 = FUN_1400796d0(plVar1[2],DAT_14cab6fe8,1);
  if (lVar2 != 0) {
    local_19 = param_2;
    (**(code **)(*plVar1 + 0x248))(plVar1,lVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ceaae FUN_1476ceaae body=220 status=ok
// SIG undefined FUN_1476ceaae(void)

undefined8 * FUN_1476ceaae(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = local_30;
  iVar3 = FUN_1476df5b6(&DAT_14cab7730,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  lVar4 = (longlong)iVar3 * 0x20 + DAT_14cab7730;
  if (iVar3 == -1) {
    lVar4 = 0;
  }
  if ((((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) ||
      (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0)) || (*(int *)(lVar2 + 8) < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = lVar2;
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_1[1] = 0;
        goto LAB_1476ceb5f;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar5 = iVar3 == iVar1;
      if (bVar5) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar5);
    if (param_1[1] != 0) {
      *param_1 = *(undefined8 *)(lVar4 + 8);
    }
  }
LAB_1476ceb5f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1476ceb90 FUN_1476ceb90 body=195 status=ok
// SIG undefined FUN_1476ceb90(void)

void FUN_1476ceb90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = uStack_20;
  uVar1 = FUN_1476cec54();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cec54 FUN_1476cec54 body=220 status=ok
// SIG undefined FUN_1476cec54(void)

undefined8 FUN_1476cec54(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = FUN_1405e2bf2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      local_28 = lVar1;
      uVar3 = FUN_145920c18();
      local_20 = FUN_144718840(lVar1,uVar3);
      lVar2 = FUN_1476ce384(&local_28);
      if (lVar2 != 0) {
        lVar4 = FUN_1458f0910();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          puVar5 = (undefined8 *)FUN_1476cee8a(lVar2 + 0x290,lVar1);
          if (puVar5 != (undefined8 *)0x0) {
            uVar3 = *puVar5;
            goto LAB_1476cec93;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_1476cec93:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ced34 FUN_1476ced34 body=125 status=ok
// SIG undefined FUN_1476ced34(void)

void FUN_1476ced34(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))();
    if (plVar1 != (longlong *)0x0) goto LAB_1476ced61;
  }
  plVar1 = (longlong *)0x0;
LAB_1476ced61:
  lVar2 = FUN_1400796d0(plVar1[2],DAT_14cab7050,1);
  if (lVar2 != 0) {
    local_20 = param_2;
    (**(code **)(*plVar1 + 0x248))(plVar1,lVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cedb2 FUN_1476cedb2 body=196 status=ok
// SIG undefined FUN_1476cedb2(void)

void FUN_1476cedb2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_1459e4d14();
    lVar3 = FUN_144718840(param_1,uVar2);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    uVar2 = FUN_1459e4d14();
    cVar1 = FUN_144a7ff9e(lVar3,uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_1400796d0(param_1[2],DAT_14cab7050,1);
      if (lVar3 != 0) {
        local_28 = param_2;
        (**(code **)(*param_1 + 0x248))(param_1,lVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cee8a FUN_1476cee8a body=263 status=ok
// SIG undefined FUN_1476cee8a(void)

longlong FUN_1476cee8a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = (**(code **)(*param_1 + 0x58))();
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    uVar6 = FUN_145920c18();
    cVar4 = FUN_144a7ff9e(lVar3,uVar6);
    if ((lVar5 != 0) && (cVar4 != '\0')) {
      FUN_140760c2c(param_2,&local_38);
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
      if (local_38 != 0) {
        lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x4e8) + 0x48))(lVar5 + 0x4e8,local_38 + 0x280);
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
      if (local_38 != 0) goto LAB_1476ceeb6;
    }
  }
  lVar5 = 0;
LAB_1476ceeb6:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1476cef92 FUN_1476cef92 body=9 status=ok
// SIG undefined FUN_1476cef92(void)

void FUN_1476cef92(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x30);
  return;
}



// FUNCTION 1476cef9c FUN_1476cef9c body=287 status=ok
// SIG undefined FUN_1476cef9c(void)

void FUN_1476cef9c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      local_68 = *(undefined8 *)(lVar3 + lVar6);
      FUN_143333872(local_68,&local_88);
      local_78 = local_88;
      local_70 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      local_60 = &local_68;
      local_58 = &local_78;
      FUN_1477024e0(param_1 + 7,local_4c,&local_60);
      plVar5 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf0bc FUN_1476cf0bc body=344 status=ok
// SIG undefined FUN_1476cf0bc(void)

void FUN_1476cf0bc(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    lVar2 = param_1[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_1;
      iVar5 = 1;
      lVar7 = 0;
      lVar6 = 0;
      bVar3 = DAT_14c950c29;
      do {
        if ((bVar3 & 1) != 0) {
          FUN_1456cec3c(param_2);
          bVar3 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar1 + lVar7) == param_2) {
          if (iVar5 == 0) {
            return;
          }
          if ((bVar3 & 1) != 0) {
            FUN_1456cec3c(param_2);
          }
          iVar4 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
            FUN_147702a74(param_1 + 2,iVar4);
          }
          *(longlong *)(param_1[2] + (longlong)iVar4 * 8) = param_2;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_2);
          }
          iVar4 = (int)param_1[1];
          if (iVar4 - iVar5 != 0) {
            memmove((void *)(*param_1 + (lVar6 >> 0x20) * 8),
                    (void *)(*param_1 + (lVar6 >> 0x20) * 8 + 8),(longlong)(iVar4 - iVar5) << 3);
            iVar4 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar4 + -1;
          FUN_147702afa(param_1);
          if (param_3 == '\0') {
            return;
          }
          FUN_147702b9c(param_1 + 7,param_2);
          return;
        }
        lVar6 = lVar6 + 0x100000000;
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar7);
    }
  }
  return;
}



// FUNCTION 1476cf218 FUN_1476cf218 body=177 status=ok
// SIG undefined FUN_1476cf218(void)

void FUN_1476cf218(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x192) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_146a8a960(*(longlong *)(param_1 + 0x270),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf2ca FUN_1476cf2ca body=202 status=ok
// SIG undefined FUN_1476cf2ca(void)

void FUN_1476cf2ca(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x19c) = local_44;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_40 = local_44;
    local_3c = 1;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a8a88e();
    *(undefined1 *)(param_1 + 0x198) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf396 FUN_1476cf396 body=160 status=ok
// SIG undefined FUN_1476cf396(void)

void FUN_1476cf396(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 800))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf438 FUN_1476cf438 body=200 status=ok
// SIG undefined FUN_1476cf438(void)

void FUN_1476cf438(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  uStack_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  (**(code **)(*param_1 + 0x328))(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf502 FUN_1476cf502 body=167 status=ok
// SIG undefined FUN_1476cf502(void)

void FUN_1476cf502(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 400) = local_19;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_146a8ac8e();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf5aa FUN_1476cf5aa body=415 status=ok
// SIG undefined FUN_1476cf5aa(void)

void FUN_1476cf5aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = &local_d8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(param_1 + 0x1c0,pppuVar4);
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_146a8aafa(*(longlong *)(param_1 + 0x270),param_1 + 0x1c0);
  }
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf74a FUN_1476cf74a body=198 status=ok
// SIG undefined FUN_1476cf74a(void)

void FUN_1476cf74a(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x180) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x184) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x188) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x18c) = uStack_50._4_4_;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a8acca();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf812 FUN_1476cf812 body=167 status=ok
// SIG undefined FUN_1476cf812(void)

void FUN_1476cf812(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x191) = local_19;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_146a8acac();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf8c6 FUN_1476cf8c6 body=105 status=ok
// SIG undefined FUN_1476cf8c6(void)

void FUN_1476cf8c6(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x184) = uVar1;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_146a8acca();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cf9ce FUN_1476cf9ce body=111 status=ok
// SIG undefined FUN_1476cf9ce(void)

void FUN_1476cf9ce(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(char *)(param_1 + 0x198) = param_2;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_24 = param_2 != '\0';
    if ((bool)local_24) {
      local_28 = *(undefined4 *)(param_1 + 0x19c);
    }
    local_20 = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_146a8a88e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476cfa48 FUN_1476cfa48 body=106 status=ok
// SIG undefined FUN_1476cfa48(void)

void FUN_1476cfa48(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_34 = 1;
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = uVar1;
    FUN_146a8a88e();
    *(undefined1 *)(param_1 + 0x198) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cfaca FUN_1476cfaca body=74 status=ok
// SIG undefined FUN_1476cfaca(void)

void FUN_1476cfaca(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(*param_1 + 0x328))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cfb16 FUN_1476cfb16 body=316 status=ok
// SIG undefined FUN_1476cfb16(void)

void FUN_1476cfb16(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = *(undefined4 *)(param_1 + 0x1c8);
  uStack_dc = *(undefined4 *)(param_1 + 0x1cc);
  uStack_d8 = *(undefined4 *)(param_1 + 0x1d0);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1d4);
  local_d0 = *(undefined4 *)(param_1 + 0x1d8);
  uStack_cc = *(undefined4 *)(param_1 + 0x1dc);
  uStack_c8 = *(undefined4 *)(param_1 + 0x1e0);
  uStack_c4 = *(undefined4 *)(param_1 + 0x1e4);
  local_c0 = *(undefined4 *)(param_1 + 0x1e8);
  uStack_bc = *(undefined4 *)(param_1 + 0x1ec);
  uStack_b8 = *(undefined4 *)(param_1 + 0x1f0);
  uStack_b4 = *(undefined4 *)(param_1 + 500);
  local_b0 = *(longlong *)(param_1 + 0x1f8);
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x200);
  puVar6 = local_a8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_54 = *(undefined1 *)(param_1 + 0x254);
  local_58 = *(undefined4 *)(param_1 + 0x250);
  local_50 = *(undefined8 *)(param_1 + 600);
  local_48 = *(longlong **)(param_1 + 0x260);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0x268);
  FUN_140f13d9e(param_2,&local_e8);
  plVar3 = local_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cfc54 FUN_1476cfc54 body=58 status=ok
// SIG undefined FUN_1476cfc54(void)

void FUN_1476cfc54(longlong param_1)

{
  FUN_140f13d9e(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_146a8aafa(*(longlong *)(param_1 + 0x270),param_1 + 0x1c0);
    return;
  }
  return;
}



// FUNCTION 1476cfca2 FUN_1476cfca2 body=99 status=ok
// SIG undefined FUN_1476cfca2(void)

void FUN_1476cfca2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cfd06 FUN_1476cfd06 body=41 status=ok
// SIG undefined FUN_1476cfd06(void)

void FUN_1476cfd06(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x0001476cfd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  return;
}



// FUNCTION 1476cfd36 FUN_1476cfd36 body=619 status=ok
// SIG undefined FUN_1476cfd36(void)

undefined8 * FUN_1476cfd36(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_328 [32];
  undefined1 *local_308;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined1 local_2e1;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined1 local_2b8 [640];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_1476cffa2(local_2b8);
  local_308 = &local_2e1;
  FUN_147702fc0(local_2e0,"SBackgroundBlur",".\\Runtime/UMG/Private/Components/BackgroundBlur.cpp",
                0x2f);
  FUN_1476d00b0(local_2e0,&local_2c8,local_2b8);
  plVar4 = local_2c0;
  if (local_2c0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x270) = local_2c8;
    plVar7 = *(longlong **)(param_1 + 0x278);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x278) = 0;
LAB_1476cff0b:
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001476cfec2:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x270) = local_2c8;
    plVar7 = *(longlong **)(param_1 + 0x278);
    if (local_2c0 == plVar7) {
      LOCK();
      plVar7 = local_2c0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar4;
        goto joined_r0x0001476cfec2;
      }
    }
    else {
      *(longlong **)(param_1 + 0x278) = local_2c0;
      if (plVar7 != (longlong *)0x0) goto LAB_1476cff0b;
    }
  }
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2c0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar1 = (int *)((longlong)local_2c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2c0 + 0x10))(local_2c0);
      }
    }
  }
  if (local_2d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2d8)(local_2d8);
      LOCK();
      piVar1 = (int *)((longlong)local_2d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2d8 + 0x10))(local_2d8);
      }
    }
  }
  FUN_1476d0124(local_2b8);
  if (*(int *)(param_1 + 0x170) < 1) goto LAB_1476cfe43;
  lVar5 = FUN_1433335b4(param_1);
  if (lVar5 == 0) {
LAB_1476cff74:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_145a69620();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1476cff74;
  }
  local_2f8 = *(undefined8 *)(param_1 + 0x270);
  local_2f0 = *(longlong *)(param_1 + 0x278);
  if (local_2f0 != 0) {
    LOCK();
    *(int *)(local_2f0 + 8) = *(int *)(local_2f0 + 8) + 1;
    UNLOCK();
  }
  FUN_1476d01a4(lVar5,&local_2f8);
LAB_1476cfe43:
  uVar3 = *(undefined8 *)(param_1 + 0x270);
  plVar4 = *(longlong **)(param_1 + 0x278);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_38 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476cffa2 FUN_1476cffa2 body=269 status=ok
// SIG undefined FUN_1476cffa2(void)

longlong FUN_1476cffa2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0x4000000040000000;
  *(undefined8 *)(param_1 + 0x1c8) = 0x4000000040000000;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 500) = 1;
  *(undefined1 *)(param_1 + 0x20c) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x250) = 1;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
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



// FUNCTION 1476d00b0 FUN_1476d00b0 body=115 status=ok
// SIG undefined FUN_1476d00b0(void)

longlong * FUN_1476d00b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a8a65a(*param_1,param_3);
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



// FUNCTION 1476d0124 FUN_1476d0124 body=128 status=ok
// SIG undefined FUN_1476d0124(void)

void FUN_1476d0124(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x218);
  if (*(char *)(param_1 + 0x20c) == '\x01') {
    *(undefined1 *)(param_1 + 0x20c) = 0;
  }
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1d8);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1476d01a4 FUN_1476d01a4 body=399 status=ok
// SIG undefined FUN_1476d01a4(void)

void FUN_1476d01a4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x58);
    if (plVar5 == (longlong *)0x0) goto LAB_1476d0238;
    *(undefined8 *)(param_1 + 0x58) = 0;
LAB_1476d0200:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1476d0238;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x58);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x58) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1476d0238;
      goto LAB_1476d0200;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1476d0238;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1476d0238:
  local_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  local_48 = 1;
  local_40 = 0;
  uStack_38 = 0;
  FUN_146a8acca(*(undefined8 *)(param_1 + 0x50));
  FUN_146a8ac8e(*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x48));
  FUN_146a8acac(*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x49));
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_68 = DAT_14c98dec8;
    local_60 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    FUN_143333872(*(longlong *)(param_1 + 0x30),&local_68);
  }
  FUN_146a8a8ee(uVar3,&local_68);
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0334 FUN_1476d0334 body=346 status=ok
// SIG undefined FUN_1476d0334(void)

void FUN_1476d0334(longlong param_1)

{
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_c8 = *(undefined4 *)(param_1 + 0x180);
    uStack_c4 = *(undefined4 *)(param_1 + 0x184);
    uStack_c0 = *(undefined4 *)(param_1 + 0x188);
    uStack_bc = *(undefined4 *)(param_1 + 0x18c);
    local_b8 = 1;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_146a8acca();
    FUN_146a8ac8e(*(undefined8 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 400));
    FUN_146a8acac(*(undefined8 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x191));
    FUN_146a8a960(*(undefined8 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x192));
    local_94 = *(char *)(param_1 + 0x198) == '\x01';
    if ((bool)local_94) {
      local_98 = *(undefined4 *)(param_1 + 0x19c);
    }
    local_90 = 1;
    local_88 = 0;
    uStack_80 = 0;
    FUN_146a8a88e(*(undefined8 *)(param_1 + 0x270));
    local_e0 = *(undefined4 *)(param_1 + 0x194);
    local_dc = 1;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146a8a862(*(undefined8 *)(param_1 + 0x270));
    FUN_146a8aafa(*(undefined8 *)(param_1 + 0x270),param_1 + 0x1c0);
    local_78 = *(undefined4 *)(param_1 + 0x1a0);
    uStack_74 = *(undefined4 *)(param_1 + 0x1a4);
    uStack_70 = *(undefined4 *)(param_1 + 0x1a8);
    uStack_6c = *(undefined4 *)(param_1 + 0x1ac);
    local_68 = *(undefined4 *)(param_1 + 0x1b0);
    uStack_64 = *(undefined4 *)(param_1 + 0x1b4);
    uStack_60 = *(undefined4 *)(param_1 + 0x1b8);
    uStack_5c = *(undefined4 *)(param_1 + 0x1bc);
    local_58 = 1;
    local_50 = 0;
    uStack_48 = 0;
    FUN_146a8a8c2(*(undefined8 *)(param_1 + 0x270));
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476d0490 FUN_1476d0490 body=263 status=ok
// SIG undefined FUN_1476d0490(void)

void FUN_1476d0490(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  uVar4 = *(undefined8 *)(param_1 + 0x188);
  uVar5 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_2 + 0x40) = uVar5;
  lVar2 = *(longlong *)(param_2 + 0x28);
  local_58._0_4_ = (undefined4)uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar4;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(lVar2 + 0x180) = (undefined4)local_58;
  *(undefined4 *)(lVar2 + 0x184) = local_58._4_4_;
  *(undefined4 *)(lVar2 + 0x188) = (undefined4)uStack_50;
  *(undefined4 *)(lVar2 + 0x18c) = uStack_50._4_4_;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if (*(longlong *)(lVar2 + 0x270) != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    local_48 = uVar3;
    uStack_40 = uVar4;
    FUN_146a8acca();
  }
  uVar1 = *(undefined1 *)(param_1 + 400);
  *(undefined1 *)(param_2 + 0x48) = uVar1;
  lVar2 = *(longlong *)(param_2 + 0x28);
  *(undefined1 *)(lVar2 + 400) = uVar1;
  if (*(longlong *)(lVar2 + 0x270) != 0) {
    FUN_146a8ac8e();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x191);
  *(undefined1 *)(param_2 + 0x49) = uVar1;
  lVar2 = *(longlong *)(param_2 + 0x28);
  *(undefined1 *)(lVar2 + 0x191) = uVar1;
  if (*(longlong *)(lVar2 + 0x270) != 0) {
    FUN_146a8acac();
  }
  lVar2 = *(longlong *)(param_1 + 0x270);
  if (lVar2 != 0) {
    local_60 = *(longlong *)(param_1 + 0x278);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    local_68 = lVar2;
    FUN_1476d01a4(param_2,&local_68);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d05b2 FUN_1476d05b2 body=91 status=ok
// SIG undefined FUN_1476d05b2(void)

void FUN_1476d05b2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x194) = param_2;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_146a8a862();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d060e FUN_1476d060e body=114 status=ok
// SIG undefined FUN_1476d060e(void)

void FUN_1476d060e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x1b0) = param_2[2];
  *(undefined8 *)(param_1 + 0x1b8) = uVar5;
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar3;
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_48 = *param_2;
    uStack_40 = param_2[1];
    local_38 = *(undefined4 *)(param_2 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = *(undefined4 *)(param_2 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146a8a8c2();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0682 FUN_1476d0682 body=406 status=ok
// SIG undefined FUN_1476d0682(void)

ulonglong FUN_1476d0682(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14119010c();
  local_38 = 0xe4b068ed;
  uStack_34 = 0xf49442e9;
  uStack_30 = 0xa231da0b;
  uStack_2c = 0x2e46bb41;
  uVar5 = FUN_1448a256a(param_1);
  if ((int)uVar5 < 0xc) {
    lVar6 = FUN_1433335b4(param_1);
    uVar5 = 0;
    if (lVar6 != 0) {
      lVar7 = FUN_145a69620();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (uVar5 = lVar7 + 0x30,
         *(ulonglong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != uVar5)) {
        lVar8 = FUN_1476d0819(param_1);
        lVar7 = *(longlong *)(lVar6 + 0x30);
        if (DAT_14c950c29 == 1) {
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_1456cec3c(lVar7);
            lVar7 = *(longlong *)(lVar6 + 0x30);
          }
        }
        bVar4 = DAT_14c950c29;
        *(longlong *)(lVar8 + 0x30) = lVar7;
        if (lVar8 != 0 && (~bVar4 & 1) == 0) {
          FUN_1456cec3c(lVar8);
          bVar4 = DAT_14c950c29;
        }
        *(longlong *)(lVar7 + 0x30) = lVar8;
        if (param_1 != 0 && (~bVar4 & 1) == 0) {
          FUN_1456cec3c(param_1);
          bVar4 = DAT_14c950c29;
        }
        *(longlong *)(lVar8 + 0x28) = param_1;
        plVar3 = *(longlong **)(param_1 + 0x168);
        if ((lVar8 != 0) && ((bVar4 & 1) != 0)) {
          FUN_1456cec3c(lVar8);
        }
        *plVar3 = lVar8;
        FUN_144757f48(lVar6,0x40000000);
        uVar2 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          uVar5 = (ulonglong)uVar2;
          if ((uVar2 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          if (uVar2 == uVar1) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x200000;
          }
          else {
            uVar5 = (ulonglong)uVar1;
          }
          UNLOCK();
        } while (uVar2 != uVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1476d0819 FUN_1476d0819 body=148 status=ok
// SIG undefined FUN_1476d0819(void)

undefined8 FUN_1476d0819(undefined8 param_1)

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
  uVar1 = FUN_145a69620();
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



// FUNCTION 1476d08ae FUN_1476d08ae body=174 status=ok
// SIG undefined FUN_1476d08ae(void)

void FUN_1476d08ae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x48) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(lVar1 + 400) = local_19;
  if (*(longlong *)(lVar1 + 0x270) != 0) {
    FUN_146a8ac8e();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d095e FUN_1476d095e body=215 status=ok
// SIG undefined FUN_1476d095e(void)

void FUN_1476d095e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x38) = local_58;
  *(undefined8 *)(param_1 + 0x40) = uStack_50;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x180) = (undefined4)local_58;
  *(undefined4 *)(lVar1 + 0x184) = local_58._4_4_;
  *(undefined4 *)(lVar1 + 0x188) = (undefined4)uStack_50;
  *(undefined4 *)(lVar1 + 0x18c) = uStack_50._4_4_;
  if (*(longlong *)(lVar1 + 0x270) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a8acca();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0a36 FUN_1476d0a36 body=174 status=ok
// SIG undefined FUN_1476d0a36(void)

void FUN_1476d0a36(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x49) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(lVar1 + 0x191) = local_19;
  if (*(longlong *)(lVar1 + 0x270) != 0) {
    FUN_146a8acac();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0ae6 FUN_1476d0ae6 body=118 status=ok
// SIG undefined FUN_1476d0ae6(void)

void FUN_1476d0ae6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_48._0_4_ = (undefined4)uVar2;
  local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar3;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(lVar1 + 0x180) = (undefined4)local_48;
  *(undefined4 *)(lVar1 + 0x184) = local_48._4_4_;
  *(undefined4 *)(lVar1 + 0x188) = (undefined4)uStack_40;
  *(undefined4 *)(lVar1 + 0x18c) = uStack_40._4_4_;
  local_48 = uVar2;
  uStack_40 = uVar3;
  if (*(longlong *)(lVar1 + 0x270) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = uVar2;
    uStack_30 = uVar3;
    FUN_146a8acca();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0ba4 FUN_1476d0ba4 body=189 status=ok
// SIG undefined FUN_1476d0ba4(void)

void FUN_1476d0ba4(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(lVar1 + 0x180) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(lVar1 + 0x184) = uVar2;
    *(undefined4 *)(lVar1 + 0x188) = uVar3;
    *(undefined4 *)(lVar1 + 0x18c) = uVar4;
    if (*(longlong *)(lVar1 + 0x270) != 0) {
      local_28 = 1;
      local_20 = 0;
      uStack_18 = 0;
      local_38 = local_48;
      uStack_30 = uStack_40;
      FUN_146a8acca();
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined1 *)(lVar1 + 400) = *(undefined1 *)(param_1 + 0x48);
    if (*(longlong *)(lVar1 + 0x270) != 0) {
      FUN_146a8ac8e();
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined1 *)(lVar1 + 0x191) = *(undefined1 *)(param_1 + 0x49);
    if (*(longlong *)(lVar1 + 0x270) != 0) {
      FUN_146a8acac();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0c62 FUN_1476d0c62 body=38 status=ok
// SIG undefined FUN_1476d0c62(void)

void FUN_1476d0c62(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476d0c88();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476d0c88 FUN_1476d0c88 body=232 status=ok
// SIG undefined FUN_1476d0c88(void)

longlong FUN_1476d0c88(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    lVar1 = FUN_1402d2740();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar1 = FUN_144a772c4();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) != lVar1 + 0x30)) {
        lVar2 = FUN_14090ceee(lVar2,param_1,0);
        FUN_140648376(param_1 + 0x1c0,lVar2);
        lVar1 = *(longlong *)(param_1 + 0x2f8);
        if (lVar1 != 0) {
          local_38 = 1;
          local_30 = 0;
          uStack_28 = 0;
          local_40 = param_1 + 0x1c0;
          FUN_140a5acbc(lVar1 + 0x268,lVar1,&local_40);
          FUN_1449db362(&local_30);
        }
      }
      goto LAB_1476d0ccf;
    }
  }
  lVar2 = 0;
LAB_1476d0ccf:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0d72 FUN_1476d0d72 body=382 status=ok
// SIG undefined FUN_1476d0d72(void)

void FUN_1476d0d72(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476d0ef2(param_1,pppuVar4);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0ef2 FUN_1476d0ef2 body=126 status=ok
// SIG undefined FUN_1476d0ef2(void)

void FUN_1476d0ef2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f13d9e(param_1 + 0x1c0);
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 != 0) {
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = param_1 + 0x1c0;
    FUN_140a5acbc(lVar1 + 0x268,lVar1,&local_38);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d0f72 FUN_1476d0f72 body=194 status=ok
// SIG undefined FUN_1476d0f72(void)

void FUN_1476d0f72(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x280) = local_58;
  *(undefined4 *)(param_1 + 0x284) = uStack_54;
  *(undefined4 *)(param_1 + 0x288) = uStack_50;
  *(undefined4 *)(param_1 + 0x28c) = uStack_4c;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_38 = 0;
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_14605ea88();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1036 FUN_1476d1036 body=156 status=ok
// SIG undefined FUN_1476d1036(void)

void FUN_1476d1036(undefined8 param_1,longlong param_2)

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
  FUN_1476d10d4(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d10d4 FUN_1476d10d4 body=546 status=ok
// SIG undefined FUN_1476d10d4(void)

void FUN_1476d10d4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 auStack_a8 [4];
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = &PTR_FUN_149ed05f0;
  if (param_2 == 0) {
    local_e0 = &DAT_3f8000003f800000;
    puStack_d8 = &DAT_3f8000003f800000;
    local_d0 = local_d0 & 0xffffff00;
    uStack_cc = 3;
    uStack_c8 = 0x4200000042000000;
    local_74 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    local_70 = 1;
    local_68 = DAT_14c84635c;
    local_58 = local_58 & 0xffffff00;
    local_54 = 4;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_40 = 0;
    local_60 = local_68;
  }
  else {
    local_e0 = *(undefined1 **)(param_2 + 0x38);
    puStack_d8 = *(undefined1 **)(param_2 + 0x40);
    local_d0 = *(uint *)(param_2 + 0x48);
    uStack_cc = *(undefined4 *)(param_2 + 0x4c);
    uStack_c8 = *(undefined8 *)(param_2 + 0x50);
    local_c0 = *(undefined8 *)(param_2 + 0x58);
    uStack_b8 = *(undefined8 *)(param_2 + 0x60);
    local_b0 = *(longlong *)(param_2 + 0x68);
    if ((local_b0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar5 = (undefined8 *)(param_2 + 0x70);
    puVar6 = auStack_a8;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_54 = *(undefined1 *)(param_2 + 0xc4);
    local_58 = *(uint *)(param_2 + 0xc0);
    local_50 = *(undefined8 *)(param_2 + 200);
    plStack_48 = *(longlong **)(param_2 + 0xd0);
    if (plStack_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
      UNLOCK();
    }
    local_40 = *(undefined8 *)(param_2 + 0xd8);
  }
  FUN_140f13d9e(param_1 + 0x1c0,&local_e8);
  plVar3 = plStack_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x2f8);
  if (lVar4 != 0) {
    local_100 = 1;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = param_1 + 0x1c0;
    FUN_140a5acbc(lVar4 + 0x268,lVar4,&local_108);
    FUN_1449db362(&local_f8);
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d12f8 FUN_1476d12f8 body=156 status=ok
// SIG undefined FUN_1476d12f8(void)

void FUN_1476d12f8(undefined8 param_1,longlong param_2)

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
  FUN_14332ef92(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1396 FUN_1476d1396 body=156 status=ok
// SIG undefined FUN_1476d1396(void)

void FUN_1476d1396(undefined8 param_1,longlong param_2)

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
  FUN_1476d1434(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1434 FUN_1476d1434 body=126 status=ok
// SIG undefined FUN_1476d1434(void)

void FUN_1476d1434(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140648376(param_1 + 0x1c0);
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 != 0) {
    local_30 = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = param_1 + 0x1c0;
    FUN_140a5acbc(lVar1 + 0x268,lVar1,&local_38);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d14b4 FUN_1476d14b4 body=155 status=ok
// SIG undefined FUN_1476d14b4(void)

void FUN_1476d14b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1476d1550(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1550 FUN_1476d1550 body=120 status=ok
// SIG undefined FUN_1476d1550(void)

void FUN_1476d1550(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  *(undefined4 *)(param_1 + 400) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a5c650(lVar1 + 0x240,lVar1,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d15ca FUN_1476d15ca body=190 status=ok
// SIG undefined FUN_1476d15ca(void)

void FUN_1476d15ca(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x2a0) = local_58;
  *(undefined4 *)(param_1 + 0x2a4) = uStack_54;
  *(undefined4 *)(param_1 + 0x2a8) = uStack_50;
  *(undefined4 *)(param_1 + 0x2ac) = uStack_4c;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a8b2bc();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d168a FUN_1476d168a body=167 status=ok
// SIG undefined FUN_1476d168a(void)

void FUN_1476d168a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x180) = local_19;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_146a8b2f0();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1732 FUN_1476d1732 body=198 status=ok
// SIG undefined FUN_1476d1732(void)

void FUN_1476d1732(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x1a4) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x1a8) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x1ac) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x1b0) = uStack_50._4_4_;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_145ab4ba4();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d17fe FUN_1476d17fe body=205 status=ok
// SIG undefined FUN_1476d17fe(void)

void FUN_1476d17fe(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x182) = *(byte *)(param_1 + 0x182) & 0xfe | local_34 != 0;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_145ab4ae2();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d18cc FUN_1476d18cc body=167 status=ok
// SIG undefined FUN_1476d18cc(void)

void FUN_1476d18cc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x181) = local_19;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_146a8b30e();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d19c8 FUN_1476d19c8 body=100 status=ok
// SIG undefined FUN_1476d19c8(void)

void FUN_1476d19c8(longlong param_1,byte *param_2)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  byte local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *param_2;
  *(byte *)(param_1 + 0x182) = *(byte *)(param_1 + 0x182) & 0xfe | bVar1;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = bVar1;
    FUN_145ab4ae2();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1a2e FUN_1476d1a2e body=87 status=ok
// SIG undefined FUN_1476d1a2e(void)

void FUN_1476d1a2e(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 == 0) {
    local_18 = *(undefined4 *)(param_1 + 0x184);
    uStack_14 = *(undefined4 *)(param_1 + 0x188);
    uStack_10 = *(undefined4 *)(param_1 + 0x18c);
    uStack_c = *(undefined4 *)(param_1 + 400);
  }
  else {
    local_18 = *(undefined4 *)(lVar1 + 0x240);
    uStack_14 = *(undefined4 *)(lVar1 + 0x244);
    uStack_10 = *(undefined4 *)(lVar1 + 0x248);
    uStack_c = *(undefined4 *)(lVar1 + 0x24c);
  }
  *param_2 = local_18;
  param_2[1] = uStack_14;
  param_2[2] = uStack_10;
  param_2[3] = uStack_c;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1a86 FUN_1476d1a86 body=62 status=ok
// SIG undefined FUN_1476d1a86(void)

void FUN_1476d1a86(undefined8 param_1,undefined4 *param_2)

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
  FUN_1476d1550();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1ad2 FUN_1476d1ad2 body=14 status=ok
// SIG undefined FUN_1476d1ad2(void)

undefined8 * FUN_1476d1ad2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1ac);
  *param_2 = *(undefined8 *)(param_1 + 0x1a4);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1476d1ae0 FUN_1476d1ae0 body=105 status=ok
// SIG undefined FUN_1476d1ae0(void)

void FUN_1476d1ae0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  *(undefined4 *)(param_1 + 0x1b0) = uVar3;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_145ab4ba4();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1b56 FUN_1476d1b56 body=109 status=ok
// SIG undefined FUN_1476d1b56(void)

void FUN_1476d1b56(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_14605ea88();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1bd0 FUN_1476d1bd0 body=105 status=ok
// SIG undefined FUN_1476d1bd0(void)

void FUN_1476d1bd0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x2a4) = uVar1;
  *(undefined4 *)(param_1 + 0x2a8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_146a8b2bc();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1c4e FUN_1476d1c4e body=590 status=ok
// SIG undefined FUN_1476d1c4e(void)

undefined8 * FUN_1476d1c4e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_3d8 [32];
  undefined1 *local_3b8;
  undefined8 local_3a8;
  longlong local_3a0;
  undefined1 local_391;
  undefined1 local_390 [8];
  longlong *local_388;
  undefined8 local_378;
  longlong *local_370;
  undefined1 local_368 [808];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  FUN_140a562d0(local_368);
  local_40 = *(undefined1 *)(param_1 + 0x2b0);
  local_3b8 = &local_391;
  FUN_140a55c32(local_390,"SBorder",".\\Runtime/UMG/Private/Components/Border.cpp",0x33);
  FUN_140a530e4(local_390,&local_378,local_368);
  plVar4 = local_370;
  if (local_370 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2f8) = local_378;
    plVar7 = *(longlong **)(param_1 + 0x300);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x300) = 0;
LAB_1476d1d33:
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001476d1d60:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_370 + 1) = (int)local_370[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2f8) = local_378;
    plVar7 = *(longlong **)(param_1 + 0x300);
    if (local_370 == plVar7) {
      LOCK();
      plVar7 = local_370 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_370)(local_370);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar4;
        goto joined_r0x0001476d1d60;
      }
    }
    else {
      *(longlong **)(param_1 + 0x300) = local_370;
      if (plVar7 != (longlong *)0x0) goto LAB_1476d1d33;
    }
  }
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_370 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar1 = (int *)((longlong)local_370 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_370 + 0x10))(local_370);
      }
    }
  }
  if (local_388 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_388 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_388)(local_388);
      LOCK();
      piVar1 = (int *)((longlong)local_388 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_388 + 0x10))(local_388);
      }
    }
  }
  FUN_140a59028(local_368);
  if (*(int *)(param_1 + 0x170) < 1) goto LAB_1476d1dcc;
  lVar5 = FUN_1433335b4(param_1);
  if (lVar5 == 0) {
LAB_1476d1e6f:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_14128aa12();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1476d1e6f;
  }
  local_3a8 = *(undefined8 *)(param_1 + 0x2f8);
  local_3a0 = *(longlong *)(param_1 + 0x300);
  if (local_3a0 != 0) {
    LOCK();
    *(int *)(local_3a0 + 8) = *(int *)(local_3a0 + 8) + 1;
    UNLOCK();
  }
  FUN_1476d1e9e(lVar5,&local_3a8);
LAB_1476d1dcc:
  uVar3 = *(undefined8 *)(param_1 + 0x2f8);
  plVar4 = *(longlong **)(param_1 + 0x300);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_38 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1e9e FUN_1476d1e9e body=282 status=ok
// SIG undefined FUN_1476d1e9e(void)

void FUN_1476d1e9e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x58);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x58) = plVar2;
    uVar3 = *param_2;
  }
  local_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  local_38 = 1;
  local_30 = 0;
  uStack_28 = 0;
  FUN_145ab4ba4(uVar3);
  FUN_146a8b2f0(*param_2,*(undefined1 *)(param_1 + 0x48));
  FUN_146a8b30e(*param_2,*(undefined1 *)(param_1 + 0x49));
  plVar2 = (longlong *)*param_2;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_58 = DAT_14c98dec8;
    local_50 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_143333872(*(longlong *)(param_1 + 0x30),&local_58);
  }
  (**(code **)(*plVar2 + 0x240))(plVar2,&local_58);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d1fba FUN_1476d1fba body=2340 status=ok
// SIG undefined FUN_1476d1fba(void)

void FUN_1476d1fba(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_428 [40];
  undefined8 *local_400;
  undefined4 local_3f8;
  undefined8 *local_3f0;
  undefined4 local_3e8;
  undefined8 *local_3e0;
  undefined4 local_3d8;
  undefined8 *local_3d0;
  undefined4 local_3c8;
  byte local_3c0;
  undefined1 local_3bf;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  code *local_378;
  undefined1 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined5 uStack_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  code *local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  uint uStack_258;
  undefined1 uStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined **local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  longlong local_1d0;
  undefined8 local_1c8 [10];
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined **local_138;
  undefined8 uStack_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  byte local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    cVar2 = FUN_14113f0c0(param_1 + 0x194);
    if (cVar2 == '\0') {
      local_238 = *(undefined8 *)(param_1 + 0x184);
      uStack_230 = *(undefined8 *)(param_1 + 0x18c);
      local_228 = 1;
      local_220 = 0;
      uStack_218 = 0;
    }
    else {
      local_138 = *(undefined ***)(param_1 + 0x19c);
      uVar3 = FUN_14479d2ce(param_1 + 0x194);
      local_238 = 0;
      uStack_230 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_228 = 1;
      FUN_1446efa72(&local_220,0,3,0x10);
      uStack_218 = CONCAT44(uStack_218._4_4_,3);
      FUN_147703202(local_220,uVar3,&local_138);
    }
    cVar2 = FUN_14113f0c0(param_1 + 0x290);
    if (cVar2 == '\0') {
      local_298 = *(undefined8 *)(param_1 + 0x280);
      uStack_290 = *(undefined8 *)(param_1 + 0x288);
      local_288 = 1;
      local_280 = 0;
      uStack_278 = 0;
      local_138 = *(undefined ***)(param_1 + 0x280);
      uStack_130 = *(undefined1 **)(param_1 + 0x288);
      FUN_1449db362();
      local_268 = (code *)local_138;
      uStack_260 = (undefined4)uStack_130;
      uStack_25c = uStack_130._4_4_;
      uStack_258 = uStack_258 & 0xffffff00;
      uStack_254 = 1;
      local_250 = 0;
      uStack_248 = 0;
    }
    else {
      local_2c8 = *(undefined8 *)(param_1 + 0x298);
      uVar3 = FUN_14479d2ce(param_1 + 0x290);
      local_138 = (undefined **)0x0;
      uStack_130 = (undefined1 *)0x0;
      local_120 = 0;
      uStack_118 = 0;
      local_128 = (undefined1 *)CONCAT71(local_128._1_7_,1);
      FUN_1446efa72(&local_120,0,3,0x10);
      uStack_118 = CONCAT44(uStack_118._4_4_,3);
      FUN_147703202(local_120,uVar3,&local_2c8);
      local_268 = FUN_1476d29c2;
      uStack_260 = 0;
      FUN_1476d28e0(&local_2b8,param_1,&local_268,&local_138);
      local_268 = (code *)0x3f800000;
      uStack_260 = 0x3f800000;
      uStack_25c = 0x3f800000;
      uStack_258 = uStack_258 & 0xffffff00;
      uStack_254 = 1;
      local_250 = 0;
      uStack_248 = (ulonglong)uStack_248._4_4_ << 0x20;
      FUN_140a5aaa0(&local_250,&local_2b8);
      FUN_1449db362(&local_2b8);
      FUN_1449db362(&local_120);
    }
    cVar2 = FUN_14113f0c0(param_1 + 0x270);
    if (cVar2 == '\0') {
      local_208 = &PTR_FUN_149ed05f0;
      local_200 = *(undefined4 *)(param_1 + 0x1c8);
      uStack_1fc = *(undefined4 *)(param_1 + 0x1cc);
      uStack_1f8 = *(undefined4 *)(param_1 + 0x1d0);
      uStack_1f4 = *(undefined4 *)(param_1 + 0x1d4);
      local_1f0 = *(undefined4 *)(param_1 + 0x1d8);
      uStack_1ec = *(undefined4 *)(param_1 + 0x1dc);
      uStack_1e8 = *(undefined4 *)(param_1 + 0x1e0);
      uStack_1e4 = *(undefined4 *)(param_1 + 0x1e4);
      local_1e0 = *(undefined4 *)(param_1 + 0x1e8);
      uStack_1dc = *(undefined4 *)(param_1 + 0x1ec);
      uStack_1d8 = *(undefined4 *)(param_1 + 0x1f0);
      uStack_1d4 = *(undefined4 *)(param_1 + 500);
      local_1d0 = *(longlong *)(param_1 + 0x1f8);
      if ((local_1d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      puVar6 = (undefined8 *)(param_1 + 0x200);
      puVar7 = local_1c8;
      for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_174 = *(undefined1 *)(param_1 + 0x254);
      local_178 = *(undefined4 *)(param_1 + 0x250);
      local_170 = *(undefined8 *)(param_1 + 600);
      local_168 = *(longlong *)(param_1 + 0x260);
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
        UNLOCK();
      }
      local_160 = *(undefined8 *)(param_1 + 0x268);
      local_158 = 1;
      local_150 = 0;
      uStack_148 = 0;
      uVar3 = FUN_1476d2f2e(&local_208);
      FUN_140f13d9e((code *)(param_1 + 0x1c0),uVar3);
      FUN_1476d2a2e(&local_208);
      local_2b0 = CONCAT31(local_2b0._1_3_,1);
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_2b8 = (code *)(param_1 + 0x1c0);
    }
    else {
      local_2d0 = *(undefined8 *)(param_1 + 0x278);
      uVar3 = FUN_14479d2ce(param_1 + 0x270);
      local_138 = &PTR_FUN_149ed05f0;
      uStack_130 = &DAT_3f8000003f800000;
      local_128 = &DAT_3f8000003f800000;
      uVar1 = (uint)local_120;
      local_120 = CONCAT44(3,uVar1 & 0xffffff00);
      uStack_118 = 0x4200000042000000;
      local_c4 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      uStack_d7 = 0;
      uStack_d0 = 0;
      uStack_cf = 0;
      local_c0 = 1;
      local_b0 = DAT_14c84635c;
      local_b8 = DAT_14c84635c;
      local_a8 = 0;
      local_a4 = local_a4 & 0xf8 | 4;
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_88 = 1;
      FUN_1446efa72(&local_80,0,3,0x10);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      FUN_14770396c(local_80,uVar3,&local_2d0);
      local_2c8 = 0;
      local_2c0 = 0;
      FUN_1446efa72(&local_2c8,0,0x10,0x10);
      local_2c0 = 0x10;
      local_2b8 = FUN_1476d29f6;
      local_2b0 = 0;
      FUN_147703f38(local_2c8,param_1,&local_2b8,&local_138);
      local_2b8 = (code *)0x0;
      local_2b0 = CONCAT31(local_2b0._1_3_,1);
      local_2a8 = 0;
      uStack_2a0 = (ulonglong)uStack_2a0._4_4_ << 0x20;
      FUN_140a5c3e8(&local_2a8,&local_2c8);
      FUN_1449db362(&local_2c8);
      FUN_1476d2a2e(&local_138);
    }
    local_2f8 = *(undefined4 *)(param_1 + 0x1a4);
    uStack_2f4 = *(undefined4 *)(param_1 + 0x1a8);
    uStack_2f0 = *(undefined4 *)(param_1 + 0x1ac);
    uStack_2ec = *(undefined4 *)(param_1 + 0x1b0);
    local_2e8 = 1;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_145ab4ba4(*(undefined8 *)(param_1 + 0x2f8));
    uVar3 = *(undefined8 *)(param_1 + 0x2f8);
    uStack_318 = CONCAT14(uStack_254,uStack_258);
    local_328 = (undefined4)local_268;
    uStack_324 = local_268._4_4_;
    uStack_320 = uStack_260;
    uStack_31c = uStack_25c;
    local_310 = 0;
    local_308 = 0;
    FUN_140a5aaa0();
    FUN_14605ea88(uVar3,&local_328);
    lVar5 = *(longlong *)(param_1 + 0x2f8);
    local_348 = local_228;
    local_358 = (undefined4)local_238;
    uStack_354 = local_238._4_4_;
    uStack_350 = (undefined4)uStack_230;
    uStack_34c = uStack_230._4_4_;
    local_340 = 0;
    local_338 = 0;
    FUN_140a5c51c(&local_340);
    FUN_140a5c650(lVar5 + 0x240,lVar5,&local_358);
    FUN_1449db362(&local_340);
    lVar5 = *(longlong *)(param_1 + 0x2f8);
    local_370 = (undefined1)local_2b0;
    local_378 = local_2b8;
    local_368 = 0;
    local_360 = 0;
    FUN_140a5c3e8(&local_368,&local_2a8);
    FUN_140a5acbc(lVar5 + 0x268,lVar5,&local_378);
    FUN_1449db362(&local_368);
    local_3a8 = *(undefined4 *)(param_1 + 0x2a0);
    uStack_3a4 = *(undefined4 *)(param_1 + 0x2a4);
    uStack_3a0 = *(undefined4 *)(param_1 + 0x2a8);
    uStack_39c = *(undefined4 *)(param_1 + 0x2ac);
    local_398 = 1;
    local_390 = 0;
    uStack_388 = 0;
    FUN_146a8b2bc(*(undefined8 *)(param_1 + 0x2f8));
    local_3c0 = *(byte *)(param_1 + 0x182) & 1;
    local_3bf = 1;
    local_3b8 = 0;
    uStack_3b0 = 0;
    FUN_145ab4ae2(*(undefined8 *)(param_1 + 0x2f8));
    uVar3 = *(undefined8 *)(param_1 + 0x2f8);
    local_3d0 = (undefined8 *)0x0;
    local_3c8 = 0;
    FUN_1446efa72(&local_3d0,0,3,0x10);
    puVar6 = local_3d0;
    local_3c8 = 3;
    *local_3d0 = &PTR_LAB_149f05a00;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_3d0[2] = lVar4;
    *local_3d0 = &PTR_FUN_14a509270;
    local_3d0[3] = 0;
    FUN_14485c47a(local_3d0 + 3,param_1);
    *(undefined4 *)(puVar6 + 5) = 0;
    puVar6[4] = FUN_1476d2a82;
    FUN_1457670ac(uVar3,&local_3d0);
    uVar3 = *(undefined8 *)(param_1 + 0x2f8);
    local_3e0 = (undefined8 *)0x0;
    local_3d8 = 0;
    FUN_1446efa72(&local_3e0,0,3,0x10);
    puVar6 = local_3e0;
    local_3d8 = 3;
    *local_3e0 = &PTR_LAB_149f05a00;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_3e0[2] = lVar4;
    *local_3e0 = &PTR_FUN_14a509270;
    local_3e0[3] = 0;
    FUN_14485c47a(local_3e0 + 3,param_1);
    *(undefined4 *)(puVar6 + 5) = 0;
    puVar6[4] = FUN_1476d2b70;
    FUN_14697f334(uVar3,&local_3e0);
    uVar3 = *(undefined8 *)(param_1 + 0x2f8);
    local_3f0 = (undefined8 *)0x0;
    local_3e8 = 0;
    FUN_1446efa72(&local_3f0,0,3,0x10);
    puVar6 = local_3f0;
    local_3e8 = 3;
    *local_3f0 = &PTR_LAB_149f05a00;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_3f0[2] = lVar4;
    *local_3f0 = &PTR_FUN_14a509270;
    local_3f0[3] = 0;
    FUN_14485c47a(local_3f0 + 3,param_1);
    *(undefined4 *)(puVar6 + 5) = 0;
    puVar6[4] = FUN_1476d2c5e;
    FUN_14697f3b8(uVar3,&local_3f0);
    uVar3 = *(undefined8 *)(param_1 + 0x2f8);
    local_400 = (undefined8 *)0x0;
    local_3f8 = 0;
    FUN_1446efa72(&local_400,0,3,0x10);
    puVar6 = local_400;
    local_3f8 = 3;
    *local_400 = &PTR_LAB_149f05a00;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_400[2] = lVar4;
    *local_400 = &PTR_FUN_14a509270;
    local_400[3] = 0;
    FUN_14485c47a(local_400 + 3,param_1);
    puVar6[4] = FUN_1476d2d4c;
    *(undefined4 *)(puVar6 + 5) = 0;
    FUN_14697f43c(uVar3,&local_400);
    FUN_1449db362(&local_2a8);
    FUN_1449db362(&local_250);
    FUN_1449db362(&local_220);
  }
  if ((local_60 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d28e0 FUN_1476d28e0 body=226 status=ok
// SIG undefined FUN_1476d28e0(void)

longlong *
FUN_1476d28e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a509190;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *(undefined4 *)(puVar3 + 1) = *param_4;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uVar4;
  *(undefined4 *)(puVar3 + 2) = uVar5;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uVar6;
  *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(param_4 + 4);
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[4] = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_4 + 6) = 0;
  *(undefined4 *)(puVar3 + 5) = param_4[8];
  param_4[8] = 0;
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
  puVar3[6] = lVar8;
  *puVar3 = &PTR_FUN_14a509120;
  puVar3[7] = 0;
  FUN_14485c47a(puVar3 + 7,param_2);
  *(undefined4 *)(puVar3 + 9) = uVar1;
  puVar3[8] = uVar2;
  return param_1;
}



// FUNCTION 1476d29c2 FUN_1476d29c2 body=52 status=ok
// SIG undefined FUN_1476d29c2(void)

undefined4 * FUN_1476d29c2(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_146a5c9ee(param_3);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  *(undefined1 *)(param_2 + 4) = 0;
  FUN_1449db362(param_3 + 0x18);
  return param_2;
}



// FUNCTION 1476d29f6 FUN_1476d29f6 body=56 status=ok
// SIG undefined FUN_1476d29f6(void)

longlong FUN_1476d29f6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1476d2f2e(param_2);
  FUN_140f13d9e(param_1 + 0x1c0,uVar1);
  FUN_1476d2a2e(param_2);
  return param_1 + 0x1c0;
}



// FUNCTION 1476d2a2e FUN_1476d2a2e body=84 status=ok
// SIG undefined FUN_1476d2a2e(void)

void FUN_1476d2a2e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x17);
  *param_1 = &PTR_FUN_149ed05f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001476d2a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476d2a82 FUN_1476d2a82 body=236 status=ok
// SIG undefined FUN_1476d2a82(void)

undefined1 *
FUN_1476d2a82(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [184];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar1 = FUN_14113f0c0(param_1 + 0x2b4);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0xc);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = param_3[8];
    uStack_44 = param_3[9];
    uStack_40 = param_3[10];
    uStack_3c = param_3[0xb];
    FUN_14775a980(local_120,param_1 + 0x2b4,&local_68,param_4);
    FUN_1428fd920(param_2,local_120);
    FUN_14493db24(local_120);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d2b70 FUN_1476d2b70 body=236 status=ok
// SIG undefined FUN_1476d2b70(void)

undefined1 *
FUN_1476d2b70(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [184];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar1 = FUN_14113f0c0(param_1 + 0x2c4);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0xc);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = param_3[8];
    uStack_44 = param_3[9];
    uStack_40 = param_3[10];
    uStack_3c = param_3[0xb];
    FUN_14775a980(local_120,param_1 + 0x2c4,&local_68,param_4);
    FUN_1428fd920(param_2,local_120);
    FUN_14493db24(local_120);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d2c5e FUN_1476d2c5e body=236 status=ok
// SIG undefined FUN_1476d2c5e(void)

undefined1 *
FUN_1476d2c5e(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [184];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar1 = FUN_14113f0c0(param_1 + 0x2d4);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0xc);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = param_3[8];
    uStack_44 = param_3[9];
    uStack_40 = param_3[10];
    uStack_3c = param_3[0xb];
    FUN_14775a980(local_120,param_1 + 0x2d4,&local_68,param_4);
    FUN_1428fd920(param_2,local_120);
    FUN_14493db24(local_120);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d2d4c FUN_1476d2d4c body=236 status=ok
// SIG undefined FUN_1476d2d4c(void)

undefined1 *
FUN_1476d2d4c(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [184];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar1 = FUN_14113f0c0(param_1 + 0x2e4);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0xc);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = param_3[8];
    uStack_44 = param_3[9];
    uStack_40 = param_3[10];
    uStack_3c = param_3[0xb];
    FUN_14775a980(local_120,param_1 + 0x2e4,&local_68,param_4);
    FUN_1428fd920(param_2,local_120);
    FUN_14493db24(local_120);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d2e40 FUN_1476d2e40 body=131 status=ok
// SIG undefined FUN_1476d2e40(void)

void FUN_1476d2e40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *(undefined4 *)(param_1 + 0x1a8);
  uVar3 = *(undefined4 *)(param_1 + 0x1ac);
  uVar4 = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x40) = uVar3;
  *(undefined4 *)(param_2 + 0x44) = uVar4;
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x180);
  *(undefined1 *)(param_2 + 0x49) = *(undefined1 *)(param_1 + 0x181);
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x300);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1476d1e9e(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d2ec4 FUN_1476d2ec4 body=105 status=ok
// SIG undefined FUN_1476d2ec4(void)

void FUN_1476d2ec4(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x2f8);
  if (plVar1 != (longlong *)0x0) {
    local_18 = DAT_14c98dec8;
    local_10 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x240))(plVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d2f2e FUN_1476d2f2e body=195 status=ok
// SIG undefined FUN_1476d2f2e(void)

longlong FUN_1476d2f2e(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined **local_c8 [20];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0xc0) != 0) && (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0xc0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0xb8);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_c8);
      FUN_140f13d9e(param_1,local_c8);
      local_c8[0] = &PTR_FUN_149ed05f0;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d2ff2 FUN_1476d2ff2 body=148 status=ok
// SIG undefined FUN_1476d2ff2(void)

undefined8 FUN_1476d2ff2(undefined8 param_1)

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
  uVar1 = FUN_14128aa12();
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



// FUNCTION 1476d3088 FUN_1476d3088 body=174 status=ok
// SIG undefined FUN_1476d3088(void)

void FUN_1476d3088(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x48) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(lVar1 + 0x180) = local_19;
  if (*(longlong *)(lVar1 + 0x2f8) != 0) {
    FUN_146a8b2f0();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d3138 FUN_1476d3138 body=215 status=ok
// SIG undefined FUN_1476d3138(void)

void FUN_1476d3138(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x38) = local_58;
  *(undefined8 *)(param_1 + 0x40) = uStack_50;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x1a4) = (undefined4)local_58;
  *(undefined4 *)(lVar1 + 0x1a8) = local_58._4_4_;
  *(undefined4 *)(lVar1 + 0x1ac) = (undefined4)uStack_50;
  *(undefined4 *)(lVar1 + 0x1b0) = uStack_50._4_4_;
  if (*(longlong *)(lVar1 + 0x2f8) != 0) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_145ab4ba4();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d3210 FUN_1476d3210 body=174 status=ok
// SIG undefined FUN_1476d3210(void)

void FUN_1476d3210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x49) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(lVar1 + 0x181) = local_19;
  if (*(longlong *)(lVar1 + 0x2f8) != 0) {
    FUN_146a8b30e();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d32c0 FUN_1476d32c0 body=118 status=ok
// SIG undefined FUN_1476d32c0(void)

void FUN_1476d32c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_48._0_4_ = (undefined4)uVar2;
  local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar3;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(lVar1 + 0x1a4) = (undefined4)local_48;
  *(undefined4 *)(lVar1 + 0x1a8) = local_48._4_4_;
  *(undefined4 *)(lVar1 + 0x1ac) = (undefined4)uStack_40;
  *(undefined4 *)(lVar1 + 0x1b0) = uStack_40._4_4_;
  local_48 = uVar2;
  uStack_40 = uVar3;
  if (*(longlong *)(lVar1 + 0x2f8) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = uVar2;
    uStack_30 = uVar3;
    FUN_145ab4ba4();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d337e FUN_1476d337e body=208 status=ok
// SIG undefined FUN_1476d337e(void)

void FUN_1476d337e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x58) + 8))) {
    local_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(lVar1 + 0x1a4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(lVar1 + 0x1a8) = uVar2;
    *(undefined4 *)(lVar1 + 0x1ac) = uVar3;
    *(undefined4 *)(lVar1 + 0x1b0) = uVar4;
    if (*(longlong *)(lVar1 + 0x2f8) != 0) {
      local_28 = 1;
      local_20 = 0;
      uStack_18 = 0;
      local_38 = local_48;
      uStack_30 = uStack_40;
      FUN_145ab4ba4();
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined1 *)(lVar1 + 0x180) = *(undefined1 *)(param_1 + 0x48);
    if (*(longlong *)(lVar1 + 0x2f8) != 0) {
      FUN_146a8b2f0();
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined1 *)(lVar1 + 0x181) = *(undefined1 *)(param_1 + 0x49);
    if (*(longlong *)(lVar1 + 0x2f8) != 0) {
      FUN_146a8b30e();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d344f FUN_1476d344f body=7 status=ok
// SIG undefined FUN_1476d344f(void)

void FUN_1476d344f(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1476d3490 FUN_1476d3490 body=194 status=ok
// SIG undefined FUN_1476d3490(void)

void FUN_1476d3490(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x500) = local_58;
  *(undefined4 *)(param_1 + 0x504) = uStack_54;
  *(undefined4 *)(param_1 + 0x508) = uStack_50;
  *(undefined4 *)(param_1 + 0x50c) = uStack_4c;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    local_38 = 0;
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_14605ea88();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d3554 FUN_1476d3554 body=167 status=ok
// SIG undefined FUN_1476d3554(void)

void FUN_1476d3554(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x510) = local_19;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_146a5ed20();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d35fc FUN_1476d35fc body=27 status=ok
// SIG undefined FUN_1476d35fc(void)

void FUN_1476d35fc(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x510) = param_2;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_146a5ed20(*(longlong *)(param_1 + 0x568),param_2);
    return;
  }
  return;
}



// FUNCTION 1476d3618 FUN_1476d3618 body=155 status=ok
// SIG undefined FUN_1476d3618(void)

void FUN_1476d3618(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1476d36b4(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d36b4 FUN_1476d36b4 body=120 status=ok
// SIG undefined FUN_1476d36b4(void)

void FUN_1476d36b4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x4f4) = uVar2;
  *(undefined4 *)(param_1 + 0x4f8) = uVar3;
  *(undefined4 *)(param_1 + 0x4fc) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x568);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a5c650(lVar1 + 0x240,lVar1,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d372e FUN_1476d372e body=167 status=ok
// SIG undefined FUN_1476d372e(void)

void FUN_1476d372e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x512) = local_19;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_146a5ed30();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d37d6 FUN_1476d37d6 body=27 status=ok
// SIG undefined FUN_1476d37d6(void)

void FUN_1476d37d6(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x512) = param_2;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_146a5ed30(*(longlong *)(param_1 + 0x568),param_2);
    return;
  }
  return;
}



// FUNCTION 1476d37f2 FUN_1476d37f2 body=229 status=ok
// SIG undefined FUN_1476d37f2(void)

void FUN_1476d37f2(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_3b8 [32];
  undefined1 local_398 [888];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  FUN_140ca8d78(local_398);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_398);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_398);
  }
  puVar1 = local_398;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141254448(param_1 + 0x180,puVar1);
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_145ab4972(*(longlong *)(param_1 + 0x568),param_1 + 0x180);
  }
  FUN_140ffd6b6(local_398);
  if ((local_20 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d38d8 FUN_1476d38d8 body=58 status=ok
// SIG undefined FUN_1476d38d8(void)

void FUN_1476d38d8(longlong param_1)

{
  FUN_141254448(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_145ab4972(*(longlong *)(param_1 + 0x568),param_1 + 0x180);
    return;
  }
  return;
}



// FUNCTION 1476d3912 FUN_1476d3912 body=167 status=ok
// SIG undefined FUN_1476d3912(void)

void FUN_1476d3912(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x511) = local_19;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_146a5ed28();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d39ba FUN_1476d39ba body=27 status=ok
// SIG undefined FUN_1476d39ba(void)

void FUN_1476d39ba(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x511) = param_2;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_146a5ed28(*(longlong *)(param_1 + 0x568),param_2);
    return;
  }
  return;
}



// FUNCTION 1476d39d6 FUN_1476d39d6 body=104 status=ok
// SIG undefined FUN_1476d39d6(void)

void FUN_1476d39d6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [880];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_141478cf2(local_388,param_1 + 0x180);
  FUN_141254448(param_2,local_388);
  FUN_140ffd6b6(local_388);
  if ((local_18 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d3a40 FUN_1476d3a40 body=8 status=ok
// SIG undefined FUN_1476d3a40(void)

longlong FUN_1476d3a40(longlong param_1)

{
  return param_1 + 0x180;
}



// FUNCTION 1476d3a48 FUN_1476d3a48 body=58 status=ok
// SIG undefined FUN_1476d3a48(void)

void FUN_1476d3a48(longlong param_1)

{
  FUN_141254448(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_145ab4972(*(longlong *)(param_1 + 0x568),param_1 + 0x180);
    return;
  }
  return;
}



// FUNCTION 1476d3a8e FUN_1476d3a8e body=14 status=ok
// SIG undefined FUN_1476d3a8e(void)

undefined8 * FUN_1476d3a8e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x4f8);
  *param_2 = *(undefined8 *)(param_1 + 0x4f0);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1476d3a9c FUN_1476d3a9c body=62 status=ok
// SIG undefined FUN_1476d3a9c(void)

void FUN_1476d3a9c(undefined8 param_1,undefined4 *param_2)

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
  FUN_1476d36b4();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d3ae8 FUN_1476d3ae8 body=109 status=ok
// SIG undefined FUN_1476d3ae8(void)

void FUN_1476d3ae8(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x504) = uVar1;
  *(undefined4 *)(param_1 + 0x508) = uVar2;
  *(undefined4 *)(param_1 + 0x50c) = uVar3;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_14605ea88();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d3b60 FUN_1476d3b60 body=8 status=ok
// SIG undefined FUN_1476d3b60(void)

undefined1 FUN_1476d3b60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x510);
}



// FUNCTION 1476d3b8c FUN_1476d3b8c body=8 status=ok
// SIG undefined FUN_1476d3b8c(void)

undefined1 FUN_1476d3b8c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x511);
}



// FUNCTION 1476d3bdc FUN_1476d3bdc body=7 status=ok
// SIG undefined FUN_1476d3bdc(void)

undefined1 FUN_1476d3bdc(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x513);
}



// FUNCTION 1476d3bee FUN_1476d3bee body=1294 status=ok
// SIG undefined FUN_1476d3bee(void)

undefined8 * FUN_1476d3bee(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  undefined8 local_418;
  longlong local_410;
  undefined1 local_401;
  code *local_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined8 *local_3e8;
  undefined4 local_3e0;
  undefined8 *local_3d8;
  undefined4 local_3d0;
  undefined8 *local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined1 local_3a8 [440];
  longlong local_1f0;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [48];
  uint local_138;
  uint local_134;
  uint local_130;
  undefined1 local_88;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_145ab3d24(local_3a8);
  local_3c8 = (undefined8 *)0x0;
  local_3c0 = 0;
  FUN_1446efa72(&local_3c8,0,3,0x10);
  puVar5 = local_3c8;
  local_3c0 = 3;
  *local_3c8 = &PTR_LAB_149f05630;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_3c8[2] = lVar6;
  *local_3c8 = &PTR_FUN_14a5092e0;
  local_3c8[3] = 0;
  FUN_14485c47a(local_3c8 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_1476d40fe;
  FUN_144a450dc(local_188,&local_3c8);
  local_3d8 = (undefined8 *)0x0;
  local_3d0 = 0;
  FUN_1446efa72(&local_3d8,0,3,0x10);
  puVar5 = local_3d8;
  local_3d0 = 3;
  *local_3d8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_3d8[2] = lVar6;
  *local_3d8 = &PTR_FUN_14a509350;
  local_3d8[3] = 0;
  FUN_14485c47a(local_3d8 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_1476d4152;
  FUN_144a450dc(local_178,&local_3d8);
  local_3e8 = (undefined8 *)0x0;
  local_3e0 = 0;
  FUN_1446efa72(&local_3e8,0,3,0x10);
  puVar5 = local_3e8;
  local_3e0 = 3;
  *local_3e8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_3e8[2] = lVar6;
  *local_3e8 = &PTR_FUN_14a509350;
  local_3e8[3] = 0;
  FUN_14485c47a(local_3e8 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_1476d4180;
  FUN_144a450dc(local_168,&local_3e8);
  local_400 = FUN_1476d42a4;
  local_3f8 = 0;
  FUN_1476d41ae(local_3a8,param_1,&local_400);
  local_400 = FUN_1476d43c8;
  local_3f8 = 0;
  FUN_1476d42d2(local_3a8,param_1,&local_400);
  local_1f0 = param_1 + 0x180;
  local_138 = (uint)*(byte *)(param_1 + 0x510);
  local_134 = (uint)*(byte *)(param_1 + 0x511);
  local_130 = (uint)*(byte *)(param_1 + 0x512);
  local_88 = *(undefined1 *)(param_1 + 0x513);
  local_428 = &local_401;
  FUN_145ab3730(&local_400,"SButton",".\\Runtime/UMG/Private/Components/Button.cpp",0x40);
  FUN_145ab34ca(&local_400,&local_3b8,local_3a8);
  plVar4 = local_3b0;
  if (local_3b0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x568) = local_3b8;
    plVar8 = *(longlong **)(param_1 + 0x570);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x570) = 0;
LAB_1476d4025:
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001476d3fdc:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x568) = local_3b8;
    plVar8 = *(longlong **)(param_1 + 0x570);
    if (local_3b0 == plVar8) {
      LOCK();
      plVar8 = local_3b0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_3b0)(local_3b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar4;
        goto joined_r0x0001476d3fdc;
      }
    }
    else {
      *(longlong **)(param_1 + 0x570) = local_3b0;
      if (plVar8 != (longlong *)0x0) goto LAB_1476d4025;
    }
  }
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3b0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar1 = (int *)((longlong)local_3b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3b0 + 0x10))(local_3b0);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_3f4,local_3f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  FUN_1449db362(&local_3e8);
  FUN_1449db362(&local_3d8);
  FUN_1449db362(&local_3c8);
  FUN_145ab35f4(local_3a8);
  if (*(int *)(param_1 + 0x170) < 1) goto LAB_1476d3f5d;
  lVar7 = FUN_1433335b4(param_1);
  if (lVar7 == 0) {
LAB_1476d408e:
    lVar7 = 0;
  }
  else {
    lVar6 = FUN_141190202();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1476d408e;
  }
  local_418 = *(undefined8 *)(param_1 + 0x568);
  local_410 = *(longlong *)(param_1 + 0x570);
  if (local_410 != 0) {
    LOCK();
    *(int *)(local_410 + 8) = *(int *)(local_410 + 8) + 1;
    UNLOCK();
  }
  FUN_1476d43f6(lVar7,&local_418);
LAB_1476d3f5d:
  uVar3 = *(undefined8 *)(param_1 + 0x568);
  plVar4 = *(longlong **)(param_1 + 0x570);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d40fe FUN_1476d40fe body=83 status=ok
// SIG undefined FUN_1476d40fe(void)

undefined1 * FUN_1476d40fe(longlong param_1,undefined1 *param_2)

{
  FUN_1447cd2ec(param_1 + 0x518);
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1476d4152 FUN_1476d4152 body=45 status=ok
// SIG undefined FUN_1476d4152(void)

void FUN_1476d4152(longlong param_1)

{
  FUN_1447cd2ec(param_1 + 0x528,0);
  FUN_14775e432(param_1,&DAT_14cab6e80,1);
  return;
}



// FUNCTION 1476d4180 FUN_1476d4180 body=45 status=ok
// SIG undefined FUN_1476d4180(void)

void FUN_1476d4180(longlong param_1)

{
  FUN_1447cd2ec(param_1 + 0x538,0);
  FUN_14775e432(param_1,&DAT_14cab6e80,0);
  return;
}



// FUNCTION 1476d41ae FUN_1476d41ae body=245 status=ok
// SIG undefined FUN_1476d41ae(void)

longlong FUN_1476d41ae(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14a509350;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x250,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d42a4 FUN_1476d42a4 body=45 status=ok
// SIG undefined FUN_1476d42a4(void)

void FUN_1476d42a4(longlong param_1)

{
  FUN_1447cd2ec(param_1 + 0x548,0);
  FUN_14775e432(param_1,&DAT_14cab6e78,1);
  return;
}



// FUNCTION 1476d42d2 FUN_1476d42d2 body=245 status=ok
// SIG undefined FUN_1476d42d2(void)

longlong FUN_1476d42d2(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14a509350;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x260,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d43c8 FUN_1476d43c8 body=45 status=ok
// SIG undefined FUN_1476d43c8(void)

void FUN_1476d43c8(longlong param_1)

{
  FUN_1447cd2ec(param_1 + 0x558,0);
  FUN_14775e432(param_1,&DAT_14cab6e78,0);
  return;
}



// FUNCTION 1476d43f6 FUN_1476d43f6 body=282 status=ok
// SIG undefined FUN_1476d43f6(void)

void FUN_1476d43f6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x58);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x58) = plVar2;
    uVar3 = *param_2;
  }
  local_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  local_38 = 1;
  local_30 = 0;
  uStack_28 = 0;
  FUN_146a5de46(uVar3);
  FUN_146a8b2f0(*param_2,*(undefined1 *)(param_1 + 0x48));
  FUN_146a8b30e(*param_2,*(undefined1 *)(param_1 + 0x49));
  plVar2 = (longlong *)*param_2;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_58 = DAT_14c98dec8;
    local_50 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_143333872(*(longlong *)(param_1 + 0x30),&local_58);
  }
  (**(code **)(*plVar2 + 0x240))(plVar2,&local_58);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4512 FUN_1476d4512 body=264 status=ok
// SIG undefined FUN_1476d4512(void)

void FUN_1476d4512(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_145ab4972(*(longlong *)(param_1 + 0x568),param_1 + 0x180);
    local_58 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_54 = *(undefined4 *)(param_1 + 0x4f4);
    uStack_50 = *(undefined4 *)(param_1 + 0x4f8);
    uStack_4c = *(undefined4 *)(param_1 + 0x4fc);
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_140a5c650(*(longlong *)(param_1 + 0x568) + 0x240,*(longlong *)(param_1 + 0x568),&local_58);
    FUN_1449db362(&local_40);
    local_88 = *(undefined4 *)(param_1 + 0x500);
    uStack_84 = *(undefined4 *)(param_1 + 0x504);
    uStack_80 = *(undefined4 *)(param_1 + 0x508);
    uStack_7c = *(undefined4 *)(param_1 + 0x50c);
    local_78 = 0;
    local_74 = 1;
    local_70 = 0;
    uStack_68 = 0;
    FUN_14605ea88(*(undefined8 *)(param_1 + 0x568));
    FUN_146a5ed20(*(undefined8 *)(param_1 + 0x568),*(undefined1 *)(param_1 + 0x510));
    FUN_146a5ed28(*(undefined8 *)(param_1 + 0x568),*(undefined1 *)(param_1 + 0x511));
    FUN_146a5ed30(*(undefined8 *)(param_1 + 0x568),*(undefined1 *)(param_1 + 0x512));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4622 FUN_1476d4622 body=102 status=ok
// SIG undefined FUN_1476d4622(void)

void FUN_1476d4622(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x568);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x570);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1476d43f6(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d468a FUN_1476d468a body=105 status=ok
// SIG undefined FUN_1476d468a(void)

void FUN_1476d468a(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x568);
  if (plVar1 != (longlong *)0x0) {
    local_18 = DAT_14c98dec8;
    local_10 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x240))(plVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d46f4 FUN_1476d46f4 body=7 status=ok
// SIG undefined FUN_1476d46f4(void)

void FUN_1476d46f4(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x513) = param_2;
  return;
}



// FUNCTION 1476d46fb FUN_1476d46fb body=148 status=ok
// SIG undefined FUN_1476d46fb(void)

undefined8 FUN_1476d46fb(undefined8 param_1)

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
  uVar1 = FUN_141190202();
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



// FUNCTION 1476d47b2 FUN_1476d47b2 body=152 status=ok
// SIG undefined FUN_1476d47b2(void)

void FUN_1476d47b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476d484c(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d484c FUN_1476d484c body=112 status=ok
// SIG undefined FUN_1476d484c(void)

void FUN_1476d484c(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x48) = param_2;
  if (((*(longlong *)(param_1 + 0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x58), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_146a8b2f0(0);
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
    FUN_146a8b2f0(*(undefined8 *)(param_1 + 0x50));
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
                    /* WARNING: Could not recover jumptable at 0x0001476d48a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476d48bc FUN_1476d48bc body=163 status=ok
// SIG undefined FUN_1476d48bc(void)

void FUN_1476d48bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
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
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_1476d4960(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4960 FUN_1476d4960 body=187 status=ok
// SIG undefined FUN_1476d4960(void)

void FUN_1476d4960(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  if (((*(longlong *)(param_1 + 0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x58), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) {
        local_38 = *param_2;
        uStack_30 = param_2[1];
        local_28 = 1;
        local_20 = 0;
        uStack_18 = 0;
        FUN_146a5de46(0);
        goto LAB_1476d49ff;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146a5de46(*(undefined8 *)(param_1 + 0x50));
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
LAB_1476d49ff:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476d4a1c FUN_1476d4a1c body=152 status=ok
// SIG undefined FUN_1476d4a1c(void)

void FUN_1476d4a1c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476d4ab6(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4ab6 FUN_1476d4ab6 body=112 status=ok
// SIG undefined FUN_1476d4ab6(void)

void FUN_1476d4ab6(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x49) = param_2;
  if (((*(longlong *)(param_1 + 0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x58), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_146a8b30e(0);
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
    FUN_146a8b30e(*(undefined8 *)(param_1 + 0x50));
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
                    /* WARNING: Could not recover jumptable at 0x0001476d4b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476d4b2e FUN_1476d4b2e body=62 status=ok
// SIG undefined FUN_1476d4b2e(void)

void FUN_1476d4b2e(undefined8 param_1,undefined4 *param_2)

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
  FUN_1476d4960();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4b8e FUN_1476d4b8e body=91 status=ok
// SIG undefined FUN_1476d4b8e(void)

void FUN_1476d4b8e(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(param_1 + 0x3c);
  uStack_20 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c = *(undefined4 *)(param_1 + 0x44);
  FUN_1476d4960();
  FUN_1476d484c(param_1,*(undefined1 *)(param_1 + 0x48));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1476d4ab6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,*(undefined1 *)(param_1 + 0x49));
}



// FUNCTION 1476d4bea FUN_1476d4bea body=164 status=ok
// SIG undefined FUN_1476d4bea(void)

void FUN_1476d4bea(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476d4c90(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4c90 FUN_1476d4c90 body=63 status=ok
// SIG undefined FUN_1476d4c90(void)

longlong FUN_1476d4c90(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14772c428();
  if (lVar1 != 0) {
    lVar2 = FUN_1458f09fa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1476d4cd8 FUN_1476d4cd8 body=102 status=ok
// SIG undefined FUN_1476d4cd8(void)

void FUN_1476d4cd8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x188);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1476d4d40(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4d40 FUN_1476d4d40 body=266 status=ok
// SIG undefined FUN_1476d4d40(void)

void FUN_1476d4d40(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  longlong local_138 [35];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_146a8b3e6(*param_2,local_138);
  param_1[0x10] = local_138[0];
  if (param_1[6] == 0) {
    local_148 = DAT_14c98dec8;
    local_140 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    FUN_143333872(param_1[6],&local_148);
  }
  FUN_1476d5fce(local_138,&local_148);
  plVar3 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1476d6056(local_138);
  (**(code **)(*param_1 + 0x2a8))(param_1);
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
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4e4c FUN_1476d4e4c body=222 status=ok
// SIG undefined FUN_1476d4e4c(void)

void FUN_1476d4e4c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_146a8b64c(uVar4,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d4f2c FUN_1476d4f2c body=674 status=ok
// SIG undefined FUN_1476d4f2c(void)

undefined8 * FUN_1476d4f2c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_229;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  longlong *local_208;
  undefined1 local_200 [440];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_146350a26(local_200);
  local_248 = &local_229;
  FUN_146124132(local_228,"SConstraintCanvas",".\\Runtime/UMG/Private/Components/CanvasPanel.cpp",
                0x39);
  FUN_145e31788(local_228,&local_210,local_200);
  plVar6 = local_208;
  if (local_208 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar9 = *(longlong **)(param_1 + 0x188);
    if (plVar9 == (longlong *)0x0) goto LAB_1476d4fd7;
    *(undefined8 *)(param_1 + 0x188) = 0;
LAB_1476d5196:
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1476d4fd7;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar9 = *(longlong **)(param_1 + 0x188);
    if (local_208 != plVar9) {
      *(longlong **)(param_1 + 0x188) = local_208;
      if (plVar9 == (longlong *)0x0) goto LAB_1476d4fd7;
      goto LAB_1476d5196;
    }
    LOCK();
    plVar9 = local_208 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_1476d4fd7;
    (**(code **)*local_208)(local_208);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1476d4fd7:
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_208 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_220 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  FUN_146350aa0(local_200);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        lVar7 = FUN_1458f09fa();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_240 = *(undefined8 *)(param_1 + 0x180);
          local_238 = *(longlong *)(param_1 + 0x188);
          if (local_238 != 0) {
            LOCK();
            *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
            UNLOCK();
          }
          FUN_1476d4d40(lVar4,&local_240);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  plVar6 = *(longlong **)(param_1 + 0x188);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d51d0 FUN_1476d51d0 body=69 status=ok
// SIG undefined FUN_1476d51d0(void)

void FUN_1476d51d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x68);
  }
  else {
    puVar2 = (undefined8 *)FUN_140133f12(*(longlong *)(param_1 + 0x80) + 0x80);
  }
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 1476d5216 FUN_1476d5216 body=77 status=ok
// SIG undefined FUN_1476d5216(void)

void FUN_1476d5216(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    puVar4 = (undefined8 *)(param_1 + 0x48);
  }
  else {
    puVar4 = (undefined8 *)FUN_140133ffe(*(longlong *)(param_1 + 0x80) + 0x48);
  }
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  uVar3 = puVar4[3];
  param_3[2] = puVar4[2];
  param_3[3] = uVar3;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  return;
}



// FUNCTION 1476d5268 FUN_1476d5268 body=57 status=ok
// SIG undefined FUN_1476d5268(void)

void FUN_1476d5268(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x78);
  }
  else {
    uVar1 = FUN_140133ebc(*(longlong *)(param_1 + 0x80));
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476d52d6 FUN_1476d52d6 body=113 status=ok
// SIG undefined FUN_1476d52d6(void)

void FUN_1476d52d6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    local_28 = *(undefined4 *)(param_1 + 0x38);
    uStack_24 = *(undefined4 *)(param_1 + 0x3c);
    uStack_20 = *(undefined4 *)(param_1 + 0x40);
    uStack_1c = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    puVar1 = (undefined4 *)FUN_140133f88(*(longlong *)(param_1 + 0x80) + 0x20);
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
  }
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5348 FUN_1476d5348 body=88 status=ok
// SIG undefined FUN_1476d5348(void)

void FUN_1476d5348(longlong param_1,longlong param_2,double *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    pfVar2 = (float *)(param_1 + 0x38);
    pfVar3 = (float *)(param_1 + 0x3c);
  }
  else {
    pfVar2 = (float *)FUN_140133f88(*(longlong *)(param_1 + 0x80) + 0x20);
    pfVar3 = pfVar2 + 1;
  }
  fVar1 = *pfVar3;
  *param_3 = (double)*pfVar2;
  param_3[1] = (double)fVar1;
  return;
}



// FUNCTION 1476d53a0 FUN_1476d53a0 body=89 status=ok
// SIG undefined FUN_1476d53a0(void)

void FUN_1476d53a0(longlong param_1,longlong param_2,double *param_3)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    pfVar3 = (float *)(param_1 + 0x44);
    pfVar4 = (float *)(param_1 + 0x40);
  }
  else {
    lVar2 = FUN_140133f88(*(longlong *)(param_1 + 0x80) + 0x20);
    pfVar4 = (float *)(lVar2 + 8);
    pfVar3 = (float *)(lVar2 + 0xc);
  }
  fVar1 = *pfVar3;
  *param_3 = (double)*pfVar4;
  param_3[1] = (double)fVar1;
  return;
}



// FUNCTION 1476d5428 FUN_1476d5428 body=155 status=ok
// SIG undefined FUN_1476d5428(void)

void FUN_1476d5428(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1476d54c4(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d54c4 FUN_1476d54c4 body=119 status=ok
// SIG undefined FUN_1476d54c4(void)

void FUN_1476d54c4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1476df4ec(lVar1,lVar1 + 0x80,&local_38,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d553c FUN_1476d553c body=177 status=ok
// SIG undefined FUN_1476d553c(void)

void FUN_1476d553c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  uStack_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  FUN_1476d55ee(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d55ee FUN_1476d55ee body=132 status=ok
// SIG undefined FUN_1476d55ee(void)

void FUN_1476d55ee(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(undefined4 *)param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = param_2[3];
  *(undefined8 *)(param_1 + 0x58) = param_2[2];
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_48 = *param_2;
    uStack_40 = param_2[1];
    local_38 = *(undefined4 *)(param_2 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = *(undefined4 *)(param_2 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1476df26c(lVar1,lVar1 + 0x48,&local_48,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5678 FUN_1476d5678 body=158 status=ok
// SIG undefined FUN_1476d5678(void)

void FUN_1476d5678(undefined8 param_1,longlong param_2)

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
  FUN_1476d5718(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5718 FUN_1476d5718 body=111 status=ok
// SIG undefined FUN_1476d5718(void)

void FUN_1476d5718(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x78) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_1476df1ae(lVar1,lVar1 + 0xa8,&local_28,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5788 FUN_1476d5788 body=187 status=ok
// SIG undefined FUN_1476d5788(void)

void FUN_1476d5788(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = (undefined4)DAT_14c8463f0;
  uStack_24 = DAT_14c8463f0._4_4_;
  uStack_20 = (undefined4)DAT_14c8463f8;
  uStack_1c = DAT_14c8463f8._4_4_;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1476d5844(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5844 FUN_1476d5844 body=284 status=ok
// SIG undefined FUN_1476d5844(void)

void FUN_1476d5844(longlong param_1,undefined4 *param_2)

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
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  uVar14 = param_2[0xd];
  uVar15 = param_2[0xe];
  uVar16 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x68) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x6c) = uVar14;
  *(undefined4 *)(param_1 + 0x70) = uVar15;
  *(undefined4 *)(param_1 + 0x74) = uVar16;
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar12;
  *(undefined4 *)(param_1 + 100) = uVar13;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  *(undefined4 *)(param_1 + 0x54) = uVar9;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    local_68 = CONCAT31(local_68._1_3_,1);
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_1476df0e4(lVar1,lVar1 + 0x20,&local_78,1);
    FUN_1449db362(&uStack_60);
    local_78 = *(undefined4 *)(param_1 + 0x48);
    uStack_74 = *(undefined4 *)(param_1 + 0x4c);
    uStack_70 = *(undefined4 *)(param_1 + 0x50);
    uStack_6c = *(undefined4 *)(param_1 + 0x54);
    local_68 = *(undefined4 *)(param_1 + 0x58);
    uStack_64 = *(undefined4 *)(param_1 + 0x5c);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = CONCAT71(uStack_58._1_7_,1);
    local_50 = 0;
    uStack_48 = 0;
    FUN_1476df26c(*(longlong *)(param_1 + 0x80),*(longlong *)(param_1 + 0x80) + 0x48,&local_78,1);
    FUN_1449db362(&local_50);
    local_78 = *(undefined4 *)(param_1 + 0x68);
    uStack_74 = *(undefined4 *)(param_1 + 0x6c);
    uStack_70 = *(undefined4 *)(param_1 + 0x70);
    uStack_6c = *(undefined4 *)(param_1 + 0x74);
    local_68 = CONCAT31(local_68._1_3_,1);
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_1476df4ec(*(longlong *)(param_1 + 0x80),*(longlong *)(param_1 + 0x80) + 0x80,&local_78,1);
    FUN_1449db362(&uStack_60);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5962 FUN_1476d5962 body=155 status=ok
// SIG undefined FUN_1476d5962(void)

void FUN_1476d5962(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1476d59fe(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d59fe FUN_1476d59fe body=128 status=ok
// SIG undefined FUN_1476d59fe(void)

void FUN_1476d59fe(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_40 = *(undefined8 *)(param_1 + 0x50);
    local_38 = *(undefined4 *)(param_1 + 0x58);
    uStack_34 = *(undefined4 *)(param_1 + 0x5c);
    uStack_30 = *(undefined4 *)(param_1 + 0x60);
    uStack_2c = *(undefined4 *)(param_1 + 100);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1476df26c(lVar1,lVar1 + 0x48,&local_48,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5a80 FUN_1476d5a80 body=155 status=ok
// SIG undefined FUN_1476d5a80(void)

void FUN_1476d5a80(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1476d5b1c(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5b1c FUN_1476d5b1c body=131 status=ok
// SIG undefined FUN_1476d5b1c(void)

void FUN_1476d5b1c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_40 = *(undefined8 *)(param_1 + 0x50);
    local_38 = *(undefined4 *)(param_1 + 0x58);
    uStack_34 = *(undefined4 *)(param_1 + 0x5c);
    uStack_30 = *(undefined4 *)(param_1 + 0x60);
    uStack_2c = *(undefined4 *)(param_1 + 100);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1476df26c(lVar1,lVar1 + 0x48,&local_48,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5ba0 FUN_1476d5ba0 body=163 status=ok
// SIG undefined FUN_1476d5ba0(void)

void FUN_1476d5ba0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
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
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_1476c52d2(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5c44 FUN_1476d5c44 body=155 status=ok
// SIG undefined FUN_1476d5c44(void)

void FUN_1476d5c44(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1476d5ce0(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5ce0 FUN_1476d5ce0 body=135 status=ok
// SIG undefined FUN_1476d5ce0(void)

void FUN_1476d5ce0(longlong param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dVar1 = param_2[1];
  *(float *)(param_1 + 0x38) = (float)*param_2;
  *(float *)(param_1 + 0x3c) = (float)dVar1;
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x40);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1476df0e4(lVar2,lVar2 + 0x20,&local_38,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5d68 FUN_1476d5d68 body=155 status=ok
// SIG undefined FUN_1476d5d68(void)

void FUN_1476d5d68(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1476d5e04(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5e04 FUN_1476d5e04 body=132 status=ok
// SIG undefined FUN_1476d5e04(void)

void FUN_1476d5e04(longlong param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dVar1 = param_2[1];
  *(float *)(param_1 + 0x40) = (float)*param_2;
  *(float *)(param_1 + 0x44) = (float)dVar1;
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x40);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1476df0e4(lVar2,lVar2 + 0x20,&local_38,1);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5e8a FUN_1476d5e8a body=170 status=ok
// SIG undefined FUN_1476d5e8a(void)

void FUN_1476d5e8a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(int *)(param_1 + 0x7c) = local_1c;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_146a8b32c(*(longlong *)(param_1 + 0x80),(float)local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d5f5c FUN_1476d5f5c body=41 status=ok
// SIG undefined FUN_1476d5f5c(void)

void FUN_1476d5f5c(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x78);
  }
  else {
    uVar1 = FUN_140133ebc();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1476d5fce FUN_1476d5fce body=136 status=ok
// SIG undefined FUN_1476d5fce(void)

longlong FUN_1476d5fce(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001476d6030;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001476d6030:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1476d6056 FUN_1476d6056 body=238 status=ok
// SIG undefined FUN_1476d6056(void)

void FUN_1476d6056(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[0x19] == -1) {
      uVar3 = FUN_145e31da4();
      *(undefined4 *)(param_1 + 0x19) = uVar3;
    }
    else {
      FUN_147704e14(param_1[0x18],param_1);
    }
    pcVar2 = (code *)param_1[0x1a];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[0x19];
      plVar5 = param_1 + 0x1e;
      if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x1c];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[0x1a] != 0) {
    plVar5 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_145e31cfe(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6146 FUN_1476d6146 body=178 status=ok
// SIG undefined FUN_1476d6146(void)

void FUN_1476d6146(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_44 = *(undefined4 *)(param_1 + 0x3c);
  uStack_40 = *(undefined4 *)(param_1 + 0x40);
  uStack_3c = *(undefined4 *)(param_1 + 0x44);
  FUN_1476c52d2();
  local_68 = *(undefined4 *)(param_1 + 0x48);
  uStack_64 = *(undefined4 *)(param_1 + 0x4c);
  uStack_60 = *(undefined4 *)(param_1 + 0x50);
  uStack_5c = *(undefined4 *)(param_1 + 0x54);
  local_58 = *(undefined4 *)(param_1 + 0x58);
  uStack_54 = *(undefined4 *)(param_1 + 0x5c);
  uStack_50 = *(undefined4 *)(param_1 + 0x60);
  uStack_4c = *(undefined4 *)(param_1 + 100);
  FUN_1476d55ee(param_1);
  local_78 = *(undefined4 *)(param_1 + 0x68);
  uStack_74 = *(undefined4 *)(param_1 + 0x6c);
  uStack_70 = *(undefined4 *)(param_1 + 0x70);
  uStack_6c = *(undefined4 *)(param_1 + 0x74);
  FUN_1476d54c4(param_1);
  FUN_1476d5718(param_1,*(undefined1 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6216 FUN_1476d6216 body=60 status=ok
// SIG undefined FUN_1476d6216(void)

void FUN_1476d6216(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xb08) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x180);
  }
  else {
    uVar1 = FUN_146a60eee(*(longlong *)(param_1 + 0xb08));
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476d6256 FUN_1476d6256 body=64 status=ok
// SIG undefined FUN_1476d6256(void)

void FUN_1476d6256(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xb08) == 0) {
    uVar1 = *(char *)(param_1 + 0x180) == '\x01';
  }
  else {
    uVar1 = FUN_146a0ece6(*(longlong *)(param_1 + 0xb08));
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1476d62c4 FUN_1476d62c4 body=151 status=ok
// SIG undefined FUN_1476d62c4(void)

void FUN_1476d62c4(undefined8 param_1,longlong param_2)

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
  FUN_1476d635c(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d635c FUN_1476d635c body=333 status=ok
// SIG undefined FUN_1476d635c(void)

void FUN_1476d635c(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)(param_1 + 0x180);
  if (cVar1 != param_2) {
    *(char *)(param_1 + 0x180) = param_2;
    local_48 = DAT_14cab73c8;
    local_50 = DAT_14cab73c0;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  lVar2 = *(longlong *)(param_1 + 0xb08);
  if (lVar2 != 0) {
    cVar3 = FUN_14113f0c0(param_1 + 0x184);
    if (cVar3 == '\0') {
      local_68 = CONCAT11(1,*(undefined1 *)(param_1 + 0x180));
      local_60 = 0;
      uStack_58 = 0;
    }
    else {
      local_70 = *(undefined8 *)(param_1 + 0x18c);
      uVar4 = FUN_14479d2ce(param_1 + 0x184);
      local_68 = 0x100;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      uStack_58 = CONCAT44(uStack_58._4_4_,3);
      FUN_147705138(local_60,uVar4,&local_70);
    }
    FUN_146a60f92(lVar2,&local_68);
  }
  if (cVar1 != param_2) {
    if ((ulonglong)*(byte *)(param_1 + 0x180) < 3) {
      puVar5 = (&PTR_DAT_14a50cf08)[*(byte *)(param_1 + 0x180)];
    }
    else {
      puVar5 = &DAT_14cab73f8;
    }
    FUN_14775efe0(param_1,puVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d64aa FUN_1476d64aa body=167 status=ok
// SIG undefined FUN_1476d64aa(void)

void FUN_1476d64aa(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xaf1) = local_19;
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FUN_146a61428();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6556 FUN_1476d6556 body=158 status=ok
// SIG undefined FUN_1476d6556(void)

void FUN_1476d6556(undefined8 param_1,longlong param_2)

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
  FUN_1476d65f6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d65f6 FUN_1476d65f6 body=320 status=ok
// SIG undefined FUN_1476d65f6(void)

void FUN_1476d65f6(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)(param_1 + 0x180);
  if (cVar1 != param_2) {
    *(char *)(param_1 + 0x180) = param_2;
    local_48 = DAT_14cab73c8;
    local_50 = DAT_14cab73c0;
    FUN_140e2f5f4(param_1 + 0x28);
  }
  lVar2 = *(longlong *)(param_1 + 0xb08);
  if (lVar2 != 0) {
    cVar3 = FUN_14113f0c0(param_1 + 0x184);
    if (cVar3 == '\0') {
      local_68 = CONCAT11(1,*(undefined1 *)(param_1 + 0x180));
      local_60 = 0;
      uStack_58 = 0;
    }
    else {
      local_70 = *(undefined8 *)(param_1 + 0x18c);
      uVar4 = FUN_14479d2ce(param_1 + 0x184);
      local_68 = 0x100;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      uStack_58 = CONCAT44(uStack_58._4_4_,3);
      FUN_147705138(local_60,uVar4,&local_70);
    }
    FUN_146a60f92(lVar2,&local_68);
  }
  if (cVar1 != param_2) {
    puVar5 = &DAT_14cab73f0;
    if (param_2 != '\0') {
      puVar5 = &DAT_14cab73e8;
    }
    FUN_14775efe0(param_1,puVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476d6738 FUN_1476d6738 body=167 status=ok
// SIG undefined FUN_1476d6738(void)

void FUN_1476d6738(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xaf3) = local_19;
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FUN_146a61438();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


