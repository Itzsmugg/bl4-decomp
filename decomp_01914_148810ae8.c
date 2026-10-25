// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148810ae8 FUN_148810ae8 body=527 status=ok
// SIG undefined FUN_148810ae8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148810ae8(longlong param_1,float *param_2,float *param_3)

{
  double dVar1;
  undefined1 auVar2 [32];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (*(int *)(param_1 + 0x640) == 2) {
    auVar11 = *(undefined1 (*) [16])(param_1 + 0x280) & _DAT_149931180;
    auVar8 = _DAT_149931180 & *(undefined1 (*) [16])(param_1 + 0x290);
    auVar2._16_16_ = auVar8;
    auVar2._0_16_ = auVar11;
    auVar8._8_8_ = auVar11._0_8_;
    auVar11 = maxpd(auVar11,auVar2._8_16_);
    auVar8 = maxpd(auVar11,auVar8);
    fVar9 = (float)auVar8._0_8_ * *(float *)(param_1 + 0x660);
    *param_2 = fVar9;
  }
  else if (*(int *)(param_1 + 0x640) == 1) {
    fVar9 = *(float *)(param_1 + 0x664) - *(float *)(param_1 + 0x668);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    dVar10 = (double)fVar9 * *(double *)(param_1 + 0x290);
    dVar5 = *(double *)(param_1 + 0x240);
    dVar6 = *(double *)(param_1 + 0x248);
    dVar7 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar14 = dVar7 * 0.0 - dVar5 * dVar10;
    dVar12 = dVar5 * 0.0 - dVar6 * 0.0;
    dVar13 = dVar10 * dVar6 - dVar7 * 0.0;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    dVar3 = (dVar12 * dVar6 - dVar14 * dVar7) + dVar1 * dVar13 + 0.0;
    dVar4 = (dVar7 * dVar13 - dVar5 * dVar12) + *(double *)(param_1 + 600) * dVar14 + 0.0;
    dVar7 = *(double *)(param_1 + 0x280);
    if (*(double *)(param_1 + 0x280) <= *(double *)(param_1 + 0x288)) {
      dVar7 = *(double *)(param_1 + 0x288);
    }
    dVar7 = (double)(float)(dVar7 * (double)*(float *)(param_1 + 0x668));
    *param_2 = (float)(SQRT(dVar3 * dVar3 + dVar4 * dVar4) + dVar7);
    fVar9 = (float)(dVar12 * dVar1 + dVar10 + (dVar14 * dVar5 - dVar13 * dVar6) + dVar7);
  }
  else {
    *param_2 = (float)SQRT(*(double *)(param_1 + 0x180) * *(double *)(param_1 + 0x180) +
                           *(double *)(param_1 + 0x178) * *(double *)(param_1 + 0x178));
    fVar9 = (float)*(double *)(param_1 + 0x188);
  }
  *param_3 = fVar9;
  return;
}



// FUNCTION 148810cf8 FUN_148810cf8 body=116 status=ok
// SIG undefined FUN_148810cf8(void)

longlong FUN_148810cf8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar1 = FUN_1404dcd0c(param_1 + 0x1288,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_14063d1f6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_148810d4d;
  }
  lVar1 = 0;
LAB_148810d4d:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148810d6e FUN_148810d6e body=68 status=ok
// SIG undefined FUN_148810d6e(void)

ulonglong FUN_148810d6e(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (param_1[0x2c6] == 0) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))();
    if (cVar1 == '\0') {
      cVar1 = FUN_140769252(param_1);
      if (cVar1 == '\0') {
        uVar2 = CONCAT71(uVar3,param_1[0x2c7] != 0);
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148810db2 FUN_148810db2 body=41 status=ok
// SIG undefined FUN_148810db2(void)

longlong FUN_148810db2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x1968;
  if ((*(longlong *)(param_1 + 0x1968) == 0) && (*(longlong *)(param_1 + 0x1630) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x1630) + 0x98;
  }
  return lVar1;
}



// FUNCTION 148810ddc FUN_148810ddc body=250 status=ok
// SIG undefined FUN_148810ddc(void)

longlong FUN_148810ddc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RDI;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)*(uint *)(param_1 + 0x1660) < 1) {
    plVar1 = *(longlong **)(param_1 + 0x1630);
    if (plVar1 != (longlong *)0x0) {
      local_38 = 0;
      uStack_30 = 0;
      LOCK();
      iVar2 = DAT_14cb80fb0 + 1;
      UNLOCK();
      iVar4 = DAT_14cb80fb0 + 1;
      DAT_14cb80fb0 = iVar2;
      if ((int)plVar1[8] != iVar4) {
        *(int *)(plVar1 + 8) = iVar4;
        (**(code **)(*plVar1 + 0x2b0))();
      }
      if ((longlong)(int)uStack_30 == 0) {
        bVar5 = true;
      }
      else {
        lVar3 = 0;
        do {
          unaff_RDI = *(longlong *)(local_38 + lVar3);
          bVar5 = unaff_RDI == 0;
          if (!bVar5) goto LAB_148810ea3;
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)uStack_30 * 8 != lVar3);
        unaff_RDI = 0;
      }
LAB_148810ea3:
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (!bVar5) goto LAB_148810e19;
    }
  }
  else {
    lVar3 = 0;
    do {
      unaff_RDI = *(longlong *)(*(longlong *)(param_1 + 0x1658) + lVar3);
      if (unaff_RDI != 0) goto LAB_148810e19;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)*(uint *)(param_1 + 0x1660) << 3 != lVar3);
  }
  unaff_RDI = *(longlong *)(param_1 + 0x1638);
LAB_148810e19:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI;
}



// FUNCTION 148810ed8 FUN_148810ed8 body=144 status=ok
// SIG undefined FUN_148810ed8(void)

void FUN_148810ed8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_24 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14471653d(*(undefined8 *)(param_1 + 0x658));
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_30,L"SkeletalMesh",1);
    uVar2 = FUN_144a74fb4();
    local_20 = FUN_144a87586(uVar2,local_30);
    if (local_20 != 0) {
      FUN_148812910(param_2,local_24,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148810f6a FUN_148810f6a body=756 status=ok
// SIG undefined FUN_148810f6a(void)

undefined8 * FUN_148810f6a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140816eac(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144756262(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140816eac(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144756262(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_140816cc4(param_1 + 8,param_2 + 8);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_140816cc4(param_1 + 0x12,param_2 + 0x12);
  param_1[0x1c] = 0;
  iVar1 = *(int *)(param_2 + 0x1d);
  pvVar2 = (void *)param_2[0x1c];
  *(int *)(param_1 + 0x1d) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  else {
    FUN_140817052(param_1 + 0x1c,iVar1,0);
    memcpy((void *)param_1[0x1c],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x1e] = 0;
  iVar1 = *(int *)(param_2 + 0x1f);
  pvVar2 = (void *)param_2[0x1e];
  *(int *)(param_1 + 0x1f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    FUN_1408171e8(param_1 + 0x1e,iVar1,0);
    memcpy((void *)param_1[0x1e],pvVar2,(longlong)iVar1 * 0xc);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x22);
  pvVar2 = (void *)param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x21,iVar1,0);
    memcpy((void *)param_1[0x21],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14881125e FUN_14881125e body=458 status=ok
// SIG undefined FUN_14881125e(void)

void FUN_14881125e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_1[0x2c6] == 0) && (cVar3 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar3 == '\0'))
      && (cVar3 = FUN_140769252(param_1), cVar3 == '\0')) && (param_1[0x2c7] == 0)) {
    if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_147a0bdb8(param_1,param_2);
    return;
  }
  if ((longlong)(int)param_1[0x2cc] == 0) {
    iVar7 = 0;
  }
  else {
    plVar8 = (longlong *)param_1[0x2cb];
    plVar1 = plVar8 + (int)param_1[0x2cc];
    iVar7 = 0;
    do {
      if (((longlong *)*plVar8 != (longlong *)0x0) &&
         (plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x388))(),
         plVar4 != (longlong *)0x0)) {
        uVar2 = *(uint *)(plVar4 + 1);
        if ((ulonglong)uVar2 != 0) {
          uVar5 = uVar2 - 1;
          if ((int)*(uint *)((longlong)param_1 + 0x854) < (int)(uVar2 - 1)) {
            uVar5 = *(uint *)((longlong)param_1 + 0x854);
          }
          if ((int)uVar5 < 1) {
            uVar5 = 0;
          }
          if ((int)uVar5 < (int)uVar2) {
            uVar6 = (ulonglong)uVar5;
            do {
              if (*(int *)(*(longlong *)(*plVar4 + uVar6 * 8) + 0xec) != 0) {
                if ((int)uVar6 < (int)uVar2) {
                  iVar7 = iVar7 + *(int *)(*(longlong *)(*plVar4 + (uVar6 & 0xffffffff) * 8) + 0xec)
                  ;
                }
                break;
              }
              uVar6 = uVar6 + 1;
            } while (uVar2 != uVar6);
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  FUN_140002266(local_58,L"\nRequiredBones(%d) NumVerts(%d)",(int)param_1[0x1ab],iVar7);
  FUN_1407ec8fc(&local_48,param_2,local_58);
  if (&local_48 == param_2) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 148811438 FUN_148811438 body=270 status=ok
// SIG undefined FUN_148811438(void)

void FUN_148811438(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  if (*(code **)(lVar5 + 0xbf0) == (code *)&LAB_1447a6898) {
    if ((int)param_1[0x2cc] < 1) {
      return;
    }
  }
  else {
    cVar2 = (**(code **)(lVar5 + 0xbf0))(param_1);
    if (cVar2 == '\0') {
      return;
    }
    lVar5 = *param_1;
  }
  if (*(code **)(lVar5 + 0xc10) != FUN_148811d38) {
    iVar3 = (**(code **)(lVar5 + 0xc10))(param_1);
    goto LAB_1488114ab;
  }
  if (*(code **)(lVar5 + 0xbf0) == (code *)&LAB_1447a6898) {
    if ((int)param_1[0x2cc] < 1) {
LAB_148811525:
      if (param_1[0x115] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(longlong *)(param_1[0x115] + 0x40) + 8) + -1;
      }
      goto LAB_1488114ab;
    }
  }
  else {
    cVar2 = (**(code **)(lVar5 + 0xbf0))(param_1);
    if (cVar2 == '\0') goto LAB_148811525;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x167c);
LAB_1488114ab:
  iVar4 = iVar3;
  if ((longlong)(int)param_1[0x2c2] != 0) {
    lVar5 = 0;
    do {
      if ((*(longlong *)(param_1[0x2c1] + lVar5) != 0) &&
         (iVar1 = *(int *)(*(longlong *)(param_1[0x2c1] + lVar5) + 0x28), iVar1 <= iVar4)) {
        iVar4 = iVar1;
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)(int)param_1[0x2c2] * 0x18 != lVar5);
  }
  iVar1 = iVar4 + param_3;
  if (iVar3 <= iVar4 + param_3) {
    iVar1 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  *param_2 = iVar3;
  return;
}



// FUNCTION 148811546 FUN_148811546 body=179 status=ok
// SIG undefined FUN_148811546(void)

undefined8 FUN_148811546(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + -0x1188);
  plVar5 = (longlong *)(param_1 + -0x1238);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(plVar5);
    if (lVar4 != 0) goto LAB_14881157f;
  }
  else {
LAB_14881157f:
    plVar1 = *(longlong **)(lVar4 + 0x218);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar5 + 0xc58))(plVar5);
      if (cVar2 != '\0') {
        local_40 = local_38;
        local_48 = local_34;
        (**(code **)(*plVar1 + 0x370))(plVar1,param_2,param_3,param_4);
        uVar3 = 1;
        goto LAB_1488115d7;
      }
    }
  }
  uVar3 = 0;
LAB_1488115d7:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488115fa FUN_1488115fa body=200 status=ok
// SIG undefined FUN_1488115fa(void)

undefined8 * FUN_1488115fa(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_4;
  if (DAT_14c9abbe0 == param_4) {
    local_30 = DAT_14c9abbf0;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_38 = &local_50;
  local_40 = &LAB_143ce8f74;
  local_50 = param_2;
  local_48 = param_3;
  FUN_1447683ea(&local_58,&local_30,0);
  FUN_1408d6bd2(uVar1,local_58,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488116c4 FUN_1488116c4 body=198 status=ok
// SIG undefined FUN_1488116c4(void)

undefined4 * FUN_1488116c4(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 **local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_4;
  if (DAT_14c9abbe0 == param_4) {
    local_30 = DAT_14c9abbf0;
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar4 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_38 = &local_50;
  local_40 = &LAB_143ce8ffc;
  local_50 = param_2;
  local_48 = param_3;
  FUN_1447683ea(&local_58,&local_30,0);
  FUN_1408d6bd2(uVar4,local_58,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881178c FUN_14881178c body=198 status=ok
// SIG undefined FUN_14881178c(void)

undefined4 * FUN_14881178c(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 **local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_4;
  if (DAT_14c9abbe0 == param_4) {
    local_30 = DAT_14c9abbf0;
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar4 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_38 = &local_50;
  local_40 = &LAB_143ce905a;
  local_50 = param_2;
  local_48 = param_3;
  FUN_1447683ea(&local_58,&local_30,0);
  FUN_1408d6bd2(uVar4,local_58,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148811854 FUN_148811854 body=613 status=ok
// SIG undefined FUN_148811854(void)

void FUN_148811854(longlong *param_1,undefined4 *param_2,undefined1 (*param_3) [16],
                  undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_e8 [32];
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar8 = (**(code **)(*param_1 + 0x480))(param_1,param_4);
  if (cVar8 != '\0') {
    uVar9 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
    cVar8 = FUN_144a7f202(uVar9,DAT_14c9abbf0);
    if (cVar8 == '\0') {
      local_88 = *(undefined8 *)param_3[1];
      local_98 = *(undefined8 *)*param_3;
      uStack_90 = *(undefined8 *)(*param_3 + 8);
      local_b8 = *param_2;
      uStack_b4 = param_2[1];
      uStack_b0 = param_2[2];
      uStack_ac = param_2[3];
      local_a8 = *(undefined8 *)(param_2 + 4);
      FUN_147cb1aa2(param_1,&local_b8,&local_98,param_4);
    }
  }
  lVar10 = param_1[0x16];
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_1);
    if (lVar10 != 0) goto LAB_148811922;
  }
  else {
LAB_148811922:
    fVar16 = *(float *)(lVar10 + 0x6f4);
    if (1e-08 < fVar16) goto LAB_14881193b;
  }
  fVar16 = 1.0;
LAB_14881193b:
  dVar11 = *(double *)*param_3 * (double)param_1[0x50];
  dVar12 = *(double *)(*param_3 + 8) * (double)param_1[0x51];
  dVar2 = *(double *)param_3[1] * (double)param_1[0x52];
  dVar5 = (double)param_1[0x48];
  dVar6 = (double)param_1[0x49];
  dVar7 = (double)param_1[0x4a];
  dVar1 = (double)param_1[0x4b];
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar2 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar2;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = (dVar7 * dVar14 - dVar5 * dVar13) + (double)param_1[0x4b] * dVar15 + dVar12 +
          (double)param_1[0x4d];
  dVar12 = (double)param_1[0x4e];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (dVar13 * dVar6 - dVar15 * dVar7) + dVar1 * dVar14 + dVar11 + (double)param_1[0x4c]
  ;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_3 = auVar3;
  *(double *)param_3[1] = dVar13 * dVar1 + dVar2 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar12;
  uVar9 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
  local_c0 = DAT_14c9abbf8;
  local_c8 = fVar16;
  FUN_1458bf390(uVar9,param_2,param_3,param_4);
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148811aba FUN_148811aba body=267 status=ok
// SIG undefined FUN_148811aba(void)

void FUN_148811aba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c9abbe0 == param_7) {
    param_7 = DAT_14c9abbf0;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_58 = &local_88;
  local_70 = param_5;
  local_68 = param_6;
  local_60 = FUN_143ce9534;
  local_88 = param_2;
  local_80 = param_3;
  local_78 = param_4;
  FUN_1447683ea(&local_90,&param_7,0);
  FUN_1408d6bd2(uVar1,local_90,&local_60);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148811bc6 FUN_148811bc6 body=197 status=ok
// SIG undefined FUN_148811bc6(void)

void FUN_148811bc6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9abbe0 == param_5) {
    param_5 = DAT_14c9abbf0;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_38 = &local_58;
  local_40 = FUN_143ce96a6;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  FUN_1447683ea(&local_60,&param_5,0);
  FUN_1408d6bd2(uVar1,local_60,&local_40);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148811c8c FUN_148811c8c body=163 status=ok
// SIG undefined FUN_148811c8c(void)

void FUN_148811c8c(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_3;
  if (DAT_14c9abbe0 == param_3) {
    local_28 = DAT_14c9abbf0;
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_30 = &local_40;
  local_38 = FUN_143ce9964;
  local_40 = param_2;
  FUN_1447683ea(&local_48,&local_28,0);
  FUN_1408d6bd2(uVar1,local_48,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148811d30 FUN_148811d30 body=7 status=ok
// SIG undefined FUN_148811d30(void)

void FUN_148811d30(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1798) = param_2;
  return;
}



// FUNCTION 148811d38 FUN_148811d38 body=87 status=ok
// SIG undefined FUN_148811d38(void)

int FUN_148811d38(longlong *param_1)

{
  char cVar1;
  
  if (*(code **)(*param_1 + 0xbf0) == (code *)&LAB_1447a6898) {
    if ((int)param_1[0x2cc] < 1) {
LAB_148811d74:
      if (param_1[0x115] != 0) {
        return *(int *)(*(longlong *)(param_1[0x115] + 0x40) + 8) + -1;
      }
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar1 == '\0') goto LAB_148811d74;
  }
  return *(int *)((longlong)param_1 + 0x167c);
}



// FUNCTION 148811d90 FUN_148811d90 body=383 status=ok
// SIG undefined FUN_148811d90(void)

ulonglong FUN_148811d90(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 unaff_RDI;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78 [7];
  ulonglong local_40;
  ulonglong uVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
LAB_148811ec9:
    uVar6 = 0;
  }
  else {
    plVar7 = (longlong *)(param_1 + 0x1968);
    plVar4 = plVar7;
    if (*(longlong *)(param_1 + 0x1968) == 0) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1630) + 0x98);
      if (*(longlong *)(param_1 + 0x1630) == 0) {
        plVar4 = plVar7;
      }
      if (*plVar4 == 0) goto LAB_148811ec9;
    }
    local_78[4] = 0;
    local_78[5] = 0;
    cVar1 = FUN_145dc59ba(param_2,plVar4,local_78 + 4,&DAT_14cb73cf0);
    local_78[2] = 0;
    local_78[3] = 0;
    plVar4 = plVar7;
    if ((*plVar7 == 0) &&
       (plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1630) + 0x98),
       *(longlong *)(param_1 + 0x1630) == 0)) {
      plVar4 = plVar7;
    }
    cVar2 = FUN_145dc59ba(param_2,plVar4,local_78 + 2,&DAT_14cb73cf8);
    local_78[0] = 0;
    local_78[1] = 0;
    if ((*plVar7 == 0) && (*(longlong *)(param_1 + 0x1630) != 0)) {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1630) + 0x98);
    }
    cVar3 = FUN_145dc59ba(param_2,plVar7,local_78,&DAT_14cb73d08);
    bVar5 = (cVar2 == '\x02' || cVar1 == '\x02') || cVar3 == '\x02';
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar5);
    if (bVar5) {
      FUN_148811f10(param_1,local_78 + 4,local_78 + 2,local_78);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78[4] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148811f10 FUN_148811f10 body=1551 status=ok
// SIG undefined FUN_148811f10(void)

void FUN_148811f10(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = param_4;
  local_e0 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    plVar13 = (longlong *)*param_2;
    plVar1 = plVar13 + (int)param_2[1];
    do {
      lVar14 = *plVar13;
      if (lVar14 != 0) {
        uVar6 = FUN_1464aeae0();
        cVar3 = FUN_1448093f4(lVar14,uVar6);
        if ((cVar3 != '\0') && (lVar7 = FUN_14479d2ce(lVar14 + 0x28), lVar7 != 0)) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar7);
          }
          uVar2 = uStack_c0;
          lVar10 = (longlong)(int)uStack_c0;
          uVar4 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
          if (uStack_c0._4_4_ < uVar4) {
            FUN_140cd402e(&local_c8,uVar2 & 0xffffffff);
          }
          *(longlong *)(local_c8 + lVar10 * 8) = lVar7;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar7);
          }
          iVar5 = *(int *)(lVar14 + 0x38);
          iVar8 = (int)uStack_d0 + iVar5;
          if (iVar8 < 0) goto LAB_148812511;
          if ((int)uStack_d0._4_4_ < iVar8) {
            FUN_1474ba72a(&local_d8);
            iVar5 = *(int *)(lVar14 + 0x38);
          }
          if (iVar5 != 0) {
            lVar14 = *(longlong *)(lVar14 + 0x30);
            lVar7 = (longlong)iVar5 << 3;
            do {
              lVar10 = FUN_14479d2ce(lVar14);
              if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar10);
              }
              uVar2 = uStack_d0;
              lVar11 = (longlong)(int)uStack_d0;
              uVar4 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar4);
              if (uStack_d0._4_4_ < uVar4) {
                FUN_140655806(&local_d8,uVar2 & 0xffffffff);
              }
              *(longlong *)(local_d8 + lVar11 * 8) = lVar10;
              if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar10);
              }
              lVar14 = lVar14 + 8;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  if ((longlong)(int)local_e0[1] != 0) {
    plVar13 = (longlong *)*local_e0;
    plVar1 = plVar13 + (int)local_e0[1];
    do {
      lVar14 = *plVar13;
      if (lVar14 != 0) {
        uVar6 = FUN_1464aeae0();
        cVar3 = FUN_1448093f4(lVar14,uVar6);
        if ((cVar3 != '\0') && ((longlong)*(int *)(lVar14 + 0x30) != 0)) {
          lVar7 = *(longlong *)(lVar14 + 0x28);
          lVar10 = (longlong)*(int *)(lVar14 + 0x30) << 3;
          do {
            lVar11 = FUN_14479d2ce(lVar7);
            if (lVar11 != 0) {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar11);
              }
              uVar2 = uStack_c0;
              lVar12 = (longlong)(int)uStack_c0;
              uVar4 = (int)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
              if (uStack_c0._4_4_ < uVar4) {
                FUN_140cd402e(&local_c8,uVar2 & 0xffffffff);
              }
              *(longlong *)(local_c8 + lVar12 * 8) = lVar11;
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar11);
              }
            }
            lVar7 = lVar7 + 8;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
          iVar5 = *(int *)(lVar14 + 0x40);
          iVar8 = (int)uStack_d0 + iVar5;
          if (iVar8 < 0) {
LAB_148812511:
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar8);
          }
          if ((int)uStack_d0._4_4_ < iVar8) {
            FUN_1474ba72a(&local_d8);
            iVar5 = *(int *)(lVar14 + 0x40);
          }
          if (iVar5 != 0) {
            lVar14 = *(longlong *)(lVar14 + 0x38);
            lVar7 = (longlong)iVar5 << 3;
            do {
              lVar10 = FUN_14479d2ce(lVar14);
              if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar10);
              }
              uVar2 = uStack_d0;
              lVar11 = (longlong)(int)uStack_d0;
              uVar4 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar4);
              if (uStack_d0._4_4_ < uVar4) {
                FUN_140655806(&local_d8,uVar2 & 0xffffffff);
              }
              *(longlong *)(local_d8 + lVar11 * 8) = lVar10;
              if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar10);
              }
              lVar14 = lVar14 + 8;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar14 = local_e8[1];
  if ((longlong)(int)lVar14 != 0) {
    lVar7 = *local_e8;
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(lVar7 + lVar10);
      if (lVar11 != 0) {
        uVar6 = FUN_1464aeae0();
        cVar3 = FUN_1448093f4(lVar11,uVar6);
        if ((cVar3 != '\0') && (*(longlong *)(lVar11 + 0x18) != 0)) {
          local_b0 = lVar11 + 0x18;
          local_a8 = lVar11 + 0x20;
          FUN_1470f3992(&local_98,local_9c,&local_b0,0);
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar10);
  }
  FUN_1406c8fce(param_1,0);
  *(undefined4 *)(param_1 + 0x2d2) = 0;
  if (*(int *)((longlong)param_1 + 0x1694) != 0) {
    FUN_140832776(param_1 + 0x2d1,0);
  }
  uVar2 = uStack_c0;
  if (-1 < (int)uStack_c0) {
    *(undefined4 *)(param_1 + 0x2ca) = 0;
    if (*(int *)((longlong)param_1 + 0x1654) != (int)uStack_c0) {
      FUN_140832776(param_1 + 0x2c9);
    }
    if ((int)uStack_c0 != 0) {
      FUN_14083260e(param_1 + 0x2c9,&local_c8);
    }
    *(undefined1 *)(param_1 + 0x32e) = 1;
    *(undefined1 *)(param_1 + 0x300) = 1;
    FUN_140f2be08(param_1,1);
    FUN_1406548f2(param_1);
    uVar2 = uStack_d0;
    if (-1 < (int)uStack_d0) {
      plVar1 = param_1 + 0xc4;
      if (*(int *)((longlong)param_1 + 0x62c) < (int)uStack_d0) {
        FUN_1474ba72a(plVar1);
      }
      lVar14 = local_d8;
      if ((int)uStack_d0 != 0) {
        lVar7 = (longlong)(int)uStack_d0;
        lVar10 = 0;
        do {
          lVar11 = *(longlong *)(lVar14 + lVar10);
          if ((lVar11 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(lVar11);
          }
          iVar5 = (int)param_1[0xc5];
          *(uint *)(param_1 + 0xc5) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x62c) < iVar5 + 1U) {
            FUN_140655806(plVar1,iVar5);
          }
          *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar11;
          if (DAT_14c950c29 == 1 && lVar11 != 0) {
            FUN_1456cec3c(lVar11);
          }
          lVar10 = lVar10 + 8;
        } while (lVar7 * 8 != lVar10);
      }
      FUN_1448215fa(param_1);
      FUN_140c89340(&local_b0,param_1);
      plVar1 = param_1 + 0x247;
      lVar14 = (**(code **)(param_1[0x247] + 0x10))(plVar1);
      if (lVar14 == 0) {
        uVar9 = 0;
      }
      else {
        lVar14 = (**(code **)(*plVar1 + 0x10))(plVar1);
        uVar9 = *(undefined4 *)(lVar14 + 8);
      }
      FUN_14035905c(param_1,uVar9,&local_98);
      FUN_1401ff858(param_1);
      (**(code **)(*param_1 + 0xcf0))(param_1);
      FUN_140c8931a(&local_b0);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1403c3d38(&local_98);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2 & 0xffffffff);
}



// FUNCTION 148812522 FUN_148812522 body=22 status=ok
// SIG undefined FUN_148812522(void)

void FUN_148812522(longlong param_1)

{
  if (*(char *)(param_1 + 0x1970) == '\x01') {
    *(undefined1 *)(param_1 + 0x1970) = 0;
    FUN_1410322f8();
    return;
  }
  return;
}



