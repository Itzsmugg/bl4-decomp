// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492125c3 FUN_1492125c3 body=107 status=ok
// SIG undefined FUN_1492125c3(void)

undefined8 * FUN_1492125c3(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc08278) {
    FUN_144b3d300(&DAT_14cc08278);
    if (DAT_14cc08278 == -1) {
      FUN_14633cd78(&DAT_14cc08270);
      _Init_thread_footer(&DAT_14cc08278);
    }
  }
  *param_1 = DAT_14cc08270;
  return param_1;
}



// FUNCTION 14921262e FUN_14921262e body=107 status=ok
// SIG undefined FUN_14921262e(void)

undefined8 * FUN_14921262e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc08288) {
    FUN_144b3d300(&DAT_14cc08288);
    if (DAT_14cc08288 == -1) {
      FUN_14633cd78(&DAT_14cc08280);
      _Init_thread_footer(&DAT_14cc08288);
    }
  }
  *param_1 = DAT_14cc08280;
  return param_1;
}



// FUNCTION 149212699 FUN_149212699 body=256 status=ok
// SIG undefined FUN_149212699(void)

void FUN_149212699(double *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double local_b0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  double dStack_78;
  double local_70;
  float local_68 [4];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar1 = param_1[2];
  FUN_1414d053e(param_1 + 3,&local_c8);
  local_b0[0] = dVar2;
  local_b0[1] = dVar3;
  local_b0[2] = dVar1;
  local_b0[3] = (double)local_c8;
  local_90 = local_c0;
  uStack_8c = uStack_bc;
  uStack_88 = uStack_b8;
  uStack_84 = uStack_b4;
  local_80 = param_1[6];
  dStack_78 = param_1[7];
  local_70 = param_1[8];
  pfVar4 = local_68;
  uStack_44 = 0x1ff;
  lVar5 = 0;
  do {
    *pfVar4 = (float)*(double *)((longlong)local_b0 + lVar5);
    pfVar4 = pfVar4 + 1;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x48);
  *(ulonglong *)(param_2 + 8) = CONCAT44(uStack_44,local_48);
  param_2[4] = local_58;
  param_2[5] = fStack_54;
  param_2[6] = fStack_50;
  param_2[7] = fStack_4c;
  *param_2 = local_68[0];
  param_2[1] = local_68[1];
  param_2[2] = local_68[2];
  param_2[3] = local_68[3];
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921279a FUN_14921279a body=301 status=ok
// SIG undefined FUN_14921279a(void)

void FUN_14921279a(float *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar1 = param_1[8];
  fVar2 = param_1[7];
  fVar3 = param_1[6];
  fVar4 = param_1[2];
  fVar5 = param_1[1];
  fVar6 = *param_1;
  local_a0 = (double)param_1[5];
  local_a8 = (double)param_1[4];
  local_b0 = (double)param_1[3];
  FUN_1467fb380(&local_98);
  *param_2 = (double)fVar6;
  param_2[1] = (double)fVar5;
  param_2[2] = (double)fVar4;
  *(undefined4 *)(param_2 + 3) = local_98;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_94;
  *(undefined4 *)(param_2 + 4) = uStack_90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_8c;
  param_2[5] = local_88;
  param_2[6] = (double)fVar3;
  param_2[7] = (double)fVar2;
  param_2[8] = (double)fVar1;
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492128c8 FUN_1492128c8 body=700 status=ok
// SIG undefined FUN_1492128c8(void)

void FUN_1492128c8(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)param_1[0x6c];
  plVar3 = (longlong *)param_1[0x6d];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar5 = (**(code **)(*plVar7 + 0x28))();
  if (lVar5 == 0) {
LAB_149212926:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_149212926;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (lVar5 != 0) {
    lVar6 = FUN_144a81888(lVar5);
    if (lVar6 == 0) goto LAB_149212af6;
    local_21 = '\0';
    lVar6 = FUN_1444ac188(lVar5);
    if (lVar6 == 0) goto LAB_149212af6;
    if (local_21 == '\0') {
      cVar4 = FUN_1491f9c00(lVar6,*(undefined4 *)((longlong)param_1 + 0xc));
      if (cVar4 != '\0') goto LAB_149212af6;
    }
    FUN_14072a850(lVar6);
    FUN_1491f992c(lVar6,*(undefined4 *)((longlong)param_1 + 0xc),param_1);
    (**(code **)(*param_1 + 0x420))(param_1,&local_38);
    (**(code **)(*param_1 + 0x2b0))(param_1,1);
    (**(code **)(*param_1 + 0x308))(param_1);
    (**(code **)(*param_1 + 0x450))(param_1,lVar5,1);
    (**(code **)(*param_1 + 0x2c0))(param_1);
    (**(code **)(*param_1 + 0x420))(param_1,&local_48);
    if (local_30 == local_40) {
      cVar4 = FUN_14000b9e1(local_38,local_48);
      if (cVar4 == '\0') goto LAB_149212a2d;
    }
    else {
LAB_149212a2d:
      (**(code **)(*param_1 + 0x418))(param_1);
      if ((longlong)local_30 != 0) {
        lVar6 = (longlong)local_30 << 3;
        lVar5 = local_38;
        do {
          (**(code **)(*param_1 + 0x410))(param_1,lVar5,1);
          lVar5 = lVar5 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    goto LAB_149212af6;
  }
  plVar7 = (longlong *)param_1[0x6c];
  plVar3 = (longlong *)param_1[0x6d];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar5 = (**(code **)(*plVar7 + 0x28))();
  if (lVar5 == 0) {
LAB_149212acd:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1411e6332();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_149212acd;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (lVar5 != 0) {
    plVar7 = (longlong *)FUN_1491a88a2(lVar5);
    if (plVar7 != param_1) {
      FUN_14448b00a(lVar5);
      lVar6 = *(longlong *)(lVar5 + 0xb0);
      if (lVar6 == 0) {
        lVar6 = FUN_1448abda6(lVar5);
        if (lVar6 == 0) goto LAB_149212af6;
        lVar6 = *(longlong *)(lVar5 + 0xb0);
        if (lVar6 == 0) {
          lVar6 = FUN_1448abda6(lVar5);
        }
      }
      bVar2 = *(byte *)(lVar6 + 0x152);
      if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_149212af6:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149212b98 FUN_149212b98 body=477 status=ok
// SIG undefined FUN_149212b98(void)

void FUN_149212b98(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar5 = FUN_140432338();
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FUN_1491719de(param_1);
  if (cVar5 != '\0') {
    return;
  }
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x360);
  plVar3 = *(longlong **)(param_1 + 0x368);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar6 = (**(code **)(*plVar2 + 0x28))();
  if (lVar6 == 0) {
LAB_149212c15:
    bVar4 = true;
  }
  else {
    lVar7 = FUN_1411e6332();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_149212c15;
    bVar4 = false;
  }
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
  if (!bVar4) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x360);
  plVar3 = *(longlong **)(param_1 + 0x368);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar6 = (**(code **)(*plVar2 + 0x28))();
  if (lVar6 == 0) {
LAB_149212c86:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_149212c86;
  }
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
  if (lVar6 == 0) {
    return;
  }
  cVar5 = FUN_140432338(lVar6);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FUN_1491719de(lVar6);
  if (cVar5 != '\0') {
    return;
  }
  if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0xae8);
  if (lVar7 != 0) {
    lVar8 = FUN_145b9ee98();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      cVar5 = FUN_140432338(lVar7);
      if ((cVar5 != '\0') &&
         ((cVar5 = FUN_1491719de(lVar7), cVar5 == '\0' && ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0))
         )) {
        (**(code **)(*(longlong *)(lVar7 + 0x438) + 0x40))(lVar7 + 0x438);
        FUN_14072a850(lVar7);
        FUN_1491f9d0e(lVar7,*(undefined4 *)(param_1 + 0xc));
        lVar7 = FUN_1491f925c(lVar7);
        if (lVar7 == 0) goto LAB_149212ceb;
      }
      return;
    }
  }
LAB_149212ceb:
  FUN_149212d76(lVar6);
  return;
}



// FUNCTION 149212d76 FUN_149212d76 body=652 status=ok
// SIG undefined FUN_149212d76(void)

void FUN_149212d76(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)((longlong)param_1 + 0xc5f) == '\0') {
    lVar7 = param_1[0x15d];
    if (lVar7 != 0) {
      uVar5 = FUN_140732678();
      plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
      if (((plVar6 != (longlong *)0x0) &&
          (cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar3 != '\0')) &&
         (lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar4 != 0)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,0);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        param_1[0x15d] = lVar4;
        lVar7 = lVar4;
      }
      lVar4 = param_1[0x170];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = param_1[0x16f];
        lVar8 = 0;
        do {
          FUN_14024c0da(*(undefined8 *)(lVar2 + lVar8),0,0,0);
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar8);
      }
      FUN_14024c0da(lVar7,0,0,1);
    }
    (**(code **)(*param_1 + 0xaf8))(param_1,0);
    FUN_1447a916a(param_1);
    FUN_1447a91cc(param_1,0,0);
  }
  else if ((*(char *)((longlong)param_1 + 0xc5f) == '\x02') && (lVar7 = param_1[0x15d], lVar7 != 0))
  {
    lVar4 = FUN_145b9ee98();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) {
      uVar5 = FUN_140732678();
      plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
      if (((plVar6 == (longlong *)0x0) ||
          (cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar3 == '\0')) ||
         (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 == 0)) goto LAB_149212f1b;
      lVar4 = FUN_145b9ee98();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,0);
        goto LAB_149212f1b;
      }
    }
    else {
      uVar5 = FUN_140732678();
      plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
      if (((plVar6 == (longlong *)0x0) ||
          (cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar3 == '\0')) ||
         (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 == 0)) {
        (**(code **)(*param_1 + 0xcb0))(param_1);
        goto LAB_149212f1b;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,0);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar7);
    }
    param_1[0x15d] = lVar7;
  }
LAB_149212f1b:
  lVar7 = param_1[0x16];
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6(param_1);
    if (lVar7 == 0) {
      return;
    }
    lVar7 = param_1[0x16];
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_1);
    }
  }
  bVar1 = *(byte *)(lVar7 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
    FUN_147a0e058(param_1);
    return;
  }
  return;
}



// FUNCTION 149213002 FUN_149213002 body=399 status=ok
// SIG undefined FUN_149213002(void)

undefined8 * FUN_149213002(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_1475ac02e();
  *param_1 = &PTR_FUN_14bb90ef0;
  puVar3 = (undefined8 *)FUN_1491ff9c4(param_2);
  param_1[0x10] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1492843de(param_1 + 0x10,iVar1,0);
    FUN_149284450(param_1[0x10],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1491ff9cc(param_2);
  param_1[0x12] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 0x13) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_14928449c(param_1 + 0x12,iVar1,0);
    FUN_14928450e(param_1[0x12],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1491fd2ee(param_2);
  param_1[0x14] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 0x15) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_14928455a(param_1 + 0x14,iVar1,0);
    FUN_1492845cc(param_1[0x14],uVar2,iVar1);
  }
  puVar3 = (undefined8 *)FUN_1491fd2e6(param_2);
  param_1[0x16] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  uVar2 = *puVar3;
  *(int *)(param_1 + 0x17) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_149284768(param_1 + 0x16,iVar1,0);
    FUN_1492847da(param_1[0x16],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149213192 FUN_149213192 body=4948 status=ok
// SIG undefined FUN_149213192(void)

void FUN_149213192(longlong param_1,int *param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined ****ppppuVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  float fVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined *****pppppuVar22;
  longlong *plVar23;
  longlong lVar24;
  float fVar25;
  undefined1 auStack_648 [32];
  longlong *local_628;
  undefined ****local_620;
  undefined8 *local_618;
  undefined8 *local_610;
  undefined8 *local_608;
  undefined8 *local_600;
  uint local_5f0;
  float local_5ec;
  undefined8 *local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined ***local_5d0;
  longlong *local_5c8;
  undefined ****local_5c0;
  longlong *local_5b8;
  undefined ***local_5b0;
  longlong *local_5a8;
  undefined ****local_5a0;
  longlong *local_598;
  longlong local_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined8 local_578;
  undefined4 local_570;
  longlong local_568;
  undefined4 local_560;
  undefined ***local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined4 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_518;
  undefined4 local_510;
  undefined1 local_508 [200];
  longlong local_440;
  int local_438;
  longlong *local_428;
  undefined8 local_420;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_398;
  undefined8 local_390;
  longlong local_388 [6];
  longlong *local_358;
  undefined8 local_350;
  longlong local_348 [8];
  longlong *local_308;
  undefined8 local_300;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong local_2b8 [20];
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  byte local_1a0;
  undefined ****local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined8 local_174;
  float fStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  undefined4 local_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong local_150;
  float local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined1 local_13c;
  longlong local_138;
  undefined8 local_130;
  undefined1 local_128 [40];
  undefined5 local_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_648;
  lVar13 = FUN_14479d2ce(param_1 + 0x14);
  if (lVar13 != 0) {
    lVar14 = FUN_145b9ef82();
    if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
       (lVar14 = *(longlong *)(lVar13 + 0x1a8), lVar14 != 0)) {
      if (((((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) &&
          (FUN_1401abe9c(*param_4,&local_440,param_2,param_2 + 4), 0 < local_438)) &&
         (cVar10 = FUN_144729dda(local_440), cVar10 != '\0')) {
        plVar15 = (longlong *)FUN_14479d2ce(local_440);
        lVar16 = (**(code **)(*plVar15 + 0x180))(plVar15);
        if (lVar16 != 0) {
          plVar15 = (longlong *)FUN_14479d2ce(local_440);
          lVar16 = (**(code **)(*plVar15 + 0x180))(plVar15);
          bVar11 = *(byte *)(lVar16 + 0x152);
          if ((bVar11 == 1) || ((bVar11 < 7 && ((0x68U >> (bVar11 & 0x1f) & 1) != 0)))) {
            plVar15 = (longlong *)FUN_14479d2ce(local_440);
            uVar17 = (**(code **)(*plVar15 + 0x180))(plVar15);
            lVar14 = FUN_1491ff5c4(lVar13,uVar17);
          }
        }
      }
      lVar16 = FUN_1444b4d58(param_4,(longlong)param_4 + 0x24);
      if (lVar16 == 0) {
        lVar16 = FUN_1444b4da2(param_4,(longlong)param_4 + 0x24);
        local_518 = *(undefined8 *)(param_1 + 0x70);
        local_600 = &local_518;
        local_510 = *(undefined4 *)(param_1 + 0x78);
        local_528 = *(undefined8 *)(param_1 + 0x60);
        local_608 = &local_528;
        local_520 = *(undefined4 *)(param_1 + 0x68);
        local_538 = *(undefined8 *)(param_1 + 0x50);
        local_610 = &local_538;
        local_530 = *(undefined4 *)(param_1 + 0x58);
        local_548 = *(undefined8 *)(param_1 + 0x40);
        local_618 = &local_548;
        local_540 = *(undefined4 *)(param_1 + 0x48);
        local_558 = *(undefined ****)(param_1 + 0x80);
        local_620 = &local_558;
        local_550 = *(undefined4 *)(param_1 + 0x88);
        local_568 = *(longlong *)(param_1 + 0x90);
        local_628 = &local_568;
        local_560 = *(undefined4 *)(param_1 + 0x98);
        local_578 = *(undefined8 *)(param_1 + 0x30);
        local_570 = *(undefined4 *)(param_1 + 0x38);
        local_588 = *(undefined8 *)(param_1 + 0x20);
        local_580 = *(undefined4 *)(param_1 + 0x28);
        FUN_1492144e8(lVar16,lVar13);
      }
      lVar24 = *(longlong *)(lVar13 + 0x20);
      if (lVar24 != 0) {
        lVar18 = FUN_1402984e6();
        lVar24 = *(longlong *)(lVar24 + 0x10);
        if ((*(int *)(lVar18 + 0x38) <= *(int *)(lVar24 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8) ==
            lVar18 + 0x30)) {
          local_5ec = (float)FUN_1405622a2(lVar13);
          uVar19 = 0;
          local_428 = (longlong *)0x0;
          local_420 = 0x200000000;
          local_400 = 0;
          local_3f8 = 0x200000000;
          local_3d8 = 0;
          local_3d0 = 0x200000000;
          local_398 = 0;
          local_390 = 0x200000000;
          local_358 = (longlong *)0x0;
          local_350 = 0x200000000;
          local_308 = (longlong *)0x0;
          local_300 = 0x200000000;
          local_2c8 = 0;
          local_2c0 = 0x200000000;
          local_218 = (longlong *)0x0;
          local_210 = 0x200000000;
          local_1f0 = 0;
          local_1e8 = 0x200000000;
          FUN_1492150fa(param_1,param_3,lVar16);
          uVar12 = *(uint *)(param_3 + 0x24);
          if (SBORROW4(0,uVar12)) {
            puVar20 = (uint *)(param_3 + 4);
            if (*(int *)(param_3 + 0x20) == 0) {
              puVar20 = (uint *)(param_3 + 0x10);
            }
            uVar12 = *puVar20;
            uVar19 = (ulonglong)puVar20[1];
          }
          fVar25 = (float)FUN_147554338(param_1,(ulonglong)uVar12 | uVar19 << 0x20);
          if ((*(byte *)(lVar13 + 0x219) & 2) != 0) {
            local_198 = (undefined ****)CONCAT44(local_198._4_4_,0x3f800000);
            uVar12 = *(uint *)(param_3 + 0x24);
            uVar19 = 0;
            if (SBORROW4(0,uVar12)) {
              puVar20 = (uint *)(param_3 + 4);
              if (*(int *)(param_3 + 0x20) == 0) {
                puVar20 = (uint *)(param_3 + 0x10);
              }
              uVar12 = *puVar20;
              uVar19 = (ulonglong)puVar20[1];
            }
            FUN_1400f0204(lVar13 + 0x220,0,(ulonglong)uVar12 | uVar19 << 0x20,&local_198);
            fVar25 = fVar25 * local_198._0_4_;
          }
          FUN_149216626(local_508,lVar13,&local_440);
          local_1a0 = local_1a0 & 0xfc;
          local_1e0 = (undefined8 *)FUN_14001cc68(200,8);
          puVar21 = local_1e0;
          if ((local_1a0 & 2) != 0) {
            puVar21 = &local_1e0;
          }
          local_1a0 = local_1a0 | 1;
          FUN_1492c46ee(puVar21,local_508);
          local_198 = (undefined ****)param_5[0x22];
          uStack_190 = (longlong *)param_5[0x23];
          local_188 = *(float *)(param_5 + 0x24);
          fStack_184 = (float)*(undefined8 *)((longlong)param_5 + 0x124);
          fStack_180 = (float)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
          fStack_17c = (float)*(undefined8 *)((longlong)param_5 + 300);
          fStack_178 = (float)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
          fStack_16c = *(float *)((longlong)param_5 + 0x13c);
          uStack_168 = (undefined4)param_5[0x28];
          fStack_164 = *(float *)((longlong)param_5 + 0x144);
          local_160 = (undefined4)param_5[0x29];
          fStack_15c = *(float *)((longlong)param_5 + 0x14c);
          uStack_158 = (undefined4)param_5[0x2a];
          uStack_154 = *(undefined4 *)((longlong)param_5 + 0x154);
          local_174 = CONCAT44((int)param_5[0x27],(undefined4)local_174);
          local_150 = param_5[0x2b];
          FUN_144a3f8b4(&local_148,param_5 + 0x2c);
          FUN_144b1f2a6(local_128,param_5 + 0x30);
          local_100 = (undefined5)param_5[0x35];
          uStack_fb = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
          uStack_f8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
          puVar21 = (undefined8 *)&local_f0;
          bVar11 = local_b0 & 0xfc;
          local_b0 = bVar11 + 2;
          if ((local_1a0 & 1) != 0) {
            local_b0 = bVar11 | local_1a0 & 2 | 1;
            local_c0 = local_1b0;
            uStack_b8 = uStack_1a8;
            local_d0 = local_1c0;
            uStack_c8 = uStack_1b8;
            local_e0 = local_1d0;
            uStack_d8 = uStack_1c8;
            local_f0 = (undefined4)local_1e0;
            uStack_ec = local_1e0._4_4_;
            uStack_e8 = uStack_1d8;
            uStack_e4 = uStack_1d4;
            local_1a0 = local_1a0 & 0xfe;
          }
          iVar8 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar8 + 1U;
          local_5e8 = &local_1e0;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar8 + 1U) {
            FUN_140ac5684(param_5,iVar8);
          }
          lVar24 = *param_5;
          lVar18 = (longlong)iVar8 * 0xf0;
          plVar15 = (longlong *)(lVar24 + lVar18);
          *(float *)(plVar15 + 4) = fStack_178;
          plVar15[2] = CONCAT44(fStack_184,local_188);
          plVar15[3] = CONCAT44(fStack_17c,fStack_180);
          *plVar15 = (longlong)local_198;
          plVar15[1] = (longlong)uStack_190;
          plVar15[9] = local_150;
          *(undefined4 *)(plVar15 + 7) = local_160;
          *(float *)((longlong)plVar15 + 0x3c) = fStack_15c;
          *(undefined4 *)(plVar15 + 8) = uStack_158;
          *(undefined4 *)((longlong)plVar15 + 0x44) = uStack_154;
          *(undefined4 *)(plVar15 + 5) = local_174._4_4_;
          *(float *)((longlong)plVar15 + 0x2c) = fStack_16c;
          *(undefined4 *)(plVar15 + 6) = uStack_168;
          *(float *)((longlong)plVar15 + 0x34) = fStack_164;
          plVar15[10] = CONCAT44(uStack_144,local_148);
          *(undefined4 *)(plVar15 + 0xb) = local_140;
          plVar15[0xc] = 0;
          plVar15[0xc] = local_138;
          local_138 = 0;
          *(undefined4 *)(plVar15 + 0xd) = (undefined4)local_130;
          *(undefined4 *)((longlong)plVar15 + 0x6c) = local_130._4_4_;
          local_130 = 0;
          FUN_144b1f34a(plVar15 + 0xe,local_128);
          plVar15[0x13] = CONCAT35(uStack_fb,local_100);
          *(ulonglong *)((longlong)plVar15 + 0x9d) = CONCAT53(uStack_f8,uStack_fb);
          lVar16 = lVar24 + lVar18;
          *(byte *)(lVar16 + 0xe8) = *(byte *)(lVar16 + 0xe8) & 0xfc | 2;
          FUN_144adeb48((undefined4 *)(lVar16 + 0xa8));
          if ((local_b0 & 1) != 0) {
            lVar24 = lVar24 + lVar18;
            *(byte *)(lVar24 + 0xe8) = *(byte *)(lVar24 + 0xe8) | 1;
            *(byte *)(lVar24 + 0xe8) = *(byte *)(lVar24 + 0xe8) & 0xfd | local_b0 & 2;
            *(undefined8 *)(lVar16 + 0xd8) = local_c0;
            *(undefined8 *)(lVar16 + 0xe0) = uStack_b8;
            *(undefined8 *)(lVar16 + 200) = local_d0;
            *(undefined8 *)(lVar16 + 0xd0) = uStack_c8;
            *(undefined8 *)(lVar16 + 0xb8) = local_e0;
            *(undefined8 *)(lVar16 + 0xc0) = uStack_d8;
            *(undefined4 *)(lVar16 + 0xa8) = local_f0;
            *(undefined4 *)(lVar16 + 0xac) = uStack_ec;
            *(undefined4 *)(lVar16 + 0xb0) = uStack_e8;
            *(undefined4 *)(lVar16 + 0xb4) = uStack_e4;
            local_b0 = local_b0 & 0xfe;
          }
          if ((local_b0 & 1) != 0) {
            if ((local_b0 & 2) == 0) {
              puVar21 = (undefined8 *)CONCAT44(uStack_ec,local_f0);
            }
            local_b0 = local_b0 & 0xfe;
            (**(code **)*puVar21)(puVar21,0);
            if ((local_b0 & 2) == 0) {
              FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
            }
          }
          FUN_144adeafa((longlong)&local_174 + 4);
          if ((local_1a0 & 1) != 0) {
            if ((local_1a0 & 2) == 0) {
              local_5e8 = local_1e0;
            }
            local_1a0 = local_1a0 & 0xfe;
            (**(code **)*local_5e8)(local_5e8,0);
            if ((local_1a0 & 2) == 0) {
              FUN_1400020a8(local_1e0);
            }
          }
          plVar15 = param_5 + 0x27;
          local_5e8 = (undefined8 *)((longlong)param_5 + 0x124);
          local_5d8 = param_5 + 0x22;
          local_5f0 = 1;
          if ((*(ushort *)(lVar13 + 0xd9) >> 8 & 1) != 0) {
            local_5f0 = (uint)*(ushort *)(lVar13 + 0xd9);
          }
          FUN_1492166d2(&local_1e0,lVar14);
          plVar23 = &local_440;
          if (local_428 != (longlong *)0x0) {
            plVar23 = local_428;
          }
          local_5e0 = plVar15;
          if ((longlong)(int)local_420 != 0) {
            plVar2 = param_5 + 0xc;
            lVar14 = (longlong)(int)local_420 * 0xc;
            do {
              cVar10 = FUN_1491fe288(lVar13,plVar23);
              if (cVar10 != '\0') {
                FUN_149288242(&local_590,*plVar23,local_1e0);
                lVar16 = local_590;
                lVar24 = FUN_1492169c8(plVar2,local_590);
                if (lVar24 == 0) {
                  plVar15 = (longlong *)FUN_14001cc68(0x50,0x10);
                  plVar15[1] = (longlong)&DAT_100000001;
                  *plVar15 = (longlong)&PTR_FUN_14bc052a0;
                  pppppuVar22 = (undefined *****)(plVar15 + 2);
                  plVar15[3] = 0;
                  plVar15[4] = 0;
                  plVar15[5] = 0;
                  plVar15[6] = 0;
                  plVar15[7] = local_590;
                  plVar15[2] = (longlong)&PTR_FUN_14bc052c0;
                  plVar15[8] = *plVar23;
                  plVar15[9] = 0;
                  FUN_14485c47a(plVar15 + 9,lVar13);
                  local_198 = (undefined ****)pppppuVar22;
                  uStack_190 = plVar15;
                  FUN_1492c4f7c(&local_198,pppppuVar22);
                  plVar5 = uStack_190;
                  local_5a0 = (undefined ****)pppppuVar22;
                  local_598 = plVar15;
                  if (plVar15 == (longlong *)0x0) {
                    FUN_147586634(plVar2,lVar16,&local_5a0);
                    plVar15 = local_5e0;
                  }
                  else {
                    LOCK();
                    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                    UNLOCK();
                    FUN_147586634(plVar2,lVar16,&local_5a0);
                    plVar15 = local_5e0;
                    if (plVar5 != (longlong *)0x0) {
                      LOCK();
                      plVar3 = plVar5 + 1;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)*plVar3 == 0) {
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar5 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        plVar15 = local_5e0;
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                          plVar15 = local_5e0;
                        }
                      }
                    }
                  }
                }
                lVar24 = plVar23[1];
                uStack_190 = (longlong *)((ulonglong)uStack_190 & 0xfffffffffffffffc);
                local_198 = (undefined ****)FUN_14001cc68(0x10,8);
                uVar19 = (ulonglong)uStack_190;
                uStack_190 = (longlong *)((ulonglong)uStack_190 | 1);
                pppppuVar22 = (undefined *****)local_198;
                if ((uVar19 & 2) != 0) {
                  pppppuVar22 = &local_198;
                }
                *pppppuVar22 = (undefined ****)&PTR_FUN_14bc05320;
                *(int *)(pppppuVar22 + 1) = (int)lVar24;
                local_188 = DAT_14cc08218;
                fStack_184 = -NAN;
                fStack_180 = -NAN;
                fStack_17c = (float)((uint)fStack_17c & 0xffffff00);
                fStack_178 = 0.0;
                local_174._0_5_ = CONCAT14((char)local_5f0,fVar25);
                fStack_16c = local_5ec;
                local_628 = plVar15;
                local_620 = (undefined ****)&local_198;
                FUN_149216e50(plVar2,local_5d8,lVar16,local_5e8);
                if (((ulonglong)uStack_190 & 1) != 0) {
                  pppppuVar22 = &local_198;
                  if (((ulonglong)uStack_190 & 2) == 0) {
                    pppppuVar22 = (undefined *****)local_198;
                  }
                  uStack_190 = (longlong *)((ulonglong)uStack_190 & 0xfffffffffffffffe);
                  (*(code *)**pppppuVar22)(pppppuVar22,0);
                  if (((ulonglong)uStack_190 & 2) == 0) {
                    FUN_1400020a8(local_198);
                  }
                }
              }
              plVar23 = (longlong *)((longlong)plVar23 + 0xc);
              lVar14 = lVar14 + -0xc;
            } while (lVar14 != 0);
          }
          plVar23 = local_308;
          if (local_308 == (longlong *)0x0) {
            plVar23 = local_348;
          }
          if ((longlong)(int)local_300 != 0) {
            plVar2 = param_5 + 0xc;
            lVar14 = (longlong)(int)local_300 << 5;
            do {
              cVar10 = FUN_1491fe288(lVar13,plVar23);
              if (cVar10 != '\0') {
                FUN_149288242(&local_590,*plVar23,local_1e0 + 4);
                lVar16 = local_590;
                lVar24 = FUN_149216aaa(plVar2,local_590);
                if (lVar24 == 0) {
                  plVar15 = (longlong *)FUN_14001cc68(0x50,0x10);
                  plVar15[1] = (longlong)&DAT_100000001;
                  *plVar15 = (longlong)&PTR_FUN_14bc05330;
                  ppppuVar4 = (undefined ****)(plVar15 + 2);
                  plVar15[3] = 0;
                  plVar15[4] = 0;
                  plVar15[5] = 0;
                  plVar15[6] = 0;
                  plVar15[7] = local_590;
                  plVar15[2] = (longlong)&PTR_FUN_14bc05350;
                  plVar15[8] = *plVar23;
                  plVar15[9] = 0;
                  FUN_14485c47a(plVar15 + 9,lVar13);
                  local_198 = ppppuVar4;
                  uStack_190 = plVar15;
                  FUN_1492c5a3a(&local_198,ppppuVar4);
                  plVar5 = uStack_190;
                  local_5b0 = (undefined ***)ppppuVar4;
                  local_5a8 = plVar15;
                  if (plVar15 == (longlong *)0x0) {
                    FUN_147586634(plVar2,lVar16,&local_5b0);
                    plVar15 = local_5e0;
                  }
                  else {
                    LOCK();
                    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                    UNLOCK();
                    FUN_147586634(plVar2,lVar16,&local_5b0);
                    plVar15 = local_5e0;
                    if (plVar5 != (longlong *)0x0) {
                      LOCK();
                      plVar3 = plVar5 + 1;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)*plVar3 == 0) {
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar5 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        plVar15 = local_5e0;
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                          plVar15 = local_5e0;
                        }
                      }
                    }
                  }
                }
                local_188 = (float)(double)plVar23[3];
                fStack_180 = (float)((uint)fStack_180 | 3);
                local_198 = (undefined ****)&PTR_FUN_14bc053b0;
                uStack_190 = (longlong *)
                             CONCAT44((float)(double)plVar23[2],(float)(double)plVar23[1]);
                fStack_184 = 9.80909e-45;
                fStack_178 = DAT_14cc08218;
                local_174 = 0xffffffffffffffff;
                fStack_16c = (float)((uint)fStack_16c & 0xffffff00);
                uStack_168 = 0;
                local_160 = CONCAT31(local_160._1_3_,(char)local_5f0);
                fStack_15c = local_5ec;
                local_628 = plVar15;
                local_620 = (undefined ****)&local_198;
                fStack_164 = fVar25;
                FUN_149216f28(plVar2,local_5d8,lVar16,local_5e8);
                if (((uint)fStack_180 & 1) != 0) {
                  pppppuVar22 = &local_198;
                  if (((uint)fStack_180 & 2) == 0) {
                    pppppuVar22 = (undefined *****)local_198;
                  }
                  fStack_180 = (float)((uint)fStack_180 & 0xfffffffe);
                  (*(code *)**pppppuVar22)(pppppuVar22,0);
                  if (((uint)fStack_180 & 2) == 0) {
                    FUN_1400020a8(local_198);
                  }
                }
              }
              plVar23 = plVar23 + 4;
              lVar14 = lVar14 + -0x20;
            } while (lVar14 != 0);
          }
          plVar23 = local_358;
          if (local_358 == (longlong *)0x0) {
            plVar23 = local_388;
          }
          if ((longlong)(int)local_350 != 0) {
            plVar2 = param_5 + 0xc;
            lVar14 = (longlong)(int)local_350 * 0x18;
            do {
              cVar10 = FUN_1491fe288(lVar13,plVar23);
              if (cVar10 != '\0') {
                FUN_149288242(&local_590,*plVar23,local_1e0 + 2);
                lVar16 = local_590;
                lVar24 = FUN_149216b8c(plVar2,local_590);
                if (lVar24 == 0) {
                  plVar15 = (longlong *)FUN_14001cc68(0x50,0x10);
                  plVar15[1] = (longlong)&DAT_100000001;
                  *plVar15 = (longlong)&PTR_FUN_14bc053c0;
                  pppppuVar22 = (undefined *****)(plVar15 + 2);
                  plVar15[3] = 0;
                  plVar15[4] = 0;
                  plVar15[5] = 0;
                  plVar15[6] = 0;
                  plVar15[7] = local_590;
                  plVar15[2] = (longlong)&PTR_FUN_14bc053e0;
                  plVar15[8] = *plVar23;
                  plVar15[9] = 0;
                  FUN_14485c47a(plVar15 + 9,lVar13);
                  local_198 = (undefined ****)pppppuVar22;
                  uStack_190 = plVar15;
                  FUN_1492c660e(&local_198,pppppuVar22);
                  plVar5 = uStack_190;
                  local_5c0 = (undefined ****)pppppuVar22;
                  local_5b8 = plVar15;
                  if (plVar15 == (longlong *)0x0) {
                    FUN_147586634(plVar2,lVar16,&local_5c0);
                    plVar15 = local_5e0;
                  }
                  else {
                    LOCK();
                    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                    UNLOCK();
                    FUN_147586634(plVar2,lVar16,&local_5c0);
                    plVar15 = local_5e0;
                    if (plVar5 != (longlong *)0x0) {
                      LOCK();
                      plVar3 = plVar5 + 1;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)*plVar3 == 0) {
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar5 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        plVar15 = local_5e0;
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                          plVar15 = local_5e0;
                        }
                      }
                    }
                  }
                }
                dVar6 = (double)plVar23[1];
                dVar7 = (double)plVar23[2];
                local_188 = (float)((uint)local_188 & 0xfffffffc);
                local_198 = (undefined ****)FUN_14001cc68(0x18,8);
                fVar9 = local_188;
                local_188 = (float)((uint)local_188 | 1);
                pppppuVar22 = (undefined *****)local_198;
                if (((uint)fVar9 & 2) != 0) {
                  pppppuVar22 = &local_198;
                }
                *pppppuVar22 = (undefined ****)&PTR_FUN_14bc05440;
                *(float *)(pppppuVar22 + 1) = (float)dVar6;
                *(float *)((longlong)pppppuVar22 + 0xc) = (float)dVar7;
                *(undefined4 *)(pppppuVar22 + 2) = 3;
                fStack_180 = DAT_14cc08218;
                fStack_17c = -NAN;
                fStack_178 = -NAN;
                local_174 = (local_174 >> 8 & 0xffffff) << 8;
                uStack_168 = CONCAT31(uStack_168._1_3_,(char)local_5f0);
                fStack_164 = local_5ec;
                local_628 = plVar15;
                local_620 = (undefined ****)&local_198;
                fStack_16c = fVar25;
                FUN_149216ebc(plVar2,local_5d8,lVar16,local_5e8);
                if (((uint)local_188 & 1) != 0) {
                  pppppuVar22 = &local_198;
                  if (((uint)local_188 & 2) == 0) {
                    pppppuVar22 = (undefined *****)local_198;
                  }
                  local_188 = (float)((uint)local_188 & 0xfffffffe);
                  (*(code *)**pppppuVar22)(pppppuVar22,0);
                  if (((uint)local_188 & 2) == 0) {
                    FUN_1400020a8(local_198);
                  }
                }
              }
              plVar23 = plVar23 + 3;
              lVar14 = lVar14 + -0x18;
            } while (lVar14 != 0);
          }
          plVar23 = local_218;
          if (local_218 == (longlong *)0x0) {
            plVar23 = local_2b8;
          }
          if ((longlong)(int)local_210 != 0) {
            param_5 = param_5 + 0xc;
            lVar14 = (longlong)(int)local_210 * 0x50;
            do {
              cVar10 = FUN_1491fe288(lVar13,plVar23);
              if (cVar10 != '\0') {
                FUN_149288242(&local_590,*plVar23,local_1e0 + 6);
                lVar16 = local_590;
                lVar24 = FUN_149216c6e(param_5,local_590);
                if (lVar24 == 0) {
                  plVar15 = (longlong *)FUN_14001cc68(0x50,0x10);
                  plVar15[1] = (longlong)&DAT_100000001;
                  *plVar15 = (longlong)&PTR_FUN_14bc05450;
                  ppppuVar4 = (undefined ****)(plVar15 + 2);
                  plVar15[3] = 0;
                  plVar15[4] = 0;
                  plVar15[5] = 0;
                  plVar15[6] = 0;
                  plVar15[7] = local_590;
                  plVar15[2] = (longlong)&PTR_FUN_14bc05470;
                  plVar15[8] = *plVar23;
                  plVar15[9] = 0;
                  FUN_14485c47a(plVar15 + 9,lVar13);
                  local_198 = ppppuVar4;
                  uStack_190 = plVar15;
                  FUN_1492c7a12(&local_198,ppppuVar4);
                  plVar2 = uStack_190;
                  local_5d0 = (undefined ***)ppppuVar4;
                  local_5c8 = plVar15;
                  if (plVar15 == (longlong *)0x0) {
                    FUN_147586634(param_5,lVar16,&local_5d0);
                    plVar15 = local_5e0;
                  }
                  else {
                    LOCK();
                    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                    UNLOCK();
                    FUN_147586634(param_5,lVar16,&local_5d0);
                    plVar15 = local_5e0;
                    if (plVar2 != (longlong *)0x0) {
                      LOCK();
                      plVar5 = plVar2 + 1;
                      *(int *)plVar5 = (int)*plVar5 + -1;
                      UNLOCK();
                      if ((int)*plVar5 == 0) {
                        (**(code **)*plVar2)(plVar2);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar2 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        plVar15 = local_5e0;
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar2 + 0x10))(plVar2);
                          plVar15 = local_5e0;
                        }
                      }
                    }
                  }
                }
                local_188 = (float)(double)plVar23[3];
                fStack_184 = (float)(double)plVar23[6];
                fStack_180 = (float)(double)plVar23[4];
                fStack_17c = (float)(double)plVar23[5];
                fStack_178 = (float)(double)plVar23[7];
                local_150 = local_150 | 3;
                local_198 = (undefined ****)&PTR_FUN_14bc054d0;
                uStack_190 = (longlong *)
                             CONCAT44((float)(double)plVar23[2],(float)(double)plVar23[1]);
                local_174 = CONCAT44((float)(double)plVar23[9],(float)(double)plVar23[8]);
                fStack_16c = 7.16064e-43;
                local_148 = DAT_14cc08218;
                uStack_144 = 0xffffffff;
                local_140 = 0xffffffff;
                local_13c = 0;
                local_138 = (ulonglong)(uint)fVar25 << 0x20;
                local_130 = CONCAT71(local_130._1_7_,(char)local_5f0);
                local_130 = CONCAT44(local_5ec,(undefined4)local_130);
                local_628 = plVar15;
                local_620 = (undefined ****)&local_198;
                FUN_149216f94(param_5,local_5d8,lVar16,local_5e8);
                if ((local_150 & 1) != 0) {
                  pppppuVar22 = &local_198;
                  if ((local_150 & 2) == 0) {
                    pppppuVar22 = (undefined *****)local_198;
                  }
                  local_150 = local_150 & 0xfffffffffffffffe;
                  (*(code *)**pppppuVar22)(pppppuVar22,0);
                  if ((local_150 & 2) == 0) {
                    FUN_1400020a8(local_198);
                  }
                }
              }
              plVar23 = plVar23 + 10;
              lVar14 = lVar14 + -0x50;
            } while (lVar14 != 0);
          }
          plVar15 = (longlong *)CONCAT44(uStack_1d4,uStack_1d8);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar15 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
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
          FUN_149216d50(local_508);
          FUN_149216dac(&local_440);
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_648) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492144e8 FUN_1492144e8 body=3089 status=ok
// SIG undefined FUN_1492144e8(void)

void FUN_1492144e8(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  
  lVar10 = param_1 + 8;
  iVar13 = (int)param_3[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar10,iVar13);
    FUN_1447c6044(lVar10,uVar8,iVar13,0);
  }
  lVar15 = param_1 + 0x28;
  iVar13 = (int)param_4[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar15,iVar13);
    FUN_1447c6044(lVar15,uVar8,iVar13,0);
  }
  lVar1 = param_1 + 0x48;
  iVar13 = (int)param_5[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar1,iVar13);
    FUN_1447c6044(lVar1,uVar8,iVar13,0);
  }
  lVar2 = param_1 + 0x68;
  iVar13 = (int)param_6[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar2,iVar13);
    FUN_1447c6044(lVar2,uVar8,iVar13,0);
  }
  lVar3 = param_1 + 0x88;
  iVar13 = (int)param_7[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar3,iVar13);
    FUN_1447c6044(lVar3,uVar8,iVar13,0);
  }
  lVar4 = param_1 + 0xa8;
  iVar13 = (int)param_8[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar4,iVar13);
    FUN_1447c6044(lVar4,uVar8,iVar13,0);
  }
  lVar5 = param_1 + 200;
  iVar13 = (int)param_9[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar5,iVar13);
    FUN_1447c6044(lVar5,uVar8,iVar13,0);
  }
  lVar6 = param_1 + 0xe8;
  iVar13 = (int)param_10[1];
  if (-1 < iVar13) {
    uVar8 = FUN_144a54ea4(lVar6,iVar13);
    FUN_1447c6044(lVar6,uVar8,iVar13,0);
  }
  if (0 < (int)param_3[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar9 = *(longlong *)(*param_3 + uVar17 * 0x118);
        uVar12 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar16 = (uint)lVar9 & 0xffff;
        lVar14 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar14 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar14 + (ulonglong)
                                   (*(int *)(param_2 + 0x378) - 1U &
                                   (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar16)
                                   + (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar14 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar9) {
              if ((lVar14 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_3 + uVar17 * 0x118);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar9 = *(longlong *)(param_1 + 0x18);
                if (*(longlong *)(param_1 + 0x18) == 0) {
                  lVar9 = lVar10;
                }
                puVar11 = (uint *)(lVar9 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_1492146eb;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_1492146ed;
              }
              break;
            }
            iVar13 = *(int *)(lVar14 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar9 = *(longlong *)(param_1 + 0x18);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar9 = lVar10;
      }
      puVar11 = (uint *)(lVar9 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_1492146eb:
      uVar12 = uVar12 | *puVar11;
LAB_1492146ed:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_3[1]);
  }
  if (0 < (int)param_4[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar10 = *(longlong *)(*param_4 + uVar17 * 0x110);
        uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar16 = (uint)lVar10 & 0xffff;
        lVar9 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar9 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar9 + (ulonglong)
                                  (*(int *)(param_2 + 0x378) - 1U &
                                  (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar16)
                                  + (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar9 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar10) {
              if ((lVar9 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_4 + uVar17 * 0x110);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar10 = *(longlong *)(param_1 + 0x38);
                if (*(longlong *)(param_1 + 0x38) == 0) {
                  lVar10 = lVar15;
                }
                puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_149214830;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_149214832;
              }
              break;
            }
            iVar13 = *(int *)(lVar9 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar10 = lVar15;
      }
      puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_149214830:
      uVar12 = uVar12 | *puVar11;
LAB_149214832:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_4[1]);
  }
  if (0 < (int)param_5[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar10 = *(longlong *)(*param_5 + uVar17 * 0x110);
        uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar16 = (uint)lVar10 & 0xffff;
        lVar15 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar15 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(param_2 + 0x378) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar16) +
                                   (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar15 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar10) {
              if ((lVar15 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_5 + uVar17 * 0x110);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar10 = *(longlong *)(param_1 + 0x58);
                if (*(longlong *)(param_1 + 0x58) == 0) {
                  lVar10 = lVar1;
                }
                puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_149214975;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_149214977;
              }
              break;
            }
            iVar13 = *(int *)(lVar15 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar10 = lVar1;
      }
      puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_149214975:
      uVar12 = uVar12 | *puVar11;
LAB_149214977:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_5[1]);
  }
  if (0 < (int)param_6[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar10 = *(longlong *)(*param_6 + uVar17 * 0x118);
        uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar16 = (uint)lVar10 & 0xffff;
        lVar15 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar15 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(param_2 + 0x378) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar16) +
                                   (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar15 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar10) {
              if ((lVar15 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_6 + uVar17 * 0x118);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar10 = *(longlong *)(param_1 + 0x78);
                if (*(longlong *)(param_1 + 0x78) == 0) {
                  lVar10 = lVar2;
                }
                puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_149214abd;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_149214abf;
              }
              break;
            }
            iVar13 = *(int *)(lVar15 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar10 = lVar2;
      }
      puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_149214abd:
      uVar12 = uVar12 | *puVar11;
LAB_149214abf:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_6[1]);
  }
  if (0 < (int)param_7[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar10 = *(longlong *)(*param_7 + uVar17 * 0x228);
        uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar16 = (uint)lVar10 & 0xffff;
        lVar15 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar15 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(param_2 + 0x378) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar16) +
                                   (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar15 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar10) {
              if ((lVar15 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_7 + uVar17 * 0x228);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar10 = *(longlong *)(param_1 + 0x98);
                if (*(longlong *)(param_1 + 0x98) == 0) {
                  lVar10 = lVar3;
                }
                puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_149214c10;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_149214c12;
              }
              break;
            }
            iVar13 = *(int *)(lVar15 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar10 = lVar3;
      }
      puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_149214c10:
      uVar12 = uVar12 | *puVar11;
LAB_149214c12:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_7[1]);
  }
  if (0 < (int)param_8[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar10 = *(longlong *)(*param_8 + uVar17 * 0x338);
        uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar16 = (uint)lVar10 & 0xffff;
        lVar15 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar15 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(param_2 + 0x378) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar16) +
                                   (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar15 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar10) {
              if ((lVar15 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_8 + uVar17 * 0x338);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar10 = *(longlong *)(param_1 + 0xb8);
                if (*(longlong *)(param_1 + 0xb8) == 0) {
                  lVar10 = lVar4;
                }
                puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_149214d66;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_149214d68;
              }
              break;
            }
            iVar13 = *(int *)(lVar15 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        lVar10 = lVar4;
      }
      puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_149214d66:
      uVar12 = uVar12 | *puVar11;
LAB_149214d68:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_8[1]);
  }
  if (0 < (int)param_9[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar10 = *(longlong *)(*param_9 + uVar17 * 0x448);
        uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar16 = (uint)lVar10 & 0xffff;
        lVar15 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar15 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(param_2 + 0x378) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar16) +
                                   (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar15 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar10) {
              if ((lVar15 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_9 + uVar17 * 0x448);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar10 = *(longlong *)(param_1 + 0xd8);
                if (*(longlong *)(param_1 + 0xd8) == 0) {
                  lVar10 = lVar5;
                }
                puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_149214eb3;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_149214eb5;
              }
              break;
            }
            iVar13 = *(int *)(lVar15 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0xd8);
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        lVar10 = lVar5;
      }
      puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_149214eb3:
      uVar12 = uVar12 | *puVar11;
LAB_149214eb5:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_9[1]);
  }
  if (0 < (int)param_10[1]) {
    uVar17 = 0;
    do {
      if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
        lVar10 = *(longlong *)(*param_10 + uVar17 * 0x998);
        uVar12 = (uint)((ulonglong)lVar10 >> 0x10);
        uVar16 = (uint)lVar10 & 0xffff;
        lVar15 = *(longlong *)(param_2 + 0x370);
        if (*(longlong *)(param_2 + 0x370) == 0) {
          lVar15 = param_2 + 0x368;
        }
        iVar13 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(param_2 + 0x378) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar16) +
                                   (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            lVar15 = *(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50;
            if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar13 * 0x50) == lVar10) {
              if ((lVar15 + 8U & 0xfffffffffffffff7) != 0) {
                cVar7 = FUN_1491fe288(param_2,*param_10 + uVar17 * 0x998);
                uVar12 = 1 << ((byte)uVar17 & 0x1f);
                lVar10 = *(longlong *)(param_1 + 0xf8);
                if (*(longlong *)(param_1 + 0xf8) == 0) {
                  lVar10 = lVar6;
                }
                puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
                if (cVar7 != '\0') goto LAB_149214fef;
                uVar12 = ~uVar12 & *puVar11;
                goto LAB_149214ff1;
              }
              break;
            }
            iVar13 = *(int *)(lVar15 + 0x48);
          } while (iVar13 != -1);
        }
      }
      uVar12 = 1 << ((byte)uVar17 & 0x1f);
      lVar10 = *(longlong *)(param_1 + 0xf8);
      if (*(longlong *)(param_1 + 0xf8) == 0) {
        lVar10 = lVar6;
      }
      puVar11 = (uint *)(lVar10 + (uVar17 >> 5 & 0x7ffffff) * 4);
LAB_149214fef:
      uVar12 = uVar12 | *puVar11;
LAB_149214ff1:
      *puVar11 = uVar12;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(int)param_10[1]);
  }
  return;
}



// FUNCTION 1492150fa FUN_1492150fa body=5417 status=ok
// SIG undefined FUN_1492150fa(void)

void FUN_1492150fa(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 uVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1a8 [36];
  uint local_184;
  longlong local_180;
  ulonglong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_114;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar19 = *(uint *)(param_2 + 0x24);
  fVar34 = 0.0;
  if (SBORROW4(0,uVar19)) {
    puVar20 = (uint *)(param_2 + 4);
    if (*(int *)(param_2 + 0x20) == 0) {
      puVar20 = (uint *)(param_2 + 0x10);
    }
    uVar19 = *puVar20;
    fVar34 = (float)puVar20[1];
  }
  lVar21 = FUN_14479d2ce(param_1 + 0x14);
  if (lVar21 != 0) {
    lVar22 = FUN_145b9ef82();
    if ((*(int *)(lVar22 + 0x38) <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8
         ) == lVar22 + 0x30)) {
      iVar24 = *(int *)(param_1 + 0x28);
      if (-1 < iVar24) {
        if (*(int *)(param_4 + 0x24) < iVar24) {
          FUN_1492c7fdc(param_4);
        }
        iVar24 = *(int *)(param_1 + 0x38);
        if (-1 < iVar24) {
          local_160 = param_4 + 0x28;
          if (*(int *)(param_4 + 0x4c) < iVar24) {
            FUN_1492c80d8(local_160);
          }
          iVar24 = *(int *)(param_1 + 0xa8);
          if (-1 < iVar24) {
            local_128 = param_4 + 0x78;
            if (*(int *)(param_4 + 0xb4) < iVar24) {
              FUN_1492c8148(local_128);
            }
            iVar24 = *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x98);
            if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar24);
            }
            local_180 = param_4 + 0x50;
            if (*(int *)(param_4 + 0x74) < iVar24) {
              FUN_1492c81b8(local_180);
            }
            iVar24 = *(int *)(param_1 + 0x48);
            if (-1 < iVar24) {
              local_130 = param_4 + 0xb8;
              if (*(int *)(param_4 + 0xf4) < iVar24) {
                FUN_1492c8228(local_130);
              }
              iVar24 = *(int *)(param_1 + 0x58);
              if (-1 < iVar24) {
                local_138 = param_4 + 0xf8;
                if (*(int *)(param_4 + 0x144) < iVar24) {
                  FUN_1492c8324(local_138);
                }
                iVar24 = *(int *)(param_1 + 0x68);
                if (-1 < iVar24) {
                  local_140 = param_4 + 0x148;
                  if (*(int *)(param_4 + 0x184) < iVar24) {
                    FUN_1492c8406(local_140);
                  }
                  iVar24 = *(int *)(param_1 + 0x78);
                  if (-1 < iVar24) {
                    local_148 = param_4 + 0x188;
                    if (*(int *)(param_4 + 0x234) < iVar24) {
                      FUN_1492c8502(local_148);
                    }
                    iVar24 = *(int *)(param_1 + 0xb8);
                    if (-1 < iVar24) {
                      local_150 = param_4 + 0x238;
                      if (*(int *)(param_4 + 0x25c) < iVar24) {
                        FUN_1492c8610(local_150);
                      }
                      local_178 = (ulonglong)(uint)fVar34;
                      local_170 = (ulonglong)uVar19;
                      local_184 = (uint)(*(ushort *)(lVar21 + 0xd9) & 0x1ff);
                      local_168 = param_1;
                      local_120 = lVar21;
                      if (0 < *(int *)(param_1 + 0x28)) {
                        local_158 = CONCAT44(fVar34,uVar19);
                        lVar21 = 0x84;
                        uVar32 = 0;
                        do {
                          lVar22 = *(longlong *)(local_168 + 0x20);
                          uVar31 = (ulonglong)local_f8 >> 0x20;
                          local_f8 = (undefined1 *)((ulonglong)local_f8 & 0xffffffff00000000);
                          lVar29 = *(longlong *)(param_3 + 0x18);
                          if (*(longlong *)(param_3 + 0x18) == 0) {
                            lVar29 = param_3 + 8;
                          }
                          if ((*(uint *)(lVar29 + (uVar32 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar32 & 0x1f) & 1) == 0) {
                            if (local_184 == 0x101) {
                              uVar18 = 0;
                              if (*(char *)(lVar22 + lVar21) == '\x01') {
                                uVar18 = *(undefined4 *)(lVar22 + -4 + lVar21);
                              }
                              local_f8 = (undefined1 *)CONCAT44((int)uVar31,uVar18);
                            }
                          }
                          else {
                            FUN_1400f0204(lVar22 + lVar21 + -0x7c,0,local_158,&local_f8);
                          }
                          iVar24 = *(int *)(param_4 + 0x20);
                          *(uint *)(param_4 + 0x20) = iVar24 + 1U;
                          if (*(uint *)(param_4 + 0x24) < iVar24 + 1U) {
                            FUN_1492c8680(param_4,iVar24);
                          }
                          lVar29 = *(longlong *)(param_4 + 0x18);
                          if (*(longlong *)(param_4 + 0x18) == 0) {
                            lVar29 = param_4;
                          }
                          *(undefined8 *)(lVar29 + (longlong)iVar24 * 0xc) =
                               *(undefined8 *)(lVar22 + -0x84 + lVar21);
                          *(float *)(lVar29 + 8 + (longlong)iVar24 * 0xc) = (float)local_f8;
                          uVar32 = uVar32 + 1;
                          lVar21 = lVar21 + 0x118;
                        } while ((longlong)uVar32 < (longlong)*(int *)(local_168 + 0x28));
                      }
                      iVar24 = uVar19 + (0.5 <= fVar34);
                      local_158 = param_3;
                      if (0 < *(int *)(local_168 + 0xa8)) {
                        lVar21 = 0;
                        do {
                          puVar1 = (undefined8 *)(*(longlong *)(local_168 + 0xa0) + lVar21 * 0x118);
                          uVar19 = *(uint *)(*(longlong *)(local_168 + 0xa0) + 0x60 + lVar21 * 0x118
                                            );
                          uVar32 = 0;
                          if (uVar19 == 0) {
                            uVar17 = 0;
                            uVar25 = 0;
                          }
                          else {
                            if (0 < (int)uVar19) {
                              uVar32 = 0;
                              uVar31 = (ulonglong)uVar19;
                              do {
                                uVar31 = uVar31 >> 1;
                                uVar30 = (uint)uVar31 + (int)uVar32;
                                if (*(int *)(puVar1[0xb] + (ulonglong)uVar30 * 4) <= iVar24) {
                                  uVar32 = (ulonglong)(uVar30 + (uVar19 & 1));
                                }
                                bVar5 = 1 < uVar19;
                                uVar19 = (uint)uVar31;
                              } while (bVar5);
                            }
                            if ((int)uVar32 < 2) {
                              uVar32 = 1;
                            }
                            lVar22 = puVar1[0xd];
                            lVar29 = uVar32 * 0x10;
                            uVar17 = *(undefined1 *)(lVar22 + -0x10 + lVar29);
                            local_f8 = (undefined1 *)
                                       CONCAT62(CONCAT51(local_f8._3_5_,
                                                         *(undefined1 *)(lVar22 + -0xd + lVar29)),
                                                *(undefined2 *)(lVar22 + -0xf + lVar29));
                            uVar25 = *(undefined1 *)(lVar22 + -0xc + lVar29);
                            local_108 = (undefined1 *)
                                        CONCAT62(CONCAT51(local_108._3_5_,
                                                          *(undefined1 *)(lVar22 + -9 + lVar29)),
                                                 *(undefined2 *)(lVar22 + -0xb + lVar29));
                            uVar32 = *(ulonglong *)(lVar22 + -8 + lVar29);
                          }
                          iVar3 = *(int *)(param_4 + 0xb0);
                          lVar22 = (longlong)iVar3;
                          *(uint *)(param_4 + 0xb0) = iVar3 + 1U;
                          if (*(uint *)(param_4 + 0xb4) < iVar3 + 1U) {
                            FUN_1492c870c(local_128,iVar3);
                          }
                          lVar29 = *(longlong *)(param_4 + 0xa8);
                          if (*(longlong *)(param_4 + 0xa8) == 0) {
                            lVar29 = local_128;
                          }
                          *(undefined8 *)(lVar29 + lVar22 * 0x18) = *puVar1;
                          *(undefined1 *)(lVar29 + 8 + lVar22 * 0x18) = uVar17;
                          *(undefined2 *)(lVar29 + 9 + lVar22 * 0x18) = (undefined2)local_f8;
                          *(undefined1 *)(lVar29 + 0xb + lVar22 * 0x18) = local_f8._2_1_;
                          *(undefined1 *)(lVar29 + 0xc + lVar22 * 0x18) = uVar25;
                          *(undefined2 *)(lVar29 + 0xd + lVar22 * 0x18) = (undefined2)local_108;
                          *(undefined1 *)(lVar29 + 0xf + lVar22 * 0x18) = local_108._2_1_;
                          *(ulonglong *)(lVar29 + 0x10 + lVar22 * 0x18) = uVar32;
                          lVar21 = lVar21 + 1;
                        } while (lVar21 < *(int *)(local_168 + 0xa8));
                      }
                      if (0 < *(int *)(local_168 + 0xb8)) {
                        lVar21 = 0;
                        lVar22 = 0;
                        do {
                          local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffffffffff00);
                          lVar29 = *(longlong *)(local_168 + 0xb0);
                          FUN_147591e2e(lVar29 + lVar21,iVar24,&local_108);
                          lVar29 = *(longlong *)(lVar29 + 0x108 + lVar21);
                          if ((DAT_14c950c29 == '\x01') && (lVar29 != 0)) {
                            FUN_1456cec3c(lVar29);
                          }
                          iVar3 = *(int *)(param_4 + 600);
                          *(uint *)(param_4 + 600) = iVar3 + 1U;
                          if (*(uint *)(param_4 + 0x25c) < iVar3 + 1U) {
                            FUN_1492c8798(local_150,iVar3);
                          }
                          lVar27 = *(longlong *)(param_4 + 0x250);
                          if (*(longlong *)(param_4 + 0x250) == 0) {
                            lVar27 = local_150;
                          }
                          uVar17 = (undefined1)local_108;
                          local_f8 = (undefined1 *)0x0;
                          FUN_14485c47a(&local_f8,lVar29);
                          *(undefined1 **)(lVar27 + (longlong)iVar3 * 0xc) = local_f8;
                          *(undefined1 *)(lVar27 + 8 + (longlong)iVar3 * 0xc) = uVar17;
                          lVar22 = lVar22 + 1;
                          lVar21 = lVar21 + 0x110;
                        } while (lVar22 < *(int *)(local_168 + 0xb8));
                      }
                      lVar21 = local_158;
                      if (0 < *(int *)(local_168 + 0x38)) {
                        lVar22 = local_158 + 0x28;
                        lVar29 = local_170 + (local_178 << 0x20);
                        lVar27 = 0x71;
                        uVar32 = 0;
                        do {
                          uVar31 = (ulonglong)local_f8 >> 8;
                          local_f8 = (undefined1 *)((ulonglong)local_f8 & 0xffffffffffffff00);
                          lVar23 = *(longlong *)(local_168 + 0x30);
                          lVar28 = *(longlong *)(lVar21 + 0x38);
                          if (*(longlong *)(lVar21 + 0x38) == 0) {
                            lVar28 = lVar22;
                          }
                          if ((*(uint *)(lVar28 + (uVar32 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar32 & 0x1f) & 1) == 0) {
                            if (local_184 == 0x101) {
                              if (*(char *)(lVar23 + lVar27) == '\x01') {
                                uVar17 = *(undefined1 *)(lVar23 + -1 + lVar27);
                              }
                              else {
                                uVar17 = 0;
                              }
                              local_f8 = (undefined1 *)CONCAT71((int7)uVar31,uVar17);
                            }
                          }
                          else {
                            FUN_140aef73c(lVar23 + lVar27 + -0x69,lVar29,&local_f8);
                          }
                          iVar24 = *(int *)(param_4 + 0x48);
                          *(uint *)(param_4 + 0x48) = iVar24 + 1U;
                          if (*(uint *)(param_4 + 0x4c) < iVar24 + 1U) {
                            FUN_1492c8824(local_160,iVar24);
                          }
                          lVar28 = *(longlong *)(param_4 + 0x40);
                          if (*(longlong *)(param_4 + 0x40) == 0) {
                            lVar28 = local_160;
                          }
                          *(undefined8 *)(lVar28 + (longlong)iVar24 * 0xc) =
                               *(undefined8 *)(lVar23 + -0x71 + lVar27);
                          *(byte *)(lVar28 + 8 + (longlong)iVar24 * 0xc) = (byte)local_f8;
                          uVar32 = uVar32 + 1;
                          lVar27 = lVar27 + 0x110;
                        } while ((longlong)uVar32 < (longlong)*(int *)(local_168 + 0x38));
                      }
                      if (0 < *(int *)(local_168 + 0x98)) {
                        lVar22 = local_170 + (local_178 << 0x20);
                        lVar29 = 0x74;
                        uVar32 = 0;
                        do {
                          uVar31 = (ulonglong)local_f8 >> 0x20;
                          local_f8 = (undefined1 *)((ulonglong)local_f8 & 0xffffffff00000000);
                          lVar27 = *(longlong *)(local_168 + 0x90);
                          lVar23 = *(longlong *)(lVar21 + 0x58);
                          if (*(longlong *)(lVar21 + 0x58) == 0) {
                            lVar23 = lVar21 + 0x48;
                          }
                          if ((*(uint *)(lVar23 + (uVar32 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar32 & 0x1f) & 1) == 0) {
                            if (local_184 == 0x101) {
                              uVar18 = 0;
                              if (*(char *)(lVar27 + lVar29) == '\x01') {
                                uVar18 = *(undefined4 *)(lVar27 + -4 + lVar29);
                              }
                              local_f8 = (undefined1 *)CONCAT44((int)uVar31,uVar18);
                            }
                          }
                          else {
                            FUN_14752e8c0(lVar27 + lVar29 + -0x6c,lVar22,&local_f8);
                          }
                          iVar24 = *(int *)(param_4 + 0x70);
                          *(uint *)(param_4 + 0x70) = iVar24 + 1U;
                          if (*(uint *)(param_4 + 0x74) < iVar24 + 1U) {
                            FUN_1492c88b0(local_180,iVar24);
                          }
                          lVar23 = *(longlong *)(param_4 + 0x68);
                          if (*(longlong *)(param_4 + 0x68) == 0) {
                            lVar23 = local_180;
                          }
                          *(undefined8 *)(lVar23 + (longlong)iVar24 * 0xc) =
                               *(undefined8 *)(lVar27 + -0x74 + lVar29);
                          *(float *)(lVar23 + 8 + (longlong)iVar24 * 0xc) = (float)local_f8;
                          uVar32 = uVar32 + 1;
                          lVar29 = lVar29 + 0x110;
                        } while ((longlong)uVar32 < (longlong)*(int *)(local_168 + 0x98));
                      }
                      lVar22 = local_168;
                      lVar29 = lVar21;
                      if (0 < *(int *)(local_168 + 0x88)) {
                        local_160 = (local_178 << 0x20) + local_170;
                        lVar27 = 0x71;
                        uVar32 = 0;
                        do {
                          uVar31 = (ulonglong)local_f8 >> 8;
                          local_f8 = (undefined1 *)((ulonglong)local_f8 & 0xffffffffffffff00);
                          lVar23 = *(longlong *)(lVar22 + 0x80);
                          lVar28 = *(longlong *)(lVar29 + 0x78);
                          if (*(longlong *)(lVar29 + 0x78) == 0) {
                            lVar28 = lVar21 + 0x68;
                          }
                          if ((*(uint *)(lVar28 + (uVar32 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar32 & 0x1f) & 1) == 0) {
                            if (local_184 == 0x101) {
                              if (*(char *)(lVar23 + lVar27) == '\x01') {
                                bVar26 = *(byte *)(lVar23 + -1 + lVar27);
                              }
                              else {
                                bVar26 = 0;
                              }
                              local_f8 = (undefined1 *)CONCAT71((int7)uVar31,bVar26);
                            }
                            else {
                              bVar26 = 0;
                            }
                          }
                          else {
                            FUN_1410676cc(lVar23 + lVar27 + -0x69,local_160,&local_f8);
                            bVar26 = (byte)local_f8;
                          }
                          iVar24 = *(int *)(param_4 + 0x70);
                          *(uint *)(param_4 + 0x70) = iVar24 + 1U;
                          if (*(uint *)(param_4 + 0x74) < iVar24 + 1U) {
                            FUN_1492c88b0(local_180,iVar24);
                          }
                          lVar29 = *(longlong *)(param_4 + 0x68);
                          if (*(longlong *)(param_4 + 0x68) == 0) {
                            lVar29 = local_180;
                          }
                          *(undefined8 *)(lVar29 + (longlong)iVar24 * 0xc) =
                               *(undefined8 *)(lVar23 + -0x71 + lVar27);
                          *(uint *)(lVar29 + 8 + (longlong)iVar24 * 0xc) = (uint)bVar26;
                          uVar32 = uVar32 + 1;
                          lVar27 = lVar27 + 0x118;
                          lVar29 = local_158;
                        } while ((longlong)uVar32 < (longlong)*(int *)(lVar22 + 0x88));
                      }
                      if (0 < *(int *)(lVar22 + 0x48)) {
                        local_180 = lVar29 + 0x88;
                        lVar21 = local_170 + (local_178 << 0x20);
                        lVar27 = 0x118;
                        uVar32 = 0;
                        do {
                          local_f8 = (undefined1 *)0x0;
                          lVar23 = *(longlong *)(lVar22 + 0x40);
                          lVar28 = *(longlong *)(lVar29 + 0x98);
                          if (*(longlong *)(lVar29 + 0x98) == 0) {
                            lVar28 = local_180;
                          }
                          if ((*(uint *)(lVar28 + (uVar32 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar32 & 0x1f) & 1) == 0) {
                            fVar34 = 0.0;
                            fVar36 = 0.0;
                            if (local_184 == 0x101) {
                              if (*(char *)(lVar23 + -0x94 + lVar27) == '\x01') {
                                fVar34 = *(float *)(lVar23 + -0x98 + lVar27);
                                local_f8 = (undefined1 *)(ulonglong)(uint)fVar34;
                              }
                              if (*(char *)(lVar23 + 0x7c + lVar27) == '\x01') {
                                fVar36 = *(float *)(lVar23 + 0x78 + lVar27);
                                local_f8 = (undefined1 *)CONCAT44(fVar36,(float)local_f8);
                              }
                            }
                          }
                          else {
                            FUN_1400f0204(lVar23 + lVar27 + -0x110,0,lVar21,&local_f8);
                            FUN_1400f0204(lVar23 + lVar27,0,lVar21,(longlong)&local_f8 + 4);
                            fVar36 = local_f8._4_4_;
                            fVar34 = (float)local_f8;
                          }
                          iVar24 = *(int *)(param_4 + 0xf0);
                          lVar28 = (longlong)iVar24;
                          *(uint *)(param_4 + 0xf0) = iVar24 + 1U;
                          if (*(uint *)(param_4 + 0xf4) < iVar24 + 1U) {
                            FUN_1492c893c(local_130,iVar24);
                          }
                          lVar33 = *(longlong *)(param_4 + 0xe8);
                          if (*(longlong *)(param_4 + 0xe8) == 0) {
                            lVar33 = local_130;
                          }
                          *(undefined8 *)(lVar33 + lVar28 * 0x18) =
                               *(undefined8 *)(lVar23 + -0x118 + lVar27);
                          *(double *)(lVar33 + 8 + lVar28 * 0x18) = (double)fVar34;
                          *(double *)(lVar33 + 0x10 + lVar28 * 0x18) = (double)fVar36;
                          uVar32 = uVar32 + 1;
                          lVar27 = lVar27 + 0x228;
                        } while ((longlong)uVar32 < (longlong)*(int *)(lVar22 + 0x48));
                      }
                      if (0 < *(int *)(lVar22 + 0x58)) {
                        local_180 = lVar29 + 0xa8;
                        lVar21 = local_170 + (local_178 << 0x20);
                        lVar27 = 0x228;
                        uVar32 = 0;
                        do {
                          local_f8 = (undefined1 *)0x0;
                          uVar31 = (ulonglong)uStack_f0 >> 0x20;
                          uStack_f0 = (undefined1 *)((ulonglong)uStack_f0 & 0xffffffff00000000);
                          lVar23 = *(longlong *)(lVar22 + 0x50);
                          lVar28 = *(longlong *)(lVar29 + 0xb8);
                          if (*(longlong *)(lVar29 + 0xb8) == 0) {
                            lVar28 = local_180;
                          }
                          if ((*(uint *)(lVar28 + (uVar32 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar32 & 0x1f) & 1) == 0) {
                            fVar34 = 0.0;
                            fVar36 = 0.0;
                            fVar37 = 0.0;
                            if (local_184 == 0x101) {
                              if (*(char *)(lVar23 + -0x1a4 + lVar27) == '\x01') {
                                fVar34 = *(float *)(lVar23 + -0x1a8 + lVar27);
                                local_f8 = (undefined1 *)(ulonglong)(uint)fVar34;
                              }
                              if (*(char *)(lVar23 + -0x94 + lVar27) == '\x01') {
                                fVar36 = *(float *)(lVar23 + -0x98 + lVar27);
                                local_f8 = (undefined1 *)CONCAT44(fVar36,(float)local_f8);
                              }
                              if (*(char *)(lVar23 + 0x7c + lVar27) == '\x01') {
                                fVar37 = *(float *)(lVar23 + 0x78 + lVar27);
                                uStack_f0 = (undefined1 *)CONCAT44((int)uVar31,fVar37);
                              }
                            }
                          }
                          else {
                            FUN_1400f0204(lVar23 + lVar27 + -0x220,0,lVar21,&local_f8);
                            FUN_1400f0204(lVar23 + lVar27 + -0x110,0,lVar21,(longlong)&local_f8 + 4)
                            ;
                            FUN_1400f0204(lVar23 + lVar27,0,lVar21,&uStack_f0);
                            fVar36 = local_f8._4_4_;
                            fVar37 = (float)uStack_f0;
                            fVar34 = (float)local_f8;
                          }
                          iVar24 = *(int *)(param_4 + 0x140);
                          uVar19 = iVar24 + 1;
                          *(uint *)(param_4 + 0x140) = uVar19;
                          if (*(uint *)(param_4 + 0x144) < uVar19) {
                            FUN_1492c89c8(local_138);
                          }
                          lVar28 = *(longlong *)(param_4 + 0x138);
                          if (*(longlong *)(param_4 + 0x138) == 0) {
                            lVar28 = local_138;
                          }
                          lVar33 = (longlong)iVar24 * 0x20;
                          *(undefined8 *)(lVar28 + lVar33) =
                               *(undefined8 *)(lVar23 + -0x228 + lVar27);
                          *(double *)(lVar28 + 8 + lVar33) = (double)fVar34;
                          *(double *)(lVar28 + 0x10 + lVar33) = (double)fVar36;
                          *(double *)(lVar28 + 0x18 + lVar33) = (double)fVar37;
                          uVar32 = uVar32 + 1;
                          lVar27 = lVar27 + 0x338;
                        } while ((longlong)uVar32 < (longlong)*(int *)(lVar22 + 0x58));
                      }
                      if (0 < *(int *)(lVar22 + 0x68)) {
                        local_180 = lVar29 + 200;
                        lVar21 = local_170 + (local_178 << 0x20);
                        lVar27 = 0x228;
                        uVar32 = 0;
                        do {
                          local_108 = &DAT_3f8000003f800000;
                          uStack_100 = &DAT_3f8000003f800000;
                          lVar23 = *(longlong *)(lVar22 + 0x60);
                          lVar28 = *(longlong *)(lVar29 + 0xd8);
                          if (*(longlong *)(lVar29 + 0xd8) == 0) {
                            lVar28 = local_180;
                          }
                          if ((*(uint *)(lVar28 + (uVar32 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar32 & 0x1f) & 1) == 0) {
                            if (local_184 == 0x101) {
                              if (*(char *)(lVar23 + -0x1a4 + lVar27) == '\x01') {
                                local_108 = (undefined1 *)
                                            CONCAT44(0x3f800000,
                                                     *(undefined4 *)(lVar23 + -0x1a8 + lVar27));
                              }
                              if (*(char *)(lVar23 + -0x94 + lVar27) == '\x01') {
                                local_108 = (undefined1 *)
                                            CONCAT44(*(undefined4 *)(lVar23 + -0x98 + lVar27),
                                                     (float)local_108);
                              }
                              if (*(char *)(lVar23 + 0x7c + lVar27) == '\x01') {
                                uStack_100 = (undefined1 *)
                                             CONCAT44(0x3f800000,
                                                      *(undefined4 *)(lVar23 + 0x78 + lVar27));
                              }
                              if (*(char *)(lVar23 + 0x18c + lVar27) == '\x01') {
                                uStack_100 = (undefined1 *)
                                             CONCAT44(*(undefined4 *)(lVar23 + 0x188 + lVar27),
                                                      (float)uStack_100);
                              }
                            }
                          }
                          else {
                            FUN_1400f0204(lVar23 + lVar27 + -0x220,0,lVar21,&local_108);
                            FUN_1400f0204(lVar23 + lVar27 + -0x110,0,lVar21,(longlong)&local_108 + 4
                                         );
                            FUN_1400f0204(lVar23 + lVar27,0,lVar21,&uStack_100);
                            FUN_1400f0204(lVar23 + lVar27 + 0x110,0,lVar21,(longlong)&uStack_100 + 4
                                         );
                          }
                          iVar24 = *(int *)(param_4 + 0x180);
                          *(uint *)(param_4 + 0x180) = iVar24 + 1U;
                          if (*(uint *)(param_4 + 0x184) < iVar24 + 1U) {
                            FUN_1492c8a46(local_140,iVar24);
                          }
                          lVar28 = *(longlong *)(param_4 + 0x178);
                          if (*(longlong *)(param_4 + 0x178) == 0) {
                            lVar28 = local_140;
                          }
                          local_f8 = local_108;
                          puVar15 = local_f8;
                          uStack_f0 = uStack_100;
                          puVar16 = uStack_f0;
                          *(undefined8 *)(lVar28 + (longlong)iVar24 * 0x18) =
                               *(undefined8 *)(lVar23 + -0x228 + lVar27);
                          local_f8._0_4_ = SUB84(local_108,0);
                          local_f8._4_4_ = (float)((ulonglong)local_108 >> 0x20);
                          uStack_f0._0_4_ = SUB84(uStack_100,0);
                          uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
                          puVar2 = (undefined4 *)(lVar28 + 8 + (longlong)iVar24 * 0x18);
                          *puVar2 = (float)local_f8;
                          puVar2[1] = local_f8._4_4_;
                          puVar2[2] = (float)uStack_f0;
                          puVar2[3] = uStack_f0._4_4_;
                          uVar32 = uVar32 + 1;
                          lVar27 = lVar27 + 0x448;
                          local_f8 = local_108;
                          uStack_f0 = uStack_100;
                        } while ((longlong)uVar32 < (longlong)*(int *)(lVar22 + 0x68));
                      }
                      if (0 < *(int *)(lVar22 + 0x78)) {
                        uVar19 = *(uint *)(local_120 + 0x218);
                        local_180 = lVar29 + 0xe8;
                        uVar32 = local_170 | local_178 << 0x20;
                        lVar21 = 0;
                        uVar31 = 0;
                        do {
                          local_f8 = (undefined1 *)0x0;
                          uVar14 = (ulonglong)uStack_f0 >> 0x20;
                          uStack_f0 = (undefined1 *)((ulonglong)uStack_f0 & 0xffffffff00000000);
                          local_108 = DAT_14c846350;
                          uStack_100._0_4_ = (float)DAT_14c846358;
                          if (local_184 == 0x102) {
                            local_108 = (undefined1 *)0x0;
                            uStack_100._0_4_ = 0.0;
                          }
                          local_114 = 0;
                          local_10c = 0.0;
                          lVar22 = *(longlong *)(local_168 + 0x70);
                          lVar27 = *(longlong *)(lVar29 + 0xf8);
                          if (*(longlong *)(lVar29 + 0xf8) == 0) {
                            lVar27 = local_180;
                          }
                          if ((*(uint *)(lVar27 + (uVar31 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar31 & 0x1f) & 1) == 0) {
                            if (local_184 == 0x101) {
                              if (*(char *)(lVar22 + 0x84 + lVar21) == '\x01') {
                                local_f8 = (undefined1 *)
                                           (ulonglong)*(uint *)(lVar22 + 0x80 + lVar21);
                              }
                              if (*(char *)(lVar22 + 0x194 + lVar21) == '\x01') {
                                local_f8 = (undefined1 *)
                                           CONCAT44(*(undefined4 *)(lVar22 + 400 + lVar21),
                                                    (float)local_f8);
                              }
                              if (*(char *)(lVar22 + 0x2a4 + lVar21) == '\x01') {
                                uStack_f0 = (undefined1 *)
                                            CONCAT44((int)uVar14,
                                                     *(undefined4 *)(lVar22 + 0x2a0 + lVar21));
                              }
                              if (*(char *)(lVar22 + 0x3b4 + lVar21) == '\x01') {
                                local_10c = *(float *)(lVar22 + 0x3b0 + lVar21);
                              }
                              if (*(char *)(lVar22 + 0x4c4 + lVar21) == '\x01') {
                                local_114 = (ulonglong)*(uint *)(lVar22 + 0x4c0 + lVar21);
                              }
                              if (*(char *)(lVar22 + 0x5d4 + lVar21) == '\x01') {
                                local_114 = CONCAT44(*(undefined4 *)(lVar22 + 0x5d0 + lVar21),
                                                     (float)local_114);
                              }
                              if (*(char *)(lVar22 + 0x6e4 + lVar21) == '\x01') {
                                local_108 = (undefined1 *)
                                            CONCAT44(local_108._4_4_,
                                                     *(undefined4 *)(lVar22 + 0x6e0 + lVar21));
                              }
                              if (*(char *)(lVar22 + 0x7f4 + lVar21) == '\x01') {
                                local_108 = (undefined1 *)
                                            CONCAT44(*(undefined4 *)(lVar22 + 0x7f0 + lVar21),
                                                     (float)local_108);
                              }
LAB_14921642d:
                              if (*(char *)(lVar22 + 0x904 + lVar21) == '\x01') {
                                uStack_100 = (undefined1 *)
                                             CONCAT44(uStack_100._4_4_,
                                                      *(undefined4 *)(lVar22 + 0x900 + lVar21));
                              }
                            }
                          }
                          else {
                            if ((uVar19 & 1) == 0) {
                              if (local_184 == 0x101) {
                                if (*(char *)(lVar22 + 0x84 + lVar21) == '\x01') {
                                  local_f8 = (undefined1 *)
                                             (ulonglong)*(uint *)(lVar22 + 0x80 + lVar21);
                                }
                                goto LAB_1492161c1;
                              }
                              if ((uVar19 & 2) != 0) goto LAB_149216202;
LAB_1492161f7:
                              if ((uVar19 & 4) == 0) goto LAB_14921629c;
LAB_14921624f:
                              FUN_1400f0204(lVar22 + lVar21 + 0x228,0,uVar32,&uStack_f0);
LAB_14921626c:
                              if ((uVar19 & 8) != 0) goto LAB_1492162ad;
                              if (local_184 == 0x101) {
                                if (*(char *)(lVar22 + 0x3b4 + lVar21) == '\x01') {
                                  local_10c = *(float *)(lVar22 + 0x3b0 + lVar21);
                                }
                                goto LAB_1492162ca;
                              }
LAB_1492162a2:
                              if ((uVar19 & 0x10) == 0) goto LAB_149216347;
LAB_1492162fa:
                              FUN_1400f0204(lVar22 + lVar21 + 0x448,0,uVar32,&local_114);
LAB_149216317:
                              if ((uVar19 & 0x20) != 0) goto LAB_149216358;
                              if (local_184 == 0x101) {
                                if (*(char *)(lVar22 + 0x5d4 + lVar21) == '\x01') {
                                  local_114 = CONCAT44(*(undefined4 *)(lVar22 + 0x5d0 + lVar21),
                                                       (float)local_114);
                                }
                                goto LAB_149216375;
                              }
LAB_14921634d:
                              if ((uVar19 & 0x40) == 0) goto LAB_1492163f1;
LAB_1492163a5:
                              FUN_1400f0204(lVar22 + lVar21 + 0x668,0,uVar32,&local_108);
LAB_1492163c2:
                              if ((char)uVar19 < '\0') goto LAB_1492163ff;
                              if (local_184 == 0x101) {
                                if (*(char *)(lVar22 + 0x7f4 + lVar21) == '\x01') {
                                  local_108 = (undefined1 *)
                                              CONCAT44(*(undefined4 *)(lVar22 + 0x7f0 + lVar21),
                                                       (float)local_108);
                                }
                                goto LAB_14921641c;
                              }
LAB_1492163f6:
                              if ((uVar19 >> 8 & 1) == 0) goto LAB_14921646a;
                            }
                            else {
                              FUN_1400f0204(lVar22 + lVar21 + 8,0,uVar32,&local_f8);
LAB_1492161c1:
                              if ((uVar19 & 2) == 0) {
                                if (local_184 != 0x101) goto LAB_1492161f7;
                                if (*(char *)(lVar22 + 0x194 + lVar21) == '\x01') {
                                  local_f8 = (undefined1 *)
                                             CONCAT44(*(undefined4 *)(lVar22 + 400 + lVar21),
                                                      (float)local_f8);
                                }
                              }
                              else {
LAB_149216202:
                                FUN_1400f0204(lVar22 + lVar21 + 0x118,0,uVar32,
                                              (longlong)&local_f8 + 4);
                              }
                              if ((uVar19 & 4) != 0) goto LAB_14921624f;
                              if (local_184 == 0x101) {
                                if (*(char *)(lVar22 + 0x2a4 + lVar21) == '\x01') {
                                  uStack_f0 = (undefined1 *)
                                              CONCAT44(uStack_f0._4_4_,
                                                       *(undefined4 *)(lVar22 + 0x2a0 + lVar21));
                                }
                                goto LAB_14921626c;
                              }
LAB_14921629c:
                              if ((uVar19 & 8) == 0) goto LAB_1492162a2;
LAB_1492162ad:
                              FUN_1400f0204(lVar22 + lVar21 + 0x338,0,uVar32,&local_10c);
LAB_1492162ca:
                              if ((uVar19 & 0x10) != 0) goto LAB_1492162fa;
                              if (local_184 == 0x101) {
                                if (*(char *)(lVar22 + 0x4c4 + lVar21) == '\x01') {
                                  local_114 = CONCAT44(local_114._4_4_,
                                                       *(undefined4 *)(lVar22 + 0x4c0 + lVar21));
                                }
                                goto LAB_149216317;
                              }
LAB_149216347:
                              if ((uVar19 & 0x20) == 0) goto LAB_14921634d;
LAB_149216358:
                              FUN_1400f0204(lVar22 + lVar21 + 0x558,0,uVar32,
                                            (longlong)&local_114 + 4);
LAB_149216375:
                              if ((uVar19 & 0x40) != 0) goto LAB_1492163a5;
                              if (local_184 == 0x101) {
                                if (*(char *)(lVar22 + 0x6e4 + lVar21) == '\x01') {
                                  local_108 = (undefined1 *)
                                              CONCAT44(local_108._4_4_,
                                                       *(undefined4 *)(lVar22 + 0x6e0 + lVar21));
                                }
                                goto LAB_1492163c2;
                              }
LAB_1492163f1:
                              if (-1 < (char)uVar19) goto LAB_1492163f6;
LAB_1492163ff:
                              FUN_1400f0204(lVar22 + lVar21 + 0x778,0,uVar32,
                                            (longlong)&local_108 + 4);
LAB_14921641c:
                              if ((uVar19 >> 8 & 1) == 0) {
                                if (local_184 == 0x101) goto LAB_14921642d;
                                goto LAB_14921646a;
                              }
                            }
                            FUN_1400f0204(lVar22 + lVar21 + 0x888,0,uVar32,&uStack_100);
                          }
LAB_14921646a:
                          dVar35 = (double)(float)uStack_100;
                          dVar6 = (double)local_108._4_4_;
                          dVar7 = (double)(float)local_108;
                          dVar8 = (double)(float)uStack_f0;
                          dVar10 = (double)local_f8._4_4_;
                          dVar12 = (double)(float)local_f8;
                          dVar9 = (double)local_10c;
                          dVar11 = (double)local_114._4_4_;
                          dVar13 = (double)(float)local_114;
                          uVar4 = *(undefined8 *)(lVar22 + lVar21);
                          iVar24 = *(int *)(param_4 + 0x230);
                          uVar30 = iVar24 + 1;
                          *(uint *)(param_4 + 0x230) = uVar30;
                          if (*(uint *)(param_4 + 0x234) < uVar30) {
                            FUN_1492c8ad2(local_148);
                          }
                          lVar22 = *(longlong *)(param_4 + 0x228);
                          if (*(longlong *)(param_4 + 0x228) == 0) {
                            lVar22 = local_148;
                          }
                          lVar27 = (longlong)iVar24 * 0x50;
                          *(undefined8 *)(lVar22 + lVar27) = uVar4;
                          *(double *)(lVar22 + 8 + lVar27) = dVar12;
                          *(double *)(lVar22 + 0x10 + lVar27) = dVar10;
                          *(double *)(lVar22 + 0x18 + lVar27) = dVar8;
                          *(double *)(lVar22 + 0x20 + lVar27) = dVar13;
                          *(double *)(lVar22 + 0x28 + lVar27) = dVar11;
                          *(double *)(lVar22 + 0x30 + lVar27) = dVar9;
                          *(double *)(lVar22 + 0x38 + lVar27) = dVar7;
                          *(double *)(lVar22 + 0x40 + lVar27) = dVar6;
                          *(double *)(lVar22 + 0x48 + lVar27) = dVar35;
                          uVar31 = uVar31 + 1;
                          lVar21 = lVar21 + 0x998;
                        } while ((longlong)uVar31 < (longlong)*(int *)(local_168 + 0x78));
                      }
                      goto LAB_1492151aa;
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar24);
    }
  }
LAB_1492151aa:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149216626 FUN_149216626 body=172 status=ok
// SIG undefined FUN_149216626(void)

undefined8 * FUN_149216626(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  *param_1 = &PTR_FUN_14bbd4530;
  param_1[1] = param_2;
  param_1[5] = 0;
  param_1[6] = 0x200000000;
  param_1[10] = 0;
  param_1[0xb] = 0x200000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x200000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0x200000000;
  FUN_14928484c(param_1 + 2,param_3 + 0x28);
  FUN_1492848b6(param_1 + 7,param_3 + 0x50);
  FUN_149284920(param_1 + 0xc,param_3 + 0x78);
  FUN_14928498a(param_1 + 0x14,param_3 + 0x238);
  return param_1;
}



// FUNCTION 1492166d2 FUN_1492166d2 body=756 status=ok
// SIG undefined FUN_1492166d2(void)

longlong * FUN_1492166d2(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc0aec0) && (FUN_144b3d300(&DAT_14cc0aec0), DAT_14cc0aec0 == -1)) {
    FUN_149287324();
    atexit((_func_5014 *)&LAB_1444b3605);
    _Init_thread_footer(&DAT_14cc0aec0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc0ae80);
  if (DAT_14cc0aea8 != param_2) {
    DAT_14cc0aea8 = param_2;
    if (DAT_14cc0ae38 != DAT_14cc0ae64) {
      uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      puVar8 = &DAT_14cc0ae68;
      if (DAT_14cc0ae70 != (undefined *)0x0) {
        puVar8 = DAT_14cc0ae70;
      }
      iVar4 = *(int *)(puVar8 + (ulonglong)(DAT_14cc0ae78 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      while (iVar4 != -1) {
        lVar3 = DAT_14cc0ae30 + (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(DAT_14cc0ae30 + (longlong)iVar4 * 0x20) == param_2) {
          if (lVar3 != -8 && lVar3 != 0) {
            FUN_149287d24();
            goto LAB_14921672b;
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x18);
      }
    }
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    FUN_14928757a(&DAT_14cc0aeb0,&local_38);
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_30 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
LAB_14921672b:
  plVar5 = DAT_14cc0aeb8;
  lVar3 = DAT_14cc0aeb0;
  if (DAT_14cc0aeb8 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14cc0aeb8 + 1) = (int)DAT_14cc0aeb8[1] + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc0ae80);
  if (lVar3 == 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14bbd45c0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    *param_1 = (longlong)(plVar7 + 2);
    param_1[1] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
      local_38 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
      plStack_30 = (longlong *)param_1[1];
      local_38 = *param_1;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
    }
    FUN_149287df2(param_2,&local_38);
    plVar7 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_149216785;
  }
  else {
    *param_1 = lVar3;
    param_1[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_149216785;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
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
LAB_149216785:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492169c8 FUN_1492169c8 body=224 status=ok
// SIG undefined FUN_1492169c8(void)

undefined8 FUN_1492169c8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17)
                    * 4);
    if (iVar4 != -1) {
      uVar2 = 0;
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x20) == param_2) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (puVar3 == (undefined8 *)0x0 || lVar1 == 0) goto LAB_1492169e6;
          FUN_1492124ed(&local_28);
          (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,&local_30);
          if (local_30 != local_28) goto LAB_1492169e6;
          uVar2 = *puVar3;
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
      goto LAB_1492169e8;
    }
  }
LAB_1492169e6:
  uVar2 = 0;
LAB_1492169e8:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149216aaa FUN_149216aaa body=224 status=ok
// SIG undefined FUN_149216aaa(void)

undefined8 FUN_149216aaa(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17)
                    * 4);
    if (iVar4 != -1) {
      uVar2 = 0;
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x20) == param_2) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (puVar3 == (undefined8 *)0x0 || lVar1 == 0) goto LAB_149216ac8;
          FUN_1492125c3(&local_28);
          (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,&local_30);
          if (local_30 != local_28) goto LAB_149216ac8;
          uVar2 = *puVar3;
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
      goto LAB_149216aca;
    }
  }
LAB_149216ac8:
  uVar2 = 0;
LAB_149216aca:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149216b8c FUN_149216b8c body=224 status=ok
// SIG undefined FUN_149216b8c(void)

undefined8 FUN_149216b8c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17)
                    * 4);
    if (iVar4 != -1) {
      uVar2 = 0;
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x20) == param_2) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (puVar3 == (undefined8 *)0x0 || lVar1 == 0) goto LAB_149216baa;
          FUN_149212558(&local_28);
          (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,&local_30);
          if (local_30 != local_28) goto LAB_149216baa;
          uVar2 = *puVar3;
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
      goto LAB_149216bac;
    }
  }
LAB_149216baa:
  uVar2 = 0;
LAB_149216bac:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149216c6e FUN_149216c6e body=224 status=ok
// SIG undefined FUN_149216c6e(void)

undefined8 FUN_149216c6e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17)
                    * 4);
    if (iVar4 != -1) {
      uVar2 = 0;
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x20) == param_2) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (puVar3 == (undefined8 *)0x0 || lVar1 == 0) goto LAB_149216c8c;
          FUN_14921262e(&local_28);
          (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,&local_30);
          if (local_30 != local_28) goto LAB_149216c8c;
          uVar2 = *puVar3;
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
      goto LAB_149216c8e;
    }
  }
LAB_149216c8c:
  uVar2 = 0;
LAB_149216c8e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149216d50 FUN_149216d50 body=92 status=ok
// SIG undefined FUN_149216d50(void)

void FUN_149216d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd4530;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149216dac FUN_149216dac body=164 status=ok
// SIG undefined FUN_149216dac(void)

void FUN_149216dac(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149216e50 FUN_149216e50 body=107 status=ok
// SIG undefined FUN_149216e50(void)

void FUN_149216e50(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_4[1];
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  *(undefined4 *)(param_6 + 0x10) = *param_4;
  *(undefined4 *)(param_6 + 0x14) = uVar3;
  *(undefined4 *)(param_6 + 0x18) = uVar1;
  *(undefined4 *)(param_6 + 0x1c) = uVar2;
  *(undefined4 *)(param_6 + 0x20) = *(undefined4 *)(param_5 + 0x78);
  uVar3 = FUN_1447addd0(param_2,0x10);
  uVar3 = FUN_144a78877(*(undefined4 *)(param_2 + 0x10),uVar3);
  uVar4 = FUN_1492c8ccc(param_1 + 0x50,uVar3,param_2);
  FUN_1492c8b68(uVar4,param_3,param_6);
  return;
}



// FUNCTION 149216ebc FUN_149216ebc body=107 status=ok
// SIG undefined FUN_149216ebc(void)

void FUN_149216ebc(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_4[1];
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  *(undefined4 *)(param_6 + 0x18) = *param_4;
  *(undefined4 *)(param_6 + 0x1c) = uVar3;
  *(undefined4 *)(param_6 + 0x20) = uVar1;
  *(undefined4 *)(param_6 + 0x24) = uVar2;
  *(undefined4 *)(param_6 + 0x28) = *(undefined4 *)(param_5 + 0x78);
  uVar3 = FUN_1447addd0(param_2,0x10);
  uVar3 = FUN_144a78877(*(undefined4 *)(param_2 + 0x10),uVar3);
  uVar4 = FUN_1492c8ccc(param_1 + 0x50,uVar3,param_2);
  FUN_1492ca0a0(uVar4,param_3,param_6);
  return;
}



// FUNCTION 149216f28 FUN_149216f28 body=107 status=ok
// SIG undefined FUN_149216f28(void)

void FUN_149216f28(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_4[1];
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  *(undefined4 *)(param_6 + 0x20) = *param_4;
  *(undefined4 *)(param_6 + 0x24) = uVar3;
  *(undefined4 *)(param_6 + 0x28) = uVar1;
  *(undefined4 *)(param_6 + 0x2c) = uVar2;
  *(undefined4 *)(param_6 + 0x30) = *(undefined4 *)(param_5 + 0x78);
  uVar3 = FUN_1447addd0(param_2,0x10);
  uVar3 = FUN_144a78877(*(undefined4 *)(param_2 + 0x10),uVar3);
  uVar4 = FUN_1492c8ccc(param_1 + 0x50,uVar3,param_2);
  FUN_1492cb112(uVar4,param_3,param_6);
  return;
}



// FUNCTION 149216f94 FUN_149216f94 body=107 status=ok
// SIG undefined FUN_149216f94(void)

void FUN_149216f94(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_4[1];
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  *(undefined4 *)(param_6 + 0x50) = *param_4;
  *(undefined4 *)(param_6 + 0x54) = uVar3;
  *(undefined4 *)(param_6 + 0x58) = uVar1;
  *(undefined4 *)(param_6 + 0x5c) = uVar2;
  *(undefined4 *)(param_6 + 0x60) = *(undefined4 *)(param_5 + 0x78);
  uVar3 = FUN_1447addd0(param_2,0x10);
  uVar3 = FUN_144a78877(*(undefined4 *)(param_2 + 0x10),uVar3);
  uVar4 = FUN_1492c8ccc(param_1 + 0x50,uVar3,param_2);
  FUN_1492cc202(uVar4,param_3,param_6);
  return;
}



// FUNCTION 149217000 FUN_149217000 body=154 status=ok
// SIG undefined FUN_149217000(void)

void FUN_149217000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd45d8;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492170a4 FUN_1492170a4 body=110 status=ok
// SIG undefined FUN_1492170a4(void)

longlong FUN_1492170a4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_149213002(local_d8,param_3);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1492cd2e8(param_2,local_d8);
  FUN_149217114(local_d8);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149217114 FUN_149217114 body=171 status=ok
// SIG undefined FUN_149217114(void)

void FUN_149217114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb90ef0;
  FUN_145a00245(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1d9ff(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1da2e(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145e1da5d(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1475b1abc(param_1);
  return;
}



// FUNCTION 1492171c0 FUN_1492171c0 body=75 status=ok
// SIG undefined FUN_1492171c0(void)

bool FUN_1492171c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1492171f9;
    }
  }
  lVar2 = 0;
LAB_1492171f9:
  lVar1 = FUN_145b9ef82();
  return lVar2 == lVar1;
}



// FUNCTION 14921720c FUN_14921720c body=296 status=ok
// SIG undefined FUN_14921720c(void)

longlong * FUN_14921720c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)FUN_149217335();
  FUN_1491fbeaa(plVar6,*(undefined8 *)(param_1 + 0x198));
  iVar1 = *(int *)(param_1 + 0x1b0);
  (**(code **)(*plVar6 + 0x2c0))(plVar6,'\x02' - (iVar1 == 0));
  local_50 = FUN_1492174ac;
  local_48 = 0;
  FUN_1492173e4(plVar6 + 0x32,local_40,param_1);
  lVar4 = plVar6[0x2f];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = plVar6[0x2e];
    lVar7 = 0;
    do {
      if ((*(int *)(lVar2 + 8 + lVar7) != 0) &&
         (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) {
        cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
        if (cVar5 != '\0') goto LAB_1492172f3;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar7);
  }
  local_50 = (code *)&LAB_1492175fc;
  local_48 = 0;
  FUN_149217534(plVar6 + 0x2e,local_40,param_1);
LAB_1492172f3:
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1491fe55e(plVar6,*(longlong *)(param_1 + 0x198),iVar1 == 0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149217335 FUN_149217335 body=174 status=ok
// SIG undefined FUN_149217335(void)

undefined8 FUN_149217335(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b9ef82();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1492173e4 FUN_1492173e4 body=199 status=ok
// SIG undefined FUN_1492173e4(void)

undefined8
FUN_1492173e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14bc05610;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bc055a0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1492cd55a(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492174ac FUN_1492174ac body=135 status=ok
// SIG undefined FUN_1492174ac(void)

void FUN_1492174ac(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1492118a0(param_1 + 0x168);
  FUN_140457ffc(param_4 + 0xf8,param_1);
  local_38 = FUN_1492176e0;
  local_30 = 0;
  local_48 = param_3;
  FUN_149217608(param_4 + 0xf8,local_28,param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149217534 FUN_149217534 body=199 status=ok
// SIG undefined FUN_149217534(void)

undefined8
FUN_149217534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14bc056f0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bc05680;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1492cd8b0(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149217608 FUN_149217608 body=214 status=ok
// SIG undefined FUN_149217608(void)

undefined8
FUN_149217608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14bc057d0;
  puVar3[1] = *param_5;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bc05760;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1492cdbf2(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492176e0 FUN_1492176e0 body=378 status=ok
// SIG undefined FUN_1492176e0(void)

void FUN_1492176e0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  char local_58 [4];
  longlong local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x198) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x2f8), lVar2 != 0)) {
    lVar5 = FUN_14449bdee(lVar2,1);
    if (lVar5 != 0) {
      local_4c = CONCAT31(local_4c._1_3_,4);
      uStack_48 = (undefined4)param_4;
      uStack_44 = (undefined4)((ulonglong)param_4 >> 0x20);
      uVar4 = FUN_140813180(lVar2);
      if (((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar2 + 0xc0))) &&
         ((lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)uVar4 * 8), lVar3 != 0 &&
          (*(char *)(lVar3 + 0x10) == '\x04')))) {
        local_68 = CONCAT44(uStack_48,local_4c);
        local_60 = uStack_44;
        FUN_1408130c0(lVar2,local_58);
        lVar2 = param_3[1];
        if ((longlong)(int)lVar2 != 0) {
          lVar3 = *param_3;
          lVar6 = 0;
          do {
            pcVar1 = (char *)(lVar3 + lVar6);
            if ((local_54 != *(longlong *)(lVar3 + 4 + lVar6)) || (local_58[0] != *pcVar1)) {
              local_70 = *(undefined4 *)(pcVar1 + 8);
              local_78 = *(undefined8 *)pcVar1;
              local_88 = CONCAT44(uStack_48,local_4c);
              local_80 = uStack_44;
              local_90 = 0;
              local_98 = 0;
              FUN_1491eaaee(lVar5,&local_88,&local_78,0);
            }
            lVar6 = lVar6 + 0xc;
          } while ((longlong)(int)lVar2 * 0xc != lVar6);
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



// FUNCTION 14921785c FUN_14921785c body=60 status=ok
// SIG undefined FUN_14921785c(void)

void FUN_14921785c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    FUN_1475916a0(param_1 + 0x1a8,0);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 1492178d0 FUN_1492178d0 body=246 status=ok
// SIG undefined FUN_1492178d0(void)

void FUN_1492178d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = (int)param_1[0x36];
  *(uint *)(param_1 + 0x36) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1b4) < iVar1 + 1U) {
    FUN_14759143a(param_1 + 0x35,iVar1);
  }
  *(longlong **)(param_1[0x35] + (longlong)iVar1 * 8) = param_2;
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (param_2 == (longlong *)0x0) goto LAB_14921792b;
  }
  else {
    FUN_1456cec3c(param_2);
  }
  lVar2 = FUN_145b9ef82();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    if (param_1[0x33] != param_2[0x35]) {
      FUN_1491fbeaa(param_2);
    }
    (**(code **)(*param_2 + 0x368))(param_2);
  }
LAB_14921792b:
  if (1 < (int)param_1[0x36]) {
                    /* WARNING: Could not recover jumptable at 0x00014921794d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1492179c6 FUN_1492179c6 body=172 status=ok
// SIG undefined FUN_1492179c6(void)

void FUN_1492179c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_28 = &local_30;
  FUN_1475914c0();
  if (*(longlong *)(param_1 + 0x1a0) != param_2) goto LAB_149217a22;
  if (*(int *)(param_1 + 0x1b0) < 1) {
LAB_149217a5e:
    lVar2 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x1a8);
    lVar2 = *plVar1;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) goto LAB_149217a5e;
      FUN_1456cec3c();
      lVar2 = *plVar1;
    }
  }
  *(longlong *)(param_1 + 0x1a0) = lVar2;
LAB_149217a22:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149217a74 FUN_149217a74 body=236 status=ok
// SIG undefined FUN_149217a74(void)

void FUN_149217a74(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)param_2;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + lVar4 * 8);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  iVar2 = *(int *)(param_1 + 0x1b0);
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x1a8) + lVar4 * 8),
            (void *)(*(longlong *)(param_1 + 0x1a8) + lVar4 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = *(int *)(param_1 + 0x1b0);
  }
  *(int *)(param_1 + 0x1b0) = iVar2 + -1;
  FUN_1475915fe((undefined8 *)(param_1 + 0x1a8));
  if (lVar1 == lVar3) {
    if (*(int *)(param_1 + 0x1b0) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(param_1 + 0x1a8);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
    }
    *(longlong *)(param_1 + 0x1a0) = lVar3;
  }
  return;
}



// FUNCTION 149217b74 FUN_149217b74 body=199 status=ok
// SIG undefined FUN_149217b74(void)

undefined8
FUN_149217b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14bb768f0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bc05840;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1491cea0e(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149217c3c FUN_149217c3c body=36 status=ok
// SIG undefined FUN_149217c3c(void)

void FUN_149217c3c(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    return;
  }
  FUN_149218390(param_1);
  return;
}



// FUNCTION 149217c60 FUN_149217c60 body=187 status=ok
// SIG undefined FUN_149217c60(void)

longlong * FUN_149217c60(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x10)) {
    FUN_149217d1e(param_1 + 8,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_20 = 0;
  FUN_14485c47a(&local_20,lVar2);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1492ce1e8(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149217d1e FUN_149217d1e body=334 status=ok
// SIG undefined FUN_149217d1e(void)

void FUN_149217d1e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1492ce188(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1492ce1e8(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x18 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149217e6e FUN_149217e6e body=667 status=ok
// SIG undefined FUN_149217e6e(void)

void FUN_149217e6e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x1b0))) {
    lVar8 = FUN_145b9ef82();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
         ) == lVar8 + 0x30)) {
      if (*(int *)(param_1 + 0x144) < *(int *)(param_1 + 0x118)) {
        uVar5 = local_78;
        if (*(char *)(param_1 + 0x160) == '\x01') {
          plVar1 = (longlong *)(param_1 + 0x110);
          lVar8 = param_1 + 0x120;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          uStack_50 = 0;
          uStack_60 = lVar8;
          if (*(int *)(param_1 + 0x138) == 0) {
            iVar9 = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            iVar9 = *(int *)(param_1 + 0x138);
          }
          uStack_70 = CONCAT44(uStack_4c,uStack_50);
          local_78 = local_58;
          uVar5 = local_78;
          local_88 = (undefined4)local_68;
          uStack_84 = local_68._4_4_;
          uStack_80 = (undefined4)uStack_60;
          uStack_7c = uStack_60._4_4_;
          local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          local_90 = plVar1;
          if ((local_78._4_4_ != iVar9) || (uStack_60 != lVar8)) {
            iVar7 = local_78._4_4_;
            local_78 = uVar5;
            do {
              if (*(int *)(param_2 + 0x338) != *(int *)(param_2 + 0x364)) {
                lVar3 = *(longlong *)(*local_90 + (longlong)iVar7 * 0x18);
                uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
                uVar12 = (uint)lVar3 & 0xffff;
                lVar11 = *(longlong *)(param_2 + 0x370);
                if (*(longlong *)(param_2 + 0x370) == 0) {
                  lVar11 = param_2 + 0x368;
                }
                iVar10 = *(int *)(lVar11 + (ulonglong)
                                           (*(int *)(param_2 + 0x378) - 1U &
                                           (int)((ulonglong)lVar3 >> 0x20) +
                                           ((uint)lVar3 << 0x10 | uVar12) +
                                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4)) * 4);
                if (iVar10 != -1) {
                  lVar11 = *local_90 + (longlong)iVar7 * 0x18;
                  do {
                    lVar2 = *(longlong *)(param_2 + 0x330) + (longlong)iVar10 * 0x50;
                    if (*(longlong *)(*(longlong *)(param_2 + 0x330) + (longlong)iVar10 * 0x50) ==
                        lVar3) {
                      if (((lVar2 + 8U & 0xfffffffffffffff7) != 0) &&
                         (cVar6 = FUN_1491fe288(param_2,lVar11), cVar6 != '\0')) {
                        FUN_14485c47a(lVar11 + 8,param_2);
                      }
                      break;
                    }
                    iVar10 = *(int *)(lVar2 + 0x48);
                  } while (iVar10 != -1);
                }
              }
              local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
              FUN_1449c0562(&local_88);
              iVar7 = local_78._4_4_;
              uVar5 = local_78;
            } while (local_90 != plVar1 ||
                     (CONCAT44(uStack_7c,uStack_80) != lVar8 || local_78._4_4_ != iVar9));
          }
        }
        local_78 = uVar5;
        plVar1 = *(longlong **)(param_1 + 0x1a8);
        lVar8 = *plVar1;
        if (DAT_14c950c29 == '\x01') {
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar8 = *plVar1;
          }
        }
        *(longlong *)(param_1 + 0x1a0) = lVar8;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(param_1 + 0x1a0) = param_2;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149218130 FUN_149218130 body=474 status=ok
// SIG undefined FUN_149218130(void)

void FUN_149218130(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x198) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x198) + 8) & 0x1600) == 0)) {
    FUN_1400337aa();
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x2b0))(*(longlong **)(param_1 + 0x198),1);
    if ((longlong)*(int *)(param_1 + 0x1b0) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x1a8);
      plVar1 = plVar8 + *(int *)(param_1 + 0x1b0);
      do {
        lVar3 = *plVar8;
        if (lVar3 != 0) {
          lVar6 = FUN_145b9ef82();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            iVar2 = *(int *)(lVar3 + 0x198);
            if ((longlong)iVar2 != 0) {
              lVar6 = *(longlong *)(lVar3 + 400);
              lVar7 = 0;
              do {
                if (((*(int *)(lVar6 + 8 + lVar7) != 0) &&
                    (plVar4 = *(longlong **)(lVar6 + lVar7), plVar4 != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1), cVar5 != '\0'))
                goto LAB_14921823e;
                lVar7 = lVar7 + 0x10;
              } while ((longlong)iVar2 * 0x10 != lVar7);
            }
            local_60 = FUN_1492174ac;
            local_58 = 0;
            FUN_1492173e4(lVar3 + 400,local_50,param_1,&local_60);
LAB_14921823e:
            iVar2 = *(int *)(lVar3 + 0x178);
            if ((longlong)iVar2 != 0) {
              lVar6 = *(longlong *)(lVar3 + 0x170);
              lVar7 = 0;
              do {
                if (((*(int *)(lVar6 + 8 + lVar7) != 0) &&
                    (plVar4 = *(longlong **)(lVar6 + lVar7), plVar4 != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1), cVar5 != '\0'))
                goto LAB_149218284;
                lVar7 = lVar7 + 0x10;
              } while ((longlong)iVar2 * 0x10 != lVar7);
            }
            local_60 = (code *)&LAB_1492175fc;
            local_58 = 0;
            FUN_149217534(lVar3 + 0x170,local_50,param_1,&local_60);
LAB_149218284:
            FUN_1491fe55e(lVar3,*(undefined8 *)(param_1 + 0x198),
                          (*(ushort *)(lVar3 + 0xd9) & 0x1ff) == 0x101);
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921830c FUN_14921830c body=130 status=ok
// SIG undefined FUN_14921830c(void)

void FUN_14921830c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409dad52();
  FUN_149218130(param_1);
  lVar1 = *(longlong *)(param_1 + 0x198);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    local_28 = FUN_149217c3c;
    local_20 = 0;
    FUN_149217b74(lVar1 + 0x5d8,local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149218390 FUN_149218390 body=347 status=ok
// SIG undefined FUN_149218390(void)

void FUN_149218390(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)param_1[0x33];
  if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*plVar3 + 0x408))();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x328))(param_1);
    if ((longlong)(int)plVar3[1] != 0) {
      plVar6 = (longlong *)*plVar3;
      plVar3 = plVar6 + (int)plVar3[1];
      bVar5 = false;
LAB_149218406:
      do {
        lVar1 = *plVar6;
        if (lVar1 != 0) {
          lVar4 = FUN_145b9ef82();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             (cVar2 = FUN_1491fd2f6(lVar1,&local_48), cVar2 != '\0')) {
            FUN_1491fe55e(lVar1,param_1[0x33],(*(ushort *)(lVar1 + 0xd9) & 0x1ff) == 0x101);
            plVar6 = plVar6 + 1;
            bVar5 = true;
            if (plVar6 == plVar3) goto LAB_149218480;
            goto LAB_149218406;
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3);
      if (bVar5) {
LAB_149218480:
        FUN_1475828fe(param_1);
      }
    }
    if (0 < (int)uStack_40) {
      FUN_1492184ec(param_1,local_58);
      FUN_149218662(param_1,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492184ec FUN_1492184ec body=373 status=ok
// SIG undefined FUN_1492184ec(void)

longlong * FUN_1492184ec(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [47];
  char local_69;
  longlong local_68;
  undefined8 uStack_60;
  char local_4a;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x198);
  if ((plVar2 != (longlong *)0x0) && (lVar3 = plVar2[0x5f], lVar3 != 0)) {
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*plVar2 + 0x408))(plVar2,&local_68);
    lVar6 = local_68;
    lVar9 = (longlong)(int)uStack_60;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(lVar6 + lVar10);
        cVar7 = FUN_1491e0d78(lVar3,lVar4);
        if (cVar7 != '\0') {
          FUN_1492189be(param_1,&local_4a,lVar4);
          if (((lVar4 == 0) ||
              (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x2f8) + 0x52c) != '\x01'))
             || (*(char *)(lVar4 + 0x3c1) != '\x01')) {
            bVar8 = 0;
          }
          else {
            local_69 = *(char *)(lVar4 + 0x3c0);
            bVar8 = 1;
          }
          bVar5 = local_4a == local_69;
          if ((local_49 & 1) == 0) {
            bVar5 = local_49 == bVar8;
          }
          if (!(bool)(local_49 == bVar8 & bVar5)) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1446f84a2(param_2,iVar1);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar4 + 0x14);
          }
        }
        lVar10 = lVar10 + 8;
      } while (lVar9 * 8 != lVar10);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149218662 FUN_149218662 body=296 status=ok
// SIG undefined FUN_149218662(void)

void FUN_149218662(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  byte local_3c [3];
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x198) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x2f8) != 0)) &&
     ((longlong)(int)param_2[1] != 0)) {
    lVar5 = *param_2;
    lVar6 = (longlong)(int)param_2[1] << 3;
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x3b0))
                        (*(longlong **)(param_1 + 0x198),lVar5);
      if (lVar2 != 0) {
        FUN_1492189be(param_1,local_3c + 2,lVar2);
        local_3c[1] = 0;
        uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x198) + 0x2f8);
        if ((*(char *)(uVar3 + 0x52c) == '\x01') && (*(char *)(lVar2 + 0x3c1) == '\x01')) {
          local_3c[0] = *(byte *)(lVar2 + 0x3c0);
          uVar3 = (ulonglong)local_3c[0];
          local_3c[1] = 1;
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        bVar1 = local_3c[2] == (char)uVar3;
        if ((local_39 & 1) == 0) {
          bVar1 = local_39 == bVar4;
        }
        if (!(bool)(local_39 == bVar4 & bVar1)) {
          FUN_149218a8c(param_1,lVar5,local_3c);
        }
      }
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921878c FUN_14921878c body=216 status=ok
// SIG undefined FUN_14921878c(void)

void FUN_14921878c(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x198);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x200);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x1f8);
      lVar5 = 0;
      do {
        if ((*(int *)(lVar4 + 8 + lVar5) != 0) &&
           (plVar2 = *(longlong **)(lVar4 + lVar5), plVar2 != (longlong *)0x0)) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') goto LAB_1492187ea;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar5);
      lVar4 = *(longlong *)(param_1 + 0x198);
    }
    local_40 = FUN_149217c3c;
    local_38 = 0;
    FUN_149217b74(lVar4 + 0x5d8,local_30,param_1);
LAB_1492187ea:
    FUN_14472eae2(*(undefined8 *)(param_1 + 0x198),0x40);
  }
  FUN_149218130(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149218866 FUN_149218866 body=342 status=ok
// SIG undefined FUN_149218866(void)

void FUN_149218866(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x198);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    FUN_140457ffc(lVar2 + 0x5d8,param_1);
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x198) = param_2;
  if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
    local_48 = FUN_149217c3c;
    local_40 = 0;
    FUN_149217b74(param_2 + 0x5d8,local_38,param_1);
    plVar4 = *(longlong **)(param_1 + 0x198);
    if (plVar4[4] != param_1) {
      (**(code **)(*plVar4 + 0x170))(plVar4,0,param_1,0);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar5 = FUN_145b9ef82();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          FUN_1491fe55e(lVar3,param_2,(*(ushort *)(lVar3 + 0xd9) & 0x1ff) == 0x101);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492189be FUN_1492189be body=206 status=ok
// SIG undefined FUN_1492189be(void)

void FUN_1492189be(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  *(undefined1 *)((longlong)param_2 + 1) = 0;
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
    lVar1 = *(longlong *)(param_3 + 0x14);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x1f8;
    if (*(longlong *)(param_1 + 0x200) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x200);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x208) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar7 * 0x14);
        if (*plVar3 == lVar1) goto LAB_1492189d5;
        iVar7 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar7 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1492189d5:
  plVar4 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != param_2 && plVar4 != (longlong *)0x0) {
    *(char *)param_2 = (char)*plVar4;
    *(undefined1 *)((longlong)param_2 + 1) = 1;
  }
  return;
}



// FUNCTION 149218a8c FUN_149218a8c body=465 status=ok
// SIG undefined FUN_149218a8c(void)

void FUN_149218a8c(longlong param_1,undefined8 *param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  char local_42;
  byte local_41;
  ulonglong local_40;
  undefined8 *puVar13;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_1 + 0x198);
  if (((plVar4 != (longlong *)0x0) && (plVar4[0x5f] != 0)) &&
     (lVar8 = (**(code **)(*plVar4 + 0x3b0))(), lVar8 != 0)) {
    FUN_1492189be(param_1,&local_42,lVar8);
    bVar1 = param_3[1];
    bVar16 = local_42 == *param_3;
    if ((local_41 & 1) == 0) {
      bVar16 = local_41 == bVar1;
    }
    if (!(bool)(local_41 == bVar1 & bVar16)) {
      uVar5 = *param_2;
      if (bVar1 == 0) {
        FUN_1492ce26e(param_1 + 0x1c0);
      }
      else {
        uVar7 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar14 = (uint)uVar5 & 0xffff;
        puVar13 = param_2;
        pcVar9 = (char *)FUN_1492ce702(param_1 + 0x1c0,
                                       ((uint)uVar5 << 0x10 | uVar14) +
                                       (int)((ulonglong)uVar5 >> 0x20) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar14 >> 4));
        cVar12 = (char)puVar13;
        cVar2 = *param_3;
        *pcVar9 = cVar2;
        if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x2f8) + 0x52c) == '\x01') &&
           (*(char *)(lVar8 + 0x3c1) == '\x01')) {
          cVar12 = *(char *)(lVar8 + 0x3c0);
          cVar11 = '\x01';
        }
        else {
          cVar11 = '\0';
        }
        bVar16 = cVar12 == cVar2;
        if (cVar11 == '\0') {
          bVar16 = cVar11 == param_3[1];
        }
        if (!(bool)(cVar11 == param_3[1] & bVar16)) {
          pcVar9[1] = '\x01';
        }
      }
      iVar3 = *(int *)(param_1 + 0x1b0);
      if ((longlong)iVar3 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x1a8);
        lVar15 = 0;
        do {
          lVar6 = *(longlong *)(lVar8 + lVar15);
          if (lVar6 != 0) {
            lVar10 = FUN_145b9ef82();
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              local_58 = 5;
              FUN_1491ff05c(lVar6,param_2,&local_42,param_3);
            }
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)iVar3 * 8 != lVar15);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149218c5e FUN_149218c5e body=139 status=ok
// SIG undefined FUN_149218c5e(void)

void FUN_149218c5e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x420))(plVar1,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149218cea FUN_149218cea body=14 status=ok
// SIG undefined FUN_149218cea(void)

void FUN_149218cea(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x210) = iVar1;
  return;
}



// FUNCTION 149218cf8 FUN_149218cf8 body=577 status=ok
// SIG undefined FUN_149218cf8(void)

undefined8 FUN_149218cf8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x218);
  local_50 = (undefined8 *)0x0;
  FUN_14485c47a(&local_50);
  local_48 = local_50;
  iVar4 = FUN_1492ce8ce(plVar1,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
  if (((iVar4 != -1) && ((*plVar1 + (longlong)iVar4 * 0x18 + 8U & 0xfffffffffffffff7) != 0)) ||
     (*(longlong *)(param_1 + 0x198) == 0)) goto LAB_149218e7b;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = 0;
  plVar5 = (longlong *)
           FUN_14575d845(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x10),0,0x40);
  (**(code **)(*plVar5 + 0x2b0))(plVar5,1);
  lVar2 = *(longlong *)(param_1 + 0x198);
  if (lVar2 == 0) {
LAB_149218e00:
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x478))();
    *(byte *)(plVar5 + 0x114) = bVar3;
    if (plVar5[0x5f] != 0) {
      *(byte *)(plVar5[0x5f] + 0x52c) = bVar3 ^ 1;
    }
LAB_149218e2b:
    local_58 = plVar5;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar5);
    }
  }
  else {
    lVar6 = FUN_145b9edae();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_149218e00;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = FUN_145b9edae();
      iVar4 = *(int *)(lVar6 + 0x38);
      if ((iVar4 <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar4 * 8) == lVar6 + 0x30)) {
        FUN_1491d5e12(plVar5,CONCAT71((int7)(int3)((uint)iVar4 >> 8),*(undefined1 *)(lVar2 + 0xae0))
                     );
      }
      goto LAB_149218e2b;
    }
    local_58 = (longlong *)0x0;
  }
  local_60 = 0;
  FUN_14485c47a(&local_60,param_2);
  local_40 = &local_58;
  local_48 = &local_60;
  FUN_1492ce988(plVar1,local_34);
LAB_149218e7b:
  local_68 = 0;
  FUN_14485c47a(&local_68,param_2);
  local_48 = (undefined8 *)local_68;
  iVar4 = FUN_1492ce8ce(plVar1,(uint)((ulonglong)local_68 >> 0x20) ^ (uint)local_68);
  if ((iVar4 == -1) ||
     (lVar2 = *plVar1 + (longlong)iVar4 * 0x18, puVar7 = (undefined8 *)(lVar2 + 8),
     puVar7 == (undefined8 *)0x0 || lVar2 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar7;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149218f3a FUN_149218f3a body=334 status=ok
// SIG undefined FUN_149218f3a(void)

bool FUN_149218f3a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = local_68;
  if (param_2 != 0) {
    iVar5 = 0;
    bVar6 = false;
    if (*(int *)(param_1 + 0x220) == *(int *)(param_1 + 0x24c)) goto LAB_14921900e;
    plVar1 = (longlong *)(param_1 + 0x218);
    lVar2 = param_1 + 0x228;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar2;
    if (*(int *)(param_1 + 0x240) != 0) {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0x240);
    }
    local_68 = local_48;
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar5) || (local_50 != lVar2)) {
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        bVar6 = *(longlong *)(*local_80 + 8 + (longlong)iVar4 * 0x18) == param_2;
        if (bVar6) break;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
      } while (local_80 != plVar1 || (local_70 != lVar2 || local_68._4_4_ != iVar5));
      goto LAB_14921900e;
    }
  }
  local_68 = uVar3;
  bVar6 = false;
LAB_14921900e:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 14921908e FUN_14921908e body=118 status=ok
// SIG undefined FUN_14921908e(void)

void FUN_14921908e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219106 FUN_149219106 body=111 status=ok
// SIG undefined FUN_149219106(void)

undefined8 FUN_149219106(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524308(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219176 FUN_149219176 body=96 status=ok
// SIG undefined FUN_149219176(void)

void FUN_149219176(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_14752433e(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492191d8 FUN_1492191d8 body=125 status=ok
// SIG undefined FUN_1492191d8(void)

void FUN_1492191d8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219256 FUN_149219256 body=125 status=ok
// SIG undefined FUN_149219256(void)

void FUN_149219256(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1492192d4(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492192d4 FUN_1492192d4 body=90 status=ok
// SIG undefined FUN_1492192d4(void)

void FUN_1492192d4(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_1492cee62(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14921932e FUN_14921932e body=125 status=ok
// SIG undefined FUN_14921932e(void)

void FUN_14921932e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_1492193ac(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492193ac FUN_1492193ac body=217 status=ok
// SIG undefined FUN_1492193ac(void)

void FUN_1492193ac(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    do {
      iVar2 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar5 * 4));
      if (iVar2 == -1) {
        FUN_147a3fc60(&local_48);
        lVar4 = *param_3;
        uVar3 = local_48;
      }
      else {
        puVar1 = (undefined4 *)(*(longlong *)param_1[3] + (longlong)iVar2 * 0x10);
        local_48 = *puVar1;
        uStack_44 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_3c = puVar1[3];
        uVar3 = FUN_1492cefc2(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar2 * 4),
                              &local_48);
        FUN_147524308(param_1,&local_4c,uVar3);
        lVar4 = *param_3;
        uVar3 = local_4c;
      }
      *(undefined4 *)(lVar4 + lVar5 * 4) = uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149219486 FUN_149219486 body=238 status=ok
// SIG undefined FUN_149219486(void)

void FUN_149219486(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_149219576();
  FUN_140861d3c(local_78,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_60 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_78,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_1492cf0f8(local_78,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  FUN_149219576(param_1,local_58);
  FUN_1492195d4(param_1,local_58 + 2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149219576 FUN_149219576 body=93 status=ok
// SIG undefined FUN_149219576(void)

void FUN_149219576(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)(param_2 + 0xc) < 0) {
      FUN_14920a7da(param_2,0);
    }
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar1 = (longlong)*(int *)(param_1 + 0x68) << 4;
      lVar2 = *(longlong *)(param_1 + 0x60) + 4;
      do {
        FUN_149197016(param_2,lVar2);
        lVar2 = lVar2 + 0x10;
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
  }
  return;
}



// FUNCTION 1492195d4 FUN_1492195d4 body=379 status=ok
// SIG undefined FUN_1492195d4(void)

void FUN_1492195d4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_2 + 1) != (int)param_3[1]) ||
      (cVar3 = FUN_1492109ce(*param_2), cVar3 == '\0')) &&
     ((longlong)*(int *)(param_1 + 0x100) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0xf8) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar5) != 0)) {
        local_58 = 0;
        uStack_50 = 0;
        if ((longlong)*(int *)(param_2 + 1) != 0) {
          pcVar6 = (char *)*param_2;
          pcVar1 = pcVar6 + (longlong)*(int *)(param_2 + 1) * 0xc;
          do {
            uVar2 = uStack_50;
            if ((longlong)(int)param_3[1] != 0) {
              lVar5 = 0;
              do {
                if ((*(longlong *)(*param_3 + 4 + lVar5) == *(longlong *)(pcVar6 + 4)) &&
                   (*(char *)(*param_3 + lVar5) == *pcVar6)) goto LAB_1492196ef;
                lVar5 = lVar5 + 0xc;
              } while ((longlong)(int)param_3[1] * 0xc != lVar5);
            }
            lVar5 = (longlong)(int)uStack_50;
            uVar4 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
            if (uStack_50._4_4_ < uVar4) {
              FUN_149192788(&local_58,uVar2 & 0xffffffff);
            }
            *(undefined4 *)(local_58 + 8 + lVar5 * 0xc) = *(undefined4 *)(pcVar6 + 8);
            *(undefined8 *)(local_58 + lVar5 * 0xc) = *(undefined8 *)pcVar6;
LAB_1492196ef:
            pcVar6 = pcVar6 + 0xc;
          } while (pcVar6 != pcVar1);
          if ((int)uStack_50 != 0) {
            FUN_1492cf282(param_1 + 0xf8,param_1,&local_58);
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x100) * 0x10 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149219750 FUN_149219750 body=413 status=ok
// SIG undefined FUN_149219750(void)

void FUN_149219750(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_149219576();
  lVar1 = param_1 + 0x70;
  plVar2 = (longlong *)(param_1 + 0x60);
  plVar3 = (longlong *)(param_1 + 0x50);
  FUN_140861d3c(local_88,param_1,plVar3,lVar1);
  local_70 = plVar2;
  if (0 < *(int *)(local_88[0] + 8)) {
    uVar8 = *(uint *)(param_1 + 0x58);
    if (uVar8 == 0) {
      local_98 = local_98 & 0xffffff00;
      uStack_94 = uStack_94 & 0xffffff00;
      uStack_90 = 0;
    }
    else {
      uVar9 = 0;
      if (0 < (int)uVar8) {
        uVar9 = 0;
        do {
          uVar4 = (uVar8 >> 1) + uVar9;
          if (*(int *)(*plVar3 + (ulonglong)uVar4 * 4) <= param_2) {
            uVar9 = uVar4 + (uVar8 & 1);
          }
          bVar6 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar6);
      }
      uVar7 = 1;
      if (1 < (int)uVar9) {
        uVar7 = (ulonglong)uVar9;
      }
      puVar5 = (uint *)(*plVar2 + -0x10 + uVar7 * 0x10);
      local_98 = *puVar5;
      uStack_94 = puVar5[1];
      uStack_90 = *(undefined8 *)(puVar5 + 2);
    }
    FUN_140861d3c(local_88,param_1,plVar3,lVar1);
    local_70 = plVar2;
    FUN_1492198ee(local_88,local_9c,param_2,&local_98);
  }
  FUN_140861d3c(local_88,param_1,plVar3,lVar1);
  local_70 = plVar2;
  FUN_149219950(local_88,param_2,param_3);
  FUN_149219576(param_1,local_68);
  FUN_1492195d4(param_1,local_68 + 2,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492198ee FUN_1492198ee body=98 status=ok
// SIG undefined FUN_1492198ee(void)

undefined8 FUN_1492198ee(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = FUN_147525ee8(param_1,param_3,0);
  if (iVar5 == -1) {
    iVar5 = FUN_1492cefc2(param_1,param_3,param_4);
  }
  else {
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    puVar1 = (undefined4 *)(**(longlong **)(param_1 + 0x18) + (longlong)iVar5 * 0x10);
    *puVar1 = *param_4;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
  }
  FUN_147524308(param_1,param_2,iVar5);
  return param_2;
}



// FUNCTION 149219950 FUN_149219950 body=353 status=ok
// SIG undefined FUN_149219950(void)

void FUN_149219950(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1492199db;
      }
      else if (iVar2 < param_2) {
LAB_1492199db:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_1492cf0f8(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149219ab2 FUN_149219ab2 body=108 status=ok
// SIG undefined FUN_149219ab2(void)

void FUN_149219ab2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219b58 FUN_149219b58 body=89 status=ok
// SIG undefined FUN_149219b58(void)

void FUN_149219b58(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_1492cf252(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 149219bb2 FUN_149219bb2 body=96 status=ok
// SIG undefined FUN_149219bb2(void)

void FUN_149219bb2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219c22 FUN_149219c22 body=244 status=ok
// SIG undefined FUN_149219c22(void)

void FUN_149219c22(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149219d18(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219d18 FUN_149219d18 body=161 status=ok
// SIG undefined FUN_149219d18(void)

undefined4 FUN_149219d18(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_14921b3a6(&local_78,param_1);
  uVar1 = FUN_14921b864(&local_78,param_2);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219dba FUN_149219dba body=143 status=ok
// SIG undefined FUN_149219dba(void)

void FUN_149219dba(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14921bd12(param_1 + 0x28,&local_28);
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



// FUNCTION 149219e4a FUN_149219e4a body=307 status=ok
// SIG undefined FUN_149219e4a(void)

void FUN_149219e4a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14921a5b0(puVar1,local_80,1);
  FUN_145ce10f6(&local_78);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149219f8a FUN_149219f8a body=360 status=ok
// SIG undefined FUN_149219f8a(void)

void FUN_149219f8a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = local_30;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_38 != 0);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14921ad90(param_1 + 0x28,local_30,iVar1 != 0,uVar3 & 0xffffffff);
  (**(code **)(*plVar2 + 0x2c0))(plVar2);
  FUN_14921ad90(param_1 + 0x28,plVar2,iVar1 != 0,uVar3 & 0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921a0f4 FUN_14921a0f4 body=272 status=ok
// SIG undefined FUN_14921a0f4(void)

void FUN_14921a0f4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_30;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14921bbee(param_1 + 0x28,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921a20c FUN_14921a20c body=239 status=ok
// SIG undefined FUN_14921a20c(void)

void FUN_14921a20c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14921a5b0(param_1 + 0x28,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921a302 FUN_14921a302 body=235 status=ok
// SIG undefined FUN_14921a302(void)

void FUN_14921a302(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14921a3ee(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921a3ee FUN_14921a3ee body=445 status=ok
// SIG undefined FUN_14921a3ee(void)

void FUN_14921a3ee(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)(*param_2 + 0x418))(param_2);
  FUN_14921bd12(param_1 + 0x28,&local_f8);
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  if (param_3 != '\0') {
    FUN_14921b3a6(&local_88,param_2);
    FUN_14921a5b0(&local_e8,param_2,1);
  }
  if ((longlong)local_f0 != 0) {
    lVar4 = (longlong)local_f0 << 3;
    puVar3 = local_f8;
    do {
      if (param_3 == '\0') {
        (**(code **)(*param_2 + 0x410))(param_2,puVar3,1);
      }
      else {
        puVar1 = (undefined8 *)FUN_14921b65e(&local_88,&local_e8,*puVar3);
        puVar2 = puVar3;
        if (puVar1 != (undefined8 *)0x0) {
          puVar2 = puVar1;
        }
        (**(code **)(*param_2 + 0x410))(param_2,puVar2,1);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_145ce10f6(&local_e8);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_88);
  if (local_f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921a5b0 FUN_14921a5b0 body=1119 status=ok
// SIG undefined FUN_14921a5b0(void)

void FUN_14921a5b0(longlong *param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  char cVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_3f8 [32];
  undefined1 local_3d8;
  undefined1 local_3d0;
  undefined1 local_3c8;
  longlong *local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined1 local_398 [8];
  undefined4 local_390;
  char local_388 [4];
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  char local_134 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_128 = 0;
  uStack_120 = 0;
  (**(code **)(*param_2 + 0x408))(param_2,&local_128);
  local_3c0 = param_1;
  FUN_14921aa10(param_1);
  lVar16 = local_128;
  lVar20 = (longlong)(int)uStack_120;
  if (lVar20 != 0) {
    lVar19 = 0;
    do {
      lVar3 = *(longlong *)(lVar16 + lVar19);
      cVar17 = FUN_1491e0d78(param_2[0x5f],lVar3);
      if ((cVar17 != '\0') &&
         ((param_3 != '\0' ||
          (cVar17 = (**(code **)(*param_2 + 0x428))(param_2,lVar3 + 0x14), cVar17 != '\0')))) {
        puVar1 = (undefined8 *)(lVar3 + 0x10);
        FUN_1491dba48(param_2[0x5f],local_134,puVar1,1);
        FUN_1491da766(local_388);
        if (CONCAT44(uStack_12c,uStack_130) == CONCAT44(uStack_380,uStack_384)) {
          if (local_134[0] == local_388[0]) {
            FUN_14921aa7c(local_388,lVar3,param_2[0x5f]);
            plVar5 = local_3c0;
            iVar2 = (int)local_3c0[1];
            *(uint *)(local_3c0 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)local_3c0 + 0xc) < iVar2 + 1U) {
              FUN_1492cf3cc(local_3c0,iVar2);
            }
            memcpy((void *)((longlong)iVar2 * 0x220 + *plVar5),local_388,0x220);
            goto LAB_14921a704;
          }
        }
        lVar4 = param_2[0x5f];
        local_138 = *(undefined4 *)(lVar3 + 0x18);
        local_140 = *puVar1;
        uVar18 = FUN_140813180(lVar4,&local_140);
        FUN_14486750c(lVar4,local_388,uVar18,0);
        uVar15 = uStack_330;
        uVar14 = local_338;
        uVar13 = uStack_340;
        uVar12 = local_348;
        uVar11 = uStack_350;
        uVar10 = local_358;
        uVar9 = uStack_360;
        uVar8 = local_368;
        uVar7 = uStack_370;
        uVar6 = local_378;
        local_148 = *(undefined4 *)(lVar3 + 0x18);
        local_150 = *puVar1;
        FUN_1491dcda0(param_2[0x5f],&local_150,0,1);
        lVar4 = param_2[0x5f];
        local_160 = *puVar1;
        local_158 = *(undefined4 *)(lVar3 + 0x18);
        uVar18 = FUN_140813180(lVar4,&local_160);
        plVar5 = local_3c0;
        local_3c8 = 0;
        local_3d0 = 0;
        local_3d8 = 1;
        FUN_144831e8e(lVar4,uVar18,local_388,0);
        (**(code **)(*param_2 + 0x2c0))(param_2);
        FUN_14921aa7c(local_388,lVar3,param_2[0x5f]);
        iVar2 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
          FUN_1492cf3cc(plVar5,iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 0x220 + *plVar5),local_388,0x220);
        local_390 = uStack_12c;
        local_3a0 = *(undefined4 *)(lVar3 + 0x18);
        local_3a8 = *puVar1;
        local_3d8 = 1;
        FUN_149190650(param_2[0x5f],&local_3a8,local_398,0);
        lVar4 = param_2[0x5f];
        local_3b8 = *puVar1;
        local_3b0 = *(undefined4 *)(lVar3 + 0x18);
        local_108 = uVar6;
        uStack_100 = uVar7;
        local_f8 = uVar8;
        uStack_f0 = uVar9;
        local_e8 = uVar10;
        uStack_e0 = uVar11;
        local_d8 = uVar12;
        uStack_d0 = uVar13;
        local_c8 = uVar14;
        uStack_c0 = uVar15;
        uVar18 = FUN_140813180(lVar4,&local_3b8);
        local_3c8 = 0;
        local_3d0 = 0;
        local_3d8 = 1;
        FUN_144831e8e(lVar4,uVar18,local_118,0);
      }
LAB_14921a704:
      lVar19 = lVar19 + 8;
    } while (lVar20 * 8 != lVar19);
  }
  FUN_14921acee(local_3c0);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921aa10 FUN_14921aa10 body=107 status=ok
// SIG undefined FUN_14921aa10(void)

void FUN_14921aa10(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_1492cf3cc(param_1,iVar1);
    }
    FUN_1492cf331((longlong)iVar1 * 0x220 + *param_1,-iVar1);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1492cf460(param_1);
  return;
}



// FUNCTION 14921aa7c FUN_14921aa7c body=624 status=ok
// SIG undefined FUN_14921aa7c(void)

undefined8 * FUN_14921aa7c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  memset(param_1 + 2,0,0x8c);
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3ff00000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3ff00000;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3ff00000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ff00000;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3ff00000;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  local_100 = param_1 + 0x38;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3ff00000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3ff00000;
  param_1[0x42] = 0x3ff0000000000000;
  param_1[0x43] = 0;
  *param_1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x211);
  local_108 = 1;
  FUN_1444a0032(param_3,&local_e8,param_2,1);
  memcpy(param_1 + 3,&local_e8,0x84);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_f0 = *(undefined4 *)(param_2 + 0x18);
  FUN_1408130c0(param_3,&local_e8);
  *(undefined4 *)((longlong)param_1 + 0x14) = local_e0;
  *(undefined8 *)((longlong)param_1 + 0xc) = local_e8;
  FUN_1401261c4(param_3,&local_e8,param_2,1);
  puVar2 = &local_e8;
  puVar3 = param_1 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14449ec9a(param_3,&local_e8,param_2,3);
  puVar2 = &local_e8;
  puVar3 = param_1 + 0x20;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1401571e4(param_3,&local_e8,param_2,1);
  puVar2 = &local_e8;
  puVar3 = param_1 + 0x2c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1401571e4(param_3,&local_e8,param_2,3);
  puVar2 = &local_e8;
  puVar3 = local_100;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921acee FUN_14921acee body=160 status=ok
// SIG undefined FUN_14921acee(void)

void FUN_14921acee(longlong *param_1)

{
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14005eae2(param_1 + 2);
  local_4c = 0;
  if (0 < (int)param_1[1]) {
    do {
      local_48 = (longlong)local_4c * 0x220 + *param_1;
      local_40 = &local_4c;
      FUN_140171856(param_1 + 2,local_34,&local_48,0);
      local_4c = local_4c + 1;
    } while (local_4c < (int)param_1[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921ad90 FUN_14921ad90 body=1557 status=ok
// SIG undefined FUN_14921ad90(void)

void FUN_14921ad90(undefined8 param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  undefined1 local_290;
  undefined1 local_288;
  undefined1 local_280;
  char local_269;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_248 [8];
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  char local_1b4 [4];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_190 [4];
  undefined8 local_18c;
  undefined8 local_184;
  undefined1 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_18c = 0x7f7fffff000001ff;
  local_184 = 0;
  local_17c = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_260 = param_1;
  local_190[0] = param_3;
  if (param_4 != '\0') {
    FUN_14921b3a6(&local_e8,param_2);
  }
  local_1a8 = 0;
  uStack_1a0 = 0;
  (**(code **)(*param_2 + 0x408))(param_2,&local_1a8);
  lVar3 = local_1a8;
  lVar9 = (longlong)(int)uStack_1a0;
  if (lVar9 != 0) {
    lVar8 = 0;
    local_269 = param_4;
    do {
      lVar7 = *(longlong *)(lVar3 + lVar8);
      puVar1 = (undefined8 *)(lVar7 + 0x14);
      cVar4 = (**(code **)(*param_2 + 0x428))(param_2,puVar1);
      if ((cVar4 == '\0') || (lVar6 = FUN_14921b65e(&local_e8,local_260,*puVar1), lVar6 == 0))
      goto LAB_14921aed0;
      local_268 = (undefined8 *)(lVar7 + 0x10);
      FUN_1491dba48(param_2[0x5f],local_1b4,local_268,1);
      FUN_1491da766(&local_178);
      bVar11 = CONCAT44(uStack_1ac,uStack_1b0) != CONCAT44(uStack_170,uStack_174);
      bVar12 = local_1b4[0] != (char)local_178;
      if (bVar12 || bVar11) {
        local_1b8 = *(undefined4 *)(local_268 + 1);
        local_1c0 = *local_268;
        FUN_1491dcda0(param_2[0x5f],&local_1c0,0,1);
        (**(code **)(*param_2 + 0x2c0))(param_2);
      }
      switch(*(undefined1 *)(lVar7 + 0x211)) {
      case 0:
        uVar2 = *(undefined1 *)(lVar6 + 0x18);
        memset(&local_178,0,0x84);
        local_fc._0_5_ = CONCAT14(1,(undefined4)local_fc);
        local_178 = CONCAT31(local_178._1_3_,uVar2);
        lVar7 = *param_2;
        goto LAB_14921b085;
      case 1:
      case 10:
        local_178 = *(undefined4 *)(lVar6 + 0x18);
        uStack_174 = 0;
        uStack_170 = 0;
        break;
      case 2:
        local_178 = *(undefined4 *)(lVar6 + 0x18);
        uStack_174 = 0;
        uStack_170 = 0;
        break;
      case 3:
        uStack_170 = *(undefined4 *)(lVar6 + 0x20);
        local_178 = (undefined4)*(undefined8 *)(lVar6 + 0x18);
        uStack_174 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        if (local_269 == '\0') {
          puVar10 = (undefined8 *)(lVar6 + 0x160);
        }
        else {
          local_178 = 0;
          uStack_174 = 0;
          uStack_170 = 0;
          uStack_16c = 0;
          local_168 = 0;
          uStack_164 = 0;
          uStack_15c = 0x3ff00000;
          local_158 = 0;
          uStack_154 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          local_148 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          local_138 = 0;
          uStack_134 = 0x3ff00000;
          uStack_130 = 0;
          uStack_12c = 0x3ff00000;
          local_128 = 0;
          uStack_124 = 0x3ff00000;
          uStack_120 = 0;
          uStack_11c = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_218 = 0;
          uStack_214 = 0;
          uStack_210 = 0;
          uStack_20c = 0x3ff00000;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_1e8 = 0x3ff0000000000000;
          uStack_1e0 = 0x3ff0000000000000;
          local_1d8 = 0x3ff0000000000000;
          uStack_1d0 = 0;
          uVar5 = FUN_14921b864(&local_e8,lVar6);
          puVar10 = &local_228;
          FUN_14921b8f0(lVar6,uVar5,&local_178,puVar10);
        }
        local_298 = local_190;
        local_288 = 1;
        local_290 = 0;
        (**(code **)(*param_2 + 1000))(param_2,puVar1,puVar10,1);
      default:
        goto switchD_14921afad_default;
      }
      local_fc = 0x100000000;
      uStack_118 = 0;
      uStack_11c = 0;
      uStack_120 = 0;
      uStack_124 = 0;
      local_128 = 0;
      uStack_12c = 0;
      uStack_130 = 0;
      uStack_134 = 0;
      local_138 = 0;
      uStack_13c = 0;
      uStack_140 = 0;
      uStack_144 = 0;
      local_148 = 0;
      uStack_14c = 0;
      uStack_150 = 0;
      uStack_154 = 0;
      local_158 = 0;
      uStack_15c = 0;
      local_168 = 0;
      uStack_16c = 0;
      uStack_104 = 0;
      local_10c = 0;
      uStack_114 = 0;
      uStack_164 = 0;
      lVar7 = *param_2;
LAB_14921b085:
      local_298 = local_190;
      local_280 = 0;
      local_288 = 0;
      local_290 = 0;
      (**(code **)(lVar7 + 0x3d8))(param_2,puVar1,&local_178,1);
switchD_14921afad_default:
      puVar10 = local_268;
      if (bVar12 || bVar11) {
        lVar7 = param_2[0x5f];
        local_230 = *(undefined4 *)(local_268 + 1);
        local_238 = *local_268;
        uVar5 = FUN_140813180(lVar7,&local_238);
        FUN_14486750c(lVar7,&local_178,uVar5,0);
        local_240 = uStack_1ac;
        local_258 = *puVar10;
        local_250 = *(undefined4 *)(puVar10 + 1);
        local_298 = (undefined1 *)CONCAT71(local_298._1_7_,1);
        FUN_149190650(param_2[0x5f],&local_258,local_248,0);
        local_280 = 1;
        local_288 = 0;
        local_290 = 0;
        local_298 = local_190;
        FUN_14919a73e(param_2,puVar1,&local_178,1);
      }
LAB_14921aed0:
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 != lVar8);
  }
  if (local_1a8 != 0) {
    FUN_1400020a8(local_1a8);
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_e8);
  if ((local_90 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921b3a6 FUN_14921b3a6 body=694 status=ok
// SIG undefined FUN_14921b3a6(void)

void FUN_14921b3a6(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  size_t sVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  int local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)FUN_145b14440();
  lVar6 = plVar3[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar6 = plVar3[0x22];
  }
  FUN_14574b114(param_1);
  if (param_2 != (longlong *)0x0 && lVar6 != 0) {
    (**(code **)(*param_2 + 0x3a8))(param_2,&local_70);
    lVar1 = local_70;
    if ((longlong)local_68 != 0) {
      lVar9 = 0;
      do {
        puVar4 = (undefined8 *)FUN_1491d6546(*(undefined8 *)(lVar1 + lVar9));
        local_80 = (undefined2 *)0x0;
        local_78 = *(int *)(puVar4 + 1);
        lVar10 = (longlong)local_78;
        _Src = (void *)*puVar4;
        if (lVar10 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,_Src,lVar10 * 2);
        }
        pwVar11 = L"";
        if (*(int *)(lVar6 + 0x30) != 0) {
          pwVar11 = *(wchar_t **)(lVar6 + 0x28);
        }
        if (pwVar11 == (wchar_t *)0x0) {
LAB_14921b5a7:
          pwVar11 = L"";
          if (*(int *)(lVar6 + 0x40) != 0) {
            pwVar11 = *(wchar_t **)(lVar6 + 0x38);
          }
          if (pwVar11 != (wchar_t *)0x0) {
            sVar5 = wcslen(pwVar11);
            local_b0 = 0xffffffff;
            local_b8 = 0;
            iVar2 = FUN_1447ee042(&local_80,pwVar11,sVar5 & 0xffffffff,1);
            if (iVar2 != -1) {
              puVar8 = &DAT_149dfb77a;
              if (*(int *)(lVar6 + 0x30) != 0) {
                puVar8 = *(undefined2 **)(lVar6 + 0x28);
              }
              puVar7 = &DAT_149dfb77a;
              if (*(int *)(lVar6 + 0x40) != 0) {
                puVar7 = *(undefined2 **)(lVar6 + 0x38);
              }
              goto LAB_14921b4f8;
            }
          }
        }
        else {
          sVar5 = wcslen(pwVar11);
          local_b0 = 0xffffffff;
          local_b8 = 0;
          iVar2 = FUN_1447ee042(&local_80,pwVar11,sVar5 & 0xffffffff,1);
          if (iVar2 == -1) goto LAB_14921b5a7;
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(lVar6 + 0x40) != 0) {
            puVar8 = *(undefined2 **)(lVar6 + 0x38);
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(lVar6 + 0x30) != 0) {
            puVar7 = *(undefined2 **)(lVar6 + 0x28);
          }
LAB_14921b4f8:
          local_b8 = 1;
          FUN_140807d8e(&local_80,&local_90,puVar7,puVar8);
          puVar8 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar8 = local_80;
          }
          FUN_1446f470e(local_98,puVar8,1);
          puVar8 = &DAT_149dfb77a;
          if (local_88 != 0) {
            puVar8 = local_90;
          }
          FUN_1446f470e(local_a0,puVar8,1);
          local_58 = local_98;
          local_60 = local_a0;
          FUN_140906722(param_1,local_4c,&local_60,0);
          if (local_90 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)local_68 * 8 != lVar9);
    }
    if (local_70 != 0) {
      FUN_1400020a8(local_70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921b65e FUN_14921b65e body=518 status=ok
// SIG undefined FUN_14921b65e(void)

longlong FUN_14921b65e(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (int)((ulonglong)param_3 >> 0x20);
  uVar6 = (ushort)((ulonglong)param_3 >> 0x10);
  uVar5 = (ushort)param_3;
  if (*(int *)((longlong)param_1 + 0x34) < (int)param_1[1]) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    iVar7 + ((int)param_3 << 0x10 | (uint)uVar5) +
                    ((uint)uVar6 << 0x13 | (uint)uVar6) + (uint)(uVar5 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*plVar3 == param_3) {
          if ((plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) &&
             ((int)param_2[3] != *(int *)((longlong)param_2 + 0x44))) {
            lVar4 = plVar3[1];
            uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
            uVar8 = (uint)lVar4 & 0xffff;
            plVar3 = param_2 + 9;
            if ((longlong *)param_2[10] != (longlong *)0x0) {
              plVar3 = (longlong *)param_2[10];
            }
            iVar2 = *(int *)((longlong)plVar3 +
                            (ulonglong)
                            ((int)param_2[0xb] - 1U &
                            (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar8) +
                            (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
            if (iVar2 != -1) {
              goto LAB_14921b7d7;
            }
          }
          break;
        }
        iVar2 = (int)plVar3[2];
      } while (iVar2 != -1);
    }
  }
  goto LAB_14921b6d7;
  while (iVar2 = *(int *)((longlong)plVar3 + 0xc), iVar2 != -1) {
LAB_14921b7d7:
    plVar3 = (longlong *)(param_2[2] + (longlong)iVar2 * 0x14);
    if (*plVar3 == lVar4) {
      if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
        iVar2 = (int)plVar3[1];
        lVar4 = (longlong)iVar2;
        if ((-1 < lVar4) && (iVar2 < (int)param_2[1])) goto LAB_14921b829;
      }
      break;
    }
  }
LAB_14921b6d7:
  if ((int)param_2[3] != *(int *)((longlong)param_2 + 0x44)) {
    plVar3 = param_2 + 9;
    if ((longlong *)param_2[10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[10];
    }
    iVar7 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_2[0xb] - 1U &
                    iVar7 + ((int)param_3 << 0x10 | (uint)uVar5) +
                    ((uint)uVar6 << 0x13 | (uint)uVar6) + (uint)(uVar5 >> 4)) * 4);
    if (iVar7 != -1) {
      while (plVar3 = (longlong *)(param_2[2] + (longlong)iVar7 * 0x14), *plVar3 != param_3) {
        iVar7 = *(int *)((longlong)plVar3 + 0xc);
        if (iVar7 == -1) {
          return 0;
        }
      }
      if (plVar3 + 1 == (longlong *)0x0 || plVar3 == (longlong *)0x0) {
        return 0;
      }
      iVar7 = (int)plVar3[1];
      lVar4 = (longlong)iVar7;
      if (lVar4 < 0) {
        return 0;
      }
      if ((int)param_2[1] <= iVar7) {
        return 0;
      }
LAB_14921b829:
      return lVar4 * 0x220 + *param_2;
    }
  }
  return 0;
}



// FUNCTION 14921b864 FUN_14921b864 body=139 status=ok
// SIG undefined FUN_14921b864(void)

undefined8 FUN_14921b864(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) < (int)param_1[1]) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == lVar1) {
          if (((ulonglong)(plVar4 + 1) & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14921b8f0 FUN_14921b8f0 body=765 status=ok
// SIG undefined FUN_14921b8f0(void)

void FUN_14921b8f0(longlong param_1,byte param_2,double *param_3,double *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  longlong *plVar10;
  void *pvVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  double *pdVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined1 local_160;
  undefined1 local_15f;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138 [12];
  undefined8 local_d8 [13];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar10 = (longlong *)FUN_145b14440();
  lVar18 = plVar10[0x22];
  if (lVar18 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar18 = plVar10[0x22];
  }
  puVar16 = (undefined8 *)(param_1 + 0x1c0);
  puVar17 = local_d8;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  memmove(param_3,(undefined8 *)(param_1 + 0x1c0),0x60);
  puVar16 = (undefined8 *)(param_1 + 0x160);
  puVar17 = local_138;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  pdVar15 = param_4;
  pvVar11 = memmove(param_4,(undefined8 *)(param_1 + 0x160),0x60);
  param_2 = lVar18 == 0 | param_2;
  if (param_2 != 0) goto LAB_14921b9bf;
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[1] - DAT_14c8463d8));
  auVar7._8_4_ = (int)lVar14;
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*param_3 - DAT_14c8463d0));
  auVar7._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  uVar9 = movmskpd((int)CONCAT71((int7)((ulonglong)pvVar11 >> 8),param_2),auVar7);
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[3] - DAT_14c8463e8));
  auVar4._8_4_ = (int)lVar14;
  auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[2] - DAT_14c8463e0));
  auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  iVar12 = movmskpd((int)pdVar15,auVar4);
  uVar13 = iVar12 << 2 | uVar9;
  if (uVar13 == 0) {
LAB_14921bb6f:
    lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(param_4[1] - DAT_14c8463d8));
    auVar8._8_4_ = (int)lVar14;
    auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*param_4 - DAT_14c8463d0));
    auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar9 = movmskpd(uVar9,auVar8);
    lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(param_4[3] - DAT_14c8463e8));
    auVar6._8_4_ = (int)lVar14;
    auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(param_4[2] - DAT_14c8463e0));
    auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar12 = movmskpd(0,auVar6);
    uVar13 = iVar12 << 2 | uVar9;
    if (uVar13 == 0) goto LAB_14921b9bf;
    auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + param_4[1]));
    auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + *param_4));
    iVar12 = movmskpd(uVar9,auVar2);
    auVar1._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + param_4[3]));
    auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + param_4[2]));
    uVar9 = movmskpd(uVar13,auVar1);
    if ((uVar9 & 0x3fffffff) == 0 && iVar12 == 0) goto LAB_14921b9bf;
  }
  else {
    lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[1] + DAT_14c8463d8));
    auVar5._8_4_ = (int)lVar14;
    auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*param_3 + DAT_14c8463d0));
    auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar9 = movmskpd(uVar9,auVar5);
    auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[3] + DAT_14c8463e8));
    auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[2] + DAT_14c8463e0));
    uVar13 = movmskpd(uVar13,auVar3);
    if ((uVar13 & 0x3fffffff) == 0 && uVar9 == 0) goto LAB_14921bb6f;
  }
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_160 = *(undefined1 *)(lVar18 + 0x48);
  local_15f = *(undefined1 *)(lVar18 + 0x49);
  FUN_14915a206(&local_160,&local_1c8,local_d8);
  param_3[4] = local_1a8;
  param_3[5] = dStack_1a0;
  param_3[6] = local_198;
  param_3[7] = 0.0;
  *(undefined4 *)param_3 = local_1c8;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_1c4;
  *(undefined4 *)(param_3 + 1) = uStack_1c0;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1bc;
  *(undefined4 *)(param_3 + 2) = local_1b8;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_1b4;
  *(undefined4 *)(param_3 + 3) = uStack_1b0;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_1ac;
  FUN_14915a206(&local_160,&local_228,local_138);
  param_4[4] = local_208;
  param_4[5] = dStack_200;
  param_4[6] = local_1f8;
  param_4[7] = 0.0;
  *(undefined4 *)param_4 = local_228;
  *(undefined4 *)((longlong)param_4 + 4) = uStack_224;
  *(undefined4 *)(param_4 + 1) = uStack_220;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_21c;
  *(undefined4 *)(param_4 + 2) = local_218;
  *(undefined4 *)((longlong)param_4 + 0x14) = uStack_214;
  *(undefined4 *)(param_4 + 3) = uStack_210;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_20c;
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
LAB_14921b9bf:
  if ((local_70 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921bbee FUN_14921bbee body=291 status=ok
// SIG undefined FUN_14921bbee(void)

void FUN_14921bbee(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    plVar6 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[10];
    }
    iVar8 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0xb] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      plVar6 = param_1 + 2;
      do {
        plVar1 = (longlong *)(*plVar6 + (longlong)iVar8 * 0x14);
        if (*plVar1 == lVar2) {
          plVar5 = plVar1 + 1;
          if ((plVar5 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
             (-1 < (longlong)(int)*plVar5)) {
            lVar2 = *param_1;
            lVar4 = (longlong)(int)*plVar5 * 0x220;
            *(undefined8 *)(lVar2 + lVar4) = *param_3;
            FUN_140c0508e(plVar6,*param_2);
            local_38 = lVar2 + lVar4;
            local_30 = plVar5;
            FUN_140171856(plVar6,local_24,&local_38,0);
          }
          break;
        }
        iVar8 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921bd12 FUN_14921bd12 body=136 status=ok
// SIG undefined FUN_14921bd12(void)

longlong * FUN_14921bd12(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = (int)param_1[1];
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_1402191ca(param_2);
      lVar3 = param_1[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = *param_1;
        lVar4 = 0;
        do {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar4);
          lVar4 = lVar4 + 0x220;
        } while ((longlong)(int)lVar3 * 0x220 - lVar4 != 0);
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 14921bd9c FUN_14921bd9c body=30 status=ok
// SIG undefined FUN_14921bd9c(void)

void FUN_14921bd9c(longlong param_1)

{
  FUN_1446e0b6e();
  FUN_14921acee(param_1 + 0x28);
  return;
}



// FUNCTION 14921bdc2 FUN_14921bdc2 body=418 status=ok
// SIG undefined FUN_14921bdc2(void)

void FUN_14921bdc2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 0x100);
  lVar7 = *param_2;
  uVar1 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar11 + 0x80) * 0x20);
  uVar2 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar11 + 0x84) * 0x20);
  uVar3 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar11 + 0x88) * 0x20);
  uVar4 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar11 + 0x8c) * 0x20);
  pbVar5 = *(byte **)(lVar7 + (longlong)*(int *)(lVar11 + 0x90) * 0x20);
  *pbVar5 = 0;
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar11 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar11 = (longlong)*(int *)(lVar11 + 0x8c) * 0x20;
  if (*(longlong *)(*param_2 + 0x10 + lVar11) == 0) {
    lVar11 = *(longlong *)(*param_2 + lVar11 + 8);
  }
  else {
    lVar11 = FUN_1490f79e6();
  }
  if (lVar11 == 0) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar11 + 0x70);
  uVar10 = FUN_1403fefe0(param_1);
  lVar11 = FUN_1444ae668(0,uVar6,uVar10,uVar1,uVar2,uVar8,uVar9);
  *pbVar5 = lVar11 != 0;
  if ((lVar11 != 0) && (FUN_1449b16b6(uVar6,uVar4,lVar11,1), (*pbVar5 & 1) != 0)) {
    return;
  }
  FUN_1449b16b6(uVar6,uVar4,uVar3,1);
  return;
}



// FUNCTION 14921bf64 FUN_14921bf64 body=364 status=ok
// SIG undefined FUN_14921bf64(void)

void FUN_14921bf64(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  lVar10 = *(longlong *)(param_1 + 0x100);
  lVar6 = *param_2;
  uVar1 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar10 + 0x80) * 0x20);
  uVar2 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar10 + 0x84) * 0x20);
  uVar3 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar10 + 0x8c) * 0x20);
  puVar4 = *(undefined1 **)(lVar6 + (longlong)*(int *)(lVar10 + 0x94) * 0x20);
  *puVar4 = 0;
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar10 = (longlong)*(int *)(lVar10 + 0x8c) * 0x20;
  if (*(longlong *)(*param_2 + 0x10 + lVar10) == 0) {
    lVar10 = *(longlong *)(*param_2 + lVar10 + 8);
  }
  else {
    lVar10 = FUN_1490f79e6();
  }
  if (lVar10 != 0) {
    uVar5 = *(undefined8 *)(lVar10 + 0x70);
    uVar9 = FUN_1403fefe0(param_1);
    lVar10 = FUN_1444ae668(1,uVar5,uVar9,uVar1,uVar2,uVar7,uVar8);
    if (lVar10 != 0) {
      *puVar4 = 1;
      FUN_1449b16b6(uVar5,lVar10,uVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 14921c0d0 FUN_14921c0d0 body=459 status=ok
// SIG undefined FUN_14921c0d0(void)

longlong FUN_14921c0d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x70;
  if (*(int *)(param_1 + 0x78) == 0) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    if (*(int *)(param_1 + 0x7c) == 0) {
      FUN_1490f2336(lVar1,0);
    }
    uVar5 = DAT_14c764f18;
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc08408,&local_40);
    FUN_144478fc0(uVar3,local_40,0,uVar5);
    *(undefined4 *)(param_1 + 0x80) = 0;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar5 = DAT_14c764f18;
    lVar4 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc08418,&local_40);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar4,local_40,0,uVar5);
    *(int *)(param_1 + 0x84) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar5 = DAT_14c764f18;
    lVar4 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc08428,&local_40);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar4,local_40,4,uVar5);
    *(int *)(param_1 + 0x98) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar5 = DAT_14c764f14;
    lVar4 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc08438,&local_40);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar4,local_40,4,uVar5);
    *(int *)(param_1 + 0x9c) = iVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921c29c FUN_14921c29c body=558 status=ok
// SIG undefined FUN_14921c29c(void)

longlong FUN_14921c29c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x8c) == -1) {
    uVar5 = FUN_14921c0d0(param_1);
    lVar1 = param_1 + 0x70;
    FUN_14921c4cc(lVar1,uVar5);
    local_a0 = (undefined1 *)0x0;
    local_98 = 1;
    FUN_149157980(&local_a0,1,0);
    *local_a0 = 1;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    local_78 = 0;
    local_68 = &PTR_LAB_14bc058b0;
    local_60 = &LAB_1444b4ed8;
    local_88[0] = &LAB_1444b4ede;
    FUN_1446f57c6(&DAT_14cc08448,&local_90);
    local_a8 = local_88;
    FUN_144478fee((longlong)iVar2 * 0x50 + lVar3,local_90,0,&local_a0);
    *(int *)(param_1 + 0x88) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    local_78 = 0;
    local_68 = &PTR_LAB_14bc058b0;
    local_60 = &LAB_1444b4f30;
    local_88[0] = &LAB_1444b4ede;
    FUN_1446f57c6(&DAT_14cc08458,&local_90);
    local_a8 = local_88;
    FUN_144478fee((longlong)iVar2 * 0x50 + lVar3,local_90,1,&local_a0);
    *(int *)(param_1 + 0x8c) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f08;
    lVar1 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc08468,local_88);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar1,local_88[0],1,uVar4);
    *(int *)(param_1 + 0x90) = iVar2;
    if (local_a0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1 + 0x70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921c4cc FUN_14921c4cc body=95 status=ok
// SIG undefined FUN_14921c4cc(void)

undefined8 * FUN_14921c4cc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457f2ec5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492cf50c(param_1,iVar1);
      FUN_1492cf57f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14921c52c FUN_14921c52c body=298 status=ok
// SIG undefined FUN_14921c52c(void)

void FUN_14921c52c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar8 = *param_2;
  uVar2 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar12 = *(undefined4 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x88) * 0x20);
  puVar4 = *(undefined4 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x90) * 0x20);
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + lVar8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  uVar10 = FUN_1403fefe0(param_1);
  puVar11 = (undefined4 *)FUN_1492cf5e5(0,uVar10,uVar2,uVar3,uVar7,uVar9);
  *(bool *)uVar5 = puVar11 != (undefined4 *)0x0;
  if (puVar11 != (undefined4 *)0x0) {
    puVar12 = puVar11;
  }
  *puVar4 = *puVar12;
  return;
}



// FUNCTION 14921c656 FUN_14921c656 body=294 status=ok
// SIG undefined FUN_14921c656(void)

void FUN_14921c656(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar8 = *param_2;
  uVar2 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar12 = *(undefined4 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x88) * 0x20);
  puVar4 = *(undefined4 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x90) * 0x20);
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + lVar8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  uVar10 = FUN_1403fefe0(param_1);
  puVar11 = (undefined4 *)FUN_1492cf7ca(0,uVar10,uVar2,uVar3,uVar7,uVar9);
  *(bool *)uVar5 = puVar11 != (undefined4 *)0x0;
  if (puVar11 != (undefined4 *)0x0) {
    puVar12 = puVar11;
  }
  *puVar4 = *puVar12;
  return;
}



// FUNCTION 14921c77c FUN_14921c77c body=299 status=ok
// SIG undefined FUN_14921c77c(void)

void FUN_14921c77c(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar10 = *(longlong *)(param_1 + 0x100);
  lVar7 = *param_2;
  uVar1 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar10 + 0x80) * 0x20);
  uVar2 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar10 + 0x84) * 0x20);
  lVar11 = *(longlong *)(lVar7 + (longlong)*(int *)(lVar10 + 0x88) * 0x20);
  uVar3 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar10 + 0x8c) * 0x20);
  uVar4 = *(undefined8 *)(lVar7 + (longlong)*(int *)(lVar10 + 0x90) * 0x20);
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x98) * 0x20 + lVar7,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  uVar9 = FUN_1403fefe0(param_1);
  lVar10 = FUN_1492cf9af(0,uVar9,uVar1,uVar2,uVar6,uVar8);
  *(bool *)uVar4 = lVar10 != 0;
  if (lVar10 != 0) {
    lVar11 = lVar10;
  }
  FUN_144a787a6(uVar3,lVar11);
  return;
}



// FUNCTION 14921c8a8 FUN_14921c8a8 body=297 status=ok
// SIG undefined FUN_14921c8a8(void)

void FUN_14921c8a8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar10 = *(longlong *)(param_1 + 0x100);
  lVar6 = *param_2;
  uVar1 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar10 + 0x80) * 0x20);
  uVar2 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar10 + 0x84) * 0x20);
  puVar11 = *(undefined8 **)(lVar6 + (longlong)*(int *)(lVar10 + 0x88) * 0x20);
  puVar12 = *(undefined8 **)(lVar6 + (longlong)*(int *)(lVar10 + 0x8c) * 0x20);
  uVar3 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar10 + 0x90) * 0x20);
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x98) * 0x20 + lVar6,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar10 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  uVar8 = FUN_1403fefe0(param_1);
  puVar9 = (undefined8 *)FUN_1492cfb94(0,uVar8,uVar1,uVar2,uVar5,uVar7);
  *(bool *)uVar3 = puVar9 != (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar11 = puVar9;
  }
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  return;
}



// FUNCTION 14921c9d2 FUN_14921c9d2 body=307 status=ok
// SIG undefined FUN_14921c9d2(void)

void FUN_14921c9d2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar8 = *param_2;
  uVar2 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar12 = *(undefined8 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x88) * 0x20);
  puVar4 = *(undefined8 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x90) * 0x20);
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + lVar8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  uVar10 = FUN_1403fefe0(param_1);
  puVar11 = (undefined8 *)FUN_1492cfd79(0,uVar10,uVar2,uVar3,uVar7,uVar9);
  *(bool *)uVar5 = puVar11 != (undefined8 *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = puVar11;
  }
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar5 = puVar12[3];
  *puVar4 = *puVar12;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[3] = uVar5;
  return;
}



// FUNCTION 14921cb06 FUN_14921cb06 body=305 status=ok
// SIG undefined FUN_14921cb06(void)

void FUN_14921cb06(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar8 = *param_2;
  uVar2 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar12 = *(undefined8 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x88) * 0x20);
  puVar4 = *(undefined8 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x90) * 0x20);
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + lVar8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  uVar10 = FUN_1403fefe0(param_1);
  puVar11 = (undefined8 *)FUN_1492cff5e(0,uVar10,uVar2,uVar3,uVar7,uVar9);
  *(bool *)uVar5 = puVar11 != (undefined8 *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = puVar11;
  }
  uVar2 = puVar12[1];
  *puVar4 = *puVar12;
  puVar4[1] = uVar2;
  puVar4[2] = puVar12[2];
  return;
}



// FUNCTION 14921cc38 FUN_14921cc38 body=502 status=ok
// SIG undefined FUN_14921cc38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14921cc38(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x8c) == -1) {
    uVar5 = FUN_14921c0d0(param_1);
    lVar1 = param_1 + 0x70;
    FUN_14921c4cc(lVar1,uVar5);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc08510) {
      FUN_144b3d300(&DAT_14cc08510);
      if (DAT_14cc08510 == -1) {
        DAT_14cc08500 = (undefined1 *)0x0;
        _DAT_14cc08508 = 1;
        FUN_149157980(&DAT_14cc08500,1,0);
        *DAT_14cc08500 = 1;
        atexit((_func_5014 *)&LAB_1444af532);
        _Init_thread_footer(&DAT_14cc08510);
      }
    }
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    local_78 = 0;
    local_68 = &PTR_LAB_14bc058b0;
    local_60 = &LAB_1444b4f36;
    local_88[0] = &LAB_1444b4ede;
    FUN_1446f57c6(&DAT_14cc08458,&local_90);
    local_98 = local_88;
    FUN_144478fee((longlong)iVar2 * 0x50 + lVar3,local_90,0,&DAT_14cc08500);
    *(int *)(param_1 + 0x8c) = iVar2;
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1490f2336(lVar1,iVar2);
    }
    uVar4 = DAT_14c764f08;
    lVar1 = *(longlong *)(param_1 + 0x70);
    FUN_1446f57c6(&DAT_14cc08478,local_88);
    FUN_144478fc0((longlong)iVar2 * 0x50 + lVar1,local_88[0],1,uVar4);
    *(int *)(param_1 + 0x94) = iVar2;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1 + 0x70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921ce30 FUN_14921ce30 body=229 status=ok
// SIG undefined FUN_14921ce30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14921ce30(void)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc08528) {
    FUN_144b3d300(&DAT_14cc08528);
    if (DAT_14cc08528 == -1) {
      FUN_1446f470e(&local_18,L"ExecuteContext",1);
      DAT_14cc08518 = (undefined8 *)0x0;
      _DAT_14cc08520 = 1;
      FUN_1490f2264(&DAT_14cc08518,1,0);
      puVar1 = DAT_14cc08518;
      *DAT_14cc08518 = local_18;
      *(undefined1 *)(puVar1 + 1) = 2;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
      atexit((_func_5014 *)&LAB_1444af543);
      _Init_thread_footer(&DAT_14cc08528);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14cc08518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921cf16 FUN_14921cf16 body=278 status=ok
// SIG undefined FUN_14921cf16(void)

void FUN_14921cf16(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar6 = *param_2;
  uVar2 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar4 = *(undefined4 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  puVar5 = *(undefined1 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x94) * 0x20);
  *puVar5 = 0;
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  uVar9 = FUN_1403fefe0(param_1);
  puVar10 = (undefined4 *)FUN_1492cf5e5(1,uVar9,uVar2,uVar3,uVar7,uVar8);
  if (puVar10 != (undefined4 *)0x0) {
    *puVar5 = 1;
    *puVar10 = *puVar4;
  }
  return;
}



// FUNCTION 14921d02c FUN_14921d02c body=274 status=ok
// SIG undefined FUN_14921d02c(void)

void FUN_14921d02c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar6 = *param_2;
  uVar2 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar4 = *(undefined4 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  puVar5 = *(undefined1 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x94) * 0x20);
  *puVar5 = 0;
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  uVar9 = FUN_1403fefe0(param_1);
  puVar10 = (undefined4 *)FUN_1492cf7ca(1,uVar9,uVar2,uVar3,uVar7,uVar8);
  if (puVar10 != (undefined4 *)0x0) {
    *puVar5 = 1;
    *puVar10 = *puVar4;
  }
  return;
}



// FUNCTION 14921d13e FUN_14921d13e body=298 status=ok
// SIG undefined FUN_14921d13e(void)

void FUN_14921d13e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar5 = *param_2;
  uVar1 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar2 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  uVar3 = *(undefined8 *)(lVar5 + (longlong)*(int *)(lVar9 + 0x8c) * 0x20);
  puVar4 = *(undefined1 **)(lVar5 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  *puVar4 = 0;
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  uVar8 = FUN_1403fefe0(param_1);
  lVar9 = FUN_1492cf9af(1,uVar8,uVar1,uVar2,uVar6,uVar7);
  if (lVar9 != 0) {
    *puVar4 = 1;
    FUN_144a787a6(lVar9,uVar3);
    return;
  }
  return;
}



// FUNCTION 14921d268 FUN_14921d268 body=281 status=ok
// SIG undefined FUN_14921d268(void)

void FUN_14921d268(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar4 = *param_2;
  uVar1 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar9 + 0x80) * 0x20);
  uVar2 = *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar9 + 0x84) * 0x20);
  puVar10 = *(undefined8 **)(lVar4 + (longlong)*(int *)(lVar9 + 0x8c) * 0x20);
  puVar3 = *(undefined1 **)(lVar4 + (longlong)*(int *)(lVar9 + 0x94) * 0x20);
  *puVar3 = 0;
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0((longlong)*(int *)(lVar9 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  uVar7 = FUN_1403fefe0(param_1);
  puVar8 = (undefined8 *)FUN_1492cfb94(1,uVar7,uVar1,uVar2,uVar5,uVar6);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar3 = 1;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return;
}



// FUNCTION 14921d382 FUN_14921d382 body=286 status=ok
// SIG undefined FUN_14921d382(void)

void FUN_14921d382(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar6 = *param_2;
  uVar2 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar4 = *(undefined8 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  puVar5 = *(undefined1 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x94) * 0x20);
  *puVar5 = 0;
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  uVar9 = FUN_1403fefe0(param_1);
  puVar10 = (undefined8 *)FUN_1492cfd79(1,uVar9,uVar2,uVar3,uVar7,uVar8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar5 = 1;
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    uVar7 = puVar4[3];
    puVar10[2] = puVar4[2];
    puVar10[3] = uVar7;
    *puVar10 = uVar2;
    puVar10[1] = uVar3;
  }
  return;
}



// FUNCTION 14921d4a0 FUN_14921d4a0 body=285 status=ok
// SIG undefined FUN_14921d4a0(void)

void FUN_14921d4a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  lVar6 = *param_2;
  uVar2 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x80) * 0x20);
  uVar3 = *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar1 + 0x84) * 0x20);
  puVar4 = *(undefined8 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x8c) * 0x20);
  puVar5 = *(undefined1 **)(lVar6 + (longlong)*(int *)(lVar1 + 0x94) * 0x20);
  *puVar5 = 0;
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x98) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0((longlong)*(int *)(lVar1 + 0x9c) * 0x20 + *param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  uVar9 = FUN_1403fefe0(param_1);
  puVar10 = (undefined8 *)FUN_1492cff5e(1,uVar9,uVar2,uVar3,uVar7,uVar8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar5 = 1;
    puVar10[2] = puVar4[2];
    uVar2 = puVar4[1];
    *puVar10 = *puVar4;
    puVar10[1] = uVar2;
  }
  return;
}



// FUNCTION 14921d5c4 FUN_14921d5c4 body=180 status=ok
// SIG undefined FUN_14921d5c4(void)

void FUN_14921d5c4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined4 *)puVar2[0xc];
  uVar6 = puVar2[0x10];
  uVar7 = puVar2[0x14];
  uVar8 = puVar2[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(puVar2 + 0x1c,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  FUN_14921d724(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,uVar5,uVar1,uVar6,uVar7,uVar8,uVar10);
  return;
}



// FUNCTION 14921d67e FUN_14921d67e body=164 status=ok
// SIG undefined FUN_14921d67e(void)

void FUN_14921d67e(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined4 local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x78;
  local_210 = param_1 + 0x60;
  local_218 = param_1 + 0x48;
  local_220 = param_1 + 0x40;
  local_228 = *(undefined4 *)(param_1 + 0x3c);
  FUN_14921d724(local_1f8,param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921d724 FUN_14921d724 body=2252 status=ok
// SIG undefined FUN_14921d724(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14921d724(longlong param_1,double *param_2,double *param_3,byte *param_4,undefined4 param_5
                  ,char *param_6,double *param_7,double *param_8,int *param_9)

{
  double dVar1;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  uint local_300;
  undefined4 *local_2f8;
  undefined8 *local_2f0;
  undefined1 *local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined1 local_2a0 [4];
  undefined4 local_29c;
  double local_278;
  double dStack_270;
  double local_268;
  double local_248;
  double dStack_240;
  double local_238;
  undefined4 local_1fc;
  undefined4 local_1d0;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_190 [32];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *param_6 = '\0';
  param_7[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_7 = DAT_14c8464e0;
  param_7[1] = dVar1;
  *param_8 = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 1.0;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    *param_9 = -1;
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x1c);
    uVar8 = FUN_1448eb174(param_2,0x18,0);
    uVar9 = FUN_144a78877(uVar9,uVar8);
    uVar8 = FUN_1448eb174(param_3,0x18,0);
    uVar9 = FUN_144a78877(uVar9,uVar8);
    uVar9 = FUN_144a78877(uVar9,*param_4);
    iVar10 = FUN_144a78877(uVar9,param_5);
    if (*param_9 == iVar10) {
      *param_6 = (char)param_9[1];
      param_7[2] = *(double *)(param_9 + 6);
      dVar1 = *(double *)(param_9 + 4);
      *param_7 = *(double *)(param_9 + 2);
      param_7[1] = dVar1;
      param_8[2] = *(double *)(param_9 + 0xc);
      iVar10 = param_9[9];
      iVar5 = param_9[10];
      iVar6 = param_9[0xb];
      *(int *)param_8 = param_9[8];
      *(int *)((longlong)param_8 + 4) = iVar10;
      *(int *)(param_8 + 1) = iVar5;
      *(int *)((longlong)param_8 + 0xc) = iVar6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_328);
    }
    local_14c = 0;
    local_148 = 0x101;
    local_120 = 0;
    local_118 = 0x800000000;
    local_100 = 0;
    local_f8 = 0x400000000;
    local_154 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_150 = 0;
    local_158 = 1;
    local_160 = 0x100000000000101;
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar4 = *(longlong *)(param_1 + 0xd0);
      if (lVar4 != 0) {
        lVar11 = FUN_144a3a302();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          FUN_140870e92(&local_170);
        }
      }
    }
    else {
      FUN_144a85a22(&local_170);
    }
    FUN_1449b671c(local_190);
    FUN_1449b6736(local_190);
    FUN_144a7e2ee(local_190,0,2);
    local_1a0 = 2;
    local_19c = param_5;
    memset(local_2a0,0,0x100);
    local_1d0 = 0xffffffff;
    local_29c = 0x3f800000;
    local_1fc = 0xffffffff;
    dVar20 = *param_3 * *(double *)(param_1 + 0xb0);
    dVar13 = param_3[1] * *(double *)(param_1 + 0xb8);
    dVar16 = param_3[2] * *(double *)(param_1 + 0xc0);
    dVar1 = *(double *)(param_1 + 0x88);
    dVar2 = *(double *)(param_1 + 0x88);
    dVar14 = *(double *)(param_1 + 0x70);
    dVar19 = *(double *)(param_1 + 0x78);
    dVar17 = *(double *)(param_1 + 0x80);
    dVar18 = dVar13 * dVar14 - dVar20 * dVar19;
    dVar21 = dVar16 * dVar19 - dVar13 * dVar17;
    dVar22 = dVar20 * dVar17 - dVar16 * dVar14;
    dVar21 = dVar21 + dVar21;
    dVar22 = dVar22 + dVar22;
    dVar18 = dVar18 + dVar18;
    dVar13 = (dVar17 * dVar21 - dVar14 * dVar18) + dVar2 * dVar22 + dVar13 +
             *(double *)(param_1 + 0x98);
    local_2b8._8_4_ = SUB84(dVar13,0);
    local_2b8._0_8_ =
         (dVar18 * dVar19 - dVar22 * dVar17) + dVar1 * dVar21 + dVar20 + *(double *)(param_1 + 0x90)
    ;
    local_2b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_2a8 = dVar18 * dVar1 + dVar16 + (dVar22 * dVar14 - dVar21 * dVar19) +
                *(double *)(param_1 + 0xa0);
    dVar20 = *param_2 * *(double *)(param_1 + 0xb0);
    dVar13 = param_2[1] * *(double *)(param_1 + 0xb8);
    dVar18 = param_2[2] * *(double *)(param_1 + 0xc0);
    dVar16 = dVar13 * dVar14 - dVar19 * dVar20;
    dVar21 = dVar18 * dVar19 - dVar17 * dVar13;
    dVar22 = dVar20 * dVar17 - dVar14 * dVar18;
    dVar21 = dVar21 + dVar21;
    dVar22 = dVar22 + dVar22;
    dVar16 = dVar16 + dVar16;
    local_2d8 = (dVar16 * dVar19 - dVar22 * dVar17) + dVar1 * dVar21 + dVar20 +
                *(double *)(param_1 + 0x90);
    dStack_2d0 = (dVar17 * dVar21 - dVar14 * dVar16) + dVar2 * dVar22 + dVar13 +
                 *(double *)(param_1 + 0x98);
    local_2c8 = dVar16 * dVar1 + dVar18 + (dVar22 * dVar14 - dVar21 * dVar19) +
                *(double *)(param_1 + 0xa0);
    local_2f0 = &local_170;
    local_2f8 = &local_1a0;
    local_300 = (uint)*param_4;
    local_308 = &DAT_14c8463d0;
    local_2e8 = local_190;
    cVar7 = FUN_14021655c(*(undefined8 *)(param_1 + 0xe0),local_2a0);
    *param_6 = cVar7;
    auVar12 = _DAT_149934d80;
    if (cVar7 != '\0') {
      local_278 = local_278 - *(double *)(param_1 + 0x90);
      dStack_270 = dStack_270 - *(double *)(param_1 + 0x98);
      local_268 = local_268 - *(double *)(param_1 + 0xa0);
      dVar20 = *(double *)(param_1 + 0x70);
      auVar3 = *(undefined1 (*) [16])(param_1 + 0xb0);
      dVar2 = -dVar20;
      dVar18 = -*(double *)(param_1 + 0x78);
      dVar13 = *(double *)(param_1 + 0x80) * -1.0;
      dVar14 = *(double *)(param_1 + 0x88) * 1.0;
      dVar17 = local_278 * dVar13 - dVar2 * local_268;
      dVar19 = dStack_270 * dVar2 - local_278 * dVar18;
      dVar16 = local_268 * dVar18 - dStack_270 * dVar13;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar19 = dVar19 + dVar19;
      auVar15 = divpd(_DAT_149934d80,auVar3);
      dVar1 = *(double *)(param_1 + 0xc0);
      *param_7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar15._0_8_) *
                 ((dVar19 * dVar18 - dVar17 * dVar13) + dVar14 * dVar16 + local_278);
      param_7[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar15._8_8_)
                   * (dVar20 * dVar19 + dVar13 * dVar16 + dVar14 * dVar17 + dStack_270);
      param_7[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                           (ulonglong)(1.0 / dVar1)) *
                   (dVar14 * dVar19 + local_268 + (dVar17 * dVar2 - dVar16 * dVar18));
      dVar13 = *(double *)(param_1 + 0x70);
      auVar3 = *(undefined1 (*) [16])(param_1 + 0xb0);
      dVar14 = -dVar13;
      dVar19 = -*(double *)(param_1 + 0x78);
      dVar2 = *(double *)(param_1 + 0x80) * -1.0;
      dVar18 = *(double *)(param_1 + 0x88) * 1.0;
      dVar20 = dStack_240 * dVar14 - local_248 * dVar19;
      dVar17 = local_238 * dVar19 - dStack_240 * dVar2;
      dVar16 = local_248 * dVar2 - dVar14 * local_238;
      dVar17 = dVar17 + dVar17;
      dVar16 = dVar16 + dVar16;
      dVar20 = dVar20 + dVar20;
      auVar12 = divpd(auVar12,auVar3);
      dVar1 = *(double *)(param_1 + 0xc0);
      *param_8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar12._0_8_) *
                 ((dVar20 * dVar19 - dVar16 * dVar2) + dVar18 * dVar17 + local_248);
      param_8[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar12._8_8_)
                   * (dVar13 * dVar20 + dVar2 * dVar17 + dVar18 * dVar16 + dStack_240);
      param_8[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                           (ulonglong)(1.0 / dVar1)) *
                   (dVar18 * dVar20 + local_238 + (dVar16 * dVar14 - dVar17 * dVar19));
    }
    *param_9 = iVar10;
    *(char *)(param_9 + 1) = *param_6;
    *(double *)(param_9 + 6) = param_7[2];
    dVar1 = param_7[1];
    *(double *)(param_9 + 2) = *param_7;
    *(double *)(param_9 + 4) = dVar1;
    *(double *)(param_9 + 0xc) = param_8[2];
    iVar10 = *(int *)((longlong)param_8 + 4);
    iVar5 = *(int *)(param_8 + 1);
    iVar6 = *(int *)((longlong)param_8 + 0xc);
    param_9[8] = *(int *)param_8;
    param_9[9] = iVar10;
    param_9[10] = iVar5;
    param_9[0xb] = iVar6;
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921dff4 FUN_14921dff4 body=180 status=ok
// SIG undefined FUN_14921dff4(void)

void FUN_14921dff4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined4 *)puVar2[0xc];
  uVar6 = puVar2[0x10];
  uVar7 = puVar2[0x14];
  uVar8 = puVar2[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(puVar2 + 0x1c,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  FUN_14921e154(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,uVar5,uVar1,uVar6,uVar7,uVar8,uVar10);
  return;
}



// FUNCTION 14921e0ae FUN_14921e0ae body=164 status=ok
// SIG undefined FUN_14921e0ae(void)

void FUN_14921e0ae(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined4 local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x78;
  local_210 = param_1 + 0x60;
  local_218 = param_1 + 0x48;
  local_220 = param_1 + 0x40;
  local_228 = *(undefined4 *)(param_1 + 0x3c);
  FUN_14921e154(local_1f8,param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921e154 FUN_14921e154 body=2222 status=ok
// SIG undefined FUN_14921e154(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14921e154(longlong param_1,double *param_2,double *param_3,undefined1 *param_4,
                  undefined4 param_5,char *param_6,double *param_7,double *param_8,int *param_9)

{
  double dVar1;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined4 local_2e0;
  undefined4 *local_2d8;
  undefined8 *local_2d0;
  undefined1 *local_2c8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined1 local_298 [16];
  double local_288;
  undefined1 local_280 [4];
  undefined4 local_27c;
  double local_258;
  double dStack_250;
  double local_248;
  double local_228;
  double dStack_220;
  double local_218;
  undefined4 local_1dc;
  undefined4 local_1b0;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  *param_6 = '\0';
  param_7[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_7 = DAT_14c8464e0;
  param_7[1] = dVar1;
  *param_8 = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 1.0;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    *param_9 = -1;
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x1c);
    uVar8 = FUN_1448eb174(param_2,0x18,0);
    uVar9 = FUN_144a78877(uVar9,uVar8);
    uVar8 = FUN_1448eb174(param_3,0x18,0);
    uVar9 = FUN_144a78877(uVar9,uVar8);
    uVar9 = FUN_144a78877(uVar9,*param_4);
    iVar10 = FUN_144a78877(uVar9,param_5);
    if (*param_9 == iVar10) {
      *param_6 = (char)param_9[1];
      param_7[2] = *(double *)(param_9 + 6);
      dVar1 = *(double *)(param_9 + 4);
      *param_7 = *(double *)(param_9 + 2);
      param_7[1] = dVar1;
      param_8[2] = *(double *)(param_9 + 0xc);
      iVar10 = param_9[9];
      iVar5 = param_9[10];
      iVar6 = param_9[0xb];
      *(int *)param_8 = param_9[8];
      *(int *)((longlong)param_8 + 4) = iVar10;
      *(int *)(param_8 + 1) = iVar5;
      *(int *)((longlong)param_8 + 0xc) = iVar6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_308);
    }
    uVar9 = FUN_147a90476(*param_4);
    local_180 = 2;
    local_17c = param_5;
    local_14c = 0;
    local_148 = 0x101;
    local_120 = 0;
    local_118 = 0x800000000;
    local_100 = 0;
    local_f8 = 0x400000000;
    local_154 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_150 = 0;
    local_158 = 1;
    local_160 = 0x100000000000101;
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar4 = *(longlong *)(param_1 + 0xd0);
      if (lVar4 != 0) {
        lVar11 = FUN_144a3a302();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          FUN_140870e92(&local_170);
        }
      }
    }
    else {
      FUN_144a85a22(&local_170);
    }
    memset(local_280,0,0x100);
    local_1b0 = 0xffffffff;
    local_27c = 0x3f800000;
    local_1dc = 0xffffffff;
    dVar20 = *param_3 * *(double *)(param_1 + 0xb0);
    dVar13 = param_3[1] * *(double *)(param_1 + 0xb8);
    dVar16 = param_3[2] * *(double *)(param_1 + 0xc0);
    dVar1 = *(double *)(param_1 + 0x88);
    dVar2 = *(double *)(param_1 + 0x88);
    dVar14 = *(double *)(param_1 + 0x70);
    dVar19 = *(double *)(param_1 + 0x78);
    dVar17 = *(double *)(param_1 + 0x80);
    dVar18 = dVar13 * dVar14 - dVar20 * dVar19;
    dVar21 = dVar16 * dVar19 - dVar13 * dVar17;
    dVar22 = dVar20 * dVar17 - dVar16 * dVar14;
    dVar21 = dVar21 + dVar21;
    dVar22 = dVar22 + dVar22;
    dVar18 = dVar18 + dVar18;
    dVar13 = (dVar17 * dVar21 - dVar14 * dVar18) + dVar2 * dVar22 + dVar13 +
             *(double *)(param_1 + 0x98);
    local_298._8_4_ = SUB84(dVar13,0);
    local_298._0_8_ =
         (dVar18 * dVar19 - dVar22 * dVar17) + dVar1 * dVar21 + dVar20 + *(double *)(param_1 + 0x90)
    ;
    local_298._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_288 = dVar18 * dVar1 + dVar16 + (dVar22 * dVar14 - dVar21 * dVar19) +
                *(double *)(param_1 + 0xa0);
    dVar20 = *param_2 * *(double *)(param_1 + 0xb0);
    dVar13 = param_2[1] * *(double *)(param_1 + 0xb8);
    dVar18 = param_2[2] * *(double *)(param_1 + 0xc0);
    dVar16 = dVar13 * dVar14 - dVar19 * dVar20;
    dVar21 = dVar18 * dVar19 - dVar17 * dVar13;
    dVar22 = dVar20 * dVar17 - dVar14 * dVar18;
    dVar21 = dVar21 + dVar21;
    dVar22 = dVar22 + dVar22;
    dVar16 = dVar16 + dVar16;
    local_2b8 = (dVar16 * dVar19 - dVar22 * dVar17) + dVar1 * dVar21 + dVar20 +
                *(double *)(param_1 + 0x90);
    dStack_2b0 = (dVar17 * dVar21 - dVar14 * dVar16) + dVar2 * dVar22 + dVar13 +
                 *(double *)(param_1 + 0x98);
    local_2a8 = dVar16 * dVar1 + dVar18 + (dVar22 * dVar14 - dVar21 * dVar19) +
                *(double *)(param_1 + 0xa0);
    local_2c8 = &DAT_14cad0f10;
    local_2d0 = &local_170;
    local_2d8 = &local_180;
    local_2e8 = &DAT_14c8463d0;
    local_2e0 = uVar9;
    cVar7 = FUN_14021655c(*(undefined8 *)(param_1 + 0xe0),local_280);
    *param_6 = cVar7;
    auVar12 = _DAT_149934d80;
    if (cVar7 != '\0') {
      local_258 = local_258 - *(double *)(param_1 + 0x90);
      dStack_250 = dStack_250 - *(double *)(param_1 + 0x98);
      local_248 = local_248 - *(double *)(param_1 + 0xa0);
      dVar20 = *(double *)(param_1 + 0x70);
      auVar3 = *(undefined1 (*) [16])(param_1 + 0xb0);
      dVar2 = -dVar20;
      dVar18 = -*(double *)(param_1 + 0x78);
      dVar13 = *(double *)(param_1 + 0x80) * -1.0;
      dVar14 = *(double *)(param_1 + 0x88) * 1.0;
      dVar17 = local_258 * dVar13 - dVar2 * local_248;
      dVar19 = dStack_250 * dVar2 - local_258 * dVar18;
      dVar16 = local_248 * dVar18 - dStack_250 * dVar13;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar19 = dVar19 + dVar19;
      auVar15 = divpd(_DAT_149934d80,auVar3);
      dVar1 = *(double *)(param_1 + 0xc0);
      *param_7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar15._0_8_) *
                 ((dVar19 * dVar18 - dVar17 * dVar13) + dVar14 * dVar16 + local_258);
      param_7[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar15._8_8_)
                   * (dVar20 * dVar19 + dVar13 * dVar16 + dVar14 * dVar17 + dStack_250);
      param_7[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                           (ulonglong)(1.0 / dVar1)) *
                   (dVar14 * dVar19 + local_248 + (dVar17 * dVar2 - dVar16 * dVar18));
      dVar13 = *(double *)(param_1 + 0x70);
      auVar3 = *(undefined1 (*) [16])(param_1 + 0xb0);
      dVar14 = -dVar13;
      dVar19 = -*(double *)(param_1 + 0x78);
      dVar2 = *(double *)(param_1 + 0x80) * -1.0;
      dVar18 = *(double *)(param_1 + 0x88) * 1.0;
      dVar20 = dStack_220 * dVar14 - local_228 * dVar19;
      dVar17 = local_218 * dVar19 - dStack_220 * dVar2;
      dVar16 = local_228 * dVar2 - dVar14 * local_218;
      dVar17 = dVar17 + dVar17;
      dVar16 = dVar16 + dVar16;
      dVar20 = dVar20 + dVar20;
      auVar12 = divpd(auVar12,auVar3);
      dVar1 = *(double *)(param_1 + 0xc0);
      *param_8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar12._0_8_) *
                 ((dVar20 * dVar19 - dVar16 * dVar2) + dVar18 * dVar17 + local_228);
      param_8[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar12._8_8_)
                   * (dVar13 * dVar20 + dVar2 * dVar17 + dVar18 * dVar16 + dStack_220);
      param_8[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                           (ulonglong)(1.0 / dVar1)) *
                   (dVar18 * dVar20 + local_218 + (dVar16 * dVar14 - dVar17 * dVar19));
    }
    *param_9 = iVar10;
    *(char *)(param_9 + 1) = *param_6;
    *(double *)(param_9 + 6) = param_7[2];
    dVar1 = param_7[1];
    *(double *)(param_9 + 2) = *param_7;
    *(double *)(param_9 + 4) = dVar1;
    *(double *)(param_9 + 0xc) = param_8[2];
    iVar10 = *(int *)((longlong)param_8 + 4);
    iVar5 = *(int *)(param_8 + 1);
    iVar6 = *(int *)((longlong)param_8 + 0xc);
    param_9[8] = *(int *)param_8;
    param_9[9] = iVar10;
    param_9[10] = iVar5;
    param_9[0xb] = iVar6;
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921ea06 FUN_14921ea06 body=234 status=ok
// SIG undefined FUN_14921ea06(void)

void FUN_14921ea06(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  puVar5 = (undefined8 *)puVar2[8];
  uVar1 = *(undefined4 *)puVar2[0xc];
  uVar6 = puVar2[0x10];
  uVar7 = puVar2[0x14];
  uVar8 = puVar2[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(puVar2 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar1;
  local_80 = uVar6;
  local_78 = uVar7;
  local_70 = uVar8;
  FUN_14921ebb2(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921eaf8 FUN_14921eaf8 body=185 status=ok
// SIG undefined FUN_14921eaf8(void)

void FUN_14921eaf8(longlong param_1)

{
  undefined1 auStack_258 [32];
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 0x38);
  local_20 = *(undefined4 *)(param_1 + 0x40);
  local_218 = param_1 + 0x80;
  local_220 = param_1 + 0x68;
  local_228 = param_1 + 0x50;
  local_230 = param_1 + 0x4c;
  local_238 = *(undefined4 *)(param_1 + 0x48);
  FUN_14921ebb2(local_208,param_1 + 8,param_1 + 0x20);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921ebb2 FUN_14921ebb2 body=2506 status=ok
// SIG undefined FUN_14921ebb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14921ebb2(longlong param_1,double *param_2,double *param_3,longlong *param_4,
                  undefined4 param_5,char *param_6,double *param_7,double *param_8,int *param_9)

{
  double dVar1;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  uint *local_300;
  undefined4 *local_2f8;
  undefined8 *local_2f0;
  int local_2e4;
  double *local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined1 local_2a0 [4];
  undefined4 local_29c;
  double local_278;
  double dStack_270;
  double local_268;
  double local_248;
  double dStack_240;
  double local_238;
  undefined4 local_1fc;
  undefined4 local_1d0;
  uint local_1a0;
  undefined1 local_19c;
  longlong local_198;
  ulonglong uStack_190;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *param_6 = '\0';
  param_7[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_7 = DAT_14c8464e0;
  param_7[1] = dVar1;
  *param_8 = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 1.0;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    *param_9 = -1;
  }
  else {
    uVar10 = *(undefined4 *)(param_1 + 0x1c);
    local_2e0 = param_2;
    uVar9 = FUN_1448eb174(param_2,0x18,0);
    uVar10 = FUN_144a78877(uVar10,uVar9);
    uVar9 = FUN_1448eb174(param_3,0x18,0);
    uVar10 = FUN_144a78877(uVar10,uVar9);
    uVar10 = FUN_144a78877(uVar10,(int)param_4[1]);
    lVar15 = param_4[1];
    if ((longlong)(int)lVar15 != 0) {
      lVar11 = *param_4;
      lVar14 = 0;
      do {
        uVar10 = FUN_144a78877(uVar10,*(undefined1 *)(lVar11 + lVar14));
        lVar14 = lVar14 + 1;
      } while ((int)lVar15 != lVar14);
    }
    local_2e4 = FUN_144a78877(uVar10,param_5);
    if (*param_9 == local_2e4) {
      *param_6 = (char)param_9[1];
      param_7[2] = *(double *)(param_9 + 6);
      dVar1 = *(double *)(param_9 + 4);
      *param_7 = *(double *)(param_9 + 2);
      param_7[1] = dVar1;
      param_8[2] = *(double *)(param_9 + 0xc);
      iVar5 = param_9[9];
      iVar6 = param_9[10];
      iVar7 = param_9[0xb];
      *(int *)param_8 = param_9[8];
      *(int *)((longlong)param_8 + 4) = iVar5;
      *(int *)(param_8 + 1) = iVar6;
      *(int *)((longlong)param_8 + 0xc) = iVar7;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_328);
    }
    local_180 = 2;
    local_17c = param_5;
    local_198 = 0;
    uStack_190 = (ulonglong)*(uint *)(param_4 + 1);
    if (*(uint *)(param_4 + 1) == 0) {
      local_1a0 = 0;
      local_19c = 0;
    }
    else {
      FUN_145c9dcc4(&local_198,0);
      if (0 < (int)param_4[1]) {
        lVar15 = 0;
        do {
          uVar10 = FUN_141302a0a(*(undefined1 *)(*param_4 + lVar15));
          *(undefined4 *)(local_198 + lVar15 * 4) = uVar10;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)param_4[1]);
      }
      lVar15 = local_198;
      lVar11 = (longlong)(int)uStack_190;
      local_1a0 = 0;
      local_19c = 0;
      if (lVar11 != 0) {
        lVar14 = 0;
        uVar13 = 0;
        do {
          uVar4 = *(uint *)(lVar15 + lVar14);
          puVar12 = (uint *)FUN_140bfa850();
          if ((*puVar12 >> (uVar4 & 0x1f) & 1) != 0) {
            uVar13 = uVar13 | 1 << (*(byte *)(lVar15 + lVar14) & 0x1f);
            local_1a0 = uVar13;
          }
          lVar14 = lVar14 + 4;
        } while (lVar11 * 4 != lVar14);
      }
    }
    local_14c = 0;
    local_148 = 0x101;
    local_120 = 0;
    local_118 = 0x800000000;
    local_100 = 0;
    local_f8 = 0x400000000;
    local_154 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_150 = 0;
    local_158 = 1;
    local_160 = 0x100000000000101;
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar15 = *(longlong *)(param_1 + 0xd0);
      if (lVar15 != 0) {
        lVar11 = FUN_144a3a302();
        lVar15 = *(longlong *)(lVar15 + 0x10);
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
            lVar11 + 0x30)) {
          FUN_140870e92(&local_170);
        }
      }
    }
    else {
      FUN_144a85a22(&local_170);
    }
    memset(local_2a0,0,0x100);
    local_1d0 = 0xffffffff;
    local_29c = 0x3f800000;
    local_1fc = 0xffffffff;
    dVar24 = *param_3 * *(double *)(param_1 + 0xb0);
    dVar17 = param_3[1] * *(double *)(param_1 + 0xb8);
    dVar20 = param_3[2] * *(double *)(param_1 + 0xc0);
    dVar1 = *(double *)(param_1 + 0x88);
    dVar2 = *(double *)(param_1 + 0x88);
    dVar18 = *(double *)(param_1 + 0x70);
    dVar23 = *(double *)(param_1 + 0x78);
    dVar21 = *(double *)(param_1 + 0x80);
    dVar22 = dVar17 * dVar18 - dVar24 * dVar23;
    dVar25 = dVar20 * dVar23 - dVar17 * dVar21;
    dVar26 = dVar24 * dVar21 - dVar20 * dVar18;
    dVar25 = dVar25 + dVar25;
    dVar26 = dVar26 + dVar26;
    dVar22 = dVar22 + dVar22;
    dVar17 = (dVar21 * dVar25 - dVar18 * dVar22) + dVar2 * dVar26 + dVar17 +
             *(double *)(param_1 + 0x98);
    local_2b8._8_4_ = SUB84(dVar17,0);
    local_2b8._0_8_ =
         (dVar22 * dVar23 - dVar26 * dVar21) + dVar1 * dVar25 + dVar24 + *(double *)(param_1 + 0x90)
    ;
    local_2b8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    local_2a8 = dVar22 * dVar1 + dVar20 + (dVar26 * dVar18 - dVar25 * dVar23) +
                *(double *)(param_1 + 0xa0);
    dVar24 = *local_2e0 * *(double *)(param_1 + 0xb0);
    dVar17 = local_2e0[1] * *(double *)(param_1 + 0xb8);
    dVar22 = local_2e0[2] * *(double *)(param_1 + 0xc0);
    dVar20 = dVar17 * dVar18 - dVar23 * dVar24;
    dVar25 = dVar22 * dVar23 - dVar21 * dVar17;
    dVar26 = dVar24 * dVar21 - dVar18 * dVar22;
    dVar25 = dVar25 + dVar25;
    dVar26 = dVar26 + dVar26;
    dVar20 = dVar20 + dVar20;
    local_2d8 = (dVar20 * dVar23 - dVar26 * dVar21) + dVar1 * dVar25 + dVar24 +
                *(double *)(param_1 + 0x90);
    dStack_2d0 = (dVar21 * dVar25 - dVar18 * dVar20) + dVar2 * dVar26 + dVar17 +
                 *(double *)(param_1 + 0x98);
    local_2c8 = dVar20 * dVar1 + dVar22 + (dVar26 * dVar18 - dVar25 * dVar23) +
                *(double *)(param_1 + 0xa0);
    local_2f0 = &local_170;
    local_2f8 = &local_180;
    local_300 = &local_1a0;
    local_308 = &DAT_14c8463d0;
    cVar8 = FUN_1479b44ee(*(undefined8 *)(param_1 + 0xe0),local_2a0);
    *param_6 = cVar8;
    auVar16 = _DAT_149934d80;
    if (cVar8 != '\0') {
      local_278 = local_278 - *(double *)(param_1 + 0x90);
      dStack_270 = dStack_270 - *(double *)(param_1 + 0x98);
      local_268 = local_268 - *(double *)(param_1 + 0xa0);
      dVar24 = *(double *)(param_1 + 0x70);
      auVar3 = *(undefined1 (*) [16])(param_1 + 0xb0);
      dVar2 = -dVar24;
      dVar22 = -*(double *)(param_1 + 0x78);
      dVar17 = *(double *)(param_1 + 0x80) * -1.0;
      dVar18 = *(double *)(param_1 + 0x88) * 1.0;
      dVar21 = local_278 * dVar17 - dVar2 * local_268;
      dVar23 = dStack_270 * dVar2 - local_278 * dVar22;
      dVar20 = local_268 * dVar22 - dStack_270 * dVar17;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar23 = dVar23 + dVar23;
      auVar19 = divpd(_DAT_149934d80,auVar3);
      dVar1 = *(double *)(param_1 + 0xc0);
      *param_7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar19._0_8_) *
                 ((dVar23 * dVar22 - dVar21 * dVar17) + dVar18 * dVar20 + local_278);
      param_7[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar19._8_8_)
                   * (dVar24 * dVar23 + dVar17 * dVar20 + dVar18 * dVar21 + dStack_270);
      param_7[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                           (ulonglong)(1.0 / dVar1)) *
                   (dVar18 * dVar23 + local_268 + (dVar21 * dVar2 - dVar20 * dVar22));
      dVar17 = *(double *)(param_1 + 0x70);
      auVar3 = *(undefined1 (*) [16])(param_1 + 0xb0);
      dVar18 = -dVar17;
      dVar23 = -*(double *)(param_1 + 0x78);
      dVar2 = *(double *)(param_1 + 0x80) * -1.0;
      dVar22 = *(double *)(param_1 + 0x88) * 1.0;
      dVar24 = dStack_240 * dVar18 - local_248 * dVar23;
      dVar21 = local_238 * dVar23 - dStack_240 * dVar2;
      dVar20 = local_248 * dVar2 - dVar18 * local_238;
      dVar21 = dVar21 + dVar21;
      dVar20 = dVar20 + dVar20;
      dVar24 = dVar24 + dVar24;
      auVar16 = divpd(auVar16,auVar3);
      dVar1 = *(double *)(param_1 + 0xc0);
      *param_8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar16._0_8_) *
                 ((dVar24 * dVar23 - dVar20 * dVar2) + dVar22 * dVar21 + local_248);
      param_8[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar16._8_8_)
                   * (dVar17 * dVar24 + dVar2 * dVar21 + dVar22 * dVar20 + dStack_240);
      param_8[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                           (ulonglong)(1.0 / dVar1)) *
                   (dVar22 * dVar24 + local_238 + (dVar20 * dVar18 - dVar21 * dVar23));
    }
    *param_9 = local_2e4;
    *(char *)(param_9 + 1) = *param_6;
    *(double *)(param_9 + 6) = param_7[2];
    dVar1 = param_7[1];
    *(double *)(param_9 + 2) = *param_7;
    *(double *)(param_9 + 4) = dVar1;
    *(double *)(param_9 + 0xc) = param_8[2];
    iVar5 = *(int *)((longlong)param_8 + 4);
    iVar6 = *(int *)(param_8 + 1);
    iVar7 = *(int *)((longlong)param_8 + 0xc);
    param_9[8] = *(int *)param_8;
    param_9[9] = iVar5;
    param_9[10] = iVar6;
    param_9[0xb] = iVar7;
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14921f580 FUN_14921f580 body=206 status=ok
// SIG undefined FUN_14921f580(void)

undefined8 FUN_14921f580(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = &PTR_FUN_14bbd5b70;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0x3ff0000000000000;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0x3ff0000000000000;
  local_b8 = *(undefined8 *)(param_1 + 8);
  uStack_b0 = *(undefined8 *)(param_1 + 0x10);
  local_a8 = *(undefined8 *)(param_1 + 0x18);
  local_88 = 0;
  local_a0 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = *(undefined8 *)(param_1 + 0x28);
  local_90 = *(undefined8 *)(param_1 + 0x30);
  local_84 = *(undefined4 *)(param_1 + 0x3c);
  FUN_14921f650(param_2);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921f650 FUN_14921f650 body=211 status=ok
// SIG undefined FUN_14921f650(void)

undefined8 * FUN_14921f650(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d2624();
  param_1[2] = uVar1;
  uVar1 = FUN_1466d2a0a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14921f728 FUN_14921f728 body=54 status=ok
// SIG undefined FUN_14921f728(void)

void FUN_14921f728(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    FUN_14921f874();
  }
  *(bool *)param_3 = iVar1 != 0;
  return;
}



// FUNCTION 14921f762 FUN_14921f762 body=189 status=ok
// SIG undefined FUN_14921f762(void)

void FUN_14921f762(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0;
  uStack_30 = 0;
  FUN_14921f820(param_3,&local_38);
  FUN_14915589b(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921f820 FUN_14921f820 body=80 status=ok
// SIG undefined FUN_14921f820(void)

longlong * FUN_14921f820(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14915589b(*param_1,(int)param_1[1]);
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



// FUNCTION 14921f874 FUN_14921f874 body=102 status=ok
// SIG undefined FUN_14921f874(void)

void FUN_14921f874(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Please select at least one element in the hierarchy!");
  FUN_14447a43e(param_1,1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921f8dc FUN_14921f8dc body=339 status=ok
// SIG undefined FUN_14921f8dc(void)

void FUN_14921f8dc(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  puVar9 = (undefined8 *)
           FUN_144828ac0(*param_2,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = *param_2;
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  puVar12 = *(undefined8 **)(lVar8 + 0x40);
  puVar13 = *(undefined8 **)(lVar8 + 0x60);
  uVar3 = *(undefined8 *)(lVar8 + 0x80);
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar11 = (char *)FUN_144828ac0(lVar8 + 0xa0,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  if (*pcVar11 == '\0') {
    uVar7 = puVar12[5];
    uVar1 = puVar12[6];
    *puVar9 = puVar12[4];
    puVar9[1] = uVar7;
    puVar9[2] = uVar1;
    local_b8[0] = *puVar12;
    local_b8[1] = puVar12[1];
    local_a8 = *(undefined4 *)(puVar12 + 2);
    uStack_a4 = *(undefined4 *)((longlong)puVar12 + 0x14);
    uStack_a0 = *(undefined4 *)(puVar12 + 3);
    uStack_9c = *(undefined4 *)((longlong)puVar12 + 0x1c);
    FUN_1448052ee(local_b8,&local_58);
    puVar9[5] = local_48;
    puVar9[3] = local_58;
    puVar9[4] = uStack_50;
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x44);
    uVar5 = *(undefined4 *)(puVar12 + 9);
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x4c);
    uVar1 = puVar12[10];
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar12 + 8);
    *(undefined4 *)((longlong)puVar9 + 0x34) = uVar4;
    *(undefined4 *)(puVar9 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar6;
    puVar9[8] = uVar1;
    *pcVar11 = '\x01';
  }
  FUN_14921fb96(local_b8,puVar9,uVar2,uVar3);
  puVar12 = local_b8;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921fa38 FUN_14921fa38 body=102 status=ok
// SIG undefined FUN_14921fa38(void)

void FUN_14921fa38(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14921faa0(param_1);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921faa0 FUN_14921faa0 body=244 status=ok
// SIG undefined FUN_14921faa0(void)

void FUN_14921faa0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x179) == '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xe0);
    local_a8[0] = *(undefined8 *)(param_1 + 0xb0);
    local_a8[1] = *(undefined8 *)(param_1 + 0xb8);
    local_98 = *(undefined4 *)(param_1 + 0xc0);
    uStack_94 = *(undefined4 *)(param_1 + 0xc4);
    uStack_90 = *(undefined4 *)(param_1 + 200);
    uStack_8c = *(undefined4 *)(param_1 + 0xcc);
    FUN_1448052ee(local_a8,&local_40);
    *(undefined8 *)(param_1 + 0x30) = local_30;
    *(undefined8 *)(param_1 + 0x20) = local_40;
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0x179) = 1;
  }
  FUN_14921fb96(local_a8,param_1 + 8,param_1 + 0x50,param_1 + 0x170);
  puVar2 = local_a8;
  puVar3 = (undefined8 *)(param_1 + 0x110);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14921fb96 FUN_14921fb96 body=2153 status=ok
// SIG undefined FUN_14921fb96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_14921fb96(undefined1 (*param_1) [16],double *param_2,double *param_3,char *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
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
  undefined4 uVar26;
  int iVar27;
  double *pdVar28;
  double *pdVar29;
  uint uVar30;
  longlong lVar31;
  double *pdVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar43;
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_328 [32];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8 [4];
  undefined8 local_2a8;
  undefined8 local_2a0;
  double local_298;
  double dStack_290;
  double local_288 [2];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  pdVar32 = local_2c8;
  for (lVar31 = 9; lVar31 != 0; lVar31 = lVar31 + -1) {
    *pdVar32 = *param_2;
    param_2 = param_2 + 1;
    pdVar32 = pdVar32 + 1;
  }
  pdVar32 = (double *)&DAT_14c8464e0;
  if (*param_4 != '\0') {
    pdVar32 = local_2c8;
  }
  pdVar29 = (double *)&DAT_14c8464e8;
  if (param_4[1] != '\0') {
    pdVar29 = local_2c8 + 1;
  }
  dVar36 = *pdVar29;
  pdVar29 = (double *)&DAT_14c8464f0;
  if (param_4[2] != '\0') {
    pdVar29 = local_2c8 + 2;
  }
  local_2c8[0] = *pdVar32;
  local_2c8[1] = dVar36;
  dVar43 = *pdVar29;
  local_2c8[2] = *pdVar29;
  pdVar32 = local_2c8 + 3;
  puVar34 = &DAT_14c846508;
  if (param_4[3] != '\0') {
    puVar34 = &local_2a0;
  }
  pdVar29 = (double *)&DAT_14c8464f8;
  if (param_4[4] != '\0') {
    pdVar29 = pdVar32;
  }
  puVar33 = &DAT_14c846500;
  if (param_4[5] != '\0') {
    puVar33 = &local_2a8;
  }
  local_2c8[3] = *pdVar29;
  local_2a8 = *puVar33;
  local_2a0 = *puVar34;
  pdVar29 = (double *)&DAT_14c846510;
  if (param_4[6] != '\0') {
    pdVar29 = &local_298;
  }
  pdVar28 = (double *)&DAT_14c846518;
  if (param_4[7] != '\0') {
    pdVar28 = &dStack_290;
  }
  local_298 = *pdVar29;
  dVar1 = *pdVar28;
  pdVar29 = (double *)&DAT_14c846520;
  if (param_4[8] != '\0') {
    pdVar29 = local_288;
  }
  local_288[0] = *pdVar29;
  dVar2 = *pdVar29;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = dVar2;
  dStack_290 = dVar1;
  uVar26 = FUN_144a7484c(pdVar32,&local_158);
  dVar25 = local_298;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0;
  auVar10 = _DAT_149934d80;
  auVar48 = *(undefined1 (*) [16])(param_3 + 8);
  dVar7 = auVar48._0_8_;
  dVar9 = auVar48._8_8_;
  auVar51 = *(undefined1 (*) [16])(param_3 + 10);
  dVar8 = auVar51._0_8_;
  dVar40 = auVar51._8_8_;
  auVar50._8_8_ = dVar1;
  auVar50._0_8_ = local_298;
  auVar48 = minpd(auVar50,auVar48);
  auVar50 = minpd(auVar49,auVar51);
  auVar51._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
  auVar51._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
  iVar27 = movmskpd(uVar26,auVar51);
  auVar48._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
  auVar48._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
  uVar30 = movmskpd((int)pdVar32,auVar48);
  local_308 = auVar49;
  if ((uVar30 & 0x3fffffff) == 0 && iVar27 == 0) {
    dVar21 = *param_3;
    dVar22 = param_3[1];
    dVar12 = param_3[3];
    dVar3 = param_3[3];
    dVar16 = *param_3;
    dVar17 = *param_3;
    dVar47 = param_3[1];
    dVar18 = param_3[1];
    dVar23 = param_3[2];
    dVar24 = param_3[3];
    dVar19 = param_3[2];
    dVar4 = param_3[2];
    dVar14 = local_158 * dVar4 * 1.0 +
             dStack_140 * dVar18 + local_148 * dVar17 * -1.0 + dStack_150 * dVar3;
    dVar39 = local_2c8[0] * dVar7;
    dVar36 = dVar36 * dVar9;
    dVar43 = dVar43 * dVar8;
    dVar20 = dVar40 * 0.0;
    dVar41 = dVar36 * dVar21 - dVar39 * dVar22;
    dVar44 = dVar43 * dVar22 - dVar36 * dVar23;
    dVar45 = dVar39 * dVar23 - dVar43 * dVar21;
    dVar11 = dVar20 * dVar24 - dVar20 * dVar24;
    dVar44 = dVar44 + dVar44;
    dVar45 = dVar45 + dVar45;
    dVar41 = dVar41 + dVar41;
    dVar11 = dVar11 + dVar11;
    dVar5 = param_3[4];
    dVar46 = param_3[5];
    dVar6 = param_3[6];
    dVar11 = (dVar11 * dVar24 - dVar11 * dVar24) + dVar3 * dVar11 + dVar20 + param_3[7];
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ =
         dStack_150 * dVar19 * -1.0 +
         local_148 * dVar47 + dStack_140 * dVar16 * 1.0 + local_158 * dVar12;
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *param_1 = auVar13;
    *(double *)param_1[1] =
         dStack_140 * dVar19 * 1.0 +
         ((dVar16 * dStack_150 * 1.0 + local_148 * dVar12) - local_158 * dVar47);
    *(double *)(param_1[1] + 8) =
         local_148 * dVar4 * -1.0 +
         ((dVar17 * local_158 * -1.0 + dStack_140 * dVar3) - dStack_150 * dVar18);
    *(double *)param_1[2] = (dVar41 * dVar22 - dVar23 * dVar45) + dVar12 * dVar44 + dVar39 + dVar5;
    *(double *)(param_1[2] + 8) =
         (dVar44 * dVar23 - dVar41 * dVar21) + dVar3 * dVar45 + dVar36 + dVar46;
    auVar10._8_4_ = SUB84(dVar11,0);
    auVar10._0_8_ = (dVar45 * dVar21 - dVar22 * dVar44) + dVar12 * dVar41 + dVar43 + dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    param_1[3] = auVar10;
    dVar40 = dVar40 * 0.0;
  }
  else {
    dVar4 = *param_3;
    dVar5 = param_3[1];
    dVar6 = param_3[2];
    dVar17 = dVar5 + dVar5;
    dVar47 = dVar6 + dVar6;
    dVar12 = dVar4 * (dVar4 + dVar4);
    uStack_2d0 = 0;
    dVar3 = param_3[3];
    dVar18 = dVar47 * dVar3;
    dVar19 = (dVar4 + dVar4) * param_3[3];
    dVar3 = dVar17 * dVar3;
    local_2e8 = local_2c8[0];
    local_2f8._8_4_ = SUB84(dVar40 * 0.0,0);
    local_2f8._0_8_ = dVar2 * dVar8;
    local_2f8._12_4_ = (int)((ulonglong)(dVar40 * 0.0) >> 0x20);
    local_188 = (1.0 - (dVar12 + dVar5 * dVar17)) * dVar8;
    dVar40 = (dVar47 * dVar5 - dVar19) * dVar8;
    dVar16 = local_298 * dVar7;
    dVar12 = (DAT_149934d80._8_8_ - (dVar6 * dVar47 + dVar12)) * dVar9;
    dVar46 = (dVar17 * dVar4 + dVar18) * dVar7;
    local_1a8 = (dVar47 * dVar5 + dVar19) * dVar9;
    local_1c8 = (*param_3 * dVar47 - dVar3) * dVar7;
    local_1d8._8_4_ = SUB84(dVar46,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar6 * dVar47 + dVar5 * dVar17)) * dVar7;
    local_1d8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar12,0);
    local_1b8._0_8_ = (dVar17 * dVar4 - dVar18) * dVar9;
    local_1b8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1a0 = 0;
    local_198._8_4_ = SUB84(dVar40,0);
    local_198._0_8_ = (dVar3 + *param_3 * dVar47) * dVar8;
    local_198._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar12 = dStack_150 + dStack_150;
    dVar3 = local_148 + local_148;
    dVar47 = local_158 * (local_158 + local_158);
    local_208 = (1.0 - (dVar47 + dStack_150 * dVar12)) * dVar2;
    dVar40 = (local_158 + local_158) * dStack_140;
    local_238 = (dVar12 * local_158 - dVar3 * dStack_140) * dVar1;
    dVar17 = (dVar3 * dStack_150 - dVar40) * dVar2;
    local_258 = ((double)DAT_149934d80 - (local_148 * dVar3 + dStack_150 * dVar12)) * local_298;
    dStack_230 = (DAT_149934d80._8_8_ - (local_148 * dVar3 + dVar47)) * dVar1;
    dStack_250 = (dVar12 * local_158 + dVar3 * dStack_140) * local_298;
    local_228 = (dVar3 * dStack_150 + dVar40) * dVar1;
    local_248 = (local_158 * dVar3 - dVar12 * dStack_140) * local_298;
    uStack_240 = 0;
    uStack_220 = 0;
    dVar40 = (double)local_2f8._8_8_;
    local_218._8_4_ = SUB84(dVar17,0);
    local_218._0_8_ = (dVar12 * dStack_140 + local_158 * dVar3) * dVar2;
    local_218._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    uStack_200 = 0;
    local_1f8 = local_2c8[0];
    uStack_1e0 = 0x3ff0000000000000;
    dStack_2e0 = dVar36;
    local_2d8 = dVar43;
    dStack_1f0 = dVar36;
    local_1e8 = dVar43;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar37._8_8_ = -(ulonglong)(0.0 <= dVar1 * dVar9);
    auVar37._0_8_ = -(ulonglong)(0.0 <= dVar16);
    auVar48 = blendvpd(_DAT_149936790,auVar10,auVar37);
    uVar35 = -(ulonglong)(0.0 <= dVar2 * dVar8);
    dVar36 = (double)(~uVar35 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar35 >> 0x20) & 0x3ff00000) << 0x20);
    dVar43 = auVar48._0_8_;
    local_148 = local_148 * dVar43;
    dStack_150 = dStack_150 * dVar43;
    local_158 = local_158 * dVar43;
    dVar43 = auVar48._8_8_;
    local_128 = local_128 * dVar43;
    local_130 = local_130 * dVar43;
    local_138 = dVar43 * local_138;
    local_108 = local_108 * dVar36;
    local_110 = local_110 * dVar36;
    local_118 = dVar36 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar36 = local_268 * local_268 + local_278 * local_278;
    dVar43 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar42._0_8_ = dVar36 + dVar43;
    auVar42._8_8_ = dVar36 + dVar43;
    auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    auVar48 = sqrtpd(auVar42,auVar42);
    auVar51 = divpd(auVar10,auVar48);
    auVar52._0_8_ = auVar51._0_8_ * local_268;
    auVar52._8_8_ = auVar51._8_8_ * dStack_260;
    auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar38);
    *(ulonglong *)*param_1 =
         (ulonglong)(local_278 * auVar51._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    *(ulonglong *)(*param_1 + 8) =
         (ulonglong)(dStack_270 * auVar51._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    param_1[1] = auVar48;
    *(undefined8 *)param_1[2] = local_f8;
    *(undefined8 *)(param_1[2] + 8) = uStack_f0;
    *(undefined8 *)param_1[3] = local_e8;
    *(undefined8 *)(param_1[3] + 8) = 0;
  }
  auVar15._8_4_ = SUB84(dVar1 * dVar9,0);
  auVar15._0_8_ = dVar25 * dVar7;
  auVar15._12_4_ = (int)((ulonglong)(dVar1 * dVar9) >> 0x20);
  param_1[4] = auVar15;
  *(double *)param_1[5] = dVar2 * dVar8;
  *(double *)(param_1[5] + 8) = dVar40;
  if ((local_d0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149220400 FUN_149220400 body=25 status=ok
// SIG undefined FUN_149220400(void)

undefined8 FUN_149220400(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922041a FUN_14922041a body=346 status=ok
// SIG undefined FUN_14922041a(void)

void FUN_14922041a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  puVar9 = (undefined8 *)
           FUN_144828ac0(*param_2 + 0x20,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = *param_2;
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  puVar12 = *(undefined8 **)(lVar8 + 0x60);
  puVar13 = *(undefined8 **)(lVar8 + 0x80);
  uVar3 = *(undefined8 *)(lVar8 + 0xa0);
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar11 = (char *)FUN_144828ac0(lVar8 + 0xc0,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  if (*pcVar11 == '\0') {
    uVar7 = puVar12[5];
    uVar1 = puVar12[6];
    *puVar9 = puVar12[4];
    puVar9[1] = uVar7;
    puVar9[2] = uVar1;
    local_b8[0] = *puVar12;
    local_b8[1] = puVar12[1];
    local_a8 = *(undefined4 *)(puVar12 + 2);
    uStack_a4 = *(undefined4 *)((longlong)puVar12 + 0x14);
    uStack_a0 = *(undefined4 *)(puVar12 + 3);
    uStack_9c = *(undefined4 *)((longlong)puVar12 + 0x1c);
    FUN_1448052ee(local_b8,&local_58);
    puVar9[5] = local_48;
    puVar9[3] = local_58;
    puVar9[4] = uStack_50;
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x44);
    uVar5 = *(undefined4 *)(puVar12 + 9);
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x4c);
    uVar1 = puVar12[10];
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar12 + 8);
    *(undefined4 *)((longlong)puVar9 + 0x34) = uVar4;
    *(undefined4 *)(puVar9 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar6;
    puVar9[8] = uVar1;
    *pcVar11 = '\x01';
  }
  FUN_14921fb96(local_b8,puVar9,uVar2,uVar3);
  puVar12 = local_b8;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149220576 FUN_149220576 body=102 status=ok
// SIG undefined FUN_149220576(void)

void FUN_149220576(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492205de(param_1);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492205de FUN_1492205de body=244 status=ok
// SIG undefined FUN_1492205de(void)

void FUN_1492205de(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x179) == '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xe0);
    local_a8[0] = *(undefined8 *)(param_1 + 0xb0);
    local_a8[1] = *(undefined8 *)(param_1 + 0xb8);
    local_98 = *(undefined4 *)(param_1 + 0xc0);
    uStack_94 = *(undefined4 *)(param_1 + 0xc4);
    uStack_90 = *(undefined4 *)(param_1 + 200);
    uStack_8c = *(undefined4 *)(param_1 + 0xcc);
    FUN_1448052ee(local_a8,&local_40);
    *(undefined8 *)(param_1 + 0x30) = local_30;
    *(undefined8 *)(param_1 + 0x20) = local_40;
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0x179) = 1;
  }
  FUN_14921fb96(local_a8,param_1 + 8,param_1 + 0x50,param_1 + 0x170);
  puVar2 = local_a8;
  puVar3 = (undefined8 *)(param_1 + 0x110);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492206d4 FUN_1492206d4 body=25 status=ok
// SIG undefined FUN_1492206d4(void)

undefined8 FUN_1492206d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492206ee FUN_1492206ee body=46 status=ok
// SIG undefined FUN_1492206ee(void)

void FUN_1492206ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14922076e(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined1 *)puVar1[0xc]);
  return;
}



// FUNCTION 149220724 FUN_149220724 body=73 status=ok
// SIG undefined FUN_149220724(void)

void FUN_149220724(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14922076e(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x210,
                *(undefined1 *)(param_1 + 0x220));
  return;
}



// FUNCTION 14922076e FUN_14922076e body=482 status=ok
// SIG undefined FUN_14922076e(void)

void FUN_14922076e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 8) == 0) goto LAB_149220796;
  cVar2 = FUN_1403f35db(*(longlong *)(param_1 + 8),&DAT_14cc074d8);
  if (cVar2 == '\0') {
    FUN_1446f57c6(&DAT_14cc074d8,&local_40);
    FUN_1400021e4(&local_40,&local_58);
    puVar7 = local_58;
    if ((int)uStack_50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    local_40 = 4;
    local_3c = 1;
    FUN_1444b0062(param_1,&local_40,
                  L"It\'s recommended to use this node in the %s event. When using it in other events please consider caching the results."
                  ,puVar7);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)FUN_149220fb4(param_1,param_2);
  if (plVar3 == (longlong *)0x0) goto LAB_149220796;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  lVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3,param_3);
  if ((lVar4 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x18), lVar1 != 0)) {
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar5 = FUN_144a810c6();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (bVar8) goto LAB_1492208d7;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_1492208d7:
      lVar6 = FUN_145886142();
      if (((*(longlong *)(lVar1 + 0x70) == lVar6) &&
          (*(longlong **)(param_1 + 0x120) != (longlong *)0x0 && *(int *)(param_1 + 0x128) != 0)) &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x30))(), cVar2 != '\0')) {
        if (*(int *)(param_1 + 0x128) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x120);
        }
        local_68 = param_5;
        (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_4,*(undefined8 *)(lVar4 + 0x20));
      }
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_149220796:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149220952 FUN_149220952 body=103 status=ok
// SIG undefined FUN_149220952(void)

void FUN_149220952(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  
  uVar1 = *(undefined8 *)*param_2;
  puVar2 = (undefined1 *)((undefined8 *)*param_2)[4];
  lVar3 = *(longlong *)(param_1 + 0xc0);
  *puVar2 = 0;
  if (*(longlong **)(lVar3 + 0x130) != (longlong *)0x0 && *(int *)(lVar3 + 0x138) != 0) {
    cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x130) + 0x30))();
    if (cVar4 != '\0') {
      if (*(int *)(lVar3 + 0x138) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar3 + 0x130);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,uVar1);
      *puVar2 = uVar5;
    }
  }
  return;
}



// FUNCTION 1492209c0 FUN_1492209c0 body=172 status=ok
// SIG undefined FUN_1492209c0(void)

void FUN_1492209c0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [304];
  longlong *local_c8;
  int local_c0;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_c8 != (longlong *)0x0 && local_c0 != 0) &&
     (cVar1 = (**(code **)(*local_c8 + 0x30))(), cVar1 != '\0')) {
    if (local_c0 == 0) {
      local_c8 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*local_c8 + 0x58))(local_c8,param_1 + 8);
    *(undefined1 *)(param_1 + 0x10) = uVar2;
  }
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149220a6e FUN_149220a6e body=909 status=ok
// SIG undefined FUN_149220a6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149220a6e(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc08658) {
    FUN_144b3d300(&DAT_14cc08658);
    if (DAT_14cc08658 == -1) {
      DAT_14cc08648 = 0;
      _DAT_14cc08650 = 0;
      atexit(FUN_1444afe4c);
      _Init_thread_footer(&DAT_14cc08658);
    }
  }
  if (DAT_14cc08650 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc08670) {
      FUN_144b3d300(&DAT_14cc08670);
      if (DAT_14cc08670 == -1) {
        DAT_14cc08660 = (undefined2 *)0x0;
        _DAT_14cc08668 = 2;
        FUN_149157980(&DAT_14cc08660,2,0);
        *DAT_14cc08660 = 0x201;
        atexit((_func_5014 *)&LAB_1444afe7d);
        _Init_thread_footer(&DAT_14cc08670);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc08650;
    uVar2 = DAT_14cc08650 + 1;
    if (DAT_14cc08654 < uVar2) {
      uVar4 = _DAT_14cc08650 & 0xffffffff;
      DAT_14cc08650 = uVar2;
      FUN_1490f2336(&DAT_14cc08648,uVar4);
      uVar2 = DAT_14cc08650;
    }
    DAT_14cc08650 = uVar2;
    uVar1 = DAT_14c764f1c;
    lVar5 = lVar5 * 0x50 + DAT_14cc08648;
    FUN_1446f470e(local_68,L"NameSpace",1);
    FUN_144478fc0(lVar5,local_68[0],0,uVar1);
    uVar2 = DAT_14cc08650;
    lVar5 = (longlong)(int)DAT_14cc08650;
    DAT_14cc08650 = DAT_14cc08650 + 1;
    if (DAT_14cc08654 < DAT_14cc08650) {
      FUN_1490f2336(&DAT_14cc08648,uVar2);
    }
    uVar1 = DAT_14c764f1c;
    lVar5 = lVar5 * 0x50 + DAT_14cc08648;
    FUN_1446f470e(local_68,L"Path",1);
    FUN_144478fc0(lVar5,local_68[0],0,uVar1);
    uVar2 = DAT_14cc08650;
    lVar5 = (longlong)(int)DAT_14cc08650;
    DAT_14cc08650 = DAT_14cc08650 + 1;
    if (DAT_14cc08654 < DAT_14cc08650) {
      FUN_1490f2336(&DAT_14cc08648,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc08648;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f470e(&local_70,L"Default",1);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc08660);
    uVar2 = DAT_14cc08650;
    lVar5 = (longlong)(int)DAT_14cc08650;
    DAT_14cc08650 = DAT_14cc08650 + 1;
    if (DAT_14cc08654 < DAT_14cc08650) {
      FUN_1490f2336(&DAT_14cc08648,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc08648;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f470e(&local_70,L"Result",1);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,1,&DAT_14cc08660);
    uVar2 = DAT_14cc08650;
    lVar5 = (longlong)(int)DAT_14cc08650;
    uVar3 = DAT_14cc08650 + 1;
    _DAT_14cc08650 = CONCAT44(DAT_14cc08654,uVar3);
    if (DAT_14cc08654 < uVar3) {
      FUN_1490f2336(&DAT_14cc08648,uVar2);
    }
    uVar1 = DAT_14c764f08;
    lVar5 = lVar5 * 0x50 + DAT_14cc08648;
    FUN_1446f470e(local_68,L"Found",1);
    FUN_144478fc0(lVar5,local_68[0],1,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc08648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149220dfc FUN_149220dfc body=439 status=ok
// SIG undefined FUN_149220dfc(void)

void FUN_149220dfc(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(lVar11 + 8) != 0) {
    cVar6 = FUN_1403f35db(*(longlong *)(lVar11 + 8),&DAT_14cc074d8);
    if (cVar6 == '\0') {
      FUN_1446f57c6(&DAT_14cc074d8,&local_48);
      FUN_1400021e4(&local_48,&local_58);
      puVar12 = local_58;
      if ((int)uStack_50 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      local_48 = 4;
      local_44 = 1;
      FUN_1444b0062(lVar11,&local_48,
                    L"It\'s recommended to use this node in the %s event. When using it in other events please consider caching the results."
                    ,puVar12);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    puVar9 = (undefined8 *)*param_2;
    if (puVar9[10] == 0) {
      uVar7 = puVar9[9];
    }
    else {
      uVar7 = FUN_1490f79e6();
      puVar9 = (undefined8 *)*param_2;
    }
    if (puVar9[0xe] == 0) {
      uVar8 = puVar9[0xd];
    }
    else {
      uVar8 = FUN_1490f79e6();
      puVar9 = (undefined8 *)*param_2;
    }
    uVar1 = *puVar9;
    uVar2 = puVar9[4];
    uVar3 = puVar9[8];
    uVar4 = puVar9[0xc];
    puVar5 = (undefined1 *)puVar9[0x10];
    *puVar5 = 0;
    plVar10 = (longlong *)FUN_149220fb4(lVar11,uVar1);
    if (plVar10 != (longlong *)0x0) {
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      lVar11 = (**(code **)(*plVar10 + 0x2b8))(plVar10,uVar2);
      if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x18) != 0)) {
        FUN_14446f40e(uVar8,uVar4,*(longlong *)(lVar11 + 0x18),*(undefined8 *)(lVar11 + 0x20));
        *puVar5 = 1;
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_149220e2a;
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14446f40e(uVar8,uVar4,uVar7,uVar3);
  }
LAB_149220e2a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149220fb4 FUN_149220fb4 body=182 status=ok
// SIG undefined FUN_149220fb4(void)

longlong FUN_149220fb4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x118);
  if (0 < (longlong)uVar5) {
    do {
      if ((longlong)*(int *)(param_1 + 0x118) < (longlong)uVar5) {
        return 0;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + -8 + uVar5 * 8);
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
        lVar4 = FUN_1459f5e4e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          iVar3 = *(int *)(lVar1 + 0x30);
          if (iVar3 == *(int *)(param_2 + 1)) {
            if (iVar3 < 2) {
              return lVar1;
            }
            iVar3 = wcscmp(*(wchar_t **)(lVar1 + 0x28),(wchar_t *)*param_2);
            if (iVar3 == 0) {
              return lVar1;
            }
          }
          else if (*(int *)(param_2 + 1) + iVar3 == 1) {
            return lVar1;
          }
        }
      }
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  return 0;
}



// FUNCTION 14922106a FUN_14922106a body=169 status=ok
// SIG undefined FUN_14922106a(void)

void FUN_14922106a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar5 = (undefined8 *)*param_2;
  uVar2 = *puVar5;
  uVar1 = *(undefined4 *)puVar5[4];
  local_98 = *(undefined4 *)puVar5[8];
  local_90 = puVar5[0xc];
  local_88 = *(undefined4 *)puVar5[0x10];
  local_80 = *(undefined4 *)puVar5[0x14];
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  puVar5 = (undefined8 *)puVar5[0x1c];
  puVar6 = local_78;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_14922135c(uVar3,local_78,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922111c FUN_14922111c body=184 status=ok
// SIG undefined FUN_14922111c(void)

void FUN_14922111c(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_90 = *(undefined4 *)(param_1 + 0x19c);
  local_98 = *(undefined4 *)(param_1 + 0x198);
  local_a0 = param_1 + 0x188;
  uVar1 = *(undefined4 *)(param_1 + 0x180);
  local_a8 = *(undefined4 *)(param_1 + 0x184);
  puVar3 = (undefined8 *)(param_1 + 0x1b0);
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_14922135c(param_1 + 0x10,local_88,param_1 + 0x120,uVar1);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492211d6 FUN_1492211d6 body=169 status=ok
// SIG undefined FUN_1492211d6(void)

void FUN_1492211d6(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar5 = (undefined8 *)*param_2;
  uVar2 = *puVar5;
  uVar1 = *(undefined4 *)puVar5[4];
  local_98 = *(undefined4 *)puVar5[8];
  local_90 = puVar5[0xc];
  local_88 = *(undefined4 *)puVar5[0x10];
  local_80 = *(undefined4 *)puVar5[0x14];
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  puVar5 = (undefined8 *)puVar5[0x1c];
  puVar6 = local_78;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_14922135c(uVar3,local_78,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149221288 FUN_149221288 body=184 status=ok
// SIG undefined FUN_149221288(void)

void FUN_149221288(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_90 = *(undefined4 *)(param_1 + 0x19c);
  local_98 = *(undefined4 *)(param_1 + 0x198);
  local_a0 = param_1 + 0x188;
  uVar1 = *(undefined4 *)(param_1 + 0x180);
  local_a8 = *(undefined4 *)(param_1 + 0x184);
  puVar3 = (undefined8 *)(param_1 + 0x1b0);
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_14922135c(param_1 + 0x10,local_88,param_1 + 0x120,uVar1);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149221342 FUN_149221342 body=25 status=ok
// SIG undefined FUN_149221342(void)

undefined8 FUN_149221342(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922135c FUN_14922135c body=365 status=ok
// SIG undefined FUN_14922135c(void)

void FUN_14922135c(longlong param_1,undefined8 *param_2,undefined8 param_3,float param_4,
                  float param_5,undefined4 *param_6,undefined4 param_7,uint param_8)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_178 [40];
  undefined1 local_150 [24];
  undefined8 local_138;
  undefined1 local_130;
  longlong local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    cVar2 = FUN_144467452(lVar1);
    if (cVar2 != '\0') {
      uVar3 = 0x40;
      if ((int)param_8 < 0x40) {
        uVar3 = param_8;
      }
      uVar6 = 4;
      if (4 < (int)uVar3) {
        uVar6 = (ulonglong)uVar3;
      }
      puVar5 = local_f8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar4 = 0;
      local_138 = 0;
      local_130 = 2;
      local_128[0] = 0;
      local_128[1] = 0;
      local_118 = *param_6;
      uStack_114 = param_6[1];
      uStack_110 = param_6[2];
      uStack_10c = param_6[3];
      local_108 = param_7;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      FUN_140b463b8(local_128,uVar6,1);
      param_5 = param_5 - param_4;
      do {
        FUN_14915cd76(param_3,param_4,local_128[0] + lVar4,local_150);
        param_4 = param_4 + param_5 / (float)(int)(param_8 - 1);
        lVar4 = lVar4 + 0x18;
      } while (uVar6 * 0x18 != lVar4);
      FUN_144467412(lVar1,&local_138);
      FUN_1490de8da(&local_138);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492214ca FUN_1492214ca body=25 status=ok
// SIG undefined FUN_1492214ca(void)

undefined8 FUN_1492214ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492214e4 FUN_1492214e4 body=153 status=ok
// SIG undefined FUN_1492214e4(void)

void FUN_1492214e4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  local_18 = *(undefined8 *)*param_2;
  local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1b0);
  if (lVar1 != 0) {
    local_20 = &local_18;
    local_28 = 0;
    local_38 = param_2[8];
    local_30 = *(undefined4 *)param_2[0xc];
    FUN_1492217b8(*(longlong *)(param_1 + 0xc0),param_2[0x10],lVar1,*(undefined4 *)param_2[4]);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149221586 FUN_149221586 body=40 status=ok
// SIG undefined FUN_149221586(void)

void FUN_149221586(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492215ae(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1492215ae FUN_1492215ae body=155 status=ok
// SIG undefined FUN_1492215ae(void)

void FUN_1492215ae(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)(param_1 + 0x1f0);
  local_10 = *(undefined4 *)(param_1 + 0x1f8);
  if (*(longlong *)(param_2 + 0x1b0) != 0) {
    local_38 = param_1 + 0x204;
    local_30 = *(undefined4 *)(param_1 + 0x214);
    local_20 = &local_18;
    local_28 = 0;
    FUN_1492217b8(param_2,param_1 + 0x220,*(longlong *)(param_2 + 0x1b0),
                  *(undefined4 *)(param_1 + 0x200));
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922164a FUN_14922164a body=157 status=ok
// SIG undefined FUN_14922164a(void)

void FUN_14922164a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  local_18 = *(undefined8 *)puVar1[4];
  local_10 = *(undefined4 *)((undefined8 *)puVar1[4] + 1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1b0);
  if (lVar2 != 0) {
    local_20 = &local_18;
    local_38 = puVar1[0xc];
    local_30 = *(undefined4 *)puVar1[0x10];
    local_28 = *puVar1;
    FUN_1492217b8(*(longlong *)(param_1 + 0xc0),puVar1[0x14],lVar2,*(undefined4 *)puVar1[8]);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492216f0 FUN_1492216f0 body=40 status=ok
// SIG undefined FUN_1492216f0(void)

void FUN_1492216f0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149221718(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 149221718 FUN_149221718 body=158 status=ok
// SIG undefined FUN_149221718(void)

void FUN_149221718(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)(param_1 + 0x260);
  local_10 = *(undefined4 *)(param_1 + 0x268);
  if (*(longlong *)(param_2 + 0x1b0) != 0) {
    local_28 = param_1 + 0x1f0;
    local_38 = param_1 + 0x274;
    local_30 = *(undefined4 *)(param_1 + 0x284);
    local_20 = &local_18;
    FUN_1492217b8(param_2,param_1 + 0x290,*(longlong *)(param_2 + 0x1b0),
                  *(undefined4 *)(param_1 + 0x270));
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492217b8 FUN_1492217b8 body=1080 status=ok
// SIG undefined FUN_1492217b8(void)

void FUN_1492217b8(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_488 [32];
  undefined1 *local_468;
  longlong *local_460;
  undefined8 *local_458;
  undefined4 *local_450;
  longlong **local_448;
  longlong *local_440;
  undefined8 *local_438;
  undefined8 *local_430;
  code *local_428;
  undefined1 **local_420;
  longlong local_418;
  undefined4 local_40c;
  undefined8 local_408;
  undefined1 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined8 local_3c8 [12];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_338;
  undefined1 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined1 *puStack_310;
  undefined4 local_308;
  undefined8 local_2f8 [12];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  longlong local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_228 [12];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_158 [12];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_488;
  lVar2 = *(longlong *)(param_1 + 0x58);
  local_418 = param_3;
  local_40c = param_4;
  if ((lVar2 != 0) && (cVar3 = FUN_144467452(), cVar3 != '\0')) {
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    if ((param_8 != 0) && ((longlong)*(int *)(param_8 + 8) != 0)) {
      lVar5 = (longlong)*(int *)(param_8 + 8) * 0xc;
      do {
        uVar4 = FUN_140813180(param_3);
        if (((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_3 + 0xc0))) &&
           (local_268 = *(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)uVar4 * 8),
           local_268 != 0)) {
          local_408 = CONCAT71(local_408._1_7_,1);
          local_198 = &local_268;
          local_190 = &local_408;
          FUN_1492d0144(&local_c8,&local_338,&local_198);
        }
        lVar5 = lVar5 + -0xc;
      } while (lVar5 != 0);
    }
    puVar7 = param_2;
    puVar8 = local_158;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_198 = (longlong *)0x0;
    local_190 = (undefined8 *)CONCAT71(local_190._1_7_,1);
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0x3f800000;
    uStack_170 = 0x3f80000000000000;
    local_168 = param_6;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    puVar7 = param_2;
    puVar8 = local_228;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_268 = 0;
    local_260 = 1;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0x3f80000000000000;
    uStack_240 = 0x3f80000000000000;
    local_238 = param_6;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    puVar7 = param_2;
    puVar8 = local_2f8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_338 = 0;
    local_330 = 1;
    local_328 = 0;
    uStack_320 = 0;
    local_318 = 0;
    puStack_310 = &DAT_3f8000003f800000;
    local_308 = param_6;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    puVar7 = local_3c8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    }
    local_408 = 0;
    local_400 = 1;
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_3e8 = *param_5;
    uStack_3e4 = param_5[1];
    uStack_3e0 = param_5[2];
    uStack_3dc = param_5[3];
    local_3d8 = param_6;
    local_368 = 0;
    uStack_360 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_348 = 0;
    iVar1 = *(int *)(param_3 + 0xc0);
    iVar6 = iVar1 * 2;
    if (iVar1 < 0) {
LAB_149221bea:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 != 0) {
      FUN_1447a8aa0(&local_188);
      iVar1 = *(int *)(param_3 + 0xc0);
      iVar6 = iVar1 * 2;
      if (iVar1 < 0) goto LAB_149221bea;
      if (iVar1 != 0) {
        FUN_1447a8aa0(&local_258);
        iVar1 = *(int *)(param_3 + 0xc0);
        iVar6 = iVar1 * 2;
        if (iVar1 < 0) goto LAB_149221bea;
        if (iVar1 != 0) {
          FUN_1447a8aa0(&local_328);
          iVar1 = *(int *)(param_3 + 0xc0);
          iVar6 = iVar1 * 6;
          if (iVar1 < 0) goto LAB_149221bea;
          if (iVar1 != 0) {
            FUN_1447a8aa0(&local_3f8);
          }
        }
      }
    }
    local_468 = (undefined1 *)&param_7;
    local_420 = &local_468;
    local_460 = &local_418;
    local_458 = &local_c8;
    local_450 = &local_40c;
    local_428 = FUN_1444b4f3c;
    local_448 = &local_198;
    local_440 = &local_268;
    local_438 = &local_338;
    local_430 = &local_408;
    FUN_1491a9560(param_3);
    FUN_144467412(lVar2,&local_198);
    FUN_144467412(lVar2,&local_268);
    FUN_144467412(lVar2,&local_338);
    FUN_144467412(lVar2,&local_408);
    FUN_1490de8da(&local_408);
    FUN_1490de8da(&local_338);
    FUN_1490de8da(&local_268);
    FUN_1490de8da(&local_198);
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_14928b832(&local_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149221bf2 FUN_149221bf2 body=141 status=ok
// SIG undefined FUN_149221bf2(void)

void FUN_149221bf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_1c [4];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_2;
  local_48 = *(undefined4 *)puVar1[0xc];
  local_38 = puVar1[0x14];
  local_30 = *(undefined1 *)puVar1[0x18];
  local_40 = local_1c;
  local_1c[0] = 1;
  local_18 = *(undefined8 *)puVar1[0x10];
  FUN_149221df8(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8]);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149221c88 FUN_149221c88 body=159 status=ok
// SIG undefined FUN_149221c88(void)

void FUN_149221c88(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_30 = *(undefined1 *)(param_1 + 0x2a0);
  local_38 = param_1 + 0x240;
  local_48 = *(undefined4 *)(param_1 + 0x230);
  local_40 = local_24;
  local_24[0] = 1;
  local_20 = *(undefined8 *)(param_1 + 0x234);
  FUN_149221df8(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x208,param_1 + 0x220);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149221d28 FUN_149221d28 body=88 status=ok
// SIG undefined FUN_149221d28(void)

void FUN_149221d28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149221df8(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined4 *)puVar1[0xc],puVar1[0x10],puVar1[0x14],*(undefined1 *)puVar1[0x18]);
  return;
}



// FUNCTION 149221d88 FUN_149221d88 body=111 status=ok
// SIG undefined FUN_149221d88(void)

void FUN_149221d88(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149221df8(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x208,param_1 + 0x220,
                *(undefined4 *)(param_1 + 0x230),param_1 + 0x234,param_1 + 0x240,
                *(undefined1 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 149221df8 FUN_149221df8 body=1003 status=ok
// SIG undefined FUN_149221df8(void)

void FUN_149221df8(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 param_4,undefined4 param_5,char *param_6,undefined8 param_7,
                  char param_8)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar9 = *(longlong *)(param_1 + 0x58);
  if (lVar9 != 0 && param_8 == '\x01') {
    local_d8 = *(double *)param_2[1];
    local_e8 = *param_2;
    local_f8 = *(double *)param_3[1];
    local_108 = *param_3;
    if ((((uint)*(ushort *)(param_6 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_6 + 4) != 0))
       && (*param_6 != '\0')) {
      uVar1 = *(undefined8 *)(param_1 + 0x1b0);
      local_170 = *(undefined4 *)(param_6 + 8);
      local_178 = *(undefined8 *)param_6;
      uVar8 = FUN_140813180(uVar1);
      FUN_14486750c(uVar1,&local_168,uVar8,0);
      dVar10 = (double)local_e8._0_8_ * local_128;
      dVar11 = (double)local_e8._8_8_ * dStack_120;
      local_d8 = local_d8 * local_118;
      dVar4 = dVar11 * local_168 - dVar10 * dStack_160;
      dVar5 = local_d8 * dStack_160 - dVar11 * local_158;
      dVar2 = dVar10 * local_158 - local_d8 * local_168;
      dVar5 = dVar5 + dVar5;
      dVar2 = dVar2 + dVar2;
      dVar4 = dVar4 + dVar4;
      local_128 = local_128 * (double)local_108._0_8_;
      dStack_120 = dStack_120 * (double)local_108._8_8_;
      local_f8 = local_f8 * local_118;
      dVar6 = dStack_120 * local_168 - dStack_160 * local_128;
      dVar7 = local_f8 * dStack_160 - local_158 * dStack_120;
      dVar3 = local_128 * local_158 - local_168 * local_f8;
      dVar7 = dVar7 + dVar7;
      dVar3 = dVar3 + dVar3;
      dVar6 = dVar6 + dVar6;
      dVar11 = (local_158 * dVar5 - local_168 * dVar4) + dStack_150 * dVar2 + dVar11 + dStack_140;
      local_d8 = dVar4 * dStack_150 + local_d8 + (dVar2 * local_168 - dVar5 * dStack_160) +
                 local_138;
      local_e8._8_4_ = SUB84(dVar11,0);
      local_e8._0_8_ =
           (dVar4 * dStack_160 - dVar2 * local_158) + dStack_150 * dVar5 + dVar10 + local_148;
      local_e8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      dStack_140 = (local_158 * dVar7 - local_168 * dVar6) + dStack_150 * dVar3 + dStack_120 +
                   dStack_140;
      local_f8 = dVar6 * dStack_150 + local_f8 + (dVar3 * local_168 - dVar7 * dStack_160) +
                 local_138;
      local_108._8_4_ = SUB84(dStack_140,0);
      local_108._0_8_ =
           (dVar6 * dStack_160 - dVar3 * local_158) + dStack_150 * dVar7 + local_128 + local_148;
      local_108._12_4_ = (int)((ulonglong)dStack_140 >> 0x20);
      lVar9 = *(longlong *)(param_1 + 0x58);
    }
    local_180 = param_5;
    local_188 = param_4;
    FUN_14446764a(lVar9,param_7,local_e8,local_108);
  }
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492221e4 FUN_1492221e4 body=354 status=ok
// SIG undefined FUN_1492221e4(void)

undefined8 FUN_1492221e4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_228 [32];
  undefined **local_208 [2];
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined2 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f8 = &PTR_FUN_14bad5c20;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0x3f91111111111111;
  local_1c0 = 0x800;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_208[0] = &PTR_FUN_14bb03aa0;
  local_d8 = *(undefined8 *)(param_1 + 0x200);
  local_e8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x1f8);
  local_c0 = *(undefined8 *)(param_1 + 0x218);
  local_d0 = *(undefined8 *)(param_1 + 0x208);
  uStack_c8 = *(undefined8 *)(param_1 + 0x210);
  local_b8 = *(undefined8 *)(param_1 + 0x220);
  uStack_b0 = *(undefined8 *)(param_1 + 0x228);
  local_a8 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(param_1 + 0x240);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2a0);
  FUN_149222348(param_2,local_208);
  local_208[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_1f8);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149222348 FUN_149222348 body=211 status=ok
// SIG undefined FUN_149222348(void)

undefined8 * FUN_149222348(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d4ea6();
  param_1[2] = uVar1;
  uVar1 = FUN_146686b0a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922241c FUN_14922241c body=354 status=ok
// SIG undefined FUN_14922241c(void)

undefined8 FUN_14922241c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_228 [32];
  undefined **local_208 [2];
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined2 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f8 = &PTR_FUN_14bad5c20;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0x3f91111111111111;
  local_1c0 = 0x800;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_208[0] = &PTR_FUN_14bb03aa0;
  local_d8 = *(undefined8 *)(param_1 + 0x200);
  local_e8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x1f8);
  local_c0 = *(undefined8 *)(param_1 + 0x218);
  local_d0 = *(undefined8 *)(param_1 + 0x208);
  uStack_c8 = *(undefined8 *)(param_1 + 0x210);
  local_b8 = *(undefined8 *)(param_1 + 0x220);
  uStack_b0 = *(undefined8 *)(param_1 + 0x228);
  local_a8 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(param_1 + 0x240);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2a0);
  FUN_149222580(param_2,local_208);
  local_208[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_1f8);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149222580 FUN_149222580 body=211 status=ok
// SIG undefined FUN_149222580(void)

undefined8 * FUN_149222580(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d5244();
  param_1[2] = uVar1;
  uVar1 = FUN_146686b0a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149222654 FUN_149222654 body=147 status=ok
// SIG undefined FUN_149222654(void)

void FUN_149222654(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c [4];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  local_40 = param_2[0x10];
  local_38 = *(undefined1 *)param_2[0x14];
  local_30 = *(undefined8 *)*param_2;
  local_28 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  local_48 = local_1c;
  local_1c[0] = 1;
  local_18 = *(undefined8 *)param_2[0xc];
  FUN_1492228ba(*(undefined8 *)(param_1 + 0xc0),&local_30,param_2[4],*(undefined4 *)param_2[8]);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492226f0 FUN_1492226f0 body=164 status=ok
// SIG undefined FUN_1492226f0(void)

void FUN_1492226f0(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong local_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x1f0);
  local_30 = *(undefined4 *)(param_1 + 0x1f8);
  local_48 = *(undefined1 *)(param_1 + 0x280);
  local_50 = param_1 + 0x220;
  local_58 = local_24;
  local_24[0] = 1;
  local_20 = *(undefined8 *)(param_1 + 0x214);
  FUN_1492228ba(param_1 + 0x10,&local_38,param_1 + 0x200,*(undefined4 *)(param_1 + 0x210));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149222796 FUN_149222796 body=131 status=ok
// SIG undefined FUN_149222796(void)

void FUN_149222796(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  local_38 = param_2[0xc];
  local_30 = param_2[0x10];
  local_28 = *(undefined1 *)param_2[0x14];
  local_20 = *(undefined8 *)*param_2;
  local_18 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_1492228ba(*(undefined8 *)(param_1 + 0xc0),&local_20,param_2[4],*(undefined4 *)param_2[8]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149222822 FUN_149222822 body=151 status=ok
// SIG undefined FUN_149222822(void)

void FUN_149222822(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = *(undefined1 *)(param_1 + 0x280);
  local_40 = param_1 + 0x220;
  local_48 = param_1 + 0x214;
  FUN_1492228ba(param_1 + 0x10,&local_28,param_1 + 0x200,*(undefined4 *)(param_1 + 0x210));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492228ba FUN_1492228ba body=795 status=ok
// SIG undefined FUN_1492228ba(void)

void FUN_1492228ba(longlong param_1,double *param_2,undefined8 param_3,undefined4 param_4,
                  char *param_5,undefined8 param_6,char param_7)

{
  double *pdVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  uint uVar8;
  double *pdVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_7 == '\x01') {
    local_138 = param_4;
    if ((((uint)*(ushort *)(param_5 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_5 + 4) != 0))
       && (*param_5 != '\0')) {
      uVar3 = *(undefined8 *)(param_1 + 0x1b0);
      local_100 = *(undefined4 *)(param_5 + 8);
      local_108 = *(undefined8 *)param_5;
      uVar7 = FUN_140813180(uVar3);
      FUN_14486750c(uVar3,&local_f8,uVar7,0);
      local_118 = 0;
      uStack_110 = 0;
      iVar2 = *(int *)(param_2 + 1);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (iVar2 != 0) {
        FUN_1447a8aa0(&local_118);
        if ((longlong)*(int *)(param_2 + 1) != 0) {
          pdVar9 = (double *)*param_2;
          pdVar1 = pdVar9 + (longlong)*(int *)(param_2 + 1) * 3;
          do {
            uVar6 = uStack_110;
            dVar12 = *pdVar9 * local_b8;
            dVar13 = pdVar9[1] * dStack_b0;
            dVar11 = pdVar9[2] * local_a8;
            dVar5 = (double)CONCAT44(uStack_ec,uStack_f0);
            dVar14 = dVar13 * local_f8 - dVar12 * dVar5;
            dVar15 = dVar11 * dVar5 - dVar13 * local_e8;
            dVar16 = dVar12 * local_e8 - local_f8 * dVar11;
            dVar15 = dVar15 + dVar15;
            dVar16 = dVar16 + dVar16;
            dVar14 = dVar14 + dVar14;
            dVar12 = (dVar14 * dVar5 - dVar16 * local_e8) + dStack_e0 * dVar15 + dVar12 + local_d8;
            dVar13 = (local_e8 * dVar15 - local_f8 * dVar14) + dStack_e0 * dVar16 + dVar13 +
                     dStack_d0;
            dVar14 = dVar14 * dStack_e0 + dVar11 + (dVar16 * local_f8 - dVar15 * dVar5) + local_c8;
            lVar10 = (longlong)(int)uStack_110;
            uVar8 = (int)uStack_110 + 1;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
            if (uStack_110._4_4_ < uVar8) {
              FUN_1403e3958(&local_118,uVar6 & 0xffffffff);
            }
            auVar4._8_4_ = SUB84(dVar13,0);
            auVar4._0_8_ = dVar12;
            auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            *(undefined1 (*) [16])(local_118 + lVar10 * 0x18) = auVar4;
            *(double *)(local_118 + 0x10 + lVar10 * 0x18) = dVar14;
            pdVar9 = pdVar9 + 3;
          } while (pdVar9 != pdVar1);
        }
      }
      local_128 = local_118;
      local_120 = (int)uStack_110;
      FUN_144467884(*(undefined8 *)(param_1 + 0x58),param_6,&local_128,param_3);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      uStack_f0 = *(undefined4 *)(param_2 + 1);
      local_f8 = *param_2;
      FUN_144467884(*(longlong *)(param_1 + 0x58),param_6,&local_f8,param_3);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149222bd8 FUN_149222bd8 body=420 status=ok
// SIG undefined FUN_149222bd8(void)

undefined8 FUN_149222bd8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_228 [32];
  undefined **local_208 [2];
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined2 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [4];
  undefined4 local_c8;
  undefined8 local_b8 [12];
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f8 = &PTR_FUN_14bad5c20;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0x3f91111111111111;
  local_1c0 = 0x800;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_208[0] = &PTR_FUN_14bb03c80;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0x3f800000;
  local_e8[3] = 0x3f80000000000000;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = 1;
  FUN_1405b70a4(local_e8,param_1 + 0x1f0);
  local_e8[2] = *(undefined8 *)(param_1 + 0x200);
  local_e8[3] = *(undefined8 *)(param_1 + 0x208);
  local_c8 = *(undefined4 *)(param_1 + 0x210);
  puVar2 = (undefined8 *)(param_1 + 0x220);
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = *(undefined1 *)(param_1 + 0x280);
  FUN_149222d7e(param_2,local_208);
  local_208[0] = &PTR_FUN_14bb03c80;
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  local_208[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_1f8);
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149222d7e FUN_149222d7e body=211 status=ok
// SIG undefined FUN_149222d7e(void)

undefined8 * FUN_149222d7e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d55e2();
  param_1[2] = uVar1;
  uVar1 = FUN_146686e58();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149222e52 FUN_149222e52 body=420 status=ok
// SIG undefined FUN_149222e52(void)

undefined8 FUN_149222e52(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_228 [32];
  undefined **local_208 [2];
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined2 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [4];
  undefined4 local_c8;
  undefined8 local_b8 [12];
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f8 = &PTR_FUN_14bad5c20;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0x3f91111111111111;
  local_1c0 = 0x800;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_208[0] = &PTR_FUN_14bb03c80;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0x3f800000;
  local_e8[3] = 0x3f80000000000000;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = 1;
  FUN_1405b70a4(local_e8,param_1 + 0x1f0);
  local_e8[2] = *(undefined8 *)(param_1 + 0x200);
  local_e8[3] = *(undefined8 *)(param_1 + 0x208);
  local_c8 = *(undefined4 *)(param_1 + 0x210);
  puVar2 = (undefined8 *)(param_1 + 0x220);
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = *(undefined1 *)(param_1 + 0x280);
  FUN_149222ff8(param_2,local_208);
  local_208[0] = &PTR_FUN_14bb03c80;
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  local_208[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_1f8);
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149222ff8 FUN_149222ff8 body=211 status=ok
// SIG undefined FUN_149222ff8(void)

undefined8 * FUN_149222ff8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d592e();
  param_1[2] = uVar1;
  uVar1 = FUN_146686e58();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492230cc FUN_1492230cc body=145 status=ok
// SIG undefined FUN_1492230cc(void)

void FUN_1492230cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  local_38 = *(undefined4 *)puVar1[0xc];
  local_28 = puVar1[0x14];
  local_20 = *(undefined1 *)puVar1[0x18];
  local_30 = local_14;
  local_14[0] = 1;
  local_10 = *(undefined8 *)puVar1[0x10];
  FUN_1492232de(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],*(undefined4 *)puVar1[8]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149223166 FUN_149223166 body=160 status=ok
// SIG undefined FUN_149223166(void)

void FUN_149223166(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_30 = *(undefined1 *)(param_1 + 0x2d0);
  local_38 = param_1 + 0x270;
  local_48 = *(undefined4 *)(param_1 + 0x264);
  local_40 = local_24;
  local_24[0] = 1;
  local_20 = *(undefined8 *)(param_1 + 0x268);
  FUN_1492232de(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x250,*(undefined4 *)(param_1 + 0x260));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149223208 FUN_149223208 body=93 status=ok
// SIG undefined FUN_149223208(void)

void FUN_149223208(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492232de(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],*(undefined4 *)puVar1[8],
                *(undefined4 *)puVar1[0xc],puVar1[0x10],puVar1[0x14],*(undefined1 *)puVar1[0x18]);
  return;
}



// FUNCTION 14922326e FUN_14922326e body=112 status=ok
// SIG undefined FUN_14922326e(void)

void FUN_14922326e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492232de(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x250,*(undefined4 *)(param_1 + 0x260),
                *(undefined4 *)(param_1 + 0x264),param_1 + 0x268,param_1 + 0x280,
                *(undefined1 *)(param_1 + 0x2e0));
  return;
}



// FUNCTION 1492232de FUN_1492232de body=2093 status=ok
// SIG undefined FUN_1492232de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492232de(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,char *param_6,undefined8 param_7,char param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8 [2];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  
  uVar23 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar9 = *(longlong *)(param_1 + 0x58);
  if (lVar9 != 0 && param_8 == '\x01') {
    pdVar13 = local_2d8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar13 = *param_2;
      param_2 = param_2 + 1;
      pdVar13 = pdVar13 + 1;
    }
    if ((((uint)*(ushort *)(param_6 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_6 + 4) != 0))
       && (*param_6 != '\0')) {
      uVar12 = *(undefined8 *)(param_1 + 0x1b0);
      local_340 = *(undefined4 *)(param_6 + 8);
      local_348 = *(undefined8 *)param_6;
      uVar7 = FUN_140813180(uVar12);
      uVar7 = FUN_14486750c(uVar12,&local_338,uVar7,0);
      auVar24 = _DAT_149934d80;
      dVar1 = local_2f8._0_8_;
      dVar5 = local_2f8._8_8_;
      dVar2 = local_2e8._0_8_;
      dVar3 = local_298._0_8_;
      dVar6 = local_298._8_8_;
      dVar4 = local_288._0_8_;
      auVar19 = minpd(local_298,local_2f8);
      auVar22 = minpd(local_288,local_2e8);
      auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar20);
      auVar19._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar19._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar10 = movmskpd((int)uVar12,auVar19);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar16 = local_338 * local_2d8[1];
        dVar18 = local_338 * local_2d8[0];
        dVar26 = local_2d8[0] * dStack_330;
        dVar27 = local_2d8[1] * dStack_330;
        dVar28 = local_2d8[0] * local_328;
        dVar21 = (double)local_2c8._0_8_ * local_328;
        local_2d8[0] = local_2d8[1] * local_328 * -1.0 +
                       (double)local_2c8._0_8_ * dStack_330 +
                       (double)local_2c8._8_8_ * local_338 * 1.0 + local_2d8[0] * dStack_320;
        local_2d8[1] = dVar28 * 1.0 +
                       (double)local_2c8._8_8_ * dStack_330 +
                       (double)local_2c8._0_8_ * local_338 * -1.0 + local_2d8[1] * dStack_320;
        local_2c8._0_8_ =
             (double)local_2c8._8_8_ * local_328 * 1.0 +
             ((dVar16 * 1.0 + (double)local_2c8._0_8_ * dStack_320) - dVar26);
        local_2c8._8_8_ =
             dVar21 * -1.0 + ((dVar18 * -1.0 + (double)local_2c8._8_8_ * dStack_320) - dVar27);
        dVar29 = (double)local_2b8._0_8_ * dVar1;
        dVar30 = (double)local_2b8._8_8_ * dVar5;
        dVar26 = (double)local_2a8._0_8_ * dVar2;
        dVar27 = (double)local_2a8._8_8_ * local_2e8._8_8_;
        dVar28 = dVar30 * local_338 - dStack_330 * dVar29;
        dVar21 = dVar26 * dStack_330 - local_328 * dVar30;
        dVar16 = dVar29 * local_328 - local_338 * dVar26;
        dVar18 = dVar27 * dStack_320 - dStack_320 * dVar27;
        dVar21 = dVar21 + dVar21;
        dVar16 = dVar16 + dVar16;
        dVar28 = dVar28 + dVar28;
        dVar18 = dVar18 + dVar18;
        uVar23 = 0;
        local_f8 = (dVar28 * dStack_330 - local_328 * dVar16) + dStack_320 * dVar21 + dVar29 +
                   local_318;
        dStack_f0 = (dVar21 * local_328 - dVar28 * local_338) + dStack_320 * dVar16 + dVar30 +
                    dStack_310;
        local_e8 = (dVar16 * local_338 - dStack_330 * dVar21) + dStack_320 * dVar28 + dVar26 +
                   (double)CONCAT44(uStack_304,local_308);
        dStack_300 = (dVar18 * dStack_320 - dVar18 * dStack_320) + dStack_320 * dVar18 + dVar27 +
                     dStack_300;
        local_34c = (int)param_4;
      }
      else {
        dVar21 = dStack_330 + dStack_330;
        dVar16 = local_328 + local_328;
        dVar28 = local_338 * (local_338 + local_338);
        local_188 = (1.0 - (dVar28 + dStack_330 * dVar21)) * dVar2;
        dVar18 = (local_338 + local_338) * dStack_320;
        local_198 = (dVar21 * dStack_320 + local_338 * dVar16) * dVar2;
        dStack_190 = (dVar16 * dStack_330 - dVar18) * dVar2;
        local_1d8 = ((double)DAT_149934d80 - (local_328 * dVar16 + dStack_330 * dVar21)) * dVar1;
        dVar28 = (DAT_149934d80._8_8_ - (local_328 * dVar16 + dVar28)) * dVar5;
        dStack_1d0 = (dVar21 * local_338 + dVar16 * dStack_320) * dVar1;
        local_1a8 = (dVar16 * dStack_330 + dVar18) * dVar5;
        local_1c8 = (local_338 * dVar16 - dVar21 * dStack_320) * dVar1;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar28,0);
        local_1b8._0_8_ = (dVar21 * local_338 - dVar16 * dStack_320) * dVar5;
        local_1b8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_318;
        dStack_170 = dStack_310;
        local_168 = local_308;
        uStack_164 = uStack_304;
        uStack_160 = 0;
        uStack_15c = 0x3ff00000;
        dVar21 = local_2d8[1] + local_2d8[1];
        dVar16 = (double)local_2c8._0_8_ + (double)local_2c8._0_8_;
        dVar28 = local_2d8[0] * (local_2d8[0] + local_2d8[0]);
        local_208 = (1.0 - (dVar28 + local_2d8[1] * dVar21)) * dVar4;
        dVar18 = (local_2d8[0] + local_2d8[0]) * (double)local_2c8._8_8_;
        local_218 = (dVar21 * (double)local_2c8._8_8_ + local_2d8[0] * dVar16) * dVar4;
        local_238 = (dVar21 * local_2d8[0] - dVar16 * (double)local_2c8._8_8_) * dVar6;
        dStack_210 = (dVar16 * local_2d8[1] - dVar18) * dVar4;
        local_258 = ((double)DAT_149934d80 -
                    ((double)local_2c8._0_8_ * dVar16 + local_2d8[1] * dVar21)) * dVar3;
        dStack_230 = (DAT_149934d80._8_8_ - ((double)local_2c8._0_8_ * dVar16 + dVar28)) * dVar6;
        dStack_250 = (dVar21 * local_2d8[0] + dVar16 * (double)local_2c8._8_8_) * dVar3;
        local_228 = (dVar16 * local_2d8[1] + dVar18) * dVar6;
        local_248 = (local_2d8[0] * dVar16 - dVar21 * (double)local_2c8._8_8_) * dVar3;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = (double)local_2b8._0_8_;
        dStack_1f0 = (double)local_2b8._8_8_;
        local_1e8 = (double)local_2a8._0_8_;
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar22._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
        auVar22._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
        auVar19 = blendvpd(_DAT_149936790,auVar24,auVar22);
        uVar14 = -(ulonglong)(0.0 <= dVar2 * dVar4);
        dVar16 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
        dVar18 = auVar19._0_8_;
        local_148 = local_148 * dVar18;
        local_150 = local_150 * dVar18;
        local_158 = local_158 * dVar18;
        dVar18 = auVar19._8_8_;
        local_128 = local_128 * dVar18;
        local_130 = local_130 * dVar18;
        local_138 = dVar18 * local_138;
        local_108 = local_108 * dVar16;
        local_110 = local_110 * dVar16;
        local_118 = dVar16 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar16 = local_268 * local_268 + local_278 * local_278;
        dVar18 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar17._0_8_ = dVar16 + dVar18;
        auVar17._8_8_ = dVar16 + dVar18;
        auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
        auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
        auVar19 = sqrtpd(auVar17,auVar17);
        auVar24 = divpd(auVar24,auVar19);
        auVar25._0_8_ = auVar24._0_8_ * local_268;
        auVar25._8_8_ = auVar24._8_8_ * dStack_260;
        local_2d8[0] = (double)((ulonglong)(local_278 * auVar24._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
        local_2d8[1] = (double)((ulonglong)(dStack_270 * auVar24._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_));
        local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar15);
        dStack_300 = 0.0;
      }
      dVar16 = local_2e8._8_8_ * local_288._8_8_;
      local_2b8._8_4_ = SUB84(dStack_f0,0);
      local_2b8._0_8_ = local_f8;
      local_2b8._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
      local_2a8._8_4_ = SUB84(dStack_300,0);
      local_2a8._0_8_ = local_e8;
      local_2a8._12_4_ = (int)((ulonglong)dStack_300 >> 0x20);
      local_298._8_4_ = SUB84(dVar5 * dVar6,0);
      local_298._0_8_ = dVar1 * dVar3;
      local_298._12_4_ = (int)((ulonglong)(dVar5 * dVar6) >> 0x20);
      local_288._8_4_ = SUB84(dVar16,0);
      local_288._0_8_ = dVar2 * dVar4;
      local_288._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      lVar9 = *(longlong *)(param_1 + 0x58);
    }
    local_360 = param_5;
    local_368 = param_3;
    FUN_1444691c6(lVar9,param_7,local_2d8,CONCAT44(uVar23,(int)param_4));
  }
  if ((local_d0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149223b0c FUN_149223b0c body=197 status=ok
// SIG undefined FUN_149223b0c(void)

void FUN_149223b0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_1c [4];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_2;
  local_58 = *(undefined4 *)puVar1[0xc];
  local_50 = *(undefined4 *)puVar1[0x10];
  local_48 = *(undefined4 *)puVar1[0x14];
  local_40 = *(undefined4 *)puVar1[0x18];
  local_30 = puVar1[0x20];
  local_28 = *(undefined1 *)puVar1[0x24];
  local_38 = local_1c;
  local_1c[0] = 1;
  local_18 = *(undefined8 *)puVar1[0x1c];
  FUN_149223dd2(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],*(undefined4 *)puVar1[8]);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149223bda FUN_149223bda body=199 status=ok
// SIG undefined FUN_149223bda(void)

void FUN_149223bda(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_38 = *(undefined1 *)(param_1 + 0x2e0);
  local_40 = param_1 + 0x280;
  local_50 = *(undefined4 *)(param_1 + 0x270);
  local_58 = *(undefined4 *)(param_1 + 0x26c);
  local_60 = *(undefined4 *)(param_1 + 0x268);
  local_68 = *(undefined4 *)(param_1 + 0x264);
  local_48 = local_24;
  local_24[0] = 1;
  local_20 = *(undefined8 *)(param_1 + 0x274);
  FUN_149223dd2(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x250,*(undefined4 *)(param_1 + 0x260));
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149223ca2 FUN_149223ca2 body=144 status=ok
// SIG undefined FUN_149223ca2(void)

void FUN_149223ca2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149223dd2(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],*(undefined4 *)puVar1[8],
                *(undefined4 *)puVar1[0xc],*(undefined4 *)puVar1[0x10],*(undefined4 *)puVar1[0x14],
                *(undefined4 *)puVar1[0x18],puVar1[0x1c],puVar1[0x20],*(undefined1 *)puVar1[0x24]);
  return;
}



// FUNCTION 149223d3a FUN_149223d3a body=152 status=ok
// SIG undefined FUN_149223d3a(void)

void FUN_149223d3a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149223dd2(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x250,*(undefined4 *)(param_1 + 0x260),
                *(undefined4 *)(param_1 + 0x264),*(undefined4 *)(param_1 + 0x268),
                *(undefined4 *)(param_1 + 0x26c),*(undefined4 *)(param_1 + 0x270),param_1 + 0x274,
                param_1 + 0x280,*(undefined1 *)(param_1 + 0x2e0));
  return;
}



// FUNCTION 149223dd2 FUN_149223dd2 body=2155 status=ok
// SIG undefined FUN_149223dd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149223dd2(longlong param_1,double *param_2,undefined8 param_3,undefined4 param_4,
                  float param_5,float param_6,undefined4 param_7,undefined4 param_8,char *param_9,
                  undefined8 param_10,char param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_3a8 [32];
  float local_388;
  float local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined4 local_35c;
  undefined8 local_358;
  undefined4 local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8 [2];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar9 = *(longlong *)(param_1 + 0x58);
  if (lVar9 != 0 && param_11 == '\x01') {
    pdVar13 = local_2e8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar13 = *param_2;
      param_2 = param_2 + 1;
      pdVar13 = pdVar13 + 1;
    }
    if ((((uint)*(ushort *)(param_9 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_9 + 4) != 0))
       && (*param_9 != '\0')) {
      uVar12 = *(undefined8 *)(param_1 + 0x1b0);
      local_350 = *(undefined4 *)(param_9 + 8);
      local_358 = *(undefined8 *)param_9;
      uVar7 = FUN_140813180(uVar12);
      uVar7 = FUN_14486750c(uVar12,&local_348,uVar7,0);
      auVar23 = _DAT_149934d80;
      dVar1 = local_308._0_8_;
      dVar5 = local_308._8_8_;
      dVar2 = local_2f8._0_8_;
      dVar3 = local_2a8._0_8_;
      dVar6 = local_2a8._8_8_;
      dVar4 = local_298._0_8_;
      auVar19 = minpd(local_2a8,local_308);
      auVar22 = minpd(local_298,local_2f8);
      auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar20);
      auVar19._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar19._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar10 = movmskpd((int)uVar12,auVar19);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar21 = local_348 * local_2e8[1];
        dVar25 = local_348 * local_2e8[0];
        dVar16 = local_2e8[0] * dStack_340;
        dVar18 = local_2e8[1] * dStack_340;
        dVar27 = local_2e8[0] * local_338;
        dVar26 = (double)local_2d8._0_8_ * local_338;
        local_2e8[0] = local_2e8[1] * local_338 * -1.0 +
                       (double)local_2d8._0_8_ * dStack_340 +
                       (double)local_2d8._8_8_ * local_348 * 1.0 + local_2e8[0] * dStack_330;
        local_2e8[1] = dVar27 * 1.0 +
                       (double)local_2d8._8_8_ * dStack_340 +
                       (double)local_2d8._0_8_ * local_348 * -1.0 + local_2e8[1] * dStack_330;
        local_2d8._0_8_ =
             (double)local_2d8._8_8_ * local_338 * 1.0 +
             ((dVar21 * 1.0 + (double)local_2d8._0_8_ * dStack_330) - dVar16);
        local_2d8._8_8_ =
             dVar26 * -1.0 + ((dVar25 * -1.0 + (double)local_2d8._8_8_ * dStack_330) - dVar18);
        dVar25 = (double)local_2c8._0_8_ * dVar1;
        dVar26 = (double)local_2c8._8_8_ * dVar5;
        dVar28 = (double)local_2b8._0_8_ * dVar2;
        dVar29 = (double)local_2b8._8_8_ * local_2f8._8_8_;
        dVar27 = dVar26 * local_348 - dStack_340 * dVar25;
        dVar21 = dVar28 * dStack_340 - local_338 * dVar26;
        dVar16 = dVar25 * local_338 - local_348 * dVar28;
        dVar18 = dVar29 * dStack_330 - dStack_330 * dVar29;
        dVar21 = dVar21 + dVar21;
        dVar16 = dVar16 + dVar16;
        dVar27 = dVar27 + dVar27;
        dVar18 = dVar18 + dVar18;
        local_108 = (dVar27 * dStack_340 - local_338 * dVar16) + dStack_330 * dVar21 + dVar25 +
                    local_328;
        dStack_100 = (dVar21 * local_338 - dVar27 * local_348) + dStack_330 * dVar16 + dVar26 +
                     dStack_320;
        local_f8 = (dVar16 * local_348 - dStack_340 * dVar21) + dStack_330 * dVar27 + dVar28 +
                   (double)CONCAT44(uStack_314,local_318);
        dStack_310 = (dVar18 * dStack_330 - dVar18 * dStack_330) + dStack_330 * dVar18 + dVar29 +
                     dStack_310;
        local_35c = param_4;
      }
      else {
        dVar21 = dStack_340 + dStack_340;
        dVar16 = local_338 + local_338;
        dVar27 = local_348 * (local_348 + local_348);
        local_198 = (1.0 - (dVar27 + dStack_340 * dVar21)) * dVar2;
        dVar18 = (local_348 + local_348) * dStack_330;
        local_1a8 = (dVar21 * dStack_330 + local_348 * dVar16) * dVar2;
        dStack_1a0 = (dVar16 * dStack_340 - dVar18) * dVar2;
        local_1e8 = ((double)DAT_149934d80 - (local_338 * dVar16 + dStack_340 * dVar21)) * dVar1;
        dVar27 = (DAT_149934d80._8_8_ - (local_338 * dVar16 + dVar27)) * dVar5;
        dStack_1e0 = (dVar21 * local_348 + dVar16 * dStack_330) * dVar1;
        local_1b8 = (dVar16 * dStack_340 + dVar18) * dVar5;
        local_1d8 = (local_348 * dVar16 - dVar21 * dStack_330) * dVar1;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar27,0);
        local_1c8._0_8_ = (dVar21 * local_348 - dVar16 * dStack_330) * dVar5;
        local_1c8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_328;
        dStack_180 = dStack_320;
        local_178 = local_318;
        uStack_174 = uStack_314;
        uStack_170 = 0;
        uStack_16c = 0x3ff00000;
        dVar21 = local_2e8[1] + local_2e8[1];
        dVar16 = (double)local_2d8._0_8_ + (double)local_2d8._0_8_;
        dVar27 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
        local_218 = (1.0 - (dVar27 + local_2e8[1] * dVar21)) * dVar4;
        dVar18 = (local_2e8[0] + local_2e8[0]) * (double)local_2d8._8_8_;
        local_228 = (dVar21 * (double)local_2d8._8_8_ + local_2e8[0] * dVar16) * dVar4;
        local_248 = (dVar21 * local_2e8[0] - dVar16 * (double)local_2d8._8_8_) * dVar6;
        dStack_220 = (dVar16 * local_2e8[1] - dVar18) * dVar4;
        local_268 = ((double)DAT_149934d80 -
                    ((double)local_2d8._0_8_ * dVar16 + local_2e8[1] * dVar21)) * dVar3;
        dStack_240 = (DAT_149934d80._8_8_ - ((double)local_2d8._0_8_ * dVar16 + dVar27)) * dVar6;
        dStack_260 = (dVar21 * local_2e8[0] + dVar16 * (double)local_2d8._8_8_) * dVar3;
        local_238 = (dVar16 * local_2e8[1] + dVar18) * dVar6;
        local_258 = (local_2e8[0] * dVar16 - dVar21 * (double)local_2d8._8_8_) * dVar3;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = (double)local_2c8._0_8_;
        dStack_200 = (double)local_2c8._8_8_;
        local_1f8 = (double)local_2b8._0_8_;
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar22._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
        auVar22._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
        auVar19 = blendvpd(_DAT_149936790,auVar23,auVar22);
        uVar14 = -(ulonglong)(0.0 <= dVar2 * dVar4);
        dVar16 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
        dVar18 = auVar19._0_8_;
        local_158 = local_158 * dVar18;
        local_160 = local_160 * dVar18;
        local_168 = local_168 * dVar18;
        dVar18 = auVar19._8_8_;
        local_138 = local_138 * dVar18;
        local_140 = local_140 * dVar18;
        local_148 = dVar18 * local_148;
        local_118 = local_118 * dVar16;
        local_120 = local_120 * dVar16;
        local_128 = dVar16 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar16 = local_278 * local_278 + local_288 * local_288;
        dVar18 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar17._0_8_ = dVar16 + dVar18;
        auVar17._8_8_ = dVar16 + dVar18;
        auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
        auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
        auVar19 = sqrtpd(auVar17,auVar17);
        auVar23 = divpd(auVar23,auVar19);
        auVar24._0_8_ = auVar23._0_8_ * local_278;
        auVar24._8_8_ = auVar23._8_8_ * dStack_270;
        local_2e8[0] = (double)((ulonglong)(local_288 * auVar23._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
        local_2e8[1] = (double)((ulonglong)(dStack_280 * auVar23._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_));
        local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar15);
        dStack_310 = 0.0;
      }
      dVar16 = local_2f8._8_8_ * local_298._8_8_;
      local_2c8._8_4_ = SUB84(dStack_100,0);
      local_2c8._0_8_ = local_108;
      local_2c8._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
      local_2b8._8_4_ = SUB84(dStack_310,0);
      local_2b8._0_8_ = local_f8;
      local_2b8._12_4_ = (int)((ulonglong)dStack_310 >> 0x20);
      local_2a8._8_4_ = SUB84(dVar5 * dVar6,0);
      local_2a8._0_8_ = dVar1 * dVar3;
      local_2a8._12_4_ = (int)((ulonglong)(dVar5 * dVar6) >> 0x20);
      local_298._8_4_ = SUB84(dVar16,0);
      local_298._0_8_ = dVar2 * dVar4;
      local_298._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      lVar9 = *(longlong *)(param_1 + 0x58);
    }
    local_380 = param_6 * 0.017453292;
    local_388 = param_5 * 0.017453292;
    local_368 = param_8;
    local_370 = param_7;
    local_378 = param_3;
    FUN_144469c20(lVar9,param_10,local_2e8);
  }
  if ((local_e0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922463e FUN_14922463e body=346 status=ok
// SIG undefined FUN_14922463e(void)

undefined8 FUN_14922463e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [32];
  undefined **local_238 [2];
  undefined **local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined2 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_228 = &PTR_FUN_14bad5c20;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  local_20c = 0;
  uStack_204 = 0;
  local_1fc = 0;
  local_1f8 = 0x3f91111111111111;
  local_1f0 = 0x800;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_238[0] = &PTR_FUN_14bb04a00;
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  puVar3 = local_118;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_b8 = *(undefined8 *)(param_1 + 0x250);
  uStack_b0 = *(undefined8 *)(param_1 + 600);
  local_a8 = *(undefined4 *)(param_1 + 0x260);
  local_a4 = *(undefined4 *)(param_1 + 0x264);
  puVar2 = (undefined8 *)(param_1 + 0x270);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2d0);
  FUN_14922479a(param_2,local_238);
  local_238[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_228);
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922479a FUN_14922479a body=211 status=ok
// SIG undefined FUN_14922479a(void)

undefined8 * FUN_14922479a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d5c7a();
  param_1[2] = uVar1;
  uVar1 = FUN_146687d20();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922486e FUN_14922486e body=346 status=ok
// SIG undefined FUN_14922486e(void)

undefined8 FUN_14922486e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [32];
  undefined **local_238 [2];
  undefined **local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined2 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_228 = &PTR_FUN_14bad5c20;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  local_20c = 0;
  uStack_204 = 0;
  local_1fc = 0;
  local_1f8 = 0x3f91111111111111;
  local_1f0 = 0x800;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_238[0] = &PTR_FUN_14bb04a00;
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  puVar3 = local_118;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_b8 = *(undefined8 *)(param_1 + 0x250);
  uStack_b0 = *(undefined8 *)(param_1 + 600);
  local_a8 = *(undefined4 *)(param_1 + 0x260);
  local_a4 = *(undefined4 *)(param_1 + 0x264);
  puVar2 = (undefined8 *)(param_1 + 0x280);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2e0);
  FUN_1492249ca(param_2,local_238);
  local_238[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_228);
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492249ca FUN_1492249ca body=211 status=ok
// SIG undefined FUN_1492249ca(void)

undefined8 * FUN_1492249ca(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d6014();
  param_1[2] = uVar1;
  uVar1 = FUN_146687d20();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149224a9e FUN_149224a9e body=381 status=ok
// SIG undefined FUN_149224a9e(void)

undefined8 FUN_149224a9e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_268 [32];
  undefined **local_248 [2];
  undefined **local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined2 local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8 [12];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = &PTR_FUN_14bad5c20;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_21c = 0;
  uStack_214 = 0;
  local_20c = 0;
  local_208 = 0x3f91111111111111;
  local_200 = 0x800;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_248[0] = &PTR_FUN_14bb04a80;
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  puVar3 = local_128;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c8 = *(undefined8 *)(param_1 + 0x250);
  uStack_c0 = *(undefined8 *)(param_1 + 600);
  local_b8 = *(undefined4 *)(param_1 + 0x260);
  local_b4 = *(undefined4 *)(param_1 + 0x264);
  local_b0 = *(undefined4 *)(param_1 + 0x268);
  local_ac = *(undefined4 *)(param_1 + 0x26c);
  local_a8 = *(undefined4 *)(param_1 + 0x270);
  puVar2 = (undefined8 *)(param_1 + 0x280);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2e0);
  FUN_149224c1c(param_2,local_248);
  local_248[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_238);
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149224c1c FUN_149224c1c body=211 status=ok
// SIG undefined FUN_149224c1c(void)

undefined8 * FUN_149224c1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d63ae();
  param_1[2] = uVar1;
  uVar1 = FUN_146688504();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149224cf0 FUN_149224cf0 body=381 status=ok
// SIG undefined FUN_149224cf0(void)

undefined8 FUN_149224cf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_268 [32];
  undefined **local_248 [2];
  undefined **local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined2 local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8 [12];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = &PTR_FUN_14bad5c20;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_21c = 0;
  uStack_214 = 0;
  local_20c = 0;
  local_208 = 0x3f91111111111111;
  local_200 = 0x800;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_248[0] = &PTR_FUN_14bb04a80;
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  puVar3 = local_128;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c8 = *(undefined8 *)(param_1 + 0x250);
  uStack_c0 = *(undefined8 *)(param_1 + 600);
  local_b8 = *(undefined4 *)(param_1 + 0x260);
  local_b4 = *(undefined4 *)(param_1 + 0x264);
  local_b0 = *(undefined4 *)(param_1 + 0x268);
  local_ac = *(undefined4 *)(param_1 + 0x26c);
  local_a8 = *(undefined4 *)(param_1 + 0x270);
  puVar2 = (undefined8 *)(param_1 + 0x280);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2e0);
  FUN_149224e6e(param_2,local_248);
  local_248[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_238);
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149224e6e FUN_149224e6e body=211 status=ok
// SIG undefined FUN_149224e6e(void)

undefined8 * FUN_149224e6e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d6840();
  param_1[2] = uVar1;
  uVar1 = FUN_146688504();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149224f42 FUN_149224f42 body=109 status=ok
// SIG undefined FUN_149224f42(void)

void FUN_149224f42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14922506c(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                *(undefined4 *)puVar1[0xc],*(undefined4 *)puVar1[0x10],puVar1[0x14],puVar1[0x18],
                *(undefined1 *)puVar1[0x1c]);
  return;
}



// FUNCTION 149224fb8 FUN_149224fb8 body=179 status=ok
// SIG undefined FUN_149224fb8(void)

void FUN_149224fb8(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = *(undefined1 *)(param_1 + 0x100);
  local_210 = param_1 + 0xa0;
  local_218 = param_1 + 0x8c;
  local_220 = *(undefined4 *)(param_1 + 0x88);
  local_228 = *(undefined4 *)(param_1 + 0x84);
  FUN_14922506c(local_1f8,param_1 + 0x10,*(undefined1 *)(param_1 + 0x70),param_1 + 0x74);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922506c FUN_14922506c body=2164 status=ok
// SIG undefined FUN_14922506c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14922506c(longlong param_1,double *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,float param_6,longlong *param_7,undefined8 param_8,char param_9
                  )

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined1 local_354;
  longlong local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8 [2];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
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
  double dStack_160;
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_9 == '\x01') {
    pdVar13 = param_2;
    pdVar14 = local_2e8;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar14 = *pdVar13;
      pdVar13 = pdVar13 + 1;
      pdVar14 = pdVar14 + 1;
    }
    if ((*param_7 != 0) && (lVar12 = *(longlong *)(param_1 + 0x1b0), lVar12 != 0)) {
      local_354 = 1;
      local_350 = *param_7;
      uVar9 = FUN_140813180(lVar12);
      uVar9 = FUN_14486750c(lVar12,&local_348,uVar9,0);
      auVar26 = _DAT_149934d80;
      dVar17 = local_308._0_8_;
      dVar5 = local_308._8_8_;
      dVar2 = local_2f8._0_8_;
      auVar20 = *(undefined1 (*) [16])(param_2 + 8);
      dVar3 = auVar20._0_8_;
      dVar6 = auVar20._8_8_;
      auVar1 = *(undefined1 (*) [16])(param_2 + 10);
      dVar4 = auVar1._0_8_;
      auVar20 = minpd(auVar20,local_308);
      auVar24 = minpd(auVar1,local_2f8);
      auVar21._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
      iVar10 = movmskpd(uVar9,auVar21);
      auVar20._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
      uVar11 = movmskpd((int)lVar12,auVar20);
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar23 = *param_2;
        dVar19 = param_2[1];
        dVar27 = param_2[2];
        dVar22 = param_2[3];
        local_2e8[0] = dVar19 * local_338 * -1.0 +
                       dVar27 * dStack_340 + dVar22 * local_348 * 1.0 + dVar23 * dStack_330;
        local_2e8[1] = dVar23 * local_338 * 1.0 +
                       dVar22 * dStack_340 + dVar27 * local_348 * -1.0 + dVar19 * dStack_330;
        local_2d8._0_8_ =
             dVar22 * local_338 * 1.0 +
             ((local_348 * dVar19 * 1.0 + dVar27 * dStack_330) - dVar23 * dStack_340);
        local_2d8._8_8_ =
             dVar27 * local_338 * -1.0 +
             ((local_348 * dVar23 * -1.0 + dVar22 * dStack_330) - dVar19 * dStack_340);
        dVar28 = param_2[4] * dVar17;
        dVar29 = param_2[5] * dVar5;
        dVar22 = param_2[6] * dVar2;
        dVar7 = param_2[7] * local_2f8._8_8_;
        dVar23 = dVar29 * local_348 - dStack_340 * dVar28;
        dVar19 = dVar22 * dStack_340 - local_338 * dVar29;
        dVar27 = dVar28 * local_338 - local_348 * dVar22;
        dVar8 = dVar7 * dStack_330 - dStack_330 * dVar7;
        dVar19 = dVar19 + dVar19;
        dVar27 = dVar27 + dVar27;
        dVar23 = dVar23 + dVar23;
        dVar8 = dVar8 + dVar8;
        local_108 = (dVar23 * dStack_340 - local_338 * dVar27) + dStack_330 * dVar19 + dVar28 +
                    local_328;
        dStack_100 = (dVar19 * local_338 - dVar23 * local_348) + dStack_330 * dVar27 + dVar29 +
                     dStack_320;
        local_f8 = (dVar27 * local_348 - dStack_340 * dVar19) + dStack_330 * dVar23 + dVar22 +
                   (double)CONCAT44(uStack_314,local_318);
        dStack_310 = (dVar8 * dStack_330 - dVar8 * dStack_330) + dStack_330 * dVar8 + dVar7 +
                     dStack_310;
      }
      else {
        dVar22 = dStack_340 + dStack_340;
        dVar23 = local_338 + local_338;
        dVar27 = local_348 * (local_348 + local_348);
        local_198 = (1.0 - (dVar27 + dStack_340 * dVar22)) * dVar2;
        dVar19 = (local_348 + local_348) * dStack_330;
        local_1a8 = (dVar22 * dStack_330 + local_348 * dVar23) * dVar2;
        dStack_1a0 = (dVar23 * dStack_340 - dVar19) * dVar2;
        local_1e8 = ((double)DAT_149934d80 - (local_338 * dVar23 + dStack_340 * dVar22)) * dVar17;
        dVar27 = (DAT_149934d80._8_8_ - (local_338 * dVar23 + dVar27)) * dVar5;
        dStack_1e0 = (dVar22 * local_348 + dVar23 * dStack_330) * dVar17;
        local_1b8 = (dVar23 * dStack_340 + dVar19) * dVar5;
        local_1d8 = (local_348 * dVar23 - dVar22 * dStack_330) * dVar17;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar27,0);
        local_1c8._0_8_ = (dVar22 * local_348 - dVar23 * dStack_330) * dVar5;
        local_1c8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_328;
        dStack_180 = dStack_320;
        local_178 = local_318;
        uStack_174 = uStack_314;
        uStack_170 = 0;
        uStack_16c = 0x3ff00000;
        dVar8 = *param_2;
        dVar28 = param_2[1];
        dVar29 = param_2[2];
        dVar25 = dVar28 + dVar28;
        dVar19 = dVar29 + dVar29;
        dVar7 = dVar8 * (dVar8 + dVar8);
        local_218 = (1.0 - (dVar7 + dVar28 * dVar25)) * dVar4;
        dVar23 = param_2[3];
        dVar27 = dVar19 * dVar23;
        dVar22 = (dVar8 + dVar8) * param_2[3];
        dVar23 = dVar25 * dVar23;
        local_228 = (dVar23 + *param_2 * dVar19) * dVar4;
        local_248 = (dVar25 * dVar8 - dVar27) * dVar6;
        dStack_220 = (dVar19 * dVar28 - dVar22) * dVar4;
        local_268 = ((double)DAT_149934d80 - (dVar29 * dVar19 + dVar28 * dVar25)) * dVar3;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar29 * dVar19 + dVar7)) * dVar6;
        dStack_260 = (dVar25 * dVar8 + dVar27) * dVar3;
        local_238 = (dVar19 * dVar28 + dVar22) * dVar6;
        local_258 = (*param_2 * dVar19 - dVar23) * dVar3;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = param_2[4];
        dStack_200 = param_2[5];
        local_1f8 = param_2[6];
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar17 * dVar3);
        auVar20 = blendvpd(_DAT_149936790,auVar26,auVar24);
        uVar15 = -(ulonglong)(0.0 <= dVar2 * dVar4);
        dVar23 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
        dVar19 = auVar20._0_8_;
        local_158 = local_158 * dVar19;
        dStack_160 = dStack_160 * dVar19;
        local_168 = local_168 * dVar19;
        dVar19 = auVar20._8_8_;
        local_138 = local_138 * dVar19;
        local_140 = local_140 * dVar19;
        local_148 = dVar19 * local_148;
        local_118 = local_118 * dVar23;
        local_120 = local_120 * dVar23;
        local_128 = dVar23 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar23 = local_278 * local_278 + local_288 * local_288;
        dVar19 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar18._0_8_ = dVar23 + dVar19;
        auVar18._8_8_ = dVar23 + dVar19;
        auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
        auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
        auVar20 = sqrtpd(auVar18,auVar18);
        auVar20 = divpd(auVar26,auVar20);
        auVar26._0_8_ = auVar20._0_8_ * local_278;
        auVar26._8_8_ = auVar20._8_8_ * dStack_270;
        local_2e8[0] = (double)((ulonglong)(local_288 * auVar20._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
        local_2e8[1] = (double)((ulonglong)(dStack_280 * auVar20._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
        local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar16);
        dStack_310 = 0.0;
      }
      dVar23 = local_2f8._8_8_ * auVar1._8_8_;
      local_2c8._8_4_ = SUB84(dStack_100,0);
      local_2c8._0_8_ = local_108;
      local_2c8._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
      local_2b8._8_4_ = SUB84(dStack_310,0);
      local_2b8._0_8_ = local_f8;
      local_2b8._12_4_ = (int)((ulonglong)dStack_310 >> 0x20);
      local_2a8._8_4_ = SUB84(dVar5 * dVar6,0);
      local_2a8._0_8_ = dVar17 * dVar3;
      local_2a8._12_4_ = (int)((ulonglong)(dVar5 * dVar6) >> 0x20);
      local_298._8_4_ = SUB84(dVar23,0);
      local_298._0_8_ = dVar2 * dVar4;
      local_298._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    }
    if (param_3 == '\0') {
      local_168 = (double)local_2c8._0_8_;
      dStack_160 = (double)local_2c8._8_8_;
      local_158 = (double)local_2b8._0_8_;
      local_368 = param_4;
      FUN_144467456(*(undefined8 *)(param_1 + 0x58),param_8);
    }
    else if (param_3 == '\x02') {
      dVar17 = (double)param_6;
      local_2a8._8_8_ = (double)local_2a8._8_8_ * dVar17;
      local_2a8._0_8_ = dVar17 * (double)local_2a8._0_8_;
      local_298._8_8_ = 0;
      local_298._0_8_ = (double)local_298._0_8_ * dVar17;
      local_368 = CONCAT44(local_368._4_4_,param_5);
      FUN_144467984(*(undefined8 *)(param_1 + 0x58),param_8,local_2e8,param_4);
    }
    else if (param_3 == '\x01') {
      local_368 = CONCAT44(local_368._4_4_,param_5);
      FUN_14446882c(*(undefined8 *)(param_1 + 0x58),param_8,local_2e8);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492258e2 FUN_1492258e2 body=162 status=ok
// SIG undefined FUN_1492258e2(void)

void FUN_1492258e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_1c [4];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_2;
  local_48 = *(undefined4 *)puVar1[0xc];
  local_40 = *(undefined4 *)puVar1[0x10];
  local_30 = puVar1[0x18];
  local_28 = *(undefined1 *)puVar1[0x1c];
  local_38 = local_1c;
  local_1c[0] = 1;
  local_18 = *(undefined8 *)puVar1[0x14];
  FUN_149225b30(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8]);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922598e FUN_14922598e body=173 status=ok
// SIG undefined FUN_14922598e(void)

void FUN_14922598e(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined1 local_38;
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_38 = *(undefined1 *)(param_1 + 0x2e0);
  local_40 = param_1 + 0x280;
  local_50 = *(undefined4 *)(param_1 + 0x268);
  local_58 = *(undefined4 *)(param_1 + 0x264);
  local_48 = local_24;
  local_24[0] = 1;
  local_20 = *(undefined8 *)(param_1 + 0x26c);
  FUN_149225b30(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x250),param_1 + 0x254);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149225a3c FUN_149225a3c body=109 status=ok
// SIG undefined FUN_149225a3c(void)

void FUN_149225a3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149225b30(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                *(undefined4 *)puVar1[0xc],*(undefined4 *)puVar1[0x10],puVar1[0x14],puVar1[0x18],
                *(undefined1 *)puVar1[0x1c]);
  return;
}



// FUNCTION 149225ab2 FUN_149225ab2 body=125 status=ok
// SIG undefined FUN_149225ab2(void)

void FUN_149225ab2(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149225b30(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x250),param_1 + 0x254,
                *(undefined4 *)(param_1 + 0x264),*(undefined4 *)(param_1 + 0x268),param_1 + 0x26c,
                param_1 + 0x280,*(undefined1 *)(param_1 + 0x2e0));
  return;
}



// FUNCTION 149225b30 FUN_149225b30 body=2197 status=ok
// SIG undefined FUN_149225b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149225b30(longlong param_1,double *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,float param_6,char *param_7,undefined8 param_8,char param_9)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined8 local_358;
  undefined4 local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8 [2];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
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
  double dStack_160;
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_9 == '\x01') {
    pdVar13 = param_2;
    pdVar14 = local_2e8;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar14 = *pdVar13;
      pdVar13 = pdVar13 + 1;
      pdVar14 = pdVar14 + 1;
    }
    if (((((uint)*(ushort *)(param_7 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_7 + 4) != 0)
         ) && (*param_7 != '\0')) && (lVar12 = *(longlong *)(param_1 + 0x1b0), lVar12 != 0)) {
      local_358 = *(undefined8 *)param_7;
      local_350 = *(undefined4 *)(param_7 + 8);
      uVar9 = FUN_140813180(lVar12);
      uVar9 = FUN_14486750c(lVar12,&local_348,uVar9,0);
      auVar26 = _DAT_149934d80;
      dVar17 = local_308._0_8_;
      dVar5 = local_308._8_8_;
      dVar2 = local_2f8._0_8_;
      auVar20 = *(undefined1 (*) [16])(param_2 + 8);
      dVar3 = auVar20._0_8_;
      dVar6 = auVar20._8_8_;
      auVar1 = *(undefined1 (*) [16])(param_2 + 10);
      dVar4 = auVar1._0_8_;
      auVar20 = minpd(auVar20,local_308);
      auVar24 = minpd(auVar1,local_2f8);
      auVar21._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
      iVar10 = movmskpd(uVar9,auVar21);
      auVar20._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
      uVar11 = movmskpd((int)lVar12,auVar20);
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar23 = *param_2;
        dVar19 = param_2[1];
        dVar27 = param_2[2];
        dVar22 = param_2[3];
        local_2e8[0] = dVar19 * local_338 * -1.0 +
                       dVar27 * dStack_340 + dVar22 * local_348 * 1.0 + dVar23 * dStack_330;
        local_2e8[1] = dVar23 * local_338 * 1.0 +
                       dVar22 * dStack_340 + dVar27 * local_348 * -1.0 + dVar19 * dStack_330;
        local_2d8._0_8_ =
             dVar22 * local_338 * 1.0 +
             ((local_348 * dVar19 * 1.0 + dVar27 * dStack_330) - dVar23 * dStack_340);
        local_2d8._8_8_ =
             dVar27 * local_338 * -1.0 +
             ((local_348 * dVar23 * -1.0 + dVar22 * dStack_330) - dVar19 * dStack_340);
        dVar28 = param_2[4] * dVar17;
        dVar29 = param_2[5] * dVar5;
        dVar22 = param_2[6] * dVar2;
        dVar7 = param_2[7] * local_2f8._8_8_;
        dVar23 = dVar29 * local_348 - dStack_340 * dVar28;
        dVar19 = dVar22 * dStack_340 - local_338 * dVar29;
        dVar27 = dVar28 * local_338 - local_348 * dVar22;
        dVar8 = dVar7 * dStack_330 - dStack_330 * dVar7;
        dVar19 = dVar19 + dVar19;
        dVar27 = dVar27 + dVar27;
        dVar23 = dVar23 + dVar23;
        dVar8 = dVar8 + dVar8;
        local_108 = (dVar23 * dStack_340 - local_338 * dVar27) + dStack_330 * dVar19 + dVar28 +
                    local_328;
        dStack_100 = (dVar19 * local_338 - dVar23 * local_348) + dStack_330 * dVar27 + dVar29 +
                     dStack_320;
        local_f8 = (dVar27 * local_348 - dStack_340 * dVar19) + dStack_330 * dVar23 + dVar22 +
                   (double)CONCAT44(uStack_314,local_318);
        dStack_310 = (dVar8 * dStack_330 - dVar8 * dStack_330) + dStack_330 * dVar8 + dVar7 +
                     dStack_310;
      }
      else {
        dVar22 = dStack_340 + dStack_340;
        dVar23 = local_338 + local_338;
        dVar27 = local_348 * (local_348 + local_348);
        local_198 = (1.0 - (dVar27 + dStack_340 * dVar22)) * dVar2;
        dVar19 = (local_348 + local_348) * dStack_330;
        local_1a8 = (dVar22 * dStack_330 + local_348 * dVar23) * dVar2;
        dStack_1a0 = (dVar23 * dStack_340 - dVar19) * dVar2;
        local_1e8 = ((double)DAT_149934d80 - (local_338 * dVar23 + dStack_340 * dVar22)) * dVar17;
        dVar27 = (DAT_149934d80._8_8_ - (local_338 * dVar23 + dVar27)) * dVar5;
        dStack_1e0 = (dVar22 * local_348 + dVar23 * dStack_330) * dVar17;
        local_1b8 = (dVar23 * dStack_340 + dVar19) * dVar5;
        local_1d8 = (local_348 * dVar23 - dVar22 * dStack_330) * dVar17;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar27,0);
        local_1c8._0_8_ = (dVar22 * local_348 - dVar23 * dStack_330) * dVar5;
        local_1c8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_328;
        dStack_180 = dStack_320;
        local_178 = local_318;
        uStack_174 = uStack_314;
        uStack_170 = 0;
        uStack_16c = 0x3ff00000;
        dVar8 = *param_2;
        dVar28 = param_2[1];
        dVar29 = param_2[2];
        dVar25 = dVar28 + dVar28;
        dVar19 = dVar29 + dVar29;
        dVar7 = dVar8 * (dVar8 + dVar8);
        local_218 = (1.0 - (dVar7 + dVar28 * dVar25)) * dVar4;
        dVar23 = param_2[3];
        dVar27 = dVar19 * dVar23;
        dVar22 = (dVar8 + dVar8) * param_2[3];
        dVar23 = dVar25 * dVar23;
        local_228 = (dVar23 + *param_2 * dVar19) * dVar4;
        local_248 = (dVar25 * dVar8 - dVar27) * dVar6;
        dStack_220 = (dVar19 * dVar28 - dVar22) * dVar4;
        local_268 = ((double)DAT_149934d80 - (dVar29 * dVar19 + dVar28 * dVar25)) * dVar3;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar29 * dVar19 + dVar7)) * dVar6;
        dStack_260 = (dVar25 * dVar8 + dVar27) * dVar3;
        local_238 = (dVar19 * dVar28 + dVar22) * dVar6;
        local_258 = (*param_2 * dVar19 - dVar23) * dVar3;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = param_2[4];
        dStack_200 = param_2[5];
        local_1f8 = param_2[6];
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar17 * dVar3);
        auVar20 = blendvpd(_DAT_149936790,auVar26,auVar24);
        uVar15 = -(ulonglong)(0.0 <= dVar2 * dVar4);
        dVar23 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
        dVar19 = auVar20._0_8_;
        local_158 = local_158 * dVar19;
        dStack_160 = dStack_160 * dVar19;
        local_168 = local_168 * dVar19;
        dVar19 = auVar20._8_8_;
        local_138 = local_138 * dVar19;
        local_140 = local_140 * dVar19;
        local_148 = dVar19 * local_148;
        local_118 = local_118 * dVar23;
        local_120 = local_120 * dVar23;
        local_128 = dVar23 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar23 = local_278 * local_278 + local_288 * local_288;
        dVar19 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar18._0_8_ = dVar23 + dVar19;
        auVar18._8_8_ = dVar23 + dVar19;
        auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
        auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
        auVar20 = sqrtpd(auVar18,auVar18);
        auVar20 = divpd(auVar26,auVar20);
        auVar26._0_8_ = auVar20._0_8_ * local_278;
        auVar26._8_8_ = auVar20._8_8_ * dStack_270;
        local_2e8[0] = (double)((ulonglong)(local_288 * auVar20._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
        local_2e8[1] = (double)((ulonglong)(dStack_280 * auVar20._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
        local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar16);
        dStack_310 = 0.0;
      }
      dVar23 = local_2f8._8_8_ * auVar1._8_8_;
      local_2c8._8_4_ = SUB84(dStack_100,0);
      local_2c8._0_8_ = local_108;
      local_2c8._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
      local_2b8._8_4_ = SUB84(dStack_310,0);
      local_2b8._0_8_ = local_f8;
      local_2b8._12_4_ = (int)((ulonglong)dStack_310 >> 0x20);
      local_2a8._8_4_ = SUB84(dVar5 * dVar6,0);
      local_2a8._0_8_ = dVar17 * dVar3;
      local_2a8._12_4_ = (int)((ulonglong)(dVar5 * dVar6) >> 0x20);
      local_298._8_4_ = SUB84(dVar23,0);
      local_298._0_8_ = dVar2 * dVar4;
      local_298._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    }
    if (param_3 == '\0') {
      local_168 = (double)local_2c8._0_8_;
      dStack_160 = (double)local_2c8._8_8_;
      local_158 = (double)local_2b8._0_8_;
      local_368 = param_4;
      FUN_144467456(*(undefined8 *)(param_1 + 0x58),param_8);
    }
    else if (param_3 == '\x02') {
      dVar17 = (double)param_6;
      local_2a8._8_8_ = (double)local_2a8._8_8_ * dVar17;
      local_2a8._0_8_ = dVar17 * (double)local_2a8._0_8_;
      local_298._8_8_ = 0;
      local_298._0_8_ = (double)local_298._0_8_ * dVar17;
      local_368 = CONCAT44(local_368._4_4_,param_5);
      FUN_144467984(*(undefined8 *)(param_1 + 0x58),param_8,local_2e8,param_4);
    }
    else if (param_3 == '\x01') {
      local_368 = CONCAT44(local_368._4_4_,param_5);
      FUN_14446882c(*(undefined8 *)(param_1 + 0x58),param_8,local_2e8);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492263c6 FUN_1492263c6 body=273 status=ok
// SIG undefined FUN_1492263c6(void)

void FUN_1492263c6(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  uVar3 = *(undefined1 *)param_2[4];
  lVar6 = param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  uVar2 = *(undefined4 *)param_2[0x10];
  lVar7 = param_2[0x14];
  lVar8 = param_2[0x18];
  uVar4 = *(undefined1 *)param_2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_80 = FUN_144828ac0(param_2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_70 = *puVar5;
  local_68 = *(undefined4 *)(puVar5 + 1);
  local_a8 = uVar1;
  local_a0 = uVar2;
  local_98 = lVar7;
  local_90 = lVar8;
  local_88 = uVar4;
  FUN_1492265a0(*(undefined8 *)(param_1 + 0xc0),&local_70,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff,lVar6);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492264e0 FUN_1492264e0 body=190 status=ok
// SIG undefined FUN_1492264e0(void)

void FUN_1492264e0(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_30 = param_1 + 0x298;
  local_38 = *(undefined1 *)(param_1 + 0x290);
  local_40 = param_1 + 0x230;
  local_48 = param_1 + 0x21c;
  local_50 = *(undefined4 *)(param_1 + 0x218);
  local_58 = *(undefined4 *)(param_1 + 0x214);
  FUN_1492265a0(param_1 + 0x10,&local_28,*(undefined1 *)(param_1 + 0x200),param_1 + 0x204);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492265a0 FUN_1492265a0 body=2416 status=ok
// SIG undefined FUN_1492265a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492265a0(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5,float param_6,longlong *param_7,undefined8 param_8,char param_9
                  ,longlong *param_10)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar12;
  uint uVar13;
  double *pdVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar34;
  double dVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined1 local_304;
  longlong local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double *pdVar11;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_9 == '\x01') {
    FUN_1407a57f6(param_10,(int)param_2[1],1);
    if ((*param_7 == 0) || (pdVar11 = *(double **)(param_1 + 0x1b0), pdVar11 == (double *)0x0)) {
      if (0 < (int)param_2[1]) {
        lVar16 = 0;
        lVar18 = 0;
        do {
          puVar15 = (undefined8 *)(*param_2 + lVar16);
          puVar17 = (undefined8 *)(*param_10 + lVar16);
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar17 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar17 = puVar17 + 1;
          }
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + 0x60;
        } while (lVar18 < (int)param_2[1]);
      }
    }
    else {
      local_304 = 1;
      local_300 = *param_7;
      uVar9 = FUN_140813180(pdVar11);
      pdVar14 = &local_2f8;
      FUN_14486750c(pdVar11,pdVar14,uVar9,0);
      if (0 < (int)param_2[1]) {
        lVar18 = 0x50;
        lVar16 = 0;
        do {
          auVar32 = _DAT_149934d80;
          lVar12 = *param_2;
          dVar6 = local_2b8._0_8_;
          dVar5 = local_2b8._8_8_;
          dVar4 = local_2a8._0_8_;
          dVar8 = local_2a8._8_8_;
          auVar2 = *(undefined1 (*) [16])(lVar12 + -0x10 + lVar18);
          auVar3 = *(undefined1 (*) [16])(lVar12 + lVar18);
          auVar24 = minpd(auVar2,local_2b8);
          auVar28 = minpd(auVar3,local_2a8);
          auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
          auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
          uVar10 = movmskpd((int)pdVar11,auVar25);
          pdVar11 = (double *)(ulonglong)uVar10;
          auVar24._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
          auVar24._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
          uVar13 = movmskpd((int)pdVar14,auVar24);
          if ((uVar13 & 0x3fffffff) == 0 && uVar10 == 0) {
            pdVar14 = (double *)(lVar12 + -0x50 + lVar18);
            dVar21 = *pdVar14;
            dVar26 = pdVar14[1];
            pdVar14 = (double *)(lVar12 + -0x40 + lVar18);
            dVar30 = *pdVar14;
            dVar34 = pdVar14[1];
            dVar27 = dVar26 * local_2e8 * -1.0 +
                     dVar30 * dStack_2f0 + dVar34 * local_2f8 * 1.0 + dVar21 * dStack_2e0;
            dVar35 = dVar21 * local_2e8 * 1.0 +
                     dVar34 * dStack_2f0 + dVar30 * local_2f8 * -1.0 + dVar26 * dStack_2e0;
            auVar32._0_8_ =
                 dVar34 * local_2e8 * 1.0 +
                 ((local_2f8 * dVar26 * 1.0 + dVar30 * dStack_2e0) - dVar21 * dStack_2f0);
            auVar32._8_8_ =
                 dVar30 * local_2e8 * -1.0 +
                 ((local_2f8 * dVar21 * -1.0 + dVar34 * dStack_2e0) - dVar26 * dStack_2f0);
            pdVar14 = (double *)(lVar12 + -0x30 + lVar18);
            dVar22 = *pdVar14 * dVar6;
            dVar23 = pdVar14[1] * dVar5;
            pdVar14 = (double *)(lVar12 + -0x20 + lVar18);
            dVar30 = *pdVar14 * dVar4;
            dVar34 = pdVar14[1] * dVar8;
            dVar21 = dVar23 * local_2f8 - dStack_2f0 * dVar22;
            dVar36 = dVar30 * dStack_2f0 - local_2e8 * dVar23;
            dVar31 = dVar22 * local_2e8 - local_2f8 * dVar30;
            dVar26 = dVar34 * dStack_2e0 - dStack_2e0 * dVar34;
            dVar36 = dVar36 + dVar36;
            dVar31 = dVar31 + dVar31;
            dVar21 = dVar21 + dVar21;
            dVar26 = dVar26 + dVar26;
            dVar22 = (dVar21 * dStack_2f0 - local_2e8 * dVar31) + dStack_2e0 * dVar36 + dVar22 +
                     local_2d8;
            dVar23 = (dVar36 * local_2e8 - dVar21 * local_2f8) + dStack_2e0 * dVar31 + dVar23 +
                     dStack_2d0;
            dVar21 = (dVar31 * local_2f8 - dStack_2f0 * dVar36) + dStack_2e0 * dVar21 + dVar30 +
                     local_2c8;
            dVar26 = (dVar26 * dStack_2e0 - dVar26 * dStack_2e0) + dStack_2e0 * dVar26 + dVar34 +
                     dStack_2c0;
            pdVar14 = (double *)0x0;
          }
          else {
            dVar26 = dStack_2f0 + dStack_2f0;
            dVar30 = local_2e8 + local_2e8;
            dVar21 = local_2f8 * (local_2f8 + local_2f8);
            local_1a8 = (1.0 - (dVar21 + dStack_2f0 * dVar26)) * dVar4;
            dVar34 = (local_2f8 + local_2f8) * dStack_2e0;
            local_1b8 = (dVar26 * dStack_2e0 + local_2f8 * dVar30) * dVar4;
            local_1d8 = (dVar26 * local_2f8 - dVar30 * dStack_2e0) * dVar5;
            dStack_1b0 = (dVar30 * dStack_2f0 - dVar34) * dVar4;
            dStack_1d0 = (DAT_149934d80._8_8_ - (local_2e8 * dVar30 + dVar21)) * dVar5;
            dVar21 = (dVar26 * local_2f8 + dVar30 * dStack_2e0) * dVar6;
            local_1c8 = (dVar30 * dStack_2f0 + dVar34) * dVar5;
            local_1e8 = (local_2f8 * dVar30 - dVar26 * dStack_2e0) * dVar6;
            local_1f8._8_4_ = SUB84(dVar21,0);
            local_1f8._0_8_ =
                 ((double)DAT_149934d80 - (local_2e8 * dVar30 + dStack_2f0 * dVar26)) * dVar6;
            local_1f8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_2d8;
            dStack_190 = dStack_2d0;
            local_188 = local_2c8;
            uStack_180 = 0x3ff0000000000000;
            pdVar11 = (double *)(lVar12 + -0x50 + lVar18);
            dVar30 = *pdVar11;
            dVar34 = pdVar11[1];
            dVar26 = *(double *)(lVar12 + -0x40 + lVar18);
            pdVar11 = (double *)(lVar12 + -0x10 + lVar18);
            local_268 = *pdVar11;
            local_258 = pdVar11[1];
            dStack_230 = *(double *)(lVar12 + lVar18);
            dVar35 = dVar34 + dVar34;
            dVar22 = dVar26 + dVar26;
            dVar21 = dVar30 * (dVar30 + dVar30);
            local_278 = ((double)DAT_149934d80 - (dVar26 * dVar22 + dVar34 * dVar35)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar26 * dVar22 + dVar21)) * local_258;
            local_228 = (1.0 - (dVar21 + dVar34 * dVar35)) * dStack_230;
            dVar26 = *(double *)(lVar12 + -0x50 + lVar18) * dVar22;
            pdVar11 = (double *)(lVar12 + -0x38 + lVar18);
            dVar21 = *pdVar11;
            dVar23 = dVar22 * dVar21;
            dVar27 = (dVar30 + dVar30) * *pdVar11;
            dVar21 = dVar35 * dVar21;
            dStack_270 = (dVar35 * dVar30 + dVar23) * local_268;
            local_248 = (dVar22 * dVar34 + dVar27) * local_258;
            local_238 = (dVar21 + dVar26) * dStack_230;
            local_268 = (dVar26 - dVar21) * local_268;
            local_258 = (dVar35 * dVar30 - dVar23) * local_258;
            dStack_230 = (dVar22 * dVar34 - dVar27) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            puVar15 = (undefined8 *)(lVar12 + -0x30 + lVar18);
            local_218 = *puVar15;
            uStack_210 = puVar15[1];
            local_208 = *(undefined8 *)(lVar12 + -0x20 + lVar18);
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar28._8_8_ = -(ulonglong)(0.0 <= auVar2._8_8_ * dVar5);
            auVar28._0_8_ = -(ulonglong)(0.0 <= auVar2._0_8_ * dVar6);
            auVar24 = blendvpd(_DAT_149936790,auVar32,auVar28);
            uVar19 = -(ulonglong)(0.0 <= auVar3._0_8_ * dVar4);
            dVar21 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
            dVar26 = auVar24._0_8_;
            local_168 = local_168 * dVar26;
            dStack_170 = dStack_170 * dVar26;
            local_178 = local_178 * dVar26;
            dVar26 = auVar24._8_8_;
            local_148 = local_148 * dVar26;
            local_150 = local_150 * dVar26;
            local_158 = dVar26 * local_158;
            local_128 = local_128 * dVar21;
            local_130 = local_130 * dVar21;
            local_138 = dVar21 * local_138;
            pdVar11 = &local_298;
            pdVar14 = &local_178;
            FUN_14481fd10();
            dVar21 = local_288._0_8_;
            dVar26 = local_288._8_8_;
            dVar30 = dVar21 * dVar21 + local_298 * local_298;
            dVar34 = dVar26 * dVar26 + dStack_290 * dStack_290;
            auVar29._0_8_ = dVar30 + dVar34;
            auVar29._8_8_ = dVar30 + dVar34;
            auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
            auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
            auVar24 = sqrtpd(auVar29,auVar29);
            auVar32 = divpd(auVar32,auVar24);
            auVar33._0_8_ = auVar32._0_8_ * dVar21;
            auVar33._8_8_ = auVar32._8_8_ * dVar26;
            dVar27 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
            dVar35 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
            auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar20);
            dVar26 = 0.0;
            dVar21 = local_108;
            dVar22 = local_118;
            dVar23 = dStack_110;
          }
          dVar5 = auVar2._8_8_ * dVar5;
          dVar8 = auVar3._8_8_ * dVar8;
          lVar12 = *param_10;
          pdVar1 = (double *)(lVar12 + -0x50 + lVar18);
          *pdVar1 = dVar27;
          pdVar1[1] = dVar35;
          *(undefined1 (*) [16])(lVar12 + -0x40 + lVar18) = auVar32;
          pdVar1 = (double *)(lVar12 + -0x30 + lVar18);
          *pdVar1 = dVar22;
          pdVar1[1] = dVar23;
          pdVar1 = (double *)(lVar12 + -0x20 + lVar18);
          *pdVar1 = dVar21;
          pdVar1[1] = dVar26;
          auVar7._8_4_ = SUB84(dVar5,0);
          auVar7._0_8_ = auVar2._0_8_ * dVar6;
          auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(lVar12 + -0x10 + lVar18) = auVar7;
          auVar2._8_4_ = SUB84(dVar8,0);
          auVar2._0_8_ = auVar3._0_8_ * dVar4;
          auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          *(undefined1 (*) [16])(lVar12 + lVar18) = auVar2;
          lVar16 = lVar16 + 1;
          lVar18 = lVar18 + 0x60;
        } while (lVar16 < (int)param_2[1]);
      }
    }
    if ((longlong)(int)param_10[1] != 0) {
      lVar16 = *param_10;
      dVar6 = (double)param_6;
      lVar18 = (longlong)(int)param_10[1] * 0x60;
      do {
        if (param_3 == '\0') {
          local_178 = *(double *)(lVar16 + 0x20);
          dStack_170 = *(double *)(lVar16 + 0x28);
          local_168 = *(double *)(lVar16 + 0x30);
          local_318 = param_4;
          FUN_144467456(*(undefined8 *)(param_1 + 0x58),param_8,&local_178);
        }
        else if (param_3 == '\x02') {
          *(double *)(lVar16 + 0x40) = *(double *)(lVar16 + 0x40) * dVar6;
          *(double *)(lVar16 + 0x48) = *(double *)(lVar16 + 0x48) * dVar6;
          *(double *)(lVar16 + 0x50) = *(double *)(lVar16 + 0x50) * dVar6;
          *(undefined8 *)(lVar16 + 0x58) = 0;
          local_318 = CONCAT44(local_318._4_4_,param_5);
          FUN_144467984(*(undefined8 *)(param_1 + 0x58),param_8,lVar16,param_4);
        }
        else if (param_3 == '\x01') {
          local_318 = CONCAT44(local_318._4_4_,param_5);
          FUN_14446882c(*(undefined8 *)(param_1 + 0x58),param_8,lVar16);
        }
        lVar16 = lVar16 + 0x60;
        lVar18 = lVar18 + -0x60;
      } while (lVar18 != 0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149226f12 FUN_149226f12 body=206 status=ok
// SIG undefined FUN_149226f12(void)

void FUN_149226f12(longlong param_1,longlong *param_2)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  local_78 = param_2[0xc];
  local_70 = *(undefined4 *)param_2[0x10];
  local_68 = *(undefined4 *)param_2[0x14];
  local_60 = param_2[0x18];
  local_58 = param_2[0x1c];
  local_50 = *(undefined1 *)param_2[0x20];
  local_30 = *(undefined8 *)param_2[4];
  local_28 = *(undefined4 *)((undefined8 *)param_2[4] + 1);
  local_40 = *(undefined8 *)*param_2;
  local_38 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_1492270b8(*(undefined8 *)(param_1 + 0xc0),&local_40,&local_30,*(undefined1 *)param_2[8]);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149226fea FUN_149226fea body=205 status=ok
// SIG undefined FUN_149226fea(void)

void FUN_149226fea(longlong param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = *(undefined8 *)(param_1 + 0x200);
  local_30 = *(undefined4 *)(param_1 + 0x208);
  local_40 = *(undefined1 *)(param_1 + 0x2a0);
  local_48 = param_1 + 0x240;
  local_50 = param_1 + 0x22c;
  local_58 = *(undefined4 *)(param_1 + 0x228);
  local_60 = *(undefined4 *)(param_1 + 0x224);
  local_68 = param_1 + 0x214;
  FUN_1492270b8(param_1 + 0x10,&local_28,&local_38,*(undefined1 *)(param_1 + 0x210));
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492270b8 FUN_1492270b8 body=477 status=ok
// SIG undefined FUN_1492270b8(void)

void FUN_1492270b8(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(longlong *)(param_1 + 0x58) != 0 && param_10 == '\x01') && ((longlong)(int)param_2[1] != 0)
     ) {
    lVar7 = *param_2;
    lVar8 = (longlong)(int)param_2[1] * 0x60;
    local_b0 = param_2;
    do {
      local_c0 = param_9;
      local_c8 = param_8;
      local_d0 = param_7;
      local_d8 = CONCAT44(local_d8._4_4_,param_6);
      local_b8 = 1;
      FUN_149225b30(param_1,lVar7,param_4);
      lVar7 = lVar7 + 0x60;
      lVar8 = lVar8 + -0x60;
    } while (lVar8 != 0);
    iVar4 = (int)local_b0[1];
    if (0 < (int)param_3[1] && (int)param_3[1] == iVar4) {
      lVar7 = 0xc;
      lVar8 = 0;
      plVar6 = local_b0;
      do {
        iVar2 = *(int *)(*param_3 + lVar8 * 4);
        if ((-1 < (longlong)iVar2) && (iVar2 < (int)plVar6[1])) {
          lVar3 = *plVar6;
          lVar5 = (longlong)iVar2 * 0x60;
          puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar5);
          local_88 = *puVar1;
          uStack_80 = puVar1[1];
          local_78 = *(undefined8 *)(lVar3 + 0x30 + lVar5);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar7 * 4);
          local_a8 = *puVar1;
          uStack_a0 = puVar1[1];
          local_98 = *(undefined8 *)(lVar3 + lVar7 * 4);
          local_d0 = param_6;
          local_d8 = param_5;
          FUN_14446764a(*(undefined8 *)(param_1 + 0x58),param_9,&local_a8,&local_88);
          iVar4 = (int)param_3[1];
          plVar6 = local_b0;
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar8 < iVar4);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149227296 FUN_149227296 body=346 status=ok
// SIG undefined FUN_149227296(void)

undefined8 FUN_149227296(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [32];
  undefined **local_238 [2];
  undefined **local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined2 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_228 = &PTR_FUN_14bad5c20;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  local_20c = 0;
  uStack_204 = 0;
  local_1fc = 0;
  local_1f8 = 0x3f91111111111111;
  local_1f0 = 0x800;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_238[0] = &PTR_FUN_14bb04ce0;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_118;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_b8 = *(undefined1 *)(param_1 + 0x70);
  local_b4 = *(undefined8 *)(param_1 + 0x74);
  uStack_ac = *(undefined8 *)(param_1 + 0x7c);
  local_a4 = *(undefined4 *)(param_1 + 0x84);
  local_a0 = *(undefined4 *)(param_1 + 0x88);
  puVar2 = (undefined8 *)(param_1 + 0xa0);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x100);
  FUN_1492273f2(param_2,local_238);
  local_238[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_228);
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492273f2 FUN_1492273f2 body=211 status=ok
// SIG undefined FUN_1492273f2(void)

undefined8 * FUN_1492273f2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d6cd2();
  param_1[2] = uVar1;
  uVar1 = FUN_146688c76();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492274c6 FUN_1492274c6 body=355 status=ok
// SIG undefined FUN_1492274c6(void)

undefined8 FUN_1492274c6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [32];
  undefined **local_238 [2];
  undefined **local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined2 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_228 = &PTR_FUN_14bad5c20;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  local_20c = 0;
  uStack_204 = 0;
  local_1fc = 0;
  local_1f8 = 0x3f91111111111111;
  local_1f0 = 0x800;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_238[0] = &PTR_FUN_14bb04ce0;
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  puVar3 = local_118;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_b8 = *(undefined1 *)(param_1 + 0x250);
  local_b4 = *(undefined8 *)(param_1 + 0x254);
  uStack_ac = *(undefined8 *)(param_1 + 0x25c);
  local_a4 = *(undefined4 *)(param_1 + 0x264);
  local_a0 = *(undefined4 *)(param_1 + 0x268);
  puVar2 = (undefined8 *)(param_1 + 0x280);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2e0);
  FUN_14922762a(param_2,local_238);
  local_238[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_228);
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922762a FUN_14922762a body=211 status=ok
// SIG undefined FUN_14922762a(void)

undefined8 * FUN_14922762a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d70c2();
  param_1[2] = uVar1;
  uVar1 = FUN_146688c76();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492276fe FUN_1492276fe body=355 status=ok
// SIG undefined FUN_1492276fe(void)

undefined8 FUN_1492276fe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [32];
  undefined **local_238 [2];
  undefined **local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined2 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_228 = &PTR_FUN_14bad5c20;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  local_20c = 0;
  uStack_204 = 0;
  local_1fc = 0;
  local_1f8 = 0x3f91111111111111;
  local_1f0 = 0x800;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_238[0] = &PTR_FUN_14bb04ce0;
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  puVar3 = local_118;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_b8 = *(undefined1 *)(param_1 + 0x250);
  local_b4 = *(undefined8 *)(param_1 + 0x254);
  uStack_ac = *(undefined8 *)(param_1 + 0x25c);
  local_a4 = *(undefined4 *)(param_1 + 0x264);
  local_a0 = *(undefined4 *)(param_1 + 0x268);
  puVar2 = (undefined8 *)(param_1 + 0x280);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = *(undefined1 *)(param_1 + 0x2e0);
  FUN_149227862(param_2,local_238);
  local_238[0] = &PTR_FUN_14bad5830;
  FUN_140f8ceac(&local_228);
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149227862 FUN_149227862 body=211 status=ok
// SIG undefined FUN_149227862(void)

undefined8 * FUN_149227862(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d74b2();
  param_1[2] = uVar1;
  uVar1 = FUN_146688c76();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149227936 FUN_149227936 body=414 status=ok
// SIG undefined FUN_149227936(void)

undefined8 FUN_149227936(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_228 [32];
  undefined **local_208 [2];
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined2 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 *local_c4;
  undefined1 *puStack_bc;
  undefined8 local_b4;
  undefined8 local_a8 [12];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f8 = &PTR_FUN_14bad5c20;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0x3f91111111111111;
  local_1c0 = 0x800;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_208[0] = &PTR_FUN_14bb05020;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c8 = 1;
  local_c4 = &DAT_3f8000003f800000;
  puStack_bc = &DAT_3f8000003f800000;
  local_b4 = 0x4120000000000000;
  local_48 = 1;
  FUN_144756208(&local_e8,param_1 + 0x1f0);
  local_c8 = *(undefined1 *)(param_1 + 0x200);
  local_c4 = *(undefined1 **)(param_1 + 0x204);
  puStack_bc = *(undefined1 **)(param_1 + 0x20c);
  local_b4 = *(undefined8 *)(param_1 + 0x214);
  puVar2 = (undefined8 *)(param_1 + 0x230);
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = *(undefined1 *)(param_1 + 0x290);
  FUN_149227ad6(param_2,local_208);
  FUN_14912fe88(local_208);
  if ((local_30 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149227ad6 FUN_149227ad6 body=211 status=ok
// SIG undefined FUN_149227ad6(void)

undefined8 * FUN_149227ad6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d7938();
  param_1[2] = uVar1;
  uVar1 = FUN_1466890b0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149227baa FUN_149227baa body=414 status=ok
// SIG undefined FUN_149227baa(void)

undefined8 FUN_149227baa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_228 [32];
  undefined **local_208 [2];
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined2 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 *local_c4;
  undefined1 *puStack_bc;
  undefined8 local_b4;
  undefined8 local_a8 [12];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f8 = &PTR_FUN_14bad5c20;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0x3f91111111111111;
  local_1c0 = 0x800;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_208[0] = &PTR_FUN_14bb05020;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c8 = 1;
  local_c4 = &DAT_3f8000003f800000;
  puStack_bc = &DAT_3f8000003f800000;
  local_b4 = 0x4120000000000000;
  local_48 = 1;
  FUN_144756208(&local_e8,param_1 + 0x1f0);
  local_c8 = *(undefined1 *)(param_1 + 0x210);
  local_c4 = *(undefined1 **)(param_1 + 0x214);
  puStack_bc = *(undefined1 **)(param_1 + 0x21c);
  local_b4 = *(undefined8 *)(param_1 + 0x224);
  puVar2 = (undefined8 *)(param_1 + 0x240);
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = *(undefined1 *)(param_1 + 0x2a0);
  FUN_149227d4a(param_2,local_208);
  FUN_14912fe88(local_208);
  if ((local_30 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149227d4a FUN_149227d4a body=211 status=ok
// SIG undefined FUN_149227d4a(void)

undefined8 * FUN_149227d4a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d7d84();
  param_1[2] = uVar1;
  uVar1 = FUN_1466890b0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149227e24 FUN_149227e24 body=25 status=ok
// SIG undefined FUN_149227e24(void)

void FUN_149227e24(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1475047b4();
  return;
}



// FUNCTION 149227e3e FUN_149227e3e body=190 status=ok
// SIG undefined FUN_149227e3e(void)

void FUN_149227e3e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = **(undefined4 **)*param_2;
  lVar2 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar3 = FUN_144828ac0((undefined8 *)*param_2 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar2 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar2 * 0x14));
  lVar2 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar4 = FUN_144828ac0(*param_2 + 0x60,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar2 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar2 * 0x14));
  lVar2 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar2 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar2 * 0x14));
  FUN_149227f40(uVar1,uVar3,uVar4,uVar5);
  return;
}



// FUNCTION 149227f04 FUN_149227f04 body=59 status=ok
// SIG undefined FUN_149227f04(void)

void FUN_149227f04(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149227f40(*(undefined4 *)(param_1 + 0x120),param_1 + 0x138,param_1 + 0x13c,param_1 + 0x140);
  return;
}



// FUNCTION 149227f40 FUN_149227f40 body=186 status=ok
// SIG undefined FUN_149227f40(void)

void FUN_149227f40(int param_1,float *param_2,int *param_3,char *param_4)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_4 == '\0') {
    *param_2 = 0.0;
    iVar1 = 1;
    if (1 < param_1) {
      iVar1 = param_1;
    }
    *param_3 = iVar1;
    *param_4 = '\x01';
  }
  FUN_1400b22c2(local_50,&DAT_149e02088);
  fVar2 = (float)FUN_1432ac7f0(0,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (0 < *param_3) {
    iVar1 = 1;
    if (1 < param_1) {
      iVar1 = param_1;
    }
    *param_2 = fVar2 / (float)iVar1 + *param_2;
    *param_3 = *param_3 + -1;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149227ffc FUN_149227ffc body=151 status=ok
// SIG undefined FUN_149227ffc(void)

void FUN_149227ffc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 *local_20;
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  local_38 = puVar1[0xc];
  local_30 = *(undefined4 *)puVar1[0x10];
  local_28 = *(undefined4 *)puVar1[0x14];
  local_20 = local_14;
  local_14[0] = 1;
  local_10 = *(undefined8 *)puVar1[0x18];
  FUN_149228250(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]));
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922809a FUN_14922809a body=172 status=ok
// SIG undefined FUN_14922809a(void)

void FUN_14922809a(longlong param_1)

{
  undefined1 auStack_248 [32];
  longlong local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 *local_210;
  undefined1 local_208 [484];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_218 = *(undefined4 *)(param_1 + 0x38);
  local_220 = *(undefined4 *)(param_1 + 0x34);
  local_228 = param_1 + 0x24;
  local_210 = local_24;
  local_24[0] = 1;
  local_20 = *(undefined8 *)(param_1 + 0x3c);
  FUN_149228250(local_208,param_1 + 8,*(undefined1 *)(param_1 + 0x20),
                *(undefined1 *)(param_1 + 0x21));
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228148 FUN_149228148 body=99 status=ok
// SIG undefined FUN_149228148(void)

void FUN_149228148(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149228250(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                *(undefined4 *)puVar1[0x10],*(undefined4 *)puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 1492281b2 FUN_1492281b2 body=157 status=ok
// SIG undefined FUN_1492281b2(void)

void FUN_1492281b2(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined4 local_210;
  undefined4 local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x3c;
  local_208 = *(undefined4 *)(param_1 + 0x38);
  local_210 = *(undefined4 *)(param_1 + 0x34);
  local_218 = param_1 + 0x24;
  FUN_149228250(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x20),
                *(undefined1 *)(param_1 + 0x21));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228250 FUN_149228250 body=347 status=ok
// SIG undefined FUN_149228250(void)

void FUN_149228250(longlong param_1,double *param_2,char param_3,char param_4,undefined8 param_5,
                  undefined4 param_6,float param_7,char *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x58) != 0 && param_3 == '\x01') {
    puVar4 = &DAT_14c846480;
    puVar5 = local_98;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if ((((uint)*(ushort *)(param_8 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_8 + 4) != 0))
       && (*param_8 != '\0')) {
      uVar1 = *(undefined8 *)(param_1 + 0x1b0);
      local_a0 = *(undefined4 *)(param_8 + 8);
      local_a8 = *(undefined8 *)param_8;
      uVar2 = FUN_140813180(uVar1);
      FUN_14486750c(uVar1,local_98,uVar2,0);
    }
    if (param_4 == '\x01') {
      local_c0 = (double)param_7;
      local_b0 = param_2[2] * local_c0;
      local_b8 = param_2[1] * local_c0;
      local_c0 = local_c0 * *param_2;
      local_d0 = param_6;
      local_d8 = param_5;
      FUN_14446764a(*(undefined8 *)(param_1 + 0x58),local_98,&DAT_14c8464e0);
    }
    else if (param_4 == '\0') {
      local_d8 = param_5;
      FUN_144467456(*(undefined8 *)(param_1 + 0x58),local_98,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492283ac FUN_1492283ac body=179 status=ok
// SIG undefined FUN_1492283ac(void)

void FUN_1492283ac(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 *local_90;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined4 *)*param_2;
  uVar2 = *(undefined1 *)param_2[4];
  uVar1 = *(undefined4 *)param_2[8];
  local_98 = *(undefined4 *)param_2[0xc];
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  local_90 = local_84;
  local_84[0] = 1;
  local_80 = *(undefined8 *)param_2[0x10];
  puVar6 = &DAT_14c846480;
  puVar7 = &local_78;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_78._0_4_ = *puVar3;
  local_78._4_4_ = puVar3[1];
  uStack_70 = puVar3[2];
  uStack_6c = puVar3[3];
  local_68 = puVar3[4];
  uStack_64 = puVar3[5];
  uStack_60 = puVar3[6];
  uStack_5c = puVar3[7];
  FUN_149228884(uVar4,&local_78,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228466 FUN_149228466 body=197 status=ok
// SIG undefined FUN_149228466(void)

void FUN_149228466(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined1 *local_280;
  undefined1 local_278 [484];
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1412ca278(local_278);
  FUN_1490d751a(local_278);
  local_288 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  local_280 = local_94;
  local_94[0] = 1;
  local_90 = *(undefined8 *)(param_1 + 0x3c);
  puVar4 = &DAT_14c846480;
  puVar5 = &local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_88._0_4_ = *(undefined4 *)(param_1 + 0x10);
  local_88._4_4_ = *(undefined4 *)(param_1 + 0x14);
  uStack_80 = *(undefined4 *)(param_1 + 0x18);
  uStack_7c = *(undefined4 *)(param_1 + 0x1c);
  local_78 = *(undefined4 *)(param_1 + 0x20);
  uStack_74 = *(undefined4 *)(param_1 + 0x24);
  uStack_70 = *(undefined4 *)(param_1 + 0x28);
  uStack_6c = *(undefined4 *)(param_1 + 0x2c);
  FUN_149228884(local_278,&local_88,uVar2,uVar1);
  FUN_140f8ccfc(local_278);
  if ((local_28 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922852c FUN_14922852c body=163 status=ok
// SIG undefined FUN_14922852c(void)

void FUN_14922852c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined4 *)*param_2;
  uVar2 = *(undefined1 *)param_2[4];
  uVar1 = *(undefined4 *)param_2[8];
  local_88 = *(undefined4 *)param_2[0xc];
  local_80 = param_2[0x10];
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  puVar6 = &DAT_14c846480;
  puVar7 = &local_78;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_78._0_4_ = *puVar3;
  local_78._4_4_ = puVar3[1];
  uStack_70 = puVar3[2];
  uStack_6c = puVar3[3];
  local_68 = puVar3[4];
  uStack_64 = puVar3[5];
  uStack_60 = puVar3[6];
  uStack_5c = puVar3[7];
  FUN_149228884(uVar4,&local_78,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492285d6 FUN_1492285d6 body=182 status=ok
// SIG undefined FUN_1492285d6(void)

void FUN_1492285d6(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  longlong local_270;
  undefined1 local_268 [480];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_1412ca278(local_268);
  FUN_1490d751a(local_268);
  local_270 = param_1 + 0x3c;
  local_278 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  puVar4 = &DAT_14c846480;
  puVar5 = &local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_88._0_4_ = *(undefined4 *)(param_1 + 0x10);
  local_88._4_4_ = *(undefined4 *)(param_1 + 0x14);
  uStack_80 = *(undefined4 *)(param_1 + 0x18);
  uStack_7c = *(undefined4 *)(param_1 + 0x1c);
  local_78 = *(undefined4 *)(param_1 + 0x20);
  uStack_74 = *(undefined4 *)(param_1 + 0x24);
  uStack_70 = *(undefined4 *)(param_1 + 0x28);
  uStack_6c = *(undefined4 *)(param_1 + 0x2c);
  FUN_149228884(local_268,&local_88,uVar2,uVar1);
  FUN_140f8ccfc(local_268);
  if ((local_28 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922868e FUN_14922868e body=123 status=ok
// SIG undefined FUN_14922868e(void)

void FUN_14922868e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 *local_20;
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_2;
  local_28 = *(undefined4 *)puVar1[0xc];
  local_20 = local_14;
  local_14[0] = 1;
  local_10 = *(undefined8 *)puVar1[0x10];
  FUN_149228884(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                *(undefined4 *)puVar1[8]);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228710 FUN_149228710 body=153 status=ok
// SIG undefined FUN_149228710(void)

void FUN_149228710(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined1 *local_210;
  undefined1 local_208 [484];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_218 = *(undefined4 *)(param_1 + 0x78);
  local_210 = local_24;
  local_24[0] = 1;
  local_20 = *(undefined8 *)(param_1 + 0x7c);
  FUN_149228884(local_208,param_1 + 0x10,*(undefined1 *)(param_1 + 0x70),
                *(undefined4 *)(param_1 + 0x74));
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492287aa FUN_1492287aa body=71 status=ok
// SIG undefined FUN_1492287aa(void)

void FUN_1492287aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149228884(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                *(undefined4 *)puVar1[8],*(undefined4 *)puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 1492287f8 FUN_1492287f8 body=138 status=ok
// SIG undefined FUN_1492287f8(void)

void FUN_1492287f8(longlong param_1)

{
  undefined1 auStack_228 [32];
  undefined4 local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x7c;
  local_208 = *(undefined4 *)(param_1 + 0x78);
  FUN_149228884(local_1f8,param_1 + 0x10,*(undefined1 *)(param_1 + 0x70),
                *(undefined4 *)(param_1 + 0x74));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228884 FUN_149228884 body=280 status=ok
// SIG undefined FUN_149228884(void)

void FUN_149228884(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined4 param_5,char *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0 && param_3 == '\x01') {
    puVar5 = &DAT_14c846480;
    puVar6 = local_b8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((((uint)*(ushort *)(param_6 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_6 + 4) != 0))
       && (*param_6 != '\0')) {
      uVar1 = *(undefined8 *)(param_1 + 0x1b0);
      local_c0 = *(undefined4 *)(param_6 + 8);
      local_c8 = *(undefined8 *)param_6;
      uVar2 = FUN_140813180(uVar1);
      FUN_14486750c(uVar1,local_b8,uVar2,0);
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    local_d8 = param_4;
    FUN_14446882c(lVar3,local_b8,param_2,param_5);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922899e FUN_14922899e body=133 status=ok
// SIG undefined FUN_14922899e(void)

undefined8 FUN_14922899e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &PTR_FUN_14bb05a50;
  local_48 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined1 *)(param_1 + 0x20);
  local_2f = *(undefined1 *)(param_1 + 0x21);
  local_2c = *(undefined8 *)(param_1 + 0x24);
  uStack_24 = *(undefined8 *)(param_1 + 0x2c);
  local_1c = *(undefined4 *)(param_1 + 0x34);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  FUN_149228a24(param_2);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228a24 FUN_149228a24 body=211 status=ok
// SIG undefined FUN_149228a24(void)

undefined8 * FUN_149228a24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d8622();
  param_1[2] = uVar1;
  uVar1 = FUN_146689884();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149228af8 FUN_149228af8 body=133 status=ok
// SIG undefined FUN_149228af8(void)

undefined8 FUN_149228af8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &PTR_FUN_14bb05a50;
  local_48 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined1 *)(param_1 + 0x20);
  local_2f = *(undefined1 *)(param_1 + 0x21);
  local_2c = *(undefined8 *)(param_1 + 0x24);
  uStack_24 = *(undefined8 *)(param_1 + 0x2c);
  local_1c = *(undefined4 *)(param_1 + 0x34);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  FUN_149228b7e(param_2);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228b7e FUN_149228b7e body=211 status=ok
// SIG undefined FUN_149228b7e(void)

undefined8 * FUN_149228b7e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d89c0();
  param_1[2] = uVar1;
  uVar1 = FUN_146689884();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149228c52 FUN_149228c52 body=119 status=ok
// SIG undefined FUN_149228c52(void)

undefined8 FUN_149228c52(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_FUN_14bb05ad0;
  local_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  local_24 = *(undefined4 *)(param_1 + 0x34);
  local_20 = *(undefined4 *)(param_1 + 0x38);
  local_28 = *(undefined1 *)(param_1 + 0x30);
  FUN_149228cca(param_2);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228cca FUN_149228cca body=211 status=ok
// SIG undefined FUN_149228cca(void)

undefined8 * FUN_149228cca(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d8d5e();
  param_1[2] = uVar1;
  uVar1 = FUN_146689eca();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149228d9e FUN_149228d9e body=119 status=ok
// SIG undefined FUN_149228d9e(void)

undefined8 FUN_149228d9e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_FUN_14bb05ad0;
  local_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  local_24 = *(undefined4 *)(param_1 + 0x34);
  local_20 = *(undefined4 *)(param_1 + 0x38);
  local_28 = *(undefined1 *)(param_1 + 0x30);
  FUN_149228e16(param_2);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228e16 FUN_149228e16 body=211 status=ok
// SIG undefined FUN_149228e16(void)

undefined8 * FUN_149228e16(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d904c();
  param_1[2] = uVar1;
  uVar1 = FUN_146689eca();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149228eea FUN_149228eea body=143 status=ok
// SIG undefined FUN_149228eea(void)

undefined8 FUN_149228eea(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [2];
  undefined8 local_98 [12];
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = &PTR_FUN_14bb05b50;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_34 = *(undefined4 *)(param_1 + 0x74);
  local_30 = *(undefined4 *)(param_1 + 0x78);
  local_38 = *(undefined1 *)(param_1 + 0x70);
  FUN_149228f7a(param_2,local_a8);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149228f7a FUN_149228f7a body=211 status=ok
// SIG undefined FUN_149228f7a(void)

undefined8 * FUN_149228f7a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d933a();
  param_1[2] = uVar1;
  uVar1 = FUN_14668a46a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922904e FUN_14922904e body=143 status=ok
// SIG undefined FUN_14922904e(void)

undefined8 FUN_14922904e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [2];
  undefined8 local_98 [12];
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8[0] = &PTR_FUN_14bb05b50;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_34 = *(undefined4 *)(param_1 + 0x74);
  local_30 = *(undefined4 *)(param_1 + 0x78);
  local_38 = *(undefined1 *)(param_1 + 0x70);
  FUN_1492290de(param_2,local_a8);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492290de FUN_1492290de body=211 status=ok
// SIG undefined FUN_1492290de(void)

undefined8 * FUN_1492290de(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d9628();
  param_1[2] = uVar1;
  uVar1 = FUN_14668a46a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492291b2 FUN_1492291b2 body=144 status=ok
// SIG undefined FUN_1492291b2(void)

void FUN_1492291b2(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = *(undefined8 **)*param_2;
  puVar3 = (undefined8 *)((longlong *)*param_2)[4];
  uVar7 = puVar2[5];
  uVar1 = puVar2[6];
  *puVar3 = puVar2[4];
  puVar3[1] = uVar7;
  puVar3[2] = uVar1;
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  local_48 = *(undefined4 *)(puVar2 + 2);
  uStack_44 = *(undefined4 *)((longlong)puVar2 + 0x14);
  uStack_40 = *(undefined4 *)(puVar2 + 3);
  uStack_3c = *(undefined4 *)((longlong)puVar2 + 0x1c);
  FUN_1448052ee(&local_58,&local_38);
  puVar3[5] = local_28;
  puVar3[3] = local_38;
  puVar3[4] = uStack_30;
  uVar4 = *(undefined4 *)((longlong)puVar2 + 0x44);
  uVar5 = *(undefined4 *)(puVar2 + 9);
  uVar6 = *(undefined4 *)((longlong)puVar2 + 0x4c);
  uVar1 = puVar2[10];
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)((longlong)puVar3 + 0x34) = uVar4;
  *(undefined4 *)(puVar3 + 7) = uVar5;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar6;
  puVar3[8] = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


