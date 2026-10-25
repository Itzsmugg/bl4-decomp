// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481d81cc FUN_1481d81cc body=559 status=ok
// SIG undefined FUN_1481d81cc(void)

void FUN_1481d81cc(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong *plVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_348;
    do {
      puVar4 = (uint *)*plVar10;
      puVar11 = (uint *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 3);
      puVar9 = puVar4;
      puVar15 = puVar11;
      if (iVar13 != 0) {
LAB_1481d828d:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar2 = *(undefined8 *)(puVar4 + uVar7 * 2);
          *(undefined8 *)(puVar4 + uVar7 * 2) = *(undefined8 *)puVar4;
          *(undefined8 *)puVar4 = uVar2;
          puVar8 = puVar11 + 2;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 2;
            puVar12 = puVar5 + 2;
            do {
              puVar5 = puVar12;
              puVar16 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar16 + 2;
              puVar12 = puVar5 + 2;
            } while (*puVar5 <= *puVar4);
            puVar3 = puVar8 + -4;
            do {
              puVar12 = puVar8;
              puVar17 = puVar3;
              puVar8 = puVar12 + -2;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar17 + -2;
            } while (*puVar4 <= *puVar8);
            if (puVar8 < puVar5) goto LAB_1481d8307;
            uVar2 = *(undefined8 *)puVar5;
            *(undefined8 *)puVar5 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar8 = uVar2;
          } while( true );
        }
        if (puVar4 < puVar11) {
          do {
            puVar9 = puVar4;
            if (puVar4 + 2 <= puVar11) {
              uVar14 = *puVar4;
              puVar15 = puVar4 + 2;
              do {
                uVar1 = *puVar15;
                bVar18 = uVar14 < uVar1;
                if (uVar14 <= uVar1) {
                  uVar14 = uVar1;
                }
                if (bVar18) {
                  puVar9 = puVar15;
                }
                puVar15 = puVar15 + 2;
              } while (puVar15 <= puVar11);
            }
            uVar2 = *(undefined8 *)puVar9;
            *(undefined8 *)puVar9 = *(undefined8 *)puVar11;
            *(undefined8 *)puVar11 = uVar2;
            puVar11 = puVar11 + -2;
          } while (puVar4 < puVar11);
        }
        goto LAB_1481d83da;
      }
LAB_1481d83ef:
      FUN_1481d83fc(puVar4);
LAB_1481d83da:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1481d8307:
  uVar2 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar4 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar8 = uVar2;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -4;
  if ((longlong)puVar17 - (longlong)puVar9 < (longlong)puVar15 - (longlong)puVar16) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar16 = puVar4;
    if (puVar8 <= puVar4 + 2) goto LAB_1481d83da;
  }
  else {
    if (puVar4 + 2 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar17 = puVar11;
    if (puVar11 <= puVar5) goto LAB_1481d83da;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar16) >> 3);
  puVar9 = puVar16;
  puVar11 = puVar12;
  puVar15 = puVar17;
  if (iVar13 == 0) goto LAB_1481d83ef;
  goto LAB_1481d828d;
}



// FUNCTION 1481d83fc FUN_1481d83fc body=297 status=ok
// SIG undefined FUN_1481d83fc(void)

void FUN_1481d83fc(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x0001481d841d:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(uint *)(param_1 + iVar5) <= *(uint *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(uint *)(param_1 + iVar2) < *(uint *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x0001481d841d;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(uint *)(param_1 + iVar5) <= *(uint *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(uint *)(param_1 + iVar6) <= *(uint *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 1481d8526 FUN_1481d8526 body=363 status=ok
// SIG undefined FUN_1481d8526(void)

undefined8
FUN_1481d8526(longlong *param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  switch(*(undefined1 *)(*param_1 + 4)) {
  case 1:
    local_30 = *(longlong *)(param_4 + 0x38);
    iVar1 = *(int *)(param_4 + 0x130);
    local_20 = (ulonglong)(uint)(iVar1 * param_3) + local_30;
    local_50 = &local_20;
    local_28 = (ulonglong)(uint)((param_3 + 1) * iVar1) + local_30;
    local_48 = &local_28;
    local_30 = (ulonglong)(uint)((param_3 + 2) * iVar1) + local_30;
    local_40 = &local_30;
    local_38 = param_1;
    uVar2 = FUN_1481d87fe();
    break;
  case 2:
    local_30 = *(longlong *)(param_4 + 0x38);
    iVar1 = *(int *)(param_4 + 0x130);
    local_20 = (ulonglong)(uint)(iVar1 * param_3) + local_30;
    local_70 = &local_20;
    local_28 = (ulonglong)(uint)((param_3 + 1) * iVar1) + local_30;
    local_68 = &local_28;
    local_30 = (ulonglong)(uint)((param_3 + 2) * iVar1) + local_30;
    local_60 = &local_30;
    local_58 = param_1;
    uVar2 = FUN_1481d8890();
    break;
  case 3:
    local_20 = (ulonglong)(uint)(param_3 * *(int *)(param_4 + 0x130)) +
               *(longlong *)(param_4 + 0x38);
    uVar2 = FUN_1481d8922();
    break;
  case 4:
    local_20 = (ulonglong)(uint)(param_3 * *(int *)(param_4 + 0x130)) +
               *(longlong *)(param_4 + 0x38);
    uVar2 = FUN_1481d89ee(param_1,param_2,param_5);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1481d8692 FUN_1481d8692 body=363 status=ok
// SIG undefined FUN_1481d8692(void)

undefined8
FUN_1481d8692(longlong *param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  switch(*(undefined1 *)(*param_1 + 4)) {
  case 1:
    local_30 = *(longlong *)(param_4 + 0x18);
    iVar1 = *(int *)(param_4 + 0x128);
    local_20 = (ulonglong)(uint)(iVar1 * param_3) + local_30;
    local_50 = &local_20;
    local_28 = (ulonglong)(uint)((param_3 + 1) * iVar1) + local_30;
    local_48 = &local_28;
    local_30 = (ulonglong)(uint)((param_3 + 2) * iVar1) + local_30;
    local_40 = &local_30;
    local_38 = param_1;
    uVar2 = FUN_1481d8db8();
    break;
  case 2:
    local_30 = *(longlong *)(param_4 + 0x18);
    iVar1 = *(int *)(param_4 + 0x128);
    local_20 = (ulonglong)(uint)(iVar1 * param_3) + local_30;
    local_70 = &local_20;
    local_28 = (ulonglong)(uint)((param_3 + 1) * iVar1) + local_30;
    local_68 = &local_28;
    local_30 = (ulonglong)(uint)((param_3 + 2) * iVar1) + local_30;
    local_60 = &local_30;
    local_58 = param_1;
    uVar2 = FUN_1481d8e84();
    break;
  case 3:
    local_20 = (ulonglong)(uint)(param_3 * *(int *)(param_4 + 0x128)) +
               *(longlong *)(param_4 + 0x18);
    uVar2 = FUN_1481d8f48();
    break;
  case 4:
    local_20 = (ulonglong)(uint)(param_3 * *(int *)(param_4 + 0x128)) +
               *(longlong *)(param_4 + 0x18);
    uVar2 = FUN_1481d8fb8(param_1,param_2,param_5);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1481d87fe FUN_1481d87fe body=146 status=ok
// SIG undefined FUN_1481d87fe(void)

int FUN_1481d87fe(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar5 = 0;
    iVar3 = 0;
    do {
      if (((lVar1 == 0) || (*(int *)(lVar1 + uVar5 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) == *(int *)(param_1 + 0x20))))) {
        lVar4 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        dVar2 = (double)FUN_1481d8abc(param_4,uVar5 & 0xffffffff);
        *(uint *)(param_3 + lVar4 * 8) = ~(uint)(float)dVar2 & 0x7fffffff;
        *(int *)(param_3 + 4 + lVar4 * 8) = (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return iVar3;
}



// FUNCTION 1481d8890 FUN_1481d8890 body=146 status=ok
// SIG undefined FUN_1481d8890(void)

int FUN_1481d8890(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar5 = 0;
    iVar3 = 0;
    do {
      if (((lVar1 == 0) || (*(int *)(lVar1 + uVar5 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) == *(int *)(param_1 + 0x20))))) {
        lVar4 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        dVar2 = (double)FUN_1481d8c3a(param_4,uVar5 & 0xffffffff);
        *(uint *)(param_3 + lVar4 * 8) = ~(uint)(float)dVar2 & 0x7fffffff;
        *(int *)(param_3 + 4 + lVar4 * 8) = (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return iVar3;
}



// FUNCTION 1481d8922 FUN_1481d8922 body=203 status=ok
// SIG undefined FUN_1481d8922(void)

int FUN_1481d8922(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar6 = 0;
    iVar3 = 0;
    do {
      if (((lVar2 == 0) || (*(int *)(lVar2 + uVar6 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4) == *(int *)(param_1 + 0x20))))) {
        uVar1 = *(ushort *)(*param_4 + uVar6 * 2);
        uVar4 = (uint)uVar1 << 0xd;
        if ((uVar4 & 0xf800000) == 0xf800000) {
          fVar5 = (float)(uVar4 | 0x70000000);
        }
        else if ((uVar4 & 0xf800000) == 0) {
          fVar5 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar5 = (float)((uVar4 & 0xfffe000) + 0x38000000);
        }
        lVar7 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        fVar5 = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar5);
        uVar4 = ~(uint)fVar5;
        if (0.0 <= fVar5) {
          uVar4 = (uint)fVar5 | 0x80000000;
        }
        *(uint *)(param_3 + lVar7 * 8) = uVar4;
        *(int *)(param_3 + 4 + lVar7 * 8) = (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  return iVar3;
}



// FUNCTION 1481d89ee FUN_1481d89ee body=205 status=ok
// SIG undefined FUN_1481d89ee(void)

int FUN_1481d89ee(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar6 = 0;
    iVar3 = 0;
    do {
      if (((lVar2 == 0) || (*(int *)(lVar2 + uVar6 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4) == *(int *)(param_1 + 0x20))))) {
        uVar1 = *(ushort *)(*param_4 + uVar6 * 2);
        uVar4 = (uint)uVar1 << 0xd;
        if ((uVar4 & 0xf800000) == 0xf800000) {
          fVar5 = (float)(uVar4 | 0x70000000);
        }
        else if ((uVar4 & 0xf800000) == 0) {
          fVar5 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar5 = (float)((uVar4 & 0xfffe000) + 0x38000000);
        }
        lVar7 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        fVar5 = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar5);
        uVar4 = ~(uint)fVar5;
        if (0.0 <= fVar5) {
          uVar4 = (uint)fVar5 | 0x80000000;
        }
        *(uint *)(param_3 + lVar7 * 8) = ~uVar4;
        *(int *)(param_3 + 4 + lVar7 * 8) = (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  return iVar3;
}



// FUNCTION 1481d8abc FUN_1481d8abc body=382 status=ok
// SIG undefined FUN_1481d8abc(void)

double FUN_1481d8abc(undefined8 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  
  lVar8 = (longlong)param_2;
  uVar1 = *(ushort *)(*(longlong *)param_1[2] + lVar8 * 2);
  uVar5 = (uint)uVar1 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar6 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(*(longlong *)param_1[1] + lVar8 * 2);
  uVar5 = (uint)uVar2 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar9 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar9 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar9 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  lVar4 = *(longlong *)param_1[3];
  uVar3 = *(ushort *)(*(longlong *)*param_1 + lVar8 * 2);
  uVar5 = (uint)uVar3 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar7 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar7 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar7 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  return ((double)(float)((uint)fVar6 | (int)(short)uVar1 & 0x80000000U) - *(double *)(lVar4 + 0x58)
         ) * *(double *)(lVar4 + 0x70) +
         ((double)(float)((int)(short)uVar3 & 0x80000000U | (uint)fVar7) - *(double *)(lVar4 + 0x48)
         ) * *(double *)(lVar4 + 0x60) +
         ((double)(float)((uint)fVar9 | (int)(short)uVar2 & 0x80000000U) - *(double *)(lVar4 + 0x50)
         ) * *(double *)(lVar4 + 0x68);
}



// FUNCTION 1481d8c3a FUN_1481d8c3a body=381 status=ok
// SIG undefined FUN_1481d8c3a(void)

double FUN_1481d8c3a(undefined8 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar7 = (longlong)param_2;
  uVar1 = *(ushort *)(*(longlong *)param_1[2] + lVar7 * 2);
  uVar4 = (uint)uVar1 << 0xd;
  if ((uVar4 & 0xf800000) == 0xf800000) {
    fVar5 = (float)(uVar4 | 0x70000000);
  }
  else if ((uVar4 & 0xf800000) == 0) {
    fVar5 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar5 = (float)((uVar4 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(*(longlong *)param_1[1] + lVar7 * 2);
  uVar4 = (uint)uVar2 << 0xd;
  if ((uVar4 & 0xf800000) == 0xf800000) {
    fVar8 = (float)(uVar4 | 0x70000000);
  }
  else if ((uVar4 & 0xf800000) == 0) {
    fVar8 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar8 = (float)((uVar4 & 0xfffe000) + 0x38000000);
  }
  uVar3 = *(ushort *)(*(longlong *)*param_1 + lVar7 * 2);
  uVar4 = (uint)uVar3 << 0xd;
  if ((uVar4 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar4 | 0x70000000);
  }
  else if ((uVar4 & 0xf800000) == 0) {
    fVar6 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar4 & 0xfffe000) + 0x38000000);
  }
  lVar7 = *(longlong *)param_1[3];
  dVar9 = (double)(float)((uint)fVar5 | (int)(short)uVar1 & 0x80000000U) - *(double *)(lVar7 + 0x58)
  ;
  dVar10 = (double)(float)((uint)fVar8 | (int)(short)uVar2 & 0x80000000U) -
           *(double *)(lVar7 + 0x50);
  dVar11 = (double)(float)((int)(short)uVar3 & 0x80000000U | (uint)fVar6) -
           *(double *)(lVar7 + 0x48);
  return dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
}



// FUNCTION 1481d8db8 FUN_1481d8db8 body=204 status=ok
// SIG undefined FUN_1481d8db8(void)

int FUN_1481d8db8(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar5 = 0;
    iVar3 = 0;
    do {
      if (((lVar1 == 0) || (*(int *)(lVar1 + uVar5 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) == *(int *)(param_1 + 0x20))))) {
        lVar4 = (longlong)iVar3;
        lVar2 = *(longlong *)param_4[3];
        iVar3 = iVar3 + 1;
        *(uint *)(param_3 + lVar4 * 8) =
             ~(uint)(float)(((double)*(float *)(*(longlong *)param_4[2] + uVar5 * 4) -
                            *(double *)(lVar2 + 0x58)) * *(double *)(lVar2 + 0x70) +
                           ((double)*(float *)(*(longlong *)*param_4 + uVar5 * 4) -
                           *(double *)(lVar2 + 0x48)) * *(double *)(lVar2 + 0x60) +
                           ((double)*(float *)(*(longlong *)param_4[1] + uVar5 * 4) -
                           *(double *)(lVar2 + 0x50)) * *(double *)(lVar2 + 0x68)) & 0x7fffffff;
        *(int *)(param_3 + 4 + lVar4 * 8) = (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return iVar3;
}



// FUNCTION 1481d8e84 FUN_1481d8e84 body=195 status=ok
// SIG undefined FUN_1481d8e84(void)

int FUN_1481d8e84(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  
  if ((int)param_2 < 1) {
    iVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar6 = 0;
    iVar4 = 0;
    do {
      if (((lVar1 == 0) || (*(int *)(lVar1 + uVar6 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4) == *(int *)(param_1 + 0x20))))) {
        lVar5 = (longlong)iVar4;
        iVar4 = iVar4 + 1;
        lVar2 = *(longlong *)param_4[3];
        dVar3 = (double)*(float *)(*(longlong *)param_4[2] + uVar6 * 4) - *(double *)(lVar2 + 0x58);
        dVar7 = (double)*(float *)(*(longlong *)param_4[1] + uVar6 * 4) - *(double *)(lVar2 + 0x50);
        dVar8 = (double)*(float *)(*(longlong *)*param_4 + uVar6 * 4) - *(double *)(lVar2 + 0x48);
        *(uint *)(param_3 + lVar5 * 8) =
             ~(uint)(float)(dVar3 * dVar3 + dVar8 * dVar8 + dVar7 * dVar7) & 0x7fffffff;
        *(int *)(param_3 + 4 + lVar5 * 8) = (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  return iVar4;
}



// FUNCTION 1481d8f48 FUN_1481d8f48 body=112 status=ok
// SIG undefined FUN_1481d8f48(void)

int FUN_1481d8f48(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar6 = 0;
    iVar3 = 0;
    do {
      if (((lVar2 == 0) || (*(int *)(lVar2 + uVar6 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4) == *(int *)(param_1 + 0x20))))) {
        lVar4 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        fVar1 = *(float *)(*param_4 + uVar6 * 4);
        uVar5 = ~(uint)fVar1;
        if (0.0 <= fVar1) {
          uVar5 = (uint)fVar1 | 0x80000000;
        }
        *(uint *)(param_3 + lVar4 * 8) = uVar5;
        *(int *)(param_3 + 4 + lVar4 * 8) = (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  return iVar3;
}



// FUNCTION 1481d8fb8 FUN_1481d8fb8 body=114 status=ok
// SIG undefined FUN_1481d8fb8(void)

int FUN_1481d8fb8(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar6 = 0;
    iVar3 = 0;
    do {
      if (((lVar2 == 0) || (*(int *)(lVar2 + uVar6 * 4) == *(int *)(param_1 + 0x10))) &&
         ((*(longlong *)(param_1 + 0x18) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + uVar6 * 4) == *(int *)(param_1 + 0x20))))) {
        lVar4 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        fVar1 = *(float *)(*param_4 + uVar6 * 4);
        uVar5 = ~(uint)fVar1;
        if (0.0 <= fVar1) {
          uVar5 = (uint)fVar1 | 0x80000000;
        }
        *(uint *)(param_3 + lVar4 * 8) = ~uVar5;
        *(int *)(param_3 + 4 + lVar4 * 8) = (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  return iVar3;
}



// FUNCTION 1481d902a FUN_1481d902a body=505 status=ok
// SIG undefined FUN_1481d902a(void)

ulonglong FUN_1481d902a(longlong *param_1,uint param_2,int param_3,longlong param_4,longlong param_5
                       )

{
  ulonglong uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (3 < *(byte *)(*param_1 + 4) - 1) goto LAB_1481d91ad;
  uVar5 = (ulonglong)param_2;
  switch((uint)*(byte *)(*param_1 + 4)) {
  case 1:
    local_50 = *(longlong *)(param_4 + 0x38);
    iVar2 = *(int *)(param_4 + 0x130);
    local_40 = (ulonglong)(uint)(iVar2 * param_3) + local_50;
    local_70 = &local_40;
    local_48 = (ulonglong)(uint)((param_3 + 1) * iVar2) + local_50;
    local_68 = &local_48;
    local_50 = (ulonglong)(uint)((param_3 + 2) * iVar2) + local_50;
    local_60 = &local_50;
    local_58 = param_1;
    if (0 < (int)param_2) {
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        dVar3 = (double)FUN_1481d953e(&local_70,uVar6 & 0xffffffff);
        *(uint *)(param_5 + uVar6 * 8) = ~(uint)(float)dVar3 & 0x7fffffff;
        *(int *)(param_5 + 4 + uVar6 * 8) = (int)uVar6;
        uVar6 = uVar1;
      } while (uVar5 != uVar1);
      goto LAB_1481d91af;
    }
    break;
  case 2:
    local_50 = *(longlong *)(param_4 + 0x38);
    iVar2 = *(int *)(param_4 + 0x130);
    local_40 = (ulonglong)(uint)(iVar2 * param_3) + local_50;
    local_90 = &local_40;
    local_48 = (ulonglong)(uint)((param_3 + 1) * iVar2) + local_50;
    local_88 = &local_48;
    local_50 = (ulonglong)(uint)((param_3 + 2) * iVar2) + local_50;
    local_80 = &local_50;
    local_78 = param_1;
    if (0 < (int)param_2) {
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        dVar3 = (double)FUN_1481d96bc(&local_90,uVar6 & 0xffffffff);
        *(uint *)(param_5 + uVar6 * 8) = ~(uint)(float)dVar3 & 0x7fffffff;
        *(int *)(param_5 + 4 + uVar6 * 8) = (int)uVar6;
        uVar6 = uVar1;
      } while (uVar5 != uVar1);
      goto LAB_1481d91af;
    }
    break;
  case 3:
    local_40 = (ulonglong)(uint)(param_3 * *(int *)(param_4 + 0x130)) +
               *(longlong *)(param_4 + 0x38);
    uVar4 = FUN_1481d93f4(uVar5,param_5,&local_40);
    goto LAB_1481d9220;
  case 4:
    local_40 = (ulonglong)(uint)(param_3 * *(int *)(param_4 + 0x130)) +
               *(longlong *)(param_4 + 0x38);
    uVar4 = FUN_1481d9498(uVar5,param_5,&local_40);
LAB_1481d9220:
    uVar5 = (ulonglong)uVar4;
    goto LAB_1481d91af;
  }
LAB_1481d91ad:
  uVar5 = 0;
LAB_1481d91af:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1481d9224 FUN_1481d9224 body=463 status=ok
// SIG undefined FUN_1481d9224(void)

ulonglong FUN_1481d9224(longlong *param_1,uint param_2,int param_3,longlong param_4,longlong param_5
                       )

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = 0;
  if (*(byte *)(*param_1 + 4) - 1 < 4) {
    uVar7 = (ulonglong)param_2;
    switch((uint)*(byte *)(*param_1 + 4)) {
    case 1:
      local_30 = *(longlong *)(param_4 + 0x18);
      iVar1 = *(int *)(param_4 + 0x128);
      local_20 = (ulonglong)(uint)(iVar1 * param_3) + local_30;
      local_50 = &local_20;
      local_28 = (ulonglong)(uint)((param_3 + 1) * iVar1) + local_30;
      local_48 = &local_28;
      local_30 = (ulonglong)(uint)((param_3 + 2) * iVar1) + local_30;
      local_40 = &local_30;
      local_38 = param_1;
      uVar5 = FUN_1481d983a(param_2);
      break;
    case 2:
      local_30 = *(longlong *)(param_4 + 0x18);
      iVar1 = *(int *)(param_4 + 0x128);
      local_20 = (ulonglong)(uint)(iVar1 * param_3) + local_30;
      local_70 = &local_20;
      local_28 = (ulonglong)(uint)((param_3 + 1) * iVar1) + local_30;
      local_68 = &local_28;
      local_30 = (ulonglong)(uint)((param_3 + 2) * iVar1) + local_30;
      local_60 = &local_30;
      local_58 = param_1;
      uVar5 = FUN_1481d9920(param_2);
      break;
    case 3:
      uVar5 = 0;
      if (0 < (int)param_2) {
        iVar1 = *(int *)(param_4 + 0x128);
        lVar3 = *(longlong *)(param_4 + 0x18);
        uVar4 = 0;
        do {
          fVar2 = *(float *)((ulonglong)(uint)(param_3 * iVar1) + lVar3 + uVar4 * 4);
          uVar6 = ~(uint)fVar2;
          if (0.0 <= fVar2) {
            uVar6 = (uint)fVar2 | 0x80000000;
          }
          *(uint *)(param_5 + uVar4 * 8) = uVar6;
          *(int *)(param_5 + 4 + uVar4 * 8) = (int)uVar4;
          uVar4 = uVar4 + 1;
          uVar5 = uVar7;
        } while (uVar7 != uVar4);
      }
      break;
    case 4:
      if (0 < (int)param_2) {
        iVar1 = *(int *)(param_4 + 0x128);
        lVar3 = *(longlong *)(param_4 + 0x18);
        uVar4 = 0;
        do {
          fVar2 = *(float *)((ulonglong)(uint)(param_3 * iVar1) + lVar3 + uVar4 * 4);
          uVar6 = ~(uint)fVar2;
          if (0.0 <= fVar2) {
            uVar6 = (uint)fVar2 | 0x80000000;
          }
          *(uint *)(param_5 + uVar4 * 8) = ~uVar6;
          *(int *)(param_5 + 4 + uVar4 * 8) = (int)uVar4;
          uVar4 = uVar4 + 1;
          uVar5 = uVar7;
        } while (uVar7 != uVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1481d93f4 FUN_1481d93f4 body=163 status=ok
// SIG undefined FUN_1481d93f4(void)

uint FUN_1481d93f4(uint param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  
  if ((int)param_1 < 1) {
    param_1 = 0;
  }
  else {
    lVar2 = *param_3;
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar5 * 2);
      uVar3 = (uint)uVar1 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar4 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      fVar4 = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar4);
      uVar3 = ~(uint)fVar4;
      if (0.0 <= fVar4) {
        uVar3 = (uint)fVar4 | 0x80000000;
      }
      *(uint *)(param_2 + uVar5 * 8) = uVar3;
      *(int *)(param_2 + 4 + uVar5 * 8) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (param_1 != uVar5);
  }
  return param_1;
}



// FUNCTION 1481d9498 FUN_1481d9498 body=165 status=ok
// SIG undefined FUN_1481d9498(void)

uint FUN_1481d9498(uint param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  
  if ((int)param_1 < 1) {
    param_1 = 0;
  }
  else {
    lVar2 = *param_3;
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar5 * 2);
      uVar3 = (uint)uVar1 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar4 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      fVar4 = (float)((int)(short)uVar1 & 0x80000000U | (uint)fVar4);
      uVar3 = ~(uint)fVar4;
      if (0.0 <= fVar4) {
        uVar3 = (uint)fVar4 | 0x80000000;
      }
      *(uint *)(param_2 + uVar5 * 8) = ~uVar3;
      *(int *)(param_2 + 4 + uVar5 * 8) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (param_1 != uVar5);
  }
  return param_1;
}



// FUNCTION 1481d953e FUN_1481d953e body=382 status=ok
// SIG undefined FUN_1481d953e(void)

double FUN_1481d953e(undefined8 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  
  lVar8 = (longlong)param_2;
  uVar1 = *(ushort *)(*(longlong *)param_1[2] + lVar8 * 2);
  uVar5 = (uint)uVar1 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar6 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(*(longlong *)param_1[1] + lVar8 * 2);
  uVar5 = (uint)uVar2 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar9 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar9 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar9 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  lVar4 = *(longlong *)param_1[3];
  uVar3 = *(ushort *)(*(longlong *)*param_1 + lVar8 * 2);
  uVar5 = (uint)uVar3 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar7 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar7 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar7 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  return ((double)(float)((uint)fVar6 | (int)(short)uVar1 & 0x80000000U) - *(double *)(lVar4 + 0x58)
         ) * *(double *)(lVar4 + 0x70) +
         ((double)(float)((int)(short)uVar3 & 0x80000000U | (uint)fVar7) - *(double *)(lVar4 + 0x48)
         ) * *(double *)(lVar4 + 0x60) +
         ((double)(float)((uint)fVar9 | (int)(short)uVar2 & 0x80000000U) - *(double *)(lVar4 + 0x50)
         ) * *(double *)(lVar4 + 0x68);
}



// FUNCTION 1481d96bc FUN_1481d96bc body=381 status=ok
// SIG undefined FUN_1481d96bc(void)

double FUN_1481d96bc(undefined8 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar7 = (longlong)param_2;
  uVar1 = *(ushort *)(*(longlong *)param_1[2] + lVar7 * 2);
  uVar4 = (uint)uVar1 << 0xd;
  if ((uVar4 & 0xf800000) == 0xf800000) {
    fVar5 = (float)(uVar4 | 0x70000000);
  }
  else if ((uVar4 & 0xf800000) == 0) {
    fVar5 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar5 = (float)((uVar4 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(*(longlong *)param_1[1] + lVar7 * 2);
  uVar4 = (uint)uVar2 << 0xd;
  if ((uVar4 & 0xf800000) == 0xf800000) {
    fVar8 = (float)(uVar4 | 0x70000000);
  }
  else if ((uVar4 & 0xf800000) == 0) {
    fVar8 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar8 = (float)((uVar4 & 0xfffe000) + 0x38000000);
  }
  uVar3 = *(ushort *)(*(longlong *)*param_1 + lVar7 * 2);
  uVar4 = (uint)uVar3 << 0xd;
  if ((uVar4 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar4 | 0x70000000);
  }
  else if ((uVar4 & 0xf800000) == 0) {
    fVar6 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar4 & 0xfffe000) + 0x38000000);
  }
  lVar7 = *(longlong *)param_1[3];
  dVar9 = (double)(float)((uint)fVar5 | (int)(short)uVar1 & 0x80000000U) - *(double *)(lVar7 + 0x58)
  ;
  dVar10 = (double)(float)((uint)fVar8 | (int)(short)uVar2 & 0x80000000U) -
           *(double *)(lVar7 + 0x50);
  dVar11 = (double)(float)((int)(short)uVar3 & 0x80000000U | (uint)fVar6) -
           *(double *)(lVar7 + 0x48);
  return dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
}



// FUNCTION 1481d983a FUN_1481d983a body=230 status=ok
// SIG undefined FUN_1481d983a(void)

uint FUN_1481d983a(uint param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1 < 1) {
    param_1 = 0;
  }
  else {
    lVar7 = *(longlong *)param_3[3];
    lVar8 = *(longlong *)param_3[2];
    lVar9 = *(longlong *)param_3[1];
    lVar10 = *(longlong *)*param_3;
    dVar1 = *(double *)(lVar7 + 0x58);
    dVar2 = *(double *)(lVar7 + 0x48);
    dVar3 = *(double *)(lVar7 + 0x50);
    dVar4 = *(double *)(lVar7 + 0x60);
    dVar5 = *(double *)(lVar7 + 0x68);
    dVar6 = *(double *)(lVar7 + 0x70);
    uVar11 = 0;
    do {
      *(uint *)(param_2 + uVar11 * 8) =
           ~(uint)(float)(((double)*(float *)(lVar10 + uVar11 * 4) - dVar2) * dVar4 +
                          ((double)*(float *)(lVar9 + uVar11 * 4) - dVar3) * dVar5 +
                         ((double)*(float *)(lVar8 + uVar11 * 4) - dVar1) * dVar6) & 0x7fffffff;
      *(int *)(param_2 + 4 + uVar11 * 8) = (int)uVar11;
      uVar11 = uVar11 + 1;
    } while (param_1 != uVar11);
  }
  return param_1;
}



// FUNCTION 1481d9920 FUN_1481d9920 body=164 status=ok
// SIG undefined FUN_1481d9920(void)

uint FUN_1481d9920(uint param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  
  if ((int)param_1 < 1) {
    param_1 = 0;
  }
  else {
    lVar4 = *(longlong *)param_3[2];
    lVar5 = *(longlong *)param_3[1];
    lVar6 = *(longlong *)*param_3;
    lVar7 = *(longlong *)param_3[3];
    dVar1 = *(double *)(lVar7 + 0x58);
    dVar2 = *(double *)(lVar7 + 0x48);
    dVar3 = *(double *)(lVar7 + 0x50);
    uVar9 = 0;
    do {
      dVar8 = (double)*(float *)(lVar4 + uVar9 * 4) - dVar1;
      dVar10 = (double)*(float *)(lVar5 + uVar9 * 4) - dVar3;
      dVar11 = (double)*(float *)(lVar6 + uVar9 * 4) - dVar2;
      *(uint *)(param_2 + uVar9 * 8) =
           ~(uint)(float)(dVar8 * dVar8 + dVar11 * dVar11 + dVar10 * dVar10) & 0x7fffffff;
      *(int *)(param_2 + 4 + uVar9 * 8) = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while (param_1 != uVar9);
  }
  return param_1;
}



// FUNCTION 1481d99c4 FUN_1481d99c4 body=465 status=ok
// SIG undefined FUN_1481d99c4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1481d99c4(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int aiStack_7028 [2038];
  undefined *puStack_5050;
  undefined1 auStack_5048 [32];
  int local_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int aiStack_2028 [2048];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_5048;
  puStack_5050 = (undefined *)0x1481d9a06;
  memset(local_5028,0,0x5000);
  uVar4 = (ulonglong)param_3;
  if (0 < (int)param_3) {
    uVar7 = 0;
    do {
      uVar10 = *(uint *)(param_2 + uVar7 * 8);
      local_5028[uVar10 & 0x3ff] = local_5028[uVar10 & 0x3ff] + 1;
      piVar1 = (int *)((longlong)aiStack_4028 + (ulonglong)(uVar10 >> 8 & 0x1ffc));
      *piVar1 = *piVar1 + 1;
      aiStack_2028[uVar10 >> 0x15] = aiStack_2028[uVar10 >> 0x15] + 1;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  lVar11 = 0;
  iVar5 = 0;
  iVar14 = 0;
  iVar8 = 0;
  do {
    iVar2 = local_5028[lVar11];
    local_5028[lVar11] = iVar14 + -1;
    iVar6 = aiStack_4028[lVar11] + iVar5;
    aiStack_4028[lVar11] = iVar5 + -1;
    iVar9 = aiStack_2028[lVar11] + iVar8;
    aiStack_2028[lVar11] = iVar8 + -1;
    lVar11 = lVar11 + 1;
    iVar5 = iVar6;
    iVar14 = iVar2 + iVar14;
    iVar8 = iVar9;
  } while (lVar11 != 0x400);
  lVar11 = 0x1000;
  do {
    iVar5 = aiStack_7028[lVar11];
    aiStack_7028[lVar11] = iVar6 + -1;
    iVar14 = local_5028[lVar11];
    local_5028[lVar11] = iVar9 + -1;
    lVar11 = lVar11 + 1;
    iVar6 = iVar5 + iVar6;
    iVar9 = iVar14 + iVar9;
  } while (lVar11 != 0x1400);
  if (0 < (int)param_3) {
    uVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_2 + uVar7 * 8);
      uVar10 = (uint)uVar3 & 0x3ff;
      iVar5 = local_5028[uVar10];
      local_5028[uVar10] = iVar5 + 1;
      *(undefined8 *)(param_1 + 8 + (longlong)iVar5 * 8) = uVar3;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
    uVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + uVar7 * 8);
      uVar12 = (ulonglong)((uint)((ulonglong)uVar3 >> 8) & 0x1ffc);
      iVar5 = *(int *)((longlong)aiStack_4028 + uVar12);
      *(int *)((longlong)aiStack_4028 + uVar12) = iVar5 + 1;
      *(undefined8 *)(param_2 + 8 + (longlong)iVar5 * 8) = uVar3;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
    uVar7 = 0;
    do {
      uVar12 = *(ulonglong *)(param_2 + uVar7 * 8);
      uVar13 = uVar12 >> 0x15 & 0x7ff;
      iVar5 = aiStack_2028[uVar13];
      aiStack_2028[uVar13] = iVar5 + 1;
      *(ulonglong *)(param_1 + 8 + (longlong)iVar5 * 8) = uVar12;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_5048) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_5050 = &UNK_1481d9b95;
  FUN_144d8e3a0();
}



// FUNCTION 1481d9b96 FUN_1481d9b96 body=108 status=ok
// SIG undefined FUN_1481d9b96(void)

void FUN_1481d9b96(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar4;
    FUN_145cc9052(param_1,param_2,iVar4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481d9c04 FUN_1481d9c04 body=143 status=ok
// SIG undefined FUN_1481d9c04(void)

void FUN_1481d9c04(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481d9c94 FUN_1481d9c94 body=124 status=ok
// SIG undefined FUN_1481d9c94(void)

void FUN_1481d9c94(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x68;
  *(undefined4 *)(lVar1 + 0x58 + lVar3) = 0;
  if (*(longlong *)(lVar1 + 0x50 + lVar3) != 0) {
    FUN_1400020a8();
  }
  FUN_1458daa20(lVar1 + lVar3 + 0x10);
  iVar2 = (int)param_1[1];
  iVar5 = ~param_2 + iVar2;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x68),
            (longlong)iVar4 * 0x68);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1481d9d10 FUN_1481d9d10 body=351 status=ok
// SIG undefined FUN_1481d9d10(void)

undefined4 * FUN_1481d9d10(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1481d9e70(param_1,local_48);
  lVar7 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1406fa146(local_40 + 1,lVar7);
  local_40[6] = *(undefined8 *)(lVar7 + 0x28);
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1481d9f56(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x3c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
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
      FUN_1481da07c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d9e70 FUN_1481d9e70 body=229 status=ok
// SIG undefined FUN_1481d9e70(void)

int * FUN_1481d9e70(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1481d9f56 FUN_1481d9f56 body=179 status=ok
// SIG undefined FUN_1481d9f56(void)

undefined8 FUN_1481d9f56(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          if (*(longlong *)(puVar1 + 8) != 0) {
            FUN_1400020a8();
          }
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_1481da00a(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481da00a FUN_1481da00a body=114 status=ok
// SIG undefined FUN_1481da00a(void)

void FUN_1481da00a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1481da07c FUN_1481da07c body=476 status=ok
// SIG undefined FUN_1481da07c(void)

void FUN_1481da07c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 1481da25a FUN_1481da25a body=133 status=ok
// SIG undefined FUN_1481da25a(void)

void FUN_1481da25a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x94) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 7,0);
      iVar3 = (int)(uVar4 >> 7);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x94) = iVar6;
    FUN_140649b68(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481da2e0 FUN_1481da2e0 body=52 status=ok
// SIG undefined FUN_1481da2e0(void)

undefined8 * FUN_1481da2e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae0eb58;
  FUN_1449db362(param_1 + 10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481da322 FUN_1481da322 body=273 status=ok
// SIG undefined FUN_1481da322(void)

void FUN_1481da322(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae0ec40;
  FUN_144725486(param_1 + 1);
  if (param_1[0x41] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x41] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[1] = &PTR_FUN_14a1ca4e0;
  if (param_1[0x25] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x25] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x24] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x24] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x23] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x23] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1 + 1);
  return;
}



// FUNCTION 1481da434 FUN_1481da434 body=38 status=ok
// SIG undefined FUN_1481da434(void)

undefined8 FUN_1481da434(undefined8 param_1,int param_2)

{
  FUN_1481da322();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481da45a FUN_1481da45a body=48 status=ok
// SIG undefined FUN_1481da45a(void)

undefined8 * FUN_1481da45a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae0ec50;
  FUN_1447259a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481da48a FUN_1481da48a body=74 status=ok
// SIG undefined FUN_1481da48a(void)

void FUN_1481da48a(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  FUN_1481da4d4(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1481da4d4 FUN_1481da4d4 body=132 status=ok
// SIG undefined FUN_1481da4d4(void)

void FUN_1481da4d4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1481da558 FUN_1481da558 body=110 status=ok
// SIG undefined FUN_1481da558(void)

void FUN_1481da558(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1481da4d4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481da5c8 FUN_1481da5c8 body=132 status=ok
// SIG undefined FUN_1481da5c8(void)

void FUN_1481da5c8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481da64e FUN_1481da64e body=38 status=ok
// SIG undefined FUN_1481da64e(void)

undefined8 FUN_1481da64e(undefined8 param_1,int param_2)

{
  FUN_14003f35c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481da674 FUN_1481da674 body=83 status=ok
// SIG undefined FUN_1481da674(void)

undefined8 * FUN_1481da674(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae0ed68;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 1481da6c8 FUN_1481da6c8 body=31 status=ok
// SIG undefined FUN_1481da6c8(void)

undefined8 FUN_1481da6c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481da704 FUN_1481da704 body=93 status=ok
// SIG undefined FUN_1481da704(void)

void FUN_1481da704(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffd30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0edb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481da762 FUN_1481da762 body=93 status=ok
// SIG undefined FUN_1481da762(void)

void FUN_1481da762(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffd30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae0edb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481da7c0 FUN_1481da7c0 body=126 status=ok
// SIG undefined FUN_1481da7c0(void)

void FUN_1481da7c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14adffd30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae0edb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481da82f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481da84c FUN_1481da84c body=113 status=ok
// SIG undefined FUN_1481da84c(void)

void FUN_1481da84c(longlong param_1,int param_2)

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



// FUNCTION 1481da8be FUN_1481da8be body=96 status=ok
// SIG undefined FUN_1481da8be(void)

void FUN_1481da8be(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1481da91e FUN_1481da91e body=38 status=ok
// SIG undefined FUN_1481da91e(void)

undefined8 FUN_1481da91e(undefined8 param_1,int param_2)

{
  FUN_1481da944();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481da944 FUN_1481da944 body=105 status=ok
// SIG undefined FUN_1481da944(void)

void FUN_1481da944(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae0ee40;
  if (param_1[0x27] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x27] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x26] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x26] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 1481da9ad FUN_1481da9ad body=717 status=ok
// SIG undefined FUN_1481da9ad(void)

void FUN_1481da9ad(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar11 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar15 = iVar11;
joined_r0x0001481da9e8:
    do {
      iVar14 = iVar11 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar13 = iVar11 * 2 + 2;
        if (iVar13 < (int)param_2) {
          lVar16 = (longlong)iVar13;
          if ((*(int *)(param_1 + lVar16 * 4) < *(int *)(param_1 + (longlong)iVar14 * 4)) ||
             ((*(int *)(param_1 + lVar16 * 4) == *(int *)(param_1 + (longlong)iVar14 * 4) &&
              (*(int *)((longlong)param_1 + lVar16 * 0x20 + 4) <
               *(int *)((longlong)param_1 + (longlong)iVar14 * 0x20 + 4))))) goto LAB_1481daa33;
        }
        else {
LAB_1481daa33:
          lVar16 = (longlong)iVar14;
          iVar13 = iVar14;
        }
        puVar2 = param_1 + (longlong)iVar11 * 4;
        puVar3 = param_1 + lVar16 * 4;
        if ((*(int *)(param_1 + (longlong)iVar11 * 4) < *(int *)(param_1 + lVar16 * 4)) ||
           ((*(int *)(param_1 + (longlong)iVar11 * 4) == *(int *)(param_1 + lVar16 * 4) &&
            (*(int *)((longlong)puVar2 + 4) < *(int *)((longlong)puVar3 + 4))))) {
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_48._0_4_ = (undefined4)uVar6;
          local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar7;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_48._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_40._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar3 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_50._4_4_;
          iVar11 = iVar13;
          local_58 = uVar4;
          uStack_50 = uVar5;
          local_48 = uVar6;
          uStack_40 = uVar7;
          goto joined_r0x0001481da9e8;
        }
      }
      bVar17 = iVar15 != 0;
      iVar11 = iVar15 + -1;
      iVar15 = iVar11;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar12 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[uVar12 * 4];
      uVar9 = (param_1 + uVar12 * 4)[1];
      uVar10 = (param_1 + uVar12 * 4 + 2)[1];
      param_1[2] = param_1[uVar12 * 4 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar12 * 4 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
      puVar2 = param_1 + uVar12 * 4;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
      local_58 = uVar4;
      uStack_50 = uVar5;
      local_48 = uVar6;
      uStack_40 = uVar7;
      if (param_2 != 2) {
        do {
          iVar15 = 0;
          iVar11 = 1;
          iVar14 = 0;
          do {
            iVar13 = iVar15 + 2;
            lVar16 = (longlong)iVar13;
            if (lVar16 < (longlong)uVar12) {
              if ((*(int *)(param_1 + lVar16 * 4) < *(int *)(param_1 + (longlong)iVar11 * 4)) ||
                 ((*(int *)(param_1 + lVar16 * 4) == *(int *)(param_1 + (longlong)iVar11 * 4) &&
                  (*(int *)((longlong)param_1 + lVar16 * 0x20 + 4) <
                   *(int *)((longlong)param_1 + (longlong)iVar11 * 0x20 + 4))))) goto LAB_1481dab6d;
            }
            else {
LAB_1481dab6d:
              lVar16 = (longlong)iVar11;
              iVar13 = iVar11;
            }
            puVar2 = param_1 + (longlong)iVar14 * 4;
            puVar3 = param_1 + lVar16 * 4;
            if ((*(int *)(param_1 + lVar16 * 4) <= *(int *)(param_1 + (longlong)iVar14 * 4)) &&
               ((*(int *)(param_1 + (longlong)iVar14 * 4) != *(int *)(param_1 + lVar16 * 4) ||
                (*(int *)((longlong)puVar3 + 4) <= *(int *)((longlong)puVar2 + 4))))) break;
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar10 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar10;
            *puVar2 = uVar8;
            puVar2[1] = uVar9;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
            *puVar3 = uVar4;
            puVar3[1] = uVar5;
            iVar15 = iVar13 * 2;
            iVar11 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar11 < (longlong)uVar12);
          uVar1 = uVar12 - 1;
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          uVar8 = param_1[uVar1 * 4];
          uVar9 = (param_1 + uVar1 * 4)[1];
          uVar10 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_48._0_4_ = (undefined4)uVar6;
          local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar7;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
          puVar2 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar2 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
          bVar17 = 2 < uVar12;
          uVar12 = uVar1;
          local_58 = uVar4;
          uStack_50 = uVar5;
          local_48 = uVar6;
          uStack_40 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481dac7c FUN_1481dac7c body=880 status=ok
// SIG undefined FUN_1481dac7c(void)

void FUN_1481dac7c(undefined8 param_1,uint *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar6 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_100 = param_1;
  if (*param_2 == 0) {
    iVar7 = *(int *)(param_4 + 0xa0);
    uVar6 = 0;
  }
  else {
    do {
      uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)(int)uVar6 * 4);
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,uVar1);
      plVar4 = (longlong *)FUN_1481db6d2(&local_98,uVar1,&local_e8);
      lVar9 = plVar4[1];
      uVar3 = (int)lVar9 + 1;
      *(uint *)(plVar4 + 1) = uVar3;
      if (*(uint *)((longlong)plVar4 + 0xc) < uVar3) {
        FUN_141838130(plVar4);
      }
      *(uint *)(*plVar4 + (longlong)(int)lVar9 * 4) = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_2);
    uVar6 = (int)uStack_90 - local_64;
    iVar7 = *(int *)(param_4 + 0xa0);
    *(uint *)(param_4 + 0xa0) = iVar7 + uVar6;
    if ((uint)(*(int *)(param_4 + 0xa4) - iVar7) < uVar6) {
      FUN_1418382ec(param_4 + 0x40);
    }
  }
  lVar9 = param_4 + 0x40;
  if (*(longlong *)(param_4 + 0x98) != 0) {
    lVar9 = *(longlong *)(param_4 + 0x98);
  }
  memset((void *)((longlong)iVar7 * 0x58 + lVar9),0,(longlong)(int)uVar6 * 0x58);
  uVar3 = *param_2;
  iVar7 = uVar6 + *(int *)(param_4 + 0x18) + uVar3;
  if (-1 < iVar7) {
    if (*(int *)(param_4 + 0x1c) < iVar7) {
      FUN_14480809c(param_4 + 0x10,iVar7);
      uVar3 = *param_2;
    }
    iVar5 = uVar3 + uVar6;
    iVar7 = *(int *)(param_4 + 0x28) + iVar5;
    if (-1 < iVar7) {
      if (*(int *)(param_4 + 0x2c) < iVar7) {
        FUN_14499148c(param_4 + 0x20,iVar7);
        iVar5 = *param_2 + uVar6;
      }
      iVar7 = *(int *)(param_4 + 0x38) + iVar5;
      if (-1 < iVar7) {
        if (*(int *)(param_4 + 0x3c) < iVar7) {
          FUN_14480809c(param_4 + 0x30,iVar7);
          iVar5 = uVar6 + *param_2;
        }
        iVar5 = iVar5 + *(int *)(param_4 + 8);
        if (-1 < iVar5) {
          if (*(int *)(param_4 + 0xc) < iVar5) {
            FUN_14480809c(param_4);
          }
          local_b8 = &local_b9;
          local_e8 = &local_b8;
          FUN_1481dbc26(&local_98);
          FUN_1481dba7e(&local_98);
          local_b8 = (undefined1 *)0x100000000;
          local_a8 = 0xffffffff;
          iStack_a4 = 0;
          uStack_a0 = 0;
          iVar7 = 0;
          uStack_b0 = local_88;
          if (local_70 != 0) {
            FUN_1449c0562(&local_b8);
            iVar7 = local_70;
          }
          uVar2 = local_100;
          uStack_c8 = CONCAT44(uStack_9c,uStack_a0);
          local_d0 = local_a8;
          iStack_cc = iStack_a4;
          local_e0 = (undefined4)local_b8;
          uStack_dc = local_b8._4_4_;
          uStack_d8 = (undefined4)uStack_b0;
          uStack_d4 = uStack_b0._4_4_;
          local_e8 = &local_98;
          if ((iStack_a4 != iVar7) || (uStack_b0 != local_88)) {
            iVar5 = 0;
            do {
              lVar9 = *local_e8 + (longlong)iStack_cc * 0x20;
              puVar8 = (undefined8 *)(lVar9 + 8);
              FUN_144b37034(param_2,puVar8);
              local_f8 = *puVar8;
              local_f0 = *(undefined4 *)(lVar9 + 0x10);
              local_108 = param_4;
              FUN_141835d1c(uVar2,param_2,&local_f8,iVar5);
              iVar5 = iVar5 + 1;
              local_d0 = local_d0 & ~uStack_dc;
              FUN_1449c0562(&local_e0);
            } while (local_e8 != &local_98 ||
                     ((undefined1 *)CONCAT44(uStack_d4,uStack_d8) != local_88 || iStack_cc != iVar7)
                    );
          }
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1481dc300(&local_98);
          if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1481dafee FUN_1481dafee body=880 status=ok
// SIG undefined FUN_1481dafee(void)

void FUN_1481dafee(undefined8 param_1,uint *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar6 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_100 = param_1;
  if (*param_2 == 0) {
    iVar7 = *(int *)(param_4 + 0xa0);
    uVar6 = 0;
  }
  else {
    do {
      uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)(int)uVar6 * 4);
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,uVar1);
      plVar4 = (longlong *)FUN_1481db6d2(&local_98,uVar1,&local_e8);
      lVar9 = plVar4[1];
      uVar3 = (int)lVar9 + 1;
      *(uint *)(plVar4 + 1) = uVar3;
      if (*(uint *)((longlong)plVar4 + 0xc) < uVar3) {
        FUN_141838130(plVar4);
      }
      *(uint *)(*plVar4 + (longlong)(int)lVar9 * 4) = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_2);
    uVar6 = (int)uStack_90 - local_64;
    iVar7 = *(int *)(param_4 + 0xa0);
    *(uint *)(param_4 + 0xa0) = iVar7 + uVar6;
    if ((uint)(*(int *)(param_4 + 0xa4) - iVar7) < uVar6) {
      FUN_1418382ec(param_4 + 0x40);
    }
  }
  lVar9 = param_4 + 0x40;
  if (*(longlong *)(param_4 + 0x98) != 0) {
    lVar9 = *(longlong *)(param_4 + 0x98);
  }
  memset((void *)((longlong)iVar7 * 0x58 + lVar9),0,(longlong)(int)uVar6 * 0x58);
  uVar3 = *param_2;
  iVar7 = uVar6 + *(int *)(param_4 + 0x18) + uVar3;
  if (-1 < iVar7) {
    if (*(int *)(param_4 + 0x1c) < iVar7) {
      FUN_14480809c(param_4 + 0x10,iVar7);
      uVar3 = *param_2;
    }
    iVar5 = uVar3 + uVar6;
    iVar7 = *(int *)(param_4 + 0x28) + iVar5;
    if (-1 < iVar7) {
      if (*(int *)(param_4 + 0x2c) < iVar7) {
        FUN_14499148c(param_4 + 0x20,iVar7);
        iVar5 = *param_2 + uVar6;
      }
      iVar7 = *(int *)(param_4 + 0x38) + iVar5;
      if (-1 < iVar7) {
        if (*(int *)(param_4 + 0x3c) < iVar7) {
          FUN_14480809c(param_4 + 0x30,iVar7);
          iVar5 = uVar6 + *param_2;
        }
        iVar5 = iVar5 + *(int *)(param_4 + 8);
        if (-1 < iVar5) {
          if (*(int *)(param_4 + 0xc) < iVar5) {
            FUN_14480809c(param_4);
          }
          local_b8 = &local_b9;
          local_e8 = &local_b8;
          FUN_1481dbc26(&local_98);
          FUN_1481dba7e(&local_98);
          local_b8 = (undefined1 *)0x100000000;
          local_a8 = 0xffffffff;
          iStack_a4 = 0;
          uStack_a0 = 0;
          iVar7 = 0;
          uStack_b0 = local_88;
          if (local_70 != 0) {
            FUN_1449c0562(&local_b8);
            iVar7 = local_70;
          }
          uVar2 = local_100;
          uStack_c8 = CONCAT44(uStack_9c,uStack_a0);
          local_d0 = local_a8;
          iStack_cc = iStack_a4;
          local_e0 = (undefined4)local_b8;
          uStack_dc = local_b8._4_4_;
          uStack_d8 = (undefined4)uStack_b0;
          uStack_d4 = uStack_b0._4_4_;
          local_e8 = &local_98;
          if ((iStack_a4 != iVar7) || (uStack_b0 != local_88)) {
            iVar5 = 0;
            do {
              lVar9 = *local_e8 + (longlong)iStack_cc * 0x20;
              puVar8 = (undefined8 *)(lVar9 + 8);
              FUN_144b37034(param_2,puVar8);
              local_f8 = *puVar8;
              local_f0 = *(undefined4 *)(lVar9 + 0x10);
              local_108 = param_4;
              FUN_1449d414a(uVar2,param_2,&local_f8,iVar5);
              iVar5 = iVar5 + 1;
              local_d0 = local_d0 & ~uStack_dc;
              FUN_1449c0562(&local_e0);
            } while (local_e8 != &local_98 ||
                     ((undefined1 *)CONCAT44(uStack_d4,uStack_d8) != local_88 || iStack_cc != iVar7)
                    );
          }
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1481dc300(&local_98);
          if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1481db360 FUN_1481db360 body=880 status=ok
// SIG undefined FUN_1481db360(void)

void FUN_1481db360(undefined8 param_1,uint *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar6 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_100 = param_1;
  if (*param_2 == 0) {
    iVar7 = *(int *)(param_4 + 0xa0);
    uVar6 = 0;
  }
  else {
    do {
      uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)(int)uVar6 * 4);
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,uVar1);
      plVar4 = (longlong *)FUN_1481db6d2(&local_98,uVar1,&local_e8);
      lVar9 = plVar4[1];
      uVar3 = (int)lVar9 + 1;
      *(uint *)(plVar4 + 1) = uVar3;
      if (*(uint *)((longlong)plVar4 + 0xc) < uVar3) {
        FUN_141838130(plVar4);
      }
      *(uint *)(*plVar4 + (longlong)(int)lVar9 * 4) = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_2);
    uVar6 = (int)uStack_90 - local_64;
    iVar7 = *(int *)(param_4 + 0xa0);
    *(uint *)(param_4 + 0xa0) = iVar7 + uVar6;
    if ((uint)(*(int *)(param_4 + 0xa4) - iVar7) < uVar6) {
      FUN_1418382ec(param_4 + 0x40);
    }
  }
  lVar9 = param_4 + 0x40;
  if (*(longlong *)(param_4 + 0x98) != 0) {
    lVar9 = *(longlong *)(param_4 + 0x98);
  }
  memset((void *)((longlong)iVar7 * 0x58 + lVar9),0,(longlong)(int)uVar6 * 0x58);
  uVar3 = *param_2;
  iVar7 = uVar6 + *(int *)(param_4 + 0x18) + uVar3;
  if (-1 < iVar7) {
    if (*(int *)(param_4 + 0x1c) < iVar7) {
      FUN_14480809c(param_4 + 0x10,iVar7);
      uVar3 = *param_2;
    }
    iVar5 = uVar3 + uVar6;
    iVar7 = *(int *)(param_4 + 0x28) + iVar5;
    if (-1 < iVar7) {
      if (*(int *)(param_4 + 0x2c) < iVar7) {
        FUN_14499148c(param_4 + 0x20,iVar7);
        iVar5 = *param_2 + uVar6;
      }
      iVar7 = *(int *)(param_4 + 0x38) + iVar5;
      if (-1 < iVar7) {
        if (*(int *)(param_4 + 0x3c) < iVar7) {
          FUN_14480809c(param_4 + 0x30,iVar7);
          iVar5 = uVar6 + *param_2;
        }
        iVar5 = iVar5 + *(int *)(param_4 + 8);
        if (-1 < iVar5) {
          if (*(int *)(param_4 + 0xc) < iVar5) {
            FUN_14480809c(param_4);
          }
          local_b8 = &local_b9;
          local_e8 = &local_b8;
          FUN_1481dbc26(&local_98);
          FUN_1481dba7e(&local_98);
          local_b8 = (undefined1 *)0x100000000;
          local_a8 = 0xffffffff;
          iStack_a4 = 0;
          uStack_a0 = 0;
          iVar7 = 0;
          uStack_b0 = local_88;
          if (local_70 != 0) {
            FUN_1449c0562(&local_b8);
            iVar7 = local_70;
          }
          uVar2 = local_100;
          uStack_c8 = CONCAT44(uStack_9c,uStack_a0);
          local_d0 = local_a8;
          iStack_cc = iStack_a4;
          local_e0 = (undefined4)local_b8;
          uStack_dc = local_b8._4_4_;
          uStack_d8 = (undefined4)uStack_b0;
          uStack_d4 = uStack_b0._4_4_;
          local_e8 = &local_98;
          if ((iStack_a4 != iVar7) || (uStack_b0 != local_88)) {
            iVar5 = 0;
            do {
              lVar9 = *local_e8 + (longlong)iStack_cc * 0x20;
              puVar8 = (undefined8 *)(lVar9 + 8);
              FUN_144b37034(param_2,puVar8);
              local_f8 = *puVar8;
              local_f0 = *(undefined4 *)(lVar9 + 0x10);
              local_108 = param_4;
              FUN_1418370b6(uVar2,param_2,&local_f8,iVar5);
              iVar5 = iVar5 + 1;
              local_d0 = local_d0 & ~uStack_dc;
              FUN_1449c0562(&local_e0);
            } while (local_e8 != &local_98 ||
                     ((undefined1 *)CONCAT44(uStack_d4,uStack_d8) != local_88 || iStack_cc != iVar7)
                    );
          }
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1481dc300(&local_98);
          if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1481db6d2 FUN_1481db6d2 body=181 status=ok
// SIG undefined FUN_1481db6d2(void)

longlong FUN_1481db6d2(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1481db76a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1481db788(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1481db76a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1481db788 FUN_1481db788 body=275 status=ok
// SIG undefined FUN_1481db788(void)

undefined4 * FUN_1481db788(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481db89c(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_1481db982(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_1481dba7e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481db89c FUN_1481db89c body=229 status=ok
// SIG undefined FUN_1481db89c(void)

int * FUN_1481db89c(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1481db982 FUN_1481db982 body=137 status=ok
// SIG undefined FUN_1481db982(void)

undefined8 FUN_1481db982(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1481dba0c(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481dba0c FUN_1481dba0c body=114 status=ok
// SIG undefined FUN_1481dba0c(void)

void FUN_1481dba0c(longlong *param_1,int param_2)

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



// FUNCTION 1481dba7e FUN_1481dba7e body=422 status=ok
// SIG undefined FUN_1481dba7e(void)

void FUN_1481dba7e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1481dbc26 FUN_1481dbc26 body=46 status=ok
// SIG undefined FUN_1481dbc26(void)

void FUN_1481dbc26(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_1481dbc54();
  FUN_1481dbdb1(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 1481dbc54 FUN_1481dbc54 body=349 status=ok
// SIG undefined FUN_1481dbc54(void)

void FUN_1481dbc54(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar10 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar12 = (int)param_1[6];
      uVar14 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar12 * 0x20);
        if (iVar12 < iVar11) {
          puVar17 = (undefined8 *)((longlong)iVar12 * 0x20 + lVar5);
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          puVar9 = (undefined8 *)((longlong)(int)(uVar14 - 1) * 0x20 + lVar5 + 0x20);
          uVar13 = uVar14;
          do {
            puVar15 = puVar9;
            uVar14 = uVar13 - 1;
            uVar16 = uVar13 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar9 = puVar15 + -4;
            uVar13 = uVar14;
          } while ((*(uint *)((longlong)plVar18 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar6 = puVar15[-4];
          uVar7 = puVar15[-3];
          uVar8 = puVar15[-1];
          puVar17[2] = puVar15[-2];
          puVar17[3] = uVar8;
          *puVar17 = uVar6;
          puVar17[1] = uVar7;
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          iVar19 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar19 = iVar12;
          }
          puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar19 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
        }
        iVar12 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1] - uVar3;
      if (iVar12 != 0) {
        _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x20 + (longlong)_Dst),(longlong)iVar12 << 5);
        iVar10 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar10;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1446f4a44(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1481dbdb1 FUN_1481dbdb1 body=777 status=ok
// SIG undefined FUN_1481dbdb1(void)

void FUN_1481dbdb1(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  longlong *plVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_368 = param_1;
    fVar25 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar25 + fVar25);
    plVar17 = &local_368;
    do {
      puVar10 = (uint *)*plVar17;
      puVar18 = (uint *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar12 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 5);
      puVar15 = puVar18;
      puVar22 = puVar10;
      if (iVar20 != 0) {
LAB_1481dbe75:
        if (8 < (int)(iVar12 + 1U)) {
          uVar13 = (ulonglong)(iVar12 + 1U >> 1);
          uVar2 = *(undefined8 *)(puVar10 + uVar13 * 8);
          uVar3 = *(undefined8 *)(puVar10 + uVar13 * 8 + 2);
          uVar4 = *(undefined8 *)(puVar10 + uVar13 * 8 + 4);
          uVar5 = *(undefined8 *)(puVar10 + uVar13 * 8 + 4 + 2);
          uVar6 = *(undefined8 *)puVar10;
          uVar7 = *(undefined8 *)(puVar10 + 2);
          uVar8 = *(undefined8 *)(puVar10 + 6);
          *(undefined8 *)(puVar10 + uVar13 * 8 + 4) = *(undefined8 *)(puVar10 + 4);
          *(undefined8 *)(puVar10 + uVar13 * 8 + 4 + 2) = uVar8;
          *(undefined8 *)(puVar10 + uVar13 * 8) = uVar6;
          *(undefined8 *)(puVar10 + uVar13 * 8 + 2) = uVar7;
          *(undefined8 *)(puVar10 + 4) = uVar4;
          *(undefined8 *)(puVar10 + 6) = uVar5;
          *(undefined8 *)puVar10 = uVar2;
          *(undefined8 *)(puVar10 + 2) = uVar3;
          puVar14 = puVar18 + 8;
          puVar11 = puVar10;
          do {
            puVar9 = puVar11 + 8;
            puVar19 = puVar11 + 8;
            do {
              puVar11 = puVar19;
              puVar16 = puVar9;
              if (puVar18 < puVar11) break;
              puVar9 = puVar16 + 8;
              puVar19 = puVar11 + 8;
            } while (*puVar11 <= *puVar10);
            puVar9 = puVar14 + -0x10;
            do {
              puVar19 = puVar14;
              puVar23 = puVar9;
              puVar14 = puVar19 + -8;
              if (puVar14 <= puVar10) break;
              puVar9 = puVar23 + -8;
            } while (*puVar10 <= *puVar14);
            if (puVar14 < puVar11) goto LAB_1481dbf58;
            uVar2 = *(undefined8 *)puVar11;
            uVar3 = *(undefined8 *)(puVar11 + 2);
            uVar4 = *(undefined8 *)(puVar11 + 4);
            uVar5 = *(undefined8 *)(puVar11 + 6);
            uVar6 = *(undefined8 *)puVar14;
            uVar7 = *(undefined8 *)(puVar19 + -6);
            uVar8 = *(undefined8 *)(puVar19 + -2);
            *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar19 + -4);
            *(undefined8 *)(puVar11 + 6) = uVar8;
            *(undefined8 *)puVar11 = uVar6;
            *(undefined8 *)(puVar11 + 2) = uVar7;
            *(undefined8 *)(puVar19 + -4) = uVar4;
            *(undefined8 *)(puVar19 + -2) = uVar5;
            *(undefined8 *)puVar14 = uVar2;
            *(undefined8 *)(puVar19 + -6) = uVar3;
          } while( true );
        }
        if (puVar10 < puVar18) {
          do {
            puVar15 = puVar10;
            if (puVar10 + 8 <= puVar18) {
              uVar21 = *puVar10;
              puVar22 = puVar10 + 8;
              do {
                uVar1 = *puVar22;
                bVar24 = uVar21 < uVar1;
                if (uVar21 <= uVar1) {
                  uVar21 = uVar1;
                }
                if (bVar24) {
                  puVar15 = puVar22;
                }
                puVar22 = puVar22 + 8;
              } while (puVar22 <= puVar18);
            }
            local_68 = *(undefined8 *)puVar15;
            uStack_60 = *(undefined8 *)(puVar15 + 2);
            local_58 = *(undefined8 *)(puVar15 + 4);
            uStack_50 = *(undefined8 *)(puVar15 + 6);
            uVar5 = local_68;
            uVar6 = uStack_60;
            uVar2 = *(undefined8 *)puVar18;
            uVar3 = *(undefined8 *)(puVar18 + 2);
            uVar4 = *(undefined8 *)(puVar18 + 6);
            *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar18 + 4);
            *(undefined8 *)(puVar15 + 6) = uVar4;
            *(undefined8 *)puVar15 = uVar2;
            *(undefined8 *)(puVar15 + 2) = uVar3;
            local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
            *(undefined8 *)(puVar18 + 4) = local_58;
            *(undefined8 *)(puVar18 + 6) = uStack_50;
            *puVar18 = (uint)local_68;
            puVar18[1] = local_68._4_4_;
            puVar18[2] = (uint)uStack_60;
            puVar18[3] = uStack_60._4_4_;
            puVar18 = puVar18 + -8;
            local_68 = uVar5;
            uStack_60 = uVar6;
          } while (puVar10 < puVar18);
        }
        goto LAB_1481dc099;
      }
LAB_1481dc0ae:
      FUN_1481dc0bb(puVar10);
LAB_1481dc099:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1481dbf58:
  local_68 = *(undefined8 *)puVar10;
  uStack_60 = *(undefined8 *)(puVar10 + 2);
  local_58 = *(undefined8 *)(puVar10 + 4);
  uStack_50 = *(undefined8 *)(puVar10 + 6);
  uVar5 = local_68;
  uVar6 = uStack_60;
  uVar2 = *(undefined8 *)puVar14;
  uVar3 = *(undefined8 *)(puVar19 + -6);
  uVar4 = *(undefined8 *)(puVar19 + -2);
  *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar19 + -4);
  *(undefined8 *)(puVar10 + 6) = uVar4;
  *(undefined8 *)puVar10 = uVar2;
  *(undefined8 *)(puVar10 + 2) = uVar3;
  local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
  *(undefined8 *)(puVar19 + -4) = local_58;
  *(undefined8 *)(puVar19 + -2) = uStack_50;
  *puVar14 = (uint)local_68;
  puVar19[-7] = local_68._4_4_;
  puVar19[-6] = (uint)uStack_60;
  puVar19[-5] = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -0x10;
  local_68 = uVar5;
  uStack_60 = uVar6;
  if ((longlong)puVar23 - (longlong)puVar22 < (longlong)puVar15 - (longlong)puVar16) {
    if (puVar11 < puVar18) {
      *plVar17 = (longlong)puVar11;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar16 = puVar10;
    if (puVar14 <= puVar10 + 8) goto LAB_1481dc099;
  }
  else {
    if (puVar10 + 8 < puVar14) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar10 = puVar11;
    puVar19 = puVar18;
    puVar23 = puVar18;
    if (puVar18 <= puVar11) goto LAB_1481dc099;
  }
  iVar12 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar16) >> 5);
  puVar18 = puVar19;
  puVar15 = puVar23;
  puVar22 = puVar16;
  if (iVar20 == 0) goto LAB_1481dc0ae;
  goto LAB_1481dbe75;
}



// FUNCTION 1481dc0bb FUN_1481dc0bb body=580 status=ok
// SIG undefined FUN_1481dc0bb(void)

void FUN_1481dc0bb(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x0001481dc0ef:
    do {
      iVar12 = iVar9 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           (*(uint *)(param_1 + (longlong)iVar12 * 4) <= *(uint *)(param_1 + (longlong)iVar13 * 4)))
        {
          iVar12 = iVar13;
        }
        if (*(uint *)(param_1 + (longlong)iVar9 * 4) < *(uint *)(param_1 + (longlong)iVar12 * 4)) {
          puVar15 = param_1 + (longlong)iVar9 * 4;
          puVar11 = param_1 + (longlong)iVar12 * 4;
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          uVar8 = puVar11[3];
          puVar15[2] = puVar11[2];
          puVar15[3] = uVar8;
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar12;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x0001481dc0ef;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar10 * 4];
      uVar7 = (param_1 + uVar10 * 4)[1];
      uVar8 = (param_1 + uVar10 * 4 + 2)[1];
      param_1[2] = param_1[uVar10 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar10 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
      puVar11 = param_1 + uVar10 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar9 < (longlong)uVar10) &&
               (*(uint *)(param_1 + (longlong)iVar12 * 4) <=
                *(uint *)(param_1 + (longlong)iVar9 * 4))) {
              iVar13 = iVar9;
            }
            if (*(uint *)(param_1 + (longlong)iVar13 * 4) <=
                *(uint *)(param_1 + (longlong)iVar14 * 4)) break;
            puVar15 = param_1 + (longlong)iVar14 * 4;
            puVar11 = param_1 + (longlong)iVar13 * 4;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar15[2] = puVar11[2];
            puVar15[3] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar9 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481dc300 FUN_1481dc300 body=52 status=ok
// SIG undefined FUN_1481dc300(void)

void FUN_1481dc300(longlong *param_1)

{
  FUN_1481dc334();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481dc334 FUN_1481dc334 body=284 status=ok
// SIG undefined FUN_1481dc334(void)

void FUN_1481dc334(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x10;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481dc452 FUN_1481dc452 body=2355 status=ok
// SIG undefined FUN_1481dc452(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481dc452(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_638 [32];
  undefined8 local_618;
  undefined4 *local_610;
  longlong local_608;
  uint local_600;
  int local_5f8;
  undefined1 local_5f0;
  uint local_5e4;
  longlong local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 *local_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined8 local_560;
  longlong local_558;
  longlong lStack_550;
  uint uStack_548;
  uint uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined1 uStack_530;
  byte bStack_52f;
  undefined2 uStack_52e;
  undefined2 uStack_52c;
  undefined2 uStack_52a;
  undefined4 uStack_528;
  undefined8 local_520;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined8 *local_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined8 uStack_4ec;
  undefined4 uStack_4e4;
  undefined8 local_4e0;
  undefined8 local_4d8;
  longlong lStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 local_488;
  uint local_480;
  undefined4 local_47c;
  undefined1 local_478;
  int local_474;
  int local_470;
  int local_46c;
  longlong local_468;
  longlong local_460;
  undefined1 local_458;
  undefined4 local_454;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  longlong local_408 [21];
  longlong *local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  uint uStack_328;
  undefined4 uStack_324;
  byte local_320;
  undefined4 local_318;
  undefined1 local_314;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined4 local_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined4 local_244;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_a8;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_638;
  if (*(int *)(DAT_14cb42ca8 + 4) == 0) goto LAB_1481dc67c;
  uVar5 = *(undefined8 *)(param_2 + 0x110);
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  lStack_4d0 = 0;
  local_4b8 = 0xffffffff;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_490 = 0xffffffff00000000;
  local_618 = *(undefined8 *)(param_1 + 8);
  local_608 = CONCAT44(local_608._4_4_,1);
  local_610 = param_3;
  FUN_1447f79ee(param_1,uVar5,&local_4d8,*(undefined8 *)(*(longlong *)(param_2 + 0x148) + 8));
  if (lStack_4d0 == 0) goto LAB_1481dc67c;
  lVar15 = *(longlong *)(param_2 + 0x108);
  FUN_1448712b0(param_1,uVar5,&local_4d8,lVar15);
  local_318 = 0;
  local_314 = 0;
  local_310 = 0xffffffff;
  local_2e0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  local_2d8 = 0xffffffffffffffff;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0x3ff0000000000000;
  local_2a0 = 0;
  local_29c = 0xffffffff;
  uStack_298 = 0xffffffff;
  uStack_294 = 0xffffffff;
  uStack_290 = 0xffffffff;
  local_28c = 0xffffffff00000000;
  local_284 = 0;
  uStack_27c = 0;
  local_274 = 0;
  uStack_26c = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0x7f7fffff;
  local_238 = 0;
  uStack_234 = 0x40000000;
  uStack_230 = 0x3f800000;
  uStack_22c = 0;
  local_a8 = 0xc00000000;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = 0xffffffff;
  local_78 = 0;
  if ((local_4c8._6_1_ != '\0') || (local_4c8._7_1_ == '\x01')) {
    local_610 = &local_318;
    FUN_143ab9d3a(param_1,&local_4d8,param_3,*(undefined8 *)(param_2 + 0x148));
  }
  if ((DAT_14cb2cc98._1_1_ & 4) != 0) {
    lVar10 = FUN_144af26ca(*(undefined8 *)(param_2 + 0xe8));
    uVar9 = 1;
    if (*(char *)(param_1 + 0x120) == '\0') {
      uVar9 = *(uint *)(lStack_4d0 + 0x120);
    }
    lVar11 = *(longlong *)(lVar10 + 0x168);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar10 + 0x168) = 0;
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *(undefined4 *)(lVar10 + 0x170) = 0xffffffff;
    plVar12 = *(longlong **)(param_3 + 0xbe);
    if (local_4c8._7_1_ == '\0') {
      if (local_4c8._6_1_ != '\0') {
        iVar8 = -1;
        if (local_4c8._5_1_ == '\0') goto LAB_1481dc7e2;
        goto LAB_1481dc746;
      }
    }
    else if (local_4c8._5_1_ == '\0') {
LAB_1481dc7e2:
      local_408[0] = 0;
      local_408[1] = 0;
      *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + (ulonglong)uVar9;
      FUN_1431f2978(lVar15,&local_558,*(undefined8 *)(lVar15 + 0x38),uVar9);
      local_408[2] = CONCAT44(uStack_544,uStack_548);
      local_408[0] = local_558;
      uVar9 = FUN_143aa4dee(&local_318,lStack_4d0,local_408);
      if (local_408[2] == 0) {
        lVar15 = *(longlong *)(lVar10 + 0x168);
        if (lVar15 == 0) {
          *(undefined4 *)(lVar10 + 0x170) = 0;
          goto LAB_1481dc8c4;
        }
        *(undefined8 *)(lVar10 + 0x168) = 0;
LAB_1481dc870:
        LOCK();
        puVar1 = (uint *)(lVar15 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        *(undefined4 *)(lVar10 + 0x170) = 0;
        if (local_408[2] == 0) goto LAB_1481dc8c4;
      }
      else {
        LOCK();
        *(int *)(local_408[2] + 8) = *(int *)(local_408[2] + 8) + 1;
        UNLOCK();
        lVar15 = *(longlong *)(lVar10 + 0x168);
        if (lVar15 != local_408[2]) {
          *(longlong *)(lVar10 + 0x168) = local_408[2];
          LOCK();
          *(int *)(local_408[2] + 8) = *(int *)(local_408[2] + 8) + 1;
          UNLOCK();
          if (lVar15 != 0) goto LAB_1481dc870;
        }
        *(undefined4 *)(lVar10 + 0x170) = 0;
      }
      LOCK();
      puVar1 = (uint *)(local_408[2] + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812(local_408[2]);
      }
    }
    else {
      LOCK();
      plVar2 = plVar12 + 9;
      iVar8 = (int)*plVar2;
      *(int *)plVar2 = (int)*plVar2 + 1;
      UNLOCK();
LAB_1481dc746:
      local_2d8 = CONCAT44(iVar8,(undefined4)local_2d8);
      cVar7 = (**(code **)(*plVar12 + 0xe0))(plVar12,uVar5);
      if (cVar7 != '\0') {
        uVar6 = (undefined4)local_88;
        lVar15 = *(longlong *)(lVar10 + 0x168);
        if (lVar15 != local_90) {
          *(longlong *)(lVar10 + 0x168) = local_90;
          if (local_90 != 0) {
            LOCK();
            *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
            UNLOCK();
          }
          if (lVar15 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar15 + 8);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        *(undefined4 *)(lVar10 + 0x170) = uVar6;
      }
    }
LAB_1481dc8c4:
    if (uVar9 != 0) {
      lVar15 = lVar10 + 8;
      local_5e4 = uVar9;
      FUN_14475e90a(param_1,uVar5,&local_4d8,lVar15);
      local_618 = *(undefined8 *)(*(longlong *)(param_2 + 0x148) + 8);
      local_610 = param_3;
      local_608 = lVar15;
      local_5e0 = lVar15;
      FUN_144af0d8a(param_1,local_408,&local_4d8);
      lVar11 = local_408[0];
      lVar15 = *(longlong *)(lVar10 + 0x178);
      *(longlong *)(lVar10 + 0x178) = local_408[0];
      local_408[0] = 0;
      if (lVar15 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar15 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        if (local_408[0] != 0) {
          LOCK();
          puVar1 = (uint *)(local_408[0] + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        lVar11 = *(longlong *)(lVar10 + 0x178);
      }
      lVar15 = *(longlong *)(lVar10 + 0x148);
      if (lVar15 != lVar11) {
        *(longlong *)(lVar10 + 0x148) = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        if (lVar15 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar15 + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      iVar8 = local_2d8._4_4_;
      if (local_2d8._4_4_ == -1) {
        iVar8 = *(int *)(lStack_4d0 + 0x5c);
      }
      local_360 = (longlong *)0x0;
      local_358 = 0;
      local_354 = 1;
      local_350 = 0;
      uStack_348 = 0;
      local_340 = 0;
      uStack_338 = 0xffffffff;
      local_330 = 0xff0000ffffffff;
      uStack_328 = uStack_328 & 0xffffff00;
      uStack_324 = 0x40c00f07;
      local_320 = local_320 & 0xfc;
      FUN_141793e06(local_408);
      local_618 = *(undefined8 *)(param_2 + 0x148);
      local_5f0 = local_4c8._7_1_;
      local_600 = local_5e4;
      local_608 = local_5e0;
      local_610 = param_3;
      local_5f8 = iVar8;
      FUN_143aba726(param_1,uVar5,&local_4d8,local_408);
      uStack_540 = 0;
      uStack_53c = 0;
      uStack_538 = 0;
      lStack_550 = 0;
      uStack_548 = 0;
      uStack_544 = 0;
      uStack_530 = 0xff;
      bStack_52f = bStack_52f & 0xe0;
      uStack_52e = 0;
      uStack_52c = 0x100;
      uStack_528 = 0;
      local_4e0 = 0;
      local_5e0 = param_1 + 0x40;
      local_520 = 0;
      uStack_518 = 0;
      uStack_514 = 0;
      local_510 = 0;
      uStack_50c = 0;
      uStack_508 = 0;
      local_500 = (undefined8 *)0x0;
      uStack_4f4 = 0;
      local_4f0 = 0;
      uStack_4ec = 0;
      uStack_4f8 = 1;
      local_558 = local_5e0;
      FUN_140518214(&local_500,0);
      uVar9 = uStack_548;
      puVar13 = &DAT_14c846400;
      puVar14 = local_500;
      for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      lVar15 = (longlong)(int)uStack_548;
      uStack_548 = uStack_548 + 1;
      if (uStack_544 < uStack_548) {
        FUN_147471df6(&lStack_550,uVar9);
      }
      lVar10 = lStack_550;
      lVar15 = lVar15 * 0xf0;
      *(undefined8 *)(lStack_550 + 0xa8 + lVar15) = 0;
      plVar12 = local_360;
      if (local_360 == (longlong *)0x0) {
        plVar12 = local_408;
      }
      FUN_144739392(lStack_550 + lVar15,plVar12,local_358,0);
      uVar9 = uStack_548;
      lVar11 = lStack_550;
      *(byte *)(lVar10 + 0xe8 + lVar15) = local_320;
      puVar3 = (undefined4 *)(lVar10 + 0xd8 + lVar15);
      *puVar3 = (undefined4)local_330;
      puVar3[1] = local_330._4_4_;
      puVar3[2] = uStack_328;
      puVar3[3] = uStack_324;
      puVar3 = (undefined4 *)(lVar10 + 200 + lVar15);
      *puVar3 = (undefined4)local_340;
      puVar3[1] = local_340._4_4_;
      puVar3[2] = (undefined4)uStack_338;
      puVar3[3] = uStack_338._4_4_;
      puVar3 = (undefined4 *)(lVar10 + 0xb8 + lVar15);
      *puVar3 = (undefined4)local_350;
      puVar3[1] = local_350._4_4_;
      puVar3[2] = (undefined4)uStack_348;
      puVar3[3] = uStack_348._4_4_;
      local_460 = param_1 + 0x10;
      if (*(int *)(param_1 + 0x28) == 0) {
        local_460 = 0;
      }
      bVar16 = *(int *)(param_1 + 0x188) == 8;
      iVar8 = 6;
      if (bVar16) {
        iVar8 = 0x12;
      }
      local_488 = 0;
      local_480 = uStack_548;
      if (uStack_548 == 0) {
        local_47c = 0;
      }
      else {
        FUN_147471e8a(&local_488,uStack_548,0);
        FUN_147471efc(local_488,lVar11,uVar9);
      }
      plVar12 = local_360;
      if (local_360 == (longlong *)0x0) {
        plVar12 = local_408;
      }
      local_478 = *(int *)((longlong)plVar12 + 0x5c) == 0;
      local_474 = iVar8 * local_5e4;
      local_470 = local_474 * 0xc;
      local_46c = ((uint)bVar16 * 4 + 2) * local_5e4;
      local_468 = local_5e0;
      local_458 = 1;
      local_454 = 0;
      local_448 = _DAT_14c846250;
      uStack_440 = DAT_14c846258;
      local_438 = _DAT_14c846260;
      uStack_430 = _DAT_14c846268;
      local_428 = _DAT_14c846270;
      uStack_420 = _DAT_14c846278;
      local_418 = DAT_14c846280;
      uStack_414 = DAT_14c846284;
      uStack_410 = DAT_14c846288;
      uStack_40c = DAT_14c84628c;
      FUN_147ceea5a(param_2);
      local_5d8 = local_558;
      uStack_5c8 = CONCAT44(uStack_544,uStack_548);
      local_5d0 = lStack_550;
      lStack_550 = 0;
      uStack_548 = 0;
      uStack_544 = 0;
      local_5c0 = CONCAT44(uStack_53c,uStack_540);
      uStack_5b0 = CONCAT22(uStack_52e,CONCAT11(bStack_52f,uStack_530));
      uStack_5ac = CONCAT22(uStack_52a,uStack_52c);
      _uStack_5b8 = CONCAT44(uStack_534,uStack_538);
      uStack_5a8 = uStack_528;
      local_5a0 = (undefined4)local_520;
      uStack_59c = local_520._4_4_;
      uStack_598 = uStack_518;
      uStack_594 = uStack_514;
      local_520 = 0;
      uStack_518 = 0;
      uStack_514 = 0;
      local_590 = CONCAT44(uStack_50c,local_510);
      uStack_588 = CONCAT44(uStack_504,uStack_508);
      local_580 = local_500;
      local_500 = (undefined8 *)0x0;
      local_578 = uStack_4f8;
      local_574 = uStack_4f4;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      local_570 = local_4f0;
      uStack_56c = (undefined4)uStack_4ec;
      uStack_568 = uStack_4ec._4_4_;
      uStack_564 = uStack_4e4;
      local_560 = local_4e0;
      local_4e0 = 0;
      FUN_147cee9b0(param_2);
      FUN_1472aaabe(&local_558);
      FUN_1446fc232(local_408);
    }
  }
  FUN_144af0bce(&local_318);
LAB_1481dc67c:
  if ((local_60 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481dcd86 FUN_1481dcd86 body=518 status=ok
// SIG undefined FUN_1481dcd86(void)

undefined8 * FUN_1481dcd86(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  FUN_1401f77c6();
  *param_1 = &PTR_FUN_14ae0f340;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  FUN_144b1dcb8(param_1 + 0x2e,param_2);
  param_1[0x2e] = &PTR_FUN_14a1ca480;
  param_1[0x62] = 0x400000000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x35c) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x35e) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_3 + 0xcc);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(param_3 + 0xd0);
  param_1[0x25] = *(undefined8 *)(param_3 + 0x288);
  param_1[0x26] = *(undefined8 *)(param_3 + 0x290);
  param_1[0x27] = *(undefined8 *)(param_3 + 0x298);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x2a0);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)(param_3 + 0x2a4);
  param_1[0x29] = *(undefined8 *)(param_3 + 0x2a8);
  lVar4 = 0x55;
  do {
    *(undefined4 *)((longlong)param_1 + lVar4 * 4) = 0xffffffff;
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0xa8) + -0x2a8 + lVar4 * 8);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x35) & 3) == 1)) {
      piVar3 = (int *)(**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))
                                ((longlong *)(param_4 + 0x40),lVar1 + 0x20,0);
      if (piVar3 == (int *)0x0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *piVar3;
      }
      *(int *)((longlong)param_1 + lVar4 * 4) = iVar2;
      *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | iVar2 != -1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x5b);
  return param_1;
}



// FUNCTION 1481dcf8c FUN_1481dcf8c body=295 status=ok
// SIG undefined FUN_1481dcf8c(void)

void FUN_1481dcf8c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_118 [40];
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_80 = 0x400000000;
  local_78 = 0;
  uStack_70 = 0;
  local_34 = 0xff;
  local_32 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_f0 = &DAT_14ca8c098;
  local_e8 = 0x3000000000000;
  local_58 = DAT_14ca8c0b0;
  local_e0 = &DAT_14ca8c098;
  local_d8 = 0x405000000000000;
  local_d0 = &DAT_14ca8c098;
  local_c8 = 0x405000000000000;
  local_50 = DAT_14ca8c0b0;
  local_48 = DAT_14ca8c0b0;
  local_38 = 0;
  local_68 = &DAT_14ca94d98;
  local_60 = 0x408000000000000;
  local_40 = DAT_14ca94db0;
  FUN_140ba0b60(param_1 + 0x170,param_2);
  FUN_14006bf18(param_1 + 0x170,param_2);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481dd0de FUN_1481dd0de body=930 status=ok
// SIG undefined FUN_1481dd0de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1481dd0de(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_3 != 0) && (cVar6 = FUN_144a47c72(param_1,param_3,param_4), cVar6 != '\0')) &&
     (((char)param_1[0x24] == '\x01' ||
      (((*(char *)((longlong)param_1 + 0xf4) != '\x01' &&
        (lVar12 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x78), lVar12 != 0)) &&
       (*(int *)(lVar12 + 0x120) != 0)))))) {
    puVar8 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    FUN_144b36974(puVar8,param_4);
    *puVar8 = &PTR_FUN_14ae1b190;
    puVar8[6] = 0;
    puVar8[7] = DAT_14c846330;
    *(undefined4 *)(puVar8 + 8) = DAT_14c846338;
    uVar9 = _DAT_14c846348;
    puVar8[10] = ram0x00014c846340;
    puVar8[0xb] = uVar9;
    puVar8[0xc] = &DAT_3f8000003f800000;
    puVar8[0xd] = 0x3f800000;
    *(undefined4 *)(puVar8 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = DAT_14c846338;
    *(undefined8 *)((longlong)puVar8 + 0x74) = DAT_14c846330;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x84) = DAT_14c846330;
    *(undefined4 *)((longlong)puVar8 + 0x8c) = DAT_14c846338;
    *(undefined4 *)(puVar8 + 0x12) = 0x3f800000;
    *(undefined4 *)((longlong)puVar8 + 0x94) = 0x40000000;
    *(undefined4 *)(puVar8 + 0x13) = 0x3f000000;
    *(undefined4 *)((longlong)puVar8 + 0x9c) = 0x40000000;
    uVar9 = (**(code **)(**(longlong **)param_1[0x20] + 0x2f0))();
    puVar8[6] = uVar9;
    uVar13 = *(undefined4 *)((longlong)param_1 + 0x114);
    lVar12 = param_1[0x23];
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x11c);
    *(int *)(puVar8 + 1) = (int)param_1[0x22];
    *(undefined4 *)((longlong)puVar8 + 0xc) = uVar13;
    *(int *)(puVar8 + 2) = (int)lVar12;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar4;
    iVar7 = *(int *)(param_3 + 0xd0);
    *(int *)((longlong)puVar8 + 0x6c) = iVar7;
    if ((char)param_1[0x2a] == '\x01') {
      lVar12 = (longlong)*(int *)((longlong)param_1 + 0x154);
      if (lVar12 != -1) {
        lVar3 = *(longlong *)(param_4 + 0x60);
        *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(lVar3 + 8 + lVar12);
        puVar8[7] = *(undefined8 *)(lVar3 + lVar12);
      }
      if ((longlong)(int)param_1[0x2b] != -1) {
        puVar2 = (undefined4 *)(*(longlong *)(param_4 + 0x60) + (longlong)(int)param_1[0x2b]);
        uVar13 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        *(undefined4 *)(puVar8 + 10) = *puVar2;
        *(undefined4 *)((longlong)puVar8 + 0x54) = uVar13;
        *(undefined4 *)(puVar8 + 0xb) = uVar4;
        *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar5;
      }
      lVar12 = (longlong)*(int *)((longlong)param_1 + 0x15c);
      if (lVar12 != -1) {
        lVar3 = *(longlong *)(param_4 + 0x60);
        *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(lVar3 + 8 + lVar12);
        puVar8[0xc] = *(undefined8 *)(lVar3 + lVar12);
      }
      if ((longlong)(int)param_1[0x2c] != -1) {
        iVar7 = *(int *)(*(longlong *)(param_4 + 0x60) + (longlong)(int)param_1[0x2c]);
        *(int *)((longlong)puVar8 + 0x6c) = iVar7;
      }
      if ((longlong)*(int *)((longlong)param_1 + 0x164) != -1) {
        *(undefined4 *)(puVar8 + 0xe) =
             *(undefined4 *)
              (*(longlong *)(param_4 + 0x60) + (longlong)*(int *)((longlong)param_1 + 0x164));
      }
      lVar12 = (longlong)(int)param_1[0x2d];
      if (lVar12 != -1) {
        lVar3 = *(longlong *)(param_4 + 0x60);
        *(undefined4 *)((longlong)puVar8 + 0x7c) = *(undefined4 *)(lVar3 + 8 + lVar12);
        *(undefined8 *)((longlong)puVar8 + 0x74) = *(undefined8 *)(lVar3 + lVar12);
      }
    }
    if (((char)param_1[0x24] != '\x01') || (iVar7 == *(int *)((longlong)param_1 + 0x124))) {
      if (((0 < *(int *)(param_3 + 0x240)) ||
          ((0 < *(int *)(param_3 + 0x250) || (0 < *(int *)(param_3 + 0x260))))) ||
         (0 < *(int *)(param_3 + 0x270))) {
        local_48 = param_1[0x20];
        local_40 = (undefined4)param_1[0x21];
        (**(code **)(*param_1 + 0x80))(param_1,param_3 + 0x238,param_4);
      }
      local_50 = DAT_14c846338;
      local_58 = DAT_14c846330;
      plVar1 = (longlong *)(param_4 + 0x40);
      piVar10 = (int *)(**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))(plVar1,param_3 + 0x1e8,0)
      ;
      uVar13 = 0;
      if ((piVar10 != (int *)0x0) && (uVar13 = 0, (longlong)*piVar10 != -1)) {
        uVar13 = *(undefined4 *)(*(longlong *)(param_4 + 0x60) + (longlong)*piVar10);
      }
      *(undefined4 *)(puVar8 + 0x10) = uVar13;
      piVar10 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,param_3 + 0x220,0);
      puVar11 = &local_58;
      if ((piVar10 != (int *)0x0) && ((longlong)*piVar10 != -1)) {
        puVar11 = (undefined8 *)((longlong)*piVar10 + *(longlong *)(param_4 + 0x60));
      }
      uVar9 = *puVar11;
      *(undefined4 *)((longlong)puVar8 + 0x8c) = *(undefined4 *)(puVar11 + 1);
      *(undefined8 *)((longlong)puVar8 + 0x84) = uVar9;
      *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(param_3 + 0xd4);
      *(undefined4 *)((longlong)puVar8 + 0x94) = *(undefined4 *)(param_3 + 0xdc);
      *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)(param_3 + 0xe0);
      *(undefined4 *)((longlong)puVar8 + 0x9c) = *(undefined4 *)(param_3 + 0xd8);
      goto LAB_1481dd3fb;
    }
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_1481dd3fb:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 1481dd488 FUN_1481dd488 body=3442 status=ok
// SIG undefined FUN_1481dd488(void)

void FUN_1481dd488(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *puVar17;
  float *pfVar18;
  int *piVar19;
  undefined1 (*pauVar20) [16];
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined8 *puVar30;
  double *pdVar31;
  double *pdVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  double dVar38;
  float fVar40;
  float fVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_428 [47];
  char local_3f9;
  longlong local_3f8;
  uint local_3ec;
  longlong local_3e8;
  longlong local_3e0;
  double *local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  undefined1 (*local_3b8) [16];
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  ulonglong local_3a0;
  longlong local_398;
  longlong *local_390;
  double *local_388;
  double *local_380;
  double local_378;
  double local_370;
  double local_368;
  undefined8 local_360;
  double local_358;
  double local_350;
  double local_348;
  undefined8 local_340;
  double local_338;
  double local_330;
  double local_328;
  undefined8 local_320;
  double local_318;
  double local_310;
  double local_308;
  undefined8 local_300;
  double local_2f8 [6];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_218;
  double local_210;
  double local_208;
  undefined8 local_1f8 [16];
  undefined1 local_178 [32];
  char local_158;
  char local_157;
  int local_154;
  longlong alStack_150 [3];
  char local_138 [4];
  int local_134;
  longlong alStack_130 [4];
  char local_110;
  char local_10f;
  int local_10c;
  longlong alStack_108 [4];
  
  alStack_108[3] = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_3e8 = *(longlong *)(param_1 + 8);
  if (local_3e8 != 0) {
    plVar3 = *(longlong **)(local_3e8 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      lVar23 = *(longlong *)(local_3e8 + 0x20);
    }
    else if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_144b34c56) {
      lVar23 = plVar3[(ulonglong)(plVar3[0x26] != 0) * 2 + 0x24];
    }
    else {
      lVar23 = (**(code **)(*plVar3 + 0x10))(plVar3,param_5[0x22],0);
    }
    if ((lVar23 != 0) &&
       (((*(char *)(param_1 + 0x120) != '\0' || (*(int *)(lVar23 + 0x120) != 0)) &&
        (0 < (int)param_2[1])))) {
      local_3b8 = (undefined1 (*) [16])(param_6 + 0x1b8);
      local_3b0 = (undefined8 *)(param_6 + 0x100);
      local_3d8 = (double *)(local_3e8 + 0x38);
      local_380 = (double *)(local_3e8 + 0x50);
      local_388 = (double *)(local_3e8 + 0x60);
      piVar1 = (int *)(local_3e8 + 0x6c);
      local_398 = param_1 + 0x170;
      uVar28 = 0;
      local_3f8 = param_1;
      local_3ec = param_4;
      local_3e0 = lVar23;
      local_390 = param_2;
      do {
        if (((param_4 >> ((uint)uVar28 & 0x1f) & 1) != 0) &&
           ((lVar26 = *(longlong *)(*param_2 + uVar28 * 8), *(char *)(lVar26 + 0x23f2) != '\x01' ||
            (*(uint *)(lVar26 + 0x1dd0) < 2)))) {
          puVar17 = (undefined8 *)FUN_143abfb06(param_5[0x1d]);
          *puVar17 = 0;
          puVar17[1] = 0;
          local_3a0 = uVar28;
          if (*(char *)(param_1 + 0x120) == '\0') {
            lVar23 = *(longlong *)(lVar23 + 0x10);
            FUN_144b351ea(&local_110,*(undefined8 *)(lVar23 + 0x78),*(undefined1 *)(param_1 + 0x128)
                          ,*(undefined4 *)(param_1 + 300));
            FUN_140954484(local_138,*(undefined8 *)(lVar23 + 0x78),*(undefined1 *)(param_1 + 0x130),
                          *(undefined4 *)(param_1 + 0x134));
            FUN_14060d608(&local_158,*(undefined8 *)(lVar23 + 0x78),*(undefined1 *)(param_1 + 0x138)
                          ,*(undefined4 *)(param_1 + 0x13c));
            iVar16 = *(int *)(param_1 + 0x140);
            lVar26 = *(longlong *)(lVar23 + 0x78);
            if (iVar16 == -1 || lVar26 == 0) {
              iVar29 = 0;
              lVar34 = 0;
            }
            else {
              lVar34 = (ulonglong)(uint)(iVar16 * *(int *)(lVar26 + 300)) +
                       *(longlong *)(lVar26 + 0x28);
              iVar29 = *(int *)(lVar26 + 0x120);
            }
            FUN_14060d608(local_178,lVar26,*(undefined1 *)(param_1 + 0x148));
            lVar23 = local_3e0;
            local_3f9 = '\x01';
            if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
              local_3f9 = *(char *)(param_6 + 0x388);
            }
            puVar30 = local_3b0;
            puVar21 = local_1f8;
            for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
              *puVar21 = *puVar30;
              puVar30 = puVar30 + 1;
              puVar21 = puVar21 + 1;
            }
            pfVar18 = *(float **)(param_6 + 0x2f0);
            if (pfVar18 == (float *)0x0) {
              pfVar18 = (float *)&DAT_14c846330;
            }
            uVar27 = *(uint *)(local_3e0 + 0x120);
            if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar27);
            }
            local_3c0 = (double)pfVar18[2];
            local_3c8 = (double)pfVar18[1];
            local_3d0 = (double)*pfVar18;
            local_3a8 = puVar17;
            if (*(int *)((longlong)puVar17 + 0xc) < (int)uVar27) {
              FUN_1481f1d28();
              uVar27 = *(uint *)(lVar23 + 0x120);
            }
            uVar28 = local_3a0;
            param_1 = local_3f8;
            param_2 = local_390;
            puVar17 = local_3a8;
            param_4 = local_3ec;
            if (uVar27 != 0) {
              local_3c0 = local_3c0 * 65536.0;
              local_3c8 = local_3c8 * 65536.0;
              local_3d0 = local_3d0 * 65536.0;
              uVar35 = 0;
              pdVar31 = local_3d8;
              do {
                if ((local_110 == '\x01') && ((int)uVar35 < local_10c)) {
                  if (local_10f == '\0') {
                    lVar22 = 0;
                    do {
                      uVar2 = *(ushort *)(alStack_108[lVar22] + (longlong)(int)uVar35 * 2);
                      uVar33 = (uint)uVar2 << 0xd;
                      if ((uVar33 & 0xf800000) == 0xf800000) {
                        fVar36 = (float)(uVar33 | 0x70000000);
                      }
                      else if ((uVar33 & 0xf800000) == 0) {
                        fVar36 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar36 = (float)((uVar33 & 0xfffe000) + 0x38000000);
                      }
                      *(uint *)((longlong)&local_278 + lVar22 * 4) =
                           (int)(short)uVar2 & 0x80000000U | (uint)fVar36;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 3);
                  }
                  else {
                    lVar22 = 0;
                    do {
                      *(undefined4 *)((longlong)&local_278 + lVar22 * 4) =
                           *(undefined4 *)(alStack_108[lVar22] + (longlong)(int)uVar35 * 4);
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 3);
                  }
                }
                else {
                  uStack_270 = (double)CONCAT44(uStack_270._4_4_,*(undefined4 *)(pdVar31 + 1));
                  local_278 = *pdVar31;
                }
                dVar4 = (double)(float)uStack_270;
                dVar5 = (double)local_278._4_4_;
                dVar42 = (double)(float)local_278;
                if ((local_138[0] == '\x01') && ((int)uVar35 < local_134)) {
                  lVar22 = 0;
                  do {
                    *(undefined4 *)((longlong)&local_278 + lVar22 * 4) =
                         *(undefined4 *)(alStack_130[lVar22] + (longlong)(int)uVar35 * 4);
                    lVar22 = lVar22 + 1;
                  } while (lVar22 != 4);
                }
                else {
                  local_278 = *local_380;
                  uStack_270 = local_380[1];
                }
                fVar36 = (float)local_278 * (float)local_278 + local_278._4_4_ * local_278._4_4_;
                fVar39 = (float)uStack_270 * (float)uStack_270 + uStack_270._4_4_ * uStack_270._4_4_
                ;
                auVar46._0_4_ = fVar39 + fVar36;
                auVar46._4_4_ = fVar39 + fVar36;
                auVar46._8_4_ = fVar36 + fVar39;
                auVar46._12_4_ = fVar36 + fVar39;
                auVar43._4_4_ = -(uint)(1e-08 <= auVar46._4_4_);
                auVar43._0_4_ = -(uint)(1e-08 <= auVar46._0_4_);
                auVar43._8_4_ = -(uint)(1e-08 <= auVar46._8_4_);
                auVar43._12_4_ = -(uint)(1e-08 <= auVar46._12_4_);
                auVar47 = sqrtps(auVar46,auVar46);
                auVar50._8_4_ = 0x3f800000;
                auVar50._0_8_ = &DAT_3f8000003f800000;
                auVar50._12_4_ = 0x3f800000;
                auVar47 = divps(auVar50,auVar47);
                auVar51._0_4_ = auVar47._0_4_ * (float)local_278;
                auVar51._4_4_ = auVar47._4_4_ * local_278._4_4_;
                auVar51._8_4_ = auVar47._8_4_ * (float)uStack_270;
                auVar51._12_4_ = auVar47._12_4_ * uStack_270._4_4_;
                auVar47._0_12_ = ZEXT812(0);
                auVar47._12_4_ = 0x3f800000;
                auVar43 = blendvps(auVar47,auVar51,auVar43);
                if ((local_158 == '\x01') && ((int)uVar35 < local_154)) {
                  if (local_157 == '\0') {
                    lVar22 = 0;
                    do {
                      uVar2 = *(ushort *)(alStack_150[lVar22] + (longlong)(int)uVar35 * 2);
                      uVar33 = (uint)uVar2 << 0xd;
                      if ((uVar33 & 0xf800000) == 0xf800000) {
                        fVar36 = (float)(uVar33 | 0x70000000);
                      }
                      else if ((uVar33 & 0xf800000) == 0) {
                        fVar36 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar36 = (float)((uVar33 & 0xfffe000) + 0x38000000);
                      }
                      *(uint *)((longlong)&local_278 + lVar22 * 4) =
                           (int)(short)uVar2 & 0x80000000U | (uint)fVar36;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 3);
                  }
                  else {
                    lVar22 = 0;
                    do {
                      *(undefined4 *)((longlong)&local_278 + lVar22 * 4) =
                           *(undefined4 *)(alStack_150[lVar22] + (longlong)(int)uVar35 * 4);
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 3);
                  }
                }
                else {
                  uStack_270 = (double)CONCAT44(uStack_270._4_4_,*(undefined4 *)(local_388 + 1));
                  local_278 = *local_388;
                }
                piVar19 = (int *)(lVar34 + (longlong)(int)uVar35 * 4);
                if (iVar29 <= (int)uVar35) {
                  piVar19 = piVar1;
                }
                if (iVar16 == -1 || lVar26 == 0) {
                  piVar19 = piVar1;
                }
                if (*piVar19 == *(int *)(param_1 + 0x124)) {
                  dVar44 = (double)(float)uStack_270;
                  dVar48 = (double)local_278._4_4_;
                  dVar6 = (double)(float)local_278;
                  if (1e-08 < ABS(dVar44 * dVar44 + dVar6 * dVar6 + dVar48 * dVar48)) {
                    dVar8 = (double)auVar43._12_4_;
                    dVar9 = (double)auVar43._8_4_;
                    dVar10 = (double)auVar43._4_4_;
                    dVar38 = (double)auVar43._0_4_;
                    local_2f8[3] = 0.0;
                    local_2f8[4] = 0.0;
                    local_2f8[1] = 0.0;
                    local_2f8[2] = 0.0;
                    local_2b8 = 0;
                    uStack_2b0 = 0;
                    local_2c8 = 0;
                    uStack_2c0 = 0;
                    dVar45 = dVar10 + dVar10;
                    dVar49 = dVar9 + dVar9;
                    dVar7 = (dVar38 + dVar38) * dVar38;
                    local_348 = (dVar38 + dVar38) * dVar8;
                    local_378 = 1.0 - (dVar45 * dVar10 + dVar9 * dVar49);
                    local_358 = dVar45 * dVar38 - dVar49 * dVar8;
                    local_370 = dVar49 * dVar8 + dVar45 * dVar38;
                    local_350 = 1.0 - (dVar9 * dVar49 + dVar7);
                    local_338 = dVar38 * dVar49 + dVar45 * dVar8;
                    local_368 = dVar38 * dVar49 - dVar45 * dVar8;
                    local_330 = dVar10 * dVar49 - local_348;
                    local_348 = local_348 + dVar10 * dVar49;
                    local_328 = 1.0 - (dVar45 * dVar10 + dVar7);
                    local_360 = 0;
                    local_340 = 0;
                    local_320 = 0;
                    local_290 = 0;
                    uStack_288 = 0;
                    local_2a0 = 0;
                    uStack_298 = 0;
                    local_280 = 0x3ff0000000000000;
                    local_300 = 0x3ff0000000000000;
                    local_318 = dVar42;
                    local_310 = dVar5;
                    local_308 = dVar4;
                    local_2f8[0] = dVar6;
                    local_2f8[5] = dVar48;
                    local_2a8 = dVar44;
                    FUN_1447fea8d(&local_278,local_2f8,&local_378);
                    if (local_3f9 == '\0') {
                      local_208 = local_208 + local_3c0;
                      local_210 = local_210 + local_3c8;
                      local_218 = local_218 + local_3d0;
                    }
                    else {
                      FUN_1447fea8d(local_2f8,local_1f8,&local_278);
                      pdVar31 = local_2f8;
                      pdVar32 = (double *)&local_278;
                      for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
                        *pdVar32 = *pdVar31;
                        pdVar31 = pdVar31 + 1;
                        pdVar32 = pdVar32 + 1;
                      }
                    }
                    pauVar20 = (undefined1 (*) [16])FUN_1481de1fc(local_3a8);
                    uVar11 = *(undefined8 *)local_3b8[1];
                    uVar12 = *(undefined8 *)(local_3b8[1] + 8);
                    uVar13 = *(undefined8 *)local_3b8[2];
                    uVar14 = *(undefined8 *)(local_3b8[2] + 8);
                    *pauVar20 = *local_3b8;
                    *(undefined8 *)pauVar20[1] = uVar11;
                    *(undefined8 *)(pauVar20[1] + 8) = uVar12;
                    *(undefined8 *)pauVar20[2] = uVar13;
                    *(undefined8 *)(pauVar20[2] + 8) = uVar14;
                    *(undefined8 *)pauVar20[3] = *(undefined8 *)local_3b8[3];
                    puVar17 = &local_278;
                    pauVar20 = pauVar20 + 4;
                    for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
                      *(undefined8 *)*pauVar20 = *puVar17;
                      puVar17 = puVar17 + 1;
                      pauVar20 = (undefined1 (*) [16])(*pauVar20 + 8);
                    }
                    uVar27 = *(uint *)(local_3e0 + 0x120);
                    lVar23 = local_3e0;
                    param_1 = local_3f8;
                    pdVar31 = local_3d8;
                  }
                }
                uVar35 = uVar35 + 1;
                uVar28 = local_3a0;
                param_2 = local_390;
                puVar17 = local_3a8;
                param_4 = local_3ec;
              } while (uVar35 < uVar27);
            }
          }
          else {
            puVar21 = (undefined8 *)FUN_1481de1fc(puVar17);
            uVar11 = *(undefined8 *)(*local_3b8 + 8);
            uVar12 = *(undefined8 *)local_3b8[1];
            uVar13 = *(undefined8 *)(local_3b8[1] + 8);
            uVar14 = *(undefined8 *)local_3b8[2];
            uVar15 = *(undefined8 *)(local_3b8[2] + 8);
            *puVar21 = *(undefined8 *)*local_3b8;
            puVar21[1] = uVar11;
            puVar21[2] = uVar12;
            puVar21[3] = uVar13;
            puVar21[4] = uVar14;
            puVar21[5] = uVar15;
            puVar21[6] = *(undefined8 *)local_3b8[3];
            puVar30 = local_3b0;
            puVar21 = puVar21 + 8;
            for (lVar26 = 0x10; lVar23 = local_3e0, param_1 = local_3f8, lVar26 != 0;
                lVar26 = lVar26 + -1) {
              *puVar21 = *puVar30;
              puVar30 = puVar30 + 1;
              puVar21 = puVar21 + 1;
            }
          }
          if (*(int *)(puVar17 + 1) != 0) {
            iVar16 = FUN_14470b8a2(param_5,1);
            lVar22 = local_3e8;
            lVar26 = *(longlong *)(*param_5 + (longlong)(iVar16 / 0x44) * 8);
            lVar24 = (ulonglong)(uint)(iVar16 % 0x44) * 0xf0;
            *(longlong *)(lVar26 + 0xb8 + lVar24) = local_398;
            *(undefined8 *)(lVar26 + 0xc0 + lVar24) = *(undefined8 *)(local_3e8 + 0x30);
            *(undefined8 *)(lVar26 + 200 + lVar24) = 0;
            uVar27 = *(uint *)(lVar26 + 0xe4 + lVar24);
            uVar35 = (uint)(byte)(*(char *)(param_6 + 0x6b) << 6);
            *(uint *)(lVar26 + 0xe4 + lVar24) = uVar27 & 0xffee3e3f | uVar35 | 0x104080;
            *(uint *)(lVar26 + 0xe4 + lVar24) =
                 uVar27 & 0xffce3e3f | uVar35 | 0x104080 |
                 (uint)((*(byte *)(param_6 + 0x6c) & 6) != 0) << 0x15;
            lVar34 = *(longlong *)(lVar26 + 0xa8 + lVar24);
            if (lVar34 == 0) {
              lVar34 = lVar26 + lVar24;
            }
            *(undefined8 *)(lVar34 + 0x18) = 0;
            *(undefined8 *)(lVar34 + 0x58) = 0x200000000;
            *(undefined4 *)(lVar34 + 0x6c) = 3;
            *(undefined8 *)(lVar34 + 100) = 0;
            puVar21 = (undefined8 *)FUN_143abfc00(param_5[0x1d]);
            uVar28 = local_3a0;
            lVar23 = local_3e0;
            param_4 = local_3ec;
            param_1 = local_3f8;
            *puVar21 = &PTR_FUN_14a8622c0;
            puVar21[1] = &PTR_FUN_14a862348;
            puVar21[2] = param_6;
            puVar17 = &DAT_14c846400;
            puVar30 = puVar21 + 4;
            for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
              *puVar30 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar30 = puVar30 + 1;
            }
            *(undefined4 *)(puVar21 + 0x15) = DAT_14c9a52a0;
            puVar21[0x14] = DAT_14c9a5298;
            *(undefined8 *)((longlong)puVar21 + 0xac) = 0x3f8000003dcccccd;
            *(undefined8 *)((longlong)puVar21 + 0xb4) = 0x41000000;
            *(undefined8 *)((longlong)puVar21 + 0xbc) = 0x3f800000;
            *(undefined2 *)((longlong)puVar21 + 0xc4) = 0;
            fVar36 = *(float *)(lVar22 + 0x84);
            fVar39 = *(float *)(lVar22 + 0x88);
            fVar41 = *(float *)(lVar22 + 0x8c);
            fVar37 = fVar36;
            if (fVar36 <= fVar39) {
              fVar37 = fVar39;
            }
            if (fVar37 <= fVar41) {
              fVar37 = fVar41;
            }
            fVar37 = (float)(-(uint)(0.0 < fVar37) & (uint)(1.0 / fVar37));
            fVar40 = (float)*(int *)(lVar22 + 0x80);
            fVar41 = fVar41 * fVar37 * fVar40;
            fVar39 = fVar39 * fVar37 * fVar40;
            fVar40 = fVar37 * fVar36 * fVar40;
            *(int *)(puVar21 + 0x14) = -((int)ROUND(-0.5 - (fVar40 + fVar40)) >> 1);
            *(int *)((longlong)puVar21 + 0xa4) = -((int)ROUND(-0.5 - (fVar39 + fVar39)) >> 1);
            *(int *)(puVar21 + 0x15) = -((int)ROUND(-0.5 - (fVar41 + fVar41)) >> 1);
            *(undefined4 *)(puVar21 + 0x16) = *(undefined4 *)(lVar22 + 0x90);
            *(undefined4 *)((longlong)puVar21 + 0xb4) = *(undefined4 *)(lVar22 + 0x94);
            *(undefined4 *)(puVar21 + 0x17) = *(undefined4 *)(lVar22 + 0x98);
            *(undefined4 *)((longlong)puVar21 + 0xbc) = *(undefined4 *)(lVar22 + 0x9c);
            *(undefined8 **)(lVar34 + 0x38) = puVar21;
            FUN_1436a14f8(param_5,local_3a0 & 0xffffffff,lVar26 + lVar24);
          }
        }
        uVar28 = uVar28 + 1;
      } while ((longlong)uVar28 < (longlong)(int)param_2[1]);
    }
  }
  if ((alStack_108[3] ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481de1fc FUN_1481de1fc body=54 status=ok
// SIG undefined FUN_1481de1fc(void)

longlong FUN_1481de1fc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1481f1d98(param_1,iVar1);
  }
  return (longlong)iVar1 * 0xc0 + *param_1;
}



// FUNCTION 1481de234 FUN_1481de234 body=101 status=ok
// SIG undefined FUN_1481de234(void)

void FUN_1481de234(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  uint in_stack_00000038;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_20;
  local_10 = 0;
  local_20 = in_stack_00000028;
  local_1c = in_stack_00000030;
  local_18 = in_stack_00000038 | 0x4109;
  FUN_143abae14();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481de29a FUN_1481de29a body=41 status=ok
// SIG undefined FUN_1481de29a(void)

void FUN_1481de29a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_144735dd8(param_2,param_1,0);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 1481de2c4 FUN_1481de2c4 body=166 status=ok
// SIG undefined FUN_1481de2c4(void)

void FUN_1481de2c4(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 8);
    local_28 = *(longlong *)(param_1 + 0x10);
    if (local_28 == 0) {
      local_28 = FUN_144735dd8(param_2,param_1,0);
      *(longlong *)(param_1 + 0x10) = local_28;
    }
    local_3c = 0xffffffff00000000;
    local_30 = 0;
    local_40 = uVar1;
    uVar2 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_28 + 8);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481de36c FUN_1481de36c body=164 status=ok
// SIG undefined FUN_1481de36c(void)

void FUN_1481de36c(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_38;
  undefined2 local_37;
  longlong local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 8);
    local_30 = *(longlong *)(param_1 + 0x10);
    if (local_30 == 0) {
      local_30 = FUN_144735dd8(param_2,param_1,0);
      *(longlong *)(param_1 + 0x10) = local_30;
    }
    local_37 = 0;
    local_48 = &local_21;
    local_21 = 0;
    local_38 = uVar1;
    uVar2 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_30 + 8);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481de412 FUN_1481de412 body=16 status=ok
// SIG undefined FUN_1481de412(void)

void FUN_1481de412(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1481de422 FUN_1481de422 body=41 status=ok
// SIG undefined FUN_1481de422(void)

void FUN_1481de422(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = FUN_14473c272(param_2,param_1,0);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return;
}



// FUNCTION 1481de44c FUN_1481de44c body=364 status=ok
// SIG undefined FUN_1481de44c(void)

void FUN_1481de44c(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  longlong *local_6c;
  undefined4 local_64;
  longlong *local_60;
  undefined4 local_58;
  undefined8 local_54;
  uint local_4c;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  lVar2 = (**(code **)(*param_3 + 8))(param_3);
  if ((((*(char *)(lVar2 + 0x32) == '\x02') && (*(char *)(lVar2 + 0x33) == *(char *)(lVar1 + 0x28)))
      && (*(int *)(lVar2 + 0x24) == *(int *)(lVar1 + 0x2c))) &&
     ((*(int *)(lVar2 + 0x28) == *(int *)(lVar1 + 0x30) &&
      (*(short *)(lVar2 + 0x2c) == *(short *)(lVar1 + 0x34))))) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lVar1 = FUN_14473c272(param_2,param_1,0);
      param_1[1] = lVar1;
    }
    local_78 = param_3;
    plVar3 = (longlong *)FUN_144b113f6(param_2 + 0x1d8);
    if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
      FUN_1447ec05f(&local_78,param_3,param_4);
      lVar2 = FUN_14473c272(param_2,&local_78,0);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x38))();
      }
    }
    local_70 = DAT_14c9a52a0;
    local_78 = DAT_14c9a5298;
    local_64 = DAT_14c9a52a0;
    local_6c = DAT_14c9a5298;
    local_60 = DAT_14c9a5298;
    local_58 = DAT_14c9a52a0;
    local_54 = 0;
    local_48 = 0;
    local_40 = (uint)*(byte *)(lVar1 + 0x90);
    local_4c = (uint)*(ushort *)(lVar1 + 0x8e);
    FUN_1400e8d41(param_2,lVar1,lVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481de5ba FUN_1481de5ba body=136 status=ok
// SIG undefined FUN_1481de5ba(void)

longlong *
FUN_1481de5ba(longlong *param_1,longlong param_2,undefined4 param_3,char param_4,longlong param_5)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_14ae0f3d0;
  param_1[0x13] = param_2;
  param_1[0x14] = param_5;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,param_3);
  if (param_4 != '\0') {
    param_1[0x12] = (longlong)*(int *)(param_2 + 0x10);
  }
  return param_1;
}



// FUNCTION 1481de642 FUN_1481de642 body=288 status=ok
// SIG undefined FUN_1481de642(void)

void FUN_1481de642(longlong param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x90) + param_3;
  lVar4 = *(longlong *)(param_1 + 0x98);
  iVar6 = *(int *)(lVar4 + 0x10);
  lVar8 = lVar3 - iVar6;
  if (lVar8 != 0 && iVar6 <= lVar3) {
    if (0x7ffffffe < lVar3) {
      FUN_1400021e4(param_1 + 0xa0,&local_40);
      puVar7 = local_40;
      if (local_38 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraResourceArrayWriter.cpp"
                    ,0x1a,L"FMemoryWriter does not support data larger than 2GB. Archive name: %s.",
                    puVar7);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = *(longlong *)(param_1 + 0x98);
      iVar6 = *(int *)(lVar4 + 0x10);
    }
    uVar2 = (uint)lVar8;
    *(uint *)(lVar4 + 0x10) = iVar6 + uVar2;
    if ((uint)(*(int *)(lVar4 + 0x14) - iVar6) < uVar2) {
      FUN_14746fa8e(lVar4 + 8);
    }
  }
  if (param_3 != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8);
    uVar5 = *(longlong *)(param_1 + 0x98) + 8 + ((longlong)uVar1 >> 0x18);
    if ((uVar1 & 1) == 0) {
      uVar5 = uVar1;
    }
    memcpy((void *)(uVar5 + (longlong)*(int *)(param_1 + 0x90)),param_2,param_3);
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481de7ce FUN_1481de7ce body=115 status=ok
// SIG undefined FUN_1481de7ce(void)

void FUN_1481de7ce(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_144a84c36();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 != 0) && ((longlong)*(int *)(param_1 + 0x5a0) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x598);
    lVar3 = (longlong)*(int *)(param_1 + 0x5a0) * 0x2c;
    do {
      FUN_140349dfc(lVar4,lVar2);
      lVar4 = lVar4 + 0x2c;
      lVar3 = lVar3 + -0x2c;
    } while (lVar3 != 0);
  }
  FUN_140349a5c(param_1,param_2,param_3);
  return;
}



// FUNCTION 1481de842 FUN_1481de842 body=52 status=ok
// SIG undefined FUN_1481de842(void)

void FUN_1481de842(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,((longlong)*(int *)(param_1 + 0x75c) + (longlong)*(int *)(param_1 + 0x74c))
                        * 8);
  return;
}



// FUNCTION 1481de8c8 FUN_1481de8c8 body=612 status=ok
// SIG undefined FUN_1481de8c8(void)

longlong FUN_1481de8c8(longlong param_1,longlong param_2)

{
  FUN_141838e3e();
  FUN_141838e3e(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_1481eb814(param_1 + 0x70,param_2 + 0x70);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined8 *)(param_2 + 0x88) = 0;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  FUN_1481eb862(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1481eb8b0(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1481eb8fe(param_1 + 200,param_2 + 200);
  FUN_1481eb94c(param_1 + 0xd8,param_2 + 0xd8);
  if (param_1 == param_2) {
    FUN_1481eb99a(param_1 + 0xf8,param_2 + 0xf8);
  }
  else {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_2 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
    *(undefined8 *)(param_2 + 0xf0) = 0;
    FUN_1481eb99a(param_1 + 0xf8,param_2 + 0xf8);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
    *(undefined8 *)(param_2 + 0x110) = 0;
  }
  FUN_1481eb9e8(param_1 + 0x118,param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  FUN_1481eba9e(param_1 + 0x178,param_2 + 0x178);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x188) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(param_2 + 0x188) = 0;
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
    *(undefined8 *)(param_2 + 400) = 0;
  }
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  return param_1;
}



// FUNCTION 1481deb2c FUN_1481deb2c body=68 status=ok
// SIG undefined FUN_1481deb2c(void)

void FUN_1481deb2c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481deb72 FUN_1481deb72 body=99 status=ok
// SIG undefined FUN_1481deb72(void)

bool FUN_1481deb72(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144842084(param_1,local_30);
  lVar1 = FUN_144a8ad80(local_30);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x3c) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = (byte)(*(char *)(param_1 + 0x30) - 3U) < 2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481debdc FUN_1481debdc body=77 status=ok
// SIG undefined FUN_1481debdc(void)

void FUN_1481debdc(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481dec34 FUN_1481dec34 body=59 status=ok
// SIG undefined FUN_1481dec34(void)

void FUN_1481dec34(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x3c)) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar1 = param_1;
    }
    FUN_14006c25a(lVar1,*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  FUN_1481f22c0(param_1);
  return;
}



// FUNCTION 1481dec78 FUN_1481dec78 body=38 status=ok
// SIG undefined FUN_1481dec78(void)

undefined8 FUN_1481dec78(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Plugins",1);
  return param_2;
}



// FUNCTION 1481decec FUN_1481decec body=190 status=ok
// SIG undefined FUN_1481decec(void)

void FUN_1481decec(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x188) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + (longlong)local_24 * 0xb8);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481dedac FUN_1481dedac body=139 status=ok
// SIG undefined FUN_1481dedac(void)

void FUN_1481dedac(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481dee38(param_1,&local_28);
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



// FUNCTION 1481dee38 FUN_1481dee38 body=153 status=ok
// SIG undefined FUN_1481dee38(void)

longlong * FUN_1481dee38(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(param_1 + 0x188);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 != 0) {
      FUN_1402191ca(param_2);
      iVar1 = *(int *)(param_1 + 0x188);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x180);
        lVar4 = 0;
        do {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1446f84a2(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
          lVar4 = lVar4 + 0xb8;
        } while ((longlong)iVar1 * 0xb8 - lVar4 != 0);
      }
    }
  }
  return param_2;
}



// FUNCTION 1481def5e FUN_1481def5e body=415 status=ok
// SIG undefined FUN_1481def5e(void)

void FUN_1481def5e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_1481df0fe(param_1,plVar1,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481df0fe FUN_1481df0fe body=406 status=ok
// SIG undefined FUN_1481df0fe(void)

void FUN_1481df0fe(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  uint *puStack_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  puStack_40 = (uint *)0x0;
  local_58 = param_5;
  FUN_1481f1698(&local_48,param_1,param_4,param_3);
  lVar9 = lStack_30;
  if (lStack_30 != 0) {
    plVar11 = (longlong *)FUN_144741050(lStack_30 + 8);
    lVar12 = DAT_14cb42180;
    if ((DAT_14cb42180 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42180);
    }
    puVar8 = puStack_40;
    if (((*plVar11 == lVar12) && ((short)plVar11[1] == (short)DAT_14cb42188)) &&
       (*(char *)((longlong)plVar11 + 10) == DAT_14cb42188._2_1_)) {
      uVar5 = *puStack_40;
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + uVar5;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar6) < uVar5) {
        FUN_1467ff840(param_2);
      }
      uVar14 = (ulonglong)*puVar8;
      if (0 < (int)*puVar8) {
        lVar12 = 0;
        lVar15 = 0;
        do {
          uVar4 = *(ushort *)(lVar9 + 0xc);
          iVar16 = (int)uVar14 * 4;
          iVar10 = (int)lVar12;
          lVar7 = *(longlong *)(puVar8 + 4);
          uVar1 = *(undefined4 *)(lVar7 + (int)((uVar4 + 3) * iVar16 + iVar10));
          uVar2 = *(undefined4 *)(lVar7 + (int)((uVar4 + 2) * iVar16 + iVar10));
          uVar3 = *(undefined4 *)(lVar7 + (int)((uVar4 + 1) * iVar16 + iVar10));
          lVar13 = *param_2 + ((longlong)iVar6 << 4 | 0xcU);
          *(undefined4 *)(lVar13 + -0xc + lVar12 * 4) =
               *(undefined4 *)(lVar7 + (int)(((int)uVar14 * (uint)uVar4 + (int)lVar15) * 4));
          *(undefined4 *)(lVar13 + -8 + lVar12 * 4) = uVar3;
          *(undefined4 *)(lVar13 + -4 + lVar12 * 4) = uVar2;
          *(undefined4 *)(lVar13 + lVar12 * 4) = uVar1;
          lVar15 = lVar15 + 1;
          uVar14 = (ulonglong)(int)*puVar8;
          lVar12 = lVar12 + 4;
        } while (lVar15 < (longlong)uVar14);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481df296 FUN_1481df296 body=310 status=ok
// SIG undefined FUN_1481df296(void)

void FUN_1481df296(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1481df3ce(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481df3ce FUN_1481df3ce body=302 status=ok
// SIG undefined FUN_1481df3ce(void)

longlong FUN_1481df3ce(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 0x1b0;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0x1a0);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) == param_3) {
        lVar1 = *(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
        lVar2 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar2 + 0x38) < *(int *)(param_2 + 0x38)) goto LAB_1481df4c3;
        lVar3 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
            param_2 + 0x30) {
          lVar3 = lVar1;
        }
        break;
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  else {
LAB_1481df4c3:
    lVar3 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1481df4fe FUN_1481df4fe body=415 status=ok
// SIG undefined FUN_1481df4fe(void)

void FUN_1481df4fe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_1481df69e(param_1,plVar1,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481df69e FUN_1481df69e body=295 status=ok
// SIG undefined FUN_1481df69e(void)

void FUN_1481df69e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  uint *puStack_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  puStack_40 = (uint *)0x0;
  local_58 = param_5;
  FUN_1481f1698(&local_48,param_1,param_4,param_3);
  lVar4 = lStack_30;
  if (lStack_30 != 0) {
    plVar5 = (longlong *)FUN_144741050(lStack_30 + 8);
    lVar6 = DAT_14cb420f0;
    if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420f0);
    }
    puVar3 = puStack_40;
    if (((*plVar5 == lVar6) && ((short)plVar5[1] == (short)DAT_14cb420f8)) &&
       (*(char *)((longlong)plVar5 + 10) == DAT_14cb420f8._2_1_)) {
      uVar1 = *puStack_40;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
        FUN_14475e4ac(param_2,iVar2);
      }
      uVar7 = (ulonglong)*puVar3;
      if (0 < (int)*puVar3) {
        lVar6 = 0;
        do {
          *(undefined4 *)(*param_2 + (longlong)iVar2 * 4 + lVar6 * 4) =
               *(undefined4 *)
                (*(longlong *)(puVar3 + 4) +
                (longlong)(int)(((uint)*(ushort *)(lVar4 + 0xc) * (int)uVar7 + (int)lVar6) * 4));
          lVar6 = lVar6 + 1;
          uVar7 = (ulonglong)(int)*puVar3;
        } while (lVar6 < (longlong)uVar7);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481df7c6 FUN_1481df7c6 body=415 status=ok
// SIG undefined FUN_1481df7c6(void)

void FUN_1481df7c6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_1481df966(param_1,plVar1,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481df966 FUN_1481df966 body=327 status=ok
// SIG undefined FUN_1481df966(void)

void FUN_1481df966(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  uint *puStack_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  puStack_40 = (uint *)0x0;
  local_58 = param_5;
  FUN_1481f1698(&local_48,param_1,param_4,param_3);
  lVar4 = lStack_30;
  if (lStack_30 != 0) {
    plVar6 = (longlong *)FUN_144741050(lStack_30 + 8);
    lVar7 = DAT_14cb421a0;
    if ((DAT_14cb421a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb421a0);
    }
    puVar3 = puStack_40;
    if (((*plVar6 == lVar7) && ((short)plVar6[1] == DAT_14cb421a8)) &&
       (*(char *)((longlong)plVar6 + 10) == DAT_14cb421aa)) {
      uVar1 = *puStack_40;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
        FUN_14814fe70(param_2,iVar2);
      }
      uVar8 = (ulonglong)*puVar3;
      if (0 < (int)*puVar3) {
        iVar5 = 0;
        lVar7 = 0;
        do {
          *(ulonglong *)(*param_2 + (longlong)iVar2 * 8 + lVar7 * 8) =
               CONCAT44(*(undefined4 *)
                         (*(longlong *)(puVar3 + 0xc) +
                         (longlong)(int)(iVar5 + (*(ushort *)(lVar4 + 0x14) + 1) * (int)uVar8 * 4)),
                        *(undefined4 *)
                         (*(longlong *)(puVar3 + 0xc) +
                         (longlong)
                         (int)(((int)uVar8 * (uint)*(ushort *)(lVar4 + 0x14) + (int)lVar7) * 4)));
          lVar7 = lVar7 + 1;
          uVar8 = (ulonglong)(int)*puVar3;
          iVar5 = iVar5 + 4;
        } while (lVar7 < (longlong)uVar8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481dfaae FUN_1481dfaae body=415 status=ok
// SIG undefined FUN_1481dfaae(void)

void FUN_1481dfaae(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_1481dfc4e(param_1,plVar1,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481dfc4e FUN_1481dfc4e body=291 status=ok
// SIG undefined FUN_1481dfc4e(void)

void FUN_1481dfc4e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  uint *puStack_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  puStack_40 = (uint *)0x0;
  local_58 = param_5;
  FUN_1481f1698(&local_48,param_1,param_4,param_3);
  lVar4 = lStack_30;
  if (lStack_30 != 0) {
    plVar5 = (longlong *)FUN_144741050(lStack_30 + 8);
    lVar6 = DAT_14cb420d0;
    if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420d0);
    }
    puVar3 = puStack_40;
    if (((*plVar5 == lVar6) && ((short)plVar5[1] == DAT_14cb420d8)) &&
       (*(char *)((longlong)plVar5 + 10) == DAT_14cb420da)) {
      uVar1 = *puStack_40;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
        FUN_1446f48e2(param_2,iVar2);
      }
      uVar7 = (ulonglong)*puVar3;
      if (0 < (int)*puVar3) {
        lVar6 = 0;
        do {
          *(undefined4 *)(*param_2 + (longlong)iVar2 * 4 + lVar6 * 4) =
               *(undefined4 *)
                (*(longlong *)(puVar3 + 0xc) +
                (longlong)(int)(((uint)*(ushort *)(lVar4 + 0x14) * (int)uVar7 + (int)lVar6) * 4));
          lVar6 = lVar6 + 1;
          uVar7 = (ulonglong)(int)*puVar3;
        } while (lVar6 < (longlong)uVar7);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481dfd78 FUN_1481dfd78 body=498 status=ok
// SIG undefined FUN_1481dfd78(void)

void FUN_1481dfd78(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = iVar1 != 0;
  local_60 = local_50;
  FUN_1481dff6c(param_1,plVar2,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481dff6c FUN_1481dff6c body=902 status=ok
// SIG undefined FUN_1481dff6c(void)

void FUN_1481dff6c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined4 param_6)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint *puVar17;
  longlong lVar18;
  longlong *plVar19;
  double *pdVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  double *local_e8;
  uint *puStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = 0;
  lStack_d0 = 0;
  local_e8 = (double *)0x0;
  puStack_e0 = (uint *)0x0;
  local_f8 = param_6;
  FUN_1481f1698(&local_e8,param_1,param_4,param_3);
  lVar18 = lStack_d0;
  if (lStack_d0 != 0) {
    plVar19 = (longlong *)FUN_144741050(lStack_d0 + 8);
    lVar21 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    puVar17 = puStack_e0;
    if (((*plVar19 == lVar21) && ((short)plVar19[1] == DAT_14cb42138)) &&
       (*(char *)((longlong)plVar19 + 10) == DAT_14cb4213a)) {
      if ((param_5 == '\0') || (*(char *)(local_d8 + 0x26) != '\x01')) {
        dVar29 = (double)*(float *)(local_e8 + 0xd) * 65536.0;
        dVar26 = (double)*(float *)((longlong)local_e8 + 100) * 65536.0;
        dVar7 = (double)*(float *)(local_e8 + 0xc) * 65536.0;
        pdVar20 = (double *)&DAT_14c846480;
      }
      else {
        dVar7 = local_e8[4];
        dVar26 = local_e8[5];
        dVar29 = local_e8[6];
        pdVar20 = local_e8;
      }
      dVar10 = *pdVar20;
      dVar11 = pdVar20[1];
      dVar15 = pdVar20[2];
      dVar16 = pdVar20[3];
      dVar12 = pdVar20[8];
      dVar13 = pdVar20[9];
      dVar14 = pdVar20[10];
      uVar2 = *puStack_e0;
      iVar22 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar22 + uVar2;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar22) < uVar2) {
        FUN_1403e3958();
      }
      uVar24 = (ulonglong)*puVar17;
      if (0 < (int)*puVar17) {
        lVar21 = (longlong)iVar22 * 6 + 4;
        iVar22 = 0;
        lVar23 = 0;
        do {
          uVar1 = *(ushort *)(lVar18 + 0xc);
          iVar25 = (int)uVar24 * 4;
          lVar3 = *(longlong *)(puVar17 + 4);
          dVar5 = (double)*(float *)(lVar3 + (int)(((int)uVar24 * (uint)uVar1 + (int)lVar23) * 4)) *
                  dVar12;
          dVar6 = (double)*(float *)(lVar3 + (int)((uVar1 + 1) * iVar25 + iVar22)) * dVar13;
          dVar27 = (double)*(float *)(lVar3 + (int)((uVar1 + 2) * iVar25 + iVar22)) * dVar14;
          dVar28 = dVar6 * dVar10 - dVar11 * dVar5;
          dVar8 = dVar27 * dVar11 - dVar15 * dVar6;
          dVar9 = dVar5 * dVar15 - dVar10 * dVar27;
          dVar8 = dVar8 + dVar8;
          dVar9 = dVar9 + dVar9;
          dVar28 = dVar28 + dVar28;
          dVar6 = (dVar15 * dVar8 - dVar10 * dVar28) + dVar16 * dVar9 + dVar6 + dVar26;
          lVar3 = *param_2;
          auVar4._8_4_ = SUB84(dVar6,0);
          auVar4._0_8_ = (dVar28 * dVar11 - dVar9 * dVar15) + dVar16 * dVar8 + dVar5 + dVar7;
          auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          *(undefined1 (*) [16])(lVar3 + -0x10 + lVar21 * 4) = auVar4;
          *(double *)(lVar3 + lVar21 * 4) =
               dVar28 * dVar16 + dVar27 + (dVar9 * dVar10 - dVar8 * dVar11) + dVar29;
          lVar23 = lVar23 + 1;
          uVar24 = (ulonglong)(int)*puVar17;
          lVar21 = lVar21 + 6;
          iVar22 = iVar22 + 4;
        } while (lVar23 < (longlong)uVar24);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e02f4 FUN_1481e02f4 body=655 status=ok
// SIG undefined FUN_1481e02f4(void)

void FUN_1481e02f4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118 [13];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar5 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  uVar1 = local_a0;
  local_128 = local_a8;
  local_120 = local_ac;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_98;
  puVar4 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1481e0584(param_1,plVar5,local_118,uVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e0584 FUN_1481e0584 body=2791 status=ok
// SIG undefined FUN_1481e0584(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481e0584(undefined8 param_1,longlong *param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double *local_2a8;
  uint *puStack_2a0;
  longlong local_298;
  longlong lStack_290;
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
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_298 = 0;
  lStack_290 = 0;
  local_2a8 = (double *)0x0;
  puStack_2a0 = (uint *)0x0;
  local_2d8 = param_6;
  FUN_1481f1698(&local_2a8,param_1,param_5);
  lVar5 = lStack_290;
  uVar9 = (undefined4)param_1;
  if (lStack_290 != 0) {
    iVar8 = (int)lStack_290 + 8;
    plVar6 = (longlong *)FUN_144741050();
    lVar7 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      lVar11 = DAT_14cb42130;
      FUN_1456cec3c();
      iVar8 = (int)lVar11;
    }
    auVar42 = _DAT_149934d80;
    if (((*plVar6 == lVar7) && ((short)plVar6[1] == DAT_14cb42138)) &&
       (*(char *)((longlong)plVar6 + 10) == DAT_14cb4213a)) {
      if (*(char *)(local_298 + 0x26) == '\x01') {
        dVar38 = *param_3;
        dVar39 = param_3[1];
        auVar42 = *(undefined1 (*) [16])(param_3 + 2);
        dVar24 = param_3[8];
        dVar26 = param_3[9];
        dVar36 = param_3[10];
        local_108 = param_3[4];
        dStack_100 = param_3[5];
        local_f8 = param_3[6];
      }
      else {
        auVar18 = *(undefined1 (*) [16])(local_2a8 + 8);
        auVar19 = *(undefined1 (*) [16])(local_2a8 + 10);
        lVar7 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_));
        auVar32._8_4_ = (int)lVar7;
        auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_));
        auVar32._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
        iVar8 = movmskpd(iVar8,auVar32);
        lVar7 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar19._8_8_));
        auVar34._8_4_ = (int)lVar7;
        auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar19._0_8_));
        auVar34._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
        uVar10 = movmskpd(uVar9,auVar34);
        auVar14 = _DAT_14c8464c0;
        auVar37 = _DAT_14c8464d0;
        dVar36 = DAT_14c846490;
        dVar31 = DAT_14c846498;
        dVar35 = DAT_14c8464b0;
        dVar30 = DAT_14c846480;
        dVar33 = DAT_14c846488;
        dVar29 = DAT_14c8464a0;
        dVar27 = DAT_14c8464a8;
        if ((uVar10 & 0x3fffffff) != 0 || iVar8 != 0) {
          auVar34 = divpd(_DAT_149934d80,auVar18);
          auVar32 = divpd(ZEXT816(0x3ff0000000000000),auVar19);
          auVar14._0_8_ =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_)) & auVar34._0_8_);
          auVar14._8_8_ =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_)) & auVar34._8_8_);
          dVar35 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar19._0_8_)) & auVar32._0_8_)
          ;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = dVar35;
          dVar36 = local_2a8[2] * -1.0;
          dVar31 = local_2a8[3] * 1.0;
          dVar30 = -*local_2a8;
          dVar33 = -local_2a8[1];
          dVar29 = local_2a8[4] * auVar14._0_8_;
          dVar40 = local_2a8[5] * auVar14._8_8_;
          dVar35 = local_2a8[6] * dVar35;
          dVar24 = dVar40 * dVar30 - dVar33 * dVar29;
          dVar26 = dVar35 * dVar33 - dVar36 * dVar40;
          dVar27 = dVar29 * dVar36 - dVar30 * dVar35;
          dVar26 = dVar26 + dVar26;
          dVar27 = dVar27 + dVar27;
          dVar24 = dVar24 + dVar24;
          dVar35 = 0.0 - (dVar31 * dVar24 + dVar35 + (dVar27 * dVar30 - dVar26 * dVar33));
          dVar29 = 0.0 - ((dVar24 * dVar33 - dVar27 * dVar36) + dVar31 * dVar26 + dVar29);
          dVar27 = 0.0 - (dVar24 * *local_2a8 + dVar36 * dVar26 + dVar31 * dVar27 + dVar40);
        }
        local_2b8 = *(undefined1 (*) [16])(param_3 + 8);
        local_2c8 = *(undefined1 (*) [16])(param_3 + 10);
        auVar18 = minpd(local_2b8,auVar14);
        auVar32 = minpd(local_2c8,auVar37);
        auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
        auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
        iVar13 = movmskpd((int)local_2a8,auVar19);
        auVar18._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar18._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        uVar10 = movmskpd(iVar8,auVar18);
        dVar26 = auVar14._8_8_;
        dVar24 = auVar14._0_8_;
        dVar40 = auVar37._0_8_;
        if ((uVar10 & 0x3fffffff) == 0 && iVar13 == 0) {
          dVar23 = *param_3;
          dVar21 = param_3[1];
          dVar17 = param_3[2];
          dVar25 = param_3[3];
          dVar38 = dVar21 * dVar36 * -1.0 +
                   dVar17 * dVar33 + dVar30 * dVar25 * 1.0 + dVar31 * dVar23;
          dVar39 = dVar23 * dVar36 * 1.0 +
                   dVar25 * dVar33 + dVar30 * dVar17 * -1.0 + dVar31 * dVar21;
          auVar42._0_8_ =
               dVar25 * dVar36 * 1.0 + ((dVar30 * dVar21 * 1.0 + dVar31 * dVar17) - dVar33 * dVar23)
          ;
          auVar42._8_8_ =
               dVar17 * dVar36 * -1.0 +
               ((dVar30 * dVar23 * -1.0 + dVar31 * dVar25) - dVar33 * dVar21);
          dVar25 = param_3[4] * dVar24;
          dVar28 = param_3[5] * dVar26;
          dVar41 = param_3[6] * dVar40;
          dVar21 = dVar28 * dVar30 - dVar33 * dVar25;
          dVar17 = dVar41 * dVar33 - dVar36 * dVar28;
          dVar23 = dVar25 * dVar36 - dVar30 * dVar41;
          dVar17 = dVar17 + dVar17;
          dVar23 = dVar23 + dVar23;
          dVar21 = dVar21 + dVar21;
          local_108 = dVar29 + (dVar21 * dVar33 - dVar36 * dVar23) + dVar31 * dVar17 + dVar25;
          dStack_100 = dVar27 + (dVar17 * dVar36 - dVar21 * dVar30) + dVar31 * dVar23 + dVar28;
          local_f8 = dVar35 + (dVar23 * dVar30 - dVar33 * dVar17) + dVar31 * dVar21 + dVar41;
          dVar24 = (double)local_2b8._0_8_ * dVar24;
          dVar26 = (double)local_2b8._8_8_ * dVar26;
          dVar36 = (double)local_2c8._0_8_ * dVar40;
        }
        else {
          dVar38 = dVar33 + dVar33;
          dVar25 = dVar36 + dVar36;
          dVar17 = dVar30 * (dVar30 + dVar30);
          local_1e8 = ((double)DAT_149934d80 - (dVar36 * dVar25 + dVar33 * dVar38)) * dVar24;
          dVar23 = (DAT_149934d80._8_8_ - (dVar36 * dVar25 + dVar17)) * dVar26;
          dVar28 = (dVar30 + dVar30) * dVar31;
          dVar21 = (dVar25 * dVar33 - dVar28) * dVar40;
          local_198 = (1.0 - (dVar17 + dVar33 * dVar38)) * dVar40;
          dVar36 = dVar40 * (double)local_2c8._0_8_;
          dStack_1e0 = (dVar38 * dVar30 + dVar25 * dVar31) * dVar24;
          local_1b8 = (dVar25 * dVar33 + dVar28) * dVar26;
          local_1d8 = (dVar30 * dVar25 - dVar38 * dVar31) * dVar24;
          uStack_1d0 = 0;
          local_1c8._8_4_ = SUB84(dVar23,0);
          local_1c8._0_8_ = (dVar38 * dVar30 - dVar25 * dVar31) * dVar26;
          local_1c8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          uStack_1b0 = 0;
          local_1a8._8_4_ = SUB84(dVar21,0);
          local_1a8._0_8_ = (dVar30 * dVar25 + dVar38 * dVar31) * dVar40;
          local_1a8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          uStack_190 = 0;
          uStack_170 = 0x3ff0000000000000;
          dVar23 = *param_3;
          dVar21 = param_3[1];
          dVar17 = param_3[2];
          dVar28 = dVar21 + dVar21;
          dVar30 = dVar17 + dVar17;
          dVar25 = dVar23 * (dVar23 + dVar23);
          local_218 = (1.0 - (dVar25 + dVar21 * dVar28)) * (double)local_2c8._0_8_;
          dVar31 = param_3[3];
          dVar33 = dVar30 * dVar31;
          dVar40 = (dVar23 + dVar23) * param_3[3];
          dVar31 = dVar28 * dVar31;
          local_228 = (dVar31 + *param_3 * dVar30) * (double)local_2c8._0_8_;
          local_248 = (dVar28 * dVar23 - dVar33) * (double)local_2b8._8_8_;
          dStack_220 = (dVar30 * dVar21 - dVar40) * (double)local_2c8._0_8_;
          dVar24 = dVar24 * (double)local_2b8._0_8_;
          dVar26 = dVar26 * (double)local_2b8._8_8_;
          local_268 = ((double)DAT_149934d80 - (dVar17 * dVar30 + dVar21 * dVar28)) *
                      (double)local_2b8._0_8_;
          dStack_240 = (DAT_149934d80._8_8_ - (dVar17 * dVar30 + dVar25)) * (double)local_2b8._8_8_;
          dStack_260 = (dVar28 * dVar23 + dVar33) * (double)local_2b8._0_8_;
          local_238 = (dVar30 * dVar21 + dVar40) * (double)local_2b8._8_8_;
          local_258 = (*param_3 * dVar30 - dVar31) * (double)local_2b8._0_8_;
          uStack_250 = 0;
          uStack_230 = 0;
          uStack_210 = 0;
          local_208 = param_3[4];
          dStack_200 = param_3[5];
          local_1f8 = param_3[6];
          uStack_1f0 = 0x3ff0000000000000;
          local_188 = dVar29;
          dStack_180 = dVar27;
          local_178 = dVar35;
          FUN_1447fea8d(&local_168);
          FUN_144a1c686(&local_168,0x3e45798ee0000000);
          auVar15._8_8_ = -(ulonglong)(0.0 <= dVar26);
          auVar15._0_8_ = -(ulonglong)(0.0 <= dVar24);
          auVar18 = blendvpd(_DAT_149936790,auVar42,auVar15);
          dVar31 = (double)(~-(ulonglong)(0.0 <= dVar36) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar36) & 0x3ff0000000000000);
          dVar35 = auVar18._0_8_;
          local_158 = local_158 * dVar35;
          local_160 = local_160 * dVar35;
          local_168 = local_168 * dVar35;
          dVar35 = auVar18._8_8_;
          local_138 = local_138 * dVar35;
          local_140 = local_140 * dVar35;
          local_148 = dVar35 * local_148;
          local_118 = local_118 * dVar31;
          local_120 = local_120 * dVar31;
          local_128 = dVar31 * local_128;
          FUN_14481fd10(&local_288);
          auVar20._0_8_ = local_288 * local_288;
          auVar20._8_8_ = dStack_280 * dStack_280;
          dVar31 = local_278 * local_278 + auVar20._0_8_;
          dVar35 = dStack_270 * dStack_270 + auVar20._8_8_;
          auVar22._0_8_ = dVar31 + dVar35;
          auVar22._8_8_ = dVar31 + dVar35;
          auVar18 = sqrtpd(auVar20,auVar22);
          auVar42 = divpd(auVar42,auVar18);
          auVar43._0_8_ = auVar42._0_8_ * local_278;
          auVar43._8_8_ = auVar42._8_8_ * dStack_270;
          dVar38 = (double)((ulonglong)(local_288 * auVar42._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
          dVar39 = (double)((ulonglong)(dStack_280 * auVar42._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
          auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
          auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
          auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar16);
        }
      }
      puVar4 = puStack_2a0;
      uVar10 = *puStack_2a0;
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + uVar10;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar8) < uVar10) {
        FUN_1403e3958();
      }
      uVar12 = (ulonglong)*puVar4;
      if (0 < (int)*puVar4) {
        dVar31 = auVar42._0_8_;
        dVar35 = auVar42._8_8_;
        lVar7 = (longlong)iVar8 * 6 + 4;
        iVar8 = 0;
        lVar11 = 0;
        do {
          uVar1 = *(ushort *)(lVar5 + 0xc);
          iVar13 = (int)uVar12 * 4;
          lVar2 = *(longlong *)(puVar4 + 4);
          dVar30 = (double)*(float *)(lVar2 + (int)(((int)uVar12 * (uint)uVar1 + (int)lVar11) * 4))
                   * dVar24;
          dVar33 = (double)*(float *)(lVar2 + (int)((uVar1 + 1) * iVar13 + iVar8)) * dVar26;
          dVar23 = (double)*(float *)(lVar2 + (int)((uVar1 + 2) * iVar13 + iVar8)) * dVar36;
          dVar29 = dVar33 * dVar38 - dVar39 * dVar30;
          dVar27 = dVar23 * dVar39 - dVar31 * dVar33;
          dVar40 = dVar30 * dVar31 - dVar38 * dVar23;
          dVar27 = dVar27 + dVar27;
          dVar40 = dVar40 + dVar40;
          dVar29 = dVar29 + dVar29;
          dVar33 = (dVar31 * dVar27 - dVar38 * dVar29) + dVar35 * dVar40 + dVar33 + dStack_100;
          lVar2 = *param_2;
          auVar3._8_4_ = SUB84(dVar33,0);
          auVar3._0_8_ = (dVar29 * dVar39 - dVar40 * dVar31) + dVar35 * dVar27 + dVar30 + local_108;
          auVar3._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
          *(undefined1 (*) [16])(lVar2 + -0x10 + lVar7 * 4) = auVar3;
          *(double *)(lVar2 + lVar7 * 4) =
               dVar29 * dVar35 + dVar23 + (dVar40 * dVar38 - dVar27 * dVar39) + local_f8;
          lVar11 = lVar11 + 1;
          uVar12 = (ulonglong)(int)*puVar4;
          lVar7 = lVar7 + 6;
          iVar8 = iVar8 + 4;
        } while (lVar11 < (longlong)uVar12);
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e1072 FUN_1481e1072 body=498 status=ok
// SIG undefined FUN_1481e1072(void)

void FUN_1481e1072(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = iVar1 != 0;
  local_60 = local_50;
  FUN_1481e1266(param_1,plVar2,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e1266 FUN_1481e1266 body=869 status=ok
// SIG undefined FUN_1481e1266(void)

void FUN_1481e1266(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint *puVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  double dVar28;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  double *local_b8;
  uint *puStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  lStack_a0 = 0;
  local_b8 = (double *)0x0;
  puStack_b0 = (uint *)0x0;
  local_c8 = param_6;
  FUN_1481f1698(&local_b8,param_1,param_4,param_3);
  lVar19 = lStack_a0;
  if (lStack_a0 != 0) {
    plVar21 = (longlong *)FUN_144741050(lStack_a0 + 8);
    lVar22 = DAT_14cb42190;
    if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42190);
    }
    puVar18 = puStack_b0;
    if (((*plVar21 == lVar22) && ((short)plVar21[1] == DAT_14cb42198)) &&
       (*(char *)((longlong)plVar21 + 10) == DAT_14cb4219a)) {
      uVar5 = *puStack_b0;
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + uVar5;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar6) < uVar5) {
        FUN_140e16be0();
      }
      if ((param_5 == '\0') || (*(char *)(local_a8 + 0x26) != '\x01')) {
        uVar26 = (ulonglong)*puVar18;
        if (0 < (int)*puVar18) {
          lVar22 = 0;
          lVar23 = 0;
          do {
            uVar4 = *(ushort *)(lVar19 + 0xc);
            iVar27 = (int)uVar26 * 4;
            iVar20 = (int)lVar22;
            lVar25 = *(longlong *)(puVar18 + 4);
            fVar1 = *(float *)(lVar25 + (int)((uVar4 + 3) * iVar27 + iVar20));
            fVar2 = *(float *)(lVar25 + (int)((uVar4 + 2) * iVar27 + iVar20));
            fVar3 = *(float *)(lVar25 + (int)((uVar4 + 1) * iVar27 + iVar20));
            lVar24 = *param_2 + ((longlong)iVar6 << 5 | 0x18U);
            *(double *)(lVar24 + -0x18 + lVar22 * 8) =
                 (double)*(float *)(lVar25 + (int)(((int)uVar26 * (uint)uVar4 + (int)lVar23) * 4));
            *(double *)(lVar24 + -0x10 + lVar22 * 8) = (double)fVar3;
            *(double *)(lVar24 + -8 + lVar22 * 8) = (double)fVar2;
            *(double *)(lVar24 + lVar22 * 8) = (double)fVar1;
            lVar23 = lVar23 + 1;
            uVar26 = (ulonglong)(int)*puVar18;
            lVar22 = lVar22 + 4;
          } while (lVar23 < (longlong)uVar26);
        }
      }
      else {
        uVar26 = (ulonglong)*puVar18;
        if (0 < (int)*puVar18) {
          lVar22 = 0;
          lVar23 = 0;
          do {
            uVar4 = *(ushort *)(lVar19 + 0xc);
            iVar27 = (int)uVar26 * 4;
            iVar20 = (int)lVar22;
            lVar25 = *(longlong *)(puVar18 + 4);
            dVar8 = (double)*(float *)(lVar25 + (int)((uVar4 + 3) * iVar27 + iVar20));
            dVar28 = (double)*(float *)(lVar25 + (int)((uVar4 + 2) * iVar27 + iVar20));
            dVar11 = (double)*(float *)(lVar25 + (int)((uVar4 + 1) * iVar27 + iVar20));
            dVar10 = (double)*(float *)(lVar25 + (int)(((int)uVar26 * (uint)uVar4 + (int)lVar23) * 4
                                                      ));
            dVar14 = *local_b8;
            dVar15 = local_b8[1];
            dVar16 = local_b8[2];
            dVar17 = local_b8[3];
            dVar13 = dVar14 * dVar28 * 1.0 +
                     dVar17 * dVar11 + dVar10 * dVar16 * -1.0 + dVar8 * dVar15;
            dVar9 = dVar16 * dVar28 * -1.0 +
                    ((dVar10 * dVar14 * -1.0 + dVar8 * dVar17) - dVar11 * dVar15);
            lVar25 = *param_2 + ((longlong)iVar6 << 5 | 0x10U);
            auVar12._8_4_ = SUB84(dVar13,0);
            auVar12._0_8_ =
                 dVar15 * dVar28 * -1.0 + dVar16 * dVar11 + dVar10 * dVar17 * 1.0 + dVar8 * dVar14;
            auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            *(undefined1 (*) [16])(lVar25 + -0x10 + lVar22 * 8) = auVar12;
            auVar7._8_4_ = SUB84(dVar9,0);
            auVar7._0_8_ = dVar17 * dVar28 * 1.0 +
                           ((dVar10 * dVar15 * 1.0 + dVar8 * dVar16) - dVar11 * dVar14);
            auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            *(undefined1 (*) [16])(lVar25 + lVar22 * 8) = auVar7;
            lVar23 = lVar23 + 1;
            uVar26 = (ulonglong)(int)*puVar18;
            lVar22 = lVar22 + 4;
          } while (lVar23 < (longlong)uVar26);
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e15cc FUN_1481e15cc body=536 status=ok
// SIG undefined FUN_1481e15cc(void)

void FUN_1481e15cc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_a0 = local_6c;
  local_a8 = local_68;
  FUN_1481e17e6(param_1,plVar1,&local_98,local_60);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e17e6 FUN_1481e17e6 body=919 status=ok
// SIG undefined FUN_1481e17e6(void)

void FUN_1481e17e6(undefined8 param_1,longlong *param_2,double *param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6)

{
  double dVar1;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
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
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  double dVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  double *local_c8;
  uint *puStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  lStack_b0 = 0;
  local_c8 = (double *)0x0;
  puStack_c0 = (uint *)0x0;
  local_d8 = param_6;
  FUN_1481f1698(&local_c8,param_1,param_5);
  lVar18 = lStack_b0;
  if (lStack_b0 != 0) {
    plVar20 = (longlong *)FUN_144741050(lStack_b0 + 8);
    lVar21 = DAT_14cb42190;
    if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42190);
    }
    puVar17 = puStack_c0;
    if (((*plVar20 == lVar21) && ((short)plVar20[1] == DAT_14cb42198)) &&
       (*(char *)((longlong)plVar20 + 10) == DAT_14cb4219a)) {
      if ((*(char *)(local_b8 + 0x26) == '\0') && ((longlong)*(int *)(local_b8 + 0x38) != 0)) {
        lVar21 = 0;
        do {
          if (*(longlong *)(*(longlong *)(local_b8 + 0x30) + lVar21) == param_4) {
            dVar15 = *local_c8;
            dVar16 = local_c8[1];
            dVar14 = local_c8[2] * -1.0;
            dVar26 = local_c8[3] * 1.0;
            dVar1 = param_3[3];
            dVar2 = param_3[3];
            dVar7 = param_3[1];
            dVar8 = param_3[1];
            dVar12 = param_3[2];
            dVar13 = param_3[2];
            dVar9 = (dVar14 * dVar7 + (*param_3 * dVar26 * 1.0 - dVar1 * dVar15)) -
                    dVar16 * dVar12 * -1.0;
            dVar10 = (dVar26 * dVar8 + (*param_3 * dVar14 * -1.0 - dVar2 * dVar16)) -
                     dVar15 * dVar13 * 1.0;
            dVar1 = dVar26 * dVar12 * 1.0 +
                    dVar15 * dVar7 + (dVar14 * dVar1 - *param_3 * dVar16 * 1.0);
            dVar2 = dVar14 * dVar13 * -1.0 +
                    dVar16 * dVar8 + (dVar26 * dVar2 - *param_3 * dVar15 * -1.0);
            goto LAB_1481e1934;
          }
          lVar21 = lVar21 + 8;
        } while ((longlong)*(int *)(local_b8 + 0x38) * 8 != lVar21);
      }
      dVar9 = *param_3;
      dVar10 = param_3[1];
      dVar1 = param_3[2];
      dVar2 = param_3[3];
LAB_1481e1934:
      uVar4 = *puStack_c0;
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + uVar4;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar5) < uVar4) {
        FUN_140e16be0(param_2,iVar5);
      }
      uVar24 = (ulonglong)*puVar17;
      if (0 < (int)*puVar17) {
        lVar21 = 0;
        lVar22 = 0;
        do {
          uVar3 = *(ushort *)(lVar18 + 0xc);
          iVar25 = (int)uVar24 * 4;
          iVar19 = (int)lVar21;
          lVar23 = *(longlong *)(puVar17 + 4);
          dVar26 = (double)*(float *)(lVar23 + (int)((uVar3 + 3) * iVar25 + iVar19));
          dVar7 = (double)*(float *)(lVar23 + (int)((uVar3 + 2) * iVar25 + iVar19));
          dVar12 = (double)*(float *)(lVar23 + (int)((uVar3 + 1) * iVar25 + iVar19));
          dVar14 = (double)*(float *)(lVar23 + (int)(((int)uVar24 * (uint)uVar3 + (int)lVar22) * 4))
          ;
          dVar13 = dVar9 * dVar7 * 1.0 + dVar2 * dVar12 + dVar1 * dVar14 * -1.0 + dVar10 * dVar26;
          dVar8 = dVar7 * dVar1 * -1.0 +
                  ((dVar14 * dVar9 * -1.0 + dVar26 * dVar2) - dVar12 * dVar10);
          lVar23 = *param_2 + ((longlong)iVar5 << 5 | 0x10U);
          auVar11._8_4_ = SUB84(dVar13,0);
          auVar11._0_8_ =
               dVar10 * dVar7 * -1.0 + dVar1 * dVar12 + dVar2 * dVar14 * 1.0 + dVar9 * dVar26;
          auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          *(undefined1 (*) [16])(lVar23 + -0x10 + lVar21 * 8) = auVar11;
          auVar6._8_4_ = SUB84(dVar8,0);
          auVar6._0_8_ = dVar7 * dVar2 * 1.0 +
                         ((dVar14 * dVar10 * 1.0 + dVar26 * dVar1) - dVar12 * dVar9);
          auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          *(undefined1 (*) [16])(lVar23 + lVar21 * 8) = auVar6;
          lVar22 = lVar22 + 1;
          uVar24 = (ulonglong)(int)*puVar17;
          lVar21 = lVar21 + 4;
        } while (lVar22 < (longlong)uVar24);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e1b7e FUN_1481e1b7e body=415 status=ok
// SIG undefined FUN_1481e1b7e(void)

void FUN_1481e1b7e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_1481e1d1e(param_1,plVar1,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e1d1e FUN_1481e1d1e body=340 status=ok
// SIG undefined FUN_1481e1d1e(void)

void FUN_1481e1d1e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  uint *puStack_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  puStack_40 = (uint *)0x0;
  local_58 = param_5;
  FUN_1481f1698(&local_48,param_1,param_4,param_3);
  lVar5 = lStack_30;
  if (lStack_30 != 0) {
    plVar6 = (longlong *)FUN_144741050(lStack_30 + 8);
    lVar7 = DAT_14cb42110;
    if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42110);
    }
    puVar4 = puStack_40;
    if (((*plVar6 == lVar7) && ((short)plVar6[1] == (short)DAT_14cb42118)) &&
       (*(char *)((longlong)plVar6 + 10) == DAT_14cb42118._2_1_)) {
      uVar2 = *puStack_40;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + uVar2;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar2) {
        FUN_14489624a(param_2);
      }
      uVar9 = (ulonglong)*puVar4;
      if (0 < (int)*puVar4) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          fVar1 = *(float *)(*(longlong *)(puVar4 + 4) +
                            (longlong)
                            (int)((int)lVar7 + (*(ushort *)(lVar5 + 0xc) + 1) * (int)uVar9 * 4));
          lVar8 = *param_2 + ((longlong)iVar3 << 4 | 8U);
          *(double *)(lVar8 + -8 + lVar7 * 4) =
               (double)*(float *)(*(longlong *)(puVar4 + 4) +
                                 (longlong)
                                 (int)(((int)uVar9 * (uint)*(ushort *)(lVar5 + 0xc) + (int)lVar10) *
                                      4));
          *(double *)(lVar8 + lVar7 * 4) = (double)fVar1;
          lVar10 = lVar10 + 1;
          uVar9 = (ulonglong)(int)*puVar4;
          lVar7 = lVar7 + 4;
        } while (lVar10 < (longlong)uVar9);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e1e74 FUN_1481e1e74 body=415 status=ok
// SIG undefined FUN_1481e1e74(void)

void FUN_1481e1e74(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_1481e2014(param_1,plVar1,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e2014 FUN_1481e2014 body=422 status=ok
// SIG undefined FUN_1481e2014(void)

void FUN_1481e2014(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  uint *puStack_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  puStack_50 = (uint *)0x0;
  local_68 = param_5;
  FUN_1481f1698(&local_58,param_1,param_4,param_3);
  lVar9 = lStack_40;
  if (lStack_40 != 0) {
    plVar11 = (longlong *)FUN_144741050(lStack_40 + 8);
    lVar12 = DAT_14cb42160;
    if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42160);
    }
    puVar8 = puStack_50;
    if (((*plVar11 == lVar12) && ((short)plVar11[1] == (short)DAT_14cb42168)) &&
       (*(char *)((longlong)plVar11 + 10) == DAT_14cb42168._2_1_)) {
      uVar5 = *puStack_50;
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + uVar5;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar6) < uVar5) {
        FUN_147ca659c(param_2,iVar6);
      }
      uVar15 = (ulonglong)*puVar8;
      if (0 < (int)*puVar8) {
        lVar12 = 0;
        lVar13 = 0;
        do {
          uVar4 = *(ushort *)(lVar9 + 0xc);
          iVar16 = (int)uVar15 * 4;
          iVar10 = (int)lVar12;
          lVar7 = *(longlong *)(puVar8 + 4);
          fVar1 = *(float *)(lVar7 + (int)((uVar4 + 3) * iVar16 + iVar10));
          fVar2 = *(float *)(lVar7 + (int)((uVar4 + 2) * iVar16 + iVar10));
          fVar3 = *(float *)(lVar7 + (int)((uVar4 + 1) * iVar16 + iVar10));
          lVar14 = *param_2 + ((longlong)iVar6 << 5 | 0x18U);
          *(double *)(lVar14 + -0x18 + lVar12 * 8) =
               (double)*(float *)(lVar7 + (int)(((int)uVar15 * (uint)uVar4 + (int)lVar13) * 4));
          *(double *)(lVar14 + -0x10 + lVar12 * 8) = (double)fVar3;
          *(double *)(lVar14 + -8 + lVar12 * 8) = (double)fVar2;
          *(double *)(lVar14 + lVar12 * 8) = (double)fVar1;
          lVar13 = lVar13 + 1;
          uVar15 = (ulonglong)(int)*puVar8;
          lVar12 = lVar12 + 4;
        } while (lVar13 < (longlong)uVar15);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e21bc FUN_1481e21bc body=415 status=ok
// SIG undefined FUN_1481e21bc(void)

void FUN_1481e21bc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_1481e235c(param_1,plVar1,local_40,local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e235c FUN_1481e235c body=382 status=ok
// SIG undefined FUN_1481e235c(void)

void FUN_1481e235c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  uint *puStack_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  puStack_50 = (uint *)0x0;
  local_68 = param_5;
  FUN_1481f1698(&local_58,param_1,param_4,param_3);
  lVar8 = lStack_40;
  if (lStack_40 != 0) {
    plVar9 = (longlong *)FUN_144741050(lStack_40 + 8);
    lVar10 = DAT_14cb42140;
    if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42140);
    }
    puVar7 = puStack_50;
    if (((*plVar9 == lVar10) && ((short)plVar9[1] == (short)DAT_14cb42148)) &&
       (*(char *)((longlong)plVar9 + 10) == DAT_14cb42148._2_1_)) {
      uVar4 = *puStack_50;
      iVar11 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar11 + uVar4;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar11) < uVar4) {
        FUN_1403e3958(param_2,iVar11);
      }
      uVar12 = (ulonglong)*puVar7;
      if (0 < (int)*puVar7) {
        lVar10 = (longlong)iVar11 * 6 + 4;
        iVar11 = 0;
        lVar13 = 0;
        do {
          uVar3 = *(ushort *)(lVar8 + 0xc);
          iVar14 = (int)uVar12 * 4;
          lVar5 = *(longlong *)(puVar7 + 4);
          fVar1 = *(float *)(lVar5 + (int)((uVar3 + 2) * iVar14 + iVar11));
          fVar2 = *(float *)(lVar5 + (int)((uVar3 + 1) * iVar14 + iVar11));
          lVar6 = *param_2;
          *(double *)(lVar6 + -0x10 + lVar10 * 4) =
               (double)*(float *)(lVar5 + (int)(((int)uVar12 * (uint)uVar3 + (int)lVar13) * 4));
          *(double *)(lVar6 + -8 + lVar10 * 4) = (double)fVar2;
          *(double *)(lVar6 + lVar10 * 4) = (double)fVar1;
          lVar13 = lVar13 + 1;
          uVar12 = (ulonglong)(int)*puVar7;
          lVar10 = lVar10 + 6;
          iVar11 = iVar11 + 4;
        } while (lVar13 < (longlong)uVar12);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e24f2 FUN_1481e24f2 body=283 status=ok
// SIG undefined FUN_1481e24f2(void)

void FUN_1481e24f2(uint *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_1;
  local_78 = (ulonglong)(*(ushort *)(param_2 + 0x20) * uVar2);
  local_70 = (ulonglong)(*(ushort *)(param_2 + 0x22) * uVar2);
  local_68 = (ulonglong)(*(ushort *)(param_2 + 0x24) * uVar2);
  local_60 = (ulonglong)param_1[2];
  local_58 = (ulonglong)uVar2;
  if (*(char *)(param_2 + 0x27) == '\0') {
    local_58 = 0;
  }
  local_50 = 0;
  local_48 = local_78 * 4;
  lVar1 = local_48 + local_70 * 2;
  local_40 = local_48 + local_70 * 2 + 3 & 0x7fffffffc;
  local_38 = lVar1 + local_68 * 4 + 3 & 0xffffffffc;
  local_30 = lVar1 + (local_68 + local_60) * 4 + 3 & 0xffffffffc;
  lVar1 = local_30 + local_58 * 4;
  local_28 = lVar1;
  FUN_1427d88a6(param_1 + 0x1c);
  uVar3 = FUN_14001cc68(lVar1,0);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x1a) = lVar1;
  FUN_1481e260e(&local_78,param_1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e260e FUN_1481e260e body=169 status=ok
// SIG undefined FUN_1481e260e(void)

undefined8 FUN_1481e260e(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x1a);
  lVar2 = *(longlong *)(param_1 + 0x14);
  if (lVar1 == lVar2) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    iVar4 = *param_1;
    *(longlong *)(param_2 + 4) = *(longlong *)(param_1 + 10) + lVar3;
    param_2[6] = iVar4 << 2;
    iVar4 = param_1[2];
    *(longlong *)(param_2 + 8) = *(longlong *)(param_1 + 0xc) + lVar3;
    param_2[10] = iVar4 * 2;
    iVar4 = param_1[4];
    *(longlong *)(param_2 + 0xc) = *(longlong *)(param_1 + 0xe) + lVar3;
    param_2[0xe] = iVar4 << 2;
    iVar4 = param_1[6];
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_1 + 0x10) + lVar3;
    param_2[0x12] = iVar4;
    iVar4 = param_1[8];
    lVar3 = lVar3 + *(longlong *)(param_1 + 0x12);
  }
  else {
    lVar3 = 0;
    *param_2 = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    param_2[6] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    param_2[10] = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_2[0xe] = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x12] = 0;
    iVar4 = 0;
  }
  *(longlong *)(param_2 + 0x14) = lVar3;
  param_2[0x16] = iVar4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == lVar2);
}



// FUNCTION 1481e26b8 FUN_1481e26b8 body=329 status=ok
// SIG undefined FUN_1481e26b8(void)

void FUN_1481e26b8(uint *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *param_1;
  local_88 = (ulonglong)(*(ushort *)(param_2 + 0x20) * uVar3);
  local_80 = (ulonglong)(*(ushort *)(param_2 + 0x22) * uVar3);
  local_78 = (ulonglong)(*(ushort *)(param_2 + 0x24) * uVar3);
  local_70 = (ulonglong)param_1[2];
  local_68 = (ulonglong)uVar3;
  if (*(char *)(param_2 + 0x27) == '\0') {
    local_68 = 0;
  }
  local_60 = 0;
  local_58 = local_88 * 4;
  lVar2 = local_58 + local_80 * 2;
  local_50 = local_58 + local_80 * 2 + 3 & 0x7fffffffc;
  local_48 = lVar2 + local_78 * 4 + 3 & 0xffffffffc;
  local_40 = lVar2 + (local_78 + local_70) * 4 + 3 & 0xffffffffc;
  local_38 = local_40 + local_68 * 4;
  if (*(longlong *)(param_1 + 0x1a) != local_38) {
    puVar1 = param_1 + 0x1c;
    uVar5 = FUN_1427d8864(puVar1);
    local_30 = 0;
    FUN_14143acfc(puVar1,&local_30,1);
    uVar4 = local_30;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x1a) = uVar5;
    FUN_1468888a8(puVar1);
  }
  FUN_1481e260e(&local_88,param_1);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e2802 FUN_1481e2802 body=253 status=ok
// SIG undefined FUN_1481e2802(void)

undefined4 FUN_1481e2802(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong _Size;
  undefined4 uVar1;
  void *pvVar2;
  size_t _Size_00;
  undefined1 auStack_68 [32];
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  pvVar2 = *(void **)(param_1 + 0x60);
  _Size = *(ulonglong *)(param_1 + 0x68);
  uStack_40 = _Size & 0xffffffff;
  if (_Size != 0) {
    FUN_1447a127e(&local_48,_Size & 0xffffffff,0);
    memcpy(local_48,pvVar2,_Size);
  }
  FUN_140077068(param_2,&local_48);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    _Size_00 = (size_t)(int)uStack_40;
    if ((longlong)_Size_00 < 1) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_14001cc68(_Size_00,0);
      _Size_00 = (size_t)(int)uStack_40;
      memcpy(pvVar2,local_48,_Size_00);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_1 + 0x60) = pvVar2;
    *(size_t *)(param_1 + 0x68) = _Size_00;
  }
  uVar1 = FUN_1481e26b8(param_1,param_3);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e2900 FUN_1481e2900 body=175 status=ok
// SIG undefined FUN_1481e2900(void)

void FUN_1481e2900(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  size_t _Size;
  void *_Src;
  void *_Dst;
  
  if ((*(byte *)(param_2 + 0x28) & 4) != 0) {
    _Size = *(size_t *)(param_1 + 0x68);
    if ((longlong)_Size < 1) {
      FUN_1427d88a6(param_1 + 0x70);
    }
    else {
      _Src = *(void **)(param_1 + 0x60);
      lVar1 = param_1 + 0x70;
      FUN_140fc05d0(lVar1,2);
      _Dst = (void *)FUN_1427d8a06(lVar1,_Size,1);
      memcpy(_Dst,_Src,_Size);
      FUN_1427d8a52(lVar1);
    }
  }
  FUN_140430222(param_1 + 0x70,param_2,param_3,0,1,0);
  FUN_1481e26b8(param_1,param_4);
  return;
}



// FUNCTION 1481e29bc FUN_1481e29bc body=156 status=ok
// SIG undefined FUN_1481e29bc(void)

undefined4 FUN_1481e29bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [88];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58[0] = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_148070d3a(local_b0);
  uVar1 = FUN_1481e2a5a(param_1,local_b0,param_3,local_58);
  FUN_143abe7aa(local_58);
  FUN_1459becf2(param_2);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e2a5a FUN_1481e2a5a body=2881 status=ok
// SIG undefined FUN_1481e2a5a(void)

/* WARNING: Removing unreachable block (ram,0x0001481e2c35) */
/* WARNING: Removing unreachable block (ram,0x0001481e34ac) */

ulonglong FUN_1481e2a5a(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  uint uVar3;
  undefined2 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_998 [32];
  undefined8 *local_978;
  longlong local_970;
  longlong local_968;
  longlong local_960;
  longlong local_958;
  longlong local_950;
  longlong local_948;
  longlong local_940;
  longlong *local_938;
  longlong *local_928;
  undefined2 *local_920;
  ulonglong local_918;
  undefined4 local_910;
  undefined4 local_90c;
  code *local_908 [2];
  undefined8 *local_8f8;
  code *local_8c8 [2];
  undefined8 local_8b8;
  undefined **local_8a8;
  longlong local_8a0;
  LARGE_INTEGER local_888;
  LARGE_INTEGER LStack_880;
  undefined2 *local_878;
  undefined8 local_870;
  undefined8 local_868;
  LARGE_INTEGER local_860;
  LARGE_INTEGER local_858;
  undefined2 local_850;
  longlong local_848;
  undefined4 local_840;
  undefined2 local_838;
  undefined2 local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined1 local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined2 local_52 [5];
  ulonglong local_48;
  undefined7 uVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_998;
  FUN_148086488(&DAT_14cb43300,param_1);
  FUN_1481e359c(&local_950,param_3);
  if (local_940 == 0) {
    if (local_950 == 0) {
      FUN_140056680(&local_928,&DAT_149e01fe8);
    }
    else {
      FUN_14010318a(local_950,&local_928,0);
    }
    plVar14 = local_928;
    if ((int)local_920 == 0) {
      plVar14 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_888,L"No valid simulation data for %s",plVar14);
    iVar6 = *(int *)(param_4 + 0x10);
    *(uint *)(param_4 + 0x10) = iVar6 + 1U;
    if (*(uint *)(param_4 + 0x14) < iVar6 + 1U) {
      FUN_1447a1bd6((longlong *)(param_4 + 8),iVar6);
    }
    lVar8 = *(longlong *)(param_4 + 8);
    lVar12 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar8 + lVar12) = 0;
    *(LARGE_INTEGER *)(lVar8 + lVar12) = local_888;
    *(DWORD *)(lVar8 + 8 + lVar12) = LStack_880.s.LowPart;
    *(LONG *)(lVar8 + 0xc + lVar12) = LStack_880.s.HighPart;
    LStack_880.QuadPart = 0;
    local_888.QuadPart = 0;
    if (local_928 != (longlong *)0x0) {
      FUN_1400020a8();
    }
LAB_1481e2c49:
    uVar10 = 0;
  }
  else {
    if (((*(int *)(param_1 + 0x2c) == 0 && *(int *)(param_1 + 0x28) == 0) &&
        *(int *)(param_1 + 0x30) == 0) && *(int *)(param_1 + 0x34) == 0) {
      FUN_1412e3d1e(&local_888);
      *(DWORD *)(param_1 + 0x28) = local_888.s.LowPart;
      *(LONG *)(param_1 + 0x2c) = local_888.s.HighPart;
      *(DWORD *)(param_1 + 0x30) = LStack_880.s.LowPart;
      *(LONG *)(param_1 + 0x34) = LStack_880.s.HighPart;
    }
    lVar8 = local_950;
    puVar9 = (undefined8 *)(param_1 + 0x38);
    local_978 = puVar9;
    if (local_950 == 0) {
      *puVar9 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
      }
      puVar4 = *(undefined2 **)(param_1 + 0x50);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    else {
      FUN_1400bbfae(&local_888,local_950);
      *(DWORD *)(param_1 + 0x40) = local_888.s.LowPart;
      *(LONG *)(param_1 + 0x44) = local_888.s.HighPart;
      *(DWORD *)(param_1 + 0x48) = LStack_880.s.LowPart;
      *(LONG *)(param_1 + 0x4c) = LStack_880.s.HighPart;
      if ((LARGE_INTEGER *)(param_1 + 0x40) == &local_888) {
        if (local_878 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_1400020a8();
        }
        *(undefined2 **)(param_1 + 0x50) = local_878;
        local_878 = (undefined2 *)0x0;
        *(uint *)(param_1 + 0x58) = (uint)local_870;
        *(int *)(param_1 + 0x5c) = local_870._4_4_;
      }
      cVar5 = (*(code *)PTR_FUN_14c758760)();
      if (cVar5 != '\0') {
        uVar3 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        if ((*(uint *)(lVar12 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 0x38) = 0;
          goto LAB_1481e2d2e;
        }
      }
      FUN_14485c47a(puVar9,lVar8);
    }
LAB_1481e2d2e:
    lVar8 = param_1 + 0x68;
    FUN_1481e36c2(lVar8);
    *(undefined8 *)(param_1 + 0x60) = 0;
    memset(&local_888,0,0x98);
    local_838 = 0xffff;
    local_830 = 0xffff;
    local_958 = param_1 + 200;
    local_828 = 0;
    uStack_820 = 0;
    local_818 = 0;
    uStack_810 = 0;
    local_808 = 0;
    uStack_800 = 0;
    local_7f8 = 0;
    local_7f0 = 0;
    uStack_7e8 = 0;
    local_7e0 = 0;
    uStack_7d8 = 0;
    local_7d0 = 0;
    uStack_7c8 = 0;
    FUN_1481edae4(local_958,&local_888);
    plVar14 = (longlong *)(param_1 + 0x180);
    FUN_1481edbf0(plVar14,&local_7d0);
    FUN_145c11a0e(&local_888);
    FUN_145c119ad(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      FUN_1481f2458(param_1 + 400);
    }
    *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
    QueryPerformanceCounter(&local_888);
    *(double *)(param_1 + 0x200) = (double)local_888.QuadPart * DAT_14c83f420 + 16777216.0;
    LVar2.QuadPart = param_1 + 0x1a0;
    local_920 = (undefined2 *)(param_1 + 0x1b0);
    local_928 = (longlong *)&DAT_100000000;
    local_918 = 0xffffffff;
    local_910 = 0;
    if (*(int *)(param_1 + 0x1c8) != 0) {
      FUN_1449c0562(&local_928);
    }
    local_870 = local_918;
    uVar10 = local_870;
    local_868 = CONCAT44(local_90c,local_910);
    LStack_880.QuadPart = (LONGLONG)local_928;
    local_878 = local_920;
    local_850 = 0;
    local_870._4_4_ = (int)(local_918 >> 0x20);
    local_888.QuadPart = LVar2.QuadPart;
    local_860.QuadPart = LVar2.QuadPart;
    local_858.QuadPart = LVar2.QuadPart;
    if (local_870._4_4_ < *(int *)(local_920 + 0xc)) {
      iVar6 = local_870._4_4_;
      local_870 = uVar10;
      do {
        lVar12 = *(longlong *)(*(longlong *)local_888 + 0x10 + (longlong)iVar6 * 0x20);
        FUN_144757f48(lVar12,0x40000000);
        uVar3 = *(uint *)(lVar12 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        do {
          uVar3 = *(uint *)(lVar12 + 8);
          if ((uVar3 >> 0x15 & 1) != 0) break;
          LOCK();
          bVar17 = uVar3 == *(uint *)(lVar12 + 8);
          if (bVar17) {
            *(uint *)(lVar12 + 8) = uVar3 | 0x200000;
          }
          UNLOCK();
        } while (!bVar17);
        local_870 = CONCAT44(local_870._4_4_,(uint)local_870 & ~LStack_880.s.HighPart);
        FUN_1449c0562(&LStack_880);
        iVar6 = local_870._4_4_;
      } while (local_870._4_4_ < *(int *)(local_878 + 0xc));
      uVar10 = local_870;
      if (((local_850 & 1) != 0) && (local_850._1_1_ == '\x01')) {
        FUN_1481f2488(local_858.QuadPart,
                      *(int *)(local_858.QuadPart + 8) - *(int *)(local_858.QuadPart + 0x34));
        uVar10 = local_870;
      }
    }
    local_870 = uVar10;
    FUN_1481f2708(LVar2.QuadPart);
    if ((*(byte *)(param_1 + 0x6c) & 0x20) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_1481e3726(param_1);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
    }
    *(longlong *)(param_1 + 0x1f0) = lVar12;
    cVar5 = *(char *)(param_1 + 0x68);
    puVar9 = param_2;
    local_960 = param_4;
    if (cVar5 == '\x02') {
      if (*(int *)(param_1 + 0xb8) == 0) {
        if (local_950 == 0) {
          FUN_140056680(&local_928,&DAT_149e01fe8);
        }
        else {
          FUN_14010318a(local_950,&local_928,0);
        }
        puVar9 = local_978;
        plVar14 = local_928;
        if ((int)local_920 == 0) {
          plVar14 = (longlong *)&DAT_149dfb77a;
        }
        FUN_140002266(&local_888,L"Missing attributes to capture when in explicit capture mode %s",
                      plVar14);
        iVar6 = *(int *)(param_4 + 0x10);
        *(uint *)(param_4 + 0x10) = iVar6 + 1U;
        if (*(uint *)(param_4 + 0x14) < iVar6 + 1U) {
          FUN_1447a1bd6((longlong *)(param_4 + 8),iVar6);
        }
        lVar8 = *(longlong *)(param_4 + 8);
        lVar12 = (longlong)iVar6 * 0x10;
        *(undefined8 *)(lVar8 + lVar12) = 0;
        *(LARGE_INTEGER *)(lVar8 + lVar12) = local_888;
        *(DWORD *)(lVar8 + 8 + lVar12) = LStack_880.s.LowPart;
        *(LONG *)(lVar8 + 0xc + lVar12) = LStack_880.s.HighPart;
        LStack_880.QuadPart = 0;
        local_888.QuadPart = 0;
        if (local_928 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        if (*(int *)(param_1 + 0x5c) < 0) {
          FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
        }
        puVar4 = *(undefined2 **)(param_1 + 0x50);
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
        goto LAB_1481e2c49;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (*(int *)(param_1 + 0xbc) != 0) {
        FUN_1402191ca(param_1 + 0xb0,0);
        cVar5 = *(char *)(param_1 + 0x68);
      }
      if (cVar5 == '\x01') {
        local_888.QuadPart = (LONGLONG)&local_868;
        local_870 = local_870 & 0xffffffffffffff00;
        local_878 = local_52;
        LStack_880.QuadPart = local_888.QuadPart;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb43320) {
          FUN_144b3d300(&DAT_14cb43320);
          if (DAT_14cb43320 == -1) {
            FUN_1446ddc76(&DAT_14cb43318,"ExecutionState",1);
            _Init_thread_footer(&DAT_14cb43320);
          }
        }
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb4332c) {
          FUN_144b3d300(&DAT_14cb4332c);
          if (DAT_14cb4332c == -1) {
            FUN_1446ddc76(&DAT_14cb43324,"System.ExecutionState",1);
            _Init_thread_footer(&DAT_14cb4332c);
          }
        }
        puVar9 = (undefined8 *)(param_1 + 0xb0);
        FUN_140721fbe(puVar9,&DAT_14cb43324);
        if ((longlong)*(int *)(local_948 + 0x110) != 0) {
          plVar15 = *(longlong **)(local_948 + 0x108);
          plVar16 = plVar15 + (longlong)*(int *)(local_948 + 0x110) * 2;
          local_978 = param_2;
          local_970 = lVar8;
          local_968 = param_1;
          do {
            (*(code *)**(undefined8 **)(*plVar15 + 0x40))(*plVar15 + 0x40,&local_928);
            if ((longlong)(int)local_920 != 0) {
              lVar8 = (longlong)(int)local_920 * 0x28;
              plVar13 = local_928;
              do {
                FUN_140721fbe(puVar9,plVar13);
                plVar13 = plVar13 + 5;
                lVar8 = lVar8 + -0x28;
              } while (lVar8 != 0);
            }
            LStack_880 = local_888;
            uVar7 = FUN_144b356c0(*plVar15);
            FUN_1481c5cfe(uVar7,&local_928);
            iVar6 = (int)local_920 + -1;
            if ((int)local_920 == 0) {
              iVar6 = 0;
            }
            FUN_1449668a2(&local_888,local_928,iVar6);
            if (local_928 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_878 <= (undefined2 *)(LStack_880.QuadPart + 2)) {
              FUN_140213274(&local_888,1);
            }
            *(undefined2 *)LStack_880 = 0x2e;
            LStack_880.QuadPart = LStack_880.QuadPart + 2;
            FUN_14005eb5c(&DAT_14cb43318,&local_888);
            *(undefined2 *)LStack_880 = 0;
            FUN_1446f470e(&local_928,local_888.QuadPart,1);
            FUN_1409d9716(puVar9,&local_928);
            plVar15 = plVar15 + 2;
            param_1 = local_968;
            lVar8 = local_970;
            param_2 = local_978;
          } while (plVar15 != plVar16);
        }
        local_8b8 = 0;
        local_8a8 = &PTR_LAB_14ae1df60;
        local_8c8[0] = FUN_143ac047e;
        local_8a0 = param_1;
        FUN_1480d00b8(local_948,local_8c8,1);
        if ((char)local_870 == '\x01') {
          FUN_1400020a8(local_888.QuadPart);
        }
      }
    }
    FUN_1481e37bc(&local_950,lVar8,local_958);
    lVar12 = FUN_143ac447c(local_950);
    iVar6 = *(int *)(lVar12 + 8);
    FUN_1481e3ca0(plVar14,iVar6);
    if (0 < (longlong)iVar6) {
      lVar12 = 0;
      puVar9 = (undefined8 *)0x0;
      do {
        FUN_1481e3ce2(&local_950,lVar8,*plVar14 + lVar12,(ulonglong)puVar9 & 0xffffffff);
        puVar9 = (undefined8 *)((longlong)puVar9 + 1);
        lVar12 = lVar12 + 0xb8;
      } while ((undefined8 *)(longlong)iVar6 != puVar9);
    }
    uVar11 = (undefined7)((ulonglong)puVar9 >> 8);
    uVar10 = CONCAT71(uVar11,1);
    if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
      local_868 = 0;
      local_860._0_4_ = 0;
      local_888.QuadPart = 0;
      LStack_880.QuadPart = 0;
      local_860._4_4_ = 0x80;
      local_858._0_4_ = 0xffffffff;
      local_858._4_4_ = 0;
      local_848 = 0;
      local_840 = 0;
      local_908[0] = (code *)0x0;
      local_8f8 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_8f8 = &PTR_FUN_14ae1df80;
      local_8f8[1] = param_1;
      local_8f8[2] = &local_888;
      local_8f8[3] = &local_950;
      local_8f8[4] = local_960;
      if (local_8f8 + 1 != (longlong *)0x0) {
        local_908[0] = FUN_143ac0582;
      }
      uVar10 = CONCAT71(uVar11,1);
      FUN_1480cfd19(local_948,local_908,1);
      local_840 = 0;
      if (local_848 != 0) {
        FUN_1400020a8();
      }
      FUN_1481f2982(&local_888);
    }
  }
  if (local_938 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_938 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_938)(local_938);
      LOCK();
      piVar1 = (int *)((longlong)local_938 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_938 + 0x10))(local_938);
      }
    }
  }
  FUN_1459becf2(param_2);
  if ((local_48 ^ (ulonglong)auStack_998) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e359c FUN_1481e359c body=293 status=ok
// SIG undefined FUN_1481e359c(void)

longlong * FUN_1481e359c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 0x668);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 0x760);
  plVar4 = *(longlong **)(param_2 + 0x768);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) goto LAB_1481e3692;
  lVar3 = *(longlong *)(lVar3 + 0x30);
  param_1[1] = lVar3;
  if (lVar3 == 0) goto LAB_1481e3692;
  lVar6 = *(longlong *)(lVar3 + 0x20);
  plVar5 = *(longlong **)(lVar3 + 0x28);
  if (plVar5 == (longlong *)0x0) {
    param_1[2] = lVar6;
    plVar7 = (longlong *)param_1[3];
    if (plVar7 != (longlong *)0x0) {
      param_1[3] = 0;
LAB_1481e3646:
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001481e3673:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_1481e367e;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[2] = lVar6;
    plVar7 = (longlong *)param_1[3];
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
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar5;
        goto joined_r0x0001481e3673;
      }
    }
    else {
      param_1[3] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_1481e3646;
    }
LAB_1481e367e:
    lVar6 = param_1[2];
  }
  if (lVar6 != 0) {
    param_1[4] = *(longlong *)(lVar6 + 0x110);
  }
LAB_1481e3692:
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
  return param_1;
}



// FUNCTION 1481e36c2 FUN_1481e36c2 body=100 status=ok
// SIG undefined FUN_1481e36c2(void)

undefined4 * FUN_1481e36c2(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1406fa324(param_1 + 2,param_2 + 2);
  FUN_1406fa324(param_1 + 6,param_2 + 6);
  FUN_1406fa324(param_1 + 10,param_2 + 10);
  FUN_1406fa324(param_1 + 0xe,param_2 + 0xe);
  FUN_1406fa324(param_1 + 0x12,param_2 + 0x12);
  return param_1;
}



// FUNCTION 1481e3726 FUN_1481e3726 body=148 status=ok
// SIG undefined FUN_1481e3726(void)

undefined8 FUN_1481e3726(undefined8 param_1)

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
  uVar1 = FUN_1459d6990();
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



// FUNCTION 1481e37bc FUN_1481e37bc body=1250 status=ok
// SIG undefined FUN_1481e37bc(void)

/* WARNING: Removing unreachable block (ram,0x0001481e391c) */

void FUN_1481e37bc(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  longlong *local_180;
  undefined8 *local_178;
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar10 = *param_1;
  local_108 = 0;
  uStack_100 = 0;
  uVar3 = *(uint *)(param_2 + 4);
  if ((uVar3 & 1) != 0) {
    local_78 = (longlong *)0x0;
    local_70 = 0x800000000;
    local_168 = lVar10;
    local_158 = param_3;
    if (0 < *(int *)(lVar10 + 0xc0)) {
      lVar8 = 0;
      lVar11 = 0;
      do {
        lVar10 = *(longlong *)(lVar10 + 0xb8) + lVar8;
        cVar2 = FUN_144b35680(lVar10);
        if (cVar2 != '\0') {
          FUN_143a820dc(lVar10);
          lVar5 = FUN_144a8ad80(&local_120);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x30) == '\x01')) {
            FUN_1481c5cfe(lVar10);
            lVar10 = (longlong)(int)local_70;
            uVar3 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,uVar3);
            if (local_70._4_4_ < uVar3) {
              FUN_147deed1c(&local_f8);
            }
            plVar6 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar6 = &local_f8;
            }
            plVar6[lVar10 * 2] = 0;
            plVar6[lVar10 * 2] = local_120;
            local_120 = 0;
            *(undefined4 *)(plVar6 + lVar10 * 2 + 1) = (undefined4)local_118;
            *(undefined4 *)((longlong)plVar6 + lVar10 * 0x10 + 0xc) = local_118._4_4_;
            local_118 = 0;
          }
        }
        lVar11 = lVar11 + 1;
        lVar10 = *param_1;
        lVar8 = lVar8 + 0x48;
      } while (lVar11 < *(int *)(lVar10 + 0xc0));
    }
    local_160 = param_1;
    if ((longlong)*(int *)(local_168 + 0x188) != 0) {
      plVar12 = *(longlong **)(local_168 + 0x180);
      plVar6 = (longlong *)((longlong)plVar12 + (longlong)*(int *)(local_168 + 0x188) * 0xc);
      do {
        plVar7 = (longlong *)FUN_144741050(plVar12 + 1);
        lVar10 = DAT_14cb42130;
        if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42130);
        }
        if (((*plVar7 == lVar10) && ((short)plVar7[1] == DAT_14cb42138)) &&
           (*(char *)((longlong)plVar7 + 10) == DAT_14cb4213a)) {
          plVar7 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar7 = &local_f8;
          }
          if ((longlong)(int)local_70 != 0) {
            plVar9 = plVar7 + (longlong)(int)local_70 * 2;
            do {
              local_120 = *plVar7;
              iVar4 = (int)plVar7[1] + -1;
              if ((int)plVar7[1] == 0) {
                iVar4 = 0;
              }
              local_118 = CONCAT44(local_118._4_4_,iVar4);
              cVar2 = FUN_140122458(&local_120);
              if (cVar2 != '\0') goto LAB_1481e3b7d;
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar9);
          }
          if ((longlong)*(int *)(param_2 + 0x20) != 0) {
            lVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar10) == *plVar12)
              goto LAB_1481e3b7d;
              lVar10 = lVar10 + 8;
            } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar10);
          }
LAB_1481e3b6d:
          FUN_140721fbe(&local_108);
        }
        else {
          cVar2 = FUN_1481edcfe(plVar12);
          if ((cVar2 != '\0') && ((longlong)*(int *)(param_2 + 0x10) != 0)) {
            lVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_2 + 8) + lVar10) == *plVar12)
              goto LAB_1481e3b6d;
              lVar10 = lVar10 + 8;
            } while ((longlong)*(int *)(param_2 + 0x10) * 8 != lVar10);
          }
        }
LAB_1481e3b7d:
        plVar12 = (longlong *)((longlong)plVar12 + 0xc);
      } while (plVar12 != plVar6);
    }
    FUN_147deee28(&local_f8);
    uVar3 = *(uint *)(param_2 + 4);
    lVar10 = local_168;
    param_3 = local_158;
    param_1 = local_160;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  if (((uVar3 & 4) == 0) || ((longlong)*(int *)(lVar10 + 0x188) == 0)) {
    local_140 = 0;
    local_138 = 0;
    local_134 = 0;
  }
  else {
    plVar12 = *(longlong **)(lVar10 + 0x180);
    plVar6 = (longlong *)((longlong)plVar12 + (longlong)*(int *)(lVar10 + 0x188) * 0xc);
    do {
      cVar2 = FUN_1481ede0e(plVar12);
      uVar1 = uStack_f0;
      if (cVar2 != '\0') {
        if ((longlong)*(int *)(param_2 + 0x20) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar8) == *plVar12)
            goto LAB_1481e3c3b;
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar8);
        }
        if ((longlong)*(int *)(param_2 + 0x30) == 0) {
LAB_1481e3c05:
          lVar8 = (longlong)(int)uStack_f0;
          uVar3 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar3);
          if (uStack_f0._4_4_ < uVar3) {
            FUN_1446f84a2(&local_f8,uVar1 & 0xffffffff);
          }
          *(longlong *)(local_f8 + lVar8 * 8) = *plVar12;
        }
        else {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0x28) + lVar8) == *plVar12)
            goto LAB_1481e3c05;
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(param_2 + 0x30) * 8 != lVar8);
        }
      }
LAB_1481e3c3b:
      plVar12 = (longlong *)((longlong)plVar12 + 0xc);
    } while (plVar12 != plVar6);
    local_140 = local_f8;
    local_138 = (int)uStack_f0;
    local_134 = uStack_f0._4_4_;
  }
  local_130 = *(undefined8 *)(param_2 + 0x48);
  local_178 = &local_130;
  local_128 = *(undefined4 *)(param_2 + 0x50);
  local_180 = &local_140;
  local_f8 = 0;
  uStack_f0 = 0;
  local_188 = &local_150;
  local_150 = (undefined4)local_108;
  uStack_14c = local_108._4_4_;
  uStack_148 = (undefined4)uStack_100;
  uStack_144 = uStack_100._4_4_;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1481edec0(param_2,param_3,lVar10 + 0x180,*(undefined8 *)(*param_1 + 0x18));
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e3ca0 FUN_1481e3ca0 body=65 status=ok
// SIG undefined FUN_1481e3ca0(void)

void FUN_1481e3ca0(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1481f28ec(param_1,iVar1);
  }
  FUN_1481f288b((longlong)iVar1 * 0xb8 + *param_1,param_2);
  return;
}



// FUNCTION 1481e3ce2 FUN_1481e3ce2 body=1978 status=ok
// SIG undefined FUN_1481e3ce2(void)

void FUN_1481e3ce2(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = (longlong)param_4 * 0x48 + *(longlong *)(*param_1 + 0xb8);
  cVar5 = FUN_144b35680(lVar8);
  if (cVar5 != '\0') {
    if (*(char *)(lVar8 + 0x21) == '\0') {
      plVar9 = (longlong *)
               (*(longlong *)(*(longlong *)(*param_1 + 0xe8) + (longlong)param_4 * 0x10) + 0xf0);
      FUN_143a820dc(lVar8,&local_78);
      lVar11 = FUN_144a8ad80(&local_78);
      if (lVar11 == 0) goto LAB_1481e3ddd;
    }
    else {
      if (((*(byte *)(param_2 + 4) & 0x20) == 0) ||
         (lVar11 = *(longlong *)(lVar8 + 0x40), lVar11 == 0)) goto LAB_1481e3ddd;
      puVar3 = *(undefined8 **)(lVar11 + 0x28);
      plVar12 = *(longlong **)(lVar11 + 0x30);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      if (puVar3 == (undefined8 *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)*puVar3;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar12 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      lVar11 = 0;
    }
    if (plVar9 != (longlong *)0x0) {
      cVar5 = '\x01';
      if (lVar11 != 0) {
        cVar5 = *(char *)(lVar11 + 0x30);
      }
      *(char *)(param_3 + 0x26) = cVar5;
      local_78 = 0;
      uStack_70 = 0;
      uVar6 = *(uint *)(param_2 + 4);
      local_120 = param_2;
      local_118 = plVar9;
      local_110 = param_3;
      local_108 = lVar8;
      if ((uVar6 & 1) != 0 && cVar5 == '\0') {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        if ((0 < *(int *)(param_2 + 0x10)) || (0 < *(int *)(param_2 + 0x20))) {
          FUN_1481c5cfe(lVar8,&local_a8);
          iVar2 = *(int *)(param_2 + 0x10);
          if ((longlong)iVar2 != 0) {
            lVar8 = *(longlong *)(local_120 + 8);
            lVar11 = 0;
            do {
              local_b8 = *(undefined8 *)(lVar8 + lVar11);
              local_b0[0] = FUN_144830b78(local_b0,&DAT_14cb420f0);
              local_c8 = local_a8;
              local_c0 = local_a0 + -1;
              if (local_a0 == 0) {
                local_c0 = 0;
              }
              cVar5 = FUN_1481f88f6(&local_b8,&local_c8);
              uVar4 = uStack_80;
              if (cVar5 != '\0') {
                lVar10 = (longlong)(int)uStack_80;
                uVar6 = (int)uStack_80 + 1;
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
                if (uStack_80._4_4_ < uVar6) {
                  FUN_1446f84a2(&local_88,uVar4 & 0xffffffff);
                }
                *(undefined8 *)(local_88 + lVar10 * 8) = local_b8;
              }
              lVar11 = lVar11 + 8;
            } while ((longlong)iVar2 * 8 != lVar11);
          }
          iVar2 = *(int *)(local_120 + 0x20);
          if ((longlong)iVar2 != 0) {
            lVar8 = *(longlong *)(local_120 + 0x18);
            lVar11 = 0;
            do {
              local_b8 = *(undefined8 *)(lVar8 + lVar11);
              local_b0[0] = FUN_144830b78(local_b0,&DAT_14cb420f0);
              local_c8 = local_a8;
              local_c0 = local_a0 + -1;
              if (local_a0 == 0) {
                local_c0 = 0;
              }
              cVar5 = FUN_1481f88f6(&local_b8,&local_c8);
              uVar4 = uStack_90;
              if (cVar5 != '\0') {
                lVar10 = (longlong)(int)uStack_90;
                uVar6 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
                if (uStack_90._4_4_ < uVar6) {
                  FUN_1446f84a2(&local_98,uVar4 & 0xffffffff);
                }
                *(undefined8 *)(local_98 + lVar10 * 8) = local_b8;
              }
              lVar11 = lVar11 + 8;
            } while ((longlong)iVar2 * 8 != lVar11);
          }
          plVar9 = local_118;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
        }
        param_2 = local_120;
        if ((longlong)(int)plVar9[1] != 0) {
          plVar12 = (longlong *)*local_118;
          plVar9 = (longlong *)((longlong)plVar12 + (longlong)(int)plVar9[1] * 0xc);
          do {
            plVar7 = (longlong *)FUN_144741050(plVar12 + 1);
            lVar8 = DAT_14cb42130;
            if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(DAT_14cb42130);
            }
            if (((*plVar7 == lVar8) && ((short)plVar7[1] == DAT_14cb42138)) &&
               (*(char *)((longlong)plVar7 + 10) == DAT_14cb4213a)) {
              if ((longlong)(int)uStack_90 != 0) {
                lVar8 = 0;
                do {
                  if (*(longlong *)(local_98 + lVar8) == *plVar12) goto LAB_1481e4367;
                  lVar8 = lVar8 + 8;
                } while ((longlong)(int)uStack_90 * 8 != lVar8);
              }
LAB_1481e43bd:
              FUN_140721fbe(&local_78,plVar12);
            }
            else if ((longlong)(int)uStack_80 != 0) {
              lVar8 = 0;
              do {
                if (*(longlong *)(local_88 + lVar8) == *plVar12) {
                  cVar5 = FUN_1481edcfe(plVar12);
                  if (cVar5 != '\0') goto LAB_1481e43bd;
                  break;
                }
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uStack_80 * 8 != lVar8);
            }
LAB_1481e4367:
            plVar12 = (longlong *)((longlong)plVar12 + 0xc);
          } while (plVar12 != plVar9);
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        param_3 = local_110;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        uVar6 = *(uint *)(param_2 + 4);
      }
      local_88 = 0;
      uStack_80 = 0;
      if (((uVar6 & 4) != 0) && ((longlong)(int)local_118[1] != 0)) {
        plVar12 = (longlong *)*local_118;
        plVar9 = (longlong *)((longlong)plVar12 + (longlong)(int)local_118[1] * 0xc);
        do {
          cVar5 = FUN_1481ede0e();
          uVar4 = uStack_80;
          if (cVar5 != '\0') {
            if ((longlong)*(int *)(param_2 + 0x20) != 0) {
              lVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar8) == *plVar12)
                goto LAB_1481e4451;
                lVar8 = lVar8 + 8;
              } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar8);
            }
            if ((longlong)*(int *)(param_2 + 0x30) == 0) {
LAB_1481e441b:
              lVar8 = (longlong)(int)uStack_80;
              uVar6 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
              if (uStack_80._4_4_ < uVar6) {
                FUN_1446f84a2(&local_88,uVar4 & 0xffffffff);
              }
              *(longlong *)(local_88 + lVar8 * 8) = *plVar12;
            }
            else {
              lVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0x28) + lVar8) == *plVar12)
                goto LAB_1481e441b;
                lVar8 = lVar8 + 8;
              } while ((longlong)*(int *)(param_2 + 0x30) * 8 != lVar8);
            }
          }
LAB_1481e4451:
          plVar12 = (longlong *)((longlong)plVar12 + 0xc);
        } while (plVar12 != plVar9);
      }
      local_98 = 0;
      uStack_90 = 0;
      if (*(int *)(param_2 + 0x50) < 1) {
        uStack_90._0_4_ = 0;
        plVar9 = local_118;
      }
      else {
        FUN_1481c5cfe(local_108,&local_a8);
        iVar2 = *(int *)(param_2 + 0x50);
        if ((longlong)iVar2 != 0) {
          lVar8 = *(longlong *)(local_120 + 0x48);
          lVar11 = 0;
          do {
            local_b8 = *(undefined8 *)(lVar8 + lVar11);
            local_b0[0] = FUN_144830b78(local_b0,&DAT_14cb420f0);
            local_c8 = local_a8;
            local_c0 = local_a0 + -1;
            if (local_a0 == 0) {
              local_c0 = 0;
            }
            cVar5 = FUN_1481f88f6(&local_b8,&local_c8);
            if (cVar5 != '\0') {
              local_c8 = DAT_14cb3af70;
              local_c0 = DAT_14cb3af78 + -1;
              if (DAT_14cb3af78 == 0) {
                local_c0 = 0;
              }
              cVar5 = FUN_1481f88f6(&local_b8,&local_c8);
              uVar4 = uStack_90;
              if (cVar5 != '\0') {
                lVar10 = (longlong)(int)uStack_90;
                uVar6 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
                if (uStack_90._4_4_ < uVar6) {
                  FUN_1446f84a2(&local_98,uVar4 & 0xffffffff);
                }
                *(undefined8 *)(local_98 + lVar10 * 8) = local_b8;
              }
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)iVar2 * 8 != lVar11);
        }
        plVar9 = local_118;
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        param_3 = local_110;
      }
      local_e8 = local_88;
      uStack_e0 = uStack_80;
      local_88 = 0;
      uStack_80 = 0;
      local_f8 = (undefined4)local_78;
      uStack_f4 = local_78._4_4_;
      uStack_f0 = (undefined4)uStack_70;
      uStack_ec = uStack_70._4_4_;
      local_78 = 0;
      uStack_70 = 0;
      local_d8 = local_98;
      local_d0 = (int)uStack_90;
      FUN_1481c5cf4(local_108,&local_100);
      local_138 = &local_f8;
      local_130 = &local_e8;
      local_128 = &local_d8;
      FUN_1481edec0(local_120,param_3,plVar9,local_100);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1481e3ddd:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e449e FUN_1481e449e body=153 status=ok
// SIG undefined FUN_1481e449e(void)

undefined4 FUN_1481e449e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [88];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58[0] = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_148070d3a(local_b0);
  uVar1 = FUN_1481e4538(param_1,local_b0,param_3);
  FUN_143abe7aa(local_58);
  FUN_1459becf2(param_2);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e4538 FUN_1481e4538 body=599 status=ok
// SIG undefined FUN_1481e4538(void)

ulonglong FUN_1481e4538(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [88];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148086488(&DAT_14cb43300,param_1);
  FUN_1481e359c(&local_58,param_3);
  if (local_48 == 0) {
    uVar10 = 0;
    goto LAB_1481e458a;
  }
  if ((((*(int *)(param_1 + 0x2c) == 0 && *(int *)(param_1 + 0x28) == 0) &&
       *(int *)(param_1 + 0x30) == 0) && *(int *)(param_1 + 0x34) == 0) ||
     (lVar7 = FUN_1412fe774(param_1 + 0x38), lVar7 != local_58)) {
    FUN_148070d3a(local_b0,param_2);
    uVar6 = FUN_1481e29bc(param_1,local_b0,param_3);
    uVar10 = (ulonglong)uVar6;
    goto LAB_1481e458a;
  }
  iVar9 = *(int *)(local_50 + 0xd8);
  if (iVar9 == 0) {
LAB_1481e46fb:
    FUN_145c119ad(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      FUN_1481f2458(param_1 + 400);
    }
  }
  else {
    fVar4 = *(float *)(local_50 + 0xd0);
    if (fVar4 <= *(float *)(param_1 + 0x60)) goto LAB_1481e46fb;
    if (fVar4 <= *(float *)(param_1 + 0x60) + *(float *)(param_1 + 100)) {
      uVar6 = *(uint *)(param_1 + 0x198);
      lVar7 = (ulonglong)uVar6 * 0x160 + -0xf0;
      uVar5 = uVar6;
      do {
        uVar11 = uVar5;
        lVar12 = lVar7;
        uVar8 = (int)uVar6 >> 0x1f & uVar6;
        if ((int)uVar11 < 1) break;
        pfVar3 = (float *)(*(longlong *)(param_1 + 400) + -4 + lVar12);
        lVar7 = lVar12 + -0x160;
        uVar5 = uVar11 - 1;
      } while ((fVar4 < *pfVar3 || fVar4 == *pfVar3) ||
              (uVar8 = uVar11, iVar9 <= *(int *)(*(longlong *)(param_1 + 400) + lVar12)));
      if (uVar8 != uVar6) {
        FUN_1481e4790();
        if (0 < (longlong)*(int *)(param_1 + 0x198)) {
          *(float *)(param_1 + 100) =
               *(float *)(*(longlong *)(param_1 + 400) + -0xf4 +
                         (longlong)*(int *)(param_1 + 0x198) * 0x160) - *(float *)(param_1 + 0x60);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 0x198) == 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    iVar9 = -1;
  }
  else {
    iVar9 = iVar9 + -1;
  }
  *(int *)(param_1 + 0x1f8) = iVar9;
  QueryPerformanceCounter(&local_30);
  *(double *)(param_1 + 0x200) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1481e458a:
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
  FUN_1459becf2(param_2);
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1481e4790 FUN_1481e4790 body=121 status=ok
// SIG undefined FUN_1481e4790(void)

void FUN_1481e4790(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1481f3446(param_1,iVar1);
    }
    FUN_1481f33ac((longlong)iVar1 * 0x160 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1481f34da(param_1,param_2,iVar1 - param_2);
    FUN_1481f353c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481e480a FUN_1481e480a body=89 status=ok
// SIG undefined FUN_1481e480a(void)

undefined4 FUN_1481e480a(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[0] = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_1481e4864(0,param_2,local_40);
  FUN_143abe7aa(local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e4864 FUN_1481e4864 body=2757 status=ok
// SIG undefined FUN_1481e4864(void)

/* WARNING: Removing unreachable block (ram,0x0001481e522b) */
/* WARNING: Removing unreachable block (ram,0x0001481e4a5e) */
/* WARNING: Removing unreachable block (ram,0x0001481e4b4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1481e4864(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined2 *puVar30;
  longlong lVar31;
  undefined2 *puVar32;
  longlong lVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auStack_198 [32];
  undefined4 local_178;
  longlong local_168;
  uint local_15c;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  char local_12d;
  int local_12c;
  undefined2 *local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined8 uStack_110;
  longlong local_100;
  longlong local_f8;
  longlong *local_e8;
  longlong local_e0;
  code *local_d8 [2];
  undefined8 *local_c8;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1481e359c(&local_100);
  puVar20 = (undefined8 *)(param_1 + 0x38);
  if (local_e0 == 0) {
    *puVar20 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
    }
    puVar30 = *(undefined2 **)(param_1 + 0x50);
    if (puVar30 != (undefined2 *)0x0) {
      *puVar30 = 0;
    }
    if (local_100 == 0) {
      FUN_140056680(&local_118,&DAT_149e01fe8);
    }
    else {
      FUN_14010318a(local_100,&local_118,0);
    }
    puVar30 = local_118;
    if ((int)uStack_110 == 0) {
      puVar30 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_98,L"No valid simulation data for %s",puVar30);
    iVar2 = *(int *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(param_3 + 8),iVar2);
    }
    lVar19 = *(longlong *)(param_3 + 8);
    lVar27 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar19 + lVar27) = 0;
    *(undefined2 **)(lVar19 + lVar27) = local_98;
    local_98 = (undefined2 *)0x0;
    *(undefined4 *)(lVar19 + 8 + lVar27) = (undefined4)uStack_90;
    *(undefined4 *)(lVar19 + 0xc + lVar27) = uStack_90._4_4_;
    uStack_90 = 0;
    puVar30 = local_118;
LAB_1481e4b57:
    if (puVar30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar19 = FUN_1412fe774(puVar20);
    if (lVar19 == local_100) {
      if (*(int *)(local_f8 + 0x86c) - 3U < 2) {
        puVar20 = (undefined8 *)FUN_1481f5624();
        if (*(int *)(puVar20 + 1) == 0) {
          puVar30 = &DAT_149dfb77a;
        }
        else {
          puVar30 = (undefined2 *)*puVar20;
        }
        FUN_140002266(&local_98,L"System already completed its simulation. %s",puVar30);
        iVar2 = *(int *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
          FUN_1447a1bd6((longlong *)(param_3 + 8),iVar2);
        }
        lVar19 = *(longlong *)(param_3 + 8);
        lVar27 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar19 + lVar27) = 0;
        *(undefined2 **)(lVar19 + lVar27) = local_98;
        local_98 = (undefined2 *)0x0;
        *(undefined4 *)(lVar19 + 8 + lVar27) = (undefined4)uStack_90;
        *(undefined4 *)(lVar19 + 0xc + lVar27) = uStack_90._4_4_;
        uStack_90 = 0;
        puVar30 = local_98;
      }
      else {
        if (*(char *)(local_f8 + 8) != '\x04') goto LAB_1481e4b61;
        iVar2 = *(int *)(param_1 + 0x1f8);
        if (iVar2 == -1) {
          fVar34 = *(float *)(local_f8 + 0xd0);
          *(float *)(param_1 + 0x60) = fVar34;
          iVar18 = *(int *)(local_f8 + 0xd8);
        }
        else {
          iVar18 = *(int *)(local_f8 + 0xd8);
          if (iVar2 == iVar18) goto LAB_1481e4b61;
          if (iVar18 < iVar2) {
            puVar21 = (undefined8 *)FUN_1481f5624();
            if (*(int *)(puVar21 + 1) == 0) {
              puVar30 = &DAT_149dfb77a;
            }
            else {
              puVar30 = (undefined2 *)*puVar21;
            }
            FUN_140002266(&local_98,
                          L"System was was reset since the last capture, skipping further cache writes. %s"
                          ,puVar30);
            iVar2 = *(int *)(param_3 + 0x10);
            *(uint *)(param_3 + 0x10) = iVar2 + 1U;
            if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
              FUN_1447a1bd6((longlong *)(param_3 + 8),iVar2);
            }
            lVar19 = *(longlong *)(param_3 + 8);
            lVar27 = (longlong)iVar2 * 0x10;
            *(undefined8 *)(lVar19 + lVar27) = 0;
            *(undefined2 **)(lVar19 + lVar27) = local_98;
            local_98 = (undefined2 *)0x0;
            *(undefined4 *)(lVar19 + 8 + lVar27) = (undefined4)uStack_90;
            *(undefined4 *)(lVar19 + 0xc + lVar27) = uStack_90._4_4_;
            uStack_90 = 0;
            puVar30 = (undefined2 *)0x0;
            goto LAB_1481e4a7a;
          }
          fVar34 = *(float *)(param_1 + 0x60);
        }
        *(int *)(param_1 + 0x1f8) = iVar18;
        *(float *)(param_1 + 100) = *(float *)(local_f8 + 0xd0) - fVar34;
        puVar22 = (undefined8 *)FUN_1481e532a(param_1 + 400);
        puVar21 = (undefined8 *)(local_f8 + 0x8c0);
        puVar29 = puVar22;
        for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar29 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar29 = puVar29 + 1;
        }
        *(undefined4 *)(puVar22 + 0xd) = *(undefined4 *)(local_f8 + 0x14);
        puVar22[0xc] = *(undefined8 *)(local_f8 + 0xc);
        fVar34 = *(float *)(local_f8 + 0xd0) * 10000.0 + 0.5;
        auVar35 = roundps(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34),1);
        *(float *)((longlong)puVar22 + 0x6c) = auVar35._0_4_ / 10000.0;
        puVar22[0x15] = *(undefined8 *)(local_f8 + 0x860);
        uVar4 = *(undefined4 *)(local_f8 + 0x830);
        uVar5 = *(undefined4 *)(local_f8 + 0x834);
        uVar6 = *(undefined4 *)(local_f8 + 0x838);
        uVar7 = *(undefined4 *)(local_f8 + 0x83c);
        uVar23 = *(undefined8 *)(local_f8 + 0x840);
        uVar11 = *(undefined8 *)(local_f8 + 0x848);
        uVar8 = *(undefined4 *)(local_f8 + 0x854);
        uVar9 = *(undefined4 *)(local_f8 + 0x858);
        uVar10 = *(undefined4 *)(local_f8 + 0x85c);
        *(undefined4 *)(puVar22 + 0x13) = *(undefined4 *)(local_f8 + 0x850);
        *(undefined4 *)((longlong)puVar22 + 0x9c) = uVar8;
        *(undefined4 *)(puVar22 + 0x14) = uVar9;
        *(undefined4 *)((longlong)puVar22 + 0xa4) = uVar10;
        puVar22[0x11] = uVar23;
        puVar22[0x12] = uVar11;
        *(undefined4 *)(puVar22 + 0xf) = uVar4;
        *(undefined4 *)((longlong)puVar22 + 0x7c) = uVar5;
        *(undefined4 *)(puVar22 + 0x10) = uVar6;
        *(undefined4 *)((longlong)puVar22 + 0x84) = uVar7;
        lVar19 = (longlong)*(int *)(param_1 + 0x188);
        local_138 = puVar22 + 0x29;
        FUN_1481e536e(local_138,*(int *)(param_1 + 0x188));
        local_178 = 1;
        uVar23 = FUN_1481e53b0(local_e0,param_1 + 200,puVar22 + 0x16);
        if (0 < lVar19) {
          lVar25 = lVar19 << 4;
          local_15c = (uint)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
          lVar33 = 0x40;
          lVar27 = 0;
          lVar19 = 0;
          local_158 = lVar25;
          do {
            plVar3 = *(longlong **)(*(longlong *)(local_f8 + 0x108) + lVar19);
            lVar26 = *(longlong *)(plVar3[2] + 0x78);
            if ((lVar26 != 0) && (1 < *(int *)((longlong)plVar3 + 0xd4) - 3U)) {
              lVar31 = *local_138;
              lVar25 = lVar31 + lVar33;
              lVar14 = plVar3[0x1c];
              uVar4 = *(undefined4 *)((longlong)plVar3 + 0xe4);
              lVar15 = plVar3[0x1d];
              uVar5 = *(undefined4 *)((longlong)plVar3 + 0xec);
              lVar12 = plVar3[0x1e];
              lVar13 = plVar3[0x1f];
              lVar16 = plVar3[0x20];
              uVar6 = *(undefined4 *)((longlong)plVar3 + 0x104);
              lVar17 = plVar3[0x21];
              uVar7 = *(undefined4 *)((longlong)plVar3 + 0x10c);
              *(longlong *)(lVar25 + -0x10) = plVar3[0x22];
              *(int *)(lVar25 + -0x20) = (int)lVar16;
              *(undefined4 *)(lVar25 + -0x1c) = uVar6;
              *(int *)(lVar25 + -0x18) = (int)lVar17;
              *(undefined4 *)(lVar25 + -0x14) = uVar7;
              *(longlong *)(lVar25 + -0x30) = lVar12;
              *(longlong *)(lVar25 + -0x28) = lVar13;
              *(int *)(lVar25 + -0x40) = (int)lVar14;
              *(undefined4 *)(lVar25 + -0x3c) = uVar4;
              *(int *)(lVar25 + -0x38) = (int)lVar15;
              *(undefined4 *)(lVar25 + -0x34) = uVar5;
              *(undefined4 *)(lVar25 + -8) = *(undefined4 *)((longlong)plVar3 + 0xcc);
              if (*(char *)(*(longlong *)(param_1 + 0x180) + 8 + lVar27) == '\x01') {
                local_168 = lVar33;
                local_150 = lVar31;
                local_148 = lVar27;
                lVar27 = (**(code **)(*plVar3 + 0x70))(plVar3);
                if (lVar27 == 0) {
                  if (((local_15c & 1) != 0) &&
                     ((lVar27 = *(longlong *)(param_2 + 0xb0), lVar27 != 0 ||
                      (lVar27 = FUN_1448abda6(param_2), lVar27 != 0)))) {
                    FUN_14083337a(lVar27);
                    plVar24 = (longlong *)FUN_143a8b04a(lVar27);
                    if (plVar24 != (longlong *)0x0) {
                      (**(code **)(*plVar24 + 0xf0))(plVar24);
                    }
                  }
                  lVar27 = local_148;
                  FUN_1481e5598(plVar3,*(longlong *)(param_1 + 0x180) + local_148,
                                local_150 + local_168);
                  local_15c = 0;
                  lVar25 = local_158;
                  lVar33 = local_168;
                }
                else {
                  local_140 = lVar27;
                  lVar25 = FUN_14001cc68(0x198,0x10);
                  FUN_143a77396(lVar25,*(undefined8 *)(lVar26 + 0x10));
                  if (lVar25 == 0) {
                    FUN_143ad7370(local_140,0);
                    local_178 = _DAT_00000120;
                    lVar31 = local_150 + local_168;
                    lVar25 = *(longlong *)(param_1 + 0x180) + local_148;
                    lVar26 = 0;
                    lVar27 = local_148;
                    lVar33 = local_168;
                    goto LAB_1481e4fd0;
                  }
                  LOCK();
                  *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
                  UNLOCK();
                  FUN_143ad7370(local_140,lVar25);
                  lVar27 = local_148;
                  local_178 = *(undefined4 *)(lVar25 + 0x120);
                  FUN_1481e53b0(lVar25,*(longlong *)(param_1 + 0x180) + local_148,
                                local_150 + local_168,0);
                  LOCK();
                  *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + -1;
                  UNLOCK();
                  lVar25 = local_158;
                  lVar33 = local_168;
                }
              }
              else {
                lVar25 = *(longlong *)(param_1 + 0x180) + lVar27;
                local_178 = *(undefined4 *)(lVar26 + 0x120);
                lVar31 = lVar31 + lVar33;
LAB_1481e4fd0:
                FUN_1481e53b0(lVar26,lVar25,lVar31,0);
                lVar25 = local_158;
              }
            }
            lVar19 = lVar19 + 0x10;
            lVar27 = lVar27 + 0xb8;
            lVar33 = lVar33 + 0xd8;
          } while (lVar25 != lVar19);
        }
        if (*(longlong *)(param_1 + 0x1f0) != 0) {
          FUN_1481e566e(*(longlong *)(param_1 + 0x1f0),&local_100,*(int *)(param_1 + 0x198) + -1);
        }
        uVar28 = CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
        if (*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1d4)) goto LAB_1481e4b63;
        local_12c = *(int *)(param_1 + 0x198) + -1;
        local_12d = '\x01';
        local_118 = (undefined2 *)0x0;
        uStack_110 = 0;
        local_78 = 0;
        local_70 = 0;
        local_98 = (undefined2 *)0x0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        local_d8[0] = (code *)0x0;
        local_c8 = (undefined8 *)FUN_14001cc68(0x40,8);
        *local_c8 = &PTR_FUN_14ae1dfa0;
        local_c8[1] = param_1;
        local_c8[2] = &local_98;
        local_c8[3] = &local_100;
        local_c8[4] = &local_12c;
        local_c8[5] = param_3;
        local_c8[6] = &local_12d;
        local_c8[7] = &local_118;
        if (local_c8 + 1 != (longlong *)0x0) {
          local_d8[0] = FUN_143ac0bfa;
        }
        FUN_1480cfd19(local_f8,local_d8,1);
        if (local_12d != '\0') {
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1481f2982(&local_98);
          if (local_118 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar28 = CONCAT71((int7)((ulonglong)&local_12c >> 8),1);
          goto LAB_1481e4b63;
        }
        puVar21 = (undefined8 *)FUN_1481f5624(local_f8);
        puVar30 = &DAT_149dfb77a;
        if (*(int *)(puVar21 + 1) != 0) {
          puVar30 = (undefined2 *)*puVar21;
        }
        puVar32 = &DAT_149dfb77a;
        if ((int)uStack_110 != 0) {
          puVar32 = local_118;
        }
        FUN_140002266(&local_128,L"Data interface(s) %s failed to write information for system %s",
                      puVar32,puVar30);
        iVar2 = *(int *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
          FUN_1447a1bd6((longlong *)(param_3 + 8),iVar2);
        }
        lVar19 = *(longlong *)(param_3 + 8);
        lVar27 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar19 + lVar27) = 0;
        *(undefined2 **)(lVar19 + lVar27) = local_128;
        *(int *)(lVar19 + 8 + lVar27) = (int)local_120;
        *(undefined4 *)(lVar19 + 0xc + lVar27) = local_120._4_4_;
        local_120 = 0;
        local_128 = (undefined2 *)0x0;
        *puVar20 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        if (*(int *)(param_1 + 0x5c) < 0) {
          FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
        }
        puVar30 = *(undefined2 **)(param_1 + 0x50);
        if (puVar30 != (undefined2 *)0x0) {
          *puVar30 = 0;
        }
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1481f2982(&local_98);
        puVar30 = local_118;
      }
      goto LAB_1481e4b57;
    }
    if (local_100 == 0) {
      FUN_140056680(&local_118,&DAT_149e01fe8);
    }
    else {
      FUN_14010318a(local_100,&local_118,0);
    }
    puVar30 = local_118;
    if ((int)uStack_110 == 0) {
      puVar30 = &DAT_149dfb77a;
    }
    lVar19 = FUN_1412fe774(puVar20);
    if (lVar19 == 0) {
      FUN_140056680(&local_128,&DAT_149e01fe8);
    }
    else {
      FUN_14010318a(lVar19,&local_128,0);
    }
    puVar32 = local_128;
    if ((int)local_120 == 0) {
      puVar32 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_98,L"System %s != System %s",puVar32,puVar30);
    iVar2 = *(int *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(param_3 + 8),iVar2);
    }
    lVar19 = *(longlong *)(param_3 + 8);
    lVar27 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar19 + lVar27) = 0;
    *(undefined2 **)(lVar19 + lVar27) = local_98;
    *(undefined4 *)(lVar19 + 8 + lVar27) = (undefined4)uStack_90;
    *(undefined4 *)(lVar19 + 0xc + lVar27) = uStack_90._4_4_;
    uStack_90 = 0;
    local_98 = (undefined2 *)0x0;
    puVar30 = local_118;
    if (local_128 != (undefined2 *)0x0) {
      FUN_1400020a8();
      puVar30 = local_118;
    }
LAB_1481e4a7a:
    if (puVar30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *puVar20 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
    }
    puVar30 = *(undefined2 **)(param_1 + 0x50);
    if (puVar30 != (undefined2 *)0x0) {
      *puVar30 = 0;
    }
  }
LAB_1481e4b61:
  uVar28 = 0;
LAB_1481e4b63:
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar28 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e532a FUN_1481e532a body=67 status=ok
// SIG undefined FUN_1481e532a(void)

longlong FUN_1481e532a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1481f3446(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x160 + *param_1;
  FUN_1481f33ac(lVar2,1);
  return lVar2;
}



// FUNCTION 1481e536e FUN_1481e536e body=65 status=ok
// SIG undefined FUN_1481e536e(void)

void FUN_1481e536e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1481f363a(param_1,iVar1);
  }
  FUN_1481f35e8((longlong)iVar1 * 0xd8 + *param_1,param_2);
  return;
}



// FUNCTION 1481e53b0 FUN_1481e53b0 body=488 status=ok
// SIG undefined FUN_1481e53b0(void)

void FUN_1481e53b0(longlong param_1,longlong param_2,int *param_3,int param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_5 != 0) {
    *param_3 = param_5;
    param_3[2] = *(int *)(param_1 + 0x50);
    FUN_1481e24f2(param_3);
    lVar5 = (longlong)param_4;
    if (*(short *)(param_2 + 0x20) == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = 0;
      uVar4 = 0;
      do {
        lVar1 = uVar4 * 2;
        uVar4 = uVar4 + 1;
        memcpy((void *)(uVar2 * 4 + *(longlong *)(param_3 + 4)),
               (void *)((ulonglong)
                        ((uint)*(ushort *)(*(longlong *)(param_2 + 0x60) + lVar1) *
                        *(int *)(param_1 + 0x128)) + *(longlong *)(param_1 + 0x18) + lVar5 * 4),
               (ulonglong)(uint)(param_5 * 4));
        uVar2 = (ulonglong)(uint)((int)uVar2 + param_5);
      } while (uVar4 < *(ushort *)(param_2 + 0x20));
    }
    uVar3 = (uint)uVar4;
    if (*(short *)(param_2 + 0x22) != 0) {
      uVar6 = 0;
      uVar2 = 0;
      do {
        memcpy((void *)(uVar6 * 2 + *(longlong *)(param_3 + 8)),
               (void *)((ulonglong)
                        ((uint)*(ushort *)
                                (*(longlong *)(param_2 + 0x60) + (uVar4 & 0xffffffff) * 2 +
                                uVar2 * 2) * *(int *)(param_1 + 0x130)) +
                        *(longlong *)(param_1 + 0x38) + lVar5 * 2),(ulonglong)(uint)(param_5 * 2));
        uVar2 = uVar2 + 1;
        uVar6 = (ulonglong)(uint)((int)uVar6 + param_5);
      } while (uVar2 < *(ushort *)(param_2 + 0x22));
      uVar3 = uVar3 + (int)uVar2;
    }
    if (*(short *)(param_2 + 0x24) != 0) {
      uVar2 = 0;
      uVar4 = 0;
      do {
        memcpy((void *)(uVar2 * 4 + *(longlong *)(param_3 + 0xc)),
               (void *)((ulonglong)
                        ((uint)*(ushort *)
                                (*(longlong *)(param_2 + 0x60) + (ulonglong)uVar3 * 2 + uVar4 * 2) *
                        *(int *)(param_1 + 300)) + *(longlong *)(param_1 + 0x28) + lVar5 * 4),
               (ulonglong)(uint)(param_5 * 4));
        uVar4 = uVar4 + 1;
        uVar2 = (ulonglong)(uint)((int)uVar2 + param_5);
      } while (uVar4 < *(ushort *)(param_2 + 0x24));
    }
    if (0 < (longlong)param_3[0x12]) {
      memcpy(*(void **)(param_3 + 0x10),*(void **)(param_1 + 0x48),(longlong)param_3[0x12] << 2);
    }
    param_3[1] = *(int *)(param_1 + 0x138);
    if (*(char *)(param_2 + 0x27) == '\x01') {
      memcpy(*(void **)(param_3 + 0x14),
             (void *)((ulonglong)((uint)*(ushort *)(param_2 + 0x58) * *(int *)(param_1 + 300)) +
                     *(longlong *)(param_1 + 0x28)),(longlong)param_5 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 1481e5598 FUN_1481e5598 body=191 status=ok
// SIG undefined FUN_1481e5598(void)

void FUN_1481e5598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar4 = (undefined8 *)FUN_1481ee69e();
  puVar1 = puVar4 + 2;
  local_40 = puVar1;
  local_38 = puVar4;
  FUN_1481ee7c4(&local_40,puVar1);
  FUN_143a7a61a(puVar1,param_1);
  lVar3 = puVar4[0x15];
  if (lVar3 != 0) {
    local_48 = *(undefined4 *)(lVar3 + 0x120);
    FUN_1481e53b0(lVar3,param_2,param_3,0);
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e566e FUN_1481e566e body=699 status=ok
// SIG undefined FUN_1481e566e(void)

void FUN_1481e566e(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [8];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481e7ef2(param_1 + 0x28,param_3 + 1);
  lVar8 = (longlong)param_3 * 0x50 + *(longlong *)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_2 + 8);
  if (*(longlong *)(lVar10 + 0x40) != 0) {
    FUN_1481e7f6d(param_1,lVar8,L"OverrideParameters",*(longlong *)(lVar10 + 0x40));
    lVar10 = *(longlong *)(param_2 + 8);
  }
  FUN_1481e7f6d(param_1,lVar8,L"InstanceParameters",lVar10 + 0x1e8);
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x20);
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x28);
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
  if (lVar10 != 0) {
    FUN_1481e8023(param_1,lVar8,L"System Spawn",*(undefined8 *)(lVar10 + 0x430));
    FUN_1481e8023(param_1,lVar8,L"System Update",*(undefined8 *)(lVar10 + 0x438));
  }
  lVar10 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x110);
  if (lVar10 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x108);
    lVar7 = 0;
    do {
      uVar5 = FUN_144b356c0(*(undefined8 *)(lVar4 + lVar7));
      FUN_1481c5cf4(uVar5,local_60);
      FUN_1400021e4(local_60,&local_58);
      puVar9 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar9 = local_58;
      }
      lVar6 = *(longlong *)(lVar4 + lVar7);
      FUN_140002266(local_70,L"%s RendererBindings",puVar9);
      FUN_1481e8108(param_1,lVar8,local_70,lVar6 + 0x40);
      uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + lVar7) + 0x18);
      puVar9 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar9 = local_58;
      }
      FUN_140002266(local_80,L"%s GPUContext",puVar9);
      FUN_1481e818d(param_1,lVar8,local_80,uVar5);
      lVar6 = (**(code **)(**(longlong **)(lVar4 + lVar7) + 0x68))();
      if (lVar6 != 0) {
        puVar9 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar9 = local_58;
        }
        local_a8 = lVar6 + 0x1a0;
        FUN_140002266(local_90,L"%s Spawn",puVar9);
        FUN_1481e8255(param_1,lVar8,local_90,local_a8);
        puVar9 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar9 = local_58;
        }
        FUN_140002266(local_a0,L"%s Update",puVar9);
        FUN_1481e8255(param_1,lVar8,local_a0,lVar6 + 0x448);
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar10 * 0x10 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e592a FUN_1481e592a body=1013 status=ok
// SIG undefined FUN_1481e592a(void)

bool FUN_1481e592a(longlong param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x198) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0x50);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  uVar5 = local_90;
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    plVar4 = (longlong *)(param_1 + 0x1a0);
    local_60 = param_1 + 0x1b0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x1c8) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_a0 = local_68;
    local_98 = local_60;
    local_90 = local_58;
    uVar5 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_70 = 0;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a8 = plVar4;
    local_80 = plVar4;
    local_78 = plVar4;
    if (local_90._4_4_ < *(int *)(local_60 + 0x18)) {
      bVar9 = 1;
      iVar3 = local_90._4_4_;
      local_90 = uVar5;
      do {
        plVar4 = (longlong *)FUN_144741050(*local_a8 + (longlong)iVar3 * 0x20 + 8);
        if ((short)plVar4[1] == 1) {
          lVar6 = *plVar4;
        }
        else {
          lVar6 = 0;
        }
        lVar7 = *(longlong *)(lVar6 + 0x110);
        if (lVar7 == 0) {
          FUN_140aa6c08(lVar6);
          lVar7 = *(longlong *)(lVar6 + 0x110);
        }
        uVar5 = FUN_1458bcb8e();
        plVar4 = (longlong *)FUN_144718840(lVar7,uVar5);
        bVar2 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,*(undefined8 *)
                                   (*local_a8 + 0x10 + (longlong)local_90._4_4_ * 0x20));
        bVar9 = bVar9 & bVar2;
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar3 = local_90._4_4_;
      } while (local_90._4_4_ < *(int *)(local_98 + 0x18));
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_1481f2488(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      }
      uVar5 = local_90;
      if (bVar9 == 0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        if (*(int *)(param_1 + 0x5c) < 0) {
          FUN_1446f8c06((undefined8 *)(param_1 + 0x50),0);
        }
        puVar1 = *(undefined2 **)(param_1 + 0x50);
        uVar5 = local_90;
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = 0;
        }
      }
    }
  }
  local_90 = uVar5;
  if (((*(byte *)(param_1 + 0x6c) & 4) != 0) && (0 < *(int *)(param_1 + 0x198))) {
    if (*(int *)(param_1 + 0x198) == 1) {
      lVar7 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = *(longlong *)(param_1 + 400);
        lVar8 = lVar6 * 0x160;
        FUN_143abe7f2(param_1 + 200,lVar7 + lVar8 + 0xb0,lVar7 + lVar8 + 0x210);
        if (0 < *(int *)(param_1 + 0x188)) {
          lVar11 = 0x40;
          lVar10 = 0;
          lVar12 = 0;
          do {
            FUN_143abe7f2(*(longlong *)(param_1 + 0x180) + lVar10,
                          *(longlong *)(lVar7 + lVar8 + 0x148) + lVar11,
                          *(longlong *)(lVar7 + lVar8 + 0x2a8) + lVar11);
            lVar12 = lVar12 + 1;
            lVar10 = lVar10 + 0xb8;
            lVar11 = lVar11 + 0xd8;
          } while (lVar12 < *(int *)(param_1 + 0x188));
        }
        lVar6 = lVar6 + 1;
        lVar7 = (longlong)*(int *)(param_1 + 0x198) + -1;
      } while (lVar6 < lVar7);
    }
    if ((*(char *)(param_1 + 0xef) != '\0') &&
       (lVar6 = lVar7 * 0x160 + *(longlong *)(param_1 + 400), 0 < *(int *)(lVar6 + 0x108))) {
      lVar7 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar6 + 0x100) + lVar7 * 4) = 0xffffffff;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar6 + 0x108));
    }
    iVar3 = *(int *)(param_1 + 0x188);
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x180) + 0x27 + lVar6 * 0xb8) != '\0') &&
           (lVar7 = *(longlong *)
                     (*(longlong *)(param_1 + 400) + 0x148 +
                     (longlong)(*(int *)(param_1 + 0x198) + -1) * 0x160) + lVar6 * 0xd8,
           0 < *(int *)(lVar7 + 0x98))) {
          lVar8 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar7 + 0x90) + lVar8 * 4) = 0xffffffff;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(lVar7 + 0x98));
          iVar3 = *(int *)(param_1 + 0x188);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
  FUN_148086488(&DAT_14cb433c8,param_1);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return *(longlong *)(param_1 + 0x40) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e5d20 FUN_1481e5d20 body=326 status=ok
// SIG undefined FUN_1481e5d20(void)

ulonglong FUN_1481e5d20(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (((param_2 != 0) && (lVar8 = FUN_1412fe774(param_1 + 0x38), lVar8 == param_2)) &&
     (cVar5 = FUN_143ac4484(param_2), cVar5 != '\0')) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(char *)(param_1 + 0xc0) != '\x01') goto LAB_1481e5d4b;
    lVar8 = FUN_143ac447c(param_2);
    uVar1 = *(uint *)(lVar8 + 8);
    if (uVar1 == *(uint *)(param_1 + 0x188)) {
      bVar6 = FUN_1481e5e66(param_1 + 200,param_2 + 0x180);
      if (0 < (int)uVar1) {
        lVar8 = 0;
        lVar10 = 0;
        lVar11 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + lVar11);
          lVar3 = *(longlong *)(param_1 + 0x180);
          lVar4 = *(longlong *)(lVar3 + lVar8);
          bVar7 = FUN_144b35680(*(longlong *)(param_2 + 0xb8) + lVar10);
          bVar6 = (bVar7 ^ lVar4 == 0) & bVar6;
          if (*(longlong *)(lVar3 + lVar8) != 0) {
            bVar7 = FUN_1481e5e66(lVar3 + lVar8,lVar2 + 0xf0);
            bVar6 = bVar6 & *(char *)(lVar3 + 8 + lVar8) == *(char *)(lVar2 + 300) & bVar7;
          }
          lVar11 = lVar11 + 0x10;
          lVar10 = lVar10 + 0x48;
          lVar8 = lVar8 + 0xb8;
        } while ((ulonglong)uVar1 << 4 != lVar11);
      }
      if (bVar6 != 0) {
        *(undefined1 *)(param_1 + 0xc0) = 0;
        goto LAB_1481e5d4b;
      }
    }
  }
  uVar9 = 0;
LAB_1481e5d4b:
  return uVar9 & 0xffffffff;
}



// FUNCTION 1481e5e66 FUN_1481e5e66 body=3314 status=ok
// SIG undefined FUN_1481e5e66(void)

ulonglong FUN_1481e5e66(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined2 uVar9;
  short sVar10;
  longlong *plVar11;
  undefined2 uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  code *pcVar20;
  undefined2 uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  ulonglong local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar22 = (uint)*(ushort *)(param_1 + 0x24) +
           (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar19 = 0;
  uVar23 = uVar22;
  if (*(uint *)(param_1 + 0x7c) != uVar22) {
    FUN_1448759c8(plVar1);
    iVar19 = *(int *)(param_1 + 0x78);
    uVar23 = *(uint *)(param_1 + 0x7c);
  }
  *(uint *)(param_1 + 0x78) = iVar19 + uVar22;
  if (uVar23 - iVar19 < uVar22) {
    FUN_14488eebe(plVar1);
  }
  local_a8 = param_2;
  memset((void *)((longlong)iVar19 * 2 + *(longlong *)(param_1 + 0x70)),0,(ulonglong)(uVar22 * 2));
  local_b8 = (longlong *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_1481f0bae();
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if ((*(char *)(param_1 + 0x27) == '\x01') && ((longlong)*(int *)(param_1 + 0x18) != 0)) {
    param_2 = *(longlong **)(param_1 + 0x10);
    plVar11 = param_2 + (longlong)*(int *)(param_1 + 0x18) * 3;
LAB_1481e5f5d:
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      lVar15 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar15) == *param_2) {
          plVar6 = (longlong *)FUN_144741050(param_2 + 1);
          lVar15 = DAT_14cb42130;
          if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42130);
          }
          if (((*plVar6 != lVar15) || ((short)plVar6[1] != DAT_14cb42138)) ||
             (*(char *)((longlong)plVar6 + 10) != DAT_14cb4213a)) {
            plVar6 = (longlong *)FUN_144741050();
            lVar15 = DAT_14cb42190;
            if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
            if (((*plVar6 != lVar15) || ((short)plVar6[1] != DAT_14cb42198)) ||
               (*(char *)((longlong)plVar6 + 10) != DAT_14cb4219a)) break;
          }
          local_70 = (int)param_2[1];
          local_78 = *param_2;
          local_88 = DAT_14cb3aef8;
          local_80 = DAT_14cb3af00 + -1;
          if (DAT_14cb3af00 == 0) {
            local_80 = 0;
          }
          cVar4 = FUN_1481f88f6(&local_78,&local_88);
          uVar13 = uStack_50;
          if ((cVar4 != '\0') && ((longlong)(int)local_a8[1] != 0)) {
            lVar15 = *local_a8;
            uVar3 = (longlong)(int)local_a8[1] * 0xc;
            uVar16 = 0;
            goto LAB_1481e6090;
          }
          break;
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar15);
    }
    goto LAB_1481e5f83;
  }
LAB_1481e610a:
  uVar13 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x10);
    plVar18 = plVar11 + (longlong)*(int *)(param_1 + 0x18) * 3;
    uVar23 = (uint)*(ushort *)(param_1 + 0x20);
    iVar19 = (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x20);
    uVar13 = 0;
    plVar6 = local_a8;
    local_98 = plVar18;
LAB_1481e6147:
    if ((longlong)(int)plVar6[1] != 0) {
      lVar15 = 0;
      do {
        if ((*(longlong *)(*plVar6 + lVar15) == *plVar11) &&
           (*(int *)(*plVar6 + 8 + lVar15) == (int)plVar11[1])) {
          iVar5 = (int)(lVar15 >> 2) * -0x55555555;
          if (iVar5 != -1) {
            lVar15 = (longlong)iVar5 * 0x20;
            if (((*(short *)(plVar6[2] + 8 + lVar15) == *(short *)((longlong)plVar11 + 0xe)) &&
                (puVar14 = (undefined4 *)(plVar6[2] + lVar15),
                *(short *)(puVar14 + 3) == *(short *)((longlong)plVar11 + 0x12))) &&
               (*(short *)((longlong)puVar14 + 10) == *(short *)((longlong)plVar11 + 0x16)))
            goto LAB_1481e6182;
            uVar13 = 0;
            goto LAB_1481e67cb;
          }
          break;
        }
        lVar15 = lVar15 + 0xc;
      } while ((longlong)(int)plVar6[1] * 0xc != lVar15);
    }
    puVar14 = (undefined4 *)0x0;
LAB_1481e6182:
    if ((longlong)(int)uStack_60 != 0) {
      lVar15 = 0;
      do {
        if ((*(longlong *)(local_68 + lVar15) == *plVar11) &&
           (*(int *)(local_68 + 8 + lVar15) == (int)plVar11[1])) goto LAB_1481e6208;
        lVar15 = lVar15 + 0xc;
      } while ((longlong)(int)uStack_60 * 0xc != lVar15);
    }
    if (puVar14 != (undefined4 *)0x0) {
      if ((*(char *)(param_1 + 0x27) == '\x01') && ((longlong)*(int *)(param_1 + 0x48) != 0)) {
        lVar15 = 0;
        do {
          bVar24 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar15) == *plVar11;
          if (bVar24) break;
          bVar25 = (longlong)*(int *)(param_1 + 0x48) * 8 + -8 != lVar15;
          lVar15 = lVar15 + 8;
        } while (bVar25);
      }
      else {
        bVar24 = false;
      }
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        lVar15 = (longlong)*(int *)(param_1 + 0x38) * 8;
        lVar17 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar17) == *plVar11) {
            local_ac = (undefined4)CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
            goto LAB_1481e6318;
          }
          lVar17 = lVar17 + 8;
        } while (lVar15 != lVar17);
      }
      if (!bVar24) goto LAB_1481e620a;
      local_ac = 0;
LAB_1481e6318:
      plVar18 = plVar11 + 1;
      local_a0 = uVar23;
      local_9c = iVar19;
      local_90 = uVar13;
      plVar7 = (longlong *)FUN_144741050(plVar18);
      lVar15 = DAT_14cb42130;
      if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42130);
      }
      plVar6 = local_a8;
      if (((*plVar7 == lVar15) && ((short)plVar7[1] == DAT_14cb42138)) &&
         (*(char *)((longlong)plVar7 + 10) == DAT_14cb4213a)) {
        if (bVar24) {
          if ((longlong)(int)uStack_50 != 0) {
            lVar15 = 0;
            do {
              if ((*(longlong *)(local_58 + lVar15) == *plVar11) &&
                 (*(int *)(local_58 + 8 + lVar15) == (int)*plVar18)) {
                iVar19 = (int)(lVar15 >> 2) * -0x55555555;
                if (iVar19 != -1) {
                  plVar6 = (longlong *)(local_68 + (longlong)iVar19 * 0xc);
                  iVar19 = -1;
                  if ((longlong)(int)local_a8[1] == 0) goto LAB_1481e6a63;
                  lVar15 = 0;
                  goto LAB_1481e6656;
                }
                break;
              }
              lVar15 = lVar15 + 0xc;
            } while ((longlong)(int)uStack_50 * 0xc != lVar15);
          }
          pcVar20 = FUN_1481ef23e;
          pcVar8 = FUN_1481eefa6;
        }
        else {
          if (*(char *)(param_1 + 0x28) != '\x01') {
            uVar12 = *(undefined2 *)puVar14;
            iVar19 = *(int *)(param_1 + 0x88);
            *(uint *)(param_1 + 0x88) = iVar19 + 1U;
            if (*(uint *)(param_1 + 0x8c) < iVar19 + 1U) {
              FUN_1481f0bde(local_b8,iVar19);
            }
            lVar15 = *local_b8 + (longlong)iVar19 * 0x10;
            uVar9 = *(undefined2 *)((longlong)plVar11 + 0xc);
            *(undefined2 *)(*local_b8 + (longlong)iVar19 * 0x10) = uVar9;
            pcVar20 = FUN_1481ef71c;
            uVar21 = uVar12;
            goto LAB_1481e662a;
          }
          pcVar20 = FUN_1481ef600;
          pcVar8 = FUN_1481ef396;
        }
        if ((char)local_ac != '\0') {
          pcVar20 = pcVar8;
        }
        uVar12 = *(undefined2 *)puVar14;
        iVar19 = *(int *)(param_1 + 0x88);
        *(uint *)(param_1 + 0x88) = iVar19 + 1U;
        if (*(uint *)(param_1 + 0x8c) < iVar19 + 1U) {
          FUN_1481f0bde(local_b8,iVar19);
        }
        lVar15 = *local_b8 + (longlong)iVar19 * 0x10;
        uVar9 = *(undefined2 *)((longlong)plVar11 + 0xc);
        *(undefined2 *)(*local_b8 + (longlong)iVar19 * 0x10) = uVar9;
        uVar21 = uVar12;
      }
      else {
        plVar7 = (longlong *)FUN_144741050(plVar18);
        lVar15 = DAT_14cb42190;
        if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42190);
        }
        plVar6 = local_a8;
        if (((*plVar7 == lVar15) && ((short)plVar7[1] == DAT_14cb42198)) &&
           (*(char *)((longlong)plVar7 + 10) == DAT_14cb4219a)) {
          if (bVar24) {
            if ((longlong)(int)uStack_50 != 0) {
              lVar15 = 0;
              do {
                if ((*(longlong *)(local_58 + lVar15) == *plVar11) &&
                   (*(int *)(local_58 + 8 + lVar15) == (int)*plVar18)) {
                  iVar19 = (int)(lVar15 >> 2) * -0x55555555;
                  if (iVar19 != -1) {
                    plVar6 = (longlong *)(local_68 + (longlong)iVar19 * 0xc);
                    iVar19 = -1;
                    if ((longlong)(int)local_a8[1] == 0) goto LAB_1481e6b0c;
                    lVar15 = 0;
                    goto LAB_1481e6679;
                  }
                  break;
                }
                lVar15 = lVar15 + 0xc;
              } while ((longlong)(int)uStack_50 * 0xc != lVar15);
            }
            uVar12 = *(undefined2 *)puVar14;
            iVar19 = *(int *)(param_1 + 0x88);
            *(uint *)(param_1 + 0x88) = iVar19 + 1U;
            if (*(uint *)(param_1 + 0x8c) < iVar19 + 1U) {
              FUN_1481f0bde(local_b8,iVar19);
            }
            lVar15 = *local_b8 + (longlong)iVar19 * 0x10;
            uVar9 = *(undefined2 *)((longlong)plVar11 + 0xc);
            *(undefined2 *)(*local_b8 + (longlong)iVar19 * 0x10) = uVar9;
            pcVar20 = FUN_1481f0382;
            uVar21 = uVar12;
          }
          else {
            uVar12 = *(undefined2 *)puVar14;
            iVar19 = *(int *)(param_1 + 0x88);
            *(uint *)(param_1 + 0x88) = iVar19 + 1U;
            if (*(uint *)(param_1 + 0x8c) < iVar19 + 1U) {
              FUN_1481f0bde(local_b8,iVar19);
            }
            lVar15 = *local_b8 + (longlong)iVar19 * 0x10;
            uVar9 = *(undefined2 *)((longlong)plVar11 + 0xc);
            *(undefined2 *)(*local_b8 + (longlong)iVar19 * 0x10) = uVar9;
            pcVar20 = FUN_1481f073a;
            uVar21 = uVar12;
          }
        }
        else {
          plVar7 = (longlong *)FUN_144741050();
          plVar6 = local_a8;
          lVar15 = DAT_14cb41370;
          if ((DAT_14cb41370 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          plVar18 = local_98;
          uVar13 = local_90;
          iVar19 = local_9c;
          uVar23 = local_a0;
          if (((*plVar7 != lVar15) || ((short)plVar7[1] != DAT_14cb41378)) ||
             ((char)local_ac != '\x01' || *(char *)((longlong)plVar7 + 10) != DAT_14cb4137a))
          goto LAB_1481e620a;
          uVar12 = *(undefined2 *)puVar14;
          iVar19 = *(int *)(param_1 + 0x88);
          *(uint *)(param_1 + 0x88) = iVar19 + 1U;
          if (*(uint *)(param_1 + 0x8c) < iVar19 + 1U) {
            FUN_1481f0bde(local_b8,iVar19);
          }
          lVar15 = *local_b8 + (longlong)iVar19 * 0x10;
          uVar9 = *(undefined2 *)((longlong)plVar11 + 0xc);
          *(undefined2 *)(*local_b8 + (longlong)iVar19 * 0x10) = uVar9;
          pcVar20 = FUN_1481f08d4;
          uVar21 = uVar12;
        }
      }
      goto LAB_1481e662a;
    }
LAB_1481e6208:
    puVar14 = (undefined4 *)0x0;
    goto LAB_1481e620a;
  }
LAB_1481e67cb:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
  while (uVar16 = uVar16 + 0xc, uVar3 != uVar16) {
LAB_1481e6090:
    if ((*(longlong *)(lVar15 + uVar16) == *param_2) &&
       (*(int *)(lVar15 + 8 + uVar16) == (int)param_2[1])) {
      if ((int)(uVar16 >> 2) * -0x55555555 != -1) {
        uVar16 = 0;
        goto LAB_1481e60af;
      }
      break;
    }
  }
  goto LAB_1481e5f83;
  while (uVar16 = uVar16 + 0xc, uVar3 != uVar16) {
LAB_1481e60af:
    if ((*(longlong *)(lVar15 + uVar16) == local_78) && (*(int *)(lVar15 + 8 + uVar16) == local_70))
    {
      if ((int)(uVar16 >> 2) * -0x55555555 != -1) {
        lVar15 = (longlong)(int)uStack_50;
        uVar23 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar23);
        if (uStack_50._4_4_ < uVar23) {
          FUN_14024cd4c(&local_58,uVar13 & 0xffffffff);
        }
        uVar13 = uStack_60;
        *(int *)(local_58 + 8 + lVar15 * 0xc) = local_70;
        *(longlong *)(local_58 + lVar15 * 0xc) = local_78;
        lVar15 = (longlong)(int)uStack_60;
        uVar23 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar23);
        if (uStack_60._4_4_ < uVar23) {
          FUN_14024cd4c(&local_68,uVar13 & 0xffffffff);
        }
        *(int *)(local_68 + 8 + lVar15 * 0xc) = (int)param_2[1];
        *(longlong *)(local_68 + lVar15 * 0xc) = *param_2;
      }
      break;
    }
  }
LAB_1481e5f83:
  param_2 = param_2 + 3;
  if (param_2 == plVar11) goto LAB_1481e610a;
  goto LAB_1481e5f5d;
  while (lVar15 = lVar15 + 0xc, (longlong)(int)local_a8[1] * 0xc != lVar15) {
LAB_1481e6656:
    if ((*(longlong *)(*local_a8 + lVar15) == *plVar6) &&
       (*(int *)(*local_a8 + 8 + lVar15) == (int)plVar6[1])) {
      iVar19 = (int)(lVar15 >> 2) * -0x55555555;
      break;
    }
  }
LAB_1481e6a63:
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar17 = *(longlong *)(param_1 + 0x10);
    lVar15 = 0;
    do {
      if ((*(longlong *)(lVar17 + lVar15) == *plVar6) &&
         (*(int *)(lVar17 + 8 + lVar15) == (int)plVar6[1])) {
        iVar5 = (int)(lVar15 / 0x18);
        if (iVar5 != -1) {
          lVar17 = lVar17 + (longlong)iVar5 * 0x18;
          goto LAB_1481e6a86;
        }
        break;
      }
      lVar2 = lVar17 + lVar15;
      lVar15 = lVar15 + 0x18;
    } while (lVar2 + 0x18 != lVar17 + (longlong)*(int *)(param_1 + 0x18) * 0x18);
  }
  lVar17 = 0;
LAB_1481e6a86:
  pcVar20 = FUN_1481eed4c;
  pcVar8 = FUN_1481ee868;
  goto LAB_1481e6a99;
  while (lVar15 = lVar15 + 0xc, (longlong)(int)local_a8[1] * 0xc != lVar15) {
LAB_1481e6679:
    if ((*(longlong *)(*local_a8 + lVar15) == *plVar6) &&
       (*(int *)(*local_a8 + 8 + lVar15) == (int)plVar6[1])) {
      iVar19 = (int)(lVar15 >> 2) * -0x55555555;
      break;
    }
  }
LAB_1481e6b0c:
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar17 = *(longlong *)(param_1 + 0x10);
    lVar15 = 0;
    do {
      if ((*(longlong *)(lVar17 + lVar15) == *plVar6) &&
         (*(int *)(lVar17 + 8 + lVar15) == (int)plVar6[1])) {
        iVar5 = (int)(lVar15 / 0x18);
        if (iVar5 != -1) {
          lVar17 = lVar17 + (longlong)iVar5 * 0x18;
          goto LAB_1481e6b2f;
        }
        break;
      }
      lVar2 = lVar17 + lVar15;
      lVar15 = lVar15 + 0x18;
    } while (lVar2 + 0x18 != lVar17 + (longlong)*(int *)(param_1 + 0x18) * 0x18);
  }
  lVar17 = 0;
LAB_1481e6b2f:
  pcVar20 = FUN_1481efefe;
  pcVar8 = FUN_1481ef920;
LAB_1481e6a99:
  if ((char)local_ac != '\0') {
    pcVar20 = pcVar8;
  }
  uVar21 = *(undefined2 *)(local_a8[2] + (longlong)iVar19 * 0x20);
  uVar12 = *(undefined2 *)puVar14;
  iVar19 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar19 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar19 + 1U) {
    FUN_1481f0bde(local_b8,iVar19);
  }
  lVar15 = *local_b8 + (longlong)iVar19 * 0x10;
  uVar9 = *(undefined2 *)(lVar17 + 0xc);
  *(undefined2 *)(*local_b8 + (longlong)iVar19 * 0x10) = *(undefined2 *)((longlong)plVar11 + 0xc);
  plVar6 = local_a8;
LAB_1481e662a:
  *(undefined2 *)(lVar15 + 2) = uVar9;
  *(undefined2 *)(lVar15 + 4) = uVar12;
  *(undefined2 *)(lVar15 + 6) = uVar21;
  *(code **)(lVar15 + 8) = pcVar20;
  puVar14 = (undefined4 *)0x0;
  plVar18 = local_98;
  uVar13 = local_90;
  iVar19 = local_9c;
  uVar23 = local_a0;
LAB_1481e620a:
  if (*(short *)((longlong)plVar11 + 0xe) != 0) {
    lVar15 = 0;
    do {
      if (puVar14 == (undefined4 *)0x0) {
        sVar10 = -1;
      }
      else {
        sVar10 = (short)*puVar14 + (short)lVar15;
      }
      *(short *)(*plVar1 + (longlong)(int)uVar13 * 2 + lVar15 * 2) = sVar10;
      lVar15 = lVar15 + 1;
    } while ((uint)lVar15 < (uint)*(ushort *)((longlong)plVar11 + 0xe));
    uVar13 = (ulonglong)((int)uVar13 + (uint)lVar15);
  }
  if (*(short *)((longlong)plVar11 + 0x12) != 0) {
    lVar15 = 0;
    do {
      if (puVar14 == (undefined4 *)0x0) {
        sVar10 = -1;
      }
      else {
        sVar10 = (short)puVar14[1] + (short)lVar15;
      }
      *(short *)(*plVar1 + (longlong)(int)uVar23 * 2 + lVar15 * 2) = sVar10;
      lVar15 = lVar15 + 1;
    } while ((uint)lVar15 < (uint)*(ushort *)((longlong)plVar11 + 0x12));
    uVar23 = uVar23 + (uint)lVar15;
  }
  if (*(short *)((longlong)plVar11 + 0x16) != 0) {
    lVar15 = 0;
    do {
      if (puVar14 == (undefined4 *)0x0) {
        sVar10 = -1;
      }
      else {
        sVar10 = *(short *)((longlong)puVar14 + 2) + (short)lVar15;
      }
      *(short *)(*plVar1 + (longlong)iVar19 * 2 + lVar15 * 2) = sVar10;
      lVar15 = lVar15 + 1;
    } while ((uint)lVar15 < (uint)*(ushort *)((longlong)plVar11 + 0x16));
    iVar19 = iVar19 + (uint)lVar15;
  }
  plVar11 = plVar11 + 3;
  if (plVar11 == plVar18) goto LAB_1481e67c8;
  goto LAB_1481e6147;
LAB_1481e67c8:
  uVar13 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
  goto LAB_1481e67cb;
}



// FUNCTION 1481e6b5a FUN_1481e6b5a body=388 status=ok
// SIG undefined FUN_1481e6b5a(void)

undefined8 FUN_1481e6b5a(longlong param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  
  auVar12 = ZEXT416((uint)(param_2 * 10000.0 + 0.5));
  auVar12 = roundps(auVar12,auVar12,1);
  auVar12._0_4_ = auVar12._0_4_ / 10000.0;
  uVar4 = auVar12._0_8_;
  fVar14 = auVar12._0_4_ - *(float *)(param_1 + 0x60);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 100);
  if (fVar1 < fVar14) {
    return 0;
  }
  uVar3 = *(int *)(param_1 + 0x198) - 1;
  if (fVar1 <= 0.0) {
    lVar8 = *(longlong *)(param_1 + 400);
    uVar7 = 0;
    if (auVar12._0_4_ < *(float *)(lVar8 + 0x6c)) goto LAB_1481e6c7b;
    lVar9 = 0;
    uVar7 = 0;
  }
  else {
    fVar14 = (float)(int)uVar3 * (fVar14 / fVar1);
    uVar5 = (int)ROUND(fVar14 + fVar14 + -0.5) >> 1;
    uVar7 = (ulonglong)uVar5;
    lVar8 = *(longlong *)(param_1 + 400);
    lVar9 = (longlong)(int)uVar5;
    if (auVar12._0_4_ < *(float *)(lVar8 + 0x6c + lVar9 * 0x160)) {
      if (0 < (int)uVar5) {
        pfVar10 = (float *)((ulonglong)uVar5 * 0x160 + lVar8 + 0x6c);
        uVar7 = (ulonglong)uVar5;
        do {
          if (*pfVar10 <= auVar12._0_4_) goto LAB_1481e6c7b;
          pfVar10 = pfVar10 + -0x58;
          bVar2 = 1 < (longlong)uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar2);
        uVar7 = 0;
      }
      goto LAB_1481e6c7b;
    }
  }
  if ((int)uVar7 <= (int)uVar3) {
    uVar7 = (ulonglong)uVar3;
  }
  pfVar10 = (float *)(lVar9 * 0x160 + lVar8 + 0x1cc);
  lVar11 = 0;
  do {
    if (lVar9 - (int)uVar7 == lVar11) goto LAB_1481e6cd1;
    lVar11 = lVar11 + -1;
    fVar14 = *pfVar10;
    pfVar10 = pfVar10 + 0x58;
  } while (fVar14 <= auVar12._0_4_);
  uVar7 = (ulonglong)(~(uint)lVar11 + (int)lVar9);
LAB_1481e6c7b:
  fVar14 = 0.0;
  iVar6 = (int)uVar7;
  if (iVar6 < (int)uVar3) {
    fVar14 = *(float *)(lVar8 + 0x6c + (longlong)iVar6 * 0x160);
    auVar13._0_4_ = auVar12._0_4_ - fVar14;
    auVar13._4_12_ = auVar12._4_12_;
    uVar4 = auVar13._0_8_;
    fVar14 = auVar13._0_4_ /
             (*(float *)(lVar8 + 0x6c + (longlong)(int)(iVar6 + 1U) * 0x160) - fVar14);
    if ((((*(uint *)(param_1 + 0x6c) & 4) == 0) && ((*(uint *)(param_1 + 0x6c) & 8) == 0)) &&
       (0.5 < fVar14)) {
      uVar7 = (ulonglong)(iVar6 + 1U);
LAB_1481e6cd1:
      fVar14 = 0.0;
    }
  }
  uVar4 = FUN_1481e6cde(uVar4,uVar7,fVar14,param_3);
  return uVar4;
}



// FUNCTION 1481e6cde FUN_1481e6cde body=3610 status=ok
// SIG undefined FUN_1481e6cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1481e6cde(longlong param_1,int param_2,ulonglong param_3,longlong param_4)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  char cVar8;
  double *pdVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  double *pdVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auStack_418 [32];
  double *local_3f8;
  double *local_3f0;
  double *local_3e8;
  double *local_3e0;
  double *local_3d8;
  longlong local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  longlong local_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [8];
  longlong local_300;
  longlong local_2f8;
  longlong *local_2f0;
  int local_2e0;
  uint local_2dc;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  code *local_2b8 [2];
  undefined8 *local_2a8;
  undefined1 local_278 [16];
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  undefined1 local_1f8 [16];
  double local_1e8;
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
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_2dc = (uint)param_3;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_2e0 = param_2;
  FUN_1481e7afa(local_308,param_4);
  if (local_2f8 == 0) {
LAB_1481e6d9e:
    uVar23 = 0;
  }
  else {
    pdVar21 = (double *)((longlong)param_2 * 0x160 + *(longlong *)(param_1 + 400));
    puVar19 = &DAT_14c846480;
    puVar20 = (undefined8 *)local_368;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar20 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
    }
    lVar17 = FUN_14479d2ce(param_4 + 0x48);
    auVar26 = _DAT_149934d80;
    local_380 = param_4;
    if (lVar17 != 0) {
      lVar18 = 0xc;
      puVar19 = (undefined8 *)(lVar17 + 0x240);
      puVar20 = (undefined8 *)local_368;
      while( true ) {
        if (lVar18 == 0) break;
        lVar18 = lVar18 + -1;
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      auVar30 = *(undefined1 (*) [16])(pdVar21 + 8);
      auVar49 = *(undefined1 (*) [16])(pdVar21 + 10);
      auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar30._8_8_));
      auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar30._0_8_));
      uVar10 = movmskpd((int)(undefined8 *)(lVar17 + 0x240),auVar28);
      auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._8_8_));
      auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_));
      iVar15 = movmskpd(0,auVar44);
      uVar16 = iVar15 << 2 | uVar10;
      if (uVar16 == 0) {
        local_3a8 = DAT_14c8464a0;
        dStack_3a0 = DAT_14c8464a8;
        local_398 = DAT_14c8464b0;
        dStack_390 = DAT_14c8464b8;
        local_3c8 = DAT_14c8464d0;
        dStack_3c0 = dRam000000014c8464d8;
        uVar32 = (undefined4)DAT_14c8464c0;
        uVar33 = DAT_14c8464c0._4_4_;
        uVar34 = (undefined4)DAT_14c8464c8;
        uVar35 = DAT_14c8464c8._4_4_;
        dVar38 = DAT_14c846490;
        dVar43 = DAT_14c846498;
        dVar45 = DAT_14c846480;
        dVar39 = DAT_14c846488;
      }
      else {
        auVar44 = divpd(_DAT_149934d80,auVar30);
        auVar28 = divpd(ZEXT816(0x3ff0000000000000),auVar49);
        dVar24 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar30._0_8_)) & auVar44._0_8_);
        uVar32 = SUB84(dVar24,0);
        uVar33 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar51 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar30._8_8_)) & auVar44._8_8_);
        uVar34 = SUB84(dVar51,0);
        uVar35 = (undefined4)((ulonglong)dVar51 >> 0x20);
        local_3c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_)) & auVar28._0_8_
                            );
        dVar38 = pdVar21[2] * -1.0;
        dVar43 = pdVar21[3] * 1.0;
        dVar45 = -*pdVar21;
        dVar39 = -pdVar21[1];
        dVar24 = pdVar21[4] * dVar24;
        dVar51 = pdVar21[5] * dVar51;
        dStack_3c0 = 0.0;
        dVar6 = pdVar21[6] * local_3c8;
        dVar42 = dVar51 * dVar45 - dVar39 * dVar24;
        dVar27 = dVar6 * dVar39 - dVar38 * dVar51;
        dVar46 = dVar24 * dVar38 - dVar45 * dVar6;
        dVar27 = dVar27 + dVar27;
        dVar46 = dVar46 + dVar46;
        dVar42 = dVar42 + dVar42;
        local_3a8 = 0.0 - ((dVar42 * dVar39 - dVar46 * dVar38) + dVar43 * dVar27 + dVar24);
        dStack_3a0 = 0.0 - (dVar42 * *pdVar21 + dVar38 * dVar27 + dVar43 * dVar46 + dVar51);
        local_398 = 0.0 - (dVar43 * dVar42 + dVar6 + (dVar46 * dVar45 - dVar27 * dVar39));
        dStack_390 = 0.0;
      }
      dVar42 = dStack_3c0;
      dVar6 = local_3c8;
      local_348 = (double)*(float *)(param_4 + 0xc) * -65536.0 + local_348;
      dStack_340 = (double)*(float *)(param_4 + 0x10) * -65536.0 + dStack_340;
      local_3b8 = (double)*(float *)(param_4 + 0x14) * -65536.0 + local_338;
      dStack_3b0 = dStack_330 + 0.0;
      dVar24 = local_328._0_8_;
      dVar51 = local_328._8_8_;
      auVar30._4_4_ = uVar33;
      auVar30._0_4_ = uVar32;
      auVar30._8_4_ = uVar34;
      auVar30._12_4_ = uVar35;
      auVar28 = minpd(local_328,auVar30);
      local_378 = local_318;
      auVar30 = local_378;
      auVar49._8_8_ = dStack_3c0;
      auVar49._0_8_ = local_3c8;
      auVar49 = minpd(local_318,auVar49);
      auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
      iVar15 = movmskpd(uVar10,auVar29);
      auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      uVar10 = movmskpd(uVar16,auVar50);
      local_378._0_8_ = local_318._0_8_;
      uVar13 = local_378._0_8_;
      local_378._8_8_ = local_318._8_8_;
      uVar7 = local_378._8_8_;
      local_378 = auVar30;
      if ((uVar10 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar41 = (double)local_358._0_8_ * dVar38;
        dVar46 = (double)local_368._8_8_ * dVar38 * -1.0 +
                 (double)local_358._0_8_ * dVar39 +
                 dVar45 * (double)local_358._8_8_ * 1.0 + dVar43 * (double)local_368._0_8_;
        dVar27 = (double)local_368._0_8_ * dVar38 * 1.0 +
                 (double)local_358._8_8_ * dVar39 +
                 dVar45 * (double)local_358._0_8_ * -1.0 + dVar43 * (double)local_368._8_8_;
        local_358._0_8_ =
             (double)local_358._8_8_ * dVar38 * 1.0 +
             ((dVar45 * (double)local_368._8_8_ * 1.0 + dVar43 * (double)local_358._0_8_) -
             dVar39 * (double)local_368._0_8_);
        local_358._8_8_ =
             dVar41 * -1.0 +
             ((dVar45 * (double)local_368._0_8_ * -1.0 + dVar43 * (double)local_358._8_8_) -
             dVar39 * (double)local_368._8_8_);
        local_348 = local_348 * (double)CONCAT44(uVar33,uVar32);
        dStack_340 = dStack_340 * (double)CONCAT44(uVar35,uVar34);
        dVar36 = local_3b8 * local_3c8;
        dVar37 = dStack_3b0 * dStack_3c0;
        dVar48 = dStack_340 * dVar45 - dVar39 * local_348;
        dVar52 = dVar36 * dVar39 - dVar38 * dStack_340;
        dVar41 = local_348 * dVar38 - dVar45 * dVar36;
        dVar47 = dVar37 * dVar43 - dVar43 * dVar37;
        dVar52 = dVar52 + dVar52;
        dVar41 = dVar41 + dVar41;
        dVar48 = dVar48 + dVar48;
        dVar47 = dVar47 + dVar47;
        local_118 = local_3a8 + (dVar48 * dVar39 - dVar38 * dVar41) + dVar43 * dVar52 + local_348;
        dStack_110 = dStack_3a0 + (dVar52 * dVar38 - dVar48 * dVar45) + dVar43 * dVar41 + dStack_340
        ;
        local_108 = local_398 + (dVar41 * dVar45 - dVar39 * dVar52) + dVar43 * dVar48 + dVar36;
        dStack_330 = dStack_390 + (dVar47 * dVar43 - dVar47 * dVar43) + dVar43 * dVar47 + dVar37;
        dVar43 = dVar24 * (double)CONCAT44(uVar33,uVar32);
        dVar45 = dVar51 * (double)CONCAT44(uVar35,uVar34);
      }
      else {
        dVar47 = dVar39 + dVar39;
        dVar46 = dVar38 + dVar38;
        dVar27 = dVar45 * (dVar45 + dVar45);
        dVar41 = (dVar45 + dVar45) * dVar43;
        dVar36 = (dVar46 * dVar39 - dVar41) * local_3c8;
        dVar48 = (DAT_149934d80._8_8_ - (dVar38 * dVar46 + dVar27)) *
                 (double)CONCAT44(uVar35,uVar34);
        local_1a8 = (1.0 - (dVar27 + dVar39 * dVar47)) * local_3c8;
        dVar27 = local_3c8 * (double)local_378._0_8_;
        dVar37 = (dVar47 * dVar45 + dVar46 * dVar43) * (double)CONCAT44(uVar33,uVar32);
        local_1c8 = (dVar46 * dVar39 + dVar41) * (double)CONCAT44(uVar35,uVar34);
        local_1e8 = (dVar45 * dVar46 - dVar47 * dVar43) * (double)CONCAT44(uVar33,uVar32);
        local_1f8._8_4_ = SUB84(dVar37,0);
        local_1f8._0_8_ =
             ((double)DAT_149934d80 - (dVar38 * dVar46 + dVar39 * dVar47)) *
             (double)CONCAT44(uVar33,uVar32);
        local_1f8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar48,0);
        local_1d8._0_8_ = (dVar47 * dVar45 - dVar46 * dVar43) * (double)CONCAT44(uVar35,uVar34);
        local_1d8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar36,0);
        local_1b8._0_8_ = (dVar45 * dVar46 + dVar47 * dVar43) * local_3c8;
        local_1b8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        uStack_1a0 = 0;
        local_198 = local_3a8;
        dStack_190 = dStack_3a0;
        local_188 = local_398;
        uStack_180 = 0x3ff0000000000000;
        dVar46 = (double)local_368._8_8_ + (double)local_368._8_8_;
        dVar41 = (double)local_358._0_8_ + (double)local_358._0_8_;
        dVar38 = (double)local_368._0_8_ * ((double)local_368._0_8_ + (double)local_368._0_8_);
        local_228 = (1.0 - (dVar38 + (double)local_368._8_8_ * dVar46)) * (double)local_378._0_8_;
        dVar47 = ((double)local_368._0_8_ + (double)local_368._0_8_) * (double)local_358._8_8_;
        local_238 = (dVar46 * (double)local_358._8_8_ + (double)local_368._0_8_ * dVar41) *
                    (double)local_378._0_8_;
        dStack_230 = (dVar41 * (double)local_368._8_8_ - dVar47) * (double)local_378._0_8_;
        dVar43 = (double)CONCAT44(uVar33,uVar32) * dVar24;
        dVar45 = (double)CONCAT44(uVar35,uVar34) * dVar51;
        dVar38 = (DAT_149934d80._8_8_ - ((double)local_358._0_8_ * dVar41 + dVar38)) * dVar51;
        dVar39 = (dVar46 * (double)local_368._0_8_ + dVar41 * (double)local_358._8_8_) * dVar24;
        local_248 = (dVar41 * (double)local_368._8_8_ + dVar47) * dVar51;
        local_268 = ((double)local_368._0_8_ * dVar41 - dVar46 * (double)local_358._8_8_) * dVar24;
        local_278._8_4_ = SUB84(dVar39,0);
        local_278._0_8_ =
             ((double)DAT_149934d80 -
             ((double)local_358._0_8_ * dVar41 + (double)local_368._8_8_ * dVar46)) * dVar24;
        local_278._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar38,0);
        local_258._0_8_ =
             (dVar46 * (double)local_368._0_8_ - dVar41 * (double)local_358._8_8_) * dVar51;
        local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_218 = local_348;
        dStack_210 = dStack_340;
        local_208 = local_3b8;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar25._8_8_ = -(ulonglong)(0.0 <= dVar45);
        auVar25._0_8_ = -(ulonglong)(0.0 <= dVar43);
        auVar30 = blendvpd(_DAT_149936790,auVar26,auVar25);
        uVar23 = -(ulonglong)(0.0 <= dVar27);
        dVar24 = (double)(~uVar23 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar23 >> 0x20) & 0x3ff00000) << 0x20);
        dVar51 = auVar30._0_8_;
        local_168 = local_168 * dVar51;
        dStack_170 = dStack_170 * dVar51;
        local_178 = local_178 * dVar51;
        dVar51 = auVar30._8_8_;
        uStack_148 = (double)CONCAT44(uStack_148._4_4_,(undefined4)uStack_148) * dVar51;
        local_150 = (double)CONCAT44(local_150._4_4_,(undefined4)local_150) * dVar51;
        local_158 = dVar51 * local_158;
        local_128 = local_128 * dVar24;
        local_130 = local_130 * dVar24;
        local_138 = dVar24 * local_138;
        FUN_14481fd10(&local_2d8,&local_178);
        auVar31._0_8_ = local_2d8 * local_2d8;
        auVar31._8_8_ = dStack_2d0 * dStack_2d0;
        dVar24 = local_2c8 * local_2c8 + auVar31._0_8_;
        dVar51 = dStack_2c0 * dStack_2c0 + auVar31._8_8_;
        auVar4._8_4_ = SUB84(dVar51,0);
        auVar4._0_8_ = dVar24;
        auVar4._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        dVar38 = dVar24 + auVar4._8_8_;
        uVar23 = -(ulonglong)(9.99999993922529e-09 <= dVar24 + dVar51);
        auVar5._8_4_ = SUB84(dVar38,0);
        auVar5._0_8_ = dVar24 + dVar51;
        auVar5._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        auVar30 = sqrtpd(auVar31,auVar5);
        auVar30 = divpd(auVar26,auVar30);
        auVar40._0_8_ = auVar30._0_8_ * local_2c8;
        auVar40._8_8_ = auVar30._8_8_ * dStack_2c0;
        auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= dVar38);
        auVar26._0_8_ = uVar23;
        local_358 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar26);
        dVar46 = (double)((ulonglong)(local_2d8 * auVar30._0_8_) & uVar23);
        dVar27 = (double)((ulonglong)(dStack_2d0 * auVar30._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= dVar38));
        dStack_330 = 0.0;
        param_3 = (ulonglong)local_2dc;
        param_2 = local_2e0;
      }
      local_368._8_4_ = SUB84(dVar27,0);
      local_368._0_8_ = dVar46;
      local_368._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      local_328._8_4_ = SUB84(dVar45,0);
      local_328._0_8_ = dVar43;
      local_328._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
      local_318._8_4_ = SUB84((double)uVar7 * dVar42,0);
      local_318._0_8_ = (double)uVar13 * dVar6;
      local_318._12_4_ = (int)((ulonglong)((double)uVar7 * dVar42) >> 0x20);
      local_348 = local_118;
      dStack_340 = dStack_110;
      local_338 = local_108;
    }
    iVar11 = *(int *)(param_1 + 0x198) + -1;
    iVar15 = param_2 + 1;
    if (iVar11 <= param_2 + 1) {
      iVar15 = iVar11;
    }
    local_1f8._0_4_ = iVar15;
    uVar32 = *(undefined4 *)(local_300 + 0x7b8);
    dVar24 = pdVar21[0x10];
    dVar51 = pdVar21[0x11];
    dVar6 = pdVar21[0x12];
    dVar42 = pdVar21[0x13];
    dVar38 = pdVar21[0x14];
    *(double *)(local_300 + 0x830) = pdVar21[0xf];
    *(double *)(local_300 + 0x838) = dVar24;
    *(double *)(local_300 + 0x840) = dVar51;
    *(double *)(local_300 + 0x848) = dVar6;
    *(double *)(local_300 + 0x850) = dVar42;
    *(double *)(local_300 + 0x858) = dVar38;
    *(double *)(local_300 + 0x860) = pdVar21[0x15];
    local_3e0 = (double *)(local_2f8 + 0x98);
    local_3f0 = pdVar21 + 0x16;
    local_3f8 = (double *)(param_1 + 200);
    local_3e8 = local_3f0;
    FUN_1481e7ba2(param_3,local_3f8,uVar32,local_368);
    iVar11 = *(int *)(param_1 + 0x188);
    if (0 < (longlong)iVar11) {
      lVar18 = 0x40;
      lVar22 = 0;
      lVar17 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x180) + lVar22) != 0) {
          dVar24 = pdVar21[0x29];
          local_3f0 = (double *)((longlong)dVar24 + lVar18);
          pdVar3 = *(double **)(*(longlong *)(local_300 + 0x108) + lVar17);
          pdVar3[0x22] = *(double *)((longlong)dVar24 + -0x10 + lVar18);
          pdVar2 = (double *)((longlong)dVar24 + -0x40 + lVar18);
          dVar51 = *pdVar2;
          dVar6 = pdVar2[1];
          pdVar2 = (double *)((longlong)dVar24 + -0x30 + lVar18);
          dVar42 = *pdVar2;
          dVar38 = pdVar2[1];
          pdVar2 = (double *)((longlong)dVar24 + -0x20 + lVar18);
          dVar43 = pdVar2[1];
          pdVar3[0x20] = *pdVar2;
          pdVar3[0x21] = dVar43;
          pdVar3[0x1e] = dVar42;
          pdVar3[0x1f] = dVar38;
          pdVar3[0x1c] = dVar51;
          pdVar3[0x1d] = dVar6;
          *(undefined4 *)((longlong)pdVar3 + 0xcc) = *(undefined4 *)((longlong)dVar24 + -8 + lVar18)
          ;
          local_3f8 = (double *)(*(longlong *)(param_1 + 0x180) + lVar22);
          local_3e8 = (double *)
                      (*(longlong *)
                        (*(longlong *)(param_1 + 400) + 0x148 + (longlong)iVar15 * 0x160) + lVar18);
          local_3e0 = (double *)pdVar3[2];
          if (*(char *)(*(longlong *)(param_1 + 0x180) + 8 + lVar22) == '\x01') {
            pdVar2 = local_3f8;
            local_3f8 = pdVar3;
            pdVar3 = local_3f0;
            local_3f0 = pdVar2;
            pdVar9 = local_3e8;
            local_3e8 = pdVar3;
            local_3d8 = local_3e0;
            local_3e0 = pdVar9;
            local_3d0 = param_1 + 0x208;
            FUN_143abea6e(param_3,pdVar2,uVar32,local_368);
          }
          else {
            FUN_1481e7ba2(param_3,local_3f8,uVar32,local_368);
          }
        }
        lVar17 = lVar17 + 0x10;
        lVar18 = lVar18 + 0xd8;
        lVar22 = lVar22 + 0xb8;
      } while ((longlong)iVar11 * 0x10 != lVar17);
    }
    lVar17 = local_380;
    if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
      pdVar21 = &local_178;
      local_158 = 0.0;
      local_150._0_4_ = 0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      local_150._4_4_ = 0x80;
      uStack_148._0_4_ = 0xffffffff;
      uStack_148._4_4_ = 0;
      local_138 = 0.0;
      local_130 = (double)((ulonglong)local_130 & 0xffffffff00000000);
      local_278[0] = 1;
      local_2b8[0] = (code *)0x0;
      local_2a8 = (undefined8 *)FUN_14001cc68(0x40,8);
      *local_2a8 = &PTR_FUN_14ae1dfc0;
      local_2a8[1] = param_1;
      local_2a8[2] = pdVar21;
      local_2a8[3] = local_308;
      local_2a8[4] = local_278;
      local_2a8[5] = &local_2e0;
      local_2a8[6] = local_1f8;
      local_2a8[7] = &local_2dc;
      if (local_2a8 + 1 != (longlong *)0x0) {
        local_2b8[0] = FUN_143ac134a;
      }
      FUN_1480cfd19(local_300,local_2b8,1);
      cVar8 = local_278[0];
      local_130 = (double)((ulonglong)local_130 & 0xffffffff00000000);
      if (local_138 != 0.0) {
        FUN_1400020a8();
      }
      FUN_1481f2982(&local_178);
      if (cVar8 == '\0') goto LAB_1481e6d9e;
    }
    uVar23 = CONCAT71((int7)((ulonglong)pdVar21 >> 8),1);
    if ((longlong)*(int *)(lVar17 + 0x170) != 0) {
      lVar18 = *(longlong *)(lVar17 + 0x168);
      lVar22 = (longlong)*(int *)(lVar17 + 0x170) * 0xc;
      do {
        lVar12 = FUN_14479d2ce(lVar18);
        if (lVar12 != 0) {
          uVar13 = FUN_1458bcb8e();
          plVar14 = (longlong *)FUN_144718840(lVar12,uVar13);
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x30))
                      (plVar14,(longlong)*(int *)(lVar18 + 8) + *(longlong *)(lVar17 + 0x138),lVar17
                      );
          }
        }
        lVar18 = lVar18 + 0xc;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
  }
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_2f0 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_2f0)(local_2f0);
      LOCK();
      piVar1 = (int *)((longlong)local_2f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f0 + 0x10))(local_2f0);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 1481e7afa FUN_1481e7afa body=167 status=ok
// SIG undefined FUN_1481e7afa(void)

undefined8 * FUN_1481e7afa(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  plVar5 = *(longlong **)(param_2 + 0x28);
  if (plVar5 == (longlong *)0x0) {
    param_1[2] = uVar2;
    goto LAB_1481e7b64;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar3 = (longlong *)param_1[3];
  param_1[2] = uVar2;
  if (plVar5 == plVar3) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1481e7b64;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1481e7b64;
    lVar4 = *plVar5;
  }
  else {
    param_1[3] = plVar5;
    if (plVar3 == (longlong *)0x0) goto LAB_1481e7b64;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1481e7b64;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1481e7b64;
    lVar4 = *plVar3;
    plVar5 = plVar3;
  }
  (**(code **)(lVar4 + 0x10))(plVar5);
LAB_1481e7b64:
  param_1[4] = *(undefined8 *)(param_1[2] + 0x110);
  *param_1 = *(undefined8 *)(param_1[2] + 0x10);
  return param_1;
}



// FUNCTION 1481e7ba2 FUN_1481e7ba2 body=785 status=ok
// SIG undefined FUN_1481e7ba2(void)

void FUN_1481e7ba2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,uint *param_6,undefined8 param_7,longlong param_8)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined2 local_100;
  undefined8 *local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  uint *local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar6 = *(uint *)(param_8 + 0xac);
  if (*param_6 < *(uint *)(param_8 + 0xac)) {
    uVar6 = *param_6;
  }
  uVar9 = (ulonglong)uVar6;
  lVar4 = FUN_144a73d22(param_8,1);
  FUN_14009337e(lVar4,uVar9,0);
  *(uint *)(lVar4 + 0x120) = uVar6;
  uVar8 = *param_6;
  if (uVar8 != 0) {
    local_98 = param_8;
    lVar7 = *(longlong *)(param_5 + 0x70);
    local_c0 = param_5;
    uVar11 = (ulonglong)*(ushort *)(param_5 + 0x20);
    local_c8 = param_6;
    local_a8 = param_7;
    local_b8 = lVar4;
    local_b0 = uVar9;
    local_a0 = param_4;
    if (uVar11 != 0) {
      iVar2 = *(int *)(lVar4 + 0x128);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar5 = (uint)*(ushort *)(lVar7 + uVar9 * 2);
        if (uVar5 != 0xffff) {
          memcpy((void *)((ulonglong)(uVar5 * iVar2) + lVar4),
                 (void *)(uVar10 * 4 + *(longlong *)(local_c8 + 4)),(ulonglong)(uVar6 * 4));
        }
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)((int)uVar10 + uVar8);
      } while (uVar11 != uVar9);
      lVar7 = *(longlong *)(local_c0 + 0x70);
      uVar8 = *local_c8;
      uVar6 = (uint)local_b0;
    }
    uVar9 = (ulonglong)*(ushort *)(local_c0 + 0x22);
    if (uVar9 != 0) {
      iVar2 = *(int *)(local_b8 + 0x130);
      lVar4 = *(longlong *)(local_b8 + 0x38);
      uVar10 = 0;
      do {
        uVar5 = (uint)*(ushort *)(lVar7 + uVar11 * 2);
        if (uVar5 != 0xffff) {
          memcpy((void *)((ulonglong)(uVar5 * iVar2) + lVar4),
                 (void *)(uVar10 * 2 + *(longlong *)(local_c8 + 8)),(ulonglong)(uVar6 * 2));
        }
        uVar10 = (ulonglong)((int)uVar10 + uVar8);
        uVar11 = uVar11 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      lVar7 = *(longlong *)(local_c0 + 0x70);
      uVar8 = *local_c8;
    }
    uVar1 = *(ushort *)(local_c0 + 0x24);
    if ((ulonglong)uVar1 != 0) {
      iVar2 = *(int *)(local_b8 + 300);
      lVar4 = *(longlong *)(local_b8 + 0x28);
      iVar3 = (int)local_b0;
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar6 = (uint)*(ushort *)(uVar11 * 2 + lVar7 + uVar9 * 2);
        if (uVar6 != 0xffff) {
          memcpy((void *)((ulonglong)(uVar6 * iVar2) + lVar4),
                 (void *)(uVar10 * 4 + *(longlong *)(local_c8 + 0xc)),(ulonglong)(uint)(iVar3 * 4));
        }
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)((int)uVar10 + uVar8);
      } while (uVar1 != uVar9);
    }
    lVar4 = local_b8;
    param_6 = local_c8;
    local_d8 = *(undefined4 *)(local_b8 + 0x128);
    local_e0 = *(undefined8 *)(local_b8 + 0x18);
    local_90 = *(undefined8 *)(local_c0 + 0x80);
    local_f8 = &local_90;
    local_88 = *(undefined4 *)(local_c0 + 0x88);
    local_100 = *(undefined2 *)(local_c0 + 0x50);
    local_e8 = local_a8;
    local_f0 = local_c8;
    local_108 = local_a0;
    FUN_1481f0c64(local_b0,param_1,param_2,param_3);
    param_8 = local_98;
  }
  *(uint *)(lVar4 + 0x138) = param_6[1];
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144b35292(param_8,1);
  return;
}



// FUNCTION 1481e7eb4 FUN_1481e7eb4 body=61 status=ok
// SIG undefined FUN_1481e7eb4(void)

longlong FUN_1481e7eb4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_14018d992();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1481e7ef2 FUN_1481e7ef2 body=122 status=ok
// SIG undefined FUN_1481e7ef2(void)

void FUN_1481e7ef2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1481f3706(param_1,iVar1);
    }
    FUN_1481f36cd((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1481f379a(param_1,param_2,iVar1 - param_2);
    FUN_1481f3800(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481e7f6d FUN_1481e7f6d body=181 status=ok
// SIG undefined FUN_1481e7f6d(void)

void FUN_1481e7f6d(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_4 + 0x18)) {
    FUN_140056680(&local_38,param_3);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar1,puVar4);
    uVar3 = FUN_1481f38ae(param_2,uVar2,&local_38);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14090dd64(uVar3,param_1);
    FUN_1402ae190(uVar3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e8023 FUN_1481e8023 body=228 status=ok
// SIG undefined FUN_1481e8023(void)

void FUN_1481e8023(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_4 != 0) && (puVar1 = *(undefined8 **)(param_4 + 0xc0), puVar1 != (undefined8 *)0x0))
     && ((**(code **)*puVar1)(puVar1,&local_40), 0 < local_38)) {
    FUN_140056680(&local_40,param_3);
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    iVar2 = local_38 + -1;
    if (local_38 == 0) {
      iVar2 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar2,puVar5);
    uVar4 = FUN_1481f38ae(param_2,uVar3,&local_40);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14090dd64(uVar4,param_1);
    FUN_14072c20e(param_4 + 0x38,uVar4,0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481e8108 FUN_1481e8108 body=133 status=ok
// SIG undefined FUN_1481e8108(void)

void FUN_1481e8108(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  
  if (0 < *(int *)(param_4 + 0x18)) {
    iVar1 = (int)param_3[1];
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar2,puVar5);
    uVar4 = FUN_1481f3f7e(param_2,uVar3,param_3);
    FUN_14090dd64(uVar4,param_1);
    FUN_1402ae190(uVar4,param_4);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481e818d FUN_1481e818d body=199 status=ok
// SIG undefined FUN_1481e818d(void)

void FUN_1481e818d(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    local_50 = (void *)0x0;
    local_48 = (int)param_3[1];
    lVar1 = (longlong)local_48;
    _Src = (void *)*param_3;
    if (lVar1 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar1 * 2);
    }
    FUN_1481e8108(param_1,param_2,&local_50,param_4 + 0x78);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e8255 FUN_1481e8255 body=207 status=ok
// SIG undefined FUN_1481e8255(void)

void FUN_1481e8255(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_4 != 0) && (puVar2 = *(undefined8 **)(param_4 + 0xc0), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,local_40);
    if (0 < local_38) {
      iVar1 = (int)param_3[1];
      if (iVar1 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_3;
      }
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar3,puVar6);
      uVar5 = FUN_1481f3f7e(param_2,uVar4,param_3);
      FUN_14090dd64(uVar5,param_1);
      FUN_14072c20e(param_4 + 0x38,uVar5,0,0);
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e832a FUN_1481e832a body=727 status=ok
// SIG undefined FUN_1481e832a(void)

void FUN_1481e832a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined1 local_140 [88];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  longlong local_c0;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_90[0] = 0;
  local_8c = 0x13;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_b4 = 2;
  uStack_b0 = 0x10;
  uStack_ac = 1;
  uStack_a8 = 0xffffffff;
  local_a4 = 10;
  local_9c = 0x3c887a8d;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  uVar1 = local_98;
  plVar2 = &local_c0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uStack_d8 = (undefined4)local_a4;
  uStack_d4 = local_a4._4_4_;
  uStack_d0 = local_9c;
  local_e8 = local_b4;
  uStack_e4 = uStack_b0;
  uStack_e0 = uStack_ac;
  uStack_dc = uStack_a8;
  FUN_148070d3a(local_140,local_90);
  local_148 = plVar2;
  uVar1 = FUN_1481e955e(local_38,local_140,uVar1,&local_e8);
  FUN_1459becf2(local_140);
  *param_3 = uVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1459becf2(local_90);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e8608 FUN_1481e8608 body=967 status=ok
// SIG undefined FUN_1481e8608(void)

void FUN_1481e8608(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined4 local_130;
  undefined1 local_128 [88];
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [4];
  undefined4 local_ac;
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
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b0[0] = 0;
  local_ac = 0x13;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  plVar6 = &local_c0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_c4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  local_c8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  iVar2 = local_cc;
  local_d0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  uVar5 = local_b8;
  uVar4 = local_c4;
  uVar3 = local_c8;
  uVar1 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148070d3a(local_128,local_b0);
  local_138 = iVar2 != 0;
  local_130 = uVar1;
  local_140 = uVar3;
  local_148 = uVar4;
  uVar5 = FUN_1481e89d0(local_58,local_128,uVar5,plVar6);
  *param_3 = uVar5;
  if ((DAT_14c950c29 == '\x01') && (*plVar6 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1459becf2(local_b0);
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e89d0 FUN_1481e89d0 body=179 status=ok
// SIG undefined FUN_1481e89d0(void)

undefined8
FUN_1481e89d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,int param_6,byte param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  uint local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 2;
  local_28 = 0xaffffffff;
  if (param_5 < 2) {
    param_5 = 1;
  }
  local_2c = 1;
  if (1 < param_6) {
    local_2c = param_6;
  }
  local_20 = (uint)param_7;
  local_1c = param_8;
  local_48 = param_4;
  local_30 = param_5;
  uVar1 = FUN_1481e955e(param_8,param_2,param_3,&local_34);
  FUN_1459becf2(param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e8a8a FUN_1481e8a8a body=871 status=ok
// SIG undefined FUN_1481e8a8a(void)

void FUN_1481e8a8a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined1 local_128 [92];
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [4];
  undefined4 local_ac;
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
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b0[0] = 0;
  local_ac = 0x13;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  plVar5 = &local_c0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_c4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  local_c8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  iVar2 = local_c8;
  local_cc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  uVar4 = local_b8;
  uVar3 = local_c4;
  uVar1 = local_cc;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148070d3a(local_128,local_b0);
  local_140 = iVar2 != 0;
  local_138 = uVar1;
  local_148 = uVar3;
  uVar4 = FUN_1481e8df2(local_58,local_128,uVar4,plVar5);
  *param_3 = uVar4;
  if ((DAT_14c950c29 == '\x01') && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1459becf2(local_b0);
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e8df2 FUN_1481e8df2 body=162 status=ok
// SIG undefined FUN_1481e8df2(void)

undefined8
FUN_1481e8df2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,byte param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_34;
  int local_2c;
  undefined8 local_28;
  uint local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 2;
  local_28 = 0xaffffffff;
  local_2c = 1;
  if (1 < param_5) {
    local_2c = param_5;
  }
  local_20 = (uint)param_6;
  local_1c = param_7;
  local_48 = param_4;
  uVar1 = FUN_1481e955e(param_7,param_2,param_3,&local_34);
  FUN_1459becf2(param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e8ea4 FUN_1481e8ea4 body=774 status=ok
// SIG undefined FUN_1481e8ea4(void)

void FUN_1481e8ea4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined1 local_110 [88];
  undefined4 local_b8;
  int local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_a0[0] = 0;
  local_9c = 0x13;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  plVar5 = &local_b0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  iVar2 = local_b4;
  local_b8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar3 = local_a8;
  uVar1 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148070d3a(local_110,local_a0);
  local_128 = iVar2 != 0;
  local_120 = uVar1;
  uVar4 = FUN_1481e91ac(local_48,local_110,uVar3,plVar5);
  *param_3 = uVar4;
  if ((DAT_14c950c29 == '\x01') && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1459becf2(local_a0);
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e91ac FUN_1481e91ac body=256 status=ok
// SIG undefined FUN_1481e91ac(void)

undefined4
FUN_1481e91ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined1 local_110 [88];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 2;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = 0;
  local_80 = 0x1000000002;
  uStack_78 = 0xffffffff00000001;
  local_70 = 10;
  uStack_6c = 0;
  uStack_68 = 0x3c887a8d;
  uStack_64 = 0;
  local_60 = 0;
  FUN_148070d3a(local_110);
  local_118 = param_6;
  local_120 = param_5;
  local_128 = param_4;
  uVar1 = FUN_148070ee2(&local_b8,param_1,local_110,param_3);
  FUN_1459ba786(&local_b8);
  FUN_1459becf2(param_2);
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e92ae FUN_1481e92ae body=189 status=ok
// SIG undefined FUN_1481e92ae(void)

void FUN_1481e92ae(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
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
  uVar2 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1481e9696(uVar2);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e9370 FUN_1481e9370 body=186 status=ok
// SIG undefined FUN_1481e9370(void)

void FUN_1481e9370(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined1 local_b0 [88];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_147b85f42();
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_1481e942c(param_1 + 0x68,local_38,param_1);
  local_58 = *(undefined4 *)(param_1 + 0xb8);
  uStack_54 = *(undefined4 *)(param_1 + 0xbc);
  uStack_50 = *(undefined4 *)(param_1 + 0xc0);
  uStack_4c = *(undefined4 *)(param_1 + 0xc4);
  uStack_48 = *(undefined4 *)(param_1 + 200);
  uStack_44 = *(undefined4 *)(param_1 + 0xcc);
  uStack_40 = *(undefined4 *)(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_148070d3a(local_b0,param_1 + 0xd8);
  local_b8 = &local_58;
  FUN_148070a7a(param_1 + 0x58,*(undefined8 *)(param_1 + 0x30),local_b0,uVar1);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e942c FUN_1481e942c body=244 status=ok
// SIG undefined FUN_1481e942c(void)

undefined8 FUN_1481e942c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ae1e0c0;
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
  *local_38 = &PTR_FUN_14ae1dfe0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1481e9522;
  FUN_1481f41fa(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e9522 FUN_1481e9522 body=59 status=ok
// SIG undefined FUN_1481e9522(void)

void FUN_1481e9522(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001481e954c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))(param_1);
  return;
}



// FUNCTION 1481e955e FUN_1481e955e body=163 status=ok
// SIG undefined FUN_1481e955e(void)

longlong FUN_1481e955e(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                      longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
  lVar9 = FUN_1481e9601(DAT_14c951640);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  *(undefined4 *)(lVar9 + 0xb8) = *param_4;
  *(undefined4 *)(lVar9 + 0xbc) = uVar1;
  *(undefined4 *)(lVar9 + 0xc0) = uVar2;
  *(undefined4 *)(lVar9 + 0xc4) = uVar3;
  *(undefined4 *)(lVar9 + 0xc4) = uVar4;
  *(undefined4 *)(lVar9 + 200) = uVar5;
  *(undefined4 *)(lVar9 + 0xcc) = uVar6;
  *(undefined4 *)(lVar9 + 0xd0) = uVar7;
  FUN_1481e36c2(lVar9 + 0xd8,param_2);
  if (param_1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(lVar9 + 0x30) = param_1;
  if ((param_3 != 0) && ((bVar8 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(lVar9 + 0x38) = param_3;
  *param_5 = param_1;
  return lVar9;
}



// FUNCTION 1481e9601 FUN_1481e9601 body=148 status=ok
// SIG undefined FUN_1481e9601(void)

undefined8 FUN_1481e9601(undefined8 param_1)

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
  uVar1 = FUN_1458d51d4();
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



// FUNCTION 1481e9696 FUN_1481e9696 body=148 status=ok
// SIG undefined FUN_1481e9696(void)

undefined8 FUN_1481e9696(undefined8 param_1)

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
  uVar1 = FUN_14110c9fe();
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



// FUNCTION 1481e972c FUN_1481e972c body=63 status=ok
// SIG undefined FUN_1481e972c(void)

undefined8 * FUN_1481e972c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae0f340;
  FUN_1412b7f2a(param_1 + 0x2e);
  FUN_140137a40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481e976c FUN_1481e976c body=38 status=ok
// SIG undefined FUN_1481e976c(void)

undefined8 FUN_1481e976c(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481e9792 FUN_1481e9792 body=32 status=ok
// SIG undefined FUN_1481e9792(void)

undefined8 FUN_1481e9792(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FNiagaraResourceArrayWriter");
  return param_2;
}



// FUNCTION 1481e97b2 FUN_1481e97b2 body=45 status=ok
// SIG undefined FUN_1481e97b2(void)

longlong FUN_1481e97b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1401b5028(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481e97e2 FUN_1481e97e2 body=38 status=ok
// SIG undefined FUN_1481e97e2(void)

undefined8 FUN_1481e97e2(undefined8 param_1,int param_2)

{
  FUN_14006c2ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481e9812 FUN_1481e9812 body=36 status=ok
// SIG undefined FUN_1481e9812(void)

void FUN_1481e9812(longlong param_1)

{
  FUN_140090dba();
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
  return;
}



// FUNCTION 1481e9836 FUN_1481e9836 body=36 status=ok
// SIG undefined FUN_1481e9836(void)

void FUN_1481e9836(longlong param_1)

{
  FUN_143aa3ee4();
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
  return;
}



// FUNCTION 1481e985a FUN_1481e985a body=38 status=ok
// SIG undefined FUN_1481e985a(void)

undefined8 FUN_1481e985a(undefined8 param_1,int param_2)

{
  FUN_14006c2ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481e988a FUN_1481e988a body=37 status=ok
// SIG undefined FUN_1481e988a(void)

void FUN_1481e988a(longlong param_1)

{
  FUN_143aa3ee4();
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfe;
  return;
}



// FUNCTION 1481e98b0 FUN_1481e98b0 body=54 status=ok
// SIG undefined FUN_1481e98b0(void)

undefined8 * FUN_1481e98b0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_14ae09a28;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481e98e6 FUN_1481e98e6 body=45 status=ok
// SIG undefined FUN_1481e98e6(void)

void FUN_1481e98e6(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if (param_3 != (longlong *)0x0 && param_2 == 0) {
    uVar1 = (**(code **)(*param_3 + 0x2f0))(param_3);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}



// FUNCTION 1481e9988 FUN_1481e9988 body=59 status=ok
// SIG undefined FUN_1481e9988(void)

undefined8 FUN_1481e9988(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e9af8 FUN_1481e9af8 body=59 status=ok
// SIG undefined FUN_1481e9af8(void)

undefined8 FUN_1481e9af8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e9c9c FUN_1481e9c9c body=63 status=ok
// SIG undefined FUN_1481e9c9c(void)

undefined1 FUN_1481e9c9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481e9dc4(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 1481e9d04 FUN_1481e9d04 body=59 status=ok
// SIG undefined FUN_1481e9d04(void)

undefined8 FUN_1481e9d04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481e9d50 FUN_1481e9d50 body=38 status=ok
// SIG undefined FUN_1481e9d50(void)

void FUN_1481e9d50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_140439908(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1481e9dc4 FUN_1481e9dc4 body=209 status=ok
// SIG undefined FUN_1481e9dc4(void)

longlong * FUN_1481e9dc4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_148061742(param_1 + 1,param_2 + 1);
  FUN_1481e9e96(param_1 + 3,param_2 + 3);
  FUN_140439aac(param_1 + 5,param_2 + 5);
  FUN_1481e9ef0(param_1 + 0xf,param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  FUN_14054c6c4(param_1 + 0x13,param_2 + 0x13);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x15,param_2 + 0x15);
  }
  *(int *)(param_1 + 0x1a) = (int)param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  *(char *)(param_1 + 0x1b) = (char)param_2[0x1b];
  return param_1;
}



// FUNCTION 1481e9e96 FUN_1481e9e96 body=89 status=ok
// SIG undefined FUN_1481e9e96(void)

undefined8 * FUN_1481e9e96(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481e9f48(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481e9ef0 FUN_1481e9ef0 body=88 status=ok
// SIG undefined FUN_1481e9ef0(void)

undefined8 * FUN_1481e9ef0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481e9fbc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481e9f48 FUN_1481e9f48 body=115 status=ok
// SIG undefined FUN_1481e9f48(void)

void FUN_1481e9f48(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481e9fbc FUN_1481e9fbc body=114 status=ok
// SIG undefined FUN_1481e9fbc(void)

void FUN_1481e9fbc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 6,2);
    iVar2 = (int)(uVar1 / 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,6,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481ea030 FUN_1481ea030 body=72 status=ok
// SIG undefined FUN_1481ea030(void)

void FUN_1481ea030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_144a5dc74(param_2 + 5);
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 4) = 0x1e;
  return;
}



// FUNCTION 1481ea078 FUN_1481ea078 body=72 status=ok
// SIG undefined FUN_1481ea078(void)

void FUN_1481ea078(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_144a5dc74(param_2 + 5);
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 4) = 0x1e;
  return;
}



// FUNCTION 1481ea0de FUN_1481ea0de body=54 status=ok
// SIG undefined FUN_1481ea0de(void)

undefined1 FUN_1481ea0de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481ea232(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1481ea13c FUN_1481ea13c body=59 status=ok
// SIG undefined FUN_1481ea13c(void)

undefined8 FUN_1481ea13c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ea182 FUN_1481ea182 body=34 status=ok
// SIG undefined FUN_1481ea182(void)

void FUN_1481ea182(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1481ea1f2(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1481ea1f2 FUN_1481ea1f2 body=63 status=ok
// SIG undefined FUN_1481ea1f2(void)

void FUN_1481ea1f2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481ea232 FUN_1481ea232 body=132 status=ok
// SIG undefined FUN_1481ea232(void)

undefined8 * FUN_1481ea232(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar1 = (longlong *)param_2[5];
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  return param_1;
}



// FUNCTION 1481ea2b8 FUN_1481ea2b8 body=51 status=ok
// SIG undefined FUN_1481ea2b8(void)

void FUN_1481ea2b8(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 1481ea2ec FUN_1481ea2ec body=48 status=ok
// SIG undefined FUN_1481ea2ec(void)

void FUN_1481ea2ec(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481ea332 FUN_1481ea332 body=99 status=ok
// SIG undefined FUN_1481ea332(void)

undefined8 FUN_1481ea332(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447a122a();
      FUN_144a787a6(param_2 + lVar2 + 0x20,param_3 + lVar2 + 0x20);
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ea3be FUN_1481ea3be body=59 status=ok
// SIG undefined FUN_1481ea3be(void)

undefined8 FUN_1481ea3be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ea45c FUN_1481ea45c body=52 status=ok
// SIG undefined FUN_1481ea45c(void)

void FUN_1481ea45c(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1481ea500 FUN_1481ea500 body=126 status=ok
// SIG undefined FUN_1481ea500(void)

undefined8 FUN_1481ea500(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined8 uVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar15);
      lVar2 = param_2 + 0x38 + lVar15;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 0xc);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[8];
      *(undefined4 *)(lVar2 + -0x14) = uVar11;
      *(undefined4 *)(lVar2 + -0x10) = uVar12;
      *(undefined4 *)(lVar2 + -0xc) = uVar13;
      *(undefined4 *)(lVar2 + -0x28) = uVar7;
      *(undefined4 *)(lVar2 + -0x24) = uVar8;
      *(undefined4 *)(lVar2 + -0x20) = uVar9;
      *(undefined4 *)(lVar2 + -0x1c) = uVar10;
      *(undefined4 *)(lVar2 + -0x38) = uVar3;
      *(undefined4 *)(lVar2 + -0x34) = uVar4;
      *(undefined4 *)(lVar2 + -0x30) = uVar5;
      *(undefined4 *)(lVar2 + -0x2c) = uVar6;
      FUN_1447a122a(lVar2,puVar1 + 0xe);
      uVar14 = *(undefined8 *)(puVar1 + 0x14);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x12);
      *(undefined8 *)(lVar2 + 0x18) = uVar14;
      lVar15 = lVar15 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ea5a6 FUN_1481ea5a6 body=74 status=ok
// SIG undefined FUN_1481ea5a6(void)

void FUN_1481ea5a6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1480423fa(param_2 + 0x38);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ea5fc FUN_1481ea5fc body=38 status=ok
// SIG undefined FUN_1481ea5fc(void)

void FUN_1481ea5fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1481ea6ba FUN_1481ea6ba body=60 status=ok
// SIG undefined FUN_1481ea6ba(void)

undefined8 FUN_1481ea6ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1481ea71a FUN_1481ea71a body=112 status=ok
// SIG undefined FUN_1481ea71a(void)

bool FUN_1481ea71a(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,9);
  if (uVar1 == local_2c) {
    FUN_140077068(*(undefined8 *)(*param_3 + 8),param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ea78c FUN_1481ea78c body=59 status=ok
// SIG undefined FUN_1481ea78c(void)

undefined8 FUN_1481ea78c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ea7d2 FUN_1481ea7d2 body=37 status=ok
// SIG undefined FUN_1481ea7d2(void)

void FUN_1481ea7d2(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1481ea874 FUN_1481ea874 body=63 status=ok
// SIG undefined FUN_1481ea874(void)

undefined1 FUN_1481ea874(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481ea99c(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1481ea8dc FUN_1481ea8dc body=59 status=ok
// SIG undefined FUN_1481ea8dc(void)

undefined8 FUN_1481ea8dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ea928 FUN_1481ea928 body=38 status=ok
// SIG undefined FUN_1481ea928(void)

void FUN_1481ea928(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_1401b516e(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1481ea99c FUN_1481ea99c body=313 status=ok
// SIG undefined FUN_1481ea99c(void)

longlong FUN_1481ea99c(longlong param_1,longlong param_2)

{
  FUN_1447a122a();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_1447a122a(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_1481eaad6(param_1 + 0x70,param_2 + 0x70);
  FUN_1447a122a(param_1 + 0x80,param_2 + 0x80);
  FUN_14805ff7e(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  FUN_1481eab34(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1481eab92(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1481eabf0(param_1 + 200,param_2 + 200);
  FUN_1481eac4e(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1481eacac(param_1 + 0xe8,param_2 + 0xe8);
  FUN_1481ead06(param_1 + 0xf8,param_2 + 0xf8);
  FUN_1481ead64(param_1 + 0x108,param_2 + 0x108);
  FUN_1480541d0(param_1 + 0x118,param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  FUN_1407941b6(param_1 + 0x178,param_2 + 0x178);
  FUN_1447a122a(param_1 + 0x188,param_2 + 0x188);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  return param_1;
}



// FUNCTION 1481eaad6 FUN_1481eaad6 body=93 status=ok
// SIG undefined FUN_1481eaad6(void)

undefined8 * FUN_1481eaad6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b5405(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481eadbc(param_1,iVar1);
      FUN_1481eae2f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481eab34 FUN_1481eab34 body=93 status=ok
// SIG undefined FUN_1481eab34(void)

undefined8 * FUN_1481eab34(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b5444(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481eaf14(param_1,iVar1);
      FUN_1481eaf87(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481eab92 FUN_1481eab92 body=93 status=ok
// SIG undefined FUN_1481eab92(void)

undefined8 * FUN_1481eab92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b535f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481eb0a6(param_1,iVar1);
      FUN_1481eb119(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481eabf0 FUN_1481eabf0 body=93 status=ok
// SIG undefined FUN_1481eabf0(void)

undefined8 * FUN_1481eabf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b5485(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481eb1ee(param_1,iVar1);
      FUN_1481eb25d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481eac4e FUN_1481eac4e body=93 status=ok
// SIG undefined FUN_1481eac4e(void)

undefined8 * FUN_1481eac4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14006c0c4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481eb3dc(param_1,iVar1);
      FUN_1481eb43e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481eacac FUN_1481eacac body=89 status=ok
// SIG undefined FUN_1481eacac(void)

undefined8 * FUN_1481eacac(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481eb480(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481ead06 FUN_1481ead06 body=93 status=ok
// SIG undefined FUN_1481ead06(void)

undefined8 * FUN_1481ead06(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b53d4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481eb4f4(param_1,iVar1);
      FUN_1481eb556(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481ead64 FUN_1481ead64 body=88 status=ok
// SIG undefined FUN_1481ead64(void)

undefined8 * FUN_1481ead64(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481eb5dc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481eadbc FUN_1481eadbc body=115 status=ok
// SIG undefined FUN_1481eadbc(void)

void FUN_1481eadbc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481eae2f FUN_1481eae2f body=52 status=ok
// SIG undefined FUN_1481eae2f(void)

void FUN_1481eae2f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481eae64(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1481eae64 FUN_1481eae64 body=175 status=ok
// SIG undefined FUN_1481eae64(void)

undefined8 * FUN_1481eae64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1481eaf14 FUN_1481eaf14 body=115 status=ok
// SIG undefined FUN_1481eaf14(void)

void FUN_1481eaf14(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481eaf87 FUN_1481eaf87 body=52 status=ok
// SIG undefined FUN_1481eaf87(void)

void FUN_1481eaf87(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481eafbc(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1481eafbc FUN_1481eafbc body=233 status=ok
// SIG undefined FUN_1481eafbc(void)

undefined8 * FUN_1481eafbc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar3 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[7] = param_2[7];
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar3 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar3,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1481eb0a6 FUN_1481eb0a6 body=115 status=ok
// SIG undefined FUN_1481eb0a6(void)

void FUN_1481eb0a6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481eb119 FUN_1481eb119 body=52 status=ok
// SIG undefined FUN_1481eb119(void)

void FUN_1481eb119(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481eb14e(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 1481eb14e FUN_1481eb14e body=160 status=ok
// SIG undefined FUN_1481eb14e(void)

undefined8 * FUN_1481eb14e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[3] = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1481eb1ee FUN_1481eb1ee body=111 status=ok
// SIG undefined FUN_1481eb1ee(void)

void FUN_1481eb1ee(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481eb25d FUN_1481eb25d body=52 status=ok
// SIG undefined FUN_1481eb25d(void)

void FUN_1481eb25d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481eb292(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 1481eb292 FUN_1481eb292 body=330 status=ok
// SIG undefined FUN_1481eb292(void)

undefined4 * FUN_1481eb292(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1);
  }
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1480614a0(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_14181d5f4(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 * 0xc);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_14181d5f4(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 1481eb3dc FUN_1481eb3dc body=98 status=ok
// SIG undefined FUN_1481eb3dc(void)

void FUN_1481eb3dc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481eb43e FUN_1481eb43e body=66 status=ok
// SIG undefined FUN_1481eb43e(void)

void FUN_1481eb43e(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1412f8090(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 1481eb480 FUN_1481eb480 body=115 status=ok
// SIG undefined FUN_1481eb480(void)

void FUN_1481eb480(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481eb4f4 FUN_1481eb4f4 body=98 status=ok
// SIG undefined FUN_1481eb4f4(void)

void FUN_1481eb4f4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481eb556 FUN_1481eb556 body=134 status=ok
// SIG undefined FUN_1481eb556(void)

void FUN_1481eb556(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_2 + 1);
      puVar2[-2] = *param_2;
      *puVar2 = 0;
      iVar1 = *(int *)(param_2 + 3);
      _Src = (void *)param_2[2];
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_14181d5f4(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 0xc);
      }
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1481eb5dc FUN_1481eb5dc body=98 status=ok
// SIG undefined FUN_1481eb5dc(void)

void FUN_1481eb5dc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481eb688 FUN_1481eb688 body=59 status=ok
// SIG undefined FUN_1481eb688(void)

undefined8 FUN_1481eb688(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481eb772 FUN_1481eb772 body=59 status=ok
// SIG undefined FUN_1481eb772(void)

undefined8 FUN_1481eb772(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481eb814 FUN_1481eb814 body=78 status=ok
// SIG undefined FUN_1481eb814(void)

longlong * FUN_1481eb814(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b5405(*param_1,(int)param_1[1]);
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



// FUNCTION 1481eb862 FUN_1481eb862 body=78 status=ok
// SIG undefined FUN_1481eb862(void)

longlong * FUN_1481eb862(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b5444(*param_1,(int)param_1[1]);
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



// FUNCTION 1481eb8b0 FUN_1481eb8b0 body=78 status=ok
// SIG undefined FUN_1481eb8b0(void)

longlong * FUN_1481eb8b0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b535f(*param_1,(int)param_1[1]);
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



// FUNCTION 1481eb8fe FUN_1481eb8fe body=78 status=ok
// SIG undefined FUN_1481eb8fe(void)

longlong * FUN_1481eb8fe(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b5485(*param_1,(int)param_1[1]);
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



// FUNCTION 1481eb94c FUN_1481eb94c body=78 status=ok
// SIG undefined FUN_1481eb94c(void)

longlong * FUN_1481eb94c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14006c0c4(*param_1,(int)param_1[1]);
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



// FUNCTION 1481eb99a FUN_1481eb99a body=78 status=ok
// SIG undefined FUN_1481eb99a(void)

longlong * FUN_1481eb99a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b53d4(*param_1,(int)param_1[1]);
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



// FUNCTION 1481eb9e8 FUN_1481eb9e8 body=181 status=ok
// SIG undefined FUN_1481eb9e8(void)

longlong FUN_1481eb9e8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1481ebaec();
  FUN_1410e5bda(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_1481ebb3a(param_1 + 0x28,param_2 + 0x28);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    plVar2 = *(longlong **)(param_2 + 0x50);
    plVar3 = *(longlong **)(param_1 + 0x50);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(longlong **)(param_1 + 0x50) = plVar2;
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
  }
  return param_1;
}



// FUNCTION 1481eba9e FUN_1481eba9e body=78 status=ok
// SIG undefined FUN_1481eba9e(void)

longlong * FUN_1481eba9e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b538e(*param_1,(int)param_1[1]);
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



// FUNCTION 1481ebaec FUN_1481ebaec body=78 status=ok
// SIG undefined FUN_1481ebaec(void)

longlong * FUN_1481ebaec(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b55b3(*param_1,(int)param_1[1]);
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



// FUNCTION 1481ebb3a FUN_1481ebb3a body=78 status=ok
// SIG undefined FUN_1481ebb3a(void)

longlong * FUN_1481ebb3a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401b5582(*param_1,(int)param_1[1]);
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



// FUNCTION 1481ebbf4 FUN_1481ebbf4 body=59 status=ok
// SIG undefined FUN_1481ebbf4(void)

undefined8 FUN_1481ebbf4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