// FUNCTION 14881253a FUN_14881253a body=293 status=ok
// SIG undefined FUN_14881253a(void)

longlong * FUN_14881253a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)FUN_14001cc68(0xf8,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b3f51b0;
  plVar7[2] = (longlong)&PTR_FUN_14b42fa70;
  *(undefined1 *)(plVar7 + 0xd) = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  *(undefined4 *)(plVar7 + 9) = 0;
  lVar3 = CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
  plVar7[0xe] = CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
  plVar7[0xf] = lVar3;
  plVar7[0x10] = DAT_14c8462d0;
  *(undefined2 *)(plVar7 + 0x11) = 0;
  lVar3 = DAT_14c8464e8;
  plVar7[0x12] = DAT_14c8464e0;
  plVar7[0x13] = lVar3;
  plVar7[0x14] = DAT_14c8464f0;
  uVar6 = DAT_14c8462c8._4_4_;
  uVar5 = (undefined4)DAT_14c8462c8;
  uVar4 = DAT_14c8462c0._4_4_;
  *(undefined4 *)(plVar7 + 0x15) = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)plVar7 + 0xac) = uVar4;
  *(undefined4 *)(plVar7 + 0x16) = uVar5;
  *(undefined4 *)((longlong)plVar7 + 0xb4) = uVar6;
  plVar7[0x17] = DAT_14c8462d0;
  *(undefined4 *)(plVar7 + 0x18) = 0;
  *(undefined2 *)((longlong)plVar7 + 0xc4) = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  *(undefined8 *)((longlong)plVar7 + 0xd2) = 0;
  *(undefined8 *)((longlong)plVar7 + 0xda) = 0;
  *(undefined4 *)((longlong)plVar7 + 0xe4) = 0x3f800000;
  *(undefined1 *)(plVar7 + 0x1d) = 0;
  *(undefined4 *)((longlong)plVar7 + 0xec) = 0;
  plVar7[0x1e] = param_1;
  *param_2 = (longlong)(plVar7 + 2);
  param_2[1] = (longlong)plVar7;
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
  return param_2;
}



// FUNCTION 14881268c FUN_14881268c body=45 status=ok
// SIG undefined FUN_14881268c(void)

longlong FUN_14881268c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14169169a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488126ba FUN_1488126ba body=48 status=ok
// SIG undefined FUN_1488126ba(void)

longlong FUN_1488126ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  FUN_14169169a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488126ea FUN_1488126ea body=48 status=ok
// SIG undefined FUN_1488126ea(void)

longlong FUN_1488126ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e0;
  FUN_14169169a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881271a FUN_14881271a body=48 status=ok
// SIG undefined FUN_14881271a(void)

longlong FUN_14881271a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e8;
  FUN_14169169a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881274a FUN_14881274a body=38 status=ok
// SIG undefined FUN_14881274a(void)

undefined8 FUN_14881274a(undefined8 param_1,int param_2)

