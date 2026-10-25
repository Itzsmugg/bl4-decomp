// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14571e6ea FUN_14571e6ea body=214 status=ok
// SIG undefined FUN_14571e6ea(void)

undefined8 * FUN_14571e6ea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14115e1e0(param_1,iVar1,0);
    FUN_14115e177(*param_1,uVar2,iVar1);
  }
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  FUN_140501b78(param_1 + 6,param_2 + 6);
  lVar3 = param_2[0x16];
  param_1[0x16] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x19] = param_2[0x19];
  uVar2 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar2;
  return param_1;
}



// FUNCTION 14571e7c0 FUN_14571e7c0 body=377 status=ok
// SIG undefined FUN_14571e7c0(void)

void FUN_14571e7c0(longlong param_1,double *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  double dVar13;
  
  lVar9 = *(longlong *)(param_1 + 0x98 + (ulonglong)(param_3 != 0) * 8);
  if (lVar9 == 0) {
    param_2[2] = *(double *)(param_1 + 0x70 + (longlong)param_3 * 0x18);
    pdVar1 = (double *)(param_1 + 0x60 + (longlong)param_3 * 0x18);
    dVar2 = pdVar1[1];
    *param_2 = *pdVar1;
    param_2[1] = dVar2;
  }
  else {
    lVar12 = (longlong)param_3;
    dVar2 = *(double *)(param_1 + 0x60 + lVar12 * 0x18);
    dVar3 = *(double *)(param_1 + 0x68 + lVar12 * 0x18);
    dVar4 = *(double *)(param_1 + 0x70 + lVar12 * 0x18);
    dVar5 = *(double *)(lVar9 + 0x140);
    dVar6 = *(double *)(lVar9 + 0x130);
    dVar7 = *(double *)(lVar9 + 0x138);
    dVar10 = dVar7 * dVar4 - dVar3 * dVar5;
    dVar10 = dVar10 + dVar10;
    dVar8 = *(double *)(lVar9 + 0x148);
    dVar11 = dVar6 * dVar3 - dVar2 * dVar7;
    dVar11 = dVar11 + dVar11;
    dVar13 = dVar5 * dVar2 - dVar4 * dVar6;
    dVar13 = dVar13 + dVar13;
    *param_2 = (dVar7 * dVar11 - dVar13 * dVar5) + dVar8 * dVar10 + dVar2;
    param_2[1] = (dVar5 * dVar10 - dVar11 * dVar6) + dVar8 * dVar13 + dVar3;
    param_2[2] = (dVar6 * dVar13 - dVar10 * dVar7) + dVar8 * dVar11 + dVar4;
  }
  return;
}



// FUNCTION 14571e93a FUN_14571e93a body=97 status=ok
// SIG undefined FUN_14571e93a(void)

float FUN_14571e93a(char *param_1)

{
  float fVar1;
  
  if (*param_1 == '\x01') {
    fVar1 = *(float *)(param_1 + 0x14) / (*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14));
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    if (*param_1 != '\0') {
      return 0.0;
    }
    if (*(int *)(param_1 + 8) < 2) {
      return 1.0;
    }
    fVar1 = 1.0 / (float)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x84));
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 14571e99c FUN_14571e99c body=497 status=ok
// SIG undefined FUN_14571e99c(void)

/* WARNING: Removing unreachable block (ram,0x00014571eafb) */

void FUN_14571e99c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_1;
  local_90 = param_2;
  if (param_2 != param_1) {
    FUN_144ade160(param_1 + 0x10,param_2 + 0x10);
    FUN_144aa2ab0(param_1,param_2);
    local_80 = (longlong *)(param_1 + 0x30);
    FUN_144b1e478(local_80,param_2 + 0x30);
    local_a0 = (longlong *)(param_1 + 0x20);
    FUN_144723bcc(local_a0,*(undefined4 *)(param_2 + 0x28));
    local_88 = (longlong)*(int *)(param_1 + 0x38);
    if (0 < local_88) {
      lVar8 = 0;
      do {
        plVar10 = (longlong *)(lVar8 * 0x10 + *(longlong *)(local_90 + 0x20));
        iVar2 = *(int *)(local_98 + 0x28);
        *(uint *)(local_98 + 0x28) = iVar2 + 1U;
        if (*(uint *)(local_98 + 0x2c) < iVar2 + 1U) {
          FUN_1474d86f8(local_a0,iVar2);
        }
        lVar3 = *local_a0;
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        local_68 = *(undefined8 *)(*local_80 + lVar8 * 8);
        lVar7 = (longlong)(int)plVar10[1];
        if (lVar7 != 0) {
          plVar9 = (longlong *)(lVar3 + (longlong)iVar2 * 0x10);
          lVar3 = *plVar10;
          lVar11 = 0;
          do {
            uVar5 = FUN_14479d2ce(&local_68);
            FUN_1474d8648(&local_78,uVar5);
            iVar2 = (int)plVar9[1];
            *(uint *)(plVar9 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)plVar9 + 0xc) < iVar2 + 1U) {
              FUN_1474d877e(plVar9,iVar2);
            }
            lVar4 = *plVar9;
            lVar6 = (longlong)iVar2 * 0x10;
            *(undefined8 *)(lVar4 + lVar6) = 0;
            *(undefined8 *)(lVar4 + lVar6) = local_78;
            *(undefined4 *)(lVar4 + 8 + lVar6) = (undefined4)local_70;
            *(undefined4 *)(lVar4 + 0xc + lVar6) = local_70._4_4_;
            local_70 = 0;
            local_78 = 0;
            uVar5 = FUN_14479d2ce(&local_68);
            FUN_1449b16b6(uVar5,*(undefined8 *)(lVar4 + lVar6),*(undefined8 *)(lVar3 + lVar11),1);
            lVar11 = lVar11 + 0x10;
          } while (lVar7 * 0x10 != lVar11);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != local_88);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571eb8e FUN_14571eb8e body=132 status=ok
// SIG undefined FUN_14571eb8e(void)

void FUN_14571eb8e(longlong param_1,int param_2)

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



// FUNCTION 14571ec12 FUN_14571ec12 body=132 status=ok
// SIG undefined FUN_14571ec12(void)

void FUN_14571ec12(longlong param_1,int param_2)

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



// FUNCTION 14571ec98 FUN_14571ec98 body=252 status=ok
// SIG undefined FUN_14571ec98(void)

void FUN_14571ec98(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x30);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x38) * 10;
    do {
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        if ((longlong)*(int *)(param_1 + 0x68) != 0) {
          plVar5 = *(longlong **)(param_1 + 0x60);
          plVar1 = plVar5 + *(int *)(param_1 + 0x68);
          do {
            if ((int)plVar9[3] != 0) {
              lVar7 = 0;
              do {
                if (*(longlong *)(plVar9[2] + lVar7) == *plVar5) goto LAB_14571ed68;
                lVar7 = lVar7 + 8;
              } while ((longlong)(int)plVar9[3] << 3 != lVar7);
            }
            if ((longlong)(int)plVar9[5] != 0) {
              lVar7 = 0;
              do {
                if (*(longlong *)(plVar9[4] + lVar7) == *plVar5) goto LAB_14571ed68;
                lVar7 = lVar7 + 8;
              } while ((longlong)(int)plVar9[5] * 8 != lVar7);
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
        uVar6 = FUN_14094f534();
        cVar4 = FUN_1448093f4(lVar3,uVar6);
        if (cVar4 != '\0') {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_14571ec12(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
        }
      }
LAB_14571ed68:
      plVar9 = plVar9 + 10;
    } while (plVar9 != plVar8);
  }
  return;
}



// FUNCTION 14571ed94 FUN_14571ed94 body=201 status=ok
// SIG undefined FUN_14571ed94(void)

longlong FUN_14571ed94(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1407be990();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14571ee5e FUN_14571ee5e body=143 status=ok
// SIG undefined FUN_14571ee5e(void)

char FUN_14571ee5e(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((char)param_1[2] == '\0') {
    lVar3 = FUN_14479d2ce();
    if (lVar3 != 0) {
      pcVar1 = (code *)*param_2;
      plVar5 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[2];
      }
      uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
      cVar2 = (*pcVar1)(uVar4,lVar3);
      if (cVar2 != '\0') {
        return '\x01';
      }
    }
  }
  else {
    lVar3 = (longlong)*(int *)(*param_1 + 0x10);
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(*param_1 + 8);
      lVar3 = lVar3 * 0x18;
      do {
        lVar3 = lVar3 + -0x18;
        cVar2 = FUN_14571ee5e(lVar6,param_2);
        if (cVar2 != '\0') {
          return cVar2;
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar3 != 0);
      return '\0';
    }
  }
  return '\0';
}



// FUNCTION 14571eeee FUN_14571eeee body=141 status=ok
// SIG undefined FUN_14571eeee(void)

ulonglong FUN_14571eeee(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar3 = param_1;
  if (lVar5 == 0) {
    lVar3 = FUN_140927942();
    lVar5 = FUN_14477b664(lVar3);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar4 = (longlong *)CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  if (((*(longlong *)(param_1 + 0x18) != 0) || (plVar4 = (longlong *)0x0, lVar5 == 0)) ||
     (*(longlong *)(param_1 + 8) == 0)) goto LAB_14571ef0a;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14571ef77:
    lVar5 = 0;
  }
  else {
    plVar4 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14571ef77;
    plVar4 = (longlong *)(**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(plVar4,(longlong *)(param_1 + 8));
  }
  *(longlong *)(param_1 + 0x18) = lVar5;
  plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),lVar5 != 0);
LAB_14571ef0a:
  return (ulonglong)plVar4 & 0xffffffff;
}



// FUNCTION 14571ef7c FUN_14571ef7c body=136 status=ok
// SIG undefined FUN_14571ef7c(void)

void FUN_14571ef7c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar4 = FUN_140927942();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    return;
  }
  return;
}



// FUNCTION 14571f004 FUN_14571f004 body=147 status=ok
// SIG undefined FUN_14571f004(void)

void FUN_14571f004(longlong param_1,int param_2)

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



// FUNCTION 14571f098 FUN_14571f098 body=38 status=ok
// SIG undefined FUN_14571f098(void)

void FUN_14571f098(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    lVar1 = FUN_14475ec7e(param_1);
  }
  FUN_14051e3d2(lVar1);
  return;
}



// FUNCTION 14571f0be FUN_14571f0be body=38 status=ok
// SIG undefined FUN_14571f0be(void)

void FUN_14571f0be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    lVar1 = FUN_14475ec7e(param_1);
  }
  FUN_14051e3d2(lVar1);
  return;
}



// FUNCTION 14571f162 FUN_14571f162 body=132 status=ok
// SIG undefined FUN_14571f162(void)

void FUN_14571f162(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x14) = (int)uVar5;
    FUN_14571f1e6(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14571f1e6 FUN_14571f1e6 body=133 status=ok
// SIG undefined FUN_14571f1e6(void)

void FUN_14571f1e6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14571f26c FUN_14571f26c body=123 status=ok
// SIG undefined FUN_14571f26c(void)

void FUN_14571f26c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      iVar5 = 0x10;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_14571f2e8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14571f2e8 FUN_14571f2e8 body=140 status=ok
// SIG undefined FUN_14571f2e8(void)

void FUN_14571f2e8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 14571f374 FUN_14571f374 body=135 status=ok
// SIG undefined FUN_14571f374(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ** FUN_14571f374(longlong param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_48 [32];
  undefined8 **local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 0x48) >> (_DAT_14cab3288 & 0x1f) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,param_2,1 << ((byte)_DAT_14cab3288 & 0x1f));
  }
  FUN_14571f4c2(param_1 + 0x38,&local_28);
  if ((local_20 == '\x02') || (pppuVar1 = &local_28, local_20 == '\x01')) {
    pppuVar1 = (undefined8 ***)local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *pppuVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571f40c FUN_14571f40c body=48 status=ok
// SIG undefined FUN_14571f40c(void)

void FUN_14571f40c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14571f43c FUN_14571f43c body=132 status=ok
// SIG undefined FUN_14571f43c(void)

void FUN_14571f43c(longlong param_1,int param_2)

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



// FUNCTION 14571f4c2 FUN_14571f4c2 body=1307 status=ok
// SIG undefined FUN_14571f4c2(void)

longlong * FUN_14571f4c2(ulonglong *param_1,longlong *param_2,uint param_3)

{
  ushort *puVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  ushort uVar11;
  ulonglong uVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ushort uVar20;
  bool bVar21;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  ulonglong local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar4;
  uVar4 = param_3 - 1 & uVar4;
  uVar14 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar15 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  uVar18 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar19 = uVar18 >> 0x38;
  uVar14 = *param_1;
  bVar7 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar7 == 0) {
    uVar20 = 4;
  }
  else {
    uVar20 = 4;
    lVar9 = 0;
    do {
      uVar11 = (ushort)*(byte *)(uVar14 + 3 + lVar9);
      if (uVar20 < uVar11) {
        uVar20 = uVar11;
      }
      lVar9 = lVar9 + 6;
    } while ((ulonglong)((uint)bVar7 + (uint)bVar7) * 3 != lVar9);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_80 = param_2;
  FUN_14086fe48(local_78,bVar7 + 1,CONCAT71((int7)(uVar15 >> 8),1));
  lVar9 = (ulonglong)((uint)bVar7 * 2 + 2) * 3;
  uVar4 = 0;
  bVar2 = (byte)(uVar18 >> 0x38);
  uVar17 = (uint)bVar2;
  if (uVar19 != 0) {
    uVar4 = (uint)bVar2 + (uint)(uVar17 == 0);
    pbVar10 = (byte *)(uVar14 + 3);
    lVar16 = 0;
    do {
      uVar15 = -(ulonglong)*pbVar10 & (lVar9 + (ulonglong)*pbVar10) - 1;
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(short *)(puVar6 + lVar16 * 2) = (short)uVar15;
      lVar9 = pbVar10[-1] + uVar15;
      lVar16 = lVar16 + 1;
      pbVar10 = pbVar10 + 6;
    } while (uVar19 + (uVar19 == 0) != lVar16);
  }
  uVar15 = lVar9 + 3U & 0xfffffffffffffffc;
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  uVar12 = (ulonglong)uVar4;
  *(short *)(puVar6 + uVar12 * 2) = (short)uVar15;
  uVar15 = uVar15 + 0xc;
  if (uVar4 < bVar7) {
    pbVar10 = (byte *)(uVar14 + uVar12 * 6 + 3);
    do {
      uVar15 = -(ulonglong)*pbVar10 & (uVar15 + *pbVar10) - 1;
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(short *)(puVar6 + uVar12 * 2 + 2) = (short)uVar15;
      uVar12 = uVar12 + 1;
      uVar15 = pbVar10[-1] + uVar15;
      pbVar10 = pbVar10 + 6;
    } while (bVar7 != uVar12);
  }
  uVar12 = *param_1;
  local_88 = uVar14;
  if (((ushort)param_1[1] < uVar20) || (*(ushort *)((longlong)param_1 + 10) < uVar15)) {
    uVar5 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar15 < uVar5) {
      uVar15 = uVar5;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar15;
    uVar15 = uVar15 & 0xffff;
    uVar5 = FUN_14001cc68(uVar15,uVar20);
    *param_1 = uVar5;
    local_8c = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
  }
  else {
    local_8c = 0;
    uVar5 = uVar12;
  }
  bVar7 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar7;
  uVar15 = (ulonglong)bVar7;
  iVar8 = bVar7 - 1;
  if ((int)(uint)bVar2 < iVar8) {
    pbVar10 = (byte *)(uVar14 + (ulonglong)bVar7 * 6 + -10);
    uVar14 = (ulonglong)bVar7;
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      pvVar13 = (void *)(uVar12 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar6 + uVar14 * 2 + -2) + *param_1),pvVar13,
              (ulonglong)*pbVar10);
      uVar15 = uVar14 - 1;
      pbVar10 = pbVar10 + -6;
      lVar9 = uVar14 - 2;
      uVar14 = uVar15;
    } while ((longlong)uVar19 < lVar9);
    iVar8 = (int)uVar15 + -1;
    uVar5 = *param_1;
  }
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  uVar20 = *(ushort *)(puVar6 + (longlong)iVar8 * 2);
  *(undefined4 *)(uVar5 + 8 + (ulonglong)uVar20) = 0;
  *(undefined8 *)(uVar5 + uVar20) = 0;
  if (1 < (int)uVar15) {
    uVar14 = (ulonglong)((int)uVar15 - 2);
    pbVar10 = (byte *)(local_88 + uVar14 * 6 + 2);
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      pvVar13 = (void *)(uVar12 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar6 + uVar14 * 2) + *param_1),pvVar13,
              (ulonglong)*pbVar10);
      pbVar10 = pbVar10 + -6;
      bVar21 = uVar14 != 0;
      uVar14 = uVar14 - 1;
    } while (bVar21);
  }
  uVar14 = *param_1;
  bVar7 = *(byte *)((longlong)param_1 + 0xc);
  uVar4 = (uint)bVar7;
  iVar8 = bVar7 - 1;
  uVar15 = uVar14;
  if ((int)uVar17 < iVar8) {
    lVar9 = (ulonglong)((uint)bVar7 + (uint)bVar7) * 3;
    uVar15 = (ulonglong)(uint)bVar7;
    do {
      *(undefined2 *)((uVar14 - 2) + lVar9) = *(undefined2 *)((local_88 - 8) + lVar9);
      *(undefined4 *)((uVar14 - 6) + lVar9) = *(undefined4 *)((local_88 - 0xc) + lVar9);
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(undefined2 *)((uVar14 - 6) + lVar9) = *(undefined2 *)(puVar6 + uVar15 * 2 + -2);
      uVar5 = uVar15 - 1;
      lVar9 = lVar9 + -6;
      lVar16 = uVar15 - 2;
      uVar15 = uVar5;
    } while ((longlong)uVar19 < lVar16);
    uVar4 = (uint)uVar5;
    iVar8 = uVar4 - 1;
    uVar15 = *param_1;
  }
  puVar1 = (ushort *)(uVar14 + (longlong)iVar8 * 6);
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  uVar20 = *(ushort *)(puVar6 + (longlong)iVar8 * 2);
  *puVar1 = 0xffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (*param_1 <= uVar20 + uVar15) {
    *puVar1 = (short)(uVar20 + uVar15) - (short)*param_1;
  }
  puVar1[1] = 0x40c;
  puVar1[2] = 0;
  if (1 < (int)uVar4) {
    uVar15 = (ulonglong)(uVar4 - 2);
    lVar9 = uVar15 * 6;
    do {
      *(undefined2 *)(uVar14 + 4 + lVar9) = *(undefined2 *)(local_88 + 4 + lVar9);
      *(undefined4 *)(uVar14 + lVar9) = *(undefined4 *)(local_88 + lVar9);
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      *(undefined2 *)(uVar14 + lVar9) = *(undefined2 *)(puVar6 + uVar15 * 2);
      lVar9 = lVar9 + -6;
      bVar21 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar21);
  }
  if (((byte)local_8c & uVar12 != 0) == 1) {
    FUN_1400020a8(uVar12);
  }
  iVar8 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar8 + 1U) {
    FUN_14086feca(param_1 + 3,iVar8);
  }
  lVar9 = (uVar18 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar9 + 0x10),(void *)(param_1[3] + lVar9),
          (ulonglong)(iVar8 - uVar17) << 4);
  plVar3 = local_80;
  uVar14 = param_1[3];
  *(undefined1 **)(uVar14 + lVar9) = &LAB_147581d5e;
  *(undefined1 **)(uVar14 + 8 + lVar9) = &LAB_147581d62;
  lVar9 = 0;
  if ((ulonglong)*puVar1 != 0xffff) {
    lVar9 = *param_1 + (ulonglong)*puVar1;
  }
  *local_80 = (ulonglong)(byte)puVar1[2] + lVar9;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar1 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14571f9de FUN_14571f9de body=16 status=ok
// SIG undefined FUN_14571f9de(void)

undefined1 FUN_14571f9de(void)

{
  FUN_140527436();
  return 1;
}



// FUNCTION 14571f9ee FUN_14571f9ee body=25 status=ok
// SIG undefined FUN_14571f9ee(void)

undefined8 FUN_14571f9ee(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x150) == '\x01') && (*(char *)(param_1 + 0x152) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14571fa08 FUN_14571fa08 body=46 status=ok
// SIG undefined FUN_14571fa08(void)

longlong * FUN_14571fa08(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x78) == 0) {
    return (longlong *)0x0;
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  lVar2 = (longlong)*(int *)(param_1 + 0x78) * 0x60;
  do {
    if (*plVar1 == param_2) {
      return plVar1;
    }
    plVar1 = plVar1 + 0xc;
    lVar2 = lVar2 + -0x60;
  } while (lVar2 != 0);
  return (longlong *)0x0;
}



// FUNCTION 14571fa36 FUN_14571fa36 body=47 status=ok
// SIG undefined FUN_14571fa36(void)