{
  FUN_1410a31b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148812770 FUN_148812770 body=38 status=ok
// SIG undefined FUN_148812770(void)

undefined8 FUN_148812770(undefined8 param_1,int param_2)

{
  FUN_145821f76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148812796 FUN_148812796 body=123 status=ok
// SIG undefined FUN_148812796(void)

undefined8 * FUN_148812796(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b3f4650;
  lVar1 = 0;
  do {
    *(undefined ***)((longlong)param_1 + lVar1 + 0x2c8) = &PTR_FUN_14b3f4670;
    if (*(char *)((longlong)param_1 + lVar1 + 0x358) == '\x01') {
      FUN_1449db362((longlong)param_1 + lVar1 + 0x348);
      *(undefined1 *)((longlong)param_1 + lVar1 + 0x358) = 0;
    }
    lVar1 = lVar1 + -0xa8;
  } while (lVar1 != -0x1f8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148812812 FUN_148812812 body=71 status=ok
// SIG undefined FUN_148812812(void)

undefined8 * FUN_148812812(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3f4670;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_1449db362(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881285a FUN_14881285a body=29 status=ok
// SIG undefined FUN_14881285a(void)

undefined8 FUN_14881285a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148812878 FUN_148812878 body=114 status=ok
// SIG undefined FUN_148812878(void)

void FUN_148812878(longlong *param_1,int param_2)

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



// FUNCTION 1488128ea FUN_1488128ea body=38 status=ok
// SIG undefined FUN_1488128ea(void)

undefined8 FUN_1488128ea(undefined8 param_1,int param_2)

{
  FUN_140ef0a3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148812910 FUN_148812910 body=327 status=ok
// SIG undefined FUN_148812910(void)

undefined4 * FUN_148812910(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479d4d2a(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1479d4e10(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1479d4f2a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148812a58 FUN_148812a58 body=31 status=ok
// SIG undefined FUN_148812a58(void)

undefined8 FUN_148812a58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148812a8c FUN_148812a8c body=85 status=ok
// SIG undefined FUN_148812a8c(void)

void FUN_148812a8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f4d70;
  return;
}



// FUNCTION 148812ae2 FUN_148812ae2 body=118 status=ok
// SIG undefined FUN_148812ae2(void)

void FUN_148812ae2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f4d70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148812b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148812b58 FUN_148812b58 body=101 status=ok
// SIG undefined FUN_148812b58(void)

undefined8 FUN_148812b58(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14606e990(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148812bc2 FUN_148812bc2 body=45 status=ok
// SIG undefined FUN_148812bc2(void)

longlong FUN_148812bc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1459c5f48(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148812bf0 FUN_148812bf0 body=54 status=ok
// SIG undefined FUN_148812bf0(void)

longlong FUN_148812bf0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 148812c26 FUN_148812c26 body=93 status=ok
// SIG undefined FUN_148812c26(void)

ulonglong FUN_148812c26(uint param_1,uint param_2)

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



// FUNCTION 148812c84 FUN_148812c84 body=89 status=ok
// SIG undefined FUN_148812c84(void)

void FUN_148812c84(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148812cdd FUN_148812cdd body=77 status=ok
// SIG undefined FUN_148812cdd(void)

void FUN_148812cdd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 148812d44 FUN_148812d44 body=29 status=ok
// SIG undefined FUN_148812d44(void)

bool FUN_148812d44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148812d62 FUN_148812d62 body=26 status=ok
// SIG undefined FUN_148812d62(void)

bool FUN_148812d62(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148812d7c FUN_148812d7c body=101 status=ok
// SIG undefined FUN_148812d7c(void)

void FUN_148812d7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f4e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148812de2 FUN_148812de2 body=134 status=ok
// SIG undefined FUN_148812de2(void)

void FUN_148812de2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f4e90;
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
                    /* WARNING: Could not recover jumptable at 0x000148812e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148812e68 FUN_148812e68 body=68 status=ok
// SIG undefined FUN_148812e68(void)

void FUN_148812e68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148812ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148812ec6 FUN_148812ec6 body=29 status=ok
// SIG undefined FUN_148812ec6(void)

bool FUN_148812ec6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148812ee4 FUN_148812ee4 body=101 status=ok
// SIG undefined FUN_148812ee4(void)

void FUN_148812ee4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f4f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148812f4a FUN_148812f4a body=134 status=ok
// SIG undefined FUN_148812f4a(void)

void FUN_148812f4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f4f00;
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
                    /* WARNING: Could not recover jumptable at 0x000148812fc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148812fd0 FUN_148812fd0 body=39 status=ok
// SIG undefined FUN_148812fd0(void)

void FUN_148812fd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148812ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148812ff8 FUN_148812ff8 body=289 status=ok
// SIG undefined FUN_148812ff8(void)

void FUN_148812ff8(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x28 + (longlong)iStack_44 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14881311a FUN_14881311a body=190 status=ok
// SIG undefined FUN_14881311a(void)

void FUN_14881311a(longlong *param_1,longlong *param_2)

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
    FUN_1488131d8(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1488131d8 FUN_1488131d8 body=132 status=ok
// SIG undefined FUN_1488131d8(void)

void FUN_1488131d8(longlong param_1,int param_2)

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



// FUNCTION 14881325e FUN_14881325e body=303 status=ok
// SIG undefined FUN_14881325e(void)

void FUN_14881325e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 1488133a6 FUN_1488133a6 body=29 status=ok
// SIG undefined FUN_1488133a6(void)

undefined8 FUN_1488133a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488133c4 FUN_1488133c4 body=119 status=ok
// SIG undefined FUN_1488133c4(void)

void FUN_1488133c4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14881343c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14881343c FUN_14881343c body=141 status=ok
// SIG undefined FUN_14881343c(void)

void FUN_14881343c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x20);
  return;
}



// FUNCTION 1488134ca FUN_1488134ca body=268 status=ok
// SIG undefined FUN_1488134ca(void)

void FUN_1488134ca(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  lVar4 = (longlong)(int)uVar1;
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar5 = param_1;
    }
    uVar13 = 0;
    bVar12 = *(longlong *)(lVar5 + 0x18) == *(longlong *)*param_2;
    uVar9 = 0;
    do {
      uVar8 = (ulonglong)uVar9;
      uVar6 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      lVar3 = uVar8 * 0x20;
      plVar7 = (longlong *)(lVar5 + 0x38 + lVar3);
      uVar10 = uVar9;
      do {
        uVar8 = uVar8 + 1;
        uVar11 = uVar6;
        if (lVar4 <= (longlong)uVar8) break;
        lVar2 = *plVar7;
        uVar10 = uVar10 + 1;
        plVar7 = plVar7 + 4;
        uVar11 = uVar10;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      if (bVar12 == false) {
        if (uVar13 != uVar9) {
          memmove((void *)((longlong)(int)uVar13 * 0x20 + lVar5),(void *)(lVar3 + lVar5),
                  (longlong)(int)(uVar11 - uVar9) << 5);
        }
        uVar13 = uVar13 + (uVar11 - uVar9);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      uVar9 = uVar11;
    } while ((longlong)uVar8 < lVar4);
    *(uint *)(param_1 + 0x88) = uVar13;
  }
  return;
}



// FUNCTION 1488135d6 FUN_1488135d6 body=138 status=ok
// SIG undefined FUN_1488135d6(void)

void FUN_1488135d6(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148813660 FUN_148813660 body=96 status=ok
// SIG undefined FUN_148813660(void)

void FUN_148813660(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1488135d6(param_1,param_2,1);
  return;
}



// FUNCTION 1488136c0 FUN_1488136c0 body=114 status=ok
// SIG undefined FUN_1488136c0(void)

void FUN_1488136c0(longlong *param_1,int param_2)

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



// FUNCTION 148813738 FUN_148813738 body=181 status=ok
// SIG undefined FUN_148813738(void)

void FUN_148813738(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x410;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a84622(lVar1,&local_38);
  if ((longlong)(int)uStack_30 != 0) {
    lVar5 = (longlong)(int)uStack_30 << 4;
    lVar6 = local_38;
    do {
      cVar4 = FUN_144a84554(lVar1,lVar6);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x620) + 0x58);
        *(undefined4 *)(lVar3 + 0x20) = 6;
        *(longlong *)(lVar3 + 0x28) = lVar3;
        FUN_1459ba8a6(lVar6,lVar3 + 0x20);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
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



// FUNCTION 1488137f4 FUN_1488137f4 body=181 status=ok
// SIG undefined FUN_1488137f4(void)

void FUN_1488137f4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x410;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a84622(lVar1,&local_38);
  if ((longlong)(int)uStack_30 != 0) {
    lVar5 = (longlong)(int)uStack_30 << 4;
    lVar6 = local_38;
    do {
      cVar4 = FUN_144a84554(lVar1,lVar6);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x620) + 0x48);
        *(undefined4 *)(lVar3 + 0x20) = 6;
        *(longlong *)(lVar3 + 0x28) = lVar3;
        FUN_1459ba8a6(lVar6,lVar3 + 0x20);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
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



// FUNCTION 1488138b0 FUN_1488138b0 body=181 status=ok
// SIG undefined FUN_1488138b0(void)

void FUN_1488138b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x410;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a84622(lVar1,&local_38);
  if ((longlong)(int)uStack_30 != 0) {
    lVar5 = (longlong)(int)uStack_30 << 4;
    lVar6 = local_38;
    do {
      cVar4 = FUN_144a84554(lVar1,lVar6);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x620) + 0x38);
        *(undefined4 *)(lVar3 + 0x20) = 6;
        *(longlong *)(lVar3 + 0x28) = lVar3;
        FUN_1459ba8a6(lVar6,lVar3 + 0x20);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
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



// FUNCTION 148813966 FUN_148813966 body=105 status=ok
// SIG undefined FUN_148813966(void)

void FUN_148813966(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14043e5f8(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1488139d0 FUN_1488139d0 body=147 status=ok
// SIG undefined FUN_1488139d0(void)

void FUN_1488139d0(longlong param_1,int param_2)

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



// FUNCTION 148813a64 FUN_148813a64 body=122 status=ok
// SIG undefined FUN_148813a64(void)

void FUN_148813a64(longlong *param_1,int param_2)

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



// FUNCTION 148813ade FUN_148813ade body=48 status=ok
// SIG undefined FUN_148813ade(void)

void FUN_148813ade(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148813b0e FUN_148813b0e body=114 status=ok
// SIG undefined FUN_148813b0e(void)

void FUN_148813b0e(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 148813b80 FUN_148813b80 body=114 status=ok
// SIG undefined FUN_148813b80(void)

void FUN_148813b80(longlong *param_1,int param_2)

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



// FUNCTION 148813bf2 FUN_148813bf2 body=103 status=ok
// SIG undefined FUN_148813bf2(void)

ulonglong FUN_148813bf2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_148813c46;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141876832(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_148813c46:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148813c5a FUN_148813c5a body=114 status=ok
// SIG undefined FUN_148813c5a(void)

void FUN_148813c5a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 148813ccc FUN_148813ccc body=75 status=ok
// SIG undefined FUN_148813ccc(void)

void FUN_148813ccc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 148813d18 FUN_148813d18 body=116 status=ok
// SIG undefined FUN_148813d18(void)

void FUN_148813d18(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 148813da6 FUN_148813da6 body=101 status=ok
// SIG undefined FUN_148813da6(void)

void FUN_148813da6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f5060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148813e0c FUN_148813e0c body=134 status=ok
// SIG undefined FUN_148813e0c(void)

void FUN_148813e0c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f5060;
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
                    /* WARNING: Could not recover jumptable at 0x000148813e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148813e92 FUN_148813e92 body=62 status=ok
// SIG undefined FUN_148813e92(void)

void FUN_148813e92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148813ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148813eea FUN_148813eea body=26 status=ok
// SIG undefined FUN_148813eea(void)

bool FUN_148813eea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148813f04 FUN_148813f04 body=101 status=ok
// SIG undefined FUN_148813f04(void)

void FUN_148813f04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f5140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f50d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148813f6a FUN_148813f6a body=101 status=ok
// SIG undefined FUN_148813f6a(void)

void FUN_148813f6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f5140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f50d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148813fd0 FUN_148813fd0 body=134 status=ok
// SIG undefined FUN_148813fd0(void)

void FUN_148813fd0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f5140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f50d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148814047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148814056 FUN_148814056 body=44 status=ok
// SIG undefined FUN_148814056(void)

void FUN_148814056(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014881407f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148814084 FUN_148814084 body=9 status=ok
// SIG undefined FUN_148814084(void)

void FUN_148814084(longlong param_1)

{
  FUN_140dce4e8(param_1 + 0x10);
  return;
}



// FUNCTION 14881408e FUN_14881408e body=29 status=ok
// SIG undefined FUN_14881408e(void)

undefined8 FUN_14881408e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488140ac FUN_1488140ac body=88 status=ok
// SIG undefined FUN_1488140ac(void)

undefined8 FUN_1488140ac(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x240);
  uStack_30 = *(undefined8 *)(param_1 + 0x248);
  local_28 = *(undefined4 *)(param_1 + 0x250);
  uStack_24 = *(undefined4 *)(param_1 + 0x254);
  uStack_20 = *(undefined4 *)(param_1 + 600);
  uStack_1c = *(undefined4 *)(param_1 + 0x25c);
  FUN_1448052ee(&local_38);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148814124 FUN_148814124 body=71 status=ok
// SIG undefined FUN_148814124(void)

void FUN_148814124(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1474acd28(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = 2;
  return;
}



// FUNCTION 14881416c FUN_14881416c body=66 status=ok
// SIG undefined FUN_14881416c(void)

void FUN_14881416c(longlong param_1)

{
  FUN_1401c3ca6();
  if (*(char *)(param_1 + 0x110) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x220) = 1;
  FUN_140cbebe8(param_1 + 0x40,1);
  FUN_14881484a(param_1,*(undefined8 *)(param_1 + 0x238));
  return;
}



// FUNCTION 1488141ae FUN_1488141ae body=105 status=ok
// SIG undefined FUN_1488141ae(void)

void FUN_1488141ae(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  *(char *)(param_1 + 0x220) = param_2;
  if (param_2 == '\0') {
    FUN_140cbebe8(param_1 + 0x40,0);
    plVar1 = *(longlong **)(param_1 + 0x228);
    if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x221) == '\0')) {
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
      *(undefined8 *)(param_1 + 0x228) = 0;
    }
    return;
  }
  FUN_140cbebe8(param_1 + 0x40,1);
  FUN_14881484a(param_1,*(undefined8 *)(param_1 + 0x238));
  return;
}



// FUNCTION 148814218 FUN_148814218 body=70 status=ok
// SIG undefined FUN_148814218(void)

void FUN_148814218(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x228);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x221) == '\0')) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 14881425e FUN_14881425e body=151 status=ok
// SIG undefined FUN_14881425e(void)

void FUN_14881425e(longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 0x12d)) {
  case 0:
    *(undefined4 *)(param_1 + 0x240) = 0;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x240) = 2;
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x130);
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x240) = 3;
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x138);
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x240) = 1;
    *(undefined8 *)(param_1 + 0x244) = *(undefined8 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x138);
  }
  return;
}



// FUNCTION 1488142f6 FUN_1488142f6 body=1284 status=ok
// SIG undefined FUN_1488142f6(void)

void FUN_1488142f6(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5,double *param_6,float param_7,float param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_288 [32];
  uint local_268;
  undefined8 *local_260;
  undefined1 *local_258;
  undefined1 local_248 [4];
  undefined4 local_244;
  double local_238;
  double local_230;
  double local_228;
  undefined4 local_1a4;
  undefined4 local_178;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined2 local_f9;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (((1.0 < ABS(*param_3 - *param_5)) || (1.0 < ABS(param_3[1] - param_5[1]))) ||
     (1.0 < ABS(param_3[2] - param_5[2]))) {
    dVar1 = 10000.0;
    dVar12 = dVar1;
    if (*(char *)(param_1 + 0x140) != '\0') {
      dVar12 = (double)(param_8 * param_7);
    }
    FUN_144a76660(param_4,&local_128);
    if (param_7 <= 0.0) {
      dVar12 = dVar1;
    }
    if (param_8 * param_7 <= 0.0) {
      dVar12 = dVar1;
    }
    dVar1 = local_118 * dVar12 + param_3[2];
    dVar10 = local_120 * dVar12 + param_3[1];
    dVar12 = dVar12 * local_128 + *param_3;
    local_140 = dVar12;
    local_138 = dVar10;
    local_130 = dVar1;
    FUN_1446f470e(&local_148,L"TrajectoryTrace",1);
    local_ec = 0;
    local_108 = 0;
    local_e8 = 0x101;
    local_c0 = 0;
    local_b8 = 0x800000000;
    local_a0 = 0;
    local_98 = 0x400000000;
    local_100 = 1;
    local_f4 = 0;
    local_110 = local_148;
    local_ff = 1;
    local_fd = 0;
    local_f0 = 0;
    local_fc = 0;
    local_fa = 0;
    if (param_2 != 0) {
      local_b0 = *(undefined4 *)(param_2 + 0xc);
      local_98 = 0x400000001;
      local_108 = *(undefined8 *)(param_2 + 0x18);
    }
    local_f9 = 0x101;
    memset(local_248,0,0x100);
    local_178 = 0xffffffff;
    local_244 = 0x3f800000;
    local_1a4 = 0xffffffff;
    lVar9 = *(longlong *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    local_258 = &DAT_14cad0f10;
    local_260 = &local_110;
    local_268 = (uint)*(byte *)(param_1 + 300);
    cVar8 = FUN_1400b50cc(lVar9,local_248,param_3,&local_140);
    if (cVar8 == '\0') {
      if (*(char *)(param_1 + 0x140) == '\x01') {
        dVar1 = dVar1 - param_5[2];
        dVar10 = dVar10 - param_5[1];
        dVar12 = dVar12 - *param_5;
        dVar11 = dVar1 * dVar1 + dVar12 * dVar12 + dVar10 * dVar10;
        if (((dVar11 != 1.0) || (dVar2 = dVar1, dVar3 = dVar10, dVar4 = dVar12, NAN(dVar11))) &&
           (dVar2 = DAT_14c8464f0, dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar11)) {
          dVar11 = 1.0 / SQRT(dVar11);
          dVar2 = dVar1 * dVar11;
          dVar3 = dVar10 * dVar11;
          dVar4 = dVar12 * dVar11;
        }
        *param_6 = dVar4;
        param_6[1] = dVar3;
        param_6[2] = dVar2;
      }
    }
    else {
      local_228 = local_228 - param_5[2];
      local_230 = local_230 - param_5[1];
      local_238 = local_238 - *param_5;
      dVar12 = local_228 * local_228 + local_238 * local_238 + local_230 * local_230;
      if (((dVar12 != 1.0) ||
          (dVar10 = local_238, dVar11 = local_230, dVar1 = local_228, NAN(dVar12))) &&
         (dVar10 = DAT_14c8464e0, dVar11 = DAT_14c8464e8, dVar1 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar12)) {
        dVar12 = 1.0 / SQRT(dVar12);
        dVar10 = local_238 * dVar12;
        dVar11 = local_230 * dVar12;
        dVar1 = local_228 * dVar12;
      }
      if (param_6[2] * dVar1 + *param_6 * dVar10 + param_6[1] * dVar11 <= 0.0) {
        param_5[2] = param_3[2];
        uVar5 = *(undefined4 *)((longlong)param_3 + 4);
        uVar6 = *(undefined4 *)(param_3 + 1);
        uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
        *(undefined4 *)param_5 = *(undefined4 *)param_3;
        *(undefined4 *)((longlong)param_5 + 4) = uVar5;
        *(undefined4 *)(param_5 + 1) = uVar6;
        *(undefined4 *)((longlong)param_5 + 0xc) = uVar7;
      }
      else if (*(char *)(param_1 + 0x140) == '\x01') {
        *param_6 = dVar10;
        param_6[1] = dVar11;
        param_6[2] = dVar1;
      }
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488147fc FUN_1488147fc body=77 status=ok
// SIG undefined FUN_1488147fc(void)

void FUN_1488147fc(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  FUN_14873f780(param_1 + 0x210,param_2);
  return;
}



// FUNCTION 14881484a FUN_14881484a body=488 status=ok
// SIG undefined FUN_14881484a(void)

void FUN_14881484a(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x238) = param_2;
    if (param_2 == 0) {
      plVar3 = *(longlong **)(param_1 + 0x228);
      if ((plVar3 != (longlong *)0x0) && (*(char *)(param_1 + 0x221) == '\0')) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      *(undefined1 *)(param_1 + 0x221) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
      goto LAB_148814918;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x238) = param_2;
  }
  if (*(longlong **)(param_1 + 0x228) == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x221) = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3ff00000;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_44 = 0x3ff00000;
    uStack_40 = 0;
    uStack_3c = 0x3ff00000;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0;
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
    local_90 = 0;
    local_98 = 0;
    lVar5 = FUN_1405837ac(lVar5,param_2,&local_88,0);
    if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x228) = lVar5;
      if (lVar5 == 0) goto LAB_148814918;
    }
    else {
      FUN_1456cec3c(lVar5);
      *(longlong *)(param_1 + 0x228) = lVar5;
    }
    *(byte *)(lVar5 + 0x2d5) = *(byte *)(lVar5 + 0x2d5) | 4;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x228) + 0x9e);
    *pbVar1 = *pbVar1 | 4;
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x228) + 0x2e4);
    *puVar2 = *puVar2 & 0xfffffffe;
    lVar5 = *(longlong *)(param_1 + 0xb0);
    uVar4 = *(undefined8 *)(param_1 + 0x228);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
    FUN_140b506dc(uVar4,lVar5,0);
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0xa28))();
    if (*(longlong *)(param_1 + 0x238) != lVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
    }
  }
LAB_148814918:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148814a4a FUN_148814a4a body=103 status=ok
// SIG undefined FUN_148814a4a(void)

void FUN_148814a4a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x228);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x221) == '\0')) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x228) = param_2;
  *(bool *)(param_1 + 0x221) = param_2 != 0;
  return;
}



// FUNCTION 148814ab2 FUN_148814ab2 body=22 status=ok
// SIG undefined FUN_148814ab2(void)

undefined8 FUN_148814ab2(undefined8 param_1,undefined8 param_2)

{
  FUN_148814ac8();
  return param_2;
}



// FUNCTION 148814ac8 FUN_148814ac8 body=319 status=ok
// SIG undefined FUN_148814ac8(void)

longlong * FUN_148814ac8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)FUN_14001cc68(0x398,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3f5f70;
  plVar1 = plVar5 + 2;
  FUN_141134c20(plVar1,param_1,param_3);
  local_48 = plVar1;
  local_40 = plVar5;
  FUN_14881c52c(&local_48,plVar1);
  plVar4 = local_40;
  local_58 = plVar1;
  if (plVar5 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x2f0))(param_1,&local_58,param_3);
    *param_2 = 0x10;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_50 = plVar5;
    (**(code **)(*param_1 + 0x2f0))(param_1,&local_58,param_3);
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148814c08 FUN_148814c08 body=1594 status=ok
// SIG undefined FUN_148814c08(void)

double * FUN_148814c08(longlong param_1,double *param_2,longlong *param_3,longlong *param_4,
                      double *param_5,undefined4 *param_6,char *param_7,longlong *param_8)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  float *pfVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_198 [40];
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 uStack_150;
  undefined1 local_13c [4];
  double local_138;
  double dStack_130;
  undefined4 local_110;
  float local_108;
  undefined4 uStack_104;
  ushort local_f0;
  byte local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  param_2[2] = *(double *)(param_6 + 4);
  uVar15 = param_6[1];
  uVar18 = param_6[2];
  uVar17 = param_6[3];
  *(undefined4 *)param_2 = *param_6;
  *(undefined4 *)((longlong)param_2 + 4) = uVar15;
  *(undefined4 *)(param_2 + 1) = uVar18;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar17;
  if (param_4 == (longlong *)0x0) goto LAB_148814d1e;
  lVar12 = *param_8;
  if (lVar12 == 0) {
    if ((*(char *)(param_1 + 0x6f8) == '\x01') && (*param_7 == '\0')) {
      lVar12 = FUN_140849bbe(param_4);
      *param_8 = lVar12;
      if (lVar12 != 0) goto LAB_148814d13;
    }
    lVar12 = param_4[0x39];
    if (lVar12 == 0) {
      pdVar13 = &DAT_14c8464e0;
      uVar15 = SUB84(DAT_14c8464f0,0);
      uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar15 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
      pdVar13 = (double *)(lVar12 + 0x260);
    }
    dVar1 = pdVar13[1];
    *param_2 = *pdVar13;
    param_2[1] = dVar1;
    param_2[2] = (double)CONCAT44(uVar18,uVar15);
    *param_7 = '\x01';
  }
  else {
LAB_148814d13:
    FUN_147cb2002(lVar12,param_2,0);
  }
LAB_148814d1e:
  local_138 = (double)((ulonglong)local_138 & 0xffffffffffffff00);
  local_110 = 0;
  FUN_1456bb102(&local_138,param_3);
  pfVar14 = &local_108;
  FUN_1448729ea(param_1 + 0xb10,pfVar14,&local_138);
  fVar16 = (float)FUN_144a7b41a(pfVar14,0);
  local_170 = (double)fVar16 + param_2[2];
  param_2[2] = local_170;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_f0) {
      pfVar14 = (float *)CONCAT44(uStack_104,local_108);
    }
    (*pcVar3)(pfVar14);
  }
  if (0x18 < local_f0) {
    FUN_1400020a8(CONCAT44(uStack_104,local_108));
  }
  FUN_144a5ac3a(&local_138);
  local_138 = *param_2;
  dStack_130 = param_2[1];
  if (param_3 != (longlong *)0x0) {
    dVar1 = *param_5;
    dVar2 = param_5[1];
    local_158 = param_5[2];
    uVar15 = SUB84(DAT_14c8464f0,0);
    uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    if (((ABS(dVar1) <= 9.999999747378752e-05) && (ABS(dVar2) <= 9.999999747378752e-05)) &&
       (ABS(local_158) <= 9.999999747378752e-05)) {
      lVar12 = param_3[0x39];
      if (lVar12 == 0) {
        pdVar13 = &DAT_14c8464e0;
        uVar17 = uVar15;
        uVar19 = uVar18;
      }
      else {
        pdVar13 = (double *)(lVar12 + 0x260);
        uVar17 = (int)*(undefined8 *)(lVar12 + 0x270);
        uVar19 = (int)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
      }
      dVar8 = param_2[1] - pdVar13[1];
      dVar7 = *param_2 - *pdVar13;
      dVar20 = local_170 - (double)CONCAT44(uVar19,uVar17);
      dVar4 = dVar20 * dVar20 + dVar7 * dVar7 + dVar8 * dVar8;
      if (((dVar4 != 1.0) || (local_158 = dVar20, dVar2 = dVar8, dVar1 = dVar7, NAN(dVar4))) &&
         (local_158 = DAT_14c8464f0, dVar2 = DAT_14c8464e8, dVar1 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar4)) {
        dVar1 = 1.0 / SQRT(dVar4);
        local_158 = dVar20 * dVar1;
        dVar2 = dVar8 * dVar1;
        dVar1 = dVar7 * dVar1;
      }
    }
    dVar4 = dVar1 * dVar1 + dVar2 * dVar2;
    if ((dVar4 != 1.0) || (NAN(dVar4))) {
      uVar17 = uVar15;
      uVar19 = uVar18;
      dVar7 = DAT_14c8464e0;
      dVar8 = DAT_14c8464e8;
      if (9.99999993922529e-09 <= dVar4) {
        uVar17 = 0;
        uVar19 = 0;
        dVar7 = (1.0 / SQRT(dVar4)) * dVar1;
        dVar8 = dVar2 * (1.0 / SQRT(dVar4));
      }
    }
    else {
      uVar9 = -(ulonglong)(local_158 == 0.0) & (ulonglong)local_158;
      uVar17 = (int)uVar9;
      uVar19 = (int)(uVar9 >> 0x20);
      dVar7 = dVar1;
      dVar8 = dVar2;
    }
    lVar12 = param_3[0x39];
    uStack_150 = 0;
    if (lVar12 == 0) {
      pdVar13 = &DAT_14c8464e0;
    }
    else {
      uVar15 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
      pdVar13 = (double *)(lVar12 + 0x260);
    }
    local_168 = *param_2;
    local_160 = param_2[1];
    dVar4 = *pdVar13;
    dVar20 = pdVar13[1];
    fVar16 = *(float *)(param_1 + 0xb04);
    uVar11 = *(uint *)(param_1 + 0xf8);
    fVar21 = 0.0;
    if ((uVar11 >> 0xb & 1) != 0) {
      (**(code **)(*param_3 + 0x528))(param_3,&local_108,local_13c);
      fVar21 = 0.0 - local_108;
      uVar11 = *(uint *)(param_1 + 0xf8);
    }
    if ((param_4 != (longlong *)0x0) && ((uVar11 & 0x1000) != 0)) {
      (**(code **)(*param_4 + 0x528))(param_4,&local_108,local_13c);
      fVar21 = fVar21 - local_108;
    }
    if ((((fVar16 != 0.0) || (NAN(fVar16))) || (fVar21 != 0.0)) || (NAN(fVar21))) {
      dVar10 = (double)CONCAT44(uVar18,uVar15) - local_170;
      dVar5 = (double)fVar16;
      dVar6 = (double)fVar21;
      *param_2 = dVar7 * dVar6 + dVar1 * dVar5 + local_168;
      param_2[1] = dVar8 * dVar6 + dVar2 * dVar5 + local_160;
      param_2[2] = (double)CONCAT44(uVar19,uVar17) * dVar6 + local_158 * dVar5 + local_170;
      if ((float)(dVar10 * dVar10 +
                 (dVar20 - local_160) * (dVar20 - local_160) +
                 (dVar4 - local_168) * (dVar4 - local_168)) < (fVar16 + fVar21) * (fVar16 + fVar21))
      {
        if (*(char *)(param_1 + 0xb08) == '\x01') {
          *param_2 = local_138;
          param_2[1] = dStack_130;
        }
        else if (*(char *)(param_1 + 0xb08) == '\0') {
          pdVar13 = &DAT_14c8464e0;
          if (param_3[0x39] != 0) {
            pdVar13 = (double *)(param_3[0x39] + 0x260);
          }
          dVar1 = pdVar13[1];
          *param_2 = *pdVar13;
          param_2[1] = dVar1;
        }
      }
    }
  }
  param_2[2] = (double)(float)local_170;
  if ((local_e0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14881525a FUN_14881525a body=94 status=ok
// SIG undefined FUN_14881525a(void)

void FUN_14881525a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x380);
  if (lVar1 != 0) {
    FUN_14862d6fa(lVar1,*(undefined8 *)(param_1 + 0x38),param_2,param_3);
    FUN_14862d76c(lVar1,*(undefined8 *)(param_1 + 0x38),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1488152b8 FUN_1488152b8 body=65 status=ok
// SIG undefined FUN_1488152b8(void)

void FUN_1488152b8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x380);
  if (lVar1 != 0) {
    FUN_14862d7ee(lVar1,param_2);
    FUN_14862d856(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1488152fa FUN_1488152fa body=88 status=ok
// SIG undefined FUN_1488152fa(void)

void FUN_1488152fa(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x380);
  if (lVar1 != 0) {
    FUN_14862d8be(lVar1,param_2,param_3);
    FUN_14862d92c(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148815352 FUN_148815352 body=220 status=ok
// SIG undefined FUN_148815352(void)

undefined8
FUN_148815352(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(longlong *)(param_1 + 0x11e8) != 0)) {
      local_38 = *(undefined8 *)(param_8 + 4);
      local_50 = &local_48;
      local_48 = *param_8;
      uStack_44 = param_8[1];
      uStack_40 = param_8[2];
      uStack_3c = param_8[3];
      local_58 = param_7;
      local_60 = param_6;
      local_68 = param_5;
      uVar2 = FUN_14880f69a(*(longlong *)(param_1 + 0x11e8),param_2,param_3,param_4);
      goto LAB_1488153a0;
    }
  }
  uVar2 = 0;
LAB_1488153a0:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148815430 FUN_148815430 body=91 status=ok
// SIG undefined FUN_148815430(void)

void FUN_148815430(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (*(longlong *)(param_1 + 0x11e8) != 0)) {
      thunk_FUN_141105774(*(longlong *)(param_1 + 0x11e8),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14881548c FUN_14881548c body=84 status=ok
// SIG undefined FUN_14881548c(void)

undefined8 * FUN_14881548c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1488154e0();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b0dd450;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_144a5dc74(puVar1 + 6);
  *(undefined2 *)(puVar1 + 8) = 1;
  *puVar1 = &PTR_FUN_14b3f5370;
  *(undefined1 *)(puVar1 + 9) = 0;
  return puVar1;
}



// FUNCTION 1488154e0 FUN_1488154e0 body=104 status=ok
// SIG undefined FUN_1488154e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488154e0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cb763c8 == (undefined8 *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0x140,0);
    plVar2 = plVar1 + 10;
    *plVar1 = (longlong)plVar2;
    plVar1[10] = (longlong)(plVar1 + 0x14);
    plVar1[0x14] = (longlong)(plVar1 + 0x1e);
    plVar1[0x1e] = (longlong)DAT_14cb763c8;
    _DAT_14cb763d0 = _DAT_14cb763d0 + 4;
  }
  else {
    plVar2 = (longlong *)*DAT_14cb763c8;
  }
  DAT_14cb763c8 = plVar2;
  _DAT_14cb763d4 = _DAT_14cb763d4 + 1;
  return;
}



// FUNCTION 148815548 FUN_148815548 body=44 status=ok
// SIG undefined FUN_148815548(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148815548(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb763d4 = _DAT_14cb763d4 + -1;
  *param_1 = DAT_14cb763c8;
  DAT_14cb763c8 = param_1;
  return;
}



// FUNCTION 148815574 FUN_148815574 body=83 status=ok
// SIG undefined FUN_148815574(void)

void FUN_148815574(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0dd450;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_144a5dc74(param_1 + 6);
  *(undefined2 *)(param_1 + 8) = 1;
  *param_1 = &PTR_FUN_14b3f5370;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 1488155c8 FUN_1488155c8 body=22 status=ok
// SIG undefined FUN_1488155c8(void)

undefined8 FUN_1488155c8(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb758b8;
  if (DAT_14cb758b8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb758b8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb758b8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb758b8[0x3a] <= *(int *)((longlong)DAT_14cb758b8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb758b8 + 0x300))(DAT_14cb758b8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1488155de FUN_1488155de body=81 status=ok
// SIG undefined FUN_1488155de(void)

undefined8 FUN_1488155de(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2a8))();
  if ((longlong)(int)plVar2[1] != 0) {
    lVar1 = *plVar2;
    lVar3 = 0;
    do {
      if ((*(int *)(lVar1 + lVar3) == *param_2) && (*(int *)(lVar1 + 8 + lVar3) == param_2[2])) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar3 = lVar3 + 0x18;
    } while ((longlong)(int)plVar2[1] * 0x18 != lVar3);
  }
  return 0;
}



// FUNCTION 148815630 FUN_148815630 body=64 status=ok
// SIG undefined FUN_148815630(void)

undefined8 * FUN_148815630(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_144928b90(param_1 + 2,0);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 148815670 FUN_148815670 body=246 status=ok
// SIG undefined FUN_148815670(void)

void FUN_148815670(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14479d2ce(param_1 + 9);
  if ((*(char *)(lVar1 + 0x178) == '\x03') && (*param_2 != 0)) {
    local_60 = *(undefined8 *)param_2;
    local_58 = param_2[2];
    FUN_1448075d0(local_50);
    if (DAT_14cb758b8 == 0) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb758b8,local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x48) == '\0')) {
        uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1);
        plVar3 = (longlong *)FUN_14105a298(uVar2,param_2);
        if (*plVar3 != 0) {
          *plVar3 = 0;
          FUN_14105a360(param_1,param_2,0);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148815768 FUN_148815768 body=149 status=ok
// SIG undefined FUN_148815768(void)

ulonglong FUN_148815768(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar2 = (longlong *)FUN_140ac4d02(param_3);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1405d5f74(param_4);
      uVar3 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      FUN_1401533ba(local_3c,param_1 + 8,1);
      (**(code **)(*plVar2 + 0x40))(plVar2,local_3c,uVar1);
      goto LAB_1488157da;
    }
  }
  uVar3 = 0;
LAB_1488157da:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488157fe FUN_1488157fe body=131 status=ok
// SIG undefined FUN_1488157fe(void)

ulonglong FUN_1488157fe(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar1 = (longlong *)FUN_140ac4d02(param_3);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      FUN_1401533ba(local_34,param_1 + 8,1);
      (**(code **)(*plVar1 + 0x48))(plVar1,local_34);
      goto LAB_14881585f;
    }
  }
  uVar2 = 0;
LAB_14881585f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148815882 FUN_148815882 body=124 status=ok
// SIG undefined FUN_148815882(void)

undefined8 *
FUN_148815882(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  }
  else {
    *param_2 = *param_5;
  }
  return param_2;
}



// FUNCTION 1488158fe FUN_1488158fe body=191 status=ok
// SIG undefined FUN_1488158fe(void)

undefined8 FUN_1488158fe(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14624635c(param_1 + 0x38,&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4(&local_50,&local_48);
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(param_2,L"Currency [%s += %s]",puVar1,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488159be FUN_1488159be body=99 status=ok
// SIG undefined FUN_1488159be(void)

undefined8 * FUN_1488159be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1410b0e00(&DAT_14cb76510);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b104ee0;
  FUN_144a5dc74(puVar1 + 3);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return puVar1;
}



// FUNCTION 148815a22 FUN_148815a22 body=44 status=ok
// SIG undefined FUN_148815a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148815a22(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7651c = _DAT_14cb7651c + -1;
  *param_1 = DAT_14cb76510;
  DAT_14cb76510 = param_1;
  return;
}



// FUNCTION 148815a4e FUN_148815a4e body=93 status=ok
// SIG undefined FUN_148815a4e(void)

void FUN_148815a4e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b104ee0;
  FUN_144a5dc74(param_1 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 148815ad4 FUN_148815ad4 body=35 status=ok
// SIG undefined FUN_148815ad4(void)

void FUN_148815ad4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_148815af8(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148815ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_1488159be();
  return;
}



// FUNCTION 148815af8 FUN_148815af8 body=204 status=ok
// SIG undefined FUN_148815af8(void)

longlong FUN_148815af8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1460ea61e();
  lVar3 = *param_1;
  if (DAT_14cb764c0 != DAT_14cb764ec) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb764f0;
    if (DAT_14cb764f8 != (undefined *)0x0) {
      puVar7 = DAT_14cb764f8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb76500 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb764b8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb764b0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 148815be4 FUN_148815be4 body=40 status=ok
// SIG undefined FUN_148815be4(void)

undefined8 FUN_148815be4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_148815af8(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148815c0c FUN_148815c0c body=76 status=ok
// SIG undefined FUN_148815c0c(void)

undefined8 FUN_148815c0c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_148815af8(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000148815c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 148815c70 FUN_148815c70 body=41 status=ok
// SIG undefined FUN_148815c70(void)

void FUN_148815c70(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 148815c9a FUN_148815c9a body=22 status=ok
// SIG undefined FUN_148815c9a(void)

ulonglong FUN_148815c9a(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cb765b8;
  if (DAT_14cb765b8 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb765b8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb765b8 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb765b8 + 0x1fc) < (int)DAT_14cb765b8[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cb765b8 + 0x300))(DAT_14cb765b8);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 148815cb0 FUN_148815cb0 body=138 status=ok
// SIG undefined FUN_148815cb0(void)

void FUN_148815cb0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    local_40 = *param_2;
    uVar2 = FUN_14477b664(param_2[1]);
    local_38 = FUN_14477b664(uVar2);
    local_30 = param_2[2];
    FUN_148815d3c(lVar1,&local_40);
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148815d3c FUN_148815d3c body=1572 status=ok
// SIG undefined FUN_148815d3c(void)

void FUN_148815d3c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_1464d4ba6();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_148815e09;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      param_2[2] = 0;
      goto LAB_148815e09;
    }
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar7 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar7;
    if (lVar7 == 0) goto LAB_148815e09;
  }
  if (*param_1 != 0) {
    if (param_2[1] == 0) {
      uVar5 = FUN_1464d4ba6();
      lVar6 = FUN_14477b664(uVar5);
      param_2[1] = lVar6;
      lVar7 = param_2[2];
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_2 != 0)) {
        plVar3 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar5,param_2);
        }
        param_2[2] = lVar7;
      }
    }
    lVar6 = *(longlong *)(lVar7 + 0x48);
    if (lVar6 == 0) {
      uVar5 = FUN_1406ef318();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar7 + 0x48) = lVar6;
    }
    if (*(longlong *)(lVar7 + 0x50) == 0) {
      if ((lVar6 != 0) && (*(longlong *)(lVar7 + 0x40) != 0)) {
        plVar3 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x40));
          *(longlong *)(lVar7 + 0x50) = lVar6;
          if (lVar6 != 0) goto LAB_148815db5;
        }
      }
    }
    else {
LAB_148815db5:
      lVar6 = *param_1;
      lVar7 = param_2[1];
      if (lVar7 == 0) {
        uVar5 = FUN_1464d4ba6();
        lVar7 = FUN_14477b664(uVar5);
        param_2[1] = lVar7;
      }
      lVar8 = param_2[2];
      if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar8 = FUN_144aff482(uVar5,param_2);
        }
        param_2[2] = lVar8;
      }
      lVar7 = *(longlong *)(lVar8 + 0x48);
      if (lVar7 == 0) {
        uVar5 = FUN_1406ef318();
        lVar7 = FUN_14477b664(uVar5);
        *(longlong *)(lVar8 + 0x48) = lVar7;
      }
      lVar9 = *(longlong *)(lVar8 + 0x50);
      if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*(longlong *)(lVar8 + 0x40) != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar3 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar3 + 0x108))(), cVar4 == '\0')
           ) {
          lVar9 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar9 = FUN_144aff482(uVar5,(longlong *)(lVar8 + 0x40));
        }
        *(longlong *)(lVar8 + 0x50) = lVar9;
      }
      cVar4 = FUN_1409501fe(lVar9,lVar6);
      if (cVar4 == '\0') goto LAB_148815e09;
    }
  }
  plVar3 = param_1 + 1;
  iVar10 = (int)param_1[2];
  if (0 < iVar10) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar8 = *plVar3;
      plVar1 = (longlong *)(lVar7 + lVar8);
      lVar9 = *(longlong *)(lVar8 + 8 + lVar7);
      if (lVar9 == 0) {
        uVar5 = FUN_1464d4ba6();
        lVar9 = FUN_14477b664(uVar5);
        plVar1[1] = lVar9;
      }
      if (*(longlong *)(lVar8 + 0x10 + lVar7) == 0) {
        if ((lVar9 != 0) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            *(undefined8 *)(lVar8 + 0x10 + lVar7) = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar9 = FUN_144aff482(uVar5,plVar1);
            *(longlong *)(lVar8 + 0x10 + lVar7) = lVar9;
            if (lVar9 != 0) goto LAB_148815f14;
          }
        }
      }
      else {
LAB_148815f14:
        lVar8 = *plVar3;
        plVar1 = (longlong *)(lVar7 + lVar8);
        lVar9 = *(longlong *)(lVar8 + 8 + lVar7);
        if (lVar9 == 0) {
          uVar5 = FUN_1464d4ba6();
          lVar9 = FUN_14477b664(uVar5);
          plVar1[1] = lVar9;
        }
        lVar11 = *(longlong *)(lVar8 + 0x10 + lVar7);
        if (lVar11 == 0) {
          if (lVar9 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if (*plVar1 != 0) {
              plVar2 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                lVar11 = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar11 = FUN_144aff482(uVar5,plVar1);
              }
              *(longlong *)(lVar8 + 0x10 + lVar7) = lVar11;
            }
          }
        }
        lVar8 = param_2[1];
        if (lVar8 == 0) {
          uVar5 = FUN_1464d4ba6();
          lVar8 = FUN_14477b664(uVar5);
          param_2[1] = lVar8;
        }
        lVar9 = param_2[2];
        if (lVar9 == 0) {
          if (lVar8 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (*param_2 != 0) {
              plVar1 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar1 + 0x108))(), cVar4 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar9 = FUN_144aff482(uVar5,param_2);
              }
              param_2[2] = lVar9;
            }
          }
        }
        if (*(longlong *)(lVar11 + 0x28) == *(longlong *)(lVar9 + 0x28)) {
          FUN_148816362(lVar7 + *plVar3,param_2);
          goto LAB_1488161c9;
        }
      }
      lVar6 = lVar6 + 1;
      iVar10 = (int)param_1[2];
      lVar7 = lVar7 + 0x18;
    } while (lVar6 < iVar10);
  }
  *(uint *)(param_1 + 2) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < iVar10 + 1U) {
    FUN_14881c9d6(plVar3,iVar10);
  }
  FUN_1486df9be((longlong)iVar10 * 0x18 + *plVar3,param_2);
LAB_1488161c9:
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_1464d4ba6();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_2 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar7;
  }
  local_50 = *(undefined8 *)(lVar7 + 0x28);
  FUN_1488163b6(param_1);
LAB_148815e09:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148816362 FUN_148816362 body=84 status=ok
// SIG undefined FUN_148816362(void)

longlong * FUN_148816362(longlong *param_1,longlong *param_2)

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



// FUNCTION 1488163b6 FUN_1488163b6 body=227 status=ok
// SIG undefined FUN_1488163b6(void)

void FUN_1488163b6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x18);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x20) * 2;
    do {
      if ((*plVar5 != 0) && (plVar1 = (longlong *)plVar5[1], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
        if ((longlong)local_40 == 0) {
          bVar2 = true;
        }
        else {
          lVar3 = 0;
          do {
            bVar6 = *(longlong *)(local_48 + lVar3) == *param_2;
            bVar2 = !bVar6;
            if (bVar6) break;
            bVar6 = (longlong)local_40 * 8 + -8 != lVar3;
            lVar3 = lVar3 + 8;
          } while (bVar6);
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (!bVar2) {
          if (*plVar5 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = plVar5[1];
          }
          FUN_1459457f4(param_1,lVar3);
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14881649a FUN_14881649a body=201 status=ok
// SIG undefined FUN_14881649a(void)

void FUN_14881649a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 6) & 4) != 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfb;
    uVar5 = FUN_1447210f0(*param_1);
    FUN_140ebf024(&local_28,uVar5);
    if (local_20 != (longlong *)0x0) {
      iVar4 = (int)local_20[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_20[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_20 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_20;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_28 != 0) {
          FUN_143cf6fa0(local_28,*param_1);
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14881657e FUN_14881657e body=133 status=ok
// SIG undefined FUN_14881657e(void)

void FUN_14881657e(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)(param_1 + 0x61) = 1;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    do {
      lVar2 = FUN_14479d2ce(lVar3);
      if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0x65) & 2) != 0)) ||
          ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) || (*(char *)(lVar2 + 0x178) == '\x03')) {
        FUN_14479d2ce(lVar3);
        FUN_141877894(param_1 + 0x40,lVar3,1);
        FUN_141877972();
        break;
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
    } while (lVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x61) = uVar1;
  return;
}



// FUNCTION 148816604 FUN_148816604 body=109 status=ok
// SIG undefined FUN_148816604(void)

void FUN_148816604(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1410ce2ea();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1410ce2ea();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_14036955e(uVar1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148816672 FUN_148816672 body=53 status=ok
// SIG undefined FUN_148816672(void)

void FUN_148816672(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14110e156(param_2);
  if (lVar1 != 0) {
    FUN_1488202a4(lVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1488166a8 FUN_1488166a8 body=67 status=ok
// SIG undefined FUN_1488166a8(void)

void FUN_1488166a8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488166dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1488166ec FUN_1488166ec body=102 status=ok
// SIG undefined FUN_1488166ec(void)

void FUN_1488166ec(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x7d) < '\0') {
      lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      if (lVar2 != 0) {
        FUN_14654aa2c(lVar2);
      }
      FUN_1488222fe(lVar1 + 0x270);
      FUN_145a997d6(lVar1);
    }
    FUN_148685219(lVar1 + 0x170);
    return;
  }
  return;
}



// FUNCTION 1488167a7 FUN_1488167a7 body=1191 status=ok
// SIG undefined FUN_1488167a7(void)

void FUN_1488167a7(longlong param_1,double *param_2,double *param_3,double *param_4,
                  undefined1 (*param_5) [16],float *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
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
  
  fVar15 = *(float *)(param_1 + 8) - *(float *)(param_1 + 4);
  dVar26 = param_2[8] * 0.0;
  dVar27 = param_2[9] * 0.0;
  dVar16 = (double)fVar15 * param_2[10];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar25 = param_2[2];
  dVar1 = param_2[3];
  dVar22 = dVar27 * dVar2 - dVar26 * dVar3;
  dVar4 = dVar16 * dVar3 - dVar27 * dVar25;
  dVar5 = dVar26 * dVar25 - dVar2 * dVar16;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar5 + dVar5;
  dVar22 = dVar22 + dVar22;
  dVar17 = (dVar22 * dVar3 - dVar5 * dVar25) + dVar1 * dVar4 + dVar26 + param_2[4];
  dVar18 = (dVar25 * dVar4 - dVar2 * dVar22) + param_2[3] * dVar5 + dVar27 + param_2[5];
  dVar23 = dVar22 * dVar1 + dVar16 + (dVar5 * dVar2 - dVar4 * dVar3) + param_2[6];
  *param_4 = dVar17;
  param_4[1] = dVar18;
  param_4[2] = dVar23;
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar10 = param_2[2];
  dVar11 = param_2[8];
  dVar20 = dVar11 * 0.0;
  dVar21 = param_2[9] * 0.0;
  dVar29 = (double)-fVar15 * param_2[10];
  dVar1 = param_2[3];
  dVar22 = param_2[3];
  dVar25 = dVar21 * dVar8 - dVar20 * dVar9;
  dVar16 = dVar29 * dVar9 - dVar21 * dVar10;
  dVar6 = dVar20 * dVar10 - dVar8 * dVar29;
  dVar16 = dVar16 + dVar16;
  dVar6 = dVar6 + dVar6;
  dVar25 = dVar25 + dVar25;
  dVar2 = param_2[4];
  dVar3 = param_2[5];
  dVar4 = param_2[6];
  dVar17 = dVar17 * param_3[8];
  dVar18 = dVar18 * param_3[9];
  dVar23 = dVar23 * param_3[10];
  dVar12 = *param_3;
  dVar13 = param_3[1];
  dVar28 = param_3[2];
  dVar5 = param_3[3];
  dVar26 = dVar18 * dVar12 - dVar17 * dVar13;
  dVar27 = dVar23 * dVar13 - dVar18 * dVar28;
  dVar24 = dVar17 * dVar28 - dVar12 * dVar23;
  dVar27 = dVar27 + dVar27;
  dVar24 = dVar24 + dVar24;
  dVar26 = dVar26 + dVar26;
  dVar17 = (dVar26 * dVar13 - dVar24 * dVar28) + dVar5 * dVar27 + dVar17 + param_3[4];
  dVar28 = (dVar28 * dVar27 - dVar12 * dVar26) + param_3[3] * dVar24 + dVar18 + param_3[5];
  dVar24 = dVar26 * dVar5 + dVar23 + (dVar24 * dVar12 - dVar27 * dVar13) + param_3[6];
  fVar15 = *(float *)(param_1 + 4);
  *param_4 = dVar17;
  param_4[1] = dVar28;
  param_4[2] = dVar24;
  dVar26 = ((dVar25 * dVar9 - dVar6 * dVar10) + dVar1 * dVar16 + dVar20 + dVar2) * param_3[8];
  dVar27 = ((dVar10 * dVar16 - dVar8 * dVar25) + dVar22 * dVar6 + dVar21 + dVar3) * param_3[9];
  dVar16 = (dVar25 * dVar1 + dVar29 + (dVar6 * dVar8 - dVar16 * dVar9) + dVar4) * param_3[10];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar25 = param_3[2];
  dVar1 = param_3[3];
  dVar22 = dVar27 * dVar2 - dVar26 * dVar3;
  dVar4 = dVar16 * dVar3 - dVar27 * dVar25;
  dVar5 = dVar26 * dVar25 - dVar2 * dVar16;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar5 + dVar5;
  dVar22 = dVar22 + dVar22;
  dVar24 = (dVar22 * dVar1 + dVar16 + (dVar5 * dVar2 - dVar4 * dVar3) + param_3[6]) - dVar24;
  dVar17 = ((dVar22 * dVar3 - dVar5 * dVar25) + dVar1 * dVar4 + dVar26 + param_3[4]) - dVar17;
  dVar28 = ((dVar25 * dVar4 - dVar2 * dVar22) + param_3[3] * dVar5 + dVar27 + param_3[5]) - dVar28;
  auVar7._8_4_ = SUB84(dVar28,0);
  auVar7._0_8_ = dVar17;
  auVar7._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  *param_5 = auVar7;
  *(double *)param_5[1] = dVar24;
  fVar19 = (float)SQRT(dVar24 * dVar24 + dVar17 * dVar17 + dVar28 * dVar28);
  *param_6 = fVar19;
  iVar14 = 0;
  if (0.0001 < fVar19) {
    fVar19 = fVar19 / ((float)(dVar11 * (double)fVar15) * 1.5);
    iVar14 = -((int)ROUND(-0.5 - (fVar19 + fVar19)) >> 1);
  }
  *param_7 = iVar14;
  return;
}



// FUNCTION 148816cd8 FUN_148816cd8 body=2803 status=ok
// SIG undefined FUN_148816cd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_148816cd8(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_318 [40];
  double local_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
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
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double *pdVar9;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_2c8,*param_4,0);
  auVar28 = _DAT_149934d80;
  dVar13 = local_288._0_8_;
  dVar29 = local_288._8_8_;
  dVar31 = local_278._0_8_;
  auVar19 = *(undefined1 (*) [16])(param_3 + 8);
  dVar2 = auVar19._0_8_;
  dVar14 = auVar19._8_8_;
  auVar1 = *(undefined1 (*) [16])(param_3 + 10);
  dVar3 = auVar1._0_8_;
  auVar19 = minpd(auVar19,local_288);
  auVar24 = minpd(auVar1,local_278);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar6 = movmskpd(uVar5,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
  uVar8 = movmskpd((int)param_1,auVar19);
  if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
    dVar23 = *param_3;
    dVar17 = param_3[1];
    dVar32 = param_3[2];
    dVar21 = param_3[3];
    dVar18 = dVar17 * local_2b8 * -1.0 +
             dVar32 * dStack_2c0 + dVar21 * local_2c8 * 1.0 + dVar23 * dStack_2b0;
    dVar22 = dVar23 * local_2b8 * 1.0 +
             dVar21 * dStack_2c0 + dVar32 * local_2c8 * -1.0 + dVar17 * dStack_2b0;
    auVar28._0_8_ =
         dVar21 * local_2b8 * 1.0 +
         ((local_2c8 * dVar17 * 1.0 + dVar32 * dStack_2b0) - dVar23 * dStack_2c0);
    auVar28._8_8_ =
         dVar32 * local_2b8 * -1.0 +
         ((local_2c8 * dVar23 * -1.0 + dVar21 * dStack_2b0) - dVar17 * dStack_2c0);
    dVar33 = param_3[4] * dVar13;
    dVar34 = param_3[5] * dVar29;
    dVar23 = param_3[6] * dVar31;
    dVar32 = dVar34 * local_2c8 - dStack_2c0 * dVar33;
    dVar21 = dVar23 * dStack_2c0 - local_2b8 * dVar34;
    dVar17 = dVar33 * local_2b8 - local_2c8 * dVar23;
    dVar21 = dVar21 + dVar21;
    dVar17 = dVar17 + dVar17;
    dVar32 = dVar32 + dVar32;
    local_e8 = (dVar32 * dStack_2c0 - local_2b8 * dVar17) + dStack_2b0 * dVar21 + dVar33 + local_2a8
    ;
    dStack_e0 = (dVar21 * local_2b8 - dVar32 * local_2c8) + dStack_2b0 * dVar17 + dVar34 +
                dStack_2a0;
    local_d8 = (dVar17 * local_2c8 - dStack_2c0 * dVar21) + dStack_2b0 * dVar32 + dVar23 +
               (double)CONCAT44(uStack_294,local_298);
  }
  else {
    dVar21 = dStack_2c0 + dStack_2c0;
    dVar23 = local_2b8 + local_2b8;
    dVar32 = local_2c8 * (local_2c8 + local_2c8);
    local_178 = (1.0 - (dVar32 + dStack_2c0 * dVar21)) * dVar31;
    dVar17 = (local_2c8 + local_2c8) * dStack_2b0;
    local_188 = (dVar21 * dStack_2b0 + local_2c8 * dVar23) * dVar31;
    dStack_180 = (dVar23 * dStack_2c0 - dVar17) * dVar31;
    dVar32 = (DAT_149934d80._8_8_ - (local_2b8 * dVar23 + dVar32)) * dVar29;
    local_198 = (dVar23 * dStack_2c0 + dVar17) * dVar29;
    local_1b8 = (local_2c8 * dVar23 - dVar21 * dStack_2b0) * dVar13;
    local_1c8._8_8_ = (dVar21 * local_2c8 + dVar23 * dStack_2b0) * dVar13;
    local_1c8._0_8_ = ((double)DAT_149934d80 - (local_2b8 * dVar23 + dStack_2c0 * dVar21)) * dVar13;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar32,0);
    local_1a8._0_8_ = (dVar21 * local_2c8 - dVar23 * dStack_2b0) * dVar29;
    local_1a8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = local_2a8;
    dStack_160 = dStack_2a0;
    local_158 = local_298;
    uStack_154 = uStack_294;
    uStack_150 = 0;
    uStack_14c = 0x3ff00000;
    dVar22 = *param_3;
    dVar33 = param_3[1];
    dVar34 = param_3[2];
    dVar25 = dVar33 + dVar33;
    dVar17 = dVar34 + dVar34;
    dVar18 = dVar22 * (dVar22 + dVar22);
    local_1f8 = (1.0 - (dVar18 + dVar33 * dVar25)) * dVar3;
    dVar23 = param_3[3];
    dVar32 = dVar17 * dVar23;
    dVar21 = (dVar22 + dVar22) * param_3[3];
    dVar23 = dVar25 * dVar23;
    local_208 = (dVar23 + *param_3 * dVar17) * dVar3;
    local_228 = (dVar25 * dVar22 - dVar32) * dVar14;
    dStack_200 = (dVar17 * dVar33 - dVar21) * dVar3;
    local_248 = ((double)DAT_149934d80 - (dVar34 * dVar17 + dVar33 * dVar25)) * dVar2;
    dStack_220 = (DAT_149934d80._8_8_ - (dVar34 * dVar17 + dVar18)) * dVar14;
    dStack_240 = (dVar25 * dVar22 + dVar32) * dVar2;
    local_218 = (dVar17 * dVar33 + dVar21) * dVar14;
    local_238 = (*param_3 * dVar17 - dVar23) * dVar2;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_3[4];
    dStack_1e0 = param_3[5];
    local_1d8 = param_3[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar24._8_8_ = -(ulonglong)(0.0 <= dVar29 * dVar14);
    auVar24._0_8_ = -(ulonglong)(0.0 <= dVar13 * dVar2);
    auVar19 = blendvpd(_DAT_149936790,auVar28,auVar24);
    uVar10 = -(ulonglong)(0.0 <= dVar31 * dVar3);
    dVar23 = (double)(~uVar10 & 0xbff0000000000000 | uVar10 & 0x3ff0000000000000);
    dVar17 = auVar19._0_8_;
    local_138 = local_138 * dVar17;
    dStack_140 = dStack_140 * dVar17;
    local_148 = local_148 * dVar17;
    dVar17 = auVar19._8_8_;
    local_118 = local_118 * dVar17;
    local_120 = local_120 * dVar17;
    local_128 = dVar17 * local_128;
    local_f8 = local_f8 * dVar23;
    local_100 = local_100 * dVar23;
    local_108 = dVar23 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar23 = local_258 * local_258 + local_268 * local_268;
    dVar17 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar16._0_8_ = dVar23 + dVar17;
    auVar16._8_8_ = dVar23 + dVar17;
    auVar11._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar19 = sqrtpd(auVar16,auVar16);
    auVar19 = divpd(auVar28,auVar19);
    auVar30._0_8_ = auVar19._0_8_ * local_258;
    auVar30._8_8_ = auVar19._8_8_ * dStack_250;
    dVar18 = (double)((ulonglong)(local_268 * auVar19._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    dVar22 = (double)((ulonglong)(dStack_260 * auVar19._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    auVar28 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar11);
  }
  dVar23 = local_278._8_8_ * auVar1._8_8_;
  dVar31 = dVar31 * dVar3;
  dVar13 = dVar13 * dVar2;
  if (*param_2 == 2) {
    local_d8 = local_d8 - *(double *)(param_5 + 0x30);
    dStack_e0 = dStack_e0 - *(double *)(param_5 + 0x28);
    local_e8 = local_e8 - *(double *)(param_5 + 0x20);
    fVar12 = (float)(local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0);
    fVar15 = *(float *)(param_5 + 0x170) + (float)(dVar13 * (double)(float)param_2[1]);
    if ((fVar15 * fVar15 < fVar12) ||
       ((0.0 < *(float *)(param_5 + 0x168) &&
        (fVar15 = *(float *)(param_5 + 0x168) + (float)(dVar13 * (double)(float)param_2[1]),
        fVar12 < fVar15 * fVar15)))) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    goto LAB_148817477;
  }
  local_2f0 = (double)(float)param_2[1] * dVar13;
  fVar12 = (float)param_2[2] - (float)param_2[1];
  dVar13 = dVar13 * 0.0;
  dVar14 = dVar29 * dVar14 * 0.0;
  dVar32 = (double)fVar12 * dVar31;
  dVar17 = auVar28._8_8_;
  dStack_2d0 = auVar28._0_8_;
  local_2e8._8_4_ = SUB84(dVar23,0);
  local_2e8._0_8_ = dVar31;
  local_2e8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar29 = dVar13 * dStack_2d0 - dVar18 * dVar32;
  dVar2 = dVar14 * dVar18 - dVar22 * dVar13;
  dVar3 = dVar32 * dVar22 - dStack_2d0 * dVar14;
  dVar3 = dVar3 + dVar3;
  dVar29 = dVar29 + dVar29;
  dVar2 = dVar2 + dVar2;
  local_148 = (dVar2 * dVar22 - dVar29 * dStack_2d0) + dVar17 * dVar3 + dVar13 + local_e8;
  dStack_140 = (dStack_2d0 * dVar3 - dVar18 * dVar2) + dVar17 * dVar29 + dVar14 + dStack_e0;
  local_138 = dVar2 * dVar17 + dVar32 + (dVar29 * dVar18 - dVar3 * dVar22) + local_d8;
  dVar31 = (double)-fVar12 * dVar31;
  dVar29 = dVar13 * dStack_2d0 - dVar18 * dVar31;
  dVar2 = dVar14 * dVar18 - dVar22 * dVar13;
  dVar3 = dVar31 * dVar22 - dStack_2d0 * dVar14;
  dVar3 = dVar3 + dVar3;
  dVar29 = dVar29 + dVar29;
  dVar2 = dVar2 + dVar2;
  dStack_e0 = (dStack_2d0 * dVar3 - dVar18 * dVar2) + dVar17 * dVar29 + dVar14 + dStack_e0;
  local_1b8 = dVar2 * dVar17 + dVar31 + (dVar29 * dVar18 - dVar3 * dVar22) + local_d8;
  local_1c8._8_4_ = SUB84(dStack_e0,0);
  local_1c8._0_8_ = (dVar2 * dVar22 - dVar29 * dStack_2d0) + dVar17 * dVar3 + dVar13 + local_e8;
  local_1c8._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  fVar27 = (float)local_2f0;
  pdVar9 = &local_248;
  local_2d8 = dVar22;
  FUN_144afdf0e(pdVar9,param_5 + 0x20);
  bVar7 = (byte)pdVar9;
  dVar13 = *(double *)(param_5 + 0x30);
  dVar31 = *(double *)(param_5 + 0x20);
  dVar2 = *(double *)(param_5 + 0x28);
  fVar15 = (float)((local_238 - dVar13) * (local_238 - dVar13) +
                  (local_248 - dVar31) * (local_248 - dVar31) +
                  (dStack_240 - dVar2) * (dStack_240 - dVar2));
  fVar12 = *(float *)(param_5 + 0x170) + fVar27;
  if (fVar15 <= fVar12 * fVar12) {
    fVar12 = *(float *)(param_5 + 0x16c);
    if ((0.0 < *(float *)(param_5 + 0x168)) &&
       (fVar26 = *(float *)(param_5 + 0x168) + fVar27, fVar15 < fVar26 * fVar26))
    goto LAB_148817473;
    bVar4 = 1;
    if ((fVar12 <= 0.0001) ||
       ((fVar15 = (float)SQRT((local_138 - dVar13) * (local_138 - dVar13) +
                              (local_148 - dVar31) * (local_148 - dVar31) +
                              (dStack_140 - dVar2) * (dStack_140 - dVar2)) + fVar27,
        fVar12 <= fVar15 * fVar15 ||
        (fVar27 = fVar27 + (float)SQRT((local_1b8 - dVar13) * (local_1b8 - dVar13) +
                                       ((double)local_1c8._0_8_ - dVar31) *
                                       ((double)local_1c8._0_8_ - dVar31) +
                                       ((double)local_1c8._8_8_ - dVar2) *
                                       ((double)local_1c8._8_8_ - dVar2)), fVar12 <= fVar27 * fVar27
        )))) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
  }
  else {
LAB_148817473:
    bVar4 = 0;
  }
  bVar4 = bVar4 & bVar7;
LAB_148817477:
  if ((local_c0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148817806 FUN_148817806 body=432 status=ok
// SIG undefined FUN_148817806(void)

void FUN_148817806(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  float fVar7;
  undefined1 auVar8 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar9 [16];
  
  lVar5 = FUN_14485cccc(param_2 + 0xc0);
  if ((lVar5 != 0) && (0.0 < *(float *)(param_4 + 8))) {
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
    if (lVar5 == 0) {
      pdVar6 = (double *)&DAT_14c8464e0;
      dVar14 = DAT_14c8464f0;
    }
    else {
      pdVar6 = (double *)(lVar5 + 0x260);
      dVar14 = *(double *)(lVar5 + 0x270);
    }
    dVar10 = *pdVar6 * *(double *)(param_4 + 0xc0);
    dVar11 = pdVar6[1] * *(double *)(param_4 + 200);
    dVar14 = dVar14 * *(double *)(param_4 + 0xd0);
    dVar2 = *(double *)(param_4 + 0x80);
    dVar3 = *(double *)(param_4 + 0x88);
    dVar4 = *(double *)(param_4 + 0x90);
    dVar12 = dVar11 * dVar2 - dVar10 * dVar3;
    dVar13 = dVar14 * dVar3 - dVar11 * dVar4;
    dVar15 = dVar10 * dVar4 - dVar2 * dVar14;
    dVar13 = dVar13 + dVar13;
    dVar15 = dVar15 + dVar15;
    dVar12 = dVar12 + dVar12;
    dVar14 = (dVar12 * dVar3 - dVar15 * dVar4) + *(double *)(param_4 + 0x98) * dVar13 + dVar10 +
             *(double *)(param_4 + 0xa0);
    dVar12 = (dVar4 * dVar13 - dVar12 * dVar2) + *(double *)(param_4 + 0x98) * dVar15 + dVar11 +
             *(double *)(param_4 + 0xa8);
    dVar14 = SQRT(dVar14 * dVar14 + dVar12 * dVar12);
    uVar1 = (ulonglong)dVar14 >> 0x20;
    fVar7 = (float)dVar14 / *(float *)(param_4 + 8);
    auVar8._4_8_ = uVar1;
    auVar8._0_4_ = fVar7;
    if (1.0 <= fVar7) {
      auVar9._12_4_ = 0;
      auVar9._4_8_ = uVar1;
      auVar9._0_4_ = 0x3f800000;
      auVar8 = auVar9._0_12_;
    }
    lVar5 = auVar8._0_8_;
    if (auVar8._0_4_ <= 0.0) {
      lVar5 = auVar8._4_8_ << 0x20;
    }
    FUN_146206072(lVar5,*(undefined8 *)(param_3 + 0x40));
    return;
  }
  return;
}



// FUNCTION 1488179e2 FUN_1488179e2 body=421 status=ok
// SIG undefined FUN_1488179e2(void)

float FUN_1488179e2(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_138 [40];
  undefined1 local_110 [40];
  undefined4 local_e8;
  undefined8 **local_e0 [3];
  ushort local_c8;
  byte local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 **local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  FUN_1448729ea(param_1 + 0x48,local_88,local_b8);
  fVar3 = (float)FUN_144a7b41a(local_88,0);
  local_110[0] = 0;
  local_e8 = 0;
  FUN_1456bb102(local_110,param_2);
  FUN_1448729ea(param_1 + 0xa0,local_e0,local_110);
  fVar4 = (float)FUN_144a7b41a(local_e0,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_e0;
    if (0x18 < local_c8) {
      pppuVar2 = (undefined8 ***)local_e0[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0[0]);
  }
  FUN_144a5ac3a(local_110);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_88;
    if (0x18 < local_70) {
      pppuVar2 = (undefined8 ***)local_88[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  fVar5 = fVar4 * 0.5;
  if (fVar4 * 0.5 <= fVar3) {
    fVar5 = fVar3;
  }
  FUN_144a5ac3a(local_b8);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148817b88 FUN_148817b88 body=1675 status=ok
// SIG undefined FUN_148817b88(void)

void FUN_148817b88(longlong param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
                  double *param_5,undefined8 *param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 ***pppuVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_188 [32];
  longlong local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined1 local_148;
  undefined7 uStack_147;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined4 local_120;
  undefined8 **local_118;
  double local_110;
  double local_108;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar1 = *param_6;
  if ((param_8 == 0) || (*(char *)(param_8 + 0x7c) != '\x01')) {
    local_168 = param_1 + 0x48;
    local_148 = 0;
    local_120 = 0;
    FUN_1456bb102(&local_148,uVar1);
    FUN_1448729ea(local_168,&local_118,&local_148);
    fVar19 = (float)FUN_144a7b41a(&local_118);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar15 = &local_118;
      if (0x18 < local_100) {
        pppuVar15 = (undefined8 ***)local_118;
      }
      (*pcVar2)(pppuVar15);
    }
    if (0x18 < local_100) {
      FUN_1400020a8(local_118);
    }
    FUN_144a5ac3a(&local_148);
    if (param_8 != 0) goto LAB_148817c44;
  }
  else {
    fVar19 = *(float *)(param_8 + 0x78);
LAB_148817c44:
    if (*(char *)(param_8 + 0x98) == '\x01') {
      fVar18 = (float)*(double *)(param_8 + 0x90);
      if ((0.0 < *(double *)(param_8 + 0x80)) && (*(char *)(param_8 + 0x7c) == '\0')) {
        fVar19 = (float)*(double *)(param_8 + 0x80);
      }
      goto LAB_148817c7f;
    }
  }
  local_148 = 0;
  local_120 = 0;
  FUN_1456bb102(&local_148,uVar1);
  FUN_1448729ea(param_1 + 0xa0,&local_118,&local_148);
  fVar18 = (float)FUN_144a7b41a(&local_118);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar15 = &local_118;
    if (0x18 < local_100) {
      pppuVar15 = (undefined8 ***)local_118;
    }
    (*pcVar2)(pppuVar15);
  }
  if (0x18 < local_100) {
    FUN_1400020a8(local_118);
  }
  FUN_144a5ac3a(&local_148);
LAB_148817c7f:
  FUN_144a76660(param_5,&local_118);
  local_150 = param_5[2] + 0.0;
  dStack_158 = param_5[1] + 0.0;
  local_160 = *param_5 + 90.0;
  dVar8 = local_160 * 0.01745329238474369;
  dVar17 = dStack_158 * 0.01745329238474369;
  dVar11 = local_150 * 0.01745329238474369;
  dVar4 = sin(dVar8);
  dVar5 = sin(dVar17);
  dVar6 = sin(dVar11);
  dVar8 = cos(dVar8);
  dVar17 = cos(dVar17);
  dVar11 = cos(dVar11);
  dVar16 = (double)-(fVar18 * 0.5);
  dVar9 = *param_4 +
          DAT_14c8464e0 * 0.0 +
          (dVar4 * dVar6 * dVar17 - dVar5 * dVar11) * 0.0 + dVar8 * dVar17 * 0.0 +
          dVar16 * -(dVar4 * dVar11 * dVar17 + dVar5 * dVar6);
  dVar7 = (dVar4 * 0.0 - dVar8 * dVar6 * 0.0) + dVar8 * dVar11 * dVar16 + DAT_14c8464f0 * 0.0 +
          param_4[2];
  dVar8 = DAT_14c8464e8 * 0.0 +
          (dVar4 * dVar6 * dVar5 + dVar17 * dVar11) * 0.0 + dVar5 * dVar8 * 0.0 +
          dVar16 * (dVar17 * dVar6 - dVar5 * dVar4 * dVar11) + param_4[1];
  *param_2 = 4;
  param_2[1] = param_2[1] & 0xfe;
  *(undefined4 *)(param_2 + 4) = 3;
  *(float *)(param_2 + 8) = fVar19;
  *(float *)(param_2 + 0xc) = fVar18 * 0.5;
  *(float *)(param_2 + 0x164) = fVar19;
  FUN_144a7484c(&local_160,&local_148);
  local_138 = local_138 * -1.0;
  dStack_130 = dStack_130 * 1.0;
  dVar5 = -(double)CONCAT71(uStack_147,local_148);
  dVar6 = -dStack_140;
  auVar10._8_4_ = SUB84(dStack_140,0);
  auVar10._0_8_ = dVar5;
  auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x80) = auVar10;
  *(double *)(param_2 + 0x90) = local_138;
  *(double *)(param_2 + 0x98) = dStack_130;
  dVar16 = dVar9 * local_138 - dVar5 * dVar7;
  dVar17 = dVar8 * dVar5 - dVar9 * dVar6;
  dVar11 = dVar7 * dVar6 - dVar8 * local_138;
  dVar11 = dVar11 + dVar11;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar17 + dVar17;
  dVar4 = 0.0 - (dVar17 * (double)CONCAT71(uStack_147,local_148) + local_138 * dVar11 +
                dStack_130 * dVar16 + dVar8);
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = 0.0 - ((dVar17 * dVar6 - dVar16 * local_138) + dStack_130 * dVar11 + dVar9);
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0xa0) = auVar3;
  *(double *)(param_2 + 0xb0) =
       0.0 - (dStack_130 * dVar17 + dVar7 + (dVar16 * dVar5 - dVar11 * dVar6));
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  puVar13 = (undefined8 *)(param_2 + 0x80);
  puVar14 = (undefined8 *)(param_2 + 0xe0);
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(double *)(param_2 + 0x20) = dVar9;
  *(double *)(param_2 + 0x28) = dVar8;
  *(double *)(param_2 + 0x30) = dVar7;
  *(double *)(param_2 + 0x48) = local_150;
  *(double *)(param_2 + 0x38) = local_160;
  *(double *)(param_2 + 0x40) = dStack_158;
  dVar4 = param_4[1];
  *(double *)(param_2 + 0x50) = *param_4;
  *(double *)(param_2 + 0x58) = dVar4;
  *(double *)(param_2 + 0x60) = param_4[2];
  dVar4 = (double)fVar18;
  *(double *)(param_2 + 0x68) = dVar4 * (double)local_118;
  *(double *)(param_2 + 0x70) = local_110 * dVar4;
  *(double *)(param_2 + 0x78) = local_108 * dVar4;
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148818214 FUN_148818214 body=337 status=ok
// SIG undefined FUN_148818214(void)

void FUN_148818214(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  undefined1 auVar5 [12];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auVar6 [16];
  
  fVar11 = *(float *)(param_4 + 0xc);
  lVar3 = FUN_14485cccc(param_2 + 0xc0);
  if ((lVar3 != 0) && (fVar11 = fVar11 + fVar11, 0.0 < fVar11)) {
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar3 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      dVar10 = DAT_14c8464f0;
    }
    else {
      pdVar4 = (double *)(lVar3 + 0x260);
      dVar10 = *(double *)(lVar3 + 0x270);
    }
    dVar7 = *pdVar4 * *(double *)(param_4 + 0xc0);
    dVar9 = pdVar4[1] * *(double *)(param_4 + 200);
    dVar10 = dVar10 * *(double *)(param_4 + 0xd0);
    dVar2 = *(double *)(param_4 + 0x80);
    dVar8 = dVar9 * dVar2 - *(double *)(param_4 + 0x88) * dVar7;
    dVar9 = dVar10 * *(double *)(param_4 + 0x88) - *(double *)(param_4 + 0x90) * dVar9;
    dVar7 = *(double *)(param_4 + 0x90) * dVar7 - dVar10 * dVar2;
    dVar10 = (double)(fVar11 * 0.5) -
             ((dVar8 + dVar8) * *(double *)(param_4 + 0x98) + dVar10 +
              ((dVar7 + dVar7) * dVar2 - *(double *)(param_4 + 0x88) * (dVar9 + dVar9)) +
             *(double *)(param_4 + 0xb0));
    uVar1 = (ulonglong)dVar10 >> 0x20;
    fVar11 = (float)dVar10 / fVar11;
    auVar5._4_8_ = uVar1;
    auVar5._0_4_ = fVar11;
    if (1.0 <= fVar11) {
      auVar6._12_4_ = 0;
      auVar6._4_8_ = uVar1;
      auVar6._0_4_ = 0x3f800000;
      auVar5 = auVar6._0_12_;
    }
    lVar3 = auVar5._0_8_;
    if (auVar5._0_4_ <= 0.0) {
      lVar3 = auVar5._4_8_ << 0x20;
    }
    FUN_146206072(lVar3,*(undefined8 *)(param_3 + 0x40));
    return;
  }
  return;
}



// FUNCTION 1488183d5 FUN_1488183d5 body=2591 status=ok
// SIG undefined FUN_1488183d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1488183d5(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  float extraout_XMM0_Da;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_398 [32];
  double *local_378;
  double *local_370;
  float local_35c;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
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
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_2c8,*param_4,0);
  auVar23 = _DAT_149934d80;
  dVar1 = local_288._0_8_;
  dVar11 = local_288._8_8_;
  dVar27 = local_278._0_8_;
  auVar13 = *(undefined1 (*) [16])(param_3 + 8);
  dVar2 = auVar13._0_8_;
  dVar3 = auVar13._8_8_;
  dVar9 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar13 = minpd(auVar13,local_288);
  auVar18 = minpd(*(undefined1 (*) [16])(param_3 + 10),local_278);
  auVar14._8_8_ = -(ulonglong)(auVar13._8_8_ < 0.0);
  auVar14._0_8_ = -(ulonglong)(auVar13._0_8_ < 0.0);
  iVar5 = movmskpd(uVar4,auVar14);
  auVar13._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
  auVar13._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
  uVar6 = movmskpd((int)param_1,auVar13);
  if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar17 = *param_3;
    dVar21 = param_3[1];
    dVar15 = param_3[2];
    dVar25 = param_3[3];
    dVar12 = dVar21 * local_2b8 * -1.0 +
             dVar15 * dStack_2c0 + dVar25 * local_2c8 * 1.0 + dVar17 * dStack_2b0;
    dVar16 = dVar17 * local_2b8 * 1.0 +
             dVar25 * dStack_2c0 + dVar15 * local_2c8 * -1.0 + dVar21 * dStack_2b0;
    auVar23._0_8_ =
         dVar25 * local_2b8 * 1.0 +
         ((local_2c8 * dVar21 * 1.0 + dVar15 * dStack_2b0) - dVar17 * dStack_2c0);
    auVar23._8_8_ =
         dVar15 * local_2b8 * -1.0 +
         ((local_2c8 * dVar17 * -1.0 + dVar25 * dStack_2b0) - dVar21 * dStack_2c0);
    dVar28 = param_3[4] * dVar1;
    dVar20 = param_3[5] * dVar11;
    dVar26 = param_3[6] * dVar27;
    dVar29 = param_3[7] * local_278._8_8_;
    dVar15 = dVar20 * local_2c8 - dStack_2c0 * dVar28;
    dVar25 = dVar26 * dStack_2c0 - local_2b8 * dVar20;
    dVar17 = dVar28 * local_2b8 - local_2c8 * dVar26;
    dVar21 = dVar29 * dStack_2b0 - dStack_2b0 * dVar29;
    dVar25 = dVar25 + dVar25;
    dVar17 = dVar17 + dVar17;
    dVar15 = dVar15 + dVar15;
    dVar21 = dVar21 + dVar21;
    local_e8 = (dVar15 * dStack_2c0 - local_2b8 * dVar17) + dStack_2b0 * dVar25 + dVar28 + local_2a8
    ;
    dStack_e0 = (dVar25 * local_2b8 - dVar15 * local_2c8) + dStack_2b0 * dVar17 + dVar20 +
                dStack_2a0;
    local_d8 = (dVar17 * local_2c8 - dStack_2c0 * dVar25) + dStack_2b0 * dVar15 + dVar26 +
               (double)CONCAT44(uStack_294,local_298);
    dStack_290 = (dVar21 * dStack_2b0 - dVar21 * dStack_2b0) + dStack_2b0 * dVar21 + dVar29 +
                 dStack_290;
  }
  else {
    dVar15 = dStack_2c0 + dStack_2c0;
    dVar17 = local_2b8 + local_2b8;
    dVar25 = local_2c8 * (local_2c8 + local_2c8);
    local_178 = (1.0 - (dVar25 + dStack_2c0 * dVar15)) * dVar27;
    dVar21 = (local_2c8 + local_2c8) * dStack_2b0;
    local_188 = (dVar15 * dStack_2b0 + local_2c8 * dVar17) * dVar27;
    local_1a8 = (dVar15 * local_2c8 - dVar17 * dStack_2b0) * dVar11;
    dStack_180 = (dVar17 * dStack_2c0 - dVar21) * dVar27;
    local_1c8 = ((double)DAT_149934d80 - (local_2b8 * dVar17 + dStack_2c0 * dVar15)) * dVar1;
    dStack_1a0 = (DAT_149934d80._8_8_ - (local_2b8 * dVar17 + dVar25)) * dVar11;
    dStack_1c0 = (dVar15 * local_2c8 + dVar17 * dStack_2b0) * dVar1;
    local_198 = (dVar17 * dStack_2c0 + dVar21) * dVar11;
    local_1b8 = (local_2c8 * dVar17 - dVar15 * dStack_2b0) * dVar1;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = local_2a8;
    dStack_160 = dStack_2a0;
    local_158 = local_298;
    uStack_154 = uStack_294;
    uStack_150 = 0;
    uStack_14c = 0x3ff00000;
    dVar12 = *param_3;
    dVar16 = param_3[1];
    dVar28 = param_3[2];
    dVar20 = dVar16 + dVar16;
    dVar21 = dVar28 + dVar28;
    dVar26 = dVar12 * (dVar12 + dVar12);
    local_1f8 = (1.0 - (dVar26 + dVar16 * dVar20)) * dVar9;
    dVar17 = param_3[3];
    dVar15 = dVar21 * dVar17;
    dVar25 = (dVar12 + dVar12) * param_3[3];
    dVar17 = dVar20 * dVar17;
    local_208 = (dVar17 + *param_3 * dVar21) * dVar9;
    local_228 = (dVar20 * dVar12 - dVar15) * dVar3;
    dStack_200 = (dVar21 * dVar16 - dVar25) * dVar9;
    local_248 = ((double)DAT_149934d80 - (dVar28 * dVar21 + dVar16 * dVar20)) * dVar2;
    dStack_220 = (DAT_149934d80._8_8_ - (dVar28 * dVar21 + dVar26)) * dVar3;
    dStack_240 = (dVar20 * dVar12 + dVar15) * dVar2;
    local_218 = (dVar21 * dVar16 + dVar25) * dVar3;
    local_238 = (*param_3 * dVar21 - dVar17) * dVar2;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_3[4];
    dStack_1e0 = param_3[5];
    local_1d8 = param_3[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar18._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar3);
    auVar18._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar2);
    auVar13 = blendvpd(_DAT_149936790,auVar23,auVar18);
    uVar7 = -(ulonglong)(0.0 <= dVar27 * dVar9);
    dVar17 = (double)(~uVar7 & 0xbff0000000000000 | uVar7 & 0x3ff0000000000000);
    dVar21 = auVar13._0_8_;
    local_138 = local_138 * dVar21;
    dStack_140 = dStack_140 * dVar21;
    local_148 = local_148 * dVar21;
    dVar21 = auVar13._8_8_;
    local_118 = local_118 * dVar21;
    local_120 = local_120 * dVar21;
    local_128 = dVar21 * local_128;
    local_f8 = local_f8 * dVar17;
    local_100 = local_100 * dVar17;
    local_108 = dVar17 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar17 = local_258 * local_258 + local_268 * local_268;
    dVar21 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar19._0_8_ = dVar17 + dVar21;
    auVar19._8_8_ = dVar17 + dVar21;
    auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
    auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
    auVar13 = sqrtpd(auVar19,auVar19);
    auVar13 = divpd(auVar23,auVar13);
    auVar24._0_8_ = auVar13._0_8_ * local_258;
    auVar24._8_8_ = auVar13._8_8_ * dStack_250;
    dVar12 = (double)((ulonglong)(local_268 * auVar13._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
    dVar16 = (double)((ulonglong)(dStack_260 * auVar13._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar10);
    dStack_290 = 0.0;
  }
  dVar11 = dVar11 * dVar3;
  dVar1 = dVar1 * dVar2;
  if (*param_2 == 2) {
    fVar22 = (float)param_2[1];
    local_1b8 = *(double *)(param_5 + 0x60) + *(double *)(param_5 + 0x78);
    dStack_1c0 = *(double *)(param_5 + 0x58) + *(double *)(param_5 + 0x70);
    local_1c8 = *(double *)(param_5 + 0x50) + *(double *)(param_5 + 0x68);
    local_148 = local_e8;
    dStack_140 = dStack_e0;
    local_138 = local_d8;
    FUN_1402b5c34(&local_148,param_5 + 0x50);
    fVar8 = extraout_XMM0_Da;
  }
  else {
    fVar22 = (float)param_2[1];
    dVar21 = dVar1 * 0.0;
    dVar15 = dVar11 * 0.0;
    dVar17 = (double)((float)param_2[2] - fVar22) * dVar27 * dVar9;
    local_348._8_4_ = SUB84(dVar11,0);
    local_348._0_8_ = dVar1;
    local_348._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dVar25 = auVar23._0_8_;
    dVar28 = auVar23._8_8_;
    dVar2 = dVar21 * dVar25 - dVar12 * dVar17;
    dVar11 = dVar15 * dVar12 - dVar16 * dVar21;
    dVar3 = dVar17 * dVar16 - dVar25 * dVar15;
    dVar3 = dVar3 + dVar3;
    dVar2 = dVar2 + dVar2;
    dVar11 = dVar11 + dVar11;
    local_358._8_4_ = SUB84(dStack_290,0);
    local_358._0_8_ = local_d8;
    local_358._12_4_ = (int)((ulonglong)dStack_290 >> 0x20);
    dVar26 = (double)-((float)param_2[2] - fVar22) * dVar27 * dVar9;
    dVar9 = dVar21 * dVar25 - dVar12 * dVar26;
    dVar27 = dVar15 * dVar12 - dVar16 * dVar21;
    dVar20 = dVar26 * dVar16 - dVar25 * dVar15;
    dVar20 = dVar20 + dVar20;
    dVar9 = dVar9 + dVar9;
    dVar27 = dVar27 + dVar27;
    local_308 = (dVar11 * dVar16 - dVar2 * dVar25) + dVar28 * dVar3 + dVar21 + local_e8;
    dStack_300 = (dVar25 * dVar3 - dVar12 * dVar11) + dVar28 * dVar2 + dVar15 + dStack_e0;
    dStack_e0 = (dVar25 * dVar20 - dVar12 * dVar27) + dVar28 * dVar9 + dVar15 + dStack_e0;
    local_2f8 = dVar11 * dVar28 + dVar17 + (dVar2 * dVar12 - dVar3 * dVar16) + local_d8;
    local_2d8 = dVar27 * dVar28 + dVar26 + (dVar9 * dVar12 - dVar20 * dVar16) + local_d8;
    local_2e8._8_4_ = SUB84(dStack_e0,0);
    local_2e8._0_8_ = (dVar27 * dVar16 - dVar9 * dVar25) + dVar28 * dVar20 + dVar21 + local_e8;
    local_2e8._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
    local_310 = *(double *)(param_5 + 0x60) + *(double *)(param_5 + 0x78);
    local_318 = *(double *)(param_5 + 0x58) + *(double *)(param_5 + 0x70);
    local_320 = *(double *)(param_5 + 0x50) + *(double *)(param_5 + 0x68);
    local_338 = *(undefined8 *)(param_5 + 0x50);
    uStack_330 = *(undefined8 *)(param_5 + 0x58);
    local_328 = *(undefined8 *)(param_5 + 0x60);
    local_370 = &local_1c8;
    local_378 = &local_148;
    local_35c = fVar22;
    FUN_144a0d30e();
    fVar8 = (float)((local_1b8 - local_138) * (local_1b8 - local_138) +
                   (local_1c8 - local_148) * (local_1c8 - local_148) +
                   (dStack_1c0 - dStack_140) * (dStack_1c0 - dStack_140));
  }
  fVar22 = (float)(dVar1 * (double)fVar22) + *(float *)(param_5 + 8);
  if ((local_c0 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return fVar8 <= fVar22 * fVar22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148818e4e FUN_148818e4e body=200 status=ok
// SIG undefined FUN_148818e4e(void)

undefined8 FUN_148818e4e(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = FUN_14485cccc(param_2 + 0xc0);
  if ((lVar1 != 0) && (0.0 < *(float *)(param_4 + 0x170))) {
    lVar1 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar1 == 0) {
      pdVar2 = (double *)&DAT_14c8464e0;
      dVar6 = DAT_14c8464f0;
    }
    else {
      pdVar2 = (double *)(lVar1 + 0x260);
      dVar6 = *(double *)(lVar1 + 0x270);
    }
    dVar6 = *(double *)(param_4 + 0x60) - dVar6;
    dVar7 = *(double *)(param_4 + 0x58) - pdVar2[1];
    dVar4 = *(double *)(param_4 + 0x50) - *pdVar2;
    dVar6 = SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar7 * dVar7);
    fVar3 = (float)dVar6 / *(float *)(param_4 + 0x170);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar5 = FUN_146206072(CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar3),
                          *(undefined8 *)(param_3 + 0x40));
    return uVar5;
  }
  return 0x3f800000;
}



// FUNCTION 148818f16 FUN_148818f16 body=2814 status=ok
// SIG undefined FUN_148818f16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_148818f16(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,longlong param_5)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_388 [32];
  double *local_368;
  double *local_360;
  double local_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  undefined1 local_318 [16];
  double local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
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
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar2 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_2c8,*param_4,0);
  auVar25 = _DAT_149934d80;
  dVar10 = local_288._0_8_;
  dVar1 = local_288._8_8_;
  dVar8 = local_278._0_8_;
  auVar12 = *(undefined1 (*) [16])(param_3 + 8);
  dVar24 = auVar12._0_8_;
  dVar7 = auVar12._8_8_;
  dVar21 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar12 = minpd(auVar12,local_288);
  auVar16 = minpd(*(undefined1 (*) [16])(param_3 + 10),local_278);
  auVar13._8_8_ = -(ulonglong)(auVar12._8_8_ < 0.0);
  auVar13._0_8_ = -(ulonglong)(auVar12._0_8_ < 0.0);
  iVar3 = movmskpd(uVar2,auVar13);
  auVar12._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar12._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  uVar5 = movmskpd((int)param_1,auVar12);
  if ((uVar5 & 0x3fffffff) == 0 && iVar3 == 0) {
    dVar28 = *param_3;
    dVar15 = param_3[1];
    dVar18 = param_3[2];
    dVar22 = param_3[3];
    dVar19 = dVar15 * local_2b8 * -1.0 +
             dVar18 * dStack_2c0 + dVar22 * local_2c8 * 1.0 + dVar28 * dStack_2b0;
    dVar20 = dVar28 * local_2b8 * 1.0 +
             dVar22 * dStack_2c0 + dVar18 * local_2c8 * -1.0 + dVar15 * dStack_2b0;
    auVar25._0_8_ =
         dVar22 * local_2b8 * 1.0 +
         ((local_2c8 * dVar15 * 1.0 + dVar18 * dStack_2b0) - dVar28 * dStack_2c0);
    auVar25._8_8_ =
         dVar18 * local_2b8 * -1.0 +
         ((local_2c8 * dVar28 * -1.0 + dVar22 * dStack_2b0) - dVar15 * dStack_2c0);
    dVar23 = param_3[4] * dVar10;
    dVar29 = param_3[5] * dVar1;
    dVar28 = param_3[6] * dVar8;
    dVar15 = param_3[7] * local_278._8_8_;
    dVar11 = dVar29 * local_2c8 - dStack_2c0 * dVar23;
    dVar17 = dVar28 * dStack_2c0 - local_2b8 * dVar29;
    dVar18 = dVar23 * local_2b8 - local_2c8 * dVar28;
    dVar22 = dVar15 * dStack_2b0 - dStack_2b0 * dVar15;
    dVar17 = dVar17 + dVar17;
    dVar18 = dVar18 + dVar18;
    dVar11 = dVar11 + dVar11;
    dVar22 = dVar22 + dVar22;
    local_e8 = (dVar11 * dStack_2c0 - local_2b8 * dVar18) + dStack_2b0 * dVar17 + dVar23 + local_2a8
    ;
    dStack_e0 = (dVar17 * local_2b8 - dVar11 * local_2c8) + dStack_2b0 * dVar18 + dVar29 +
                dStack_2a0;
    local_d8 = (dVar18 * local_2c8 - dStack_2c0 * dVar17) + dStack_2b0 * dVar11 + dVar28 +
               (double)CONCAT44(uStack_294,local_298);
    dStack_290 = (dVar22 * dStack_2b0 - dVar22 * dStack_2b0) + dStack_2b0 * dVar22 + dVar15 +
                 dStack_290;
  }
  else {
    dVar15 = dStack_2c0 + dStack_2c0;
    dVar18 = local_2b8 + local_2b8;
    dVar28 = local_2c8 * (local_2c8 + local_2c8);
    local_178 = (1.0 - (dVar28 + dStack_2c0 * dVar15)) * dVar8;
    dVar22 = (local_2c8 + local_2c8) * dStack_2b0;
    local_188 = (dVar15 * dStack_2b0 + local_2c8 * dVar18) * dVar8;
    dStack_180 = (dVar18 * dStack_2c0 - dVar22) * dVar8;
    local_1c8 = ((double)DAT_149934d80 - (local_2b8 * dVar18 + dStack_2c0 * dVar15)) * dVar10;
    dVar28 = (DAT_149934d80._8_8_ - (local_2b8 * dVar18 + dVar28)) * dVar1;
    dStack_1c0 = (dVar15 * local_2c8 + dVar18 * dStack_2b0) * dVar10;
    local_198 = (dVar18 * dStack_2c0 + dVar22) * dVar1;
    local_1b8 = (local_2c8 * dVar18 - dVar15 * dStack_2b0) * dVar10;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar28,0);
    local_1a8._0_8_ = (dVar15 * local_2c8 - dVar18 * dStack_2b0) * dVar1;
    local_1a8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = local_2a8;
    dStack_160 = dStack_2a0;
    local_158 = local_298;
    uStack_154 = uStack_294;
    uStack_150 = 0;
    uStack_14c = 0x3ff00000;
    dVar18 = *param_3;
    dVar22 = param_3[1];
    dVar11 = param_3[2];
    dVar17 = dVar22 + dVar22;
    dVar19 = dVar11 + dVar11;
    dVar15 = dVar18 * (dVar18 + dVar18);
    local_1f8 = (1.0 - (dVar15 + dVar22 * dVar17)) * dVar21;
    dVar28 = param_3[3];
    dVar20 = dVar19 * dVar28;
    dVar23 = (dVar18 + dVar18) * param_3[3];
    dVar28 = dVar17 * dVar28;
    local_208 = (dVar28 + *param_3 * dVar19) * dVar21;
    local_228 = (dVar17 * dVar18 - dVar20) * dVar7;
    dStack_200 = (dVar19 * dVar22 - dVar23) * dVar21;
    local_248 = ((double)DAT_149934d80 - (dVar11 * dVar19 + dVar22 * dVar17)) * dVar24;
    dStack_220 = (DAT_149934d80._8_8_ - (dVar11 * dVar19 + dVar15)) * dVar7;
    dStack_240 = (dVar17 * dVar18 + dVar20) * dVar24;
    local_218 = (dVar19 * dVar22 + dVar23) * dVar7;
    local_238 = (*param_3 * dVar19 - dVar28) * dVar24;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_3[4];
    dStack_1e0 = param_3[5];
    local_1d8 = param_3[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar1 * dVar7);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar10 * dVar24);
    auVar12 = blendvpd(_DAT_149936790,auVar25,auVar16);
    uVar6 = -(ulonglong)(0.0 <= dVar8 * dVar21);
    dVar28 = (double)(~uVar6 & 0xbff0000000000000 | uVar6 & 0x3ff0000000000000);
    dVar15 = auVar12._0_8_;
    local_138 = local_138 * dVar15;
    dStack_140 = dStack_140 * dVar15;
    local_148 = local_148 * dVar15;
    dVar15 = auVar12._8_8_;
    local_118 = local_118 * dVar15;
    local_120 = local_120 * dVar15;
    local_128 = dVar15 * local_128;
    local_f8 = local_f8 * dVar28;
    local_100 = local_100 * dVar28;
    local_108 = dVar28 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar28 = local_258 * local_258 + local_268 * local_268;
    dVar15 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar14._0_8_ = dVar28 + dVar15;
    auVar14._8_8_ = dVar28 + dVar15;
    auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
    auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
    auVar12 = sqrtpd(auVar14,auVar14);
    auVar12 = divpd(auVar25,auVar12);
    auVar26._0_8_ = auVar12._0_8_ * local_258;
    auVar26._8_8_ = auVar12._8_8_ * dStack_250;
    dVar19 = (double)((ulonglong)(local_268 * auVar12._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_));
    dVar20 = (double)((ulonglong)(dStack_260 * auVar12._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_));
    auVar25 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar9);
    dStack_290 = 0.0;
  }
  dVar10 = dVar10 * dVar24;
  if (*param_2 == 2) {
    dVar10 = dVar10 * (double)(float)param_2[1];
    local_138 = local_d8;
  }
  else {
    local_350 = (double)(float)param_2[1] * dVar10;
    fVar27 = (float)param_2[2] - (float)param_2[1];
    dVar10 = dVar10 * 0.0;
    dVar15 = dVar1 * dVar7 * 0.0;
    dVar18 = (double)fVar27 * dVar8 * dVar21;
    dVar22 = auVar25._0_8_;
    dVar11 = auVar25._8_8_;
    dVar1 = dVar10 * dVar22 - dVar19 * dVar18;
    dVar7 = dVar15 * dVar19 - dVar20 * dVar10;
    dVar28 = dVar18 * dVar20 - dVar22 * dVar15;
    dVar28 = dVar28 + dVar28;
    dVar1 = dVar1 + dVar1;
    dVar7 = dVar7 + dVar7;
    dVar17 = (double)-fVar27 * dVar8 * dVar21;
    dVar21 = dVar10 * dVar22 - dVar19 * dVar17;
    dVar8 = dVar15 * dVar19 - dVar20 * dVar10;
    dVar23 = dVar17 * dVar20 - dVar22 * dVar15;
    dVar23 = dVar23 + dVar23;
    dVar21 = dVar21 + dVar21;
    dVar8 = dVar8 + dVar8;
    dVar24 = (dVar22 * dVar28 - dVar19 * dVar7) + dVar11 * dVar1 + dVar15 + dStack_e0;
    local_328 = dVar7 * dVar11 + dVar18 + (dVar1 * dVar19 - dVar28 * dVar20) + local_d8;
    dStack_e0 = (dVar22 * dVar23 - dVar19 * dVar8) + dVar11 * dVar21 + dVar15 + dStack_e0;
    local_2d0 = *(double *)(param_5 + 0x60) + *(double *)(param_5 + 0x78);
    local_2d8 = *(double *)(param_5 + 0x58) + *(double *)(param_5 + 0x70);
    local_2e0 = *(double *)(param_5 + 0x50) + *(double *)(param_5 + 0x68);
    local_308 = dVar8 * dVar11 + dVar17 + (dVar21 * dVar19 - dVar23 * dVar20) + local_d8;
    local_2f8 = *(undefined8 *)(param_5 + 0x50);
    uStack_2f0 = *(undefined8 *)(param_5 + 0x58);
    local_2e8 = *(undefined8 *)(param_5 + 0x60);
    local_318._8_4_ = SUB84(dStack_e0,0);
    local_318._0_8_ = (dVar8 * dVar20 - dVar21 * dVar22) + dVar11 * dVar23 + dVar10 + local_e8;
    local_318._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
    local_338._8_4_ = SUB84(dVar24,0);
    local_338._0_8_ = (dVar7 * dVar20 - dVar1 * dVar22) + dVar11 * dVar28 + dVar10 + local_e8;
    local_338._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    local_360 = &local_1c8;
    local_368 = &local_148;
    local_348 = local_d8;
    dStack_340 = dStack_290;
    FUN_1467f7b70();
    local_e8 = local_148;
    dStack_e0 = dStack_140;
    dVar10 = local_350;
  }
  local_e8 = local_e8 * *(double *)(param_5 + 0x120);
  dStack_e0 = dStack_e0 * *(double *)(param_5 + 0x128);
  local_138 = local_138 * *(double *)(param_5 + 0x130);
  dVar21 = *(double *)(param_5 + 0xe0);
  dVar1 = *(double *)(param_5 + 0xe8);
  dVar7 = *(double *)(param_5 + 0xf0);
  dVar8 = *(double *)(param_5 + 0xf8);
  dVar28 = dStack_e0 * dVar21 - local_e8 * dVar1;
  dVar15 = local_138 * dVar1 - dStack_e0 * dVar7;
  dVar24 = local_e8 * dVar7 - dVar21 * local_138;
  dVar15 = dVar15 + dVar15;
  dVar24 = dVar24 + dVar24;
  dVar28 = dVar28 + dVar28;
  local_148 = (dVar28 * dVar1 - dVar24 * dVar7) + dVar8 * dVar15 + local_e8 +
              *(double *)(param_5 + 0x100);
  dStack_140 = (dVar7 * dVar15 - dVar21 * dVar28) + *(double *)(param_5 + 0xf8) * dVar24 + dStack_e0
               + *(double *)(param_5 + 0x108);
  local_138 = dVar28 * dVar8 + local_138 + (dVar24 * dVar21 - dVar15 * dVar1) +
              *(double *)(param_5 + 0x110);
  dVar8 = (double)(float)dVar10;
  uVar4 = 0;
  if (0.0 <= local_148 + dVar8) {
    if (local_148 - dVar8 <= (double)*(float *)(param_5 + 0x170)) {
      local_368 = (double *)CONCAT44(local_368._4_4_,*(undefined4 *)(param_5 + 0x168));
      uVar4 = FUN_140386b70(&local_148,(float)dVar10,&DAT_14c8462d8,*(undefined4 *)(param_5 + 0x16c)
                           );
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148819a42 FUN_148819a42 body=519 status=ok
// SIG undefined FUN_148819a42(void)

void FUN_148819a42(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar4 = FUN_14485cccc(param_2 + 0xc0);
  if (lVar4 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x1c8);
    if (lVar4 == 0) {
      pdVar5 = (double *)&DAT_14c8464e0;
      dVar6 = DAT_14c8464f0;
    }
    else {
      pdVar5 = (double *)(lVar4 + 0x260);
      dVar6 = *(double *)(lVar4 + 0x270);
    }
    dVar9 = *pdVar5 * *(double *)(param_4 + 0xc0);
    dVar10 = pdVar5[1] * *(double *)(param_4 + 200);
    dVar6 = dVar6 * *(double *)(param_4 + 0xd0);
    dVar2 = *(double *)(param_4 + 0x80);
    dVar3 = *(double *)(param_4 + 0x88);
    dVar8 = *(double *)(param_4 + 0x90);
    dVar1 = *(double *)(param_4 + 0x98);
    dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
    dVar12 = dVar6 * dVar3 - dVar10 * dVar8;
    dVar13 = dVar9 * dVar8 - dVar2 * dVar6;
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar13 + dVar13;
    dVar11 = dVar11 + dVar11;
    dVar9 = (dVar11 * dVar3 - dVar13 * dVar8) + dVar1 * dVar12 + dVar9 + *(double *)(param_4 + 0xa0)
    ;
    dVar8 = (dVar8 * dVar12 - dVar2 * dVar11) + *(double *)(param_4 + 0x98) * dVar13 + dVar10 +
            *(double *)(param_4 + 0xa8);
    if (*(char *)(param_1 + 0x138) == '\x01') {
      fVar7 = *(float *)(param_4 + 8) + *(float *)(param_4 + 8);
    }
    else {
      dVar6 = dVar6 + dVar1 * dVar11 + (dVar13 * dVar2 - dVar12 * dVar3) +
              *(double *)(param_4 + 0xb0);
      fVar7 = *(float *)(param_4 + 8);
      if (*(float *)(param_4 + 8) <= *(float *)(param_4 + 0xc)) {
        fVar7 = *(float *)(param_4 + 0xc);
      }
      if (fVar7 <= *(float *)(param_4 + 0x10)) {
        fVar7 = *(float *)(param_4 + 0x10);
      }
      dVar9 = SQRT(dVar6 * dVar6 + dVar9 * dVar9 + dVar8 * dVar8);
    }
    dVar9 = dVar9 / (double)fVar7;
    if (1.0 <= dVar9) {
      dVar9 = 1.0;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    FUN_146206072((float)dVar9,*(undefined8 *)(param_3 + 0x40));
    return;
  }
  return;
}



// FUNCTION 148819c49 FUN_148819c49 body=3400 status=ok
// SIG undefined FUN_148819c49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148819c49(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  double dStack_2a0;
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
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
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
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  uVar3 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_2d8,*param_4,0);
  auVar31 = _DAT_149934d80;
  dVar11 = local_298._0_8_;
  dVar2 = local_298._8_8_;
  dVar1 = local_288._0_8_;
  auVar13 = *(undefined1 (*) [16])(param_3 + 8);
  dVar17 = auVar13._0_8_;
  dVar29 = auVar13._8_8_;
  dVar9 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar13 = minpd(auVar13,local_298);
  auVar18 = minpd(*(undefined1 (*) [16])(param_3 + 10),local_288);
  auVar14._8_8_ = -(ulonglong)(auVar13._8_8_ < 0.0);
  auVar14._0_8_ = -(ulonglong)(auVar13._0_8_ < 0.0);
  iVar4 = movmskpd(uVar3,auVar14);
  auVar13._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
  auVar13._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
  uVar5 = movmskpd((int)param_1,auVar13);
  if ((uVar5 & 0x3fffffff) == 0 && iVar4 == 0) {
    dVar16 = *param_3;
    dVar20 = param_3[1];
    dVar24 = param_3[2];
    dVar27 = param_3[3];
    dVar19 = dVar20 * local_2c8 * -1.0 +
             dVar24 * dStack_2d0 + dVar27 * local_2d8 * 1.0 + dVar16 * dStack_2c0;
    dVar21 = dVar16 * local_2c8 * 1.0 +
             dVar27 * dStack_2d0 + dVar24 * local_2d8 * -1.0 + dVar20 * dStack_2c0;
    auVar31._0_8_ =
         dVar27 * local_2c8 * 1.0 +
         ((local_2d8 * dVar20 * 1.0 + dVar24 * dStack_2c0) - dVar16 * dStack_2d0);
    auVar31._8_8_ =
         dVar24 * local_2c8 * -1.0 +
         ((local_2d8 * dVar16 * -1.0 + dVar27 * dStack_2c0) - dVar20 * dStack_2d0);
    dVar22 = param_3[4] * dVar11;
    dVar25 = param_3[5] * dVar2;
    dVar28 = param_3[6] * dVar1;
    dVar8 = param_3[7] * local_288._8_8_;
    dVar24 = dVar25 * local_2d8 - dStack_2d0 * dVar22;
    dVar27 = dVar28 * dStack_2d0 - local_2c8 * dVar25;
    dVar16 = dVar22 * local_2c8 - local_2d8 * dVar28;
    dVar20 = dVar8 * dStack_2c0 - dStack_2c0 * dVar8;
    dVar27 = dVar27 + dVar27;
    dVar16 = dVar16 + dVar16;
    dVar24 = dVar24 + dVar24;
    dVar20 = dVar20 + dVar20;
    local_f8 = (dVar24 * dStack_2d0 - local_2c8 * dVar16) + dStack_2c0 * dVar27 + dVar22 + local_2b8
    ;
    dStack_f0 = (dVar27 * local_2c8 - dVar24 * local_2d8) + dStack_2c0 * dVar16 + dVar25 +
                dStack_2b0;
    local_e8 = (dVar16 * local_2d8 - dStack_2d0 * dVar27) + dStack_2c0 * dVar24 + dVar28 +
               (double)CONCAT44(uStack_2a4,local_2a8);
    dStack_2a0 = (dVar20 * dStack_2c0 - dVar20 * dStack_2c0) + dStack_2c0 * dVar20 + dVar8 +
                 dStack_2a0;
  }
  else {
    dVar16 = dStack_2d0 + dStack_2d0;
    dVar20 = local_2c8 + local_2c8;
    dVar27 = local_2d8 * (local_2d8 + local_2d8);
    local_188 = (1.0 - (dVar27 + dStack_2d0 * dVar16)) * dVar1;
    dVar24 = (local_2d8 + local_2d8) * dStack_2c0;
    local_198 = (dVar16 * dStack_2c0 + local_2d8 * dVar20) * dVar1;
    local_1b8 = (dVar16 * local_2d8 - dVar20 * dStack_2c0) * dVar2;
    dStack_190 = (dVar20 * dStack_2d0 - dVar24) * dVar1;
    dStack_1b0 = (DAT_149934d80._8_8_ - (local_2c8 * dVar20 + dVar27)) * dVar2;
    local_1a8 = (dVar20 * dStack_2d0 + dVar24) * dVar2;
    local_1c8 = (local_2d8 * dVar20 - dVar16 * dStack_2c0) * dVar11;
    local_1d8._8_8_ = (dVar16 * local_2d8 + dVar20 * dStack_2c0) * dVar11;
    local_1d8._0_8_ = ((double)DAT_149934d80 - (local_2c8 * dVar20 + dStack_2d0 * dVar16)) * dVar11;
    dStack_1c0 = 0.0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_2b8;
    dStack_170 = dStack_2b0;
    local_168 = local_2a8;
    uStack_164 = uStack_2a4;
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    dVar20 = *param_3;
    dVar24 = param_3[1];
    dVar27 = param_3[2];
    dVar19 = dVar24 + dVar24;
    dVar21 = dVar27 + dVar27;
    dVar28 = dVar20 * (dVar20 + dVar20);
    local_208 = (1.0 - (dVar28 + dVar24 * dVar19)) * dVar9;
    dVar16 = param_3[3];
    dVar22 = dVar21 * dVar16;
    dVar25 = (dVar20 + dVar20) * param_3[3];
    dVar16 = dVar19 * dVar16;
    local_218 = (dVar16 + *param_3 * dVar21) * dVar9;
    local_238 = (dVar19 * dVar20 - dVar22) * dVar29;
    dStack_210 = (dVar21 * dVar24 - dVar25) * dVar9;
    local_258 = ((double)DAT_149934d80 - (dVar27 * dVar21 + dVar24 * dVar19)) * dVar17;
    dStack_230 = (DAT_149934d80._8_8_ - (dVar27 * dVar21 + dVar28)) * dVar29;
    dStack_250 = (dVar19 * dVar20 + dVar22) * dVar17;
    local_228 = (dVar21 * dVar24 + dVar25) * dVar29;
    local_248 = (*param_3 * dVar21 - dVar16) * dVar17;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_3[4];
    dStack_1f0 = param_3[5];
    local_1e8 = param_3[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar18._8_8_ = -(ulonglong)(0.0 <= dVar2 * dVar29);
    auVar18._0_8_ = -(ulonglong)(0.0 <= dVar11 * dVar17);
    auVar13 = blendvpd(_DAT_149936790,auVar31,auVar18);
    uVar6 = -(ulonglong)(0.0 <= dVar1 * dVar9);
    dVar16 = (double)(~uVar6 & 0xbff0000000000000 | uVar6 & 0x3ff0000000000000);
    dVar20 = auVar13._0_8_;
    local_148 = local_148 * dVar20;
    local_150 = local_150 * dVar20;
    local_158 = local_158 * dVar20;
    dVar20 = auVar13._8_8_;
    local_128 = local_128 * dVar20;
    local_130 = local_130 * dVar20;
    local_138 = dVar20 * local_138;
    local_108 = local_108 * dVar16;
    local_110 = local_110 * dVar16;
    local_118 = dVar16 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar16 = local_268 * local_268 + local_278 * local_278;
    dVar20 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar15._0_8_ = dVar16 + dVar20;
    auVar15._8_8_ = dVar16 + dVar20;
    auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
    auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
    auVar13 = sqrtpd(auVar15,auVar15);
    auVar13 = divpd(auVar31,auVar13);
    auVar26._0_8_ = auVar13._0_8_ * local_268;
    auVar26._8_8_ = auVar13._8_8_ * dStack_260;
    dVar19 = (double)((ulonglong)(local_278 * auVar13._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_));
    dVar21 = (double)((ulonglong)(dStack_270 * auVar13._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_));
    auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar10);
    dStack_2a0 = 0.0;
  }
  dVar11 = dVar11 * dVar17;
  local_130 = DAT_14c8464f0 + (double)*(float *)(param_5 + 0x10);
  local_138 = DAT_14c8464e8 + (double)*(float *)(param_5 + 0xc);
  local_140 = DAT_14c8464e0 + (double)*(float *)(param_5 + 8);
  local_148 = DAT_14c8464f0 - (double)*(float *)(param_5 + 0x10);
  local_150 = DAT_14c8464e8 - (double)*(float *)(param_5 + 0xc);
  local_158 = DAT_14c8464e0 - (double)*(float *)(param_5 + 8);
  local_128 = (double)CONCAT71(local_128._1_7_,1);
  if (*param_2 == 2) {
    local_f8 = local_f8 * *(double *)(param_5 + 0x120);
    dStack_f0 = dStack_f0 * *(double *)(param_5 + 0x128);
    local_e8 = local_e8 * *(double *)(param_5 + 0x130);
    dVar2 = *(double *)(param_5 + 0xe0);
    dVar29 = *(double *)(param_5 + 0xe8);
    dVar16 = *(double *)(param_5 + 0xf0);
    dVar1 = *(double *)(param_5 + 0xf8);
    dVar20 = dStack_f0 * dVar2 - local_f8 * dVar29;
    dVar24 = local_e8 * dVar29 - dStack_f0 * dVar16;
    dVar17 = local_f8 * dVar16 - dVar2 * local_e8;
    dVar24 = dVar24 + dVar24;
    dVar17 = dVar17 + dVar17;
    dVar20 = dVar20 + dVar20;
    dVar9 = (dVar16 * dVar24 - dVar2 * dVar20) + *(double *)(param_5 + 0xf8) * dVar17 + dStack_f0 +
            *(double *)(param_5 + 0x108);
    local_1c8 = dVar20 * dVar1 + local_e8 + (dVar17 * dVar2 - dVar24 * dVar29) +
                *(double *)(param_5 + 0x110);
    dStack_1c0 = (double)(float)(dVar11 * (double)(float)param_2[1]);
    local_1d8._8_4_ = SUB84(dVar9,0);
    local_1d8._0_8_ =
         (dVar20 * dVar29 - dVar17 * dVar16) + dVar1 * dVar24 + local_f8 +
         *(double *)(param_5 + 0x100);
    local_1d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    FUN_147dbab2a(local_1d8,dStack_1c0 * dStack_1c0,&local_158);
  }
  else {
    local_2f8 = (double)(float)param_2[1] * dVar11;
    fVar7 = (float)param_2[2] - (float)param_2[1];
    dVar11 = dVar11 * 0.0;
    dVar12 = dVar2 * dVar29 * 0.0;
    dVar24 = (double)fVar7 * dVar1 * dVar9;
    dVar32 = auVar31._8_8_;
    dVar30 = auVar31._0_8_;
    dVar29 = dVar11 * dVar30 - dVar19 * dVar24;
    dVar17 = dVar12 * dVar19 - dVar21 * dVar11;
    dVar2 = dVar24 * dVar21 - dVar30 * dVar12;
    dVar17 = dVar17 + dVar17;
    local_2e8._8_4_ = SUB84(dStack_2a0,0);
    local_2e8._0_8_ = local_e8;
    local_2e8._12_4_ = (int)((ulonglong)dStack_2a0 >> 0x20);
    dVar2 = dVar2 + dVar2;
    dVar29 = dVar29 + dVar29;
    dVar8 = (double)-fVar7 * dVar1 * dVar9;
    dVar20 = dVar11 * dVar30 - dVar19 * dVar8;
    dVar9 = dVar12 * dVar19 - dVar21 * dVar11;
    dVar16 = dVar8 * dVar21 - dVar30 * dVar12;
    dVar16 = dVar16 + dVar16;
    dVar20 = dVar20 + dVar20;
    dVar9 = dVar9 + dVar9;
    dVar33 = ((dVar17 * dVar21 - dVar29 * dVar30) + dVar32 * dVar2 + dVar11 + local_f8) *
             *(double *)(param_5 + 0x120);
    dVar34 = ((dVar30 * dVar2 - dVar17 * dVar19) + dVar32 * dVar29 + dVar12 + dStack_f0) *
             *(double *)(param_5 + 0x128);
    dVar23 = (dVar32 * dVar17 + dVar24 + (dVar29 * dVar19 - dVar2 * dVar21) + local_e8) *
             *(double *)(param_5 + 0x130);
    dVar22 = *(double *)(param_5 + 0xe0);
    dVar25 = *(double *)(param_5 + 0xe8);
    dVar28 = *(double *)(param_5 + 0xf0);
    dVar2 = dVar34 * dVar22 - dVar25 * dVar33;
    dVar24 = dVar23 * dVar25 - dVar28 * dVar34;
    dVar27 = dVar33 * dVar28 - dVar22 * dVar23;
    dVar24 = dVar24 + dVar24;
    dVar27 = dVar27 + dVar27;
    dVar1 = *(double *)(param_5 + 0xf8);
    dVar17 = *(double *)(param_5 + 0xf8);
    dVar2 = dVar2 + dVar2;
    dVar11 = ((dVar9 * dVar21 - dVar20 * dVar30) + dVar32 * dVar16 + dVar11 + local_f8) *
             *(double *)(param_5 + 0x120);
    dVar29 = ((dVar30 * dVar16 - dVar9 * dVar19) + dVar32 * dVar20 + dVar12 + dStack_f0) *
             *(double *)(param_5 + 0x128);
    dVar9 = (dVar32 * dVar9 + dVar8 + (dVar20 * dVar19 - dVar16 * dVar21) + local_e8) *
            *(double *)(param_5 + 0x130);
    dVar20 = dVar29 * dVar22 - dVar25 * dVar11;
    dVar19 = dVar9 * dVar25 - dVar28 * dVar29;
    dVar16 = dVar11 * dVar28 - dVar22 * dVar9;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar20 = dVar20 + dVar20;
    local_1d8._0_8_ =
         (dVar2 * dVar25 - dVar27 * dVar28) + dVar1 * dVar24 + dVar33 + *(double *)(param_5 + 0x100)
    ;
    local_1d8._8_8_ =
         (dVar28 * dVar24 - dVar22 * dVar2) + dVar17 * dVar27 + dVar34 +
         *(double *)(param_5 + 0x108);
    local_258 = (dVar20 * dVar25 - dVar16 * dVar28) + dVar1 * dVar19 + dVar11 +
                *(double *)(param_5 + 0x100);
    dStack_250 = (dVar28 * dVar19 - dVar22 * dVar20) + dVar17 * dVar16 + dVar29 +
                 *(double *)(param_5 + 0x108);
    local_1c8 = dVar2 * dVar1 + dVar23 + (dVar27 * dVar22 - dVar24 * dVar25) +
                *(double *)(param_5 + 0x110);
    local_248 = dVar20 * dVar1 + dVar9 + (dVar16 * dVar22 - dVar19 * dVar25) +
                *(double *)(param_5 + 0x110);
    dVar11 = (double)(float)local_2f8;
    local_2c8 = local_248 - local_1c8;
    local_2d8 = local_258 - (double)local_1d8._0_8_;
    dStack_2d0 = dStack_250 - (double)local_1d8._8_8_;
    local_128 = (double)CONCAT71(local_128._1_7_,1);
    local_328 = 0;
    local_320 = local_148;
    local_318 = local_130;
    local_310 = local_140;
    local_308 = local_150;
    local_300 = local_138;
    local_2f0 = local_158;
    local_158 = local_158 - dVar11;
    local_150 = local_150 - dVar11;
    local_148 = local_148 - dVar11;
    local_140 = local_140 + dVar11;
    local_138 = local_138 + dVar11;
    local_130 = local_130 + dVar11;
    FUN_144a3f41e();
  }
  if ((local_d0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881a9ea FUN_14881a9ea body=1527 status=ok
// SIG undefined FUN_14881a9ea(void)

void FUN_14881a9ea(longlong *param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 ****ppppuVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_100;
  undefined8 ***local_f8 [3];
  ushort local_e0;
  byte local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar1 = *param_6;
  FUN_144a76660(param_5,&local_140);
  local_128 = 0;
  local_100 = 0;
  FUN_1456bb102(&local_128,uVar1);
  FUN_1448729ea(param_1 + 9,local_f8,&local_128);
  fVar20 = (float)FUN_144a7b41a(local_f8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar19 = local_f8;
    if (0x18 < local_e0) {
      ppppuVar19 = (undefined8 ****)local_f8[0];
    }
    (*pcVar2)(ppppuVar19);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8[0]);
  }
  FUN_144a5ac3a(&local_128);
  local_128 = 0;
  local_100 = 0;
  FUN_1456bb102(&local_128,uVar1);
  FUN_1448729ea(param_1 + 0x1d,local_f8,&local_128);
  fVar21 = (float)FUN_144a7b41a(local_f8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar19 = local_f8;
    if (0x18 < local_e0) {
      ppppuVar19 = (undefined8 ****)local_f8[0];
    }
    (*pcVar2)(ppppuVar19);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8[0]);
  }
  FUN_144a5ac3a(&local_128);
  local_128 = 0;
  local_100 = 0;
  FUN_1456bb102(&local_128,uVar1);
  FUN_1448729ea(param_1 + 0x13,local_f8,&local_128);
  fVar22 = (float)FUN_144a7b41a(local_f8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar19 = local_f8;
    if (0x18 < local_e0) {
      ppppuVar19 = (undefined8 ****)local_f8[0];
    }
    (*pcVar2)(ppppuVar19);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8[0]);
  }
  FUN_144a5ac3a(&local_128);
  if (param_8 != 0) {
    if (*(char *)(param_8 + 0x7c) == '\x01') {
      fVar21 = *(float *)(param_8 + 0x78);
    }
    if (*(char *)(param_8 + 0x98) == '\x01') {
      fVar23 = fVar21;
      if (*(char *)(param_8 + 0x7c) == '\0') {
        fVar23 = (float)*(double *)(param_8 + 0x80);
      }
      if (*(double *)(param_8 + 0x80) <= 0.0) {
        fVar23 = fVar21;
      }
      if (0.0 < *(double *)(param_8 + 0x88)) {
        fVar20 = (float)*(double *)(param_8 + 0x88);
      }
      fVar21 = fVar23;
      if (0.0 < *(double *)(param_8 + 0x90)) {
        fVar22 = (float)*(double *)(param_8 + 0x90);
      }
    }
  }
  if ((char)param_1[0x27] == '\x01') {
    fVar22 = fVar20 * 1.7320508 * 0.5;
  }
  fVar22 = fVar22 * 0.5;
  fVar23 = fVar21 * 0.5;
  dVar24 = (double)fVar23;
  *param_2 = 8;
  param_2[1] = param_2[1] & 0xfe;
  *(undefined4 *)(param_2 + 4) = 1;
  *(float *)(param_2 + 8) = fVar23;
  *(float *)(param_2 + 0xc) = fVar20 * 0.5;
  *(float *)(param_2 + 0x10) = fVar22;
  *(float *)(param_2 + 0x164) = fVar23;
  *(float *)(param_2 + 0x1a4) = fVar21;
  param_2[0x1a8] = (char)param_1[0x27];
  *(double *)(param_2 + 0x30) = param_4[2];
  dVar3 = param_4[1];
  *(double *)(param_2 + 0x20) = *param_4;
  *(double *)(param_2 + 0x28) = dVar3;
  *(double *)(param_2 + 0x20) = dVar24 * local_140 + *(double *)(param_2 + 0x20);
  *(double *)(param_2 + 0x28) = local_138 * dVar24 + *(double *)(param_2 + 0x28);
  *(double *)(param_2 + 0x30) = local_130 * dVar24 + *(double *)(param_2 + 0x30);
  dVar3 = (double)fVar21;
  *(double *)(param_2 + 0x68) = local_140 * dVar3;
  *(double *)(param_2 + 0x70) = local_138 * dVar3;
  *(double *)(param_2 + 0x78) = local_130 * dVar3;
  uVar1 = param_5[1];
  *(undefined8 *)(param_2 + 0x38) = *param_5;
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x48) = param_5[2];
  uVar11 = *(undefined4 *)((longlong)param_4 + 4);
  uVar12 = *(undefined4 *)(param_4 + 1);
  uVar13 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)param_4;
  *(undefined4 *)(param_2 + 0x54) = uVar11;
  *(undefined4 *)(param_2 + 0x58) = uVar12;
  *(undefined4 *)(param_2 + 0x5c) = uVar13;
  *(double *)(param_2 + 0x60) = param_4[2];
  FUN_144a7484c(param_5,&local_128);
  dVar14 = *param_4;
  dVar15 = param_4[1];
  local_118 = local_118 * -1.0;
  dStack_110 = dStack_110 * 1.0;
  dVar25 = param_4[2] * 1.0;
  dVar3 = *param_4;
  dVar24 = -(double)CONCAT71(uStack_127,local_128);
  dVar6 = -dStack_120;
  auVar4._8_4_ = SUB84(dStack_120,0);
  auVar4._0_8_ = dVar24;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x80) = auVar4;
  auVar7._8_4_ = SUB84(dStack_110,0);
  auVar7._0_8_ = local_118;
  auVar7._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x90) = auVar7;
  dVar9 = dVar15 * dVar24 - dVar6 * dVar14;
  dVar10 = dVar25 * dVar6 - local_118 * dVar15;
  dVar8 = dVar3 * local_118 - dVar24 * dVar25;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar3 = 0.0 - (dVar9 * (double)CONCAT71(uStack_127,local_128) + local_118 * dVar10 +
                dStack_110 * dVar8 + dVar15);
  auVar5._8_4_ = SUB84(dVar3,0);
  auVar5._0_8_ = 0.0 - ((dVar9 * dVar6 - dVar8 * local_118) + dStack_110 * dVar10 + dVar14);
  auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0xa0) = auVar5;
  *(double *)(param_2 + 0xb0) =
       0.0 - (dStack_110 * dVar9 + dVar25 + (dVar8 * dVar24 - dVar10 * dVar6));
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  puVar17 = (undefined8 *)(param_2 + 0x80);
  puVar18 = (undefined8 *)(param_2 + 0xe0);
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2,fVar22 + fVar22,fVar20);
  if ((local_d0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14881afe3 FUN_14881afe3 body=774 status=ok
// SIG undefined FUN_14881afe3(void)

undefined8 FUN_14881afe3(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar10 = (undefined8 *)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 600) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 600);
  }
  if ((longlong)*(int *)(param_1 + 0x260) != 0) {
    puVar1 = puVar10 + (longlong)*(int *)(param_1 + 0x260) * 9;
    do {
      local_d8 = *puVar10;
      local_d0 = puVar10[1];
      uStack_c8 = puVar10[2];
      local_c0 = *(undefined4 *)(puVar10 + 3);
      local_bc = *(undefined1 *)((longlong)puVar10 + 0x1c);
      local_98 = *(undefined1 *)(puVar10 + 8);
      local_b8 = *(undefined4 *)(puVar10 + 4);
      uStack_b4 = *(undefined4 *)((longlong)puVar10 + 0x24);
      uStack_b0 = *(undefined4 *)(puVar10 + 5);
      uStack_ac = *(undefined4 *)((longlong)puVar10 + 0x2c);
      local_a8 = *(undefined4 *)(puVar10 + 6);
      uStack_a4 = *(undefined4 *)((longlong)puVar10 + 0x34);
      uStack_a0 = *(undefined4 *)(puVar10 + 7);
      uStack_9c = *(undefined4 *)((longlong)puVar10 + 0x3c);
      lVar8 = FUN_14479d2ce(&local_b8);
      if (lVar8 != 0) {
        dVar13 = *(double *)(lVar8 + 0x260) * *(double *)(param_2 + 0xc0);
        dVar14 = *(double *)(lVar8 + 0x268) * *(double *)(param_2 + 200);
        dVar3 = *(double *)(lVar8 + 0x270) * *(double *)(param_2 + 0xd0);
        dVar6 = *(double *)(param_2 + 0x80);
        dVar7 = *(double *)(param_2 + 0x88);
        dVar11 = *(double *)(param_2 + 0x90);
        dVar2 = *(double *)(param_2 + 0x98);
        dVar12 = dVar14 * dVar6 - dVar13 * dVar7;
        dVar4 = dVar3 * dVar7 - dVar14 * dVar11;
        dVar5 = dVar13 * dVar11 - dVar6 * dVar3;
        dVar4 = dVar4 + dVar4;
        dVar5 = dVar5 + dVar5;
        dVar12 = dVar12 + dVar12;
        dVar13 = (dVar12 * dVar7 - dVar5 * dVar11) + dVar2 * dVar4 + dVar13 +
                 *(double *)(param_2 + 0xa0);
        dVar11 = (dVar11 * dVar4 - dVar6 * dVar12) + *(double *)(param_2 + 0x98) * dVar5 + dVar14 +
                 *(double *)(param_2 + 0xa8);
        if ((0.0 <= dVar13) && (dVar13 <= (double)*(float *)(param_2 + 0x1a4))) {
          dVar2 = dVar3 + dVar2 * dVar12 + (dVar5 * dVar6 - dVar4 * dVar7) +
                  *(double *)(param_2 + 0xb0);
          if (((float)(((double)*(float *)(param_2 + 0x180) * dVar11 +
                       (double)*(float *)(param_2 + 0x184) * dVar2) -
                      (double)*(float *)(param_2 + 0x188)) <= 0.0) &&
             (((float)(((double)*(float *)(param_2 + 0x18c) * dVar11 +
                       (double)*(float *)(param_2 + 400) * dVar2) -
                      (double)*(float *)(param_2 + 0x194)) <= 0.0 &&
              ((float)(((double)*(float *)(param_2 + 0x198) * dVar11 +
                       dVar2 * (double)*(float *)(param_2 + 0x19c)) -
                      (double)*(float *)(param_2 + 0x1a0)) <= 0.0)))) {
            uVar9 = 1;
            goto LAB_14881b291;
          }
        }
      }
      puVar10 = puVar10 + 9;
    } while (puVar10 != puVar1);
  }
  uVar9 = 0;
LAB_14881b291:
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881b342 FUN_14881b342 body=812 status=ok
// SIG undefined FUN_14881b342(void)

void FUN_14881b342(undefined8 param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = param_3 / 3.0;
  fVar5 = param_3 * 0.6666667;
  fVar6 = fVar5 * 0.0;
  if (*(char *)(param_2 + 0x1a8) == '\0') {
    fVar2 = param_4 / 3.0;
    fVar4 = fVar2 * -0.0;
    fVar6 = fVar6 - fVar2;
    fVar5 = fVar5 + fVar4;
    fVar1 = param_4 * 0.6666667 * 0.0 - param_3 * 0.33333334;
    fVar3 = param_3 * 0.33333334 * -0.0 + param_4 * 0.6666667;
  }
  else {
    fVar2 = param_4 * 0.5;
    fVar4 = -(param_4 * 0.0);
    fVar1 = param_4 * 0.0 - fVar7;
    fVar3 = fVar2 - fVar7 * 0.0;
  }
  fVar4 = fVar4 - fVar7;
  fVar7 = -fVar2 - fVar7 * 0.0;
  *(float *)(param_2 + 0x168) = fVar7;
  *(float *)(param_2 + 0x16c) = fVar4;
  *(float *)(param_2 + 0x170) = fVar6;
  *(float *)(param_2 + 0x174) = fVar5;
  *(float *)(param_2 + 0x178) = fVar3;
  *(float *)(param_2 + 0x17c) = fVar1;
  fVar8 = fVar5 - fVar4;
  fVar9 = fVar6 - fVar7;
  fVar10 = fVar9 * fVar9 + fVar8 * fVar8;
  fVar2 = 0.0;
  if (1e-08 < fVar10) {
    fVar9 = fVar9 * (1.0 / SQRT(fVar10));
  }
  else {
    fVar9 = 0.0;
  }
  fVar8 = (float)(~-(uint)(1e-08 < fVar10) & 0x80000000 |
                 (uint)((1.0 / SQRT(fVar10)) * -fVar8) & -(uint)(1e-08 < fVar10));
  *(float *)(param_2 + 0x180) = fVar8;
  *(float *)(param_2 + 0x184) = fVar9;
  fVar11 = fVar1 - fVar5;
  fVar10 = fVar3 - fVar6;
  fVar12 = fVar10 * fVar10 + fVar11 * fVar11;
  *(float *)(param_2 + 0x188) = fVar8 * fVar7 + fVar9 * fVar4;
  if (1e-08 < fVar12) {
    fVar10 = fVar10 * (1.0 / SQRT(fVar12));
  }
  else {
    fVar10 = 0.0;
  }
  fVar8 = (float)(~-(uint)(1e-08 < fVar12) & 0x80000000 |
                 (uint)((1.0 / SQRT(fVar12)) * -fVar11) & -(uint)(1e-08 < fVar12));
  *(float *)(param_2 + 0x18c) = fVar8;
  *(float *)(param_2 + 400) = fVar10;
  *(float *)(param_2 + 0x194) = fVar6 * fVar8 + fVar5 * fVar10;
  fVar4 = fVar4 - fVar1;
  fVar7 = fVar7 - fVar3;
  fVar5 = fVar7 * fVar7 + fVar4 * fVar4;
  if (1e-08 < fVar5) {
    fVar2 = fVar7 * (1.0 / SQRT(fVar5));
  }
  fVar5 = (float)(~-(uint)(1e-08 < fVar5) & 0x80000000 |
                 (uint)((1.0 / SQRT(fVar5)) * -fVar4) & -(uint)(1e-08 < fVar5));
  *(float *)(param_2 + 0x198) = fVar5;
  *(float *)(param_2 + 0x19c) = fVar2;
  *(float *)(param_2 + 0x1a0) = fVar3 * fVar5 + fVar1 * fVar2;
  return;
}



// FUNCTION 14881b66e FUN_14881b66e body=421 status=ok
// SIG undefined FUN_14881b66e(void)

float FUN_14881b66e(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_138 [40];
  undefined1 local_110 [40];
  undefined4 local_e8;
  undefined8 **local_e0 [3];
  ushort local_c8;
  byte local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 **local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8);
  FUN_1448729ea(param_1 + 0x98,local_88,local_b8);
  fVar3 = (float)FUN_144a7b41a(local_88,0);
  local_110[0] = 0;
  local_e8 = 0;
  FUN_1456bb102(local_110,param_2);
  FUN_1448729ea(param_1 + 0x48,local_e0,local_110);
  fVar4 = (float)FUN_144a7b41a(local_e0,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_e0;
    if (0x18 < local_c8) {
      pppuVar2 = (undefined8 ***)local_e0[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0[0]);
  }
  FUN_144a5ac3a(local_110);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_88;
    if (0x18 < local_70) {
      pppuVar2 = (undefined8 ***)local_88[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  fVar5 = fVar4 * 0.5;
  if (fVar4 * 0.5 <= fVar3) {
    fVar5 = fVar3;
  }
  FUN_144a5ac3a(local_b8);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881b832 FUN_14881b832 body=464 status=ok
// SIG undefined FUN_14881b832(void)

float * FUN_14881b832(longlong param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [40];
  undefined8 ***local_50 [3];
  ushort local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0;
  plVar6 = (longlong *)FUN_1447262c2(param_4);
  if (plVar6 != (longlong *)0x0) {
    uVar7 = FUN_1403ec9c0();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_1403ec9c0();
      plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
      if (plVar8 != (longlong *)0x0 && plVar6 != plVar8) {
        lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar12 = (ulonglong)(*(char *)(param_1 + 8) != '\0') * 0x10;
        lVar13 = (longlong)*(int *)(lVar12 + 0x198 + lVar10);
        if (lVar13 != 0) {
          plVar6 = *(longlong **)(lVar12 + 400 + lVar10);
          lVar13 = lVar13 * 0x48;
          do {
            if (*plVar6 == param_3) {
              if (plVar6 != (longlong *)0x0) {
                fVar1 = *(float *)((longlong)plVar6 + 0x1c);
                fVar2 = *(float *)((longlong)plVar6 + 0x34);
                fVar3 = *(float *)(plVar6 + 5);
                fVar4 = *(float *)(plVar6 + 8);
                *(undefined2 *)(param_2 + 6) = 4;
                *param_2 = (float)(-(uint)(fVar3 < 0.0) & (uint)(1.0 / (1.0 - fVar3)) |
                                  ~-(uint)(fVar3 < 0.0) & (uint)(fVar3 + 1.0)) * fVar1 * fVar2 +
                           fVar4;
                *(undefined1 *)(param_2 + 8) = 3;
                uVar5 = 0;
                goto LAB_14881b8dd;
              }
              break;
            }
            plVar6 = plVar6 + 9;
            lVar13 = lVar13 + -0x48;
          } while (lVar13 != 0);
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  pcVar9 = DAT_14c9a85b8;
  if ((DAT_14c9a85b8 == (code *)0x0) && (pcVar9 = DAT_14c9a85b0, DAT_14c9a85b0 == (code *)0x0)) {
    memcpy(param_2,local_50,(longlong)DAT_14c9a8510);
  }
  else {
    (*pcVar9)(param_2,local_50);
  }
  *(undefined1 *)(param_2 + 8) = local_30;
  local_30 = 0;
  uVar5 = local_38;
LAB_14881b8dd:
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar11 = (undefined8 ****)local_50[0];
    if (uVar5 < 0x19) {
      ppppuVar11 = local_50;
    }
    (*DAT_14c9a85d0)(ppppuVar11);
    uVar5 = local_38;
  }
  if (0x18 < uVar5) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14881ba04 FUN_14881ba04 body=285 status=ok
// SIG undefined FUN_14881ba04(void)

void FUN_14881ba04(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *param_1 = lVar1;
  lVar1 = (**(code **)(*param_2 + 0x108))(param_2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[1] = lVar1;
  uVar2 = (**(code **)(*param_2 + 0xd8))(param_2);
  FUN_14118c70e(param_1 + 5,uVar2);
  uVar2 = (**(code **)(*param_2 + 0xe0))(param_2);
  FUN_144a79b68(&local_28,uVar2);
  if (param_1[2] != local_28) {
    param_1[4] = 0;
  }
  param_1[2] = local_28;
  lVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
  (**(code **)(param_1[0xd] + 0x20))(param_1 + 0xd,0);
  param_1[0xe] = *(longlong *)(lVar1 + 8);
  FUN_1406022fe(param_1 + 0xf,lVar1 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881bb2a FUN_14881bb2a body=226 status=ok
// SIG undefined FUN_14881bb2a(void)

void FUN_14881bb2a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_358 [784];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_1403dfaf8(local_358);
  local_378 = param_6;
  FUN_140a8c38c(param_1,local_358,param_3,param_5);
  local_368 = param_6;
  local_370 = param_5;
  local_378 = param_2;
  FUN_140a8af98(param_1,local_358,param_3,param_4);
  local_368 = param_7;
  local_370 = param_6;
  local_378 = param_5;
  (**(code **)(*param_1 + 0x40))(param_1,local_358,param_2,param_3);
  FUN_1403dfdc4(local_358);
  if ((local_48 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881bc0e FUN_14881bc0e body=258 status=ok
// SIG undefined FUN_14881bc0e(void)

ulonglong FUN_14881bc0e(char *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = CONCAT71((int7)(local_30 >> 8),1);
  if (*param_1 == '\x01') {
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88);
    FUN_1448729ea(param_1 + 8,local_58,local_88);
    fVar5 = (float)FUN_144a7b41a(local_58,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_58;
      if (0x18 < local_40) {
        pppuVar4 = (undefined8 ***)local_58[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
    uVar2 = rand();
    uVar3 = (ulonglong)
            CONCAT31((int3)((uVar2 & 0x7fff) >> 8),(float)(uVar2 & 0x7fff) / 32767.0 < fVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881bd12 FUN_14881bd12 body=267 status=ok
// SIG undefined FUN_14881bd12(void)

ulonglong FUN_14881bd12(char *param_1,undefined8 param_2,float *param_3,float *param_4)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = CONCAT71((int7)(local_30 >> 8),1);
  if (*param_1 == '\x01') {
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88);
    FUN_1448729ea(param_1 + 8,local_58,local_88);
    fVar5 = (float)FUN_144a7b41a(local_58,0);
    *param_3 = fVar5;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_58;
      if (0x18 < local_40) {
        pppuVar4 = (undefined8 ***)local_58[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
    uVar2 = rand();
    fVar5 = (float)(uVar2 & 0x7fff) / 32767.0;
    *param_4 = fVar5;
    uVar3 = (ulonglong)CONCAT31((int3)((uVar2 & 0x7fff) >> 8),fVar5 < *param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881be1e FUN_14881be1e body=87 status=ok
// SIG undefined FUN_14881be1e(void)

undefined8 FUN_14881be1e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 14881be76 FUN_14881be76 body=92 status=ok
// SIG undefined FUN_14881be76(void)

undefined8 FUN_14881be76(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *param_2;
  if (*(char *)(lVar5 + 8) == '\x01') {
    plVar6 = (longlong *)param_2[1];
    if (plVar6 == (longlong *)0x0) {
      if (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x10)) {
        return 1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      iVar4 = *(int *)(param_1 + 0x10);
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
      if (iVar3 == iVar4) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14881bed2 FUN_14881bed2 body=160 status=ok
// SIG undefined FUN_14881bed2(void)

undefined8 FUN_14881bed2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + -0x18);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%ls::FDamageManager",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14881bf82 FUN_14881bf82 body=145 status=ok
// SIG undefined FUN_14881bf82(void)

void FUN_14881bf82(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  if (((param_3 != 0) && (*param_2 != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x78), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (((param_4 == 0) || (*(longlong *)(lVar3 + 0x40) == param_4)) &&
         ((lVar4 = FUN_14479d2ce(lVar3 + 0x58), *param_2 == lVar4 &&
          (cVar5 = FUN_14069eaf4(lVar3 + 0x68,param_3), cVar5 != '\0')))) {
        FUN_14074668c(param_1,lVar3);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14881c014 FUN_14881c014 body=63 status=ok
// SIG undefined FUN_14881c014(void)

undefined8 * FUN_14881c014(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3f62d0;
  FUN_143ce8d30(param_1 + 0x1b);
  FUN_140333e92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881c06c FUN_14881c06c body=45 status=ok
// SIG undefined FUN_14881c06c(void)

longlong FUN_14881c06c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145a2caac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881c09a FUN_14881c09a body=57 status=ok
// SIG undefined FUN_14881c09a(void)

undefined8 * FUN_14881c09a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881c11c FUN_14881c11c body=61 status=ok
// SIG undefined FUN_14881c11c(void)

undefined8 * FUN_14881c11c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881c160 FUN_14881c160 body=45 status=ok
// SIG undefined FUN_14881c160(void)

longlong FUN_14881c160(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145d6171e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881c18e FUN_14881c18e body=45 status=ok
// SIG undefined FUN_14881c18e(void)

longlong FUN_14881c18e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145d6171e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881c1bc FUN_14881c1bc body=54 status=ok
// SIG undefined FUN_14881c1bc(void)

longlong FUN_14881c1bc(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 14881c1f2 FUN_14881c1f2 body=121 status=ok
// SIG undefined FUN_14881c1f2(void)

void FUN_14881c1f2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140bfb34a(param_1,iVar1);
    }
    FUN_14881c26c((longlong)iVar1 * 0x118 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14881c2d0(param_1,param_2,iVar1 - param_2);
    FUN_14881c332(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14881c26c FUN_14881c26c body=99 status=ok
// SIG undefined FUN_14881c26c(void)

void FUN_14881c26c(byte *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    memset(param_1 + 4,0,0x104);
    param_1[0xd8] = 0xff;
    param_1[0xd9] = 0xff;
    param_1[0xda] = 0xff;
    param_1[0xdb] = 0xff;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0x80;
    param_1[0xf] = 0x3f;
    param_1[0xac] = 0xff;
    param_1[0xad] = 0xff;
    param_1[0xae] = 0xff;
    param_1[0xaf] = 0xff;
    param_1[0x108] = 0;
    param_1[0x109] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    param_1[0x10e] = 0;
    param_1[0x10f] = 0;
    param_1[0x110] = 0;
    param_1[0x111] = 0;
    param_1[0x112] = 0;
    param_1[0x113] = 0;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    param_1[0x116] = 0;
    param_1[0x117] = 0;
    *param_1 = *param_1 & 0xf0;
    param_1 = param_1 + 0x118;
  }
  return;
}



// FUNCTION 14881c2d0 FUN_14881c2d0 body=98 status=ok
// SIG undefined FUN_14881c2d0(void)

void FUN_14881c2d0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x118 + *param_1);
  FUN_14121cbdb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x118 + (longlong)_Dst),(longlong)iVar2 * 0x118);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14881c332 FUN_14881c332 body=62 status=ok
// SIG undefined FUN_14881c332(void)

void FUN_14881c332(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14881c370(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x118,8);
  }
  return;
}



// FUNCTION 14881c370 FUN_14881c370 body=110 status=ok
// SIG undefined FUN_14881c370(void)

ulonglong FUN_14881c370(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x118) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14881c3a9;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x118,8);
      param_2 = param_2 / 0x118;
    }
  }
LAB_14881c3a9:
  return param_2 & 0xffffffff;
}



// FUNCTION 14881c3de FUN_14881c3de body=54 status=ok
// SIG undefined FUN_14881c3de(void)

longlong FUN_14881c3de(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 14881c414 FUN_14881c414 body=138 status=ok
// SIG undefined FUN_14881c414(void)

void FUN_14881c414(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_14074956a(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
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
                    /* WARNING: Could not recover jumptable at 0x00014881c485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14881c4a0 FUN_14881c4a0 body=61 status=ok
// SIG undefined FUN_14881c4a0(void)

longlong FUN_14881c4a0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_144a78b9e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14881c4de FUN_14881c4de body=45 status=ok
// SIG undefined FUN_14881c4de(void)

void FUN_14881c4de(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3f62d0;
  FUN_143ce8d30(param_1 + 0xe8);
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 14881c50c FUN_14881c50c body=29 status=ok
// SIG undefined FUN_14881c50c(void)

undefined8 FUN_14881c50c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881c52c FUN_14881c52c body=167 status=ok
// SIG undefined FUN_14881c52c(void)

void FUN_14881c52c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14881c5a7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14881c5a7;
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
LAB_14881c5a7:
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
                    /* WARNING: Could not recover jumptable at 0x00014881c5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14881c5d3 FUN_14881c5d3 body=51 status=ok
// SIG undefined FUN_14881c5d3(void)

void FUN_14881c5d3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14881c606 FUN_14881c606 body=143 status=ok
// SIG undefined FUN_14881c606(void)

void FUN_14881c606(longlong param_1,int param_2)

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



// FUNCTION 14881c6b0 FUN_14881c6b0 body=29 status=ok
// SIG undefined FUN_14881c6b0(void)

bool FUN_14881c6b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14881c6ce FUN_14881c6ce body=26 status=ok
// SIG undefined FUN_14881c6ce(void)

bool FUN_14881c6ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14881c6e8 FUN_14881c6e8 body=93 status=ok
// SIG undefined FUN_14881c6e8(void)

void FUN_14881c6e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f5f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14881c746 FUN_14881c746 body=126 status=ok
// SIG undefined FUN_14881c746(void)

void FUN_14881c746(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f5f90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014881c7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14881c7c4 FUN_14881c7c4 body=158 status=ok
// SIG undefined FUN_14881c7c4(void)

bool FUN_14881c7c4(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14881c864 FUN_14881c864 body=96 status=ok
// SIG undefined FUN_14881c864(void)

void FUN_14881c864(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 14881c8c4 FUN_14881c8c4 body=107 status=ok
// SIG undefined FUN_14881c8c4(void)

void FUN_14881c8c4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x38 + (longlong)(int)param_2 * 0x70) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x70 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x70 + lVar1),(longlong)iVar3 * 0x70);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14881c930 FUN_14881c930 body=62 status=ok
// SIG undefined FUN_14881c930(void)

void FUN_14881c930(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14881c96e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 14881c96e FUN_14881c96e body=104 status=ok
// SIG undefined FUN_14881c96e(void)

ulonglong FUN_14881c96e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14881c9a4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_14881c9a4:
  return param_2 & 0xffffffff;
}



// FUNCTION 14881c9d6 FUN_14881c9d6 body=147 status=ok
// SIG undefined FUN_14881c9d6(void)

void FUN_14881c9d6(longlong param_1,int param_2)

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



// FUNCTION 14881ca6a FUN_14881ca6a body=132 status=ok
// SIG undefined FUN_14881ca6a(void)

void FUN_14881ca6a(longlong param_1,int param_2)

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



// FUNCTION 14881caf0 FUN_14881caf0 body=48 status=ok
// SIG undefined FUN_14881caf0(void)

void FUN_14881caf0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14881cb20 FUN_14881cb20 body=99 status=ok
// SIG undefined FUN_14881cb20(void)

undefined8 * FUN_14881cb20(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14b3f60d8;
  *param_1 = &PTR_FUN_14b3f60d8;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881cb9c FUN_14881cb9c body=42 status=ok
// SIG undefined FUN_14881cb9c(void)

void FUN_14881cb9c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (*(code *)*param_1)(*param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 14881cbf0 FUN_14881cbf0 body=29 status=ok
// SIG undefined FUN_14881cbf0(void)

undefined8 FUN_14881cbf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881cc0e FUN_14881cc0e body=340 status=ok
// SIG undefined FUN_14881cc0e(void)

undefined8 *
FUN_14881cc0e(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar2 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 2) = uVar1;
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
  }
  *(int *)((longlong)param_1 + 0x14) = iVar2;
  param_1[3] = 0;
  iVar2 = 0;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 3) = uVar1;
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
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar2;
  return param_1;
}



// FUNCTION 14881cd62 FUN_14881cd62 body=113 status=ok
// SIG undefined FUN_14881cd62(void)

void FUN_14881cd62(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14881cdd4 FUN_14881cdd4 body=31 status=ok
// SIG undefined FUN_14881cdd4(void)

undefined8 FUN_14881cdd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14881ce08 FUN_14881ce08 body=85 status=ok
// SIG undefined FUN_14881ce08(void)

void FUN_14881ce08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f63e0;
  return;
}



// FUNCTION 14881ce5e FUN_14881ce5e body=118 status=ok
// SIG undefined FUN_14881ce5e(void)

void FUN_14881ce5e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f63e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014881cec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14881ced4 FUN_14881ced4 body=105 status=ok
// SIG undefined FUN_14881ced4(void)

undefined8 FUN_14881ced4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a3e2ee(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881cf3e FUN_14881cf3e body=48 status=ok
// SIG undefined FUN_14881cf3e(void)

void FUN_14881cf3e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14881cf6e FUN_14881cf6e body=48 status=ok
// SIG undefined FUN_14881cf6e(void)

void FUN_14881cf6e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14881cfb0 FUN_14881cfb0 body=97 status=ok
// SIG undefined FUN_14881cfb0(void)

void FUN_14881cfb0(undefined8 param_1)

{
  undefined1 auStack_588 [32];
  undefined1 local_568 [1360];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_588;
  FUN_1403df946(local_568);
  FUN_1403e019a(param_1,local_568);
  FUN_1403dfcb0(local_568);
  if ((local_18 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881d03e FUN_14881d03e body=52 status=ok
// SIG undefined FUN_14881d03e(void)

void FUN_14881d03e(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar4 = param_1 + 0x58;
  if (param_3 == '\0') {
    if (lVar4 == param_2) {
      return;
    }
    lVar3 = *(longlong *)(param_2 + 0x30);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar3 = param_2;
    }
    FUN_1400709d4(lVar4,lVar3,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x94));
    return;
  }
  bVar2 = *(byte *)(param_2 + 0x38);
  if ((ulonglong)bVar2 != 0) {
    uVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar3 = param_2;
      }
      plVar1 = (longlong *)(lVar3 + uVar6 * 0x18);
      if (*(byte *)(param_1 + 0x90) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar3 = lVar4;
        }
        lVar5 = 0;
        do {
          if ((*(longlong *)(lVar3 + lVar5) == *plVar1) &&
             (*(int *)(lVar3 + 8 + lVar5) == (int)plVar1[1])) goto LAB_1405fab0b;
          lVar5 = lVar5 + 0x18;
        } while ((ulonglong)*(byte *)(param_1 + 0x90) * 0x18 != lVar5);
      }
      FUN_140a6f4d0(lVar4);
LAB_1405fab0b:
      uVar6 = uVar6 + 1;
    } while (uVar6 != bVar2);
  }
  return;
}



// FUNCTION 14881d072 FUN_14881d072 body=71 status=ok
// SIG undefined FUN_14881d072(void)

void FUN_14881d072(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x16c)) {
    lVar1 = *(longlong *)(param_1 + 0x160);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar1 = param_1;
    }
    FUN_143d0a5e3(lVar1,*(undefined4 *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x168) = 0;
    return;
  }
  FUN_148822a06(param_1);
  return;
}



// FUNCTION 14881d0e4 FUN_14881d0e4 body=291 status=ok
// SIG undefined FUN_14881d0e4(void)

undefined8 * FUN_14881d0e4(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  bVar1 = *(byte *)(param_1 + 0x38);
  if (bVar1 != 0) {
    lVar4 = 0;
    do {
      if (1 < *(int *)(param_2 + 1)) {
        FUN_1400020e8(param_2,&DAT_149e0635c,1);
      }
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar3 = param_1;
      }
      local_70 = *(undefined8 *)(lVar3 + lVar4);
      FUN_1400021e4(&local_70,&local_68);
      puVar5 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar5 = local_68;
      }
      FUN_140002266(&local_58,&DAT_149e0625e,puVar5);
      iVar2 = local_50 + -1;
      if (local_50 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar2);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x18;
    } while ((ulonglong)bVar1 * 0x18 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881d208 FUN_14881d208 body=286 status=ok
// SIG undefined FUN_14881d208(void)

ulonglong FUN_14881d208(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined1 local_60 [48];
  undefined1 *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar2 == DAT_14c892c04) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_14041e7fb(param_3,&local_78);
    uVar2 = CONCAT71((int7)((ulonglong)param_3 >> 8),local_70 == 0x3003);
    if (local_70 == 0x3003) {
      local_90 = local_78;
      local_80 = 0;
      local_88 = 0x3003;
      local_30 = (undefined1 *)0x0;
      local_28 = 0x200000000;
      FUN_140a6f4d0(local_60);
      if (local_60 != param_1) {
        puVar1 = local_60;
        if (local_30 != (undefined1 *)0x0) {
          puVar1 = local_30;
        }
        FUN_1400709d4(param_1,puVar1,local_28 & 0xffffffff,*(undefined4 *)(param_1 + 0x3c));
      }
      if (local_30 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881d328 FUN_14881d328 body=596 status=ok
// SIG undefined FUN_14881d328(void)

ulonglong FUN_14881d328(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ushort *puVar5;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  undefined1 auStack_2a8 [40];
  undefined1 local_280 [8];
  undefined4 local_278;
  undefined8 local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1409d5a12(param_1);
  }
  puVar5 = (ushort *)*param_2;
  uVar2 = *puVar5;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar6,1);
  if (uVar2 < 0x29) {
    if (uVar2 == 0) goto LAB_14881d51b;
    if (uVar2 == 0x28) {
      do {
        puVar5 = puVar5 + 1;
        if (puVar5 == (ushort *)0x0) break;
        iVar3 = iswspace(*puVar5);
      } while (iVar3 != 0);
      if (*puVar5 != 0x29) {
joined_r0x00014881d3cf:
        do {
          if (puVar5 == (ushort *)0x0) {
            puVar5 = (ushort *)0x0;
          }
          else {
            iVar3 = iswspace(*puVar5);
            if (iVar3 != 0) {
              puVar5 = puVar5 + 1;
              goto joined_r0x00014881d3cf;
            }
          }
          uVar2 = *puVar5;
          uVar4 = 2;
          if (uVar2 != 0x2c) {
            local_250 = '\0';
            local_268 = local_248;
            local_260 = local_248;
            local_258 = &local_48;
            puVar5 = (ushort *)FUN_1409a0110(puVar5,&local_268,1);
            if (puVar5 == (ushort *)0x0) {
              if (local_250 == '\x01') {
                FUN_1400020a8(local_268);
              }
              uVar4 = 0;
              goto LAB_14881d51b;
            }
            if (9 < (ushort)(uVar2 - 0x30)) {
              FUN_1446f82e2(local_280,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1,
                            local_268,1);
              local_278 = 0x3003;
              local_270 = 0;
              FUN_140a6f4d0(param_1,local_280);
            }
            do {
              iVar3 = iswspace(*puVar5);
              if (iVar3 == 0) goto LAB_14881d478;
              puVar5 = puVar5 + 1;
            } while (puVar5 != (ushort *)0x0);
            puVar5 = (ushort *)0x0;
LAB_14881d478:
            if (local_250 == '\x01') {
              FUN_1400020a8(local_268);
            }
            uVar4 = (ulonglong)((uint)(*puVar5 == 0x2c) * 2);
          }
          psVar1 = (short *)((longlong)puVar5 + uVar4);
          puVar5 = (ushort *)((longlong)puVar5 + uVar4);
        } while (*psVar1 != 0x29);
        uVar4 = CONCAT71((int7)((ulonglong)&local_268 >> 8),1);
      }
      goto LAB_14881d51b;
    }
  }
  else if ((uVar2 == 0x29) || (uVar2 == 0x2c)) goto LAB_14881d51b;
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  uVar4 = CONCAT71(uVar6,1);
  local_260 = local_268;
  FUN_1409a0110(puVar5,&local_268,1);
  FUN_1446f82e2(local_280,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1,local_268,1);
  local_278 = 0x3003;
  local_270 = 0;
  FUN_140a6f4d0(param_1,local_280);
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
LAB_14881d51b:
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881d57e FUN_14881d57e body=350 status=ok
// SIG undefined FUN_14881d57e(void)

undefined8 FUN_14881d57e(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined2 *local_80;
  undefined8 uStack_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(param_1 + 0x38);
  FUN_140002184(param_2,0x28);
  if (bVar1 != 0) {
    lVar5 = 0;
    do {
      if (lVar5 != 0) {
        FUN_140002184(param_2,0x2c);
      }
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = param_1;
      }
      local_88 = *(undefined8 *)(lVar4 + lVar5);
      FUN_1400021e4(&local_88,&local_80);
      FUN_144832102(&local_80,0);
      puVar3 = local_80;
      bVar7 = (int)uStack_78 == 0;
      local_80 = (undefined2 *)0x0;
      uStack_78 = 0;
      puVar6 = puVar3;
      if (bVar7) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_70,L"\"%s\"",puVar6);
      iVar2 = local_68 + -1;
      if (local_68 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_70,iVar2);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (puVar3 != (undefined2 *)0x0) {
        FUN_1400020a8(puVar3);
      }
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x18;
    } while ((ulonglong)bVar1 * 0x18 != lVar5);
  }
  FUN_1400020e8(param_2,&DAT_149e06144,1);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881d6de FUN_14881d6de body=685 status=ok
// SIG undefined FUN_14881d6de(void)

undefined8 FUN_14881d6de(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  lVar6 = DAT_14cb77dc0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = param_3;
  if (DAT_14cb77dc0 != 0) {
    local_a8 = param_4;
    FUN_144aa7a80(&local_88,2,0);
    FUN_14709cc12(local_88);
    FUN_144aa7a80(local_70,3,0);
    FUN_1446dcc2e(param_2,local_70);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    local_a0 = param_2;
    FUN_140516f06(param_2,&DAT_14cb768e8,&local_88);
    bVar4 = *(byte *)(param_1 + 0x38);
    local_b0 = (ulonglong)bVar4;
    if (local_b0 != 0) {
      lVar7 = 0;
      do {
        FUN_144aa7a80(local_98,1,0);
        lVar11 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar11 = param_1;
        }
        local_78 = *(undefined8 *)(lVar11 + lVar7);
        FUN_1446dcdd4(local_70,&local_78);
        FUN_14709213c(local_98,lVar6,local_70,0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_14173818c(&local_88,local_98);
        FUN_14709d3d0(local_98,local_b8);
        plVar1 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        lVar7 = lVar7 + 0x18;
      } while ((ulonglong)((uint)bVar4 * 8) * 3 != lVar7);
    }
    uVar5 = local_a0;
    if ((local_a8 != 0) && ((ulonglong)*(byte *)(local_a8 + 0x38) != 0)) {
      lVar6 = *(longlong *)(local_a8 + 0x30);
      if (*(longlong *)(local_a8 + 0x30) == 0) {
        lVar6 = local_a8;
      }
      uVar9 = 0;
      iVar8 = 0;
      do {
        iVar10 = 1;
        if (*(byte *)(param_1 + 0x38) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(param_1 + 0x30) == 0) {
            lVar7 = param_1;
          }
          lVar11 = 0;
          do {
            if ((*(longlong *)(lVar7 + lVar11) == *(longlong *)(lVar6 + uVar9 * 0x18)) &&
               (*(int *)(lVar7 + 8 + lVar11) == *(int *)(lVar6 + 8 + uVar9 * 0x18))) {
              iVar10 = 0;
              break;
            }
            lVar11 = lVar11 + 0x18;
          } while ((ulonglong)((uint)*(byte *)(param_1 + 0x38) * 8) * 3 != lVar11);
        }
        iVar8 = iVar8 + iVar10;
        uVar9 = uVar9 + 1;
      } while (uVar9 != *(byte *)(local_a8 + 0x38));
      if (iVar8 != 0 || (int)local_b0 == 0) {
        FUN_14709d3d2(&local_88,local_b8);
      }
    }
    FUN_14709d3d0(uVar5,local_b8);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14881d98c FUN_14881d98c body=22 status=ok
// SIG undefined FUN_14881d98c(void)

undefined8 FUN_14881d98c(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb77dc0;
  if (DAT_14cb77dc0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb77dc0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb77dc0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb77dc0[0x3a] <= *(int *)((longlong)DAT_14cb77dc0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb77dc0 + 0x300))(DAT_14cb77dc0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14881d9a2 FUN_14881d9a2 body=479 status=ok
// SIG undefined FUN_14881d9a2(void)

void FUN_14881d9a2(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_1 != 0 && param_2 != 0) && (lVar8 = FUN_1447210f0(param_1), lVar8 != 0)) &&
     (FUN_1405fd34a(&local_58,lVar8), local_50 != (longlong *)0x0)) {
    iVar7 = (int)local_50[1];
    do {
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_50[1];
      bVar11 = iVar7 == iVar6;
      if (bVar11) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar10 = local_50;
    } while (!bVar11);
    LOCK();
    piVar2 = (int *)((longlong)local_50 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    lVar8 = local_58;
    if (plVar10 != (longlong *)0x0) {
      if (local_58 != 0) {
        local_58 = param_1;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_1);
        }
        local_50 = param_5;
        if ((param_5 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_5);
        }
        lVar5 = param_3[1];
        local_70 = param_3;
        if ((longlong)(int)lVar5 != 0) {
          lVar3 = *param_3;
          lVar9 = 0;
          do {
            uVar4 = *(undefined8 *)(lVar3 + lVar9);
            local_68 = *param_4;
            local_60 = param_4[1];
            if (local_60 != 0) {
              LOCK();
              *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
              UNLOCK();
            }
            local_88 = &local_68;
            local_80 = 0;
            FUN_1405fe3b6(lVar8,param_2,&local_58,uVar4);
            lVar9 = lVar9 + 8;
            param_3 = local_70;
          } while ((longlong)(int)lVar5 * 8 != lVar9);
        }
      }
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
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  plVar10 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14881db82 FUN_14881db82 body=233 status=ok
// SIG undefined FUN_14881db82(void)

void FUN_14881db82(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_1405fd34a(&local_30,lVar5), local_28 != (longlong *)0x0)) {
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
    lVar5 = local_30;
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        local_30 = param_1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_1);
        }
        local_28 = (longlong *)0x0;
        FUN_14187bf16(lVar5,&local_30,0);
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
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



// FUNCTION 14881dc6c FUN_14881dc6c body=95 status=ok
// SIG undefined FUN_14881dc6c(void)

undefined4 FUN_14881dc6c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[0] = 0;
  local_28 = 0;
  uVar1 = FUN_140a8b8c6(param_1,local_50);
  FUN_144a5ac3a(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881dccc FUN_14881dccc body=22 status=ok
// SIG undefined FUN_14881dccc(void)

undefined8 FUN_14881dccc(undefined8 param_1)

{
  FUN_143e03dd4();
  return param_1;
}



// FUNCTION 14881dce2 FUN_14881dce2 body=405 status=ok
// SIG undefined FUN_14881dce2(void)

undefined8 FUN_14881dce2(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 != 0))
    {
      if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
        if ((*param_3 == 0) || (0xfffffffd < (int)param_3[1] - 1U)) {
          uVar7 = *(int *)(lVar3 + 0x40) - 1;
        }
        else {
          local_60 = *param_3;
          FUN_1446dcdd4(local_58);
          uVar7 = 0xffffffff;
          if (((DAT_14cb7d760 != 0) && (lVar4 = FUN_144837462(DAT_14cb7d760,local_58), lVar4 != 0))
             && (0 < *(int *)(lVar3 + 0x40))) {
            lVar9 = 0;
            lVar5 = 0;
            do {
              lVar6 = FUN_145e08e5c(*(longlong *)(lVar3 + 0x38) + lVar9);
              if (lVar6 == lVar4) {
                uVar7 = (uint)lVar5;
                break;
              }
              lVar5 = lVar5 + 1;
              lVar9 = lVar9 + 0x88;
            } while (lVar5 < *(int *)(lVar3 + 0x40));
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        if (-1 < (int)uVar7) goto LAB_14881de3b;
      }
      else {
        lVar4 = FUN_1409d448e(param_2);
        if (lVar4 != 0) {
          uVar8 = (ulonglong)*(uint *)(lVar3 + 0x40);
          lVar9 = uVar8 * 0x88 + -0x70;
          do {
            if ((int)uVar8 < 1) goto LAB_14881de40;
            lVar5 = FUN_1409d448e(*(longlong *)(lVar3 + 0x38) + lVar9);
            uVar7 = (int)uVar8 - 1;
            uVar8 = (ulonglong)uVar7;
            lVar9 = lVar9 + -0x88;
          } while (lVar5 != lVar4);
LAB_14881de3b:
          if ((int)uVar7 < *(int *)(lVar3 + 0x40)) {
            FUN_14881de78(lVar3,uVar7);
            uVar1 = 1;
            goto LAB_14881de42;
          }
        }
      }
    }
  }
LAB_14881de40:
  uVar1 = 0;
LAB_14881de42:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14881de78 FUN_14881de78 body=128 status=ok
// SIG undefined FUN_14881de78(void)

void FUN_14881de78(longlong param_1,uint param_2)

{
  if (((*(byte *)(param_1 + 0x55) & 2) != 0) &&
     (param_2 < *(uint *)(param_1 + 0x40) && 1 < (int)*(uint *)(param_1 + 0x40))) {
    FUN_140d9183c(param_1);
    FUN_140d919e2(param_1);
    FUN_148820db8(param_1 + 0x38,param_2,1);
    FUN_14036aa1c(param_1);
    FUN_14036abb0(param_1);
    FUN_14036b0fc(param_1);
    FUN_1447f69b6(param_1 + 0x18);
    *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
    FUN_14036aa80(param_1);
    return;
  }
  return;
}



// FUNCTION 14881def8 FUN_14881def8 body=129 status=ok
// SIG undefined FUN_14881def8(void)

int FUN_14881def8(longlong param_1,char param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar7 = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar3 = FUN_144a7b040();
    plVar4 = (longlong *)FUN_144718840(param_1,uVar3);
    iVar8 = iVar7;
    if ((((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 != 0)
         ) && (iVar8 = *(int *)(lVar5 + 0x40), param_2 != '\0')) &&
       (bVar1 = 0 < iVar8, iVar8 = iVar7, bVar1)) {
      lVar6 = 0;
      lVar9 = 0;
      iVar8 = 0;
      do {
        bVar2 = FUN_140d03222(*(longlong *)(lVar5 + 0x38) + lVar6);
        iVar8 = iVar8 + (uint)bVar2;
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + 0x88;
      } while (lVar9 < *(int *)(lVar5 + 0x40));
    }
  }
  return iVar8;
}



// FUNCTION 14881df7a FUN_14881df7a body=295 status=ok
// SIG undefined FUN_14881df7a(void)

void FUN_14881df7a(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if ((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0))
    {
      if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
      }
      if ((*param_3 != 0) && ((int)param_3[1] - 1U < 0xfffffffe)) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_14881e14a(lVar4 + 0x270,param_3,&local_68);
        lVar1 = local_68;
        lVar5 = (longlong)(int)uStack_60;
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            FUN_14881e0c6(lVar4 + 0x270,*(undefined8 *)(lVar1 + lVar6),param_4,param_5);
            lVar6 = lVar6 + 8;
          } while (lVar5 * 8 != lVar6);
        }
        if (local_68 != 0) {
          FUN_1400020a8(local_68);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14881e0c6 FUN_14881e0c6 body=131 status=ok
// SIG undefined FUN_14881e0c6(void)

void FUN_14881e0c6(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (param_2 << 0x10 | param_2 & 0xffff) + ((param_2 & 0xffff) >> 4) +
                             ((param_2 >> 0x10) << 0x13 | param_2 >> 0x10)) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar1 * 0x80) == param_2) {
          if (lVar2 == 0) {
            return;
          }
          FUN_148822234(lVar2,param_3,param_4);
          return;
        }
        iVar1 = *(int *)(lVar2 + 0x78);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14881e14a FUN_14881e14a body=321 status=ok
// SIG undefined FUN_14881e14a(void)

void FUN_14881e14a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_1402179b4(param_2);
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar8 = (longlong)iStack_74 * 0x80 + *local_90;
      lVar6 = FUN_1402179b4(lVar8);
      if (lVar6 == lVar5) {
        uVar4 = *(undefined8 *)(lVar8 + 0x18);
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_148824022(param_3,iVar3);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar3 * 8) = uVar4;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14881e28c FUN_14881e28c body=276 status=ok
// SIG undefined FUN_14881e28c(void)

undefined8 FUN_14881e28c(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  uVar5 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if ((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0))
    {
      if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
      if ((*param_3 != 0) && ((int)param_3[1] - 1U < 0xfffffffe)) {
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_14881e14a(lVar4 + 0x270,param_3,&local_58);
        iVar1 = (int)uStack_50;
        if (0 < (int)uStack_50) {
          uVar5 = FUN_14881e3be(lVar4 + 0x270,*local_58);
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (0 < iVar1) goto LAB_14881e309;
      }
    }
  }
  uVar5 = 0xbf800000;
LAB_14881e309:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14881e3be FUN_14881e3be body=197 status=ok
// SIG undefined FUN_14881e3be(void)

undefined8 FUN_14881e3be(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  
  fVar3 = 0.0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (param_2 << 0x10 | param_2 & 0xffff) + ((param_2 & 0xffff) >> 4) +
                             ((param_2 >> 0x10) << 0x13 | param_2 >> 0x10)) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar1 * 0x80) == param_2) {
          if (lVar2 != 0) {
            fVar4 = (float)FUN_140960b90(0);
            fVar3 = 0.0;
            uVar6 = 0;
            if (0.0 < fVar4) {
              uVar5 = FUN_14108d0d4(lVar2);
              uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
              fVar3 = (float)uVar5 / fVar4;
              if (1.0 <= fVar3) {
                fVar3 = 1.0;
              }
              if (fVar3 <= 0.0) {
                fVar3 = 0.0;
              }
            }
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x78);
      } while (iVar1 != -1);
    }
  }
  return CONCAT44(uVar6,fVar3);
}



// FUNCTION 14881e484 FUN_14881e484 body=68 status=ok
// SIG undefined FUN_14881e484(void)

void FUN_14881e484(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014881e4ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x98))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14881e4c8 FUN_14881e4c8 body=291 status=ok
// SIG undefined FUN_14881e4c8(void)

void FUN_14881e4c8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145e08dcf(&local_50,param_1,param_2);
  if (0xfffffffd < local_48 - 1U || local_50 == 0) goto LAB_14881e5ab;
  if (param_1 == 0 || DAT_14c950c29 != 1) {
    if (param_1 != 0) goto LAB_14881e545;
    local_80 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_14881e545:
    uVar1 = FUN_1403c7982();
    local_80 = FUN_144718840(param_1,uVar1);
  }
  local_60 = *param_4;
  local_58 = param_4[1];
  local_78 = local_50;
  local_70 = local_48;
  local_68 = 0;
  local_88 = param_1;
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  FUN_143d4e072(&local_88,&local_78,param_3,&local_60);
LAB_14881e5ab:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881e5ec FUN_14881e5ec body=291 status=ok
// SIG undefined FUN_14881e5ec(void)

void FUN_14881e5ec(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145e08dcf(&local_50,param_1,param_2);
  if (0xfffffffd < local_48 - 1U || local_50 == 0) goto LAB_14881e6cf;
  if (param_1 == 0 || DAT_14c950c29 != 1) {
    if (param_1 != 0) goto LAB_14881e669;
    local_80 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_14881e669:
    uVar1 = FUN_1403c7982();
    local_80 = FUN_144718840(param_1,uVar1);
  }
  local_60 = *param_4;
  local_58 = param_4[1];
  local_78 = local_50;
  local_70 = local_48;
  local_68 = 0;
  local_88 = param_1;
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  FUN_143d4e3e0(&local_88,&local_78,param_3,&local_60);
LAB_14881e6cf:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881e710 FUN_14881e710 body=291 status=ok
// SIG undefined FUN_14881e710(void)

void FUN_14881e710(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145e08dcf(&local_50,param_1,param_2);
  if (0xfffffffd < local_48 - 1U || local_50 == 0) goto LAB_14881e7f3;
  if (param_1 == 0 || DAT_14c950c29 != 1) {
    if (param_1 != 0) goto LAB_14881e78d;
    local_80 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_14881e78d:
    uVar1 = FUN_1403c7982();
    local_80 = FUN_144718840(param_1,uVar1);
  }
  local_60 = *param_4;
  local_58 = param_4[1];
  local_78 = local_50;
  local_70 = local_48;
  local_68 = 0;
  local_88 = param_1;
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  FUN_143d4e86e(&local_88,&local_78,param_3,&local_60);
LAB_14881e7f3:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881e834 FUN_14881e834 body=112 status=ok
// SIG undefined FUN_14881e834(void)

void FUN_14881e834(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb76968) {
    FUN_144b3d300(&DAT_14cb76968);
    if (DAT_14cb76968 == -1) {
      DAT_14cb76958 = 0;
      DAT_14cb76960 = 0;
      atexit(FUN_143d08489);
      _Init_thread_footer(&DAT_14cb76968);
      return;
    }
  }
  return;
}



// FUNCTION 14881e8a4 FUN_14881e8a4 body=88 status=ok
// SIG undefined FUN_14881e8a4(void)

void FUN_14881e8a4(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = 0;
  FUN_14881e834();
  plVar2 = (longlong *)0x0;
  if (DAT_14cb76960 != 0) {
    plVar2 = DAT_14cb76958;
  }
                    /* WARNING: Could not recover jumptable at 0x00014881e8f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  return;
}



// FUNCTION 14881e8fc FUN_14881e8fc body=370 status=ok
// SIG undefined FUN_14881e8fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14881e8fc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb769e0) {
    FUN_144b3d300(&DAT_14cb769e0);
    if (DAT_14cb769e0 == -1) {
      _DAT_14cb76970 = &DAT_14c872bc8;
      _DAT_14cb76978 = L"DamageValueResolver";
      FUN_1446f470e(&DAT_14cb76980,L"AllowedStructs",1);
      DAT_14cb76988 = 0;
      DAT_14cb769b0 = 0;
      _DAT_14cb769b8 = 0;
      DAT_14cb76990 = 0;
      _DAT_14cb76998 = 0;
      _DAT_14cb769bc = 0xffffffff00000080;
      DAT_14cb769c4 = 0;
      DAT_14cb769d0 = 0;
      DAT_14cb769d8 = 0;
      atexit(FUN_143d084e4);
      _Init_thread_footer(&DAT_14cb769e0);
    }
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_145dec6d0();
    uVar2 = 1;
    if (lVar1 != param_3) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_1401031ac(param_3,0,&local_38);
      iVar3 = (int)uStack_30 + -1;
      if ((int)uStack_30 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(local_28,iVar3,local_38,1);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      uVar2 = FUN_14881ea70(local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881ea70 FUN_14881ea70 body=190 status=ok
// SIG undefined FUN_14881ea70(void)

ulonglong FUN_14881ea70(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  
  if (DAT_14cb76988 == '\0') {
    FUN_14882259c(&DAT_14cb76970);
  }
  if (DAT_14cb76998 != DAT_14cb769c4) {
    lVar1 = *param_1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    puVar5 = &DAT_14cb769c8;
    if (DAT_14cb769d0 != (undefined *)0x0) {
      puVar5 = DAT_14cb769d0;
    }
    uVar3 = (ulonglong)
            (DAT_14cb769d8 - 1U &
            (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
    iVar6 = *(int *)(puVar5 + uVar3 * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(DAT_14cb76990 + (longlong)iVar6 * 0x10) == lVar1;
        uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar7);
        if (bVar7) {
          return uVar3;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + DAT_14cb76990 + 8);
      } while (iVar6 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14881eb2e FUN_14881eb2e body=193 status=ok
// SIG undefined FUN_14881eb2e(void)

void FUN_14881eb2e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          local_30 = *param_2;
          local_28 = param_2[1];
          FUN_1403350f6(lVar4 + 0x110);
          FUN_144a7b126(lVar4 + 0x110,&local_19,1);
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



// FUNCTION 14881ebf0 FUN_14881ebf0 body=196 status=ok
// SIG undefined FUN_14881ebf0(void)

void FUN_14881ebf0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          local_30 = *param_2;
          local_28 = param_2[1];
          FUN_140805e68(lVar4 + 0x110,&local_30,1);
          FUN_144a7b126(lVar4 + 0x110,&local_19,1);
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



// FUNCTION 14881ecb6 FUN_14881ecb6 body=193 status=ok
// SIG undefined FUN_14881ecb6(void)

void FUN_14881ecb6(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          local_30 = *param_2;
          local_28 = param_2[1];
          FUN_1403350f6(lVar4 + 0x148);
          FUN_144a7b126(lVar4 + 0x148,&local_19,1);
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



// FUNCTION 14881ed78 FUN_14881ed78 body=196 status=ok
// SIG undefined FUN_14881ed78(void)

void FUN_14881ed78(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          local_30 = *param_2;
          local_28 = param_2[1];
          FUN_140805e68(lVar4 + 0x148,&local_30,1);
          FUN_144a7b126(lVar4 + 0x148,&local_19,1);
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



// FUNCTION 14881ee3e FUN_14881ee3e body=104 status=ok
// SIG undefined FUN_14881ee3e(void)

undefined1 FUN_14881ee3e(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar3 != (longlong *)0x0 && plVar2 != plVar3) &&
         (lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0)) {
        return *(undefined1 *)(lVar4 + 0x90);
      }
    }
  }
  return 0;
}



// FUNCTION 14881eea6 FUN_14881eea6 body=118 status=ok
// SIG undefined FUN_14881eea6(void)

undefined1 FUN_14881eea6(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar3 != (longlong *)0x0 && plVar2 != plVar3) &&
         (lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0)) {
        if (*(char *)(lVar4 + 0x90) != '\0') {
          return 1;
        }
        return *(undefined1 *)(lVar4 + 0xb8);
      }
    }
  }
  return 0;
}



// FUNCTION 14881ef1c FUN_14881ef1c body=131 status=ok
// SIG undefined FUN_14881ef1c(void)

undefined8 FUN_14881ef1c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (((plVar3 != (longlong *)0x0 && plVar2 != plVar3) &&
          (lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3), lVar4 != 0)) &&
         (*(char *)(lVar4 + 0x470) < '\0')) {
        FUN_14095e2f2(param_2,lVar4 + 0x308);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14881efa0 FUN_14881efa0 body=65 status=ok
// SIG undefined FUN_14881efa0(void)

undefined8 * FUN_14881efa0(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_14a171d50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_14b0394b0;
  return param_1;
}



// FUNCTION 14881efe2 FUN_14881efe2 body=108 status=ok
// SIG undefined FUN_14881efe2(void)

undefined8 * FUN_14881efe2(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_1405c5fa2();
  param_1[1] = &DAT_14cb769e8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b0394b0;
  FUN_140653d46(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14881f050 FUN_14881f050 body=35 status=ok
// SIG undefined FUN_14881f050(void)

undefined8 * FUN_14881f050(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14033465a();
  puVar2 = &DAT_14caa8558;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0xb8);
  }
  return puVar2;
}



// FUNCTION 14881f074 FUN_14881f074 body=106 status=ok
// SIG undefined FUN_14881f074(void)

undefined8 * FUN_14881f074(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(char *)(param_2 + 0x38) != '\0') {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar1 = param_2;
      }
      lVar1 = FUN_14033465a(lVar1 + lVar2);
      if (lVar1 != 0) {
        FUN_14094f414(param_1,lVar1 + 0xb8);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < *(byte *)(param_2 + 0x38));
  }
  return param_1;
}



// FUNCTION 14881f0de FUN_14881f0de body=64 status=ok
// SIG undefined FUN_14881f0de(void)

void FUN_14881f0de(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (0 < (int)param_2[7]) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2;
    }
    lVar1 = *plVar3;
    if ((lVar1 != 0) && (iVar2 = (int)plVar3[1], iVar2 - 1U < 0xfffffffe)) goto LAB_14881f10f;
  }
  iVar2 = 0x3003;
  lVar1 = 0;
LAB_14881f10f:
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = iVar2;
  param_1[2] = 0;
  return;
}



// FUNCTION 14881f11e FUN_14881f11e body=68 status=ok
// SIG undefined FUN_14881f11e(void)

void FUN_14881f11e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[7]) {
    plVar1 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar1 = param_2;
    }
    if (*plVar1 != 0) {
      lVar2 = 0;
      if ((int)plVar1[1] - 1U < 0xfffffffe) {
        lVar2 = *plVar1;
      }
      goto LAB_14881f14f;
    }
  }
  lVar2 = 0;
LAB_14881f14f:
  *param_1 = lVar2;
  *(undefined4 *)(param_1 + 1) = 0x3003;
  param_1[2] = 0;
  return;
}



// FUNCTION 14881f162 FUN_14881f162 body=28 status=ok
// SIG undefined FUN_14881f162(void)

undefined8 FUN_14881f162(undefined8 param_1,undefined8 param_2)

{
  FUN_14881d0e4(param_2,param_1);
  return param_1;
}



// FUNCTION 14881f17e FUN_14881f17e body=44 status=ok
// SIG undefined FUN_14881f17e(void)

longlong FUN_14881f17e(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x200000000;
  FUN_140a6f4d0();
  return param_1;
}



// FUNCTION 14881f1aa thunk_FUN_1400ff15e body=5 status=ok
// SIG undefined thunk_FUN_1400ff15e(void)

undefined8 thunk_FUN_1400ff15e(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == *(uint *)(param_2 + 0x38)) {
    uVar2 = 1;
    if ((uVar1 & 0xff) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar5 = param_2;
      }
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar3 = param_1;
      }
      uVar6 = 0;
      do {
        lVar4 = 0;
        while ((*(longlong *)(lVar3 + lVar4) != *(longlong *)(lVar5 + uVar6 * 0x18) ||
               (*(int *)(lVar3 + 8 + lVar4) != *(int *)(lVar5 + 8 + uVar6 * 0x18)))) {
          lVar4 = lVar4 + 0x18;
          if ((ulonglong)((uVar1 & 0xff) << 3) * 3 == lVar4) goto LAB_1400ff1cb;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != ((ulonglong)uVar1 & 0xff));
    }
  }
  else {
LAB_1400ff1cb:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14881f1b0 FUN_14881f1b0 body=16 status=ok
// SIG undefined FUN_14881f1b0(void)

byte FUN_14881f1b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1400ff15e();
  return bVar1 ^ 1;
}



// FUNCTION 14881f1c0 FUN_14881f1c0 body=119 status=ok
// SIG undefined FUN_14881f1c0(void)

undefined4 FUN_14881f1c0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  local_28 = 0x200000000;
  FUN_140a6f4d0(local_60);
  uVar1 = FUN_1400ff15e(param_1,local_60);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