undefined8 * FUN_14571fa36(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f42f34();
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_140d85616(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14571fa66 FUN_14571fa66 body=166 status=ok
// SIG undefined FUN_14571fa66(void)

void FUN_14571fa66(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1b0) != 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x1b0);
    local_18 = *(longlong *)(param_1 + 0x1b8);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571fb0e FUN_14571fb0e body=205 status=ok
// SIG undefined FUN_14571fb0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14571fb0e(void)

{
  if ((DAT_14ca69bbf & 2) == 0) {
    DAT_14ca69bbf = DAT_14ca69bbf | 2;
    _DAT_14ca69b60 = L"FRenderVolumetricCloudVS";
    _DAT_14ca69b78 = FUN_146826540;
    _DAT_14ca69b80 = FUN_146825d77;
    _DAT_14ca69b88 = FUN_146825fd6;
    _DAT_14ca69b90 = FUN_1407e02ea;
    _DAT_14ca69b98 = FUN_146826273;
    _DAT_14ca69b70 = FUN_147333c1c;
    _DAT_14ca69bb0 = 0xffffffff00000108;
    _DAT_14ca69bb8 = 8;
    DAT_14ca69bbc = 0;
    _DAT_14ca69ba0 = &LAB_147333c52;
    FUN_14571fbdc();
    FUN_1407e00cc(&DAT_14ca69b58);
    return;
  }
  return;
}



// FUNCTION 14571fbdc FUN_14571fbdc body=123 status=ok
// SIG undefined FUN_14571fbdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14571fbdc(void)

{
  _DAT_14ca6d198 = L"BASE";
  DAT_14ca6d1c2 = 4;
  _DAT_14ca6d1a0 = FUN_141092e92();
  _DAT_14ca6d1a8 = DAT_14ca69b68;
  _DAT_14ca6d1b0 = &LAB_14682652b;
  DAT_14ca69b68 = &DAT_14ca6d198;
  DAT_14ca69bbd = DAT_14ca69bbd + '\x01';
  _DAT_14ca6d1b8 = 0x100000000;
  if (*(char *)(_DAT_14ca6d1a0 + 100) != '\0') {
    DAT_14ca69bbe = DAT_14ca69bbe + '\x01';
  }
  return;
}



// FUNCTION 14571fc58 FUN_14571fc58 body=205 status=ok
// SIG undefined FUN_14571fc58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14571fc58(void)

{
  if ((DAT_14ca6a98f & 2) == 0) {
    DAT_14ca6a98f = DAT_14ca6a98f | 2;
    _DAT_14ca6a930 = L"FVolumetricCloudShadowPS";
    _DAT_14ca6a948 = FUN_146826540;
    _DAT_14ca6a950 = FUN_146825d77;
    _DAT_14ca6a958 = FUN_146825fd6;
    _DAT_14ca6a960 = FUN_1407e02ea;
    _DAT_14ca6a968 = FUN_146826273;
    _DAT_14ca6a940 = FUN_1473344d4;
    _DAT_14ca6a980 = 0xffffffff00000108;
    _DAT_14ca6a988 = 8;
    DAT_14ca6a98c = 0;
    _DAT_14ca6a970 = &LAB_14733450a;
    FUN_14571fd26();
    FUN_1407e00cc(&DAT_14ca6a928);
    return;
  }
  return;
}



// FUNCTION 14571fd26 FUN_14571fd26 body=123 status=ok
// SIG undefined FUN_14571fd26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14571fd26(void)

{
  _DAT_14ca6d3a8 = L"BASE";
  DAT_14ca6d3d2 = 4;
  _DAT_14ca6d3b0 = FUN_141092e92();
  _DAT_14ca6d3b8 = DAT_14ca6a938;
  _DAT_14ca6d3c0 = &LAB_14682652b;
  DAT_14ca6a938 = &DAT_14ca6d3a8;
  DAT_14ca6a98d = DAT_14ca6a98d + '\x01';
  _DAT_14ca6d3c8 = 0x100000000;
  if (*(char *)(_DAT_14ca6d3b0 + 100) != '\0') {
    DAT_14ca6a98e = DAT_14ca6a98e + '\x01';
  }
  return;
}



// FUNCTION 14571fda2 FUN_14571fda2 body=37 status=ok
// SIG undefined FUN_14571fda2(void)

void FUN_14571fda2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2d8);
  FUN_14571fdc8(param_2);
  return;
}



// FUNCTION 14571fdc8 FUN_14571fdc8 body=530 status=ok
// SIG undefined FUN_14571fdc8(void)

undefined8 * FUN_14571fdc8(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b7bd240;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_14052b590(param_1 + 0xe);
  FUN_14052b590(param_1 + 0x12);
  FUN_14052b590(param_1 + 0x16);
  FUN_14052b590(param_1 + 0x1a);
  FUN_14052b590(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x22) = 0x469c4000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_14052b5c2(&local_58,"RaidRewardTier",0,1);
  param_1[0x2d] = local_58;
  *(undefined4 *)(param_1 + 0x2e) = local_50;
  FUN_14052b590(param_1 + 0x2f);
  FUN_14052b590(param_1 + 0x33);
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x1010;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xf00000d0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47) = 5;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  FUN_144928b90(param_1 + 0x52,0);
  *(undefined4 *)(param_1 + 0x59) = 0x40a00000;
  FUN_14052b5c2(&local_58,"TraitMission_Tuba_Hardcore_01",0,1);
  *(undefined8 *)((longlong)param_1 + 0x2cc) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = local_50;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14571ffdc FUN_14571ffdc body=226 status=ok
// SIG undefined FUN_14571ffdc(void)

longlong * FUN_14571ffdc(longlong *param_1)

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
  pcVar13 = FUN_1462d59bc;
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



// FUNCTION 1457200c0 FUN_1457200c0 body=132 status=ok
// SIG undefined FUN_1457200c0(void)

undefined1 * FUN_1457200c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowMapChannelMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471d82fc;
}



// FUNCTION 145720144 FUN_145720144 body=138 status=ok
// SIG undefined FUN_145720144(void)

code * FUN_145720144(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d8272;
}



// FUNCTION 1457201ce FUN_1457201ce body=144 status=ok
// SIG undefined FUN_1457201ce(void)

code * FUN_1457201ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14572025e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LightParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLightShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471d7584;
}



// FUNCTION 14572025e FUN_14572025e body=268 status=ok
// SIG undefined FUN_14572025e(void)

undefined * FUN_14572025e(void)

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
              0x110) < DAT_14c9ebd38) {
    FUN_144b3d300(&DAT_14c9ebd38);
    if (DAT_14c9ebd38 == -1) {
      FUN_140539646(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLightShaderParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x4d7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ebcb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4871);
      _Init_thread_footer(&DAT_14c9ebd38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ebcb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572036c FUN_14572036c body=136 status=ok
// SIG undefined FUN_14572036c(void)

code * FUN_14572036c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RectLightAtlasUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000050c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d77ac;
}



// FUNCTION 1457203f4 FUN_1457203f4 body=138 status=ok
// SIG undefined FUN_1457203f4(void)

code * FUN_1457203f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OrientedBoxLocation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000004f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d7c86;
}



// FUNCTION 14572047e FUN_14572047e body=138 status=ok
// SIG undefined FUN_14572047e(void)

code * FUN_14572047e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiffuseScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000004eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d7d9a;
}



// FUNCTION 145720508 FUN_145720508 body=166 status=ok
// SIG undefined FUN_145720508(void)

undefined8 * FUN_145720508(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *param_2;
  local_28 = &DAT_14cb8ccc0;
  LOCK();
  DAT_14cb8ccc8 = DAT_14cb8ccc8 + 1;
  UNLOCK();
  local_30 = DAT_14cb8ccc0;
  FUN_1457205b0(param_1 + 1,&local_30,param_1);
  LOCK();
  *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + -1;
  UNLOCK();
  local_28 = &DAT_14cb8ccc0;
  LOCK();
  DAT_14cb8ccc8 = DAT_14cb8ccc8 + 1;
  UNLOCK();
  local_30 = 0;
  FUN_1457205b0(param_1 + 4,&local_30,param_1);
  LOCK();
  *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + -1;
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457205b0 FUN_1457205b0 body=90 status=ok
// SIG undefined FUN_1457205b0(void)

longlong * FUN_1457205b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (**(longlong **)(lVar3 + 0x10) == 0) {
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



// FUNCTION 14572060a FUN_14572060a body=153 status=ok
// SIG undefined FUN_14572060a(void)

void FUN_14572060a(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x32) == '\0') && (DAT_14cbc8bb8 != 0)) {
    FUN_1457206a4(DAT_14cbc8bb8,&local_28);
    if ((longlong *)(param_1 + 0x20) == &local_28) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x20) = local_28;
      *(undefined4 *)(param_1 + 0x28) = local_20;
      *(undefined4 *)(param_1 + 0x2c) = local_1c;
    }
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457206a4 FUN_1457206a4 body=231 status=ok
// SIG undefined FUN_1457206a4(void)

longlong * FUN_1457206a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14053b7a6(0,&local_48);
  lVar3 = local_48;
  lVar7 = (longlong)(int)uStack_40;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar5 = FUN_14053b76c();
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14585e824(param_2,iVar1);
          }
          *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar2;
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14572078c FUN_14572078c body=418 status=ok
// SIG undefined FUN_14572078c(void)

longlong * FUN_14572078c(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140540510(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar7 = 2;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      uVar4 = FUN_144adda01(param_1,uVar5 + lVar7 + -2);
      FUN_144adda01(uVar4,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 4;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_1405404e4(param_2);
    if (0 < (int)local_3c) {
      iVar6 = 0;
      do {
        lVar7 = FUN_147ce71ba(param_2);
        uVar4 = FUN_144adda01(param_1,lVar7);
        FUN_144adda01(uVar4,lVar7 + 2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145720930 FUN_145720930 body=226 status=ok
// SIG undefined FUN_145720930(void)

longlong * FUN_145720930(longlong *param_1)

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
  pcVar13 = FUN_1462f50e6;
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



// FUNCTION 145720a14 FUN_145720a14 body=132 status=ok
// SIG undefined FUN_145720a14(void)

undefined1 * FUN_145720a14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkinningHeaders";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14726df3c;
}



// FUNCTION 145720a98 FUN_145720a98 body=138 status=ok
// SIG undefined FUN_145720a98(void)

code * FUN_145720a98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoneHierarchy";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145720a14;
}



// FUNCTION 145720b22 FUN_145720b22 body=138 status=ok
// SIG undefined FUN_145720b22(void)

code * FUN_145720b22(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoneObjectSpace";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145720a98;
}



// FUNCTION 145720bac FUN_145720bac body=293 status=ok
// SIG undefined FUN_145720bac(void)

undefined4 * FUN_145720bac(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145720d6c(local_48);
  puVar1 = (undefined4 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar6 = FUN_145720cd2(param_2,local_40,local_48);
  if (cVar6 == '\0') {
    uVar7 = DAT_14cc295a0 - DAT_14cc295cc;
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= DAT_14cc295e0)) {
      param_2 = DAT_14cc295e0 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar8 = DAT_14cc295d8;
      if (DAT_14cc295d8 == (undefined *)0x0) {
        puVar8 = &DAT_14cc295d0;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14cc295e0 - 1U & (longlong)(int)param_2) * 4);
      puVar8 = DAT_14cc295d8;
      if (DAT_14cc295d8 == (undefined *)0x0) {
        puVar8 = &DAT_14cc295d0;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14cc295e0 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cc295e0 = iVar10;
      FUN_145720e7a();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145720cd2 FUN_145720cd2 body=154 status=ok
// SIG undefined FUN_145720cd2(void)

undefined8 FUN_145720cd2(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  
  if ((DAT_14cc295a0 - DAT_14cc295cc != 1) && (DAT_14cc295a0 != DAT_14cc295cc)) {
    puVar7 = &DAT_14cc295d0;
    if (DAT_14cc295d8 != (undefined *)0x0) {
      puVar7 = DAT_14cc295d8;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(DAT_14cc295e0 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14cc29598 + (longlong)iVar6 * 0x20);
        if (*(longlong *)(DAT_14cc29598 + (longlong)iVar6 * 0x20) == *param_2) {
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_149823d8e(*param_3);
          *param_3 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145720d6c FUN_145720d6c body=269 status=ok
// SIG undefined FUN_145720d6c(void)

int * FUN_145720d6c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cc295c8;
  iVar3 = DAT_14cc295a0;
  if (DAT_14cc295cc == 0) {
    iVar2 = DAT_14cc295a0 + 1;
    bVar7 = DAT_14cc295a4 == DAT_14cc295a0;
    DAT_14cc295a0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cc29598,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cc295a8,1);
    puVar4 = DAT_14cc295b8;
    if (DAT_14cc295b8 == (undefined *)0x0) {
      puVar4 = &DAT_14cc295a8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cc295c8;
    DAT_14cc295c8 = *(int *)(DAT_14cc29598 + 4 + lVar6 * 0x20);
    DAT_14cc295cc = DAT_14cc295cc + -1;
    if (DAT_14cc295cc != 0) {
      *(undefined4 *)(DAT_14cc29598 + (longlong)DAT_14cc295c8 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cc295a8;
  if (DAT_14cc295b8 != (undefined *)0x0) {
    puVar4 = DAT_14cc295b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cc29598;
  return param_1;
}



// FUNCTION 145720e7a FUN_145720e7a body=527 status=ok
// SIG undefined FUN_145720e7a(void)

void FUN_145720e7a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc295d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cc295d8,0,0,4);
  }
  uVar7 = DAT_14cc295e0;
  uVar2 = local_50;
  if (DAT_14cc295e0 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cc295d0,0,DAT_14cc295e0,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14cc295d8;
        if (DAT_14cc295d8 == (undefined *)0x0) {
          puVar4 = &DAT_14cc295d0;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cc295e0 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cc295a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cc295c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cc29598;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x20;
        uVar7 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cc295e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar5) = iVar8;
        puVar4 = DAT_14cc295d8;
        if (DAT_14cc295d8 == (undefined *)0x0) {
          puVar4 = &DAT_14cc295d0;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar5) =
             *(undefined4 *)(puVar4 + ((longlong)(int)DAT_14cc295e0 - 1U & uVar9) * 4);
        puVar4 = DAT_14cc295d8;
        if (DAT_14cc295d8 == (undefined *)0x0) {
          puVar4 = &DAT_14cc295d0;
        }
        *(int *)(puVar4 + ((longlong)iVar8 & (longlong)(int)DAT_14cc295e0 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572108a FUN_14572108a body=47 status=ok
// SIG undefined FUN_14572108a(void)

void FUN_14572108a(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba80b0);
                    /* WARNING: Could not recover jumptable at 0x0001457210b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1457210ba FUN_1457210ba body=132 status=ok
// SIG undefined FUN_1457210ba(void)

void FUN_1457210ba(longlong param_1,int param_2)

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



// FUNCTION 14572113e FUN_14572113e body=114 status=ok
// SIG undefined FUN_14572113e(void)

void FUN_14572113e(longlong *param_1,int param_2)

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



// FUNCTION 1457211bc FUN_1457211bc body=148 status=ok
// SIG undefined FUN_1457211bc(void)

undefined8 * FUN_1457211bc(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f06();
  *param_1 = &PTR_FUN_14a475ce0;
  lVar2 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x126);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar2 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar2 + 0x126);
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_20,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145721252 FUN_145721252 body=579 status=ok
// SIG undefined FUN_145721252(void)

void FUN_145721252(longlong param_1,int param_2,int param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *_Src;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  void *_Dst;
  
  uVar13 = *(ulonglong *)(param_1 + 0x248);
  puVar8 = *(ulonglong **)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
  uVar5 = *(ushort *)((longlong)puVar8 + 0xe);
  lVar12 = (ulonglong)uVar5 - 1;
  uVar10 = *puVar8;
  if (*puVar8 < uVar13) {
    uVar10 = uVar13;
  }
  uVar6 = *(ushort *)((longlong)puVar8 + 0x12);
  *puVar8 = uVar10;
  uVar7 = *(ushort *)((longlong)puVar8 + 0xc);
  iVar16 = (int)lVar12;
  if (uVar7 != 0) {
    uVar10 = puVar8[5];
    lVar15 = 0;
    do {
      uVar11 = *(ulonglong *)(uVar10 + 0x10 + lVar15);
      if (uVar11 < uVar13) {
        uVar11 = uVar13;
      }
      *(ulonglong *)(uVar10 + 0x10 + lVar15) = uVar11;
      bVar4 = *(byte *)(uVar10 + 0x1c + lVar15);
      if (bVar4 != 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
        lVar14 = (ulonglong)*(ushort *)(uVar10 + 0x1e + lVar15) * 0x10;
        puVar2 = (undefined8 *)(lVar9 + lVar14);
        _Dst = (void *)((longlong)(int)((uint)bVar4 * param_3) + *(longlong *)(uVar10 + lVar15));
        if ((*(byte *)(lVar9 + 10 + lVar14) & 2) == 0) {
          (**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,_Dst,1);
        }
        if (iVar16 != param_3) {
          _Src = (void *)((ulonglong)*(byte *)(uVar10 + 0x1c + lVar15) * lVar12 +
                         *(longlong *)(uVar10 + lVar15));
          if ((~*(byte *)((longlong)puVar2 + 10) & 6) == 0) {
            memmove(_Dst,_Src,(ulonglong)*(byte *)(puVar2 + 1));
          }
          else {
            (**(code **)(*(longlong *)*puVar2 + 0x20))((longlong *)*puVar2,_Dst,_Src,1);
          }
        }
      }
      lVar15 = lVar15 + 0x20;
    } while ((ulonglong)uVar7 * 0x20 != lVar15);
  }
  if (iVar16 == param_3) {
    lVar15 = (longlong)param_3;
  }
  else {
    lVar15 = (longlong)iVar16;
    *(undefined2 *)(puVar8[3] + (longlong)param_3 * 2) = *(undefined2 *)(puVar8[3] + lVar15 * 2);
    uVar13 = (ulonglong)*(ushort *)(puVar8[3] + (longlong)param_3 * 2);
    lVar12 = *(longlong *)(param_1 + 0x98);
    *(short *)(lVar12 + uVar13 * 8) = (short)param_2;
    *(short *)(lVar12 + 2 + uVar13 * 8) = (short)param_3;
  }
  *(undefined2 *)(puVar8[3] + lVar15 * 2) = 0xffff;
  psVar1 = (short *)((longlong)puVar8 + 0xe);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    FUN_14085836e(param_1);
    FUN_14055d61a(param_1 + 8,param_2);
    FUN_14055d5b2(param_1 + 0x60,param_2);
    lVar12 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x50);
    }
    iVar16 = param_2 + 0x1f;
    if (-1 < param_2) {
      iVar16 = param_2;
    }
    bVar4 = (byte)param_2 & 0x1f;
    puVar3 = (uint *)(lVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else if (uVar5 == uVar6) {
    lVar12 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x50);
    }
    iVar16 = param_2 + 0x1f;
    if (-1 < param_2) {
      iVar16 = param_2;
    }
    puVar3 = (uint *)(lVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)param_2 & 0x1f);
  }
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
  return;
}



// FUNCTION 145721496 FUN_145721496 body=379 status=ok
// SIG undefined FUN_145721496(void)

longlong * FUN_145721496(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14056391a(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_1447712aa(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_1405638ee(param_2);
    if (0 < (int)local_2c) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cbebc2(param_2);
        FUN_1447712aa(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145721612 FUN_145721612 body=206 status=ok
// SIG undefined FUN_145721612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145721612(void)

{
  if ((DAT_14cb2c96f & 2) == 0) {
    DAT_14cb2c96f = DAT_14cb2c96f | 2;
    _DAT_14cb2c910 = L"FNiagaraSortKeyGenCS";
    _DAT_14cb2c928 = FUN_146826540;
    _DAT_14cb2c930 = FUN_146825d77;
    _DAT_14cb2c938 = FUN_146825fd6;
    _DAT_14cb2c940 = FUN_1407e02ea;
    _DAT_14cb2c948 = FUN_146826273;
    _DAT_14cb2c920 = FUN_148043570;
    _DAT_14cb2c960 = 0xffffffff000000e0;
    _DAT_14cb2c968 = 8;
    DAT_14cb2c96c = 0;
    _DAT_14cb2c950 = &LAB_14804359a;
    FUN_1457216e0();
    FUN_1407e00cc(&DAT_14cb2c908);
  }
  return &DAT_14cb2c908;
}



// FUNCTION 1457216e0 FUN_1457216e0 body=123 status=ok
// SIG undefined FUN_1457216e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457216e0(void)

{
  _DAT_14cb2d3e0 = L"BASE";
  DAT_14cb2d40a = 4;
  _DAT_14cb2d3e8 = FUN_140b35ae4();
  _DAT_14cb2d3f0 = DAT_14cb2c918;
  _DAT_14cb2d3f8 = &LAB_14682652b;
  DAT_14cb2c918 = &DAT_14cb2d3e0;
  DAT_14cb2c96d = DAT_14cb2c96d + '\x01';
  _DAT_14cb2d400 = 0x100000000;
  if (*(char *)(_DAT_14cb2d3e8 + 100) != '\0') {
    DAT_14cb2c96e = DAT_14cb2c96e + '\x01';
  }
  return;
}



// FUNCTION 14572175c FUN_14572175c body=138 status=ok
// SIG undefined FUN_14572175c(void)

code * FUN_14572175c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullPositionAttributeOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148047e40;
}



// FUNCTION 1457217e6 FUN_1457217e6 body=138 status=ok
// SIG undefined FUN_1457217e6(void)

code * FUN_1457217e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullPlanes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0xc;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148047d2c;
}



// FUNCTION 145721870 FUN_145721870 body=138 status=ok
// SIG undefined FUN_145721870(void)

code * FUN_145721870(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullOrientationAttributeOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14572175c;
}



// FUNCTION 1457218fa FUN_1457218fa body=205 status=ok
// SIG undefined FUN_1457218fa(void)

void FUN_1457218fa(longlong param_1)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined4)DAT_14c8464e0;
  uStack_94 = DAT_14c8464e0._4_4_;
  uStack_90 = (undefined4)DAT_14c8464e8;
  uStack_8c = DAT_14c8464e8._4_4_;
  local_88 = DAT_14c8464f0;
  local_68 = 0;
  local_60 = 0x3f800000;
  local_5c = 0;
  local_58 = 0xbf80000041200000;
  local_50 = 0;
  local_4c = 0x100;
  local_48 = 0;
  local_44 = 0x240000000;
  uStack_20 = uStack_20 & 0xffffff00;
  uStack_1c = 0;
  FUN_1457219c8(param_1 + 0x2fd0,&local_a8);
  *(undefined4 *)(param_1 + 0x3040) = local_38;
  *(undefined4 *)(param_1 + 0x3044) = uStack_34;
  *(undefined4 *)(param_1 + 0x3048) = uStack_30;
  *(undefined4 *)(param_1 + 0x304c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x3050) = local_28;
  *(undefined4 *)(param_1 + 0x3054) = uStack_24;
  *(uint *)(param_1 + 0x3058) = uStack_20;
  *(undefined4 *)(param_1 + 0x305c) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457219c8 FUN_1457219c8 body=144 status=ok
// SIG undefined FUN_1457219c8(void)

longlong * FUN_1457219c8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  *param_1 = lVar4;
  lVar4 = param_2[2];
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  param_1[1] = param_2[1];
  param_1[2] = lVar4;
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  if (param_2 != param_1) {
    if ((char)param_2[8] == '\x01') {
      param_1[7] = param_2[7];
      lVar4 = param_2[6];
      param_1[5] = param_2[5];
      param_1[6] = lVar4;
      uVar3 = 1;
    }
    else {
      if ((char)param_1[8] != '\x01') goto LAB_145721a04;
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 8) = uVar3;
  }
LAB_145721a04:
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  lVar4 = param_2[9];
  lVar1 = param_2[10];
  lVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = lVar2;
  param_1[9] = lVar4;
  param_1[10] = lVar1;
  return param_1;
}



// FUNCTION 145721a58 FUN_145721a58 body=421 status=ok
// SIG undefined FUN_145721a58(void)

void FUN_145721a58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined1 local_120 [4];
  undefined8 local_11c;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  local_68 = 0x3f800000;
  local_60 = 0;
  local_5c = 0;
  uVar5 = param_1[8];
  local_d0 = param_2;
  uVar3 = FUN_14477b664(param_1[9]);
  uVar4 = FUN_14477b664(uVar3);
  uVar3 = param_1[10];
  local_120[0] = 0;
  local_11c = 0;
  local_110 = uVar5;
  uVar5 = FUN_14477b664(uVar4);
  local_108 = FUN_14477b664(uVar5);
  local_f8 = 0;
  local_138 = 1;
  local_130 = &local_c8;
  local_128 = param_3;
  local_100 = uVar3;
  FUN_141504178(&local_f0,*(undefined8 *)(param_1[7] + 0xa8),local_120,&local_d0);
  if (&local_f0 != param_1) {
    *param_1 = local_f0;
    local_f0 = 0;
    plVar2 = (longlong *)param_1[1];
    param_1[1] = local_e8;
    local_e8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 2) = local_e0;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_dc;
  *(undefined4 *)(param_1 + 3) = uStack_d8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_d4;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_e8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if ((local_f8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_f8 + 0x50));
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145721bfe FUN_145721bfe body=214 status=ok
// SIG undefined FUN_145721bfe(void)

void FUN_145721bfe(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  __uint64 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = FUN_1404fa388();
  if (((param_2 != 0) && (cVar5 != '\0')) &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145721c9d;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*param_1 != 0) {
      local_38 = (undefined4)param_1[2];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_30 = (undefined4)param_1[3];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
      FUN_1404fa4f6(*param_1,&local_28);
      if (local_28 != (__uint64 *)0x0) {
        if ((*local_28 != 0xffffffffffffffff) && (DAT_14cb25ab0 == '\x01')) {
          AK::SoundEngine::SetSwitch(*(uint *)(param_2 + 0x48),*(uint *)(param_2 + 0x38),*local_28);
        }
        *(int *)(local_28 + 0x21) = (int)local_28[0x21] + -1;
        FUN_140d274d8(local_28);
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
LAB_145721c9d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145721cd6 FUN_145721cd6 body=123 status=ok
// SIG undefined FUN_145721cd6(void)

void FUN_145721cd6(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147d0add8(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x18) = param_2;
    FUN_1487d7616(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145721d52 FUN_145721d52 body=171 status=ok
// SIG undefined FUN_145721d52(void)

void FUN_145721d52(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar4 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 << 4;
    do {
      if (puVar4[1] == *param_2) {
        if (puVar4 != (undefined8 *)0x0) goto LAB_145721d96;
        break;
      }
      puVar4 = puVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_1487d875c(puVar1,iVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar3[lVar6 * 2] = 0;
  (puVar3 + lVar6 * 2)[1] = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6 * 2;
  puVar3[lVar6 * 2 + 1] = *param_2;
LAB_145721d96:
  *puVar4 = *param_3;
  return;
}



// FUNCTION 145721dfe FUN_145721dfe body=226 status=ok
// SIG undefined FUN_145721dfe(void)

longlong * FUN_145721dfe(longlong *param_1)

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
  pcVar13 = FUN_14647175a;
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



// FUNCTION 145721ee6 FUN_145721ee6 body=138 status=ok
// SIG undefined FUN_145721ee6(void)

code * FUN_145721ee6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumMeshes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145721f70;
}



// FUNCTION 145721f70 FUN_145721f70 body=138 status=ok
// SIG undefined FUN_145721f70(void)

code * FUN_145721f70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubImageSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148183da6;
}



// FUNCTION 145721ffa FUN_145721ffa body=49 status=ok
// SIG undefined FUN_145721ffa(void)

undefined8 FUN_145721ffa(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xd0) == '\x01')) {
    lVar1 = *(longlong *)(lVar1 + 0x348);
    uVar2 = 0;
    if ((lVar1 != 0) && (*(char *)(lVar1 + 8) != '\0')) {
      uVar2 = *(undefined8 *)(lVar1 + 0x2f0);
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 14572202c FUN_14572202c body=226 status=ok
// SIG undefined FUN_14572202c(void)

longlong * FUN_14572202c(longlong *param_1)

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
  pcVar13 = FUN_14646ab2c;
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



// FUNCTION 145722114 FUN_145722114 body=132 status=ok
// SIG undefined FUN_145722114(void)

undefined1 * FUN_145722114(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145722110;
}



// FUNCTION 145722198 FUN_145722198 body=10 status=ok
// SIG undefined FUN_145722198(void)

void FUN_145722198(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014572219b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d8))();
  return;
}



// FUNCTION 1457221a2 FUN_1457221a2 body=107 status=ok
// SIG undefined FUN_1457221a2(void)

void FUN_1457221a2(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_1 + 0x11a0);
  FUN_1404e49fa(param_1 + 0x1218,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572220e FUN_14572220e body=55 status=ok
// SIG undefined FUN_14572220e(void)

ulonglong FUN_14572220e(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 145722246 FUN_145722246 body=564 status=ok
// SIG undefined FUN_145722246(void)

void FUN_145722246(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
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
  uVar4 = *(uint *)(param_1 + 9);
  uVar3 = local_68;
  if (uVar4 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar4,4);
    if (0 < (int)uVar4) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
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
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar10 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar2 = *local_80;
        lVar7 = *(longlong *)(lVar2 + 8 + (longlong)iVar10 * 0x70);
        if (lVar7 == 0) {
          lVar7 = FUN_140067708();
        }
        puVar12 = (undefined8 *)(lVar2 + (longlong)iVar10 * 0x70);
        uVar3 = *puVar12;
        uVar6 = FUN_14477b664(lVar7);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar9 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar11 = (uint)uVar3 & 0xffff;
        iVar5 = FUN_144a78877(((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4),uVar9 >> 0x10 ^ uVar9
                             );
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)((longlong)puVar12 + 0x6c) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar12 + 0xd) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar10 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572247c FUN_14572247c body=112 status=ok
// SIG undefined FUN_14572247c(void)

void FUN_14572247c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x130,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x130)) {
      uVar2 = uVar1 / 0x130 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x130,0x10);
  }
  return;
}



// FUNCTION 1457224ec FUN_1457224ec body=115 status=ok
// SIG undefined FUN_1457224ec(void)

void FUN_1457224ec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14572255f FUN_14572255f body=149 status=ok
// SIG undefined FUN_14572255f(void)

void FUN_14572255f(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      *(undefined ***)(param_1 + lVar6) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(param_1 + 8 + lVar6) = *(undefined4 *)(param_2 + 8 + lVar6);
      *(undefined8 *)(param_1 + 0xc + lVar6) = *(undefined8 *)(param_2 + 0xc + lVar6);
      *(undefined4 *)(param_1 + 0x14 + lVar6) = *(undefined4 *)(param_2 + 0x14 + lVar6);
      *(byte *)(param_1 + 0x18 + lVar6) =
           *(byte *)(param_1 + 0x18 + lVar6) & 0xfe | *(byte *)(param_2 + 0x18 + lVar6) & 1;
      *(undefined1 *)(param_1 + 0x19 + lVar6) = *(undefined1 *)(param_2 + 0x19 + lVar6);
      *(undefined4 *)(param_1 + 0x20 + lVar6) = 6;
      *(longlong *)(param_1 + 0x28 + lVar6) = param_1 + lVar6;
      *(undefined ***)(param_1 + lVar6) = &PTR_FUN_14a418310;
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x3c + lVar6);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x3c + lVar6);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar6 = lVar6 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457225f4 FUN_1457225f4 body=179 status=ok
// SIG undefined FUN_1457225f4(void)

void FUN_1457225f4(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c872a72 == '\0') {
    FUN_1446ddc76(&local_20,"CoherentRenderingPlugin",1);
    uVar1 = FUN_144a52528();
    plVar2 = (longlong *)FUN_1401e3324(uVar1,local_20);
    lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
    lVar4 = *(longlong *)(param_1 + 0x140);
    if (lVar4 != 0) {
      if ((*(int *)(lVar3 + 0x50) != 0) && (*(longlong **)(lVar3 + 0x48) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x60))();
        lVar4 = *(longlong *)(param_1 + 0x140);
      }
      FUN_14058be5a(lVar4);
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457226a8 FUN_1457226a8 body=132 status=ok
// SIG undefined FUN_1457226a8(void)

void FUN_1457226a8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14572272e FUN_14572272e body=99 status=ok
// SIG undefined FUN_14572272e(void)

undefined8 * FUN_14572272e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9456f0;
  param_1[5] = &PTR_LAB_14b945b70;
  param_1[6] = &PTR_LAB_14b945bb0;
  FUN_145722844(param_1 + 0x4d);
  FUN_145722792(param_1 + 0x22);
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145722792 FUN_145722792 body=69 status=ok
// SIG undefined FUN_145722792(void)

void FUN_145722792(longlong *param_1)

{
  FUN_1457227d8(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457227d8 FUN_1457227d8 body=108 status=ok
// SIG undefined FUN_1457227d8(void)

void FUN_1457227d8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 145722844 FUN_145722844 body=255 status=ok
// SIG undefined FUN_145722844(void)

void FUN_145722844(longlong param_1)

{
  FUN_1449e6b18(param_1 + 0x108);
  FUN_1449e6b18(param_1 + 0xfc);
  FUN_1449e6b18(param_1 + 0xf0);
  FUN_1449e6b18(param_1 + 0xe4);
  FUN_1449e6b18(param_1 + 0xd8);
  FUN_1449e6b18(param_1 + 0xcc);
  FUN_1449e6b18(param_1 + 0xc0);
  FUN_1449e6b18(param_1 + 0xb4);
  FUN_1449e6b18(param_1 + 0xa8);
  FUN_1449e6b18(param_1 + 0x9c);
  FUN_1449e6b18(param_1 + 0x90);
  FUN_1449e6b18(param_1 + 0x84);
  FUN_1449e6b18(param_1 + 0x78);
  FUN_1449e6b18(param_1 + 0x6c);
  FUN_1449e6b18(param_1 + 0x60);
  FUN_1449e6b18(param_1 + 0x54);
  FUN_1449e6b18(param_1 + 0x48);
  FUN_1449e6b18(param_1 + 0x3c);
  FUN_1449e6b18(param_1 + 0x30);
  FUN_1449e6b18(param_1 + 0x24);
  FUN_1449e6b18(param_1 + 0x18);
  FUN_1449e6b18(param_1 + 0xc);
  FUN_1449e6b18(param_1);
  return;
}



// FUNCTION 145722944 FUN_145722944 body=92 status=ok
// SIG undefined FUN_145722944(void)

undefined8 * FUN_145722944(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  return param_1;
}



// FUNCTION 1457229a0 FUN_1457229a0 body=19 status=ok
// SIG undefined FUN_1457229a0(void)

undefined8 FUN_1457229a0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  lVar3 = *(longlong *)(param_1 + 0x5a8);
  if (lVar3 == 0) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(lVar3 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(lVar3 + 0x20), lVar5 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = (code *)&LAB_14355090c;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_147b8e16d;
        pcStack_50 = (code *)&LAB_140810a38;
        pwStack_58 = L"Engine";
        uStack_60 = 0x800000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_1449e2820;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_1468c5283;
        pcStack_50 = FUN_142809da0;
        pwStack_58 = L"Engine";
        uStack_60 = 0x400000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
             (lVar6 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar5 + 0x30)) {
            lVar6 = 0;
          }
        } while ((lVar6 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if (lVar6 != 0) {
          uVar4 = *(undefined8 *)(lVar6 + 0xc0);
          goto LAB_1447211c7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1447211c7:
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457229b4 FUN_1457229b4 body=38 status=ok
// SIG undefined FUN_1457229b4(void)

undefined8 FUN_1457229b4(undefined8 param_1,int param_2)

{
  FUN_1457229da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457229da FUN_1457229da body=316 status=ok
// SIG undefined FUN_1457229da(void)

void FUN_1457229da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bea9890;
  param_1[0xb] = 0;
  plVar3 = (longlong *)param_1[0xc];
  if (plVar3 != (longlong *)0x0) {
    param_1[0xc] = 0;
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
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145722b40(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145722b76(param_1 + 0x11);
  lVar4 = 0;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4 + 0x80);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    lVar4 = lVar4 + -8;
  } while (lVar4 != -0x10);
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
  }
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
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145722bac(param_1 + 1);
  return;
}



// FUNCTION 145722b16 FUN_145722b16 body=42 status=ok
// SIG undefined FUN_145722b16(void)

void FUN_145722b16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145806982(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145722b40 FUN_145722b40 body=53 status=ok
// SIG undefined FUN_145722b40(void)

void FUN_145722b40(longlong *param_1)

{
  FUN_145722be2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145722b76 FUN_145722b76 body=53 status=ok
// SIG undefined FUN_145722b76(void)

void FUN_145722b76(longlong *param_1)

{
  FUN_145722c3c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145722bac FUN_145722bac body=53 status=ok
// SIG undefined FUN_145722bac(void)

void FUN_145722bac(longlong *param_1)

{
  FUN_14059efac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145722be2 FUN_145722be2 body=90 status=ok
// SIG undefined FUN_145722be2(void)

void FUN_145722be2(longlong param_1)

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



// FUNCTION 145722c3c FUN_145722c3c body=90 status=ok
// SIG undefined FUN_145722c3c(void)

void FUN_145722c3c(longlong param_1)

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



// FUNCTION 145722c96 FUN_145722c96 body=40 status=ok
// SIG undefined FUN_145722c96(void)

undefined8 FUN_145722c96(undefined8 param_1,int param_2)

{
  FUN_145722cbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145722cbe FUN_145722cbe body=517 status=ok
// SIG undefined FUN_145722cbe(void)

void FUN_145722cbe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab29df0;
  param_1[6] = &PTR_FUN_14ab2a0d0;
  param_1[8] = &PTR_FUN_14ab2a120;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_145722f86(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_145722fbc(param_1 + 0x4a);
  FUN_145722f54(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145722ff2(param_1 + 0x30);
  FUN_14482129f(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14059f148(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145722ec4(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145722ec4(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1410891e4(param_1);
  return;
}



// FUNCTION 145722ec4 FUN_145722ec4 body=53 status=ok
// SIG undefined FUN_145722ec4(void)

void FUN_145722ec4(longlong *param_1)

{
  FUN_145722efa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145722efa FUN_145722efa body=90 status=ok
// SIG undefined FUN_145722efa(void)

void FUN_145722efa(longlong param_1)

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



// FUNCTION 145722f54 FUN_145722f54 body=50 status=ok
// SIG undefined FUN_145722f54(void)

void FUN_145722f54(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xa8;
    do {
      FUN_147dd7dac(param_1);
      param_1 = param_1 + 0xd8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145722f86 FUN_145722f86 body=53 status=ok
// SIG undefined FUN_145722f86(void)

void FUN_145722f86(longlong *param_1)

{
  FUN_145723080();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145722fbc FUN_145722fbc body=53 status=ok
// SIG undefined FUN_145722fbc(void)

void FUN_145722fbc(longlong *param_1)

{
  FUN_1457230d8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145722ff2 FUN_145722ff2 body=53 status=ok
// SIG undefined FUN_145722ff2(void)

void FUN_145722ff2(longlong *param_1)

{
  FUN_145723028();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145723028 FUN_145723028 body=88 status=ok
// SIG undefined FUN_145723028(void)

void FUN_145723028(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
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



// FUNCTION 145723080 FUN_145723080 body=88 status=ok
// SIG undefined FUN_145723080(void)

void FUN_145723080(longlong param_1)

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



// FUNCTION 1457230d8 FUN_1457230d8 body=332 status=ok
// SIG undefined FUN_1457230d8(void)

void FUN_1457230d8(longlong *param_1)

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
      FUN_147dd4286((longlong)iStack_4c * 0x78 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 145723226 FUN_145723226 body=1074 status=ok
// SIG undefined FUN_145723226(void)

void FUN_145723226(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_3a8 [32];
  undefined4 *local_388;
  undefined4 *local_380;
  undefined8 *local_378;
  undefined2 *local_368;
  int local_360;
  undefined2 *local_358;
  int local_350;
  undefined2 *local_348;
  int local_340;
  undefined8 local_338;
  undefined1 local_330 [8];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined2 *local_2d0;
  int local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  undefined4 local_2b0 [8];
  undefined1 local_290;
  undefined1 local_288 [16];
  longlong local_278;
  undefined1 local_268 [32];
  byte local_248;
  undefined1 local_240 [32];
  undefined1 local_220;
  undefined1 local_218 [16];
  longlong local_208;
  undefined1 local_1f8 [32];
  byte local_1d8;
  undefined1 local_1d0 [32];
  undefined1 local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  undefined1 local_188 [32];
  byte local_168;
  undefined1 local_160 [144];
  char local_d0 [8];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_2b8 = param_2 + 0x3c0;
  if (local_2b8 != 0) {
    local_2c0 = &local_2b8;
    FUN_14059f1fa(&local_2c0,&local_2d0);
    puVar5 = &DAT_149dfb77a;
    if (local_2c8 != 0) {
      puVar5 = local_2d0;
    }
    local_1b0 = 0;
    FUN_14101bd16(local_1d0,puVar5);
    puVar5 = &DAT_149dfb77a;
    if (DAT_14cbd1008 != 0) {
      puVar5 = DAT_14cbd1000;
    }
    local_388 = (undefined4 *)local_1d0;
    FUN_140d767d6(&local_1a8,&DAT_14cbd0df0,3,puVar5);
    if ((*(longlong *)(local_1a8 + 0x3c) == 0) || (*(char *)(local_1a8 + 0x38) < local_1a0)) {
      FUN_14059f1fa(&local_2c0,&local_368);
      puVar5 = &DAT_149dfb77a;
      if (local_360 != 0) {
        puVar5 = local_368;
      }
      local_290 = 0;
      FUN_14101bd16(local_2b0,puVar5);
      puVar5 = &DAT_149dfb77a;
      if (DAT_14cbd1008 != 0) {
        puVar5 = DAT_14cbd1000;
      }
      local_388 = local_2b0;
      FUN_140d767d6(local_288,&DAT_14cbd0df0,3,puVar5);
      FUN_140d76846(local_160,local_288);
      bVar3 = false;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x1c8);
      if (lVar2 == 0) {
        local_2d8 = DAT_14c8464f0;
        local_2e8 = (undefined4)DAT_14c8464e0;
        uStack_2e4 = DAT_14c8464e0._4_4_;
        uStack_2e0 = (undefined4)DAT_14c8464e8;
        uStack_2dc = DAT_14c8464e8._4_4_;
      }
      else {
        local_2e8 = *(undefined4 *)(lVar2 + 0x260);
        uStack_2e4 = *(undefined4 *)(lVar2 + 0x264);
        uStack_2e0 = *(undefined4 *)(lVar2 + 0x268);
        uStack_2dc = *(undefined4 *)(lVar2 + 0x26c);
        local_2d8 = *(undefined8 *)(lVar2 + 0x270);
      }
      local_328 = local_2e8;
      uStack_324 = uStack_2e4;
      uStack_320 = uStack_2e0;
      uStack_31c = uStack_2dc;
      local_318 = local_2d8;
      local_308 = local_2e8;
      uStack_304 = uStack_2e4;
      uStack_300 = uStack_2e0;
      uStack_2fc = uStack_2dc;
      local_2f8 = local_2d8;
      FUN_14059f2b0(param_2,local_330);
      uVar1 = *param_3;
      uVar4 = FUN_145723659();
      FUN_1414aa4be(uVar4,local_d0,uVar1);
      FUN_1400021e4(local_d0,&local_348);
      puVar5 = &DAT_149dfb77a;
      if (local_340 != 0) {
        puVar5 = local_348;
      }
      local_338 = FUN_1414aa4f6(puVar5);
      FUN_14059f1fa(&local_2c0,&local_358);
      puVar5 = &DAT_149dfb77a;
      if (local_350 != 0) {
        puVar5 = local_358;
      }
      local_220 = 0;
      FUN_14101bd16(local_240,puVar5);
      puVar5 = &DAT_149dfb77a;
      if (DAT_14cbd1008 != 0) {
        puVar5 = DAT_14cbd1000;
      }
      local_388 = (undefined4 *)local_240;
      FUN_140d767d6(local_218,&DAT_14cbd0df0,3,puVar5);
      local_388 = &local_328;
      local_380 = &uStack_300;
      local_378 = &local_2d8;
      FUN_145723692(local_160,local_218,&local_338,local_330);
      bVar3 = true;
    }
    FUN_14027c224(local_d0,local_160);
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (local_d0[0] == '\x01') {
      FUN_140f3f840(local_c8,uVar4);
    }
    FUN_14027c198(local_d0);
    FUN_1404eeb8e(local_160);
    if (bVar3) {
      (*(code *)(&PTR_FUN_14a1842f0)[local_1d8])(local_1f8);
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      local_368 = local_348;
      if (local_358 != (undefined2 *)0x0) {
        FUN_1400020a8();
        local_368 = local_348;
      }
    }
    else {
      (*(code *)(&PTR_FUN_14a1842f0)[local_248])(local_268);
      if (local_278 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_368 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_168])(local_188);
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_2d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145723659 FUN_145723659 body=57 status=ok
// SIG undefined FUN_145723659(void)

void FUN_145723659(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfb40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfb40 = FUN_14171c317(FUN_146613df0,uVar1,L"EPoAActorClaimPhase");
  }
  return;
}



// FUNCTION 145723692 FUN_145723692 body=92 status=ok
// SIG undefined FUN_145723692(void)

longlong *
FUN_145723692(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14027c0e6();
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    FUN_1457236ee(param_1,param_3,param_4,param_5,param_6,param_7);
  }
  return param_1;
}



// FUNCTION 1457236ee FUN_1457236ee body=158 status=ok
// SIG undefined FUN_1457236ee(void)

undefined8
FUN_1457236ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_140d76916(param_1,5);
  FUN_1457e191e(param_1,&DAT_14cbd1010,param_2);
  FUN_145c5d994(param_1,&DAT_14cbd1020,param_3);
  FUN_14572378c(param_1,&DAT_14cbd1030,param_4);
  FUN_14572378c(param_1,&DAT_14cbd1040,param_5);
  FUN_14572378c(param_1,&DAT_14cbd1050,param_6);
  return param_1;
}



// FUNCTION 14572378c FUN_14572378c body=128 status=ok
// SIG undefined FUN_14572378c(void)

longlong * FUN_14572378c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar2 + lVar4) = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 3;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 14572380c FUN_14572380c body=113 status=ok
// SIG undefined FUN_14572380c(void)

undefined8 * FUN_14572380c(undefined8 *param_1)

{
  FUN_1409e1656();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b4205a0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x200000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 14572387e FUN_14572387e body=162 status=ok
// SIG undefined FUN_14572387e(void)

void FUN_14572387e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457238bd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457238bd;
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
LAB_1457238bd:
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
                    /* WARNING: Could not recover jumptable at 0x00014572391c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145723920 FUN_145723920 body=614 status=ok
// SIG undefined FUN_145723920(void)

void FUN_145723920(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_144a61b4f();
  if (cVar4 == '\0') goto LAB_145723ae2;
  if (*(longlong *)(param_2 + 0x1f0) == 0) {
LAB_145723b03:
    lVar9 = 0;
  }
  else {
    lVar6 = FUN_144a79464();
    lVar8 = *(longlong *)(param_2 + 0x1f0);
    if (lVar8 == 0) goto LAB_145723b03;
    lVar9 = 0;
    if ((lVar6 != 0) && (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x38) < *(int *)(lVar6 + 0x38)) goto LAB_145723b03;
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30) {
        lVar9 = lVar8;
      }
    }
  }
  FUN_14485c47a(param_1 + 0x18,lVar9);
  cVar4 = FUN_144729dda(param_1 + 0x18);
  if (cVar4 != '\0') {
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *puVar7 = &PTR_FUN_14b3e7ea0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    plVar2 = *(longlong **)(param_1 + 0x78);
    *(undefined8 **)(param_1 + 0x78) = puVar7;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
      puVar7 = *(undefined8 **)(param_1 + 0x78);
    }
    FUN_145723b88(puVar7);
    FUN_14485c47a(param_1 + 0x20,param_3);
    if (param_3 == 0) {
      DAT_14cb713cc = DAT_14cb713cc + 1;
      FUN_140002266(&local_40,L"AreaPreStream_NoPawn_%d");
      iVar3 = local_38 + -1;
      if (local_38 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(&local_50,iVar3,local_40,1);
      *(undefined2 **)(*(longlong *)(param_1 + 0x78) + 8) = local_50;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar8 = *(longlong *)(param_1 + 0x78);
      uVar5 = 0;
    }
    else {
      lVar8 = FUN_14479d2ce(param_1 + 0x20);
      local_40 = *(longlong *)(lVar8 + 0x18);
      FUN_1400021e4(&local_40,&local_50);
      puVar10 = local_50;
      if (local_48 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_40,L"AreaPreStream_%ls",puVar10);
      iVar3 = local_38 + -1;
      if (local_38 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(&local_30,iVar3,local_40,1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8) = local_30;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = *(longlong *)(param_1 + 0x78);
      uVar5 = FUN_1405a7af8(param_1);
    }
    *(undefined1 *)(lVar8 + 0x30) = uVar5;
    if ((param_2 != 0) && (lVar8 = FUN_14011c706(param_2), lVar8 != 0)) {
      FUN_1405a798a(param_1,param_2);
    }
  }
LAB_145723ae2:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145723b88 FUN_145723b88 body=77 status=ok
// SIG undefined FUN_145723b88(void)

void FUN_145723b88(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  cVar2 = FUN_144729dda(param_1 + 0x34);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x34);
    FUN_145a00ca4(lVar1 + 0xf8,param_1);
    *(undefined8 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 145723bd6 FUN_145723bd6 body=428 status=ok
// SIG undefined FUN_145723bd6(void)

longlong * FUN_145723bd6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145723cb6:
    *puVar5 = &PTR_LAB_14ab18ff0;
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
    *puVar5 = &PTR_FUN_14b3e8c50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145723cb6;
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
    *puVar5 = &PTR_LAB_14ab18ff0;
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
    *puVar5 = &PTR_FUN_14b3e8c50;
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



// FUNCTION 145723d82 FUN_145723d82 body=132 status=ok
// SIG undefined FUN_145723d82(void)

void FUN_145723d82(longlong param_1,int param_2)

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



// FUNCTION 145723e06 FUN_145723e06 body=139 status=ok
// SIG undefined FUN_145723e06(void)

float FUN_145723e06(longlong param_1,longlong *param_2,undefined4 param_3)

{
  float fVar1;
  
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x120) == '\x02')) {
    fVar1 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
    if ((0.0 < fVar1) && (0.0 < *(float *)(param_1 + 0x15c))) {
      fVar1 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
      return fVar1 / (*(float *)(param_1 + 0x15c) -
                     *(float *)(*(longlong *)(param_1 + 0x160) + 0x4c8));
    }
  }
  fVar1 = (float)FUN_1405b00c0(param_1,param_2,param_3);
  return fVar1;
}



// FUNCTION 145723e91 FUN_145723e91 body=150 status=ok
// SIG undefined FUN_145723e91(void)

undefined8 FUN_145723e91(undefined8 param_1)

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
  uVar1 = FUN_145a50b58();
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



// FUNCTION 145723f28 FUN_145723f28 body=57 status=ok
// SIG undefined FUN_145723f28(void)

void FUN_145723f28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ad20 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ad20 = FUN_140002ddd(FUN_14641a49c,uVar1,L"TaggedAnimDef");
  }
  return;
}



// FUNCTION 145723f62 FUN_145723f62 body=901 status=ok
// SIG undefined FUN_145723f62(void)

void FUN_145723f62(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [12];
  void *local_178;
  int local_170;
  undefined4 local_16c;
  void *local_168;
  ulonglong uStack_160;
  undefined8 local_150;
  undefined8 local_148 [2];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_e0 = 0;
  local_d8 = 0x7109;
  local_d0 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_148[0] = 0;
  local_148[1] = 0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0x3ff00000;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0x3ff00000;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  local_150 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  local_168 = (void *)0x0;
  uStack_160 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_168);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0x3002;
  local_a8 = 0;
  local_70 = 0;
  local_68 = 0x200000000;
  FUN_1405c5f70();
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  _Src = local_168;
  puVar5 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_160;
  local_170 = (int)uStack_160;
  if (lVar2 == 0) {
    local_16c = 0;
  }
  else {
    FUN_1457242e8(&local_178,uStack_160 & 0xffffffff,0);
    memcpy(local_178,_Src,lVar2 << 3);
  }
  uVar1 = local_150;
  puVar3 = local_148;
  puVar4 = local_1d8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1f0 = local_e0;
  local_1e8 = local_d8;
  local_1e0 = 0;
  local_1f8 = puVar5;
  uVar1 = FUN_14572434a(&local_1f0,local_1d8,uVar1,&local_178);
  *param_3 = uVar1;
  FUN_1405c6060(&local_c8);
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457242e8 FUN_1457242e8 body=98 status=ok
// SIG undefined FUN_1457242e8(void)

void FUN_1457242e8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14572434a FUN_14572434a body=416 status=ok
// SIG undefined FUN_14572434a(void)

longlong FUN_14572434a(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_198 [32];
  code **local_178;
  undefined8 local_170;
  undefined8 local_168 [12];
  code *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 local_c8 [16];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_98;
  byte local_96;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = FUN_1457244ec();
  lVar3 = 0;
  if ((param_3 != 0) && (lVar2 != 0)) {
    iVar1 = FUN_14487fd02(param_3);
    if (iVar1 == 3) {
      lVar3 = 0;
    }
    else {
      FUN_1411371f6(local_c8);
      local_96 = local_96 | 6;
      local_b8 = param_3;
      lVar3 = FUN_144a7cbb2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
        local_b0 = param_3;
      }
      local_98 = 1;
      puVar6 = local_168;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *param_2;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar4 = FUN_1447210f0(param_3);
      uVar5 = FUN_14135d6cc();
      lVar3 = FUN_141037e38(uVar4,uVar5,local_168,local_c8);
      if (lVar3 != 0) {
        local_170 = 0;
        FUN_14485c47a(&local_170,lVar3);
        local_178 = local_108;
        local_f8 = 0;
        local_e8 = &PTR_LAB_14b95ef20;
        local_e0 = local_170;
        local_108[0] = FUN_1440c470e;
        FUN_145724584(lVar3,lVar2,param_4,param_5);
      }
      if (local_88 != 0) {
        if (local_78 == (longlong *)0x0) {
          local_78 = local_68;
        }
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457244ec FUN_1457244ec body=137 status=ok
// SIG undefined FUN_1457244ec(void)

longlong FUN_1457244ec(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    lVar1 = FUN_14572457c();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = thunk_FUN_144815d88(lVar1,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145724576 thunk_FUN_144815d88 body=5 status=ok
// SIG undefined thunk_FUN_144815d88(void)

ulonglong thunk_FUN_144815d88(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)param_1 + 0x1fc) < (int)param_1[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar5 = (int)param_1[0x59];
    uVar13 = *param_2;
    if ((longlong)iVar5 == -1) {
      if (((uVar13 != 0) && (param_2[1] != 0)) && (uVar13 != DAT_14c948000)) {
        puVar6 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar6 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar13 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar13 == 0) || (uVar4 = param_2[1], uVar4 == 0)) || (uVar13 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < (int)uVar4) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (uVar4 == 1 && 0 < iVar5) {
        puVar7 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)param_1 + 0x2cc) == 1) {
          puVar7 = puVar9;
        }
        uVar13 = *puVar7;
        puVar6 = (ulonglong *)(puVar7 + 1);
      }
      else {
        if ((int)uVar4 <= iVar5) goto LAB_1448160f1;
        puVar6 = (ulonglong *)(puVar9 + (longlong)iVar5 * 3 + 1);
        uVar13 = puVar9[(longlong)iVar5 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar6;
    uVar14 = uVar2 >> 0x20;
    uVar4 = uVar13;
    if (uVar14 != 0) {
      uVar4 = FUN_144a78877(uVar13,uVar14);
    }
    if ((int)param_1[0x50] != *(int *)((longlong)param_1 + 0x2ac)) {
      plVar10 = param_1 + 0x56;
      if ((longlong *)param_1[0x57] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x57];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x58] - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        plVar10 = param_1 + 0x4f;
        lVar8 = *plVar10;
        uVar14 = 0;
LAB_144815ffc:
        lVar17 = (longlong)iVar5 * 0x20;
        if ((*(uint *)(lVar8 + lVar17) != uVar13) ||
           (lVar1 = lVar8 + lVar17, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar14 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar8 = *(longlong *)(lVar1 + 0x10);
          if (lVar8 != 0) {
            lVar17 = *(longlong *)(lVar8 + 0x60);
            if (lVar17 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar17 + 0x18,(int)param_1[0x59],
                              *(undefined4 *)((longlong)param_1 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar5 = FUN_144b0847a(plVar10);
                if (iVar5 == -1) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (longlong)iVar5 * 0x20 + *plVar10;
                }
                plVar11 = (longlong *)(lVar8 + 0x10);
                if (lVar8 == 0) {
                  plVar11 = (longlong *)0x0;
                }
                lVar8 = *plVar11;
                lVar17 = *(longlong *)(lVar8 + 0x60);
              } while (lVar17 != 0);
            }
            uVar14 = *(ulonglong *)(lVar8 + 0x30);
            uStack_40 = uVar14;
            if (uVar14 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(param_1,&uStack_40,lVar8);
            uVar14 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar8 + 0x30) = uStack_40;
              if (lVar8 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar8);
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
    cVar3 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar3 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar9 = (uint *)&DAT_14c948618;
    if (((*param_2 != 0) && (0 < (int)param_2[1])) && (*param_2 != DAT_14c948000)) {
      puVar9 = param_2 + 2;
      if (0 < (int)param_2[9]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
      if (1 < param_2[1]) {
        puVar9 = *(uint **)(param_2 + 6);
      }
    }
    uVar13 = *puVar9;
    uVar4 = puVar9[2];
    uVar12 = uVar13;
    if (uVar4 != 0) {
      uVar12 = uVar4 >> 0xd ^ uVar13 - uVar4;
      uVar15 = uVar12 << 8 ^ (-0x61c88647 - uVar4) - uVar12;
      uVar16 = uVar15 >> 0xd ^ (uVar4 - uVar12) - uVar15;
      uVar12 = uVar16 >> 0xc ^ (uVar12 - uVar15) - uVar16;
      uVar18 = uVar12 << 0x10 ^ (uVar15 - uVar16) - uVar12;
      uVar15 = uVar18 >> 5 ^ (uVar16 - uVar12) - uVar18;
      uVar16 = uVar15 >> 3 ^ (uVar12 - uVar18) - uVar15;
      uVar12 = uVar16 << 10 ^ (uVar18 - uVar15) - uVar16;
      uVar12 = uVar12 >> 0xf ^ uVar15 - (uVar16 + uVar12);
    }
    if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
      plVar10 = param_1 + 0x40;
      if ((longlong *)param_1[0x41] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0x41];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar12) * 4);
      if (iVar5 != -1) {
        lVar8 = param_1[0x39];
        uVar14 = 0;
        do {
          lVar17 = (longlong)iVar5 * 0x20;
          if ((*(uint *)(lVar8 + lVar17) == uVar13) &&
             (lVar1 = lVar8 + lVar17, *(uint *)(lVar1 + 8) == uVar4)) {
            uVar14 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar14 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
        } while (iVar5 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar14 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar5 = *(int *)(lVar8 + 0x18 + lVar17);
  if (iVar5 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 14572457c FUN_14572457c body=8 status=ok
// SIG undefined FUN_14572457c(void)

undefined8 FUN_14572457c(void)

{
  return DAT_14cbc1a68;
}



// FUNCTION 145724584 FUN_145724584 body=355 status=ok
// SIG undefined FUN_145724584(void)

void FUN_145724584(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x3b0) = param_2;
    uVar15 = FUN_1405c60c4(param_2);
    FUN_1447325ac(uVar15,&local_80,1);
    if (*(longlong *)(param_1 + 0x3c8) != local_80) {
      *(undefined8 *)(param_1 + 0x3d8) = 0;
    }
    *(longlong *)(param_1 + 0x3c8) = local_80;
    *(undefined1 *)(param_1 + 0x4b0) = 1;
    FUN_1457246e8(param_1 + 0x400,param_3);
    uVar15 = *(undefined8 *)(param_1 + 0x500);
    uVar1 = *(undefined8 *)(param_1 + 0x508);
    uVar2 = *(undefined8 *)(param_1 + 0x510);
    uVar3 = *(undefined8 *)(param_1 + 0x518);
    uVar4 = *(undefined8 *)(param_1 + 0x520);
    uVar5 = *(undefined8 *)(param_1 + 0x528);
    uVar6 = *(undefined8 *)(param_1 + 0x530);
    uVar7 = *(undefined8 *)(param_1 + 0x538);
    lVar8 = *param_5;
    lVar9 = param_5[1];
    lVar10 = param_5[2];
    lVar11 = param_5[3];
    lVar12 = param_5[4];
    lVar13 = param_5[5];
    lVar14 = param_5[7];
    *(longlong *)(param_1 + 0x530) = param_5[6];
    *(longlong *)(param_1 + 0x538) = lVar14;
    *(longlong *)(param_1 + 0x520) = lVar12;
    *(longlong *)(param_1 + 0x528) = lVar13;
    *(longlong *)(param_1 + 0x510) = lVar10;
    *(longlong *)(param_1 + 0x518) = lVar11;
    *(longlong *)(param_1 + 0x500) = lVar8;
    *(longlong *)(param_1 + 0x508) = lVar9;
    local_78._0_4_ = (undefined4)uVar15;
    local_78._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
    uStack_70._0_4_ = (undefined4)uVar1;
    uStack_70._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_68._0_4_ = (undefined4)uVar2;
    local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_60._0_4_ = (undefined4)uVar3;
    uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_58._0_4_ = (undefined4)uVar4;
    local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_50._0_4_ = (undefined4)uVar5;
    uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_48._0_4_ = (undefined4)uVar6;
    local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_40._0_4_ = (undefined4)uVar7;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    *(undefined4 *)(param_5 + 6) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_5 + 0x34) = local_48._4_4_;
    *(undefined4 *)(param_5 + 7) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_5 + 0x3c) = uStack_40._4_4_;
    *(undefined4 *)(param_5 + 4) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_5 + 0x24) = local_58._4_4_;
    *(undefined4 *)(param_5 + 5) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_5 + 0x2c) = uStack_50._4_4_;
    *(undefined4 *)(param_5 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_5 + 0x14) = local_68._4_4_;
    *(undefined4 *)(param_5 + 3) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_5 + 0x1c) = uStack_60._4_4_;
    *(undefined4 *)param_5 = (undefined4)local_78;
    *(undefined4 *)((longlong)param_5 + 4) = local_78._4_4_;
    *(undefined4 *)(param_5 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_5 + 0xc) = uStack_70._4_4_;
    local_78 = uVar15;
    uStack_70 = uVar1;
    local_68 = uVar2;
    uStack_60 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    local_48 = uVar6;
    uStack_40 = uVar7;
    FUN_145724740(param_1,param_4);
    FUN_145af3022(param_1);
  }
  if (*param_5 != 0) {
    plVar16 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457246e8 FUN_1457246e8 body=88 status=ok
// SIG undefined FUN_1457246e8(void)

undefined8 * FUN_1457246e8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1457242e8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145724740 FUN_145724740 body=2528 status=ok
// SIG undefined FUN_145724740(void)

void FUN_145724740(longlong param_1,float *param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  double *pdVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  double local_88;
  double local_80;
  double local_78;
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  if (lVar3 == 0) goto LAB_145724ed2;
  if (0.0 < *param_2) {
    *(float *)(param_1 + 0x420) = *param_2;
  }
  else {
    local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
    local_60 = 0;
    FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
    FUN_1448729ea(lVar3 + 0x3a0,local_58,&local_88);
    uVar9 = FUN_144a7b41a(local_58);
    *(undefined4 *)(param_1 + 0x420) = uVar9;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar8 = local_58;
      if (0x18 < local_40) {
        ppppuVar8 = (undefined8 ****)local_58[0];
      }
      (*pcVar1)(ppppuVar8);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(&local_88);
  }
  if (0.0 < param_2[1]) {
    *(float *)(param_1 + 0x428) = param_2[1];
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3b0);
    local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
    local_60 = 0;
    FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
    FUN_1448729ea(lVar3 + 0x440,local_58,&local_88);
    uVar9 = FUN_144a7b41a(local_58);
    *(undefined4 *)(param_1 + 0x428) = uVar9;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar8 = local_58;
      if (0x18 < local_40) {
        ppppuVar8 = (undefined8 ****)local_58[0];
      }
      (*pcVar1)(ppppuVar8);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(&local_88);
  }
  pfVar7 = param_2 + 4;
  lVar3 = FUN_1405faa04(pfVar7);
  if (lVar3 == 0) {
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x3b0) + 0x490);
  }
  uVar4 = FUN_1405faa04(pfVar7);
  FUN_144a79b68(&local_88,uVar4);
  if (*(double *)(param_1 + 1000) != local_88) {
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  *(double *)(param_1 + 1000) = local_88;
  if ((int)param_2[0x18] < 1) {
LAB_1457248ff:
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x3b0) + 0x4a8);
  }
  else {
    pfVar7 = param_2 + 10;
    pfVar6 = *(float **)(param_2 + 0x16);
    if (*(float **)(param_2 + 0x16) == (float *)0x0) {
      pfVar6 = pfVar7;
    }
    if ((*(longlong *)pfVar6 == 0) || (0xfffffffd < (int)pfVar6[2] - 1U)) goto LAB_1457248ff;
  }
  FUN_14118c70e(param_1 + 0x430,pfVar7);
  pfVar7 = param_2 + 0x1a;
  cVar2 = FUN_1449ede12(pfVar7);
  if (cVar2 != '\0') {
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x3b0) + 0x4e8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x470) + 0x20))(param_1 + 0x470,0);
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(pfVar7 + 2);
  FUN_1406022fe(param_1 + 0x480,pfVar7 + 4);
  if (0.0 < param_2[2]) {
    *(float *)(param_1 + 0x3e0) = param_2[2];
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3b0);
    local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
    local_60 = 0;
    FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
    FUN_1448729ea(lVar3 + 0x18,local_58,&local_88);
    uVar9 = FUN_144a7b41a(local_58);
    *(undefined4 *)(param_1 + 0x3e0) = uVar9;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar8 = local_58;
      if (0x18 < local_40) {
        ppppuVar8 = (undefined8 ****)local_58[0];
      }
      (*pcVar1)(ppppuVar8);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(&local_88);
  }
  if (0.0 < param_2[3]) {
    *(float *)(param_1 + 0x3e4) = param_2[3];
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3b0);
    local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
    local_60 = 0;
    FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
    FUN_1448729ea(lVar3 + 0x68,local_58,&local_88);
    uVar9 = FUN_144a7b41a(local_58,0);
    *(undefined4 *)(param_1 + 0x3e4) = uVar9;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar8 = local_58;
      if (0x18 < local_40) {
        ppppuVar8 = (undefined8 ****)local_58[0];
      }
      (*pcVar1)(ppppuVar8);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(&local_88);
  }
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = 0;
  FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
  FUN_1448729ea(lVar3 + 0x248,local_58,&local_88);
  uVar9 = FUN_144a7b41a(local_58,0x42480000);
  *(undefined4 *)(param_1 + 0x494) = uVar9;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar8 = local_58;
    if (0x18 < local_40) {
      ppppuVar8 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = 0;
  FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
  FUN_1448729ea(lVar3 + 0x298,local_58,&local_88);
  uVar9 = FUN_144a7b41a(local_58,0x447a0000);
  *(undefined4 *)(param_1 + 0x498) = uVar9;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar8 = local_58;
    if (0x18 < local_40) {
      ppppuVar8 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = 0;
  FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
  FUN_1448729ea(lVar3 + 0x338,local_58,&local_88);
  uVar9 = FUN_144a7b41a(local_58,0x3ea8f5c3);
  *(undefined4 *)(param_1 + 0x49c) = uVar9;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar8 = local_58;
    if (0x18 < local_40) {
      ppppuVar8 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = 0;
  FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
  FUN_1448729ea(lVar3 + 0x2e8,local_58,&local_88);
  uVar9 = FUN_144a7b41a(local_58,0x3f000000);
  *(undefined4 *)(param_1 + 0x4a0) = uVar9;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar8 = local_58;
    if (0x18 < local_40) {
      ppppuVar8 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = 0;
  FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
  FUN_1448729ea(lVar3 + 0x558,local_58,&local_88);
  uVar9 = FUN_144a7b41a(local_58,0x3f800000);
  *(undefined4 *)(param_1 + 0x4a4) = uVar9;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar8 = local_58;
    if (0x18 < local_40) {
      ppppuVar8 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = 0;
  FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
  FUN_1448729ea(lVar3 + 0x508,local_58,&local_88);
  uVar9 = FUN_144a7b41a(local_58,0x3f4ccccd);
  *(undefined4 *)(param_1 + 0x4a8) = uVar9;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar8 = local_58;
    if (0x18 < local_40) {
      ppppuVar8 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_88 = (double)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = 0;
  FUN_1456bb102(&local_88,*(undefined8 *)(param_1 + 0x168));
  FUN_1448729ea(lVar3 + 0x3f0,local_58,&local_88);
  uVar9 = FUN_144a7b41a(local_58,0x40000000);
  *(undefined4 *)(param_1 + 0x424) = uVar9;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar8 = local_58;
    if (0x18 < local_40) {
      ppppuVar8 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  if (lVar3 == 0) {
    pdVar5 = (double *)&DAT_14c8464e0;
    local_78 = DAT_14c8464f0;
  }
  else {
    pdVar5 = (double *)(lVar3 + 0x260);
    local_78 = *(double *)(lVar3 + 0x270);
  }
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  local_78 = local_78 + *(double *)(lVar3 + 0x120);
  local_80 = pdVar5[1] + *(double *)(lVar3 + 0x118);
  local_88 = *pdVar5 + *(double *)(lVar3 + 0x110);
  local_98 = 0;
  FUN_1413dd462(param_1,&local_88,0,0);
LAB_145724ed2:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572512c FUN_14572512c body=123 status=ok
// SIG undefined FUN_14572512c(void)

longlong * FUN_14572512c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *param_2;
    local_1c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    uVar1 = *param_2;
    *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457251a8 FUN_1457251a8 body=125 status=ok
// SIG undefined FUN_1457251a8(void)

longlong * FUN_1457251a8(longlong *param_1,ushort *param_2)

{
  undefined1 auStack_48 [46];
  ushort local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1a = *param_2 << 8 | *param_2 >> 8;
    (**(code **)(*param_1 + 0x170))(param_1,&local_1a,2);
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    *param_2 = *param_2 << 8 | *param_2 >> 8;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145725226 FUN_145725226 body=128 status=ok
// SIG undefined FUN_145725226(void)

void FUN_145725226(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3f0))) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 1000) + (ulonglong)param_2 * 0x10);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 1000) + 8 + (ulonglong)param_2 * 0x10);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457252a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x48 + (ulonglong)(-1 < *(char *)((longlong)plVar2 + 0x34)) * 8))();
      return;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    (**(code **)(*plVar2 + 0x48 + (ulonglong)(-1 < *(char *)((longlong)plVar2 + 0x34)) * 8))();
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
                    /* WARNING: Could not recover jumptable at 0x000145725285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457252a6 FUN_1457252a6 body=373 status=ok
// SIG undefined FUN_1457252a6(void)

longlong * FUN_1457252a6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1405d0e5d(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_148b7b97e(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_148b79cc3(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_148b7b944(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_148b7bf3e(param_2);
        FUN_148b79cc3(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14572541c FUN_14572541c body=31 status=ok
// SIG undefined FUN_14572541c(void)

void FUN_14572541c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  do {
    *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 2;
    lVar1 = *(longlong *)(lVar1 + 0x88);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14572543c FUN_14572543c body=109 status=ok
// SIG undefined FUN_14572543c(void)

void FUN_14572543c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148b7bce8(param_1,iVar1);
    }
    FUN_148b7bcc8((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148b7bd6e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1457254aa FUN_1457254aa body=109 status=ok
// SIG undefined FUN_1457254aa(void)

void FUN_1457254aa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148b7be1c(param_1,iVar1);
    }
    FUN_148b7be09((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148b7bea2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145725518 FUN_145725518 body=68 status=ok
// SIG undefined FUN_145725518(void)

char FUN_145725518(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_148b7b9ee(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x28;
      param_2 = param_2 + 0x28;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 14572555c FUN_14572555c body=91 status=ok
// SIG undefined FUN_14572555c(void)

void FUN_14572555c(longlong param_1,short param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x10) == param_2) {
    if (*(int *)(param_1 + 0x18) == param_3) {
      param_3 = param_3 + 0x200;
      iVar1 = *(int *)(param_1 + 0x14);
      iVar2 = param_3;
      if (iVar1 <= param_3) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0x18) = iVar2;
      *(uint *)(param_1 + 0x28) =
           (*(uint *)(param_1 + 0x28) & 0xfffffffb) + (uint)(iVar1 <= param_3) * 4;
      return;
    }
    if (param_3 < *(int *)(param_1 + 0x18)) {
      iVar1 = -0x200;
      if (-0x200 < param_3) {
        iVar1 = param_3;
      }
      *(int *)(param_1 + 0x18) = iVar1 + 0x200;
    }
  }
  else if (param_2 < *(short *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  return;
}



// FUNCTION 1457255b8 FUN_1457255b8 body=93 status=ok
// SIG undefined FUN_1457255b8(void)

undefined8 * FUN_1457255b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1405d0e5d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b7a4c4(param_1,iVar1);
      FUN_148b7a537(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145725616 FUN_145725616 body=122 status=ok
// SIG undefined FUN_145725616(void)

void FUN_145725616(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148b7bb24(param_1,iVar1);
    }
    FUN_148b7bb0e((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148b7bbb8(param_1,param_2,iVar1 - param_2);
    FUN_148b7bc1a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145725692 FUN_145725692 body=40 status=ok
// SIG undefined FUN_145725692(void)

undefined8 FUN_145725692(undefined8 param_1,int param_2)

{
  FUN_1457256ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457256ba FUN_1457256ba body=50 status=ok
// SIG undefined FUN_1457256ba(void)

void FUN_1457256ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a498260;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1405d1598(param_1);
  return;
}



// FUNCTION 1457256ec FUN_1457256ec body=232 status=ok
// SIG undefined FUN_1457256ec(void)

longlong * FUN_1457256ec(longlong *param_1)

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
  pcVar12 = FUN_14647064e;
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



// FUNCTION 1457257da FUN_1457257da body=329 status=ok
// SIG undefined FUN_1457257da(void)

void FUN_1457257da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145725924(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145725924 FUN_145725924 body=58 status=ok
// SIG undefined FUN_145725924(void)

void FUN_145725924(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x30);
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(plVar2);
  if ((param_4 != 0) && (cVar1 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014572595a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2);
    return;
  }
  return;
}



// FUNCTION 14572595e FUN_14572595e body=108 status=ok
// SIG undefined FUN_14572595e(void)

void FUN_14572595e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = (**(code **)(*(longlong *)(lVar1 + 0xda8) + 0x50))(lVar1 + 0xda8);
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar1 + 0xda8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x0001457259bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(lVar1 + 0xda8,uVar3,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 1457259ca FUN_1457259ca body=93 status=ok
// SIG undefined FUN_1457259ca(void)

undefined8 FUN_1457259ca(longlong param_1)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449ee2a2(local_24,0,4);
  FUN_1405d2272(*(undefined8 *)(param_1 + 8));
  FUN_1449ee22a(local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145725a28 FUN_145725a28 body=193 status=ok
// SIG undefined FUN_145725a28(void)

void FUN_145725a28(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x20);
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      lVar3 = *plVar8;
      if (0 < *(int *)(lVar3 + 0x18)) {
        plVar1 = (longlong *)(lVar3 + 0x10);
        uVar6 = 0;
        do {
          iVar5 = (int)uVar6;
          lVar4 = *(longlong *)(*(longlong *)(*plVar1 + uVar6 * 0x10) + 0x18);
          if ((lVar4 != 0) && (*param_2 == lVar4)) {
            iVar2 = *(int *)(*param_2 + 0xfc);
            if (iVar2 == 2) {
              FUN_140c2505a(param_1,*plVar1 + uVar6 * 0x10,1);
              FUN_140c24da0(plVar1,uVar6);
              FUN_140c24e18(plVar1);
              iVar5 = iVar5 + -1;
            }
            else if (iVar2 == 1) {
              FUN_143c91b00();
            }
          }
          uVar6 = (ulonglong)(iVar5 + 1U);
        } while ((int)(iVar5 + 1U) < *(int *)(lVar3 + 0x18));
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  return;
}



// FUNCTION 145725aea FUN_145725aea body=210 status=ok
// SIG undefined FUN_145725aea(void)

longlong FUN_145725aea(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) &&
     (0 < *(int *)(lVar1 + 0x238))) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      lVar4 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar6);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x398) != 0)) &&
         (cVar3 = FUN_141107632(lVar4), cVar3 != '\0')) {
        if (param_2 == '\0') {
          return lVar4;
        }
        lVar2 = *(longlong *)(lVar4 + 0x398);
        if ((&DAT_149fc1b6e)[*(byte *)(lVar2 + 0x3b8)] == '\x01') {
          if ((*(longlong **)(lVar2 + 0x3a8) != (longlong *)0x0) &&
             (cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x3a8) + 0x28))(), cVar3 != '\0')) {
            return lVar4;
          }
        }
        else if ((*(uint *)(lVar2 + 0x3a8) & 0xffffff) != 0) {
          return lVar4;
        }
      }
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar1 + 0x238));
  }
  return 0;
}



// FUNCTION 145725bbc FUN_145725bbc body=485 status=ok
// SIG undefined FUN_145725bbc(void)

void FUN_145725bbc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145725da2 FUN_145725da2 body=58 status=ok
// SIG undefined FUN_145725da2(void)

bool FUN_145725da2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if ((plVar1 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1), lVar2 != 0)) {
    lVar2 = FUN_14039ffc6(lVar2);
    return lVar2 != 0;
  }
  return false;
}



// FUNCTION 145725ddc FUN_145725ddc body=54 status=ok
// SIG undefined FUN_145725ddc(void)

undefined8 FUN_145725ddc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1414875dc(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145725e12 FUN_145725e12 body=258 status=ok
// SIG undefined FUN_145725e12(void)

ulonglong FUN_145725e12(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar6 == (longlong *)0x0) {
LAB_145725ec8:
    uVar7 = 0;
  }
  else {
    do {
      if (plVar6[5] != 0) {
        lVar3 = *(longlong *)(plVar6[5] + 0x30);
        if (lVar3 == 0) goto LAB_145725ec8;
        uVar7 = *(undefined8 *)(lVar3 + 0x360);
        break;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2f0))(plVar6);
      uVar7 = 0;
    } while (plVar6 != (longlong *)0x0);
  }
  FUN_1403679b6(&local_28,uVar7);
  if (local_20 != (longlong *)0x0) {
    iVar5 = (int)local_20[1];
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_20[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(local_20 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(int *)(local_28 + 0x1b8) != 0);
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
      goto LAB_145725ea8;
    }
  }
  uVar8 = 0;
LAB_145725ea8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 145725f16 FUN_145725f16 body=287 status=ok
// SIG undefined FUN_145725f16(void)

void FUN_145725f16(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0xa0)) {
    uVar6 = 0;
    do {
      iVar5 = (int)uVar6;
      lVar1 = *(longlong *)(param_1 + 0x98) + uVar6 * 0x40;
      FUN_1487b3b3c(param_1,&local_48,lVar1,*(longlong *)(param_1 + 0x98) + uVar6 * 0x40 + 0x20);
      if (local_48 == 0) {
        FUN_1487b816c(param_1 + 0x98,uVar6);
        iVar5 = iVar5 + -1;
      }
      else {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(lVar1 + 0x38);
        *(longlong *)(lVar1 + 0x30) = local_48;
        *(longlong **)(lVar1 + 0x38) = local_40;
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
      }
      plVar4 = local_40;
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
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0xa0));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145726036 FUN_145726036 body=637 status=ok
// SIG undefined FUN_145726036(void)

void FUN_145726036(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_49;
  undefined8 local_48;
  longlong *local_40;
  undefined4 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = (undefined4 *)0x0;
  uStack_30 = 1;
  FUN_1406f071e(&local_38,0);
  uVar7 = *(undefined4 *)(param_1 + 0x29c);
  uVar8 = *(undefined4 *)(param_1 + 0x2a0);
  uVar9 = *(undefined4 *)(param_1 + 0x2a4);
  *local_38 = *(undefined4 *)(param_1 + 0x298);
  local_38[1] = uVar7;
  local_38[2] = uVar8;
  local_38[3] = uVar9;
  *(undefined8 *)(local_38 + 4) = 0;
  iVar4 = *(int *)(param_1 + 0x2b0);
  pvVar5 = *(void **)(param_1 + 0x2a8);
  local_38[6] = iVar4;
  if ((longlong)iVar4 == 0) {
    local_38[7] = 0;
  }
  else {
    puVar13 = (undefined8 *)(local_38 + 4);
    FUN_1446dd670(puVar13,iVar4,0);
    memcpy((void *)*puVar13,pvVar5,(longlong)iVar4 * 2);
  }
  uVar10 = uStack_30;
  lVar14 = (longlong)(int)uStack_30;
  uVar12 = (int)uStack_30 + 1;
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar12);
  if (uStack_30._4_4_ < uVar12) {
    FUN_1406f071e(&local_38,uVar10 & 0xffffffff);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x274);
  uVar8 = *(undefined4 *)(param_1 + 0x278);
  uVar9 = *(undefined4 *)(param_1 + 0x27c);
  puVar3 = local_38 + lVar14 * 8;
  *puVar3 = *(undefined4 *)(param_1 + 0x270);
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  *(undefined8 *)(local_38 + lVar14 * 8 + 4) = 0;
  iVar4 = *(int *)(param_1 + 0x288);
  pvVar5 = *(void **)(param_1 + 0x280);
  local_38[lVar14 * 8 + 6] = iVar4;
  if ((longlong)iVar4 == 0) {
    local_38[lVar14 * 8 + 7] = 0;
  }
  else {
    puVar13 = (undefined8 *)(local_38 + lVar14 * 8 + 4);
    FUN_1446dd670(puVar13,iVar4,0);
    memcpy((void *)*puVar13,pvVar5,(longlong)iVar4 * 2);
  }
  cVar11 = FUN_1403afb62();
  if (cVar11 != '\0') {
    lVar14 = FUN_14050fd64();
    local_68 = 0;
    uStack_60 = 0;
    local_70 = &local_49;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    FUN_1457028c8(lVar14 + 0x1e8,&local_48,&local_38);
    plVar1 = local_40;
    if ((undefined8 *)(param_1 + 0x2b8) != &local_48) {
      *(undefined8 *)(param_1 + 0x2b8) = local_48;
      local_48 = 0;
      plVar6 = *(longlong **)(param_1 + 0x2c0);
      if (local_40 != plVar6) {
        local_40 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x2c0) = plVar1;
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
      }
    }
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    FUN_1449db362(&local_68);
  }
  FUN_140861e20(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457262b4 FUN_1457262b4 body=93 status=ok
// SIG undefined FUN_1457262b4(void)

void FUN_1457262b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 145726312 FUN_145726312 body=120 status=ok
// SIG undefined FUN_145726312(void)

void FUN_145726312(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  code **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb70c58 != 0) {
    local_28 = &local_38;
    local_20 = &local_30;
    local_30 = FUN_143c992a0;
    local_10 = &local_20;
    local_18 = FUN_1405dc3da;
    local_38 = param_1;
    FUN_1405dc024();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572638c FUN_14572638c body=111 status=ok
// SIG undefined FUN_14572638c(void)

undefined8 * FUN_14572638c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    if ((*(longlong *)(param_2 + 0x30) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0xc0), lVar1 != 0)) {
      param_2 = lVar1;
    }
    local_18 = *(undefined8 *)(param_2 + 0x18);
    FUN_1457263fc(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457263fc FUN_1457263fc body=72 status=ok
// SIG undefined FUN_1457263fc(void)

undefined8 * FUN_1457263fc(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_14575717a(param_2);
  if (lVar1 == 0) {
    *param_1 = *param_2;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(lVar1 + 8);
    }
    FUN_1447325ac(puVar2,param_1,1);
  }
  return param_1;
}



// FUNCTION 145726444 FUN_145726444 body=1008 status=ok
// SIG undefined FUN_145726444(void)

void FUN_145726444(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_188 [44];
  int local_15c;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  ulonglong uStack_140;
  uint local_130;
  uint uStack_12c;
  undefined8 uStack_128;
  uint local_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong *local_88;
  uint local_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = param_2;
  uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
  if (param_2 == (longlong *)0x0) goto LAB_1457267c0;
  lVar5 = FUN_1405d6522();
  if (*(longlong *)(param_3 + 0x1f0) == 0) {
LAB_1457267f6:
    lVar9 = 0;
  }
  else {
    lVar6 = FUN_144a79464();
    lVar7 = *(longlong *)(param_3 + 0x1f0);
    if (lVar7 == 0) goto LAB_1457267f6;
    lVar9 = 0;
    if ((lVar6 != 0) && (lVar2 = *(longlong *)(lVar7 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar6 + 0x38)) goto LAB_1457267f6;
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30) {
        lVar9 = lVar7;
      }
    }
  }
  lVar7 = FUN_14040226a(lVar9,0);
  uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
  if (lVar7 != 0) {
    lVar7 = FUN_1401499e8(lVar7);
    uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
    if (lVar7 != 0) {
      local_130 = 0;
      uStack_12c = 0;
      uStack_128._0_4_ = 0;
      local_15c = 0;
      FUN_1446efa72(&local_130,0,3,0x10);
      uStack_128._0_4_ = 3;
      puVar3 = (undefined8 *)CONCAT44(uStack_12c,local_130);
      *puVar3 = &PTR_LAB_14b3e6310;
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
      puVar3[2] = lVar6;
      *puVar3 = &PTR_FUN_14b3e6170;
      puVar3[3] = 0;
      FUN_14485c47a(puVar3 + 3,param_3);
      puVar3[4] = param_1;
      local_158 = param_1 + 0x208;
      FUN_144a450dc(local_158,&local_130);
      FUN_1449db362(&local_130);
      plVar1 = (longlong *)(lVar5 + 0x1c8);
      lVar7 = lVar5 + 0x1d8;
      local_130 = 0;
      uStack_12c = 1;
      local_120 = 0xffffffff;
      iStack_11c = 0;
      uStack_118 = 0;
      uStack_128 = lVar7;
      if (*(int *)(lVar5 + 0x1f0) != 0) {
        FUN_1449c0562(&local_130);
        local_15c = *(int *)(lVar5 + 0x1f0);
      }
      local_70 = CONCAT44(iStack_11c,local_120);
      uStack_68 = CONCAT44(uStack_114,uStack_118);
      local_80 = local_130;
      uStack_7c = uStack_12c;
      local_88 = plVar1;
      uStack_78 = uStack_128;
      if ((iStack_11c != local_15c) || (uStack_128 != lVar7)) {
        iVar4 = iStack_11c;
        do {
          lVar5 = *local_88;
          local_98 = 0;
          uStack_90 = 0;
          local_130 = local_130 & 0xffffff00;
          uStack_12c = 0;
          uStack_128._0_4_ = 0;
          uStack_128._4_4_ = 0;
          local_120 = local_120 & 0xffffff00;
          local_10c = 0;
          iStack_11c = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          local_110 = 0;
          local_100 = 0xc69c4000;
          local_b0 = 0;
          local_a8 = 0;
          local_b8 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_a0 = 0x101;
          local_d8 = &local_98;
          FUN_1401aa3da(&local_110,local_158);
          local_148 = 0;
          uStack_140 = 0;
          FUN_1457268a6((longlong)iVar4 * 0x1c0 + lVar5 + 0x168,&local_148);
          uVar8 = (**(code **)(*local_150 + 0x2b0))();
          lVar5 = FUN_1414ef453(uVar8,0);
          if (lVar5 == 0) {
            local_a0 = CONCAT44(2,(undefined4)local_a0);
          }
          else {
            FUN_145726835(&local_148,lVar5,&local_130);
          }
          FUN_1405d7ab2(local_148,uStack_140 & 0xffffffff);
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          FUN_1409838b8(&local_130);
          FUN_1405dc41e(local_98,uStack_90 & 0xffffffff);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar4 = local_70._4_4_;
        } while (local_88 != plVar1 || (uStack_78 != lVar7 || local_70._4_4_ != local_15c));
      }
    }
  }
LAB_1457267c0:
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145726835 FUN_145726835 body=113 status=ok
// SIG undefined FUN_145726835(void)

void FUN_145726835(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0x38;
    iVar2 = 0;
    do {
      if (param_2 == 0) {
        *(undefined4 *)(param_3 + 0x94) = 2;
        iVar2 = 2;
      }
      else {
        FUN_140983ba6(lVar1,param_2,param_3);
        if (*(int *)(param_3 + 0x94) != 1) {
          iVar2 = *(int *)(param_3 + 0x94);
        }
      }
      lVar1 = lVar1 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  *(int *)(param_3 + 0x94) = iVar2;
  return;
}



// FUNCTION 1457268a6 FUN_1457268a6 body=1238 status=ok
// SIG undefined FUN_1457268a6(void)

void FUN_1457268a6(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  uint local_128;
  int iStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_114 [2];
  int local_10c;
  int local_108 [2];
  int local_100;
  int local_fc [2];
  int local_f4;
  int local_f0 [2];
  int local_e8;
  int local_e4 [2];
  int local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  FUN_1405d7ab2(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_140f8dd3e(param_2,0);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140f8e2aa(&local_d8,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_90 == 0) || (local_90 < iVar3)) {
      local_90 = iVar3;
      FUN_140f8ddac();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (-1 < iVar3) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      FUN_140f8dd3e(param_2);
    }
    local_80 = param_1 + 2;
    local_88 = 0x100000000;
    local_78 = 0xffffffff;
    iStack_74 = 0;
    local_70 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_88);
    }
    local_128 = local_78;
    iStack_124 = iStack_74;
    local_120 = local_70;
    local_11c = uStack_6c;
    local_138 = local_88;
    local_130 = local_80;
    local_140 = param_1;
    if (iStack_74 < (int)local_80[3]) {
      do {
        pcVar1 = (char *)(*local_140 + (longlong)iStack_124 * 0x48);
        if (*pcVar1 == '\x01') {
          FUN_1447a97f4(&local_88,pcVar1 + 0x10);
          if (0 < local_88._4_4_) {
            iVar3 = 0;
            do {
              FUN_144a7c8fe(&local_88,local_e4,iVar3,1);
              if ((((((local_e4[0] == DAT_14cb7beb0) && (local_dc == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_88,local_f0,iVar3,1), local_f0[0] == DAT_14cb7bec8 &&
                     (local_e8 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_88,local_fc,iVar3,1), local_fc[0] == DAT_14cb7bee0 &&
                    (local_f4 == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_88,local_108,iVar3,1), local_108[0] == DAT_14cb7bef8 &&
                   (local_100 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_88,local_114,iVar3,1), local_114[0] == DAT_14cb7bf10 &&
                  (local_10c == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_88,iVar3,0);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_88._4_4_);
          }
          uVar5 = (undefined4)local_88;
          if (CONCAT44(uStack_6c,local_70) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          uVar5 = *(undefined4 *)(pcVar1 + 0x10);
        }
        iVar3 = FUN_140f8dafc(&local_d8,uVar5,pcVar1);
        if (iVar3 == -1) {
          puVar6 = (undefined8 *)((longlong)iStack_124 * 0x48 + *local_140);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140f12bd2(param_2,iVar3);
          }
          puVar2 = (undefined8 *)((longlong)iVar3 * 0x38 + *param_2);
          *(undefined2 *)puVar2 = 0;
          *(undefined8 *)((longlong)puVar2 + 4) = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *(undefined4 *)(puVar2 + 4) = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
          *puVar2 = *puVar6;
          FUN_1447715ec(puVar2 + 2,puVar6 + 2);
          FUN_140f8d6d8(&local_d8,&local_88,(longlong)iStack_124 * 0x48 + *local_140,0);
        }
        local_128 = local_128 & ~local_138._4_4_;
        FUN_1449c0562(&local_138);
      } while (iStack_124 < (int)local_130[3]);
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_140292ea0(&local_d8);
    if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 145726d7e FUN_145726d7e body=63 status=ok
// SIG undefined FUN_145726d7e(void)

void FUN_145726d7e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145726dbe(param_1);
    FUN_1409c142a(param_1);
    return;
  }
  FUN_1409c142a(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1405dcf30(param_1);
  return;
}



// FUNCTION 145726dbe FUN_145726dbe body=339 status=ok
// SIG undefined FUN_145726dbe(void)

void FUN_145726dbe(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 145726f12 FUN_145726f12 body=500 status=ok
// SIG undefined FUN_145726f12(void)

void FUN_145726f12(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),
                              *(undefined1 *)(lVar3 + 0x18 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145727108 FUN_145727108 body=269 status=ok
// SIG undefined FUN_145727108(void)

undefined4 * FUN_145727108(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457273e8(param_1,local_48);
  FUN_145727216(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_14572732a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1457274d8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145727216 FUN_145727216 body=149 status=ok
// SIG undefined FUN_145727216(void)

undefined4 * FUN_145727216(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_1457272ac(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145e11420(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457272ac FUN_1457272ac body=125 status=ok
// SIG undefined FUN_1457272ac(void)

undefined8 * FUN_1457272ac(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14572768a();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14572732a FUN_14572732a body=189 status=ok
// SIG undefined FUN_14572732a(void)

undefined8 FUN_14572732a(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_145e11420((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1469b52bc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457273e8 FUN_1457273e8 body=239 status=ok
// SIG undefined FUN_1457273e8(void)

int * FUN_1457273e8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1457274d8 FUN_1457274d8 body=432 status=ok
// SIG undefined FUN_1457274d8(void)

void FUN_1457274d8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 14572768a FUN_14572768a body=469 status=ok
// SIG undefined FUN_14572768a(void)

longlong * FUN_14572768a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar10 = 0;
    local_50 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar8 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, local_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x10 + (longlong)iVar9 * 0x38);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (((local_68._4_4_ != iVar10) || (local_70 != plVar1)) || (local_80 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145727860 FUN_145727860 body=197 status=ok
// SIG undefined FUN_145727860(void)

uint FUN_145727860(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
                  uint param_5,float param_6,undefined4 param_7)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  local_28 = param_2[2];
  fVar3 = (float)FUN_1436a1aef(&local_38,param_3,param_4,param_7);
  lVar2 = 0xf;
  do {
    fVar4 = *(float *)(param_1 + lVar2 * 4) * *(float *)(param_4 + 0x23c8) * param_6 * 0.5;
    fVar4 = fVar4 * fVar4;
    if (fVar3 < fVar4) {
      uVar1 = (int)lVar2 - 8;
      if ((int)uVar1 < (int)param_5) {
        uVar1 = param_5;
      }
      goto LAB_1457278fe;
    }
    lVar2 = lVar2 + -1;
  } while (lVar2 != 7);
  uVar1 = 7;
LAB_1457278fe:
  uVar1 = uVar1 & 0xff;
  if (fVar4 <= fVar3) {
    uVar1 = param_5;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145727926 FUN_145727926 body=472 status=ok
// SIG undefined FUN_145727926(void)

void FUN_145727926(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar3 [16];
  
  if ((*(longlong *)(param_1 + 0x18) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) != '\x01')) {
    fVar2 = *(float *)(param_1 + 0x30);
  }
  else {
    auVar3 = roundps(unaff_XMM6,ZEXT416(*(uint *)(param_1 + 0x30)),3);
    fVar2 = auVar3._0_4_;
  }
  fVar1 = *(float *)(param_1 + 200);
  if ((0.0001 <= ABS(fVar1 - *(float *)(param_1 + 0x24))) &&
     (ABS(*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x100)) < 0.0001)) {
    FUN_1405e388c(param_1);
    fVar1 = *(float *)(param_1 + 200);
  }
  if ((0.0001 <= ABS(fVar1 - fVar2)) &&
     (ABS(*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x104)) < 0.0001)) {
    FUN_1405e3dd8(param_1);
  }
  fVar1 = fVar2;
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0xe8) == '\x01')) {
    fVar1 = *(float *)(param_1 + 0x104);
  }
  if ((0.0001 <= ABS(*(float *)(param_1 + 200) - fVar2)) ||
     (ABS(*(float *)(param_1 + 0x114) - fVar1) < 0.0001)) {
    if (((*(float *)(param_1 + 0x104) < *(float *)(param_1 + 0x30)) &&
        (*(undefined1 *)(param_1 + 0x12e) = 0,
        ABS(*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x104)) < 0.0001)) &&
       (0.0001 <= ABS(*(float *)(param_1 + 200) - *(float *)(param_1 + 0x30)))) {
      FUN_1405e3dd8(param_1);
    }
  }
  else {
    if (*(float *)(param_1 + 0x24) <= *(float *)(param_1 + 0x30) &&
        *(float *)(param_1 + 0x30) != *(float *)(param_1 + 0x24)) {
      *(undefined1 *)(param_1 + 0x12e) = 1;
    }
    FUN_1405e3b32(param_1);
  }
  if (*(int *)(param_1 + 0x48) < 1) {
    return;
  }
  FUN_14060a8c0(param_1);
  return;
}



// FUNCTION 145727afe FUN_145727afe body=46 status=ok
// SIG undefined FUN_145727afe(void)

undefined8 FUN_145727afe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x39) == DAT_14c96b238) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                      *(char *)(*(longlong *)(param_1 + 0x1b8) + 0x39) == *(char *)(lVar1 + 0x39));
    }
  }
  return 0;
}



// FUNCTION 145727b2c FUN_145727b2c body=244 status=ok
// SIG undefined FUN_145727b2c(void)

undefined8
FUN_145727b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
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
  *local_40 = &PTR_FUN_14b9db510;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_140c6314c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145727c22 FUN_145727c22 body=274 status=ok
// SIG undefined FUN_145727c22(void)

void FUN_145727c22(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *_Dst;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_145727e8c();
  if (param_2 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      FUN_145728984(param_1,param_2);
    }
    if (*(longlong *)(param_2 + 0x398) != 0) {
      lVar7 = FUN_144a7b4ca();
      lVar6 = *(longlong *)(param_2 + 0x398);
      if ((((lVar6 != 0) && (lVar7 != 0)) && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)))) {
        if (0 < (int)param_1[0xe5]) {
          _Dst = (undefined4 *)param_1[0xe4];
          uVar1 = *_Dst;
          uVar4 = (int)param_1[0xe5] - 1;
          if (uVar4 == 0) {
            iVar5 = 0;
          }
          else {
            memmove(_Dst,_Dst + 1,(ulonglong)uVar4 << 2);
            iVar5 = (int)param_1[0xe5] + -1;
          }
          *(int *)(param_1 + 0xe5) = iVar5;
          FUN_14479f406(param_1 + 0xe4);
          FUN_145727d34(lVar6,uVar1);
        }
        cVar3 = (**(code **)(*param_1 + 0x9c8))(param_1);
        if (cVar3 != '\0') {
          FUN_145727d56(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145727d34 FUN_145727d34 body=33 status=ok
// SIG undefined FUN_145727d34(void)

void FUN_145727d34(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xef0) != param_2) {
    *(int *)(param_1 + 0xef0) = param_2;
    FUN_14036c744(&DAT_14cbd0b48,param_1);
    return;
  }
  return;
}



// FUNCTION 145727d56 FUN_145727d56 body=126 status=ok
// SIG undefined FUN_145727d56(void)

void FUN_145727d56(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x9c0))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x398) != 0)) {
    lVar3 = FUN_144a7b4ca();
    lVar2 = *(longlong *)(lVar2 + 0x398);
    if (((lVar2 != 0) &&
        (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = FUN_1447210f0(param_1);
      FUN_145727dd4(*(undefined1 *)(lVar2 + 0x711),uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 145727dd4 FUN_145727dd4 body=183 status=ok
// SIG undefined FUN_145727dd4(void)

void FUN_145727dd4(byte param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 2;
  local_5c = (uint)param_1;
  local_64 = 0;
  FUN_144928b90(local_48,4);
  local_58 = DAT_14cbca668;
  local_50 = DAT_14cbca670;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145727e8c FUN_145727e8c body=215 status=ok
// SIG undefined FUN_145727e8c(void)

void FUN_145727e8c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  thunk_FUN_15750bbea();
  if ((((param_2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2), cVar3 != '\0')) &&
      (cVar3 = FUN_141107632(param_2), cVar3 != '\0')) && (*(longlong *)(param_1 + 0x3f0) != 0)) {
    lVar4 = FUN_14041aabe();
    plVar2 = *(longlong **)(param_1 + 0x3f0);
    if ((((plVar2 != (longlong *)0x0) && (lVar4 != 0)) &&
        ((lVar5 = plVar2[2], lVar5 != 0 &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))))) && (param_2[0x73] != 0)) {
      (**(code **)(*plVar2 + 0x770))();
    }
  }
  FUN_145727f64(param_1);
  iVar1 = *(int *)(param_1 + 0x658);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x650);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2c8))(plVar2,param_2);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 145727f64 FUN_145727f64 body=185 status=ok
// SIG undefined FUN_145727f64(void)

void FUN_145727f64(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_14487fd02();
  if (iVar2 != 3) {
    lVar1 = param_1[0xda];
    if ((char)param_1[0xdc] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6dc);
      uVar3 = 0;
    }
    else if ((char)param_1[0xdd] == '\x01') {
      iVar2 = *(int *)((longlong)param_1 + 0x6e4);
      uVar3 = 1;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
      uVar3 = 2;
    }
    *(undefined4 *)((longlong)param_1 + 0x6d4) = uVar3;
    iVar4 = 1;
    if (1 < iVar2) {
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0xda) = iVar4;
    if ((int)lVar1 != iVar4) {
      FUN_1401861f4(param_1 + 0xde);
    }
    lVar1 = param_1[0xdb];
    iVar2 = (**(code **)(*param_1 + 0x6b0))(param_1);
    *(int *)(param_1 + 0xdb) = iVar2;
    if ((int)lVar1 != iVar2) {
      FUN_1401861f4(param_1 + 0xe1,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14572801e thunk_FUN_15750bbea body=5 status=ok
// SIG undefined thunk_FUN_15750bbea(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_15750bbea(undefined8 param_1)

{
  FUN_156e9057f(param_1,0xfffffffffbcd7fdf,0xfffffffff53fbefb);
  return;
}



// FUNCTION 145728226 FUN_145728226 body=175 status=ok
// SIG undefined FUN_145728226(void)

undefined8 FUN_145728226(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x430);
  if (lVar3 == 0) {
LAB_14572825f:
    FUN_140056680(param_2,&DAT_149dfb77a);
    return param_2;
  }
  lVar2 = FUN_140496b24();
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_14572825f;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_140496b24();
    plVar1 = *(longlong **)(param_1 + 0x430);
    if (plVar1 != (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      if ((lVar3 == 0) || (lVar2 = plVar1[2], lVar2 == 0)) goto LAB_1457282c0;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        plVar4 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          plVar4 = plVar1;
        }
        goto LAB_1457282c0;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1457282c0:
  (**(code **)(*plVar4 + 0x2c0))(plVar4,param_2,0);
  return param_2;
}



// FUNCTION 1457282d6 FUN_1457282d6 body=375 status=ok
// SIG undefined FUN_1457282d6(void)

void FUN_1457282d6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x7f8))();
  FUN_1447210f0(param_1);
  FUN_145728450(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x430) + 0x38));
  cVar2 = FUN_1414077a0(param_1,param_2);
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_2 + 0x398);
    bVar3 = (&DAT_149fc1b6e)[*(byte *)(lVar1 + 0x3b8)];
    if (bVar3 == 1) {
      if ((*(longlong **)(lVar1 + 0x3a8) == (longlong *)0x0) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x3a8) + 0x28))(), cVar2 == '\0'))
      goto LAB_145728359;
      bVar3 = (&DAT_149fc1b6e)[*(byte *)(lVar1 + 0x3b8)];
    }
    else if ((*(uint *)(lVar1 + 0x3a8) & 0xffffff) == 0) goto LAB_145728359;
    if ((bVar3 & 1) != 0) {
      plVar4 = (longlong *)FUN_14497e828(param_1);
      FUN_1405e6804(lVar1 + 0x3a0,local_40);
      (**(code **)(*plVar4 + 0x378))(plVar4,local_40);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    FUN_147c94ae2(param_2,DAT_14c893048);
  }
LAB_145728359:
  plVar4 = (longlong *)param_1[0x7d];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x660))(plVar4,param_2);
  }
  FUN_145728546(param_1,param_2);
  FUN_1457284ac(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145728450 FUN_145728450 body=91 status=ok
// SIG undefined FUN_145728450(void)

void FUN_145728450(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9588);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457284ac FUN_1457284ac body=144 status=ok
// SIG undefined FUN_1457284ac(void)

void FUN_1457284ac(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cadae00);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_28 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145728510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x680))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145728546 FUN_145728546 body=163 status=ok
// SIG undefined FUN_145728546(void)

void FUN_145728546(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = param_2;
      uVar2 = FUN_14477b072(param_1,DAT_14cadae88);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
      FUN_1457285ec(param_1,param_2);
    }
  }
  (**(code **)(*param_1 + 0x770))(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457285ec FUN_1457285ec body=191 status=ok
// SIG undefined FUN_1457285ec(void)

void FUN_1457285ec(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cadbeb8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cadbec4 = DAT_14cadbec4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cadbeb0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cadbeb0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cadbec4 = DAT_14cadbec4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_145728692;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cadbec4 = DAT_14cadbec4 + -1;
LAB_145728692:
  FUN_14474d06a(&DAT_14cadbeb0,0);
  return;
}



// FUNCTION 1457286ac thunk_FUN_15b77828b body=5 status=ok
// SIG undefined thunk_FUN_15b77828b(void)

void thunk_FUN_15b77828b(void)

{
  FUN_15ba64282();
  FUN_15b7782fc();
  return;
}



// FUNCTION 1457287d6 FUN_1457287d6 body=19 status=ok
// SIG undefined FUN_1457287d6(void)

undefined8 FUN_1457287d6(undefined8 param_1,undefined8 param_2)

{
  FUN_144a7ba4c(param_2);
  return 0;
}



// FUNCTION 145728804 FUN_145728804 body=144 status=ok
// SIG undefined FUN_145728804(void)

void FUN_145728804(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cadae20);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_28 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145728868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x638))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572889e thunk_FUN_165f06ee5 body=155 status=ok
// SIG undefined thunk_FUN_165f06ee5(void)

/* WARNING: Removing unreachable block (ram,0x000165f06f53) */
/* WARNING: Removing unreachable block (ram,0x00014de918ff) */

void thunk_FUN_165f06ee5(void)

{
  return;
}



// FUNCTION 145728902 thunk_FUN_15728a152 body=5 status=ok
// SIG undefined thunk_FUN_15728a152(void)

/* WARNING: Removing unreachable block (ram,0x000165193474) */
/* WARNING: Removing unreachable block (ram,0x00016519347f) */
/* WARNING: Removing unreachable block (ram,0x000165193528) */
/* WARNING: Removing unreachable block (ram,0x000165193534) */
/* WARNING: Removing unreachable block (ram,0x00016155ed4b) */
/* WARNING: Removing unreachable block (ram,0x0001565e6c4b) */
/* WARNING: Removing unreachable block (ram,0x00016155edd9) */
/* WARNING: Removing unreachable block (ram,0x00016155eddf) */
/* WARNING: Removing unreachable block (ram,0x00016155ede4) */
/* WARNING: Removing unreachable block (ram,0x00016155ee2c) */
/* WARNING: Removing unreachable block (ram,0x00016155ee6b) */
/* WARNING: Removing unreachable block (ram,0x00016155ee81) */
/* WARNING: Removing unreachable block (ram,0x00016155ee87) */
/* WARNING: Removing unreachable block (ram,0x0001572a0517) */
/* WARNING: Removing unreachable block (ram,0x0001572a05ae) */
/* WARNING: Removing unreachable block (ram,0x0001572a05b3) */
/* WARNING: Removing unreachable block (ram,0x0001572a05b9) */
/* WARNING: Removing unreachable block (ram,0x00015b870803) */
/* WARNING: Removing unreachable block (ram,0x000156b79868) */
/* WARNING: Removing unreachable block (ram,0x000156b7982a) */
/* WARNING: Removing unreachable block (ram,0x000156b79830) */
/* WARNING: Removing unreachable block (ram,0x000156b7986b) */
/* WARNING: Removing unreachable block (ram,0x0001651933fd) */
/* WARNING: Removing unreachable block (ram,0x00015b0fcd9b) */
/* WARNING: Removing unreachable block (ram,0x00016519347a) */
/* WARNING: Removing unreachable block (ram,0x00015728a1d2) */
/* WARNING: Removing unreachable block (ram,0x000157855b52) */
/* WARNING: Removing unreachable block (ram,0x000157855b4c) */
/* WARNING: Removing unreachable block (ram,0x000157855b57) */
/* WARNING: Removing unreachable block (ram,0x000157855b68) */
/* WARNING: Removing unreachable block (ram,0x000157855b37) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x000156b79749 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
thunk_FUN_15728a152(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_166442358(param_1,param_2,param_3,param_4);
  uVar1 = FUN_1651933fd();
  return uVar1;
}



// FUNCTION 145728984 FUN_145728984 body=443 status=ok
// SIG undefined FUN_145728984(void)

void FUN_145728984(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_58 [36];
  short local_34 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) goto LAB_145728b15;
  lVar6 = FUN_1447210f0();
  if (lVar6 == 0) goto LAB_145728b15;
  if (*(longlong *)(lVar6 + 0x1f0) == 0) {
LAB_145728b38:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_1403ca142();
    plVar1 = *(longlong **)(lVar6 + 0x1f0);
    if (plVar1 == (longlong *)0x0) goto LAB_145728b38;
    plVar9 = (longlong *)0x0;
    if ((lVar7 != 0) && (lVar8 = plVar1[2], lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_145728b38;
      plVar9 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        plVar9 = plVar1;
      }
    }
  }
  bVar3 = (**(code **)(*plVar9 + 0x498))(plVar9);
  if (5 < bVar3) {
    cVar4 = (**(code **)(*plVar9 + 0x498))(plVar9);
    if (cVar4 != '\t') {
      iVar5 = FUN_14490d72a(lVar6);
      if ((iVar5 != 3) && (*(longlong *)(param_2 + 0x398) != 0)) {
        lVar8 = FUN_144a7b4ca();
        lVar7 = *(longlong *)(param_2 + 0x398);
        if ((lVar7 != 0) &&
           ((((lVar8 != 0 && (lVar2 = *(longlong *)(lVar7 + 0x10), lVar2 != 0)) &&
             (*(int *)(lVar8 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
            ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30 && ((*(byte *)(lVar7 + 0x39a) & 8) == 0)))))) {
          lVar7 = FUN_1400f6f32(lVar6);
          if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 != 0)) {
            FUN_140d27df6(lVar7,local_34,param_2);
            if (-1 < local_34[0]) {
              lVar7 = FUN_140bccd38(lVar7,local_34);
              if ((lVar7 == 0) && (*(char *)(param_1 + 0x730) == '\x01')) {
                lVar6 = FUN_1400f6f32(lVar6);
                if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x30) != 0)) {
                  FUN_145728f08(*(longlong *)(lVar6 + 0x30),local_34);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_145728b15:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145728b40 FUN_145728b40 body=966 status=ok
// SIG undefined FUN_145728b40(void)

ulonglong FUN_145728b40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined **ppuVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((int)param_1[0x8c] == 0) || (cVar4 = FUN_1414077a0(), cVar4 != '\0')) {
    uVar8 = 0;
  }
  else {
    FUN_141220240(*(undefined8 *)(param_2 + 0x398),&local_88);
    iVar17 = (int)param_1[0x8c];
    uVar8 = 0;
    if (0 < iVar17) {
      plVar1 = param_1 + 0x8b;
      do {
        iVar10 = (int)uVar8;
        lVar18 = (longlong)iVar10;
        lVar2 = *(longlong *)(*plVar1 + lVar18 * 8);
        if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
          iVar12 = iVar17 - (iVar10 + 1);
          if (iVar12 != 0) {
            _Dst = (void *)(*plVar1 + lVar18 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar12 << 3);
            iVar17 = (int)param_1[0x8c];
          }
          *(int *)(param_1 + 0x8c) = iVar17 + -1;
          FUN_145a1de10(plVar1);
          iVar10 = iVar10 + -1;
        }
        else {
          lVar9 = *(longlong *)(param_2 + 0x398);
          if ((&DAT_149fc1b6e)[*(byte *)(lVar9 + 0x3b8)] != '\x01') {
            if ((*(uint *)(lVar9 + 0x3a8) & 0xffffff) == 0) goto LAB_145728c2d;
LAB_145728d39:
            cVar4 = FUN_140ba41f1(lVar2 + 0x3a0,lVar9 + 0x3a0);
            if (cVar4 == '\0') goto LAB_145728d4e;
LAB_145728dc7:
            uVar3 = *(undefined8 *)(param_2 + 0x398);
            FUN_145ad9df8(param_2,lVar2);
            (**(code **)(**(longlong **)(param_2 + 0x398) + 0x440))
                      (*(longlong **)(param_2 + 0x398),param_2);
            FUN_140c7ce82(*(undefined8 *)(param_2 + 0x398),1);
            (**(code **)(**(longlong **)(param_2 + 0x398) + 0x388))
                      (*(longlong **)(param_2 + 0x398),0);
            (**(code **)(*param_1 + 0x8e0))(param_1,param_2,uVar3);
            (**(code **)(*(longlong *)param_1[0x7e] + 0x688))
                      ((longlong *)param_1[0x7e],*(undefined8 *)(param_2 + 0x398));
            iVar17 = (int)param_1[0x8c];
            iVar12 = iVar17 - (iVar10 + 1);
            if (iVar12 != 0) {
              memmove((void *)(param_1[0x8b] + lVar18 * 8),(void *)(param_1[0x8b] + lVar18 * 8 + 8),
                      (longlong)iVar12 << 3);
              iVar17 = (int)param_1[0x8c];
            }
            *(int *)(param_1 + 0x8c) = iVar17 + -1;
            FUN_145a1de10(plVar1);
            uVar8 = CONCAT71((uint7)(uint3)((uint)(iVar10 + 1) >> 8),1);
            FUN_147ca96a4(uVar3,1);
            local_70 = 0;
            uStack_68 = 0;
            local_60 = 0;
            local_78 = &PTR_FUN_14a5af930;
            local_58 = 0;
            uStack_50 = 0;
            FUN_147ca970c(uVar3,&local_78);
            local_78 = &PTR_FUN_14a5af930;
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            local_78 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
            FUN_140aeefbc(uVar3,0,1);
            (**(code **)(**(longlong **)(param_2 + 0x398) + 0x6d0))();
            goto LAB_145728daf;
          }
          if (*(longlong **)(lVar9 + 0x3a8) != (longlong *)0x0) {
            cVar4 = (**(code **)(**(longlong **)(lVar9 + 0x3a8) + 0x28))();
            lVar9 = *(longlong *)(param_2 + 0x398);
            if (cVar4 != '\0') goto LAB_145728d39;
          }
LAB_145728c2d:
          if (1 < *(int *)(lVar9 + 1000)) {
            puVar5 = &DAT_149dfb77a;
            if (*(int *)(lVar2 + 1000) != 0) {
              puVar5 = *(undefined2 **)(lVar2 + 0x3e0);
            }
            lVar13 = 0;
            while( true ) {
              uVar7 = *(ushort *)((longlong)puVar5 + lVar13);
              uVar8 = (ulonglong)uVar7;
              uVar14 = *(ushort *)(*(longlong *)(lVar9 + 0x3e0) + lVar13);
              if (uVar7 != uVar14) break;
              if (uVar7 == 0) goto LAB_145728ca8;
LAB_145728c72:
              lVar13 = lVar13 + 2;
            }
            if ((uVar14 | uVar7) < 0x80) {
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar15 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar15]) goto LAB_145728c72;
            }
            if (uVar7 != uVar14) goto LAB_145728d4e;
LAB_145728ca8:
            puVar5 = &DAT_149dfb77a;
            if (local_80 != 0) {
              puVar5 = local_88;
            }
            FUN_141220240(lVar2,&local_78);
            ppuVar6 = local_78;
            if ((int)local_70 == 0) {
              ppuVar6 = (undefined **)&DAT_149dfb77a;
            }
            lVar9 = 0;
            while( true ) {
              uVar7 = *(ushort *)((longlong)ppuVar6 + lVar9);
              uVar16 = (uint)uVar7;
              uVar14 = *(ushort *)((longlong)puVar5 + lVar9);
              uVar11 = (uint)uVar14;
              if (uVar7 != uVar14) {
                if ((uVar14 | uVar7) < 0x80) {
                  uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar7];
                  uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar14];
                  if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar14]) goto LAB_145728cf8;
                }
                iVar17 = uVar16 - uVar11;
                goto LAB_145728d63;
              }
              if (uVar7 == 0) break;
LAB_145728cf8:
              lVar9 = lVar9 + 2;
            }
            iVar17 = 0;
LAB_145728d63:
            if (local_78 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            if (iVar17 == 0) goto LAB_145728dc7;
          }
        }
LAB_145728d4e:
        uVar8 = (ulonglong)(iVar10 + 1U);
        iVar17 = (int)param_1[0x8c];
      } while ((int)(iVar10 + 1U) < iVar17);
      uVar8 = 0;
    }
LAB_145728daf:
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 145728f08 FUN_145728f08 body=239 status=ok
// SIG undefined FUN_145728f08(void)

void FUN_145728f08(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar3) == *plVar2) {
        uVar4 = (int)(lVar3 >> 4) * -0x33333333;
        if (((-1 < (int)uVar4) && ((int)uVar4 < iVar1)) &&
           ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                            (ulonglong)(uVar4 & 0x7fffffff) * 0x50) - 1U) < 2)) {
          local_38 = 0;
          uStack_30 = 0;
          local_28 = 0;
          local_20 = 0xffff;
          lVar3 = FUN_140b9fe48(param_1,param_2);
          if (lVar3 != 0) {
            FUN_1489b0846(param_1,lVar3,&local_38);
          }
        }
        break;
      }
      lVar3 = lVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145728ff8 FUN_145728ff8 body=18 status=ok
// SIG undefined FUN_145728ff8(void)

int FUN_145728ff8(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 800);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x2f8);
  }
  return iVar1;
}



// FUNCTION 14572900a FUN_14572900a body=18 status=ok
// SIG undefined FUN_14572900a(void)

int FUN_14572900a(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x2fc);
  }
  return iVar1;
}



// FUNCTION 14572901c FUN_14572901c body=93 status=ok
// SIG undefined FUN_14572901c(void)

undefined8 * FUN_14572901c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ac827a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c98e4e(param_1,iVar1);
      FUN_148c98ec1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14572907a FUN_14572907a body=259 status=ok
// SIG undefined FUN_14572907a(void)

void FUN_14572907a(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + 0x1b4);
    FUN_14071621b(*(undefined8 *)(lVar1 + 0x1a8),*(undefined4 *)(lVar1 + 0x1b0));
    *(undefined4 *)(lVar1 + 0x1b0) = 0;
    if ((iVar3 < 0) && (*(int *)(lVar1 + 0x1b4) != 0)) {
      FUN_14574681c(lVar1 + 0x1a8,0);
    }
    if (*(longlong *)(param_1 + 0x2e8) == DAT_14cbe3958) {
      FUN_1407161be(lVar1 + 0x1a8,param_1 + 0x348);
    }
    iVar3 = *(int *)(lVar1 + 0x1b0);
    *(int *)(param_1 + 0x304) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x2fc) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x1a4) = 0xffffffff;
    }
    else {
      iVar3 = 0;
      if (param_4 != -1) {
        iVar3 = param_4;
      }
      *(int *)(param_1 + 0x2fc) = iVar3;
      *(int *)(lVar1 + 0x1a4) = iVar3;
      if ((param_4 != -1) && ((*(uint *)(param_1 + 0x8c) & 0x80) != 0)) {
        FUN_14573e566(param_1,param_1 + 0x2fc);
      }
    }
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 14572917e FUN_14572917e body=226 status=ok
// SIG undefined FUN_14572917e(void)

longlong * FUN_14572917e(longlong *param_1)

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
  pcVar13 = FUN_1463df272;
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



// FUNCTION 145729262 FUN_145729262 body=132 status=ok
// SIG undefined FUN_145729262(void)

undefined1 * FUN_145729262(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancingViewZCompareZero";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147b49818;
}



// FUNCTION 1457292e6 FUN_1457292e6 body=138 status=ok
// SIG undefined FUN_1457292e6(void)

code * FUN_1457292e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancingViewZConstant";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463df2fa;
}



// FUNCTION 145729370 FUN_145729370 body=138 status=ok
// SIG undefined FUN_145729370(void)

code * FUN_145729370(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancingTranslatedWorldViewOriginOne";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147b4978e;
}



// FUNCTION 1457293fa FUN_1457293fa body=205 status=ok
// SIG undefined FUN_1457293fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457293fa(void)

{
  if ((DAT_14c9f8427 & 2) == 0) {
    DAT_14c9f8427 = DAT_14c9f8427 | 2;
    _DAT_14c9f83c8 = L"FLumenCardVS";
    _DAT_14c9f83e0 = FUN_146826540;
    _DAT_14c9f83e8 = FUN_146825d77;
    _DAT_14c9f83f0 = FUN_146825fd6;
    _DAT_14c9f83f8 = FUN_1407e02ea;
    _DAT_14c9f8400 = FUN_146826273;
    _DAT_14c9f83d8 = FUN_1472046de;
    _DAT_14c9f8418 = 0xffffffff00000108;
    _DAT_14c9f8420 = 8;
    DAT_14c9f8424 = 0;
    _DAT_14c9f8408 = &LAB_147204714;
    FUN_1457294c8();
    FUN_1407e00cc(&DAT_14c9f83c0);
    return;
  }
  return;
}



// FUNCTION 1457294c8 FUN_1457294c8 body=123 status=ok
// SIG undefined FUN_1457294c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457294c8(void)

{
  _DAT_14c9ffa98 = L"BASE";
  DAT_14c9ffac2 = 4;
  _DAT_14c9ffaa0 = FUN_141092e92();
  _DAT_14c9ffaa8 = DAT_14c9f83d0;
  _DAT_14c9ffab0 = &LAB_14682652b;
  DAT_14c9f83d0 = &DAT_14c9ffa98;
  DAT_14c9f8425 = DAT_14c9f8425 + '\x01';
  _DAT_14c9ffab8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffaa0 + 100) != '\0') {
    DAT_14c9f8426 = DAT_14c9f8426 + '\x01';
  }
  return;
}



// FUNCTION 145729544 FUN_145729544 body=205 status=ok
// SIG undefined FUN_145729544(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145729544(void)

{
  if ((DAT_14c9f854f & 2) == 0) {
    DAT_14c9f854f = DAT_14c9f854f | 2;
    _DAT_14c9f84f0 = L"FLumenCardPS";
    _DAT_14c9f8508 = FUN_146826540;
    _DAT_14c9f8510 = FUN_146825d77;
    _DAT_14c9f8518 = FUN_146825fd6;
    _DAT_14c9f8520 = FUN_1407e02ea;
    _DAT_14c9f8528 = FUN_146826273;
    _DAT_14c9f8500 = FUN_147204790;
    _DAT_14c9f8540 = 0xffffffff00000108;
    _DAT_14c9f8548 = 8;
    DAT_14c9f854c = 0;
    _DAT_14c9f8530 = &LAB_1472047c6;
    FUN_145729612();
    FUN_1407e00cc(&DAT_14c9f84e8);
    return;
  }
  return;
}



// FUNCTION 145729612 FUN_145729612 body=123 status=ok
// SIG undefined FUN_145729612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145729612(void)

{
  _DAT_14c9ffac8 = L"BASE";
  DAT_14c9ffaf2 = 4;
  _DAT_14c9ffad0 = FUN_141092e92();
  _DAT_14c9ffad8 = DAT_14c9f84f8;
  _DAT_14c9ffae0 = &LAB_14682652b;
  DAT_14c9f84f8 = &DAT_14c9ffac8;
  DAT_14c9f854d = DAT_14c9f854d + '\x01';
  _DAT_14c9ffae8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffad0 + 100) != '\0') {
    DAT_14c9f854e = DAT_14c9f854e + '\x01';
  }
  return;
}



// FUNCTION 14572968e FUN_14572968e body=205 status=ok
// SIG undefined FUN_14572968e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14572968e(void)

{
  if ((DAT_14ca4d39f & 2) == 0) {
    DAT_14ca4d39f = DAT_14ca4d39f | 2;
    _DAT_14ca4d340 = L"FShaderPrintUploadCS";
    _DAT_14ca4d358 = FUN_146826540;
    _DAT_14ca4d360 = FUN_146825d77;
    _DAT_14ca4d368 = FUN_146825fd6;
    _DAT_14ca4d370 = FUN_1407e02ea;
    _DAT_14ca4d378 = FUN_146826273;
    _DAT_14ca4d350 = FUN_1472ea77c;
    _DAT_14ca4d390 = 0xffffffff000000e0;
    _DAT_14ca4d398 = 8;
    DAT_14ca4d39c = 0;
    _DAT_14ca4d380 = &LAB_1472ea7a8;
    FUN_14572975c();
    FUN_1407e00cc(&DAT_14ca4d338);
    return;
  }
  return;
}



// FUNCTION 14572975c FUN_14572975c body=123 status=ok
// SIG undefined FUN_14572975c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14572975c(void)

{
  _DAT_14ca568b8 = L"BASE";
  DAT_14ca568e2 = 4;
  _DAT_14ca568c0 = FUN_140b35ae4();
  _DAT_14ca568c8 = DAT_14ca4d348;
  _DAT_14ca568d0 = &LAB_14682652b;
  DAT_14ca4d348 = &DAT_14ca568b8;
  DAT_14ca4d39d = DAT_14ca4d39d + '\x01';
  _DAT_14ca568d8 = 0x100000000;
  if (*(char *)(_DAT_14ca568c0 + 100) != '\0') {
    DAT_14ca4d39e = DAT_14ca4d39e + '\x01';
  }
  return;
}



// FUNCTION 1457297d8 FUN_1457297d8 body=226 status=ok
// SIG undefined FUN_1457297d8(void)

longlong * FUN_1457297d8(longlong *param_1)

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
  pcVar13 = FUN_14630787e;
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



// FUNCTION 1457298c0 FUN_1457298c0 body=136 status=ok
// SIG undefined FUN_1457298c0(void)

code * FUN_1457298c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSymbolCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f6048;
}



// FUNCTION 145729948 FUN_145729948 body=138 status=ok
// SIG undefined FUN_145729948(void)

code * FUN_145729948(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CursorCoord";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f6270;
}



// FUNCTION 1457299d2 FUN_1457299d2 body=232 status=ok
// SIG undefined FUN_1457299d2(void)

longlong * FUN_1457299d2(longlong *param_1)

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
  pcVar12 = FUN_146307906;
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



// FUNCTION 145729ac0 FUN_145729ac0 body=283 status=ok
// SIG undefined FUN_145729ac0(void)

void FUN_145729ac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_88 [44];
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145729bdc();
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_1415024b8(&local_40);
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_48,puVar1,1);
  FUN_1405f0c1c(&local_50,local_48);
  FUN_1401533ba(&local_5c,local_30,1);
  *(undefined4 *)(param_3 + 1) = local_54;
  *param_3 = local_5c;
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145729bdc FUN_145729bdc body=84 status=ok
// SIG undefined FUN_145729bdc(void)

void FUN_145729bdc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405f0cf6(&local_24,param_2,0,1);
  *param_3 = local_24;
  *(undefined4 *)(param_3 + 1) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145729c32 FUN_145729c32 body=44 status=ok
// SIG undefined FUN_145729c32(void)

void FUN_145729c32(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  FUN_145729c5e();
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30), lVar2 != 0)) {
    pbVar1 = (byte *)(lVar2 + 0x154);
    *pbVar1 = *pbVar1 | 4;
  }
  return;
}



// FUNCTION 145729c5e FUN_145729c5e body=1148 status=ok
// SIG undefined FUN_145729c5e(void)

void FUN_145729c5e(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined2 local_90 [2];
  undefined4 local_8c;
  longlong local_88;
  longlong *local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x20))();
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_14572a0e8(&local_88,uVar5);
  cVar4 = FUN_144729dda(param_1 + 2);
  if (cVar4 != '\0') {
    uVar5 = FUN_14479d2ce(param_1 + 2);
    FUN_14497e828(uVar5);
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
  FUN_14572a2f6(puVar6,param_2);
  puVar9 = (undefined8 *)param_1[9];
  if ((puVar9 != puVar6) && (param_1[9] = (longlong)puVar6, puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9,1);
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_98);
  FUN_14572a0dc(&local_88);
  lVar7 = FUN_140d97494(param_1);
  if (lVar7 != 0) {
    FUN_14572a134(lVar7 + 0x410,&local_88,param_1);
    param_1[0x19] = local_88;
    FUN_14485c47a(param_1 + 0x1a,lVar7);
  }
  if ((param_1[9] == 0) || (lVar7 = *(longlong *)(param_1[9] + 0x30), lVar7 == 0))
  goto LAB_145729f82;
  lVar8 = param_1[5];
  if (lVar8 == 0) {
    uVar5 = FUN_145c272be();
    lVar8 = FUN_14477b664(uVar5);
    param_1[5] = lVar8;
  }
  plVar1 = param_1 + 4;
  if (param_1[6] == 0) {
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_145729f82;
    plVar3 = *(longlong **)(lVar8 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar5,plVar1);
        param_1[6] = lVar8;
        if (lVar8 == 0) goto LAB_145729f82;
        goto LAB_145729dde;
      }
    }
    param_1[6] = 0;
    goto LAB_145729f82;
  }
LAB_145729dde:
  uVar5 = thunk_FUN_14050fd64();
  lVar8 = param_1[5];
  if (lVar8 == 0) {
    uVar10 = FUN_145c272be();
    lVar8 = FUN_14477b664(uVar10);
    param_1[5] = lVar8;
  }
  lVar11 = param_1[6];
  if (((lVar11 == 0) && (lVar11 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
    plVar3 = *(longlong **)(lVar8 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_14572a0d3:
      lVar11 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_14572a0d3;
      uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar11 = FUN_144aff482(uVar10,plVar1);
    }
    param_1[6] = lVar11;
  }
  local_b8 = (undefined2 *)0x0;
  FUN_14088df30(uVar5,&local_88,lVar11,0);
  plVar1 = local_80;
  if (param_1 + 7 != &local_88) {
    param_1[7] = local_88;
    local_88 = 0;
    plVar3 = (longlong *)param_1[8];
    if (local_80 != plVar3) {
      local_80 = (longlong *)0x0;
      param_1[8] = (longlong)plVar1;
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
  }
  plVar1 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar8 = param_1[7];
  if (((lVar8 == 0) || (*(char *)(lVar8 + 0x30) != '\0')) ||
     ((*(char *)(lVar8 + 0x31) != '\0' || (*(int *)(lVar8 + 0x6c) != 2)))) {
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      puVar9 = (undefined8 *)(lVar7 + 0x458);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    uVar5 = *puVar9;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
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
    local_a8[2] = lVar8;
    *local_a8 = &PTR_FUN_14b4330f0;
    local_a8[3] = param_1;
    local_a8[4] = FUN_1414947e8;
    local_88 = 0;
    local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_14487d8d8(&local_88,&local_a8);
    local_48 = 1;
    local_b8 = local_90;
    local_90[0] = 1;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar5,param_1 + 10,&local_88,0x3f800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_a8);
  }
  else {
    FUN_1461763f2(param_1);
  }
LAB_145729f82:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572a0dc FUN_14572a0dc body=12 status=ok
// SIG undefined FUN_14572a0dc(void)

void FUN_14572a0dc(longlong *param_1)

{
  *(undefined8 *)(*param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14572a0e8 FUN_14572a0e8 body=75 status=ok
// SIG undefined FUN_14572a0e8(void)

undefined8 * FUN_14572a0e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  puVar1 = DAT_14c9a7d10;
  *param_1 = DAT_14c9a7d10;
  puVar1[3] = param_2;
  return param_1;
}



// FUNCTION 14572a134 FUN_14572a134 body=228 status=ok
// SIG undefined FUN_14572a134(void)

undefined8 FUN_14572a134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4332c0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b433080;
  local_38[3] = param_3;
  local_38[4] = &LAB_1457d43d8;
  FUN_14572a21a(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572a21a FUN_14572a21a body=214 status=ok
// SIG undefined FUN_14572a21a(void)

undefined8 * FUN_14572a21a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14572a2f6 FUN_14572a2f6 body=288 status=ok
// SIG undefined FUN_14572a2f6(void)

undefined8 * FUN_14572a2f6(undefined8 *param_1,byte param_2)

{
  char cVar1;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ushort local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  undefined1 local_70 [28];
  char local_54;
  undefined8 local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0xc044000000000000;
  local_a8 = 0xc050e00000000000;
  local_a0 = 0;
  local_98 = 0x40490fdb3f800000;
  local_90 = (ushort)param_2 << 8 | 0x2d;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14572a418(param_1,&local_b0);
  *param_1 = &PTR_FUN_14b431a00;
  if (param_1[6] != 0) {
    cVar1 = FUN_1405f0e38();
    if (cVar1 == '\0') {
      FUN_1405f0e9c(local_78,param_1[6],5);
      if (local_54 == '\0') {
        do {
          FUN_1405f107a(local_48,0);
          FUN_14059e512(local_78);
        } while (local_54 == '\0');
      }
      if (local_20 == '\x01') {
        FUN_14024445c(local_70);
      }
      FUN_14572a4ce(param_1[6]);
      FUN_1405f0e42(param_1[6],1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572a418 FUN_14572a418 body=181 status=ok
// SIG undefined FUN_14572a418(void)

undefined8 * FUN_14572a418(undefined8 *param_1,undefined4 *param_2)

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
  undefined2 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  local_38 = *(undefined2 *)(param_2 + 8);
  local_30 = *(longlong *)(param_2 + 10);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_28 = *(undefined8 *)(param_2 + 0xc);
  FUN_14572a658(param_1);
  *param_1 = &PTR_FUN_14b431a40;
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572a4ce FUN_14572a4ce body=272 status=ok
// SIG undefined FUN_14572a4ce(void)

void FUN_14572a4ce(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1409f3758(&DAT_14cb10aa8,param_1);
  cVar1 = FUN_1449fafdc(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_14490d72a(param_1);
    if (iVar2 == 2) {
      lVar3 = FUN_147d5f2ee(param_1);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0xc0) = lVar3;
    }
  }
  local_20 = 0;
  local_28 = &local_38;
  local_30 = &LAB_143794b60;
  local_38 = param_1;
  FUN_1405f0fde(param_1 + 0x870);
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x6c0))();
    if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2c0))();
    }
  }
  FUN_1447f69b6(param_1 + 0x7b8);
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_14572a5e0();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572a5e0 FUN_14572a5e0 body=1 status=ok
// SIG undefined FUN_14572a5e0(void)

void FUN_14572a5e0(void)

{
  return;
}



// FUNCTION 14572a5e2 FUN_14572a5e2 body=7 status=ok
// SIG undefined FUN_14572a5e2(void)

undefined1 FUN_14572a5e2(void)

{
  return DAT_14cae8fe0;
}



// FUNCTION 14572a5ea FUN_14572a5ea body=109 status=ok
// SIG undefined FUN_14572a5ea(void)

ulonglong FUN_14572a5ea(longlong param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0xc4) == '\x01') {
    uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0xc3));
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x40);
    if ((uVar2 == 0) && (uVar2 = FUN_14475ec7e(param_1), uVar2 == 0)) {
      uVar2 = 0;
    }
    else {
      bVar1 = *(byte *)(uVar2 + 0x152);
      if ((bVar1 == 1) || ((uVar2 = 0, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),DAT_14cb11870);
      }
    }
    *(char *)(param_1 + 0xc3) = (char)uVar2;
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 14572a658 FUN_14572a658 body=1063 status=ok
// SIG undefined FUN_14572a658(void)

longlong * FUN_14572a658(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [104];
  ushort local_50 [4];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = (longlong)&PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = (longlong)&PTR_FUN_14aa51e30;
  plVar1 = param_1 + 6;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_2 + 0x20) >> 2 & 1;
  local_120 = 0;
  local_128 = 0;
  lVar3 = FUN_14572aef8(DAT_14c951640,0,*(uint *)(param_2 + 0x20) >> 2 & 8,0);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  *plVar1 = lVar3;
  *(byte *)(lVar3 + 0x152) = (*(byte *)(param_2 + 0x20) & 0x40) == 0 | 4;
  uVar4 = FUN_14572ad1a(DAT_14cb0d2b0,*(undefined1 *)(*plVar1 + 0x152));
  FUN_14572aa80(uVar4,*plVar1);
  lVar3 = *plVar1;
  uVar2 = *(uint *)(param_2 + 0x20);
  lVar5 = *(longlong *)(param_2 + 0x28);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  local_50[0] = (ushort)((*(uint *)(param_2 + 0x20) & 0x100) << 6) |
                (((ushort)(uVar2 >> 4) & 4 | (ushort)uVar2 & 10) + ((ushort)uVar2 & 0x10) * 4 |
                (ushort)((uVar2 & 0x20) << 4)) + ((ushort)*(uint *)(param_2 + 0x20) & 0x80) * 2 |
                0x1401;
  local_48 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  FUN_14572b19c(lVar3,local_50,0);
  FUN_140810d00(local_b8,0);
  lVar3 = *(longlong *)(param_2 + 0x30);
  if ((lVar3 != 0) && (lVar5 = *plVar1, *(char *)(lVar5 + 0x152) == '\x05')) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(lVar5 + 0x1f0) = lVar3;
    lVar5 = FUN_1405e677a(DAT_14cb0d2b0,*plVar1);
    lVar3 = *(longlong *)(param_2 + 0x30);
    if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(lVar5 + 0x2a8) = lVar3;
    uVar4 = FUN_1402cf94e(*(undefined8 *)(param_2 + 0x30));
    *(undefined8 *)(lVar5 + 0x2a0) = uVar4;
    FUN_145ded2f2(lVar5,plVar1);
    lVar3 = *(longlong *)(param_2 + 0x28);
    if (lVar3 != 0) {
      lVar5 = FUN_14117928e();
      if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) && (*(longlong *)(param_2 + 0x28) != 0)) {
        FUN_1437893fe(*plVar1,local_b8);
      }
    }
  }
  FUN_1405f2cd6(*plVar1,local_b8,1,0);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    lVar3 = FUN_14572aba8(DAT_14c951640);
    param_1[2] = lVar3;
    *(undefined4 *)(lVar3 + 0x2cc) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1[2] + 0x2d0) = 0xffffffff;
    *(uint *)(param_1[2] + 0x2d4) = *(uint *)(param_1[2] + 0x2d4) | 0x20;
    FUN_144a7484c(param_2,local_118);
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,param_1[2],local_118,0);
    lVar3 = FUN_14572ac61(DAT_14c951640);
    param_1[3] = lVar3;
    *(undefined1 *)(lVar3 + 0x30d) = 0;
    *(undefined1 *)(param_1[3] + 0x2f1) = 1;
    *(undefined4 *)(param_1[3] + 0x2cc) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(param_1[3] + 0x1fb) = 2;
    (**(code **)(*param_1 + 0x20))(param_1,param_1[3],&DAT_14c846480,0);
    lVar3 = FUN_1405f2428(DAT_14c951640);
    param_1[7] = lVar3;
    *(byte *)(lVar3 + 0x658) = *(byte *)(lVar3 + 0x658) & 0xfe;
    (**(code **)(*param_1 + 0x20))(param_1,param_1[7],&DAT_14c846480,0);
  }
  FUN_14572ae18(local_118,param_1);
  FUN_141238aee(local_b8);
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572aa80 FUN_14572aa80 body=296 status=ok
// SIG undefined FUN_14572aa80(void)

void FUN_14572aa80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x2e0) != -1)) && (lVar4 = FUN_145ef8526(), lVar4 != 0)
     ) {
    FUN_1479731de(lVar4,param_2,*(undefined4 *)(param_1 + 0x2e0));
  }
  if (0 < *(int *)(param_1 + 0x358)) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x350) + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x360);
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        if (*plVar2 == lVar3) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x350) + lVar4 * 8);
          if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(param_2);
          }
          *plVar2 = param_2;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x358));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x360) = param_2;
  plVar2 = *(longlong **)(param_1 + 0x2a8);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014572aaff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2e8))(plVar2,uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14572aba8 FUN_14572aba8 body=184 status=ok
// SIG undefined FUN_14572aba8(void)

undefined8 FUN_14572aba8(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_141331fc4();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572ac61 FUN_14572ac61 body=184 status=ok
// SIG undefined FUN_14572ac61(void)

undefined8 FUN_14572ac61(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_141221a30();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572ad1a FUN_14572ad1a body=253 status=ok
// SIG undefined FUN_14572ad1a(void)

undefined1 * FUN_14572ad1a(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined1 *)FUN_14001cc68(0x368,0x10);
  FUN_14572aff2(puVar2);
  iVar1 = *(int *)(param_1 + 0x1150);
  *(uint *)(param_1 + 0x1150) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1154) < iVar1 + 1U) {
    FUN_1456bd870(param_1 + 0x1148,iVar1);
  }
  *(undefined1 **)(*(longlong *)(param_1 + 0x1148) + (longlong)iVar1 * 8) = puVar2;
  *puVar2 = param_2;
  *(int *)(param_1 + 0x1158) = *(int *)(param_1 + 0x1158) + 1;
  FUN_140002266(&local_40,L"Context_%d");
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar3,1);
  *(undefined8 *)(puVar2 + 0x140) = local_30;
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 14572ae18 FUN_14572ae18 body=223 status=ok
// SIG undefined FUN_14572ae18(void)

undefined8 FUN_14572ae18(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14aa59bc0;
  local_30[3] = param_2;
  local_30[4] = FUN_140e50f6c;
  FUN_1448b6402(&DAT_14c872d10,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572aef8 FUN_14572aef8 body=248 status=ok
// SIG undefined FUN_14572aef8(void)

undefined8
FUN_14572aef8(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_144a7757c();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572aff2 FUN_14572aff2 body=425 status=ok
// SIG undefined FUN_14572aff2(void)

undefined1 * FUN_14572aff2(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  param_1[0x13a] = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x149) = 0;
  *(undefined8 *)(param_1 + 0x151) = 0;
  FUN_140810d00(param_1 + 0x160,0);
  FUN_140810d00(param_1 + 0x1c8,0);
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  param_1[0x278] = param_1[0x278] & 0xfe;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 5;
  *(undefined2 *)(param_1 + 0x2dc) = 0;
  param_1[0x2de] = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  return param_1;
}



// FUNCTION 14572b19c FUN_14572b19c body=1026 status=ok
// SIG undefined FUN_14572b19c(void)

void FUN_14572b19c(longlong param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined2 local_d0 [4];
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_87;
  byte local_86;
  undefined1 local_85;
  undefined4 local_84;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*param_2 & 0x200) == 0) {
    FUN_14472eae2(param_1,8);
  }
  FUN_1446f470e(&local_c0,L"PersistentLevel",1);
  lVar3 = FUN_14572b94e(param_1,local_c0);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x30) = lVar3;
  FUN_140810d00(&local_b8,0);
  FUN_14572b5a0(lVar3,&local_b8);
  FUN_141238aee(&local_b8);
  lVar4 = FUN_14572b7be(*(undefined8 *)(param_1 + 0x30));
  lVar3 = *(longlong *)(param_1 + 0x30);
  if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(lVar3 + 200) = lVar4;
  FUN_14572b688(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 200),0,1);
  lVar3 = *(longlong *)(param_1 + 0x30);
  if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(lVar3 + 0xc0) = param_1;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_87 = 1;
  local_86 = local_86 & 0xe0;
  local_85 = 0;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  if ((*param_2 & 0x200) == 0) {
    local_84 = 0;
    FUN_14472eae2(*(undefined8 *)(param_1 + 0x30),8);
    FUN_14472eae2(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 200),8);
  }
  else {
    local_84 = 8;
    FUN_144757f48(*(undefined8 *)(param_1 + 0x30),8);
    FUN_144757f48(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 200),8);
  }
  lVar4 = DAT_14cb0d2b0;
  local_88 = 1;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x1b8);
  if (lVar3 == 0) {
LAB_14572b497:
    lVar3 = 0;
  }
  else {
    lVar5 = FUN_14059e8cc();
    if (((lVar5 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_14572b497;
    lVar3 = *(longlong *)(lVar4 + 0x1b8);
  }
  lVar4 = DAT_14cb0d2b0;
  local_b8 = *(undefined8 *)(lVar3 + 0x18);
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x1b8);
  if (lVar3 != 0) {
    lVar5 = FUN_14059e8cc();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      uVar7 = *(undefined8 *)(lVar4 + 0x1b8);
      goto LAB_14572b39f;
    }
  }
  uVar7 = 0;
LAB_14572b39f:
  local_d8 = &local_b8;
  plVar6 = (longlong *)FUN_141137228(param_1,uVar7,0,0);
  lVar3 = *(longlong *)(param_2 + 2);
  if (lVar3 != 0) {
    lVar4 = FUN_14117928e();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30 && (lVar3 = *(longlong *)(param_2 + 2), lVar3 != 0)))) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(param_2 + 2);
      }
      plVar6[0x86] = lVar3;
    }
  }
  FUN_14572ba1e(*(undefined8 *)(param_1 + 0x30),plVar6);
  if (param_3 == '\0') {
    if ((DAT_14c761ea0 == '\x01') && (*(longlong *)(param_1 + 0x790) == 0)) {
      uVar7 = FUN_14001cc68(0xa8,0x10);
      FUN_14572b5aa(uVar7);
      *(undefined8 *)(param_1 + 0x790) = uVar7;
    }
    cVar1 = (**(code **)(*plVar6 + 0x6a0))(plVar6);
    if (cVar1 == '\0') {
      uVar2 = (uint)(ushort)*param_2;
    }
    else {
      uVar2 = *param_2 | 0x4000;
      *param_2 = uVar2;
    }
    local_d0[0] = (undefined2)uVar2;
    local_c8 = *(longlong *)(param_2 + 2);
    if ((local_c8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14572bbfc(param_1,local_d0);
    FUN_1405f29ac(param_1,0,0);
  }
  if (local_78 != 0) {
    plVar6 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar6 = local_58;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572b5a0 FUN_14572b5a0 body=9 status=ok
// SIG undefined FUN_14572b5a0(void)

void FUN_14572b5a0(longlong param_1)

{
  FUN_1405f35b2(param_1 + 0x38);
  return;
}



// FUNCTION 14572b5aa FUN_14572b5aa body=75 status=ok
// SIG undefined FUN_14572b5aa(void)

longlong FUN_14572b5aa(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = (**(code **)(*DAT_14cae4688 + 0xb0))();
    FUN_14572b5f6(param_1 + lVar2,uVar1);
    *(undefined8 *)(param_1 + 0x30 + lVar2) = 0;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0xa8);
  return param_1;
}



// FUNCTION 14572b5f6 FUN_14572b5f6 body=103 status=ok
// SIG undefined FUN_14572b5f6(void)

undefined8 * FUN_14572b5f6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_1 + 1;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1405f2930(puVar1,param_2,1);
  LOCK();
  *param_1 = 0;
  UNLOCK();
  uVar2 = *(undefined4 *)(param_1 + 2);
  FUN_14572b65e(puVar1,uVar2);
  FUN_1405f2930(puVar1,uVar2,1);
  param_1[3] = 0;
  LOCK();
  param_1[4] = 0;
  UNLOCK();
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 14572b65e FUN_14572b65e body=42 status=ok
// SIG undefined FUN_14572b65e(void)

void FUN_14572b65e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1448f21ac();
  return;
}



// FUNCTION 14572b688 FUN_14572b688 body=154 status=ok
// SIG undefined FUN_14572b688(void)

void FUN_14572b688(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412e3d1e(&local_38);
  *(undefined4 *)(param_1 + 0x218) = local_38;
  *(undefined4 *)(param_1 + 0x21c) = uStack_34;
  *(undefined4 *)(param_1 + 0x220) = uStack_30;
  *(undefined4 *)(param_1 + 0x224) = uStack_2c;
  *(undefined1 *)(param_1 + 0x228) = param_3;
  FUN_144757f48(param_1,8);
  FUN_14572b724(param_1);
  if (param_2 != 0) {
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    *(longlong *)(param_2 + 0x3a0) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572b724 FUN_14572b724 body=154 status=ok
// SIG undefined FUN_14572b724(void)

void FUN_14572b724(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_140678d80(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1406791da(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_140678446(param_1 + 0x48,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_140678446(param_1 + 0x58,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_140678a72(param_1 + 0x68,0);
  }
  *(undefined4 *)(param_1 + 0x22c) = 4;
  return;
}



// FUNCTION 14572b7be FUN_14572b7be body=177 status=ok
// SIG undefined FUN_14572b7be(void)

undefined8 FUN_14572b7be(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14572b870();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


